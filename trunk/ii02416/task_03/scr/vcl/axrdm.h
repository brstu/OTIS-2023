/////////////////////////////////////////////////////////////////////////////
// AXRDM.H - Remote Data Module Wrapper Classes
//
// $Rev: 61335 $
//
// Copyright(c) 1995-2009 Embarcadero Technologies, Inc.
/////////////////////////////////////////////////////////////////////////////
#if !defined(_AXRDM_H)
#define _AXRDM_H

#include <tchar.h>
#include <Datasnap.DataBkr.hpp>
#include <utilcls.h>

#include <axbase.h>


#define REMOTEDATAMODULE_IMPL(cppClass, CoClass, VclClass, intf) \
  public CComObjectRootEx<CComObjectThreadModel>,                \
  public CComCoClass<cppClass, &CLSID_##CoClass>,                \
  public IAppServerImpl<VclClass, cppClass, intf, &IID_##intf, LIBID_OF_##CoClass>


/* IAppServer support */
/* IAppServerImpl is essentially Delphi's TRemoteDataModule; it implements
   the IAppServer interface, and is used to publish datasets residing
   in a TDataModule. Method calls on the IAppServer interface are
   reflected to renamed methods of the style IAppServer_MethodName
   in order to avoid ambiguity problems in multiply derived classes.  */

template <class DM, class T , class Intf, const IID* piid, const GUID* plibid>
class ATL_NO_VTABLE IAppServerImpl: public IDispatchImpl<Intf, piid, plibid>
{
private:
  TCOMCriticalSection m_CS;

public:
  // Note: This data module _must_ derive from TCRemoteDataModule.
  DM* m_DataModule;

 typedef Intf _DEFAULT_INTF_TYPE;

  IAppServerImpl()
  {
    m_DataModule = new DM(NULL);
  }

  ~IAppServerImpl()
  {
    m_DataModule->Free();
  }

  TCustomProvider* GetProvider(const System::String& ProviderName)
  {
    return m_DataModule->GetProvider(ProviderName);
  }

  void RegisterProvider(TCustomProvider* Provider)
  {
    m_DataModule->RegisterProvider(Provider);
  }

  void UnRegisterProvider(TCustomProvider* Provider)
  {
    m_DataModule->UnRegisterProvider(Provider);
  }

public:
  // Reflector methods
  // These methods lock and forward the call to methods on the
  // exported providers. Exception handling is expected to be
  // conducted by the function calling the reflector method.

  HRESULT STDMETHODCALLTYPE IAppServer_AS_GetProviderNames(OleVariant &Result)
  {
    TCOMCriticalSection::Lock _lck(m_CS);
    Result = m_DataModule->CRDMGetProviderNames();
    return S_OK;
  }

  HRESULT STDMETHODCALLTYPE IAppServer_AS_ApplyUpdates(const WideString& ProviderName,
     const System::OleVariant& Delta, int MaxErrors, int& ErrorCount,
     OleVariant& OwnerData, OleVariant& Result)
  {
    TCOMCriticalSection::Lock _lck(m_CS);
    Result = GetProvider(ProviderName)->ApplyUpdates(Delta, MaxErrors, ErrorCount, OwnerData);
    return S_OK;
  }

  HRESULT STDMETHODCALLTYPE IAppServer_AS_GetRecords(const WideString& ProviderName,
     int Count, int& RecsOut, int Options, const WideString& CommandText, OleVariant& Params,
     OleVariant& OwnerData, OleVariant& Result)
  {
    TCOMCriticalSection::Lock _lck(m_CS);
    Result = GetProvider(ProviderName)->GetRecords(Count, RecsOut, Options, CommandText,
                                                   Params, OwnerData);
    return S_OK;
  }

  HRESULT STDMETHODCALLTYPE IAppServer_AS_DataRequest(const WideString& ProviderName,
     const OleVariant& Data, System::OleVariant& Result)
  {
    TCOMCriticalSection::Lock _lck(m_CS);
    Result = GetProvider(ProviderName)->DataRequest(Data);
    return S_OK;
  }

  HRESULT STDMETHODCALLTYPE IAppServer_AS_RowRequest(const WideString& ProviderName,
     const OleVariant& Row, int RequestType, OleVariant& OwnerData, OleVariant& Result)
  {
    TCOMCriticalSection::Lock _lck(m_CS);
    Result = GetProvider(ProviderName)->RowRequest(Row, RequestType, OwnerData);
    return S_OK;
  }

  HRESULT STDMETHODCALLTYPE IAppServer_AS_GetParams(const WideString& ProviderName,
     OleVariant& OwnerData, OleVariant& Result)
  {
    TCOMCriticalSection::Lock _lck(m_CS);
    Result = GetProvider(ProviderName)->GetParams(OwnerData);
    return S_OK;
  }

  HRESULT STDMETHODCALLTYPE IAppServer_AS_Execute(const WideString& ProviderName,
     const WideString& CommandText, OleVariant& Params, OleVariant& OwnerData)
  {
    TCOMCriticalSection::Lock _lck(m_CS);
    GetProvider(ProviderName)->Execute(CommandText, Params, OwnerData);
    return S_OK;
  }


