//------------------------------------------------------------------------------
// AXBASE.H - C++ COM/ActiveX Wrapper Classes based on DAX Library
//
// $Rev: 93536 $
//
// Copyright(c) 1995-2011 Embarcadero Technologies, Inc.
//------------------------------------------------------------------------------
#if !defined(_AXBASE_H)
#define _AXBASE_H

#include <System.Win.ComObj.hpp>
#include <Vcl.AxCtrls.hpp>
#include <System.Win.VCLCom.hpp>
#include <utilcls.h>


// 'DAX_COM_CLASS' is a NOP marker used by IDE's & TLE's code managers to pick
// a class that implements a CoClass using DAX - i.e. requires code management.
// NOTE: With ATL, the 'ATL_NO_VTABLE' macro provides the equivalent marking
#define DAX_COM_CLASS

//------------------------------------------------------------------------------
// CRegKey
//------------------------------------------------------------------------------
class CRegKey
{
  HKEY m_hKey;
public:
  CRegKey() : m_hKey(0) {}
  CRegKey(HKEY key): m_hKey(key) {}
 ~CRegKey() { Close(); }

  operator HKEY() const { return m_hKey; };

  LONG SetValue(LPCTSTR lpValue, LPCTSTR lpValueName = NULL);
  // RegCreateEx wrapper
  LONG Create(HKEY hKey, LPCTSTR lpSubKey,
              LPTSTR lpClass = REG_NONE, DWORD dwOptions = REG_OPTION_NON_VOLATILE,
              REGSAM samDesired = KEY_READ | KEY_WRITE,
              LPSECURITY_ATTRIBUTES lpSecurityAttributes = NULL,
              LPDWORD lpdwDisposition = NULL);
  LONG Open(HKEY hKey, LPCTSTR lpSubKey,
            REGSAM samDesired = KEY_READ | KEY_WRITE);
  LONG Close();

  LONG DeleteSubKey(LPCTSTR lpSubKey);
  LONG RecurseDeleteKey(LPCTSTR lpSubKey);
private:
  CRegKey(const CRegKey&);
  CRegKey& operator=(const CRegKey&);
};

inline LONG CRegKey::DeleteSubKey(LPCTSTR lpSubKey)
{
  _ASSERTE(m_hKey);
  return RegDeleteKey(m_hKey, lpSubKey);
}

inline LONG CRegKey::Close()
{
  LONG lRes = ERROR_SUCCESS;
  if (m_hKey != NULL)
  {
    lRes = RegCloseKey(m_hKey);
    m_hKey = NULL;
  }
  return lRes;
}

inline LONG CRegKey::Create(HKEY hKey, LPCTSTR lpSubKey,
                            LPTSTR lpClass, DWORD dwOptions, REGSAM samDesired,
                            LPSECURITY_ATTRIBUTES lpSecurityAttributes, LPDWORD lpdwDisposition)
{
  _ASSERTE(hKey);
  _ASSERTE(lpSubKey);
  HKEY hNewKey = NULL;
  LONG lRes = RegCreateKeyEx(hKey, lpSubKey, 0,
                             lpClass, dwOptions,
                             samDesired, lpSecurityAttributes,
                             &hNewKey, lpdwDisposition);
  if (lRes == ERROR_SUCCESS)
  {
    lRes = Close();
    m_hKey = hNewKey;
  }
  return lRes;
}

inline LONG CRegKey::Open(HKEY hKey, LPCTSTR lpSubKey, REGSAM samDesired)
{
  _ASSERTE(hKey);
  HKEY hNewKey = NULL;
  LONG lRes = RegOpenKeyEx(hKey, lpSubKey, 0, samDesired, &hKey);
  if (lRes == ERROR_SUCCESS)
  {
    lRes = Close();
    _ASSERTE(lRes == ERROR_SUCCESS);
    m_hKey = hNewKey;
  }
  return lRes;
}

