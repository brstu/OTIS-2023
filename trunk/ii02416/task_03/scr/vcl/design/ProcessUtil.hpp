// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ProcessUtil.pas' rev: 35.00 (Windows)

#ifndef ProcessutilHPP
#define ProcessutilHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Winapi.Windows.hpp>
#include <PipeUtil.hpp>
#include <Vcl.Dialogs.hpp>
#include <System.SyncObjs.hpp>

//-- user supplied -----------------------------------------------------------

namespace Processutil
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TConsoleProcess;
class DELPHICLASS TReportProcess;
class DELPHICLASS TMonitorProcess;
class DELPHICLASS TMonitorProcessException;
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TEnumProcessesEvent)(int ProcessId, System::UnicodeString ProcessName);

enum DECLSPEC_DENUM TProcessVisibility : unsigned char { pvHide, pvShow = 5 };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TConsoleProcess : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::UnicodeString FCommandLine;
	System::UnicodeString FExeFileName;
	System::UnicodeString FWorkingDir;
	System::Classes::TStrings* FOutput;
	System::Classes::TStrings* FErrors;
	System::Classes::TStrings* FEnvList;
	unsigned FExitCode;
	TProcessVisibility FVisibility;
	bool FDoTimeOut;
	int FTimeOut;
	System::Classes::TStrings* __fastcall ReadEnvList();
	System::UnicodeString __fastcall TranslateEnvList(System::Classes::TStrings* EnvList);
	
protected:
	void __fastcall DoReportFatalError(const System::UnicodeString ErrMsg);
	virtual void __fastcall ReportFatalError(const System::UnicodeString ErrMsg);
	virtual void __fastcall Startup(_STARTUPINFOW &StartupInfo, _PROCESS_INFORMATION &ProcessInfo, Pipeutil::TPipe* &InPipe, Pipeutil::TPipe* &OutPipe, Pipeutil::TPipe* &ErrorPipe);
	virtual bool __fastcall Execute(_STARTUPINFOW &StartupInfo, _PROCESS_INFORMATION &ProcessInfo);
	virtual void __fastcall Running(_STARTUPINFOW &StartupInfo, _PROCESS_INFORMATION &ProcessInfo, Pipeutil::TPipe* &InPipe, Pipeutil::TPipe* &OutPipe, Pipeutil::TPipe* &ErrorPipe);
	virtual void __fastcall Cleanup(_STARTUPINFOW &StartupInfo, _PROCESS_INFORMATION &ProcessInfo, Pipeutil::TPipe* &InPipe, Pipeutil::TPipe* &OutPipe, Pipeutil::TPipe* &ErrorPipe);
	virtual void __fastcall SetExeFileName(System::UnicodeString Value);
	virtual void __fastcall SetCommandLine(System::UnicodeString Value);
	virtual void __fastcall SetWorkingDir(System::UnicodeString Value);
	virtual void __fastcall SetExitCode(unsigned Value);
	virtual System::Classes::TStrings* __fastcall GetOutput();
	virtual void __fastcall SetOutput(System::Classes::TStrings* Value);
	virtual System::Classes::TStrings* __fastcall GetErrors();
	virtual void __fastcall SetErrors(System::Classes::TStrings* Value);
	virtual System::Classes::TStrings* __fastcall GetEnvList();
	virtual void __fastcall SetTimeOut(int Value);
	
public:
	__fastcall TConsoleProcess();
	__fastcall virtual ~TConsoleProcess();
	virtual void __fastcall Run();
	__property System::UnicodeString ExeFileName = {read=FExeFileName, write=SetExeFileName};
	__property System::UnicodeString CommandLine = {read=FCommandLine, write=SetCommandLine};
	__property System::UnicodeString WorkingDir = {read=FWorkingDir, write=SetWorkingDir};
	__property unsigned ExitCode = {read=FExitCode, write=SetExitCode, nodefault};
	__property System::Classes::TStrings* Output = {read=GetOutput, write=SetOutput};
	__property System::Classes::TStrings* Errors = {read=GetErrors, write=SetErrors};
	__property System::Classes::TStrings* EnvList = {read=GetEnvList};
	__property int TimeOut = {read=FTimeOut, write=SetTimeOut, nodefault};
	__property TProcessVisibility Visibility = {read=FVisibility, write=FVisibility, nodefault};
};

#pragma pack(pop)

typedef void __fastcall (__closure *TListChanged)(System::TObject* Sender, System::Classes::TStringList* const List, int Before, int After);