  // IAppServer
#ifndef _WIN64
  HRESULT STDMETHODCALLTYPE AS_ApplyUpdates(const WideString ProviderName,
     const OleVariant Delta, int MaxErrors, int& ErrorCount, OleVariant& OwnerData,
     OleVariant& Result)
#else
  HRESULT STDMETHODCALLTYPE AS_ApplyUpdates(const WideString ProviderName,
     OleVariant& Delta, int MaxErrors, int& ErrorCount, OleVariant& OwnerData,
     OleVariant& Result)
#endif
  {
    ATLTRACE(_T("IAppServer::AS_ApplyUpdates\n"));
    HRESULT hres;
    try
    {
       hres = static_cast<T*>(this)->IAppServer_AS_ApplyUpdates(ProviderName, Delta,
                                                                MaxErrors, ErrorCount,
                                                                OwnerData, Result);
    }
    catch (Exception& e)
    {
       return(static_cast<T*>(this))->Error(e.Message.c_str());
    }
    return hres;
  }

  HRESULT STDMETHODCALLTYPE AS_GetRecords(const WideString ProviderName, int Count,
     int &RecsOut, int Options, const WideString CommandText, OleVariant &Params,
     OleVariant &OwnerData, OleVariant &Result)
  {
    ATLTRACE(_T("IAppServer::AS_GetRecords\n"));
    HRESULT hres;
    try
    {
       hres = static_cast<T*>(this)->IAppServer_AS_GetRecords(ProviderName, Count,
                                                              RecsOut, Options,
                                                              CommandText, Params,
                                                              OwnerData, Result);
    }
    catch (Exception& e)
    {
       return(static_cast<T*>(this))->Error(e.Message.c_str());
    }
    return hres;
  }

#ifndef _WIN64
  HRESULT STDMETHODCALLTYPE AS_DataRequest(const WideString ProviderName, OleVariant Data,
     OleVariant&  Result)
#else
  HRESULT STDMETHODCALLTYPE AS_DataRequest(const WideString ProviderName, OleVariant& Data,
     OleVariant&  Result)
#endif
  {
    ATLTRACE(_T("IAppServer::AS_DataRequest\n"));
    HRESULT hres;
    try
    {
       hres = static_cast<T*>(this)->IAppServer_AS_DataRequest(ProviderName, Data, Result);
    }
    catch (Exception& e)
    {
       return(static_cast<T*>(this))->Error(e.Message.c_str());
    }
    return hres;
  }

  HRESULT STDMETHODCALLTYPE AS_GetProviderNames(OleVariant& Result)
  {
    ATLTRACE(_T("IAppServer::AS_GetProviderNames\n"));
    HRESULT hres;
    try
    {
      hres = static_cast<T*>(this)->IAppServer_AS_GetProviderNames(Result);
    }
    catch (Exception& e)
    {
      return (static_cast<T*>(this))->Error(e.Message.c_str());
    }
    return hres;
  }

  HRESULT STDMETHODCALLTYPE AS_GetParams(const WideString ProviderName, OleVariant& OwnerData,
     OleVariant& Result)
  {
    ATLTRACE(_T("IAppServer::AS_GetParams\n"));
    HRESULT hres;
    try
    {
       hres = static_cast<T*>(this)->IAppServer_AS_GetParams(ProviderName, OwnerData, Result);
    }
    catch (Exception& e)
    {
       return(static_cast<T*>(this))->Error(e.Message.c_str());
    }
    return hres;
  }

  HRESULT STDMETHODCALLTYPE AS_Execute(const WideString ProviderName, const WideString CommandText,
     OleVariant& Params, OleVariant& OwnerData)
  {
    ATLTRACE(_T("IAppServer::AS_Execute\n"));
    HRESULT hres;
    try
    {
       hres = static_cast<T*>(this)->IAppServer_AS_Execute(ProviderName, CommandText,
                                                           Params, OwnerData);
    }
    catch (Exception& e)
    {
       return(static_cast<T*>(this))->Error(e.Message.c_str());
    }
    return hres;
  }

#ifndef _WIN64
  HRESULT STDMETHODCALLTYPE AS_RowRequest(const WideString ProviderName,
     OleVariant Row, int RequestType, OleVariant& OwnerData, OleVariant& Result)
#else
  HRESULT STDMETHODCALLTYPE AS_RowRequest(const WideString ProviderName,
     OleVariant& Row, int RequestType, OleVariant& OwnerData, OleVariant& Result)
#endif
  {
    ATLTRACE(_T("IAppServer::AS_RowRequest\n"));
    HRESULT hres;
    try
    {
       hres = static_cast<T*>(this)->IAppServer_AS_RowRequest(ProviderName, Row,
                                                              RequestType, OwnerData,
                                                              Result);
    }
    catch (Exception& e)
    {
       return(static_cast<T*>(this))->Error(e.Message.c_str());
    }
    return hres;
  }
};


#endif	// _AXRDM_H