inline LONG CRegKey::SetValue(LPCTSTR lpValue, LPCTSTR lpValueName)
{
  _ASSERTE(lpValue);
  _ASSERTE(m_hKey);
  return RegSetValueEx(m_hKey, lpValueName, NULL, REG_SZ,
    (const BYTE*)lpValue, (lstrlen(lpValue)+1)*sizeof(TCHAR));
}

// Could use RegDeleteTree but since it's Vista & above only,
// we won't bother.
inline LONG CRegKey::RecurseDeleteKey(LPCTSTR lpSubKey)
{
  const int MAX_KEY_LENGTH = 256;

  _ASSERTE(lpSubKey);
  _ASSERTE(m_hKey);

  CRegKey key;
  LONG lRes = key.Open(m_hKey, lpSubKey, KEY_ENUMERATE_SUB_KEYS | DELETE);
  if (lRes != ERROR_SUCCESS)
    return lRes;
  DWORD cName = MAX_KEY_LENGTH;
  TCHAR lpName[MAX_KEY_LENGTH];
  while (RegEnumKeyEx(key.m_hKey, 0, lpName, &cName, NULL, NULL, NULL, NULL)==ERROR_SUCCESS)
  {
    lRes = key.RecurseDeleteKey(lpName);
    if (lRes != ERROR_SUCCESS)
      return lRes;
    cName = MAX_KEY_LENGTH;
  }
  key.Close();
  return DeleteSubKey(lpSubKey);
}


#define DAX_IMPL_IDISPATCH(BASE) \
    STDMETHOD(GetTypeInfoCount)(UINT* pctinfo) \
    { \
      return BASE::GetTypeInfoCount(*reinterpret_cast<int*>(pctinfo)); \
    } \
      \
    STDMETHOD(GetTypeInfo)(UINT itinfo, LCID lcid, ITypeInfo** pctinfo) \
    { \
      return BASE::GetTypeInfo(itinfo, lcid, pctinfo); \
    } \
      \
    STDMETHOD(GetIDsOfNames)(REFIID riid, LPOLESTR* rgszNames, UINT cNames, \
                             LCID lcid, DISPID* rgdispid) \
    { \
      return BASE::GetIDsOfNames(riid, rgszNames, cNames, lcid, rgdispid); \
    } \
      \
    STDMETHOD(Invoke)(DISPID dispidMember, REFIID riid, \
                      LCID lcid, WORD wFlags, DISPPARAMS* pdispparams, VARIANT* pvarResult, \
                      EXCEPINFO* pexcepinfo, UINT* puArgErr) \
    { \
      return BASE::Invoke(dispidMember, riid, lcid, wFlags, pdispparams, \
                          pvarResult, pexcepinfo, puArgErr); \
    }


#define DAX_IMPL_IUNKNOWN(BASE) \
    ULONG STDMETHODCALLTYPE AddRef() { return BASE::ObjAddRef();} \
    ULONG STDMETHODCALLTYPE Release(){ return BASE::ObjRelease();} \
    STDMETHOD(QueryInterface)(REFIID iid, void** p){ return BASE::ObjQueryInterface(iid, p);}


#define DAX_IMPL_IDISPATCH_COMPONENT \
    STDMETHOD(GetTypeInfoCount)(UINT* pctinfo) \
    { \
    return System::Classes::TComponent::GetTypeInfoCount(*reinterpret_cast<int*>(pctinfo)); \
    } \
    STDMETHOD(GetTypeInfo)(UINT itinfo, LCID lcid, ITypeInfo** pctinfo) \
    { \
    return System::Classes::TComponent::GetTypeInfo(itinfo, lcid, pctinfo); \
    } \
    STDMETHOD(GetIDsOfNames)(REFIID riid, LPOLESTR* rgszNames, UINT cNames, \
                           LCID lcid, DISPID* rgdispid) \
    { \
    return System::Classes::TComponent::GetIDsOfNames(riid, rgszNames, cNames, lcid, rgdispid); \
    } \
    STDMETHOD(Invoke)(DISPID dispidMember, REFIID riid, \
                    LCID lcid, WORD wFlags, DISPPARAMS* pdispparams, VARIANT* pvarResult, \
                    EXCEPINFO* pexcepinfo, UINT* puArgErr) \
    { \
    return System::Classes::TComponent::Invoke(dispidMember, riid, lcid, wFlags, pdispparams, \
                               pvarResult, pexcepinfo, puArgErr); \
    }


