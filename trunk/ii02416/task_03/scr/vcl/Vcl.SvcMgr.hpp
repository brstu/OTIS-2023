// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.SvcMgr.pas' rev: 35.00 (Windows)

#ifndef Vcl_SvcmgrHPP
#define Vcl_SvcmgrHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <Winapi.WinSvc.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Svcmgr
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TEventLogger;
class DELPHICLASS TDependency;
class DELPHICLASS TDependencies;
class DELPHICLASS TServiceThread;
class DELPHICLASS TService;
class DELPHICLASS TServiceApplication;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TEventLogger : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::UnicodeString FName;
	NativeUInt FEventLog;
	
public:
	__fastcall TEventLogger(System::UnicodeString Name);
	__fastcall virtual ~TEventLogger();
	void __fastcall LogMessage(System::UnicodeString Message, unsigned EventType = (unsigned)(0x1), System::Word Category = (System::Word)(0x0), unsigned ID = (unsigned)(0x0));
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TDependency : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	System::UnicodeString FName;
	bool FIsGroup;
	
protected:
	virtual System::UnicodeString __fastcall GetDisplayName();
	
__published:
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property bool IsGroup = {read=FIsGroup, write=FIsGroup, nodefault};
public:
	/* TCollectionItem.Create */ inline __fastcall virtual TDependency(System::Classes::TCollection* Collection) : System::Classes::TCollectionItem(Collection) { }
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TDependency() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TDependencies : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	TDependency* operator[](int Index) { return this->Items[Index]; }
	
private:
	System::Classes::TPersistent* FOwner;
	HIDESBASE TDependency* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TDependency* Value);
	
protected:
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	
public:
	__fastcall TDependencies(System::Classes::TPersistent* Owner);
	__property TDependency* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TDependencies() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TServiceThread : public System::Classes::TThread
{
	typedef System::Classes::TThread inherited;
	
private:
	TService* FService;
	
protected:
	virtual void __fastcall Execute();
	
public:
	__fastcall TServiceThread(TService* Service);
	void __fastcall ProcessRequests(bool WaitForMessage);
public:
	/* TThread.Destroy */ inline __fastcall virtual ~TServiceThread() { }
	
};


typedef LPHANDLER_FUNCTION TServiceController;

enum DECLSPEC_DENUM TServiceType : unsigned char { stWin32, stDevice, stFileSystem };

enum DECLSPEC_DENUM TCurrentStatus : unsigned char { csStopped, csStartPending, csStopPending, csRunning, csContinuePending, csPausePending, csPaused };

enum DECLSPEC_DENUM TErrorSeverity : unsigned char { esIgnore, esNormal, esSevere, esCritical };

enum DECLSPEC_DENUM TStartType : unsigned char { stBoot, stSystem, stAuto, stManual, stDisabled };

typedef void __fastcall (__closure *TServiceEvent)(TService* Sender);

typedef void __fastcall (__closure *TContinueEvent)(TService* Sender, bool &Continued);

typedef void __fastcall (__closure *TPauseEvent)(TService* Sender, bool &Paused);

typedef void __fastcall (__closure *TStartEvent)(TService* Sender, bool &Started);

typedef void __fastcall (__closure *TStopEvent)(TService* Sender, bool &Stopped);

