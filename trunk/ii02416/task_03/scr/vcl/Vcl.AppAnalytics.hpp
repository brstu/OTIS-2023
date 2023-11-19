// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.AppAnalytics.pas' rev: 35.00 (Windows)

#ifndef Vcl_AppanalyticsHPP
#define Vcl_AppanalyticsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Types.hpp>
#include <System.Classes.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <System.SysUtils.hpp>
#include <System.Math.hpp>
#include <Vcl.AppAnalytics.Consts.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Appanalytics
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TAppAnalytics;
class DELPHICLASS EInvalidAnalyticsUsage;
class DELPHICLASS EAnalyticsInitializationFailed;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TAnalyticsOption : unsigned char { aoTrackStartup, aoTrackFormActivate, aoTrackControlFocus, aoTrackExceptions };

typedef System::Set<TAnalyticsOption, TAnalyticsOption::aoTrackStartup, TAnalyticsOption::aoTrackExceptions> TAnalyticsOptions;

typedef void __fastcall (__closure *TAnalyticsPrivacyMessageEvent)(System::TObject* Sender, bool &Activate);

class PASCALIMPLEMENTATION TAppAnalytics : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	TAnalyticsOptions FOptions;
	System::UnicodeString FApplicationID;
	System::Classes::TStrings* FPrivacyMessage;
	TAnalyticsPrivacyMessageEvent FOnPrivacyMessage;
	NativeUInt FCBTHookHandle;
	bool FActive;
	System::Classes::TStringList* FDataCache;
	Vcl::Extctrls::TTimer* FUpdateTimer;
	int FMaxCacheSize;
	System::UnicodeString FUserID;
	System::UnicodeString FSessionID;
	unsigned FEventCount;
	System::TObject* FActiveForm;
	Vcl::Controls::TControl* FFocusedControl;
	System::UnicodeString FOSVersion;
	System::UnicodeString FCPUInfo;
	System::UnicodeString FAppVersion;
	System::UnicodeString FLastWindowClassName;
	System::UnicodeString FLastWindowName;
	System::UnicodeString FLastControlClassName;
	System::UnicodeString FLastControlName;
	System::UnicodeString FServerAddress;
	Vcl::Forms::TExceptionEvent FOldExceptionHandler;
	void __fastcall InstallHooks();
	void __fastcall RemoveHooks();
	void __fastcall Log(System::UnicodeString AMessage);
	void __fastcall SendDataNoIndy();
	void __fastcall UpdateTimerFire(System::TObject* Sender);
	void __fastcall TrackException(System::TObject* Sender, System::Sysutils::Exception* E);
	void __fastcall InstallExceptionHandler();
	void __fastcall RemoveExceptionHandler();
	__classmethod void __fastcall ResetApp();
	
protected:
	void __fastcall SetActive(const bool Value);
	void __fastcall SendData();
	int __fastcall GetUpdateInterval();
	void __fastcall SetUpdateInterval(const int Value);
	void __fastcall TrackApplicationStarted();
	void __fastcall TrackApplicationExit();
	virtual void __fastcall TrackWindowActivated(NativeUInt AHandle);
	virtual void __fastcall TrackControlFocused(NativeUInt AHandle);
	void __fastcall SetCacheSize(const int Value);
	void __fastcall SetOptions(const TAnalyticsOptions Value);
	void __fastcall SetPrivacyMessage(System::Classes::TStrings* const Value);
	void __fastcall SetOnPrivacyMessage(const TAnalyticsPrivacyMessageEvent Value);
	virtual void __fastcall Loaded();
	System::UnicodeString __fastcall GetUserID();
	bool __fastcall GetAllowTracking();
	System::UnicodeString __fastcall GetTimestamp();
	__property System::UnicodeString UserID = {read=GetUserID};
	
public:
	__fastcall virtual TAppAnalytics(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TAppAnalytics();
	void __fastcall TrackEvent(System::UnicodeString ACategory, System::UnicodeString AAction = System::UnicodeString(), System::UnicodeString ALabel = System::UnicodeString(), double AValue = 0.000000E+00);
	NativeUInt __fastcall StartSending();
	bool __fastcall CheckPrivacy();
	__property System::UnicodeString ServerAddress = {read=FServerAddress, write=FServerAddress};
	
__published:
	__property TAnalyticsPrivacyMessageEvent OnPrivacyMessage = {read=FOnPrivacyMessage, write=SetOnPrivacyMessage};
	__property System::UnicodeString ApplicationID = {read=FApplicationID, write=FApplicationID};
	__property bool Active = {read=FActive, write=SetActive, nodefault};
	__property int CacheSize = {read=FMaxCacheSize, write=SetCacheSize, nodefault};
	__property int UpdateInterval = {read=GetUpdateInterval, write=SetUpdateInterval, nodefault};
	__property TAnalyticsOptions Options = {read=FOptions, write=SetOptions, nodefault};
	__property System::Classes::TStrings* PrivacyMessage = {read=FPrivacyMessage, write=SetPrivacyMessage};
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EInvalidAnalyticsUsage : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EInvalidAnalyticsUsage(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EInvalidAnalyticsUsage(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidAnalyticsUsage(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidAnalyticsUsage(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidAnalyticsUsage(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidAnalyticsUsage(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EInvalidAnalyticsUsage(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EInvalidAnalyticsUsage(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidAnalyticsUsage(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidAnalyticsUsage(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidAnalyticsUsage(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidAnalyticsUsage(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EInvalidAnalyticsUsage() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EAnalyticsInitializationFailed : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EAnalyticsInitializationFailed(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EAnalyticsInitializationFailed(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EAnalyticsInitializationFailed(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EAnalyticsInitializationFailed(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EAnalyticsInitializationFailed(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EAnalyticsInitializationFailed(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EAnalyticsInitializationFailed(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EAnalyticsInitializationFailed(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAnalyticsInitializationFailed(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EAnalyticsInitializationFailed(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAnalyticsInitializationFailed(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EAnalyticsInitializationFailed(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EAnalyticsInitializationFailed() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

//-- var, const, procedure ---------------------------------------------------
#ifndef _WIN64
extern DELPHI_PACKAGE TAppAnalytics* __fastcall GetAppAnalytics();
#else /* _WIN64 */
extern DELPHI_PACKAGE TAppAnalytics* __fastcall GetAppAnalytics(void);
#endif /* _WIN64 */
}	/* namespace Appanalytics */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_APPANALYTICS)
using namespace Vcl::Appanalytics;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_AppanalyticsHPP