#define DAX_IMPL_IUNKNOWN_COMPONENT \
    ULONG STDMETHODCALLTYPE AddRef() \
    { \
    return System::Classes::TComponent::_AddRef(); \
    } \
    ULONG STDMETHODCALLTYPE Release() \
    { \
    return System::Classes::TComponent::_Release(); \
    } \
    STDMETHOD(QueryInterface)(REFIID iid, void** p) \
    { \
    return System::Classes::TComponent::QueryInterface(iid, p); \
    }



// -------------------------------------------------------------------------
// Delphi and the Windows API don't always agree on the exact signature of some
// ActiveX Interfaces. So it oftens seems like C++ is hiding methods
// such QueryInterface. So we'll disable this particular warning
// for the following helpers that implement standard ActiveX interfaces
// by forwarding to Delphi classes with possibly slightly different
// signatures
// -------------------------------------------------------------------------
#pragma option push -w-8022

struct __default_Intf1 : public IUnknown {};
struct __default_Intf2 : public IUnknown {};
struct __default_Intf3 : public IUnknown {};

// -------------------------------------------------------------------------
// TCppComObject
// -------------------------------------------------------------------------
template <typename INTF1, typename INTF2=IUnknown, typename INTF3=System::IInterface>
class TCppComObject : public System::Win::Comobj::TComObject,
                      public INTF1, public INTF2, public INTF3
{
protected:
  typedef TCppComObject<INTF1, INTF2, INTF3> _COM_CLASS;
public:
  __fastcall TCppComObject(void)
  {}
  __fastcall TCppComObject(const System::_di_IInterface Controller) :
                  System::Win::Comobj::TComObject(Controller)
  {}
  __fastcall TCppComObject(System::Win::Comobj::TComObjectFactory* Factory,
                            const System::_di_IInterface Controller) :
                  System::Win::Comobj::TComObject(Factory, Controller)
  {}

  DAX_IMPL_IUNKNOWN(System::Win::Comobj::TComObject);
};


// -------------------------------------------------------------------------
// TCppComObjectFactory
// -------------------------------------------------------------------------
template <typename T>
class TCppComObjectFactory : public System::Win::Comobj::TComObjectFactory
{
public:
  __fastcall TCppComObjectFactory(System::Win::Comobj::TComServerObject* ComServer,
                                  System::Win::Comobj::TComClass ComClass,
                                  const GUID &ClassID,
                                  const System::String ClassName,
                                  const System::String Description,
                                  System::Win::Comobj::TClassInstancing Instancing,
                                  System::Win::Comobj::TThreadingModel ThreadingModel) :
         System::Win::Comobj::TComObjectFactory(ComServer, ComClass, ClassID,
                                  ClassName, Description,
                                  Instancing, ThreadingModel)
  {
  }

  System::Win::Comobj::TComObject* __fastcall CreateComObject(const System::_di_IInterface Controller)
  {
    return new T(static_cast<System::Win::Comobj::TComObjectFactory*>(this), Controller);
  }
};


// -------------------------------------------------------------------------
// TCppAutoObject
// -------------------------------------------------------------------------
template <typename INTF1, typename INTF2=IUnknown, typename INTF3=IDispatch,
          typename INTF4=__default_Intf1, typename INTF5=__default_Intf2,
          typename INTF6=__default_Intf3>