class PASCALIMPLEMENTATION TService : public System::Classes::TDataModule
{
	typedef System::Classes::TDataModule inherited;
	
private:
	bool FAllowStop;
	bool FAllowPause;
	TDependencies* FDependencies;
	System::UnicodeString FDisplayName;
	unsigned FErrCode;
	TErrorSeverity FErrorSeverity;
	TEventLogger* FEventLogger;
	bool FInteractive;
	System::UnicodeString FLoadGroup;
	System::Classes::TStringList* FParams;
	System::UnicodeString FPassword;
	System::UnicodeString FServiceStartName;
	TServiceThread* FServiceThread;
	TServiceType FServiceType;
	TStartType FStartType;
	TCurrentStatus FStatus;
	NativeUInt FStatusHandle;
	unsigned FTagID;
	int FWaitHint;
	unsigned FWin32ErrorCode;
	TServiceEvent FBeforeInstall;
	TServiceEvent FAfterInstall;
	TServiceEvent FBeforeUninstall;
	TServiceEvent FAfterUninstall;
	TContinueEvent FOnContinue;
	TServiceEvent FOnExecute;
	TPauseEvent FOnPause;
	TServiceEvent FOnShutdown;
	TStartEvent FOnStart;
	TStopEvent FOnStop;
	System::UnicodeString __fastcall GetDisplayName();
	int __fastcall GetParamCount();
	System::UnicodeString __fastcall GetParam(int Index);
	void __fastcall SetStatus(TCurrentStatus Value);
	void __fastcall SetDependencies(TDependencies* Value);
	System::UnicodeString __fastcall GetNTDependencies();
	unsigned __fastcall GetNTServiceType();
	unsigned __fastcall GetNTStartType();
	unsigned __fastcall GetNTErrorSeverity();
	int __fastcall GetNTControlsAccepted();
	void __fastcall SetOnContinue(TContinueEvent Value);
	void __fastcall SetOnPause(TPauseEvent Value);
	void __fastcall SetOnStop(TStopEvent Value);
	bool __fastcall GetTerminated();
	bool __fastcall AreDependenciesStored();
	void __fastcall SetInteractive(bool Value);
	void __fastcall SetPassword(const System::UnicodeString Value);
	void __fastcall SetServiceStartName(const System::UnicodeString Value);
	
protected:
	void __fastcall Controller(unsigned CtrlCode);
	virtual void __fastcall DoStart();
	virtual bool __fastcall DoStop();
	virtual bool __fastcall DoPause();
	virtual bool __fastcall DoContinue();
	virtual void __fastcall DoInterrogate();
	virtual void __fastcall DoShutdown();
	virtual bool __fastcall DoCustomControl(unsigned CtrlCode);
	void __fastcall Main(unsigned Argc, Winapi::Windows::PLPWSTR Argv);
	
public:
	__fastcall virtual TService(System::Classes::TComponent* AOwner);
	__fastcall virtual TService(System::Classes::TComponent* AOwner, int Dummy);
	__fastcall virtual ~TService();
	virtual LPHANDLER_FUNCTION __fastcall GetServiceController() = 0 ;
	void __fastcall ReportStatus();
	void __fastcall LogMessage(System::UnicodeString Message, unsigned EventType = (unsigned)(0x1), int Category = 0x0, int ID = 0x0);
	__property unsigned ErrCode = {read=FErrCode, write=FErrCode, nodefault};
	__property int ParamCount = {read=GetParamCount, nodefault};
	__property System::UnicodeString Param[int Index] = {read=GetParam};
	__property TServiceThread* ServiceThread = {read=FServiceThread};
	__property TCurrentStatus Status = {read=FStatus, write=SetStatus, nodefault};
	__property bool Terminated = {read=GetTerminated, nodefault};
	__property unsigned Win32ErrCode = {read=FWin32ErrorCode, write=FWin32ErrorCode, nodefault};
	
__published:
	__property bool AllowStop = {read=FAllowStop, write=FAllowStop, default=1};
	__property bool AllowPause = {read=FAllowPause, write=FAllowPause, default=1};
	__property TDependencies* Dependencies = {read=FDependencies, write=SetDependencies, stored=AreDependenciesStored};
	__property System::UnicodeString DisplayName = {read=GetDisplayName, write=FDisplayName};
	__property TErrorSeverity ErrorSeverity = {read=FErrorSeverity, write=FErrorSeverity, default=1};
	__property bool Interactive = {read=FInteractive, write=SetInteractive, default=0};
	__property System::UnicodeString LoadGroup = {read=FLoadGroup, write=FLoadGroup};
	__property System::UnicodeString Password = {read=FPassword, write=SetPassword};
	__property System::UnicodeString ServiceStartName = {read=FServiceStartName, write=SetServiceStartName};
	__property TServiceType ServiceType = {read=FServiceType, write=FServiceType, default=0};
	__property TStartType StartType = {read=FStartType, write=FStartType, default=2};
	__property unsigned TagID = {read=FTagID, write=FTagID, default=0};
	__property int WaitHint = {read=FWaitHint, write=FWaitHint, default=5000};
	__property TServiceEvent BeforeInstall = {read=FBeforeInstall, write=FBeforeInstall};
	__property TServiceEvent AfterInstall = {read=FAfterInstall, write=FAfterInstall};
	__property TServiceEvent BeforeUninstall = {read=FBeforeUninstall, write=FBeforeUninstall};
	__property TServiceEvent AfterUninstall = {read=FAfterUninstall, write=FAfterUninstall};
	__property TContinueEvent OnContinue = {read=FOnContinue, write=SetOnContinue};
	__property TServiceEvent OnExecute = {read=FOnExecute, write=FOnExecute};
	__property TPauseEvent OnPause = {read=FOnPause, write=SetOnPause};
	__property TServiceEvent OnShutdown = {read=FOnShutdown, write=FOnShutdown};
	__property TStartEvent OnStart = {read=FOnStart, write=FOnStart};
	__property TStopEvent OnStop = {read=FOnStop, write=SetOnStop};
};


class PASCALIMPLEMENTATION TServiceApplication : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	bool FDelayInitialize;
	TEventLogger* FEventLogger;
	bool FInitialized;
	System::UnicodeString FTitle;
	void __fastcall OnExceptionHandler(System::TObject* Sender, System::Sysutils::Exception* E);
	int __fastcall GetServiceCount();
	
protected:
	DYNAMIC void __fastcall DoHandleException(System::Sysutils::Exception* E);
	void __fastcall RegisterServices(bool Install, bool Silent);
	bool __fastcall Hook(Winapi::Messages::TMessage &Message);
	void __fastcall DispatchServiceMain(unsigned Argc, Winapi::Windows::PLPWSTR Argv);
	
public:
	__fastcall virtual TServiceApplication(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TServiceApplication();
	__property bool DelayInitialize = {read=FDelayInitialize, write=FDelayInitialize, nodefault};
	__property int ServiceCount = {read=GetServiceCount, nodefault};
	virtual void __fastcall CreateForm(System::Classes::TComponentClass InstanceClass, void *Reference);
	virtual void __fastcall Initialize();
	bool __fastcall Installing();
	virtual void __fastcall Run();
	__property System::UnicodeString Title = {read=FTitle, write=FTitle};
};


//-- var, const, procedure ---------------------------------------------------
static const System::Word CM_SERVICE_CONTROL_CODE = System::Word(0x401);
extern DELPHI_PACKAGE TServiceApplication* Application;
}	/* namespace Svcmgr */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_SVCMGR)
using namespace Vcl::Svcmgr;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_SvcmgrHPP