class PASCALIMPLEMENTATION TReportProcess : public TConsoleProcess
{
	typedef TConsoleProcess inherited;
	
protected:
	TListChanged FOnOutputChanged;
	TListChanged FOnErrorChanged;
	virtual bool __fastcall CancelProcess();
	virtual void __fastcall Running(_STARTUPINFOW &StartupInfo, _PROCESS_INFORMATION &ProcessInfo, Pipeutil::TPipe* &InPipe, Pipeutil::TPipe* &OutPipe, Pipeutil::TPipe* &ErrorPipe);
	virtual void __fastcall SetOnOutputChanged(TListChanged Value);
	virtual void __fastcall SetOnErrorChanged(TListChanged Value);
	
public:
	__property TListChanged OnOutChanged = {read=FOnOutputChanged, write=SetOnOutputChanged};
	__property TListChanged OnErrorChanged = {read=FOnErrorChanged, write=SetOnErrorChanged};
public:
	/* TConsoleProcess.Create */ inline __fastcall TReportProcess() : TConsoleProcess() { }
	/* TConsoleProcess.Destroy */ inline __fastcall virtual ~TReportProcess() { }
	
};


class PASCALIMPLEMENTATION TMonitorProcess : public TReportProcess
{
	typedef TReportProcess inherited;
	
private:
	System::Classes::TNotifyEvent FOnTerminate;
	System::Classes::TThread* FMonitor;
	bool FWatch;
	System::Syncobjs::TCriticalSection* FOnOutputLock;
	System::Syncobjs::TCriticalSection* FOnErrorsLock;
	_PROCESS_INFORMATION FProcessInfo;
	_STARTUPINFOW FStartupInfo;
	Pipeutil::TPipe* FInPipe;
	Pipeutil::TPipe* FOutPipe;
	Pipeutil::TPipe* FErrorPipe;
	int FLastOut;
	int FLastErr;
	bool FTerminated;
	
protected:
	HIDESBASE void __fastcall Startup(_STARTUPINFOW &StartupInfo, _PROCESS_INFORMATION &ProcessInfo)/* overload */;
	virtual void __fastcall SetExeFileName(System::UnicodeString Value);
	virtual void __fastcall SetCommandLine(System::UnicodeString Value);
	virtual void __fastcall SetWorkingDir(System::UnicodeString Value);
	virtual System::Classes::TStrings* __fastcall GetOutput();
	virtual void __fastcall SetOutput(System::Classes::TStrings* Value);
	virtual System::Classes::TStrings* __fastcall GetErrors();
	virtual void __fastcall SetErrors(System::Classes::TStrings* Value);
	void __fastcall SetOnTerminate(System::Classes::TNotifyEvent Value);
	virtual void __fastcall SetOnOutputChanged(TListChanged Value);
	virtual void __fastcall SetOnErrorChanged(TListChanged Value);
	NativeUInt __fastcall GetProcess();
	unsigned __fastcall GetProcessId();
	void __fastcall SetWatch(bool Value);
	void __fastcall DoTerminate();
	void __fastcall DoOutputChanged();
	void __fastcall DoErrorChanged();
	
public:
	__fastcall TMonitorProcess()/* overload */;
	__fastcall virtual ~TMonitorProcess();
	virtual bool __fastcall CancelProcess();
	virtual void __fastcall Run();
	bool __fastcall IsRunning()/* overload */;
	__property System::Classes::TNotifyEvent OnTerminate = {read=FOnTerminate, write=SetOnTerminate};
	__property NativeUInt Process = {read=GetProcess, nodefault};
	__property unsigned ProcessID = {read=GetProcessId, nodefault};
	__property bool Watch = {read=FWatch, write=SetWatch, nodefault};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TMonitorProcessException : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall TMonitorProcessException(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall TMonitorProcessException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall TMonitorProcessException(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall TMonitorProcessException(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall TMonitorProcessException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall TMonitorProcessException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall TMonitorProcessException(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall TMonitorProcessException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall TMonitorProcessException(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall TMonitorProcessException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall TMonitorProcessException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall TMonitorProcessException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~TMonitorProcessException() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 UserTerminated = System::Int8(0x64);
extern DELPHI_PACKAGE void __fastcall EnumProcesses(TEnumProcessesEvent EnumProc);
}	/* namespace Processutil */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_PROCESSUTIL)
using namespace Processutil;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// ProcessutilHPP