class TCppAutoObject : public System::Win::Comobj::TAutoObject,
                       public INTF1, public INTF2, public INTF3,
                       public INTF4, public INTF5, public INTF6
{
protected:
  typedef TCppAutoObject<INTF1, INTF2, INTF3, INTF4, INTF5, INTF6> _COM_CLASS;
public:
  __fastcall TCppAutoObject(void)
  {}
  __fastcall TCppAutoObject(const System::_di_IInterface Controller) :
                 System::Win::Comobj::TAutoObject(Controller)
  {}
  __fastcall TCppAutoObject(System::Win::Comobj::TComObjectFactory* Factory,
                            const System::_di_IInterface Controller) :
                 System::Win::Comobj::TAutoObject(Factory, Controller)
  {}

  DAX_IMPL_IUNKNOWN(System::Win::Comobj::TAutoObject);
  DAX_IMPL_IDISPATCH(System::Win::Comobj::TAutoObject);
};


// -------------------------------------------------------------------------
// TCppAutoObjectFactory
// -------------------------------------------------------------------------
template <typename T>
class TCppAutoObjectFactory : public System::Win::Comobj::TAutoObjectFactory
{
public:
  __fastcall TCppAutoObjectFactory(System::Win::Comobj::TComServerObject* ComServer,
                                   System::Win::Comobj::TAutoClass AutoClass,
                                   const GUID &ClassID,
                                   System::Win::Comobj::TClassInstancing Instancing,
                                   System::Win::Comobj::TThreadingModel ThreadingModel) :
        System::Win::Comobj::TAutoObjectFactory(ComServer, AutoClass, ClassID, Instancing, ThreadingModel)
  {
  }

  System::Win::Comobj::TComObject* __fastcall CreateComObject(const System::_di_IInterface Controller)
  {
    return new T(static_cast<System::Win::Comobj::TComObjectFactory*>(this), Controller);
  }
};


// -------------------------------------------------------------------------
// TCppAutoObjectEvent
// -------------------------------------------------------------------------
template <typename INTF1, typename INTF2=IUnknown, typename INTF3=IDispatch,
          typename INTF4=__default_Intf1, typename INTF5=__default_Intf2,
          typename INTF6=__default_Intf3>
class TCppAutoObjectEvent : public System::Win::Comobj::TAutoObjectEvent,
                            public INTF1, public INTF2, public INTF3,
                            public INTF4, public INTF5, public INTF6
{
protected:
  typedef TCppAutoObjectEvent<INTF1, INTF2, INTF3, INTF4, INTF5, INTF6> _COM_CLASS;
public:
  __fastcall TCppAutoObjectEvent(void)
  {}
  __fastcall TCppAutoObjectEvent(const System::_di_IInterface Controller) :
                 System::Win::Comobj::TAutoObjectEvent(Controller)
  {}
  __fastcall TCppAutoObjectEvent(System::Win::Comobj::TComObjectFactory* Factory,
                                 const System::_di_IInterface Controller) :
                  System::Win::Comobj::TAutoObjectEvent(Factory, Controller)
  {}

  DAX_IMPL_IUNKNOWN(System::Win::Comobj::TAutoObjectEvent);
  DAX_IMPL_IDISPATCH(System::Win::Comobj::TAutoObjectEvent);
};


// -------------------------------------------------------------------------
// TConnectionPointList
// -------------------------------------------------------------------------
template <typename CLS>
class TConnectionPointSinkList
{
  System::Win::Comobj::TConnectionPoint* FConnectionPoint;
  System::_di_IInterface FHoldRef;
public:
  TConnectionPointSinkList(System::Win::Comobj::TConnectionPoint* AConnectionPoint) : FConnectionPoint(AConnectionPoint)
  {
    if (AConnectionPoint)
      FHoldRef = AConnectionPoint->Controller;
  }
  bool HasConnectionPoint() const
  {
    return FConnectionPoint != 0;
  }
  bool GetSink(int Index, System::_di_IInterface &punk)
  {
    return FConnectionPoint->GetSink(Index, punk);
  }
  int GetCount() const
  {
    return FConnectionPoint->GetCount();
  }
};


