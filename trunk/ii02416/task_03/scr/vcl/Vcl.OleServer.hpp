// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.OleServer.pas' rev: 35.00 (Windows)

#ifndef Vcl_OleserverHPP
#define Vcl_OleserverHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <Winapi.ActiveX.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <System.Win.ComObj.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Oleserver
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TServerEventDispatch;
struct TServerData;
class DELPHICLASS TOleServer;
//-- type declarations -------------------------------------------------------
typedef System::Win::Comobj::TOleVariantArray TVariantArray;

enum DECLSPEC_DENUM TConnectKind : unsigned char { ckRunningOrNew, ckNewInstance, ckRunningInstance, ckRemote, ckAttachToInterface };

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TServerEventDispatch : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TOleServer* FServer;
	int InternalRefCount;
	
protected:
	HRESULT __stdcall QueryInterface(const GUID &IID, /* out */ void *Obj);
	int __stdcall _AddRef();
	int __stdcall _Release();
	HRESULT __stdcall GetTypeInfoCount(/* out */ int &Count);
	HRESULT __stdcall GetTypeInfo(int Index, int LocaleID, /* out */ void *TypeInfo);
	HRESULT __stdcall GetIDsOfNames(const GUID &IID, void * Names, int NameCount, int LocaleID, void * DispIDs);
	HRESULT __stdcall Invoke(int DispID, const GUID &IID, int LocaleID, System::Word Flags, void *Params, void * VarResult, void * ExcepInfo, void * ArgErr);
	__property TOleServer* Server = {read=FServer};
	bool __fastcall ServerDisconnect();
	
public:
	__fastcall TServerEventDispatch(TOleServer* Server);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TServerEventDispatch() { }
	
private:
	void *__IDispatch;	// IDispatch 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00020400-0000-0000-C000-000000000046}
	operator _di_IDispatch()
	{
		_di_IDispatch intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IDispatch*(void) { return (IDispatch*)&__IDispatch; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00000000-0000-0000-C000-000000000046}
	operator System::_di_IInterface()
	{
		System::_di_IInterface intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator System::IInterface*(void) { return (System::IInterface*)&__IDispatch; }
	#endif
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef TServerData *PServerData;

struct DECLSPEC_DRECORD TServerData
{
public:
	GUID ClassID;
	GUID IntfIID;
	GUID EventIID;
	void *LicenseKey;
	int Version;
	int InstanceCount;
};


class PASCALIMPLEMENTATION TOleServer : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	TServerData *FServerData;
	int FRefCount;
	TServerEventDispatch* FEventDispatch;
	int FEventsConnection;
	bool FAutoConnect;
	System::UnicodeString FRemoteMachineName;
	TConnectKind FConnectKind;
	
protected:
	virtual HRESULT __stdcall QueryInterface(const GUID &IID, /* out */ void *Obj);
	HIDESBASE int __stdcall _AddRef();
	HIDESBASE int __stdcall _Release();
	virtual void __fastcall Loaded();
	virtual void __fastcall InitServerData() = 0 ;
	virtual System::_di_IInterface __fastcall GetServer();
	void __fastcall ConnectEvents(const System::_di_IInterface Obj);
	void __fastcall DisconnectEvents(const System::_di_IInterface Obj);
	virtual void __fastcall InvokeEvent(int DispID, System::Win::Comobj::TOleVariantArray &Params);
	TConnectKind __fastcall GetConnectKind();
	void __fastcall SetConnectKind(TConnectKind ck);
	bool __fastcall GetAutoConnect();
	void __fastcall SetAutoConnect(bool flag);
	__property PServerData ServerData = {read=FServerData, write=FServerData};
	__property TServerEventDispatch* EventDispatch = {read=FEventDispatch, write=FEventDispatch};
	
public:
	__fastcall virtual TOleServer(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TOleServer();
	virtual void __fastcall Connect() = 0 ;
	virtual void __fastcall Disconnect() = 0 ;
	
__published:
	__property bool AutoConnect = {read=GetAutoConnect, write=SetAutoConnect, nodefault};
	__property TConnectKind ConnectKind = {read=GetConnectKind, write=SetConnectKind, nodefault};
	__property System::UnicodeString RemoteMachineName = {read=FRemoteMachineName, write=FRemoteMachineName};
private:
	void *__IInterface;	// System::IInterface 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00000000-0000-0000-C000-000000000046}
	operator System::_di_IInterface()
	{
		System::_di_IInterface intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator System::IInterface*(void) { return (System::IInterface*)&__IInterface; }
	#endif
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Oleserver */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_OLESERVER)
using namespace Vcl::Oleserver;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_OleserverHPP
