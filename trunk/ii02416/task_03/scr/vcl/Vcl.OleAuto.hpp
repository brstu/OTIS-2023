// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.OleAuto.pas' rev: 35.00 (Windows)

#ifndef Vcl_OleautoHPP
#define Vcl_OleautoHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#if !defined(_NO_DEPRECATED_UNIT_MSG)
#pragma message("Unit 'Vcl.OleAuto' is deprecated")
#endif
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Ole2.hpp>
#include <Winapi.OleCtl.hpp>
#include <System.SysUtils.hpp>

//-- user supplied -----------------------------------------------------------
#include <comobj.hpp>

namespace Vcl
{
namespace Oleauto
{
//-- forward type declarations -----------------------------------------------
struct TAutoClassInfo;
class DELPHICLASS TRegistryClass;
class DELPHICLASS TAutomation;
class DELPHICLASS EOleError;
class DELPHICLASS EOleSysError;
class DELPHICLASS EOleException;
//-- type declarations -------------------------------------------------------
typedef System::TMetaClass* TAutoClass;

enum DECLSPEC_DENUM TAutoClassInstancing : unsigned char { acInternal, acSingleInstance, acMultiInstance };

struct DECLSPEC_DRECORD TAutoClassInfo
{
public:
	TAutoClass AutoClass;
	System::UnicodeString ProgID;
	System::UnicodeString ClassID;
	System::UnicodeString Description;
	TAutoClassInstancing Instancing;
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TRegistryClass : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TRegistryClass* FNext;
	TAutoClass FAutoClass;
	System::UnicodeString FProgID;
	GUID FClassID;
	System::UnicodeString FDescription;
	TAutoClassInstancing FInstancing;
	int FRegister;
	
public:
	__fastcall TRegistryClass(const TAutoClassInfo &AutoClassInfo);
	__fastcall virtual ~TRegistryClass();
	void __fastcall UpdateRegistry(bool Register);
};

#pragma pack(pop)

enum DECLSPEC_DENUM TStartMode : unsigned char { smStandalone, smAutomation, smRegServer, smUnregServer };

typedef void __fastcall (__closure *TLastReleaseEvent)(bool &Shutdown);

class PASCALIMPLEMENTATION TAutomation : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TRegistryClass* FRegistryList;
	int FAutoObjectCount;
	int FClassFactoryCount;
	bool FIsInprocServer;
	TStartMode FStartMode;
	TLastReleaseEvent FOnLastRelease;
	void __fastcall CountAutoObject(bool Created);
	void __fastcall Initialize();
	void __fastcall LastReleased();
	
public:
	__fastcall TAutomation();
	__fastcall virtual ~TAutomation();
	void __fastcall RegisterClass(const TAutoClassInfo &AutoClassInfo);
	void __fastcall UpdateRegistry(bool Register);
	__property int AutoObjectCount = {read=FAutoObjectCount, nodefault};
	__property bool IsInprocServer = {read=FIsInprocServer, write=FIsInprocServer, nodefault};
	__property TStartMode StartMode = {read=FStartMode, nodefault};
	__property TLastReleaseEvent OnLastRelease = {read=FOnLastRelease, write=FOnLastRelease};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION EOleError : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EOleError(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EOleError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EOleError(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EOleError(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EOleError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EOleError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EOleError(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EOleError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EOleError(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EOleError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EOleError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EOleError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EOleError() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EOleSysError : public EOleError
{
	typedef EOleError inherited;
	
private:
	int FErrorCode;
	
public:
	__fastcall EOleSysError(int ErrorCode);
	__property int ErrorCode = {read=FErrorCode, nodefault};
public:
	/* Exception.CreateFmt */ inline __fastcall EOleSysError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EOleError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EOleSysError(NativeUInt Ident, const double* Dummy)/* overload */ : EOleError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EOleSysError(System::PResStringRec ResStringRec)/* overload */ : EOleError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EOleSysError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EOleError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EOleSysError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EOleError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EOleSysError(const System::UnicodeString Msg, int AHelpContext) : EOleError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EOleSysError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EOleError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EOleSysError(NativeUInt Ident, int AHelpContext)/* overload */ : EOleError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EOleSysError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EOleError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EOleSysError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EOleError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EOleSysError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EOleError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EOleSysError() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EOleException : public EOleError
{
	typedef EOleError inherited;
	
private:
	int FErrorCode;
	System::UnicodeString FSource;
	System::UnicodeString FHelpFile;
	
public:
	__fastcall EOleException(const tagEXCEPINFO &ExcepInfo);
	__property int ErrorCode = {read=FErrorCode, nodefault};
	__property System::UnicodeString HelpFile = {read=FHelpFile};
	__property System::UnicodeString Source = {read=FSource};
public:
	/* Exception.CreateFmt */ inline __fastcall EOleException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EOleError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EOleException(NativeUInt Ident, const double* Dummy)/* overload */ : EOleError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EOleException(System::PResStringRec ResStringRec)/* overload */ : EOleError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EOleException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EOleError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EOleException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EOleError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EOleException(const System::UnicodeString Msg, int AHelpContext) : EOleError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EOleException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EOleError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EOleException(NativeUInt Ident, int AHelpContext)/* overload */ : EOleError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EOleException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EOleError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EOleException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EOleError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EOleException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EOleError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EOleException() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 MaxDispArgs = System::Int8(0x20);
extern DELPHI_PACKAGE TAutomation* Automation;
extern DELPHI_PACKAGE void __fastcall OleError(HRESULT ErrorCode);
extern DELPHI_PACKAGE void __fastcall OleCheck(HRESULT Result);
extern DELPHI_PACKAGE GUID __fastcall StringToClassID(const System::UnicodeString S);
extern DELPHI_PACKAGE System::UnicodeString __fastcall ClassIDToString(const GUID &ClassID);
extern DELPHI_PACKAGE GUID __fastcall ProgIDToClassID(const System::UnicodeString ProgID);
extern DELPHI_PACKAGE System::UnicodeString __fastcall ClassIDToProgID(const GUID &ClassID);
extern DELPHI_PACKAGE System::Variant __fastcall VarFromInterface(IUnknown* Unknown);
extern DELPHI_PACKAGE IDispatch* __fastcall VarToInterface(const System::Variant &V);
extern DELPHI_PACKAGE System::Variant __fastcall CreateOleObject(const System::UnicodeString ClassName);
extern DELPHI_PACKAGE System::Variant __fastcall GetActiveOleObject(const System::UnicodeString ClassName);
extern DELPHI_PACKAGE void __fastcall DispInvoke(IDispatch* Dispatch, System::PCallDesc CallDesc, Winapi::Ole2::PDispIDList DispIDs, void * Params, System::PVariant Result);
extern DELPHI_PACKAGE void __fastcall DispInvokeError(HRESULT Status, const tagEXCEPINFO &ExcepInfo);
extern DELPHI_PACKAGE HRESULT __stdcall DllGetClassObject(const GUID &CLSID, const GUID &IID, void *Obj);
extern DELPHI_PACKAGE HRESULT __stdcall DllCanUnloadNow();
extern DELPHI_PACKAGE HRESULT __stdcall DllRegisterServer();
extern DELPHI_PACKAGE HRESULT __stdcall DllUnregisterServer();
}	/* namespace Oleauto */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_OLEAUTO)
using namespace Vcl::Oleauto;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_OleautoHPP