// -------------------------------------------------------------------------
// TRemoteDataModuleImpl is a template helper for C++ classes
// derived from TRemoteDataModule. It handles the standard
// forwarding of standing IAppServer methods back to TRemoteDataModule.
// IDispatch and IUnknown methods are redirected to TComponent
// -------------------------------------------------------------------------
template <typename T, typename INTF1, typename INTF2=IUnknown, typename INTF3=IDispatch>
class TRemoteDataModuleImpl : public T, public INTF1
{
protected:
  typedef TRemoteDataModuleImpl<T, INTF1, INTF2, INTF3> _COM_CLASS;

  DAX_IMPL_IUNKNOWN_COMPONENT;
  DAX_IMPL_IDISPATCH_COMPONENT;
public:
  __fastcall TRemoteDataModuleImpl(System::Classes::TComponent* owner) : T(owner)
  {}

  HRESULT __safecall AS_ApplyUpdates(const System::WideString ProviderName, const System::OleVariant Delta, int MaxErrors, /* out */ int &ErrorCount, System::OleVariant &OwnerData, System::OleVariant &__AS_ApplyUpdates_result)
  {
    return T::AS_ApplyUpdates(ProviderName, Delta, MaxErrors, ErrorCount, OwnerData, __AS_ApplyUpdates_result);
  }
  HRESULT __safecall AS_GetRecords(const System::WideString ProviderName, int Count, /* out */ int &RecsOut, int Options, const System::WideString CommandText, System::OleVariant &Params, System::OleVariant &OwnerData, System::OleVariant &__AS_GetRecords_result)
  {
    return T::AS_GetRecords(ProviderName, Count, RecsOut, Options, CommandText, Params, OwnerData, __AS_GetRecords_result);
  }
  HRESULT __safecall AS_DataRequest(const System::WideString ProviderName, const System::OleVariant Data, System::OleVariant &__AS_DataRequest_result)
  {
    return T::AS_DataRequest(ProviderName, Data, __AS_DataRequest_result);
  }
  HRESULT __safecall AS_GetProviderNames(System::OleVariant &__AS_GetProviderNames_result)
  {
    return T::AS_GetProviderNames(__AS_GetProviderNames_result);
  }
  HRESULT __safecall AS_GetParams(const System::WideString ProviderName, System::OleVariant &OwnerData, System::OleVariant &__AS_GetParams_result)
  {
    return T::AS_GetParams(ProviderName, OwnerData, __AS_GetParams_result);
  }
  HRESULT __safecall AS_RowRequest(const System::WideString ProviderName, const System::OleVariant Row, int RequestType, System::OleVariant &OwnerData, System::OleVariant &__AS_RowRequest_result)
  {
    return T::AS_RowRequest(ProviderName, Row, RequestType, OwnerData, __AS_RowRequest_result);
  }
  HRESULT __safecall AS_Execute(const System::WideString ProviderName, const System::WideString CommandText, System::OleVariant &Params, System::OleVariant &OwnerData)
  {
    return T::AS_Execute(ProviderName, CommandText, Params, OwnerData);
  }
};


// -------------------------------------------------------------------------
// TCppActiveXControl
// -------------------------------------------------------------------------
template <typename T, typename INTF, typename EVENT_DISPATCHER>
class TCppActiveXControl : public Vcl::Axctrls::TActiveXControl, public INTF, public EVENT_DISPATCHER
{
protected:
  typedef TCppActiveXControl<T, INTF, EVENT_DISPATCHER> _COM_CLASS;
  T*              m_VclCtl;
  System::_di_IInterface  FEvents;

  void __fastcall EventSinkChanged(const System::_di_IInterface EventSink)
  {
    FEvents = EventSink;
    Vcl::Axctrls::TActiveXControl::EventSinkChanged(EventSink);
  }

  HRESULT WINAPI FireOnRequestEdit(int dispid)
  {
    return DoPropRequestEdit(dispid);
  }

  HRESULT WINAPI FireOnChanged(int dispid)
  {
    PropChanged(dispid);
    return S_OK;
  }

public:
  __fastcall TCppActiveXControl(void) : Vcl::Axctrls::TActiveXControl()
  {}
  __fastcall TCppActiveXControl(const System::_di_IInterface Controller) : Vcl::Axctrls::TActiveXControl(Controller)
  {}
  __fastcall TCppActiveXControl(System::Win::Comobj::TComObjectFactory* Factory, const System::_di_IInterface Controller) : Vcl::Axctrls::TActiveXControl(Factory, Controller)
  {}

  void __fastcall PreInitializeControl(void)
  {
    m_VclCtl = dynamic_cast<T*>(this->Control);
  }
  System::_di_IInterface __fastcall GetEventSink() const { return FEvents; }

  DAX_IMPL_IUNKNOWN(Vcl::Axctrls::TActiveXControl);
  DAX_IMPL_IDISPATCH(Vcl::Axctrls::TActiveXControl);
};


// -------------------------------------------------------------------------
// TCppActiveXControlFactory
// -------------------------------------------------------------------------
template <typename AXTYPE, typename WINCTLTYPE>
class TCppActiveXControlFactory : public Vcl::Axctrls::TActiveXControlFactory
{
public:
  __fastcall TCppActiveXControlFactory(System::Win::Comobj::TComServerObject* ComServer,
                                       Vcl::Axctrls::TActiveXControlClass ActiveXControlClass,
                                       Vcl::Controls::TWinControlClass WinControlClass,
                                       const GUID &ClassID, int ToolboxBitmapID,
                                       const System::UnicodeString LicStr,
                                       int MiscStatus,
                                       System::Win::Comobj::TThreadingModel ThreadingModel):
                      Vcl::Axctrls::TActiveXControlFactory(ComServer, ActiveXControlClass,
                                          WinControlClass, ClassID,
                                          ToolboxBitmapID, LicStr, MiscStatus,
                                          ThreadingModel)
  {
  }

  System::Win::Comobj::TComObject* __fastcall CreateComObject(const System::_di_IInterface Controller)
  {
    return new AXTYPE(static_cast<System::Win::Comobj::TComObjectFactory*>(this), Controller);
  }

  Vcl::Controls::TWinControl* __fastcall CreateControl(HWND Parent)
  {
    return new WINCTLTYPE(Parent);
  }
};


// -------------------------------------------------------------------------
// TCppActiveFormControl
// -------------------------------------------------------------------------
class TCppActiveFormControl : public Vcl::Axctrls::TActiveFormControl
{
public:
  __fastcall TCppActiveFormControl(System::Win::Comobj::TComObjectFactory* Factory, const System::_di_IInterface Controller) :
           Vcl::Axctrls::TActiveFormControl(Factory, Controller)
  {}
};


// -------------------------------------------------------------------------
// TCppActiveForm
// -------------------------------------------------------------------------
template <typename T, typename INTF, typename EVENT_DISPATCHER>
class TCppActiveForm : public T, public INTF, public EVENT_DISPATCHER
{
protected:
  typedef TCppActiveForm<T, INTF, EVENT_DISPATCHER> _COM_CLASS;
  T*      m_VclCtl;
  System::_di_IInterface  FEvents;

  void __fastcall EventSinkChanged(const System::_di_IInterface EventSink)
  {
    FEvents = EventSink;
  }
  HRESULT WINAPI Error(LPCOLESTR lpszDesc,
                       const IID& iid = GUID_NULL, HRESULT hRes = 0)
  {
    return T::ActiveFormControl->Error(lpszDesc, iid, hRes);
  }

  HRESULT WINAPI Error(LPCSTR lpszDesc, const IID& iid = GUID_NULL,
                              HRESULT hRes = 0)
  {
    return T::ActiveFormControl->Error(lpszDesc, iid, hRes);
  }

  HRESULT WINAPI FireOnRequestEdit(int dispid)
  {
    return T::ActiveFormControl->PropRequestEdit(dispid) ? S_OK : S_FALSE;
  }

  HRESULT WINAPI FireOnChanged(int dispid)
  {
    T::ActiveFormControl->PropChanged(dispid);
    return S_OK;
  }

public:
  __fastcall TCppActiveForm(System::Classes::TComponent* AOwner) : T(AOwner)
  {
    m_VclCtl = static_cast<T*>(this);
  }
#if 0
  __fastcall TCppActiveForm(System::Classes::TComponent* AOwner, int Dummy) : T(AOwner, Dummy)
  {
    m_VclCtl = static_cast<T*>(this);
  }
#endif
  __fastcall TCppActiveForm(HWND ParentWindow) : T(ParentWindow)
  {
    m_VclCtl = static_cast<T*>(this);
  }
  System::_di_IInterface __fastcall GetEventSink() const { return FEvents; }

  DAX_IMPL_IUNKNOWN_COMPONENT;
  DAX_IMPL_IDISPATCH_COMPONENT;
};


// -------------------------------------------------------------------------
// TCppActiveFormFactory
// -------------------------------------------------------------------------
template <typename AXTYPE, typename WINCTLTYPE>
class TCppActiveFormFactory : public Vcl::Axctrls::TActiveFormFactory
{
public:
  __fastcall TCppActiveFormFactory(System::Win::Comobj::TComServerObject* ComServer,
                                   Vcl::Axctrls::TActiveXControlClass ActiveXControlClass,
                                   Vcl::Controls::TWinControlClass WinControlClass,
                                   const GUID &ClassID, int ToolboxBitmapID,
                                   const System::UnicodeString LicStr,
                                   int MiscStatus,
                                   System::Win::Comobj::TThreadingModel ThreadingModel):
          Vcl::Axctrls::TActiveFormFactory(ComServer, ActiveXControlClass,
                                         WinControlClass, ClassID,
                                         ToolboxBitmapID, LicStr, MiscStatus,
                                         ThreadingModel)
  {
  }

  System::Win::Comobj::TComObject* __fastcall CreateComObject(const System::_di_IInterface Controller)
  {
    return new AXTYPE(static_cast<System::Win::Comobj::TComObjectFactory*>(this), Controller);
  }

  Vcl::Controls::TWinControl* __fastcall CreateControl(HWND Parent)
  {
    return new WINCTLTYPE(Parent);
  }
};


// -------------------------------------------------------------------------
// TCppPropertyPageFactory
// -------------------------------------------------------------------------
template <typename T>
class TCppPropertyPageFactory : public Vcl::Axctrls::TActiveXPropertyPageFactory
{
public:
  __fastcall TCppPropertyPageFactory(System::Win::Comobj::TComServerObject* ComServer,
                                     Vcl::Axctrls::TPropertyPageClass PropertyPageClass,
                                     const GUID &ClassID) :
        Vcl::Axctrls::TActiveXPropertyPageFactory(ComServer, PropertyPageClass, ClassID)
  {
  }

  System::Win::Comobj::TComObject* __fastcall CreateComObject(const System::_di_IInterface Controller)
  {
    return new Vcl::Axctrls::TActiveXPropertyPage(this, Controller);
  }
};


#pragma option pop  // -w-8022


///////////////////////////////////////////////////////////////////////////////
// FONT property handlers
///////////////////////////////////////////////////////////////////////////////
inline void
SetVclCtlProp(Vcl::Graphics::TFont* font, IFontDisp* fontdisp)
{
  Vcl::Axctrls::SetOleFont(font, fontdisp);
}

inline void
SetVclCtlProp(Vcl::Graphics::TFont* font, IFontDispPtr fontdisp)
{
  SetVclCtlProp(font, static_cast<IFontDisp*>(fontdisp));
}

// PUTREF version of FONT setter
inline void
SetVclCtlProp(Vcl::Graphics::TFont* font, IFontDisp** fontdisp)
{
  SetVclCtlProp(font, *fontdisp);
}

inline void
SetVclCtlProp(Vcl::Graphics::TFont* font, IFontDispPtr* fontdisp)
{
  SetVclCtlProp(font, *fontdisp);
}

inline void
GetVclCtlProp(Vcl::Graphics::TFont* font, IFontDisp** fontdisp)
{
  _di_IFontDisp _di_font;
  Vcl::Axctrls::GetOleFont(font, _di_font);
  *fontdisp = _di_font;
  if (*fontdisp)
    (*fontdisp)->AddRef();
}

inline void
GetVclCtlProp(Vcl::Graphics::TFont* font, IFontDispPtr* fontdisp)
{
  GetVclCtlProp(font, reinterpret_cast<IFontDisp**>(fontdisp));
}

///////////////////////////////////////////////////////////////////////////////
// Picture property handlers
///////////////////////////////////////////////////////////////////////////////
inline void
GetVclCtlProp(Vcl::Graphics::TPicture* pic, IPictureDisp** ppPictDisp)
{
  _di_IPictureDisp _di_picture;
  Vcl::Axctrls::GetOlePicture(pic, _di_picture);
  *ppPictDisp = _di_picture;
  if (*ppPictDisp)
    (*ppPictDisp)->AddRef();
}

inline void
GetVclCtlProp(Vcl::Graphics::TPicture* pic, IPictureDispPtr* ppPictDisp)
{
  GetVclCtlProp(pic, reinterpret_cast<IPictureDisp**>(ppPictDisp));
}

inline void
SetVclCtlProp(Vcl::Graphics::TPicture* pic, IPictureDisp* pPictDisp)
{
  Vcl::Axctrls::SetOlePicture(pic, pPictDisp);
}

inline void
SetVclCtlProp(Vcl::Graphics::TPicture* pic, IPictureDisp** ppPictDisp)
{
  SetVclCtlProp(pic, *ppPictDisp);
}

inline void
SetVclCtlProp(Vcl::Graphics::TPicture* pic, IPictureDispPtr pPictDisp)
{
  SetVclCtlProp(pic, static_cast<IPictureDisp*>(pPictDisp));
}

inline void
SetVclCtlProp(Vcl::Graphics::TPicture* pic, IPictureDispPtr* ppPictDisp)
{
  SetVclCtlProp(pic, *ppPictDisp);;
}


///////////////////////////////////////////////////////////////////////////////
// Strings property handlers
///////////////////////////////////////////////////////////////////////////////
inline void
GetVclCtlProp(System::Classes::TStrings* str, System::Win::Stdvcl::IStrings **ppIString)
{
  System::Win::Stdvcl::_di_IStrings _di_strings;
  Vcl::Axctrls::GetOleStrings(str, _di_strings);
  *ppIString = _di_strings;
  if (*ppIString)
    (*ppIString)->AddRef();
}
inline void
GetVclCtlProp(System::Classes::TStrings* str, IStringsPtr *ppIString)
{
  GetVclCtlProp(str, reinterpret_cast< System::Win::Stdvcl::IStrings**>(ppIString));
}
inline void
SetVclCtlProp(System::Classes::TStrings* str, System::Win::Stdvcl::IStrings* pIString)
{
  Vcl::Axctrls::SetOleStrings(str, pIString);
}
inline void
SetVclCtlProp(System::Classes::TStrings* str, System::Win::Stdvcl::IStrings** ppIString)
{
  SetVclCtlProp(str, *ppIString);
}

inline void
SetVclCtlProp(System::Classes::TStrings* str, IStringsPtr pIString)
{
  SetVclCtlProp(str, static_cast< System::Win::Stdvcl::IStrings*>(pIString));
}
inline void
SetVclCtlProp(System::Classes::TStrings* str, IStringsPtr* ppIString)
{
  SetVclCtlProp(str, *ppIString);
}


#endif  // _AXBASE_H
