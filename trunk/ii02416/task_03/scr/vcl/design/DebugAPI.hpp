// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DebugAPI.pas' rev: 35.00 (Windows)

#ifndef DebugapiHPP
#define DebugapiHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <ToolsAPI.hpp>
#include <System.Classes.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Graphics.hpp>
#include <System.IniFiles.hpp>
#include <Vcl.ActnList.hpp>
#include <PlatformAPI.hpp>

//-- user supplied -----------------------------------------------------------
DEFINE_GUID(IID_IOTAInternalProcessModule,0x9417B3D0,0xF9EE,0x4592,0xA7,0x0E,0x7A,0xD7,0xBC,0xCC,0xBD,0x86);
DEFINE_GUID(IID_IOTADebugScope,0xB16C0B62,0xDF81,0x4CC9,0x81,0xC3,0x3F,0x70,0x85,0xE4,0xF7,0xF8);
DEFINE_GUID(IID_IOTAInternalProcess,0x3EF2E579,0x1F39,0x413F,0x98,0x45,0xC3,0x0F,0xE6,0xFA,0xC3,0x39);
DEFINE_GUID(IID_IOTAInternalProcessNotifier,0x571A2562,0xCA29,0x470F,0xB2,0x75,0xE1,0x5D,0xA0,0xB5,0xFC,0x6A);
DEFINE_GUID(IID_IOTAAppDomainProcess,0x70A0E240,0xE929,0x4EBC,0xAF,0x22,0xEC,0x25,0x1D,0x39,0xBA,0xA4);
DEFINE_GUID(IID_IOTAGenericBreakpoint,0x6A544B68,0x880B,0x485E,0xBC,0x7C,0x31,0x8F,0x0D,0x97,0x25,0x5D);
DEFINE_GUID(IID_IOTAModuleLoadBreakpoint,0xBDAA4920,0x0A2F,0x47C9,0xB4,0x0C,0xDC,0x47,0xD3,0xA7,0xC0,0xDD);
DEFINE_GUID(IID_IOTABreakpointUpdater,0x19DBD5DF,0x75C8,0x4DD5,0x81,0xB3,0xDB,0x65,0x3D,0x72,0xC8,0x15);
DEFINE_GUID(IID_IOTADebugger90,0xB95ECD29,0x2651,0x48E9,0xAF,0xD5,0x71,0xD9,0x25,0x6B,0xB6,0xE3);
DEFINE_GUID(IID_IOTADebugger100,0xF901993F,0x7E7D,0x45C1,0x8B,0x0E,0xE8,0xA8,0x34,0xC4,0x4D,0x61);
DEFINE_GUID(IID_IOTADebugger120,0xF5E6B0B6,0xD447,0x4EAC,0xB9,0x24,0x69,0xF2,0xD3,0x3E,0xE1,0x0C);
DEFINE_GUID(IID_IOTADebugger140,0x4273044A,0x2961,0x4931,0x8D,0x61,0x59,0x7B,0x68,0x59,0x53,0xb7);
DEFINE_GUID(IID_IOTADebugger,0x0E87601D,0x6F17,0x4A68,0xAB,0x06,0xB0,0x9C,0x7C,0x04,0xFF,0x83);
DEFINE_GUID(IID_IOTADebuggerLoadProcess,0xE7C01C41,0x24D1,0x4510,0x9D,0x18,0x33,0x80,0xAE,0xEB,0xDB,0xFC);
DEFINE_GUID(IID_IOTADebuggerAttachToProcess,0x2F5C2E9F,0xF4C2,0x46A0,0x98,0xA5,0x43,0xD0,0x8E,0x06,0xB6,0x8D);
DEFINE_GUID(IID_IOTADebuggerCommandLineParser,0x5F7BF623,0x3B39,0x4003,0xBF,0x3A,0xBE,0x9D,0x28,0x6C,0x56,0xCB);
DEFINE_GUID(IID_IOTADebuggerModuleLoadBreakpoint,0x9A0397F4,0xA782,0x43EC,0x80,0xF1,0x6E,0xCB,0x51,0xF6,0x6B,0xEA);
DEFINE_GUID(IID_IOTADebuggerAddressBreakpoint,0x6A54735B,0x8B44,0x4E00,0x93,0x14,0x21,0xC5,0xAD,0xAC,0xEC,0x7A);
DEFINE_GUID(IID_IOTAExpressionInspector120,0x45DA101C,0xB0CD,0x4CA4,0x83,0x79,0x41,0xA6,0x7C,0xE0,0x37,0x97);
DEFINE_GUID(IID_IOTAExpressionInspector,0xBB1741BC,0xE259,0x4033,0x9D,0x42,0x56,0xC7,0x82,0x8B,0x70,0x7E);
DEFINE_GUID(IID_IOTADebuggerInspector,0xA346C90B,0xAC81,0x406E,0xA6,0xCC,0xF8,0x80,0x13,0x15,0x53,0x38);
DEFINE_GUID(IID_IOTADebuggerLocalVariables,0x7F9237A9,0xD2CE,0x435E,0x8C,0xB1,0x12,0x33,0x40,0xFD,0xD1,0xCA);
DEFINE_GUID(IID_INTALogItem,0x9C9B1104,0xE15D,0x4502,0xBD,0x81,0xC6,0xDE,0x17,0xBD,0x70,0x2B);
DEFINE_GUID(IID_IOTADebugManagerServices120,0x2FC38119,0xD047,0x4619,0x8B,0x6A,0x41,0x81,0xCB,0x5E,0x1C,0x1D);
DEFINE_GUID(IID_IOTADebugManagerServices140,0xBCB3EDB8,0xF840,0x4781,0x8D,0x3A,0x62,0xCB,0x7A,0x64,0xBF,0x2E);
DEFINE_GUID(IID_IOTADebugManagerServices,0xE06AAE7A,0xBA55,0x41F6,0xB8,0xBF,0xC9,0xC5,0xE6,0x33,0x15,0x13);
DEFINE_GUID(IID_INTADebugManagerServices,0x47BAE4F3,0x8359,0x4735,0xA6,0x75,0x58,0x20,0x2F,0x92,0x41,0x1B);
DEFINE_GUID(IID_IDebuggerTrait,0xDF7FA74B,0x54FF,0x4B00,0x96,0x94,0x0A,0x2B,0xA2,0xBA,0x38,0xFD);
DEFINE_GUID(IID_IDbkDebuggerTrait,0x46F48162,0x6B8D,0x4039,0xBA,0x66,0x90,0xFD,0xCC,0xFB,0xC9,0x77);
DEFINE_GUID(IID_IDBKOSExceptionDebuggerTrait,0x2547FBE8,0x9E59,0x4F39,0x97,0x90,0x5C,0xEC,0x1C,0x19,0x8E,0x79);
DEFINE_GUID(IID_IOTACGEventNotifier,0xCAF31982,0xC258,0x459A,0xAA,0x01,0x8A,0x64,0x2E,0xD6,0x1D,0xA5);
DEFINE_GUID(IID_IOTACodeGuardProcess,0x74F601AF,0xBC18,0x4F59,0x8E,0x48,0xE7,0x22,0x36,0x38,0x69,0xA6);
DEFINE_GUID(IID_IOTACodeGuardDebugger,0xC5EFDFAA,0xF234,0x4496,0xAC,0x07,0xAB,0x43,0xC8,0xF1,0x7C,0x47);
DEFINE_GUID(IID_IOTADebuggerManagerNotifier,0xCF6EBE76,0x9C1B,0x419D,0xBD,0x31,0x3B,0xF6,0xE1,0x31,0x0A,0x8B);

namespace Debugapi
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IOTAInternalProcessModule;
typedef System::DelphiInterface<IOTAInternalProcessModule> _di_IOTAInternalProcessModule;
__interface DELPHIINTERFACE IOTADebugScope;
typedef System::DelphiInterface<IOTADebugScope> _di_IOTADebugScope;
__interface DELPHIINTERFACE IOTAInternalProcess;
typedef System::DelphiInterface<IOTAInternalProcess> _di_IOTAInternalProcess;
__interface DELPHIINTERFACE IOTAInternalProcessNotifier;
typedef System::DelphiInterface<IOTAInternalProcessNotifier> _di_IOTAInternalProcessNotifier;
__interface DELPHIINTERFACE IOTAAppDomainProcess;
typedef System::DelphiInterface<IOTAAppDomainProcess> _di_IOTAAppDomainProcess;
__interface DELPHIINTERFACE IOTAGenericBreakpoint;
typedef System::DelphiInterface<IOTAGenericBreakpoint> _di_IOTAGenericBreakpoint;
__interface DELPHIINTERFACE IOTAModuleLoadBreakpoint;
typedef System::DelphiInterface<IOTAModuleLoadBreakpoint> _di_IOTAModuleLoadBreakpoint;
__interface DELPHIINTERFACE IOTABreakpointUpdater;
typedef System::DelphiInterface<IOTABreakpointUpdater> _di_IOTABreakpointUpdater;
__interface DELPHIINTERFACE IOTADebugger90;
typedef System::DelphiInterface<IOTADebugger90> _di_IOTADebugger90;
__interface DELPHIINTERFACE IOTADebugger100;
typedef System::DelphiInterface<IOTADebugger100> _di_IOTADebugger100;
__interface DELPHIINTERFACE IOTADebugger120;
typedef System::DelphiInterface<IOTADebugger120> _di_IOTADebugger120;
__interface DELPHIINTERFACE IOTADebugger140;
typedef System::DelphiInterface<IOTADebugger140> _di_IOTADebugger140;
__interface DELPHIINTERFACE IOTADebugger;
typedef System::DelphiInterface<IOTADebugger> _di_IOTADebugger;
__interface DELPHIINTERFACE INTADebugger;
typedef System::DelphiInterface<INTADebugger> _di_INTADebugger;
__interface DELPHIINTERFACE IOTADebuggerLoadProcess;
typedef System::DelphiInterface<IOTADebuggerLoadProcess> _di_IOTADebuggerLoadProcess;
__interface DELPHIINTERFACE IOTADebuggerAttachToProcess;
typedef System::DelphiInterface<IOTADebuggerAttachToProcess> _di_IOTADebuggerAttachToProcess;
__interface DELPHIINTERFACE IOTADebuggerCommandLineParser;
typedef System::DelphiInterface<IOTADebuggerCommandLineParser> _di_IOTADebuggerCommandLineParser;
__interface DELPHIINTERFACE IOTADebuggerModuleLoadBreakpoint;
typedef System::DelphiInterface<IOTADebuggerModuleLoadBreakpoint> _di_IOTADebuggerModuleLoadBreakpoint;
__interface DELPHIINTERFACE IOTADebuggerAddressBreakpoint;
typedef System::DelphiInterface<IOTADebuggerAddressBreakpoint> _di_IOTADebuggerAddressBreakpoint;
__interface DELPHIINTERFACE IOTAInspectorNotifier;
typedef System::DelphiInterface<IOTAInspectorNotifier> _di_IOTAInspectorNotifier;
__interface DELPHIINTERFACE IOTAExpressionInspector120;
typedef System::DelphiInterface<IOTAExpressionInspector120> _di_IOTAExpressionInspector120;
__interface DELPHIINTERFACE IOTAExpressionInspector;
typedef System::DelphiInterface<IOTAExpressionInspector> _di_IOTAExpressionInspector;
__interface DELPHIINTERFACE IOTADebuggerInspector;
typedef System::DelphiInterface<IOTADebuggerInspector> _di_IOTADebuggerInspector;
__interface DELPHIINTERFACE IOTADebuggerLocalVariables;
typedef System::DelphiInterface<IOTADebuggerLocalVariables> _di_IOTADebuggerLocalVariables;
__interface DELPHIINTERFACE INTALogItem;
typedef System::DelphiInterface<INTALogItem> _di_INTALogItem;
__interface DELPHIINTERFACE IOTACGEventNotifier;
typedef System::DelphiInterface<IOTACGEventNotifier> _di_IOTACGEventNotifier;
__interface DELPHIINTERFACE IOTACodeGuardProcess;
typedef System::DelphiInterface<IOTACodeGuardProcess> _di_IOTACodeGuardProcess;
__interface DELPHIINTERFACE IOTACodeGuardDebugger;
typedef System::DelphiInterface<IOTACodeGuardDebugger> _di_IOTACodeGuardDebugger;
__interface DELPHIINTERFACE IOTADebuggerPlatform;
typedef System::DelphiInterface<IOTADebuggerPlatform> _di_IOTADebuggerPlatform;
__interface DELPHIINTERFACE IOTADebuggerManagerNotifier;
typedef System::DelphiInterface<IOTADebuggerManagerNotifier> _di_IOTADebuggerManagerNotifier;
__interface DELPHIINTERFACE IOTADebugManagerServices120;
typedef System::DelphiInterface<IOTADebugManagerServices120> _di_IOTADebugManagerServices120;
__interface DELPHIINTERFACE IOTADebugManagerServices140;
typedef System::DelphiInterface<IOTADebugManagerServices140> _di_IOTADebugManagerServices140;
__interface DELPHIINTERFACE IOTADebugManagerServices;
typedef System::DelphiInterface<IOTADebugManagerServices> _di_IOTADebugManagerServices;
__interface DELPHIINTERFACE INTADebugManagerServices;
typedef System::DelphiInterface<INTADebugManagerServices> _di_INTADebugManagerServices;
__interface DELPHIINTERFACE IDebuggerTrait;
typedef System::DelphiInterface<IDebuggerTrait> _di_IDebuggerTrait;
struct TDefaultLanguageException;
__interface DELPHIINTERFACE IDBKDebuggerTrait;
typedef System::DelphiInterface<IDBKDebuggerTrait> _di_IDBKDebuggerTrait;
struct TDefaultOSException;
__interface DELPHIINTERFACE IDBKOSExceptionDebuggerTrait;
typedef System::DelphiInterface<IDBKOSExceptionDebuggerTrait> _di_IDBKOSExceptionDebuggerTrait;
__interface DELPHIINTERFACE IOTAInternalThreadNotifier;
typedef System::DelphiInterface<IOTAInternalThreadNotifier> _di_IOTAInternalThreadNotifier;
__interface DELPHIINTERFACE IOTAInternalThread;
typedef System::DelphiInterface<IOTAInternalThread> _di_IOTAInternalThread;
//-- type declarations -------------------------------------------------------
__interface  INTERFACE_UUID("{9417B3D0-F9EE-4592-A70E-7AD7BCCCBD86}") IOTAInternalProcessModule  : public System::IInterface 
{
	virtual int __fastcall GetCompUnitInternalIndex(int Index) = 0 ;
	virtual int __fastcall GetCompUnitFileInternalIndex(int CompIndex, int FileIndex) = 0 ;
	__property int CompUnitInternalIndex[int Index] = {read=GetCompUnitInternalIndex};
	__property int CompUnitFileInternalIndex[int CompIndex][int FileIndex] = {read=GetCompUnitFileInternalIndex};
};

__interface  INTERFACE_UUID("{B16C0B62-DF81-4CC9-81C3-3F7085E4F7F8}") IOTADebugScope  : public System::IInterface 
{
	virtual void __fastcall Browse() = 0 ;
	virtual bool __fastcall CanBrowse() = 0 ;
	virtual System::UnicodeString __fastcall GetScopeName() = 0 ;
	virtual int __fastcall GetVarMemberCount() = 0 ;
	virtual int __fastcall GetMethodMemberCount() = 0 ;
	virtual int __fastcall GetPropMemberCount() = 0 ;
	virtual int __fastcall GetTypeMemberCount() = 0 ;
	virtual int __fastcall GetClassMemberCount() = 0 ;
	virtual System::UnicodeString __fastcall GetVarMemberName(int MemberIndex) = 0 ;
	virtual System::UnicodeString __fastcall GetMethodMemberName(int MemberIndex) = 0 ;
	virtual System::UnicodeString __fastcall GetPropMemberName(int MemberIndex) = 0 ;
	virtual System::UnicodeString __fastcall GetTypeMemberName(int MemberIndex) = 0 ;
	virtual System::UnicodeString __fastcall GetClassMemberName(int MemberIndex) = 0 ;
	virtual int __fastcall GetSubScopeCount() = 0 ;
	virtual _di_IOTADebugScope __fastcall GetSubScope(int Index) = 0 ;
	virtual _di_IOTADebugScope __fastcall GetClassSubScope(int Index) = 0 ;
	virtual Toolsapi::_di_IOTAProcess __fastcall GetOwningProcess() = 0 ;
	virtual Toolsapi::_di_IOTAProcessModule __fastcall GetContainingProcessModule() = 0 ;
	virtual void * __fastcall GetMetaDataToken() = 0 ;
	virtual void __fastcall GotoMethod(int MemberIndex) = 0 ;
	__property System::UnicodeString ScopeName = {read=GetScopeName};
	__property int VarMemberCount = {read=GetVarMemberCount};
	__property int MethodMemberCount = {read=GetMethodMemberCount};
	__property int PropMemberCount = {read=GetPropMemberCount};
	__property int TypeMemberCount = {read=GetTypeMemberCount};
	__property int ClassMemberCount = {read=GetClassMemberCount};
	__property System::UnicodeString VarMemberName[int MemberIndex] = {read=GetVarMemberName};
	__property System::UnicodeString MethodMemberName[int MemberIndex] = {read=GetMethodMemberName};
	__property System::UnicodeString PropMemberName[int MemberIndex] = {read=GetPropMemberName};
	__property System::UnicodeString TypeMemberName[int MemberIndex] = {read=GetTypeMemberName};
	__property System::UnicodeString ClassMemberName[int MemberIndex] = {read=GetClassMemberName};
	__property int SubScopeCount = {read=GetSubScopeCount};
	__property _di_IOTADebugScope SubScope[int Index] = {read=GetSubScope};
	__property _di_IOTADebugScope ClassSubScope[int Index] = {read=GetClassSubScope};
	__property Toolsapi::_di_IOTAProcess OwningProcess = {read=GetOwningProcess};
	__property Toolsapi::_di_IOTAProcessModule ContainingProcessModule = {read=GetContainingProcessModule};
	__property void * MetaDataToken = {read=GetMetaDataToken};
};

__interface  INTERFACE_UUID("{3EF2E579-1F39-413F-9845-C30FE6FAC339}") IOTAInternalProcess  : public System::IInterface 
{
	virtual _di_IOTADebugger __fastcall GetOwningDebugger() = 0 ;
	virtual int __fastcall GetRootScopeCount() = 0 ;
	virtual _di_IOTADebugScope __fastcall GetRootScope(int ScopeIndex) = 0 ;
	virtual void __fastcall ResetRootScope() = 0 ;
	__property int RootScopeCount = {read=GetRootScopeCount};
	__property _di_IOTADebugScope RootScope[int ScopeIndex] = {read=GetRootScope};
};

__interface  INTERFACE_UUID("{571A2562-CA29-470F-B275-E15DA0B5FC6A}") IOTAInternalProcessNotifier  : public Toolsapi::IOTANotifier 
{
	virtual void __fastcall RootScopeChanged(const Toolsapi::_di_IOTAProcess Process) = 0 ;
	virtual void __fastcall ThreadStateChanged(const Toolsapi::_di_IOTAThread Thread) = 0 ;
};

__interface  INTERFACE_UUID("{70A0E240-E929-4EBC-AF22-EC251D39BAA4}") IOTAAppDomainProcess  : public System::IInterface 
{
	virtual int __fastcall GetAppDomainCount() = 0 ;
	virtual System::UnicodeString __fastcall GetAppDomain(int AppDomainIndex) = 0 ;
	virtual int __fastcall GetAppDomainModuleCount(int AppDomainIndex) = 0 ;
	virtual Toolsapi::_di_IOTAProcessModule __fastcall GetAppDomainModule(int AppDomainIndex, int ModuleIndex) = 0 ;
	__property int AppDomainCount = {read=GetAppDomainCount};
	__property System::UnicodeString AppDomain[int AppDomainIndex] = {read=GetAppDomain};
	__property int AppDomainModuleCount[int AppDomainIndex] = {read=GetAppDomainModuleCount};
	__property Toolsapi::_di_IOTAProcessModule AppDomainModule[int AppDomainIndex][int ModuleIndex] = {read=GetAppDomainModule};
};

enum DECLSPEC_DENUM TBreakpointCommand : unsigned char { bcEdit, bcSetEnabled, bcEditSource, bcViewSource };

typedef System::Set<TBreakpointCommand, TBreakpointCommand::bcEdit, TBreakpointCommand::bcViewSource> TBreakpointCommands;

__interface  INTERFACE_UUID("{6A544B68-880B-485E-BC7C-318F0D97255D}") IOTAGenericBreakpoint  : public System::IInterface 
{
	virtual void __fastcall Deleted() = 0 ;
	virtual void __fastcall Edit(bool AllowKeyChanges) = 0 ;
	virtual void __fastcall EditViewSource(Vcl::Forms::TCustomForm* BehindWindow) = 0 ;
	virtual TBreakpointCommands __fastcall GetBreakpointCommands() = 0 ;
	virtual System::UnicodeString __fastcall GetFileNameString() = 0 ;
	virtual System::UnicodeString __fastcall GetLineString() = 0 ;
	virtual System::UnicodeString __fastcall GetConditionString() = 0 ;
	virtual System::UnicodeString __fastcall GetThreadString() = 0 ;
	virtual System::UnicodeString __fastcall GetActionString() = 0 ;
	virtual System::UnicodeString __fastcall GetPassCountString() = 0 ;
	virtual System::UnicodeString __fastcall GetGroupString() = 0 ;
	virtual bool __fastcall GetEnabled() = 0 ;
	virtual void __fastcall SetEnabled(bool Value) = 0 ;
	virtual void __fastcall SetConditionString(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetGroupString(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetPassCount(const int Value) = 0 ;
};

__interface  INTERFACE_UUID("{BDAA4920-0A2F-47C9-B40C-DC47D3A7C0DD}") IOTAModuleLoadBreakpoint  : public System::IInterface 
{
	virtual System::UnicodeString __fastcall GetModuleName() = 0 ;
	__property System::UnicodeString ModuleName = {read=GetModuleName};
};

__interface  INTERFACE_UUID("{19DBD5DF-75C8-4DD5-81B3-DB653D72C815}") IOTABreakpointUpdater  : public System::IInterface 
{
	virtual void __fastcall SetCurPassCount(int Value) = 0 ;
	virtual void __fastcall SetEnabled(bool Value) = 0 ;
	virtual void __fastcall Changed() = 0 ;
};

enum DECLSPEC_DENUM TDebugCommand : unsigned char { dcRun, dcRunNoDebug, dcStepOver, dcStepInto, dcStepToNextSource, dcRunToCursor, dcStepOut, dcShowCurrentLocation, dcPause, dcReset, dcDetach, dcSetNextStatement };

typedef System::Set<TDebugCommand, TDebugCommand::dcRun, TDebugCommand::dcSetNextStatement> TDebugCommands;

enum DECLSPEC_DENUM TRunParametersCommand : unsigned char { rpcHostApp, rpcParams, rpcCurrentWorkingDirectory, rpcLauncher, rpcDebugSourcePath, rpcEnvBlock, rpcSymbolTables };

typedef System::Set<TRunParametersCommand, TRunParametersCommand::rpcHostApp, TRunParametersCommand::rpcSymbolTables> TRunParametersCommands;

enum DECLSPEC_DENUM TLoadProcessCommand : unsigned char { lpcHostApp, lpcParams, lpcCurrentWorkingDirectory, lpcLauncher, lpcDebugSourcePath, lpcRemoteHost, lpcRemotePath, lpcRemoteParams, lpcRemoteCurrentWorkingDirectory, lpcRemoteLauncher, lpcRemoteDebugSourcePath, lpcRunAfterLoad, lpcRunToEntryAfterLoad, lpcRunToFirstSourceAfterLoad, lpcNoRunAfterLoad, lpcEnvBlock, lpcSymbolTables };

typedef System::Set<TLoadProcessCommand, TLoadProcessCommand::lpcHostApp, TLoadProcessCommand::lpcSymbolTables> TLoadProcessCommands;

enum DECLSPEC_DENUM TAttachProcessCommand : unsigned char { apcLocalAttach, apcRemoteAttach, apcSystemProcesses, apcPauseAfterAttach };

typedef System::Set<TAttachProcessCommand, TAttachProcessCommand::apcLocalAttach, TAttachProcessCommand::apcPauseAfterAttach> TAttachProcessCommands;

enum DECLSPEC_DENUM TWatchFormat : unsigned char { dfCharacter, dfDecimal, dfMemoryDump, dfPointer, dfStructureUnion, dfString, dfHexadecimal, dfOrdinal, dfDefault, dfAllowCalls, dfFloatingPoint, dfFloatingPointDigits, dfRepeatCount };

typedef System::Set<TWatchFormat, TWatchFormat::dfCharacter, TWatchFormat::dfRepeatCount> TWatchFormats;

__interface  INTERFACE_UUID("{B95ECD29-2651-48E9-AFD5-71D9256BB6E3}") IOTADebugger90  : public System::IInterface 
{
	virtual int __fastcall AddNotifier(const Toolsapi::_di_IOTADebuggerNotifier ANotifier) = 0 ;
	virtual void __fastcall RemoveNotifier(int Index) = 0 ;
	virtual System::UnicodeString __fastcall GetDebuggerName() = 0 ;
	virtual void __fastcall Run() = 0 ;
	virtual void __fastcall RunToCursor() = 0 ;
	virtual void __fastcall StepOver() = 0 ;
	virtual void __fastcall StepInto() = 0 ;
	virtual void __fastcall StepToNextSource() = 0 ;
	virtual void __fastcall StepOut() = 0 ;
	virtual void __fastcall InstructionStepOver() = 0 ;
	virtual void __fastcall InstructionStepInto() = 0 ;
	virtual void __fastcall Pause() = 0 ;
	virtual void __fastcall Reset() = 0 ;
	virtual void __fastcall Detach() = 0 ;
	virtual bool __fastcall ResetAll() = 0 ;
	virtual bool __fastcall DetachAll() = 0 ;
	virtual void __fastcall GetCurrentSourceLocation(System::UnicodeString &AFileName, int &ALineNo) = 0 ;
	virtual bool __fastcall ShowCurrentLocation() = 0 ;
	virtual bool __fastcall ShowException() = 0 ;
	virtual bool __fastcall ShowFault() = 0 ;
	virtual TDebugCommands __fastcall GetSupportedDebugCommands() = 0 ;
	virtual TDebugCommands __fastcall GetEnabledDebugCommands() = 0 ;
	virtual TDebugCommands __fastcall GetEnabledDebugCommandsForProcess(const Toolsapi::_di_IOTAProcess Process) = 0 ;
	virtual TWatchFormats __fastcall GetSupportedWatchFormats() = 0 ;
	virtual bool __fastcall GetStepping() = 0 ;
	virtual void __fastcall NotifyProjectGroupClosed() = 0 ;
	virtual void __fastcall Activated() = 0 ;
	virtual void __fastcall Deactivated() = 0 ;
	virtual void __fastcall HandleDebugMessage(int WParam, int LParam) = 0 ;
	virtual int __fastcall GetProcessCount() = 0 ;
	virtual Toolsapi::_di_IOTAProcess __fastcall GetProcess(int Index) = 0 ;
	virtual Toolsapi::_di_IOTAProcess __fastcall GetCurrentProcess() = 0 ;
	virtual void __fastcall SetCurrentProcess(const Toolsapi::_di_IOTAProcess AProcess) = 0 ;
	virtual Toolsapi::TOTAEvaluateResult __fastcall Evaluate(const System::UnicodeString ExprStr, System::WideChar * ResultStr, unsigned ResultStrSize, /* out */ bool &CanModify, Toolsapi::TOTAEvalSideEffects SideEffects, char * FormatSpecifiers, /* out */ unsigned __int64 &ResultAddr, /* out */ unsigned &ResultSize, /* out */ unsigned &ResultVal) = 0 ;
	virtual void __fastcall DebugOptionsChanged(const Toolsapi::_di_IOTAProcess Process) = 0 ;
	virtual void __fastcall ProcessMemoryChanged(bool EIPChanged) = 0 ;
	virtual void __fastcall SourceBreakpointAdded(const Toolsapi::_di_IOTASourceBreakpoint Breakpoint) = 0 ;
	virtual void __fastcall SourceBreakpointDeleted(const Toolsapi::_di_IOTASourceBreakpoint Breakpoint) = 0 ;
	virtual void __fastcall SourceBreakpointChanged(const Toolsapi::_di_IOTASourceBreakpoint Breakpoint) = 0 ;
	virtual int __fastcall GetAdditionalBreakpointCount() = 0 ;
	virtual _di_IOTAGenericBreakpoint __fastcall GetAdditionalBreakpoint(int Index) = 0 ;
	virtual void __fastcall SaveAdditionalBreakpoints(System::Inifiles::TCustomIniFile* DesktopFile) = 0 ;
	virtual void __fastcall LoadAdditionalBreakpoints(System::Inifiles::TCustomIniFile* DesktopFile) = 0 ;
};

__interface  INTERFACE_UUID("{F901993F-7E7D-45C1-8B0E-E8A834C44D61}") IOTADebugger100  : public IOTADebugger90 
{
	virtual bool __fastcall SetNextStatement(const System::UnicodeString Filename, int LineNumber, System::UnicodeString &ErrorMsg) = 0 ;
	virtual void __fastcall ReplaceProcessOptionsWithGlobal(const Toolsapi::_di_IOTAProcess Process) = 0 ;
};

__interface  INTERFACE_UUID("{F5E6B0B6-D447-4EAC-B924-69F2D33EE10C}") IOTADebugger120  : public IOTADebugger100 
{
	virtual void __fastcall ToggleBreakpointOnFrame(int FrameIndex) = 0 ;
	virtual Toolsapi::_di_IOTABreakpoint __fastcall GetFrameBreakpoint(int FrameIndex) = 0 ;
	virtual bool __fastcall FrameHasDebugInfo(int FrameIndex) = 0 ;
	virtual System::UnicodeString __fastcall GetDisplayableDebuggerName() = 0 ;
};

__interface  INTERFACE_UUID("{4273044A-2961-4931-8D61-597B685953B7}") IOTADebugger140  : public IOTADebugger120 
{
	virtual void __fastcall ProcessDebugEvents() = 0 ;
	virtual bool __fastcall CanSetNextStatement(const System::UnicodeString Filename, int LineNumber) = 0 ;
};

__interface  INTERFACE_UUID("{0E87601D-6F17-4A68-AB06-B09C7C04FF83}") IOTADebugger  : public IOTADebugger140 
{
	virtual bool __fastcall CanToggleBreakpointOnFrame(int FrameIndex) = 0 ;
	virtual TRunParametersCommands __fastcall GetSupportedRunParametersCommands() = 0 ;
};

__interface  INTERFACE_UUID("{44582965-9CD9-4339-AD2B-2A2B44C91FBA}") INTADebugger  : public System::IInterface 
{
	virtual void __fastcall GetDebuggerOptionsAddinClasses(System::Classes::TStrings* PageList, const Toolsapi::_di_IOTAProcess Process) = 0 ;
};

enum DECLSPEC_DENUM TLoadProcessAfterLoad : unsigned char { lpalNoRun, lpalRunToEntry, lpalRunToFirstSource, lpalRun };

__interface  INTERFACE_UUID("{E7C01C41-24D1-4510-9D18-3380AEEBDBFC}") IOTADebuggerLoadProcess  : public System::IInterface 
{
	virtual TLoadProcessCommands __fastcall GetSupportedLoadProcessCommands() = 0 ;
	virtual void __fastcall LoadProcess(const System::UnicodeString ProcessName, const System::UnicodeString Params, const System::UnicodeString Launcher, const System::UnicodeString CWD, const System::UnicodeString SourcePath, const System::UnicodeString RemoteHostMachine, System::Classes::TStrings* EnvVars, TLoadProcessAfterLoad AfterRun, const System::UnicodeString SymbolSearchPath, bool LoadAllSymbols, bool LoadUnspecifiedSymbols, System::Classes::TStrings* SymTabs, const System::UnicodeString RemoteProfile = System::UnicodeString()) = 0 ;
	virtual System::UnicodeString __fastcall GetLauncherPromptString() = 0 ;
	virtual System::UnicodeString __fastcall GetDefaultLauncher() = 0 ;
};

__interface  INTERFACE_UUID("{2F5C2E9F-F4C2-46A0-98A5-43D08E06B68D}") IOTADebuggerAttachToProcess  : public System::IInterface 
{
	virtual TAttachProcessCommands __fastcall GetSupportedAttachCommands() = 0 ;
	virtual void __fastcall GetRunningProcessList(System::Classes::TStrings* &Processes, const System::UnicodeString RemoteHostMachine = System::UnicodeString(), const System::UnicodeString RemoteProfile = System::UnicodeString(), bool ShowSystemProcesses = true) = 0 ;
	virtual void __fastcall AttachToProcess(int ProcessId, const System::UnicodeString ProcessName, const System::UnicodeString RemoteHostName, bool PauseAfterAttach, bool DetachOnReset, const System::UnicodeString RemoteProfile = System::UnicodeString()) = 0 ;
};

__interface  INTERFACE_UUID("{5F7BF623-3B39-4003-BF3A-BE9D286C56CB}") IOTADebuggerCommandLineParser  : public System::IInterface 
{
	virtual bool __fastcall ParseCommandLine(System::Classes::TStrings* ACmdLine, bool CheckOnly) = 0 ;
	virtual System::UnicodeString __fastcall GetCommandLineInfo() = 0 ;
	virtual System::UnicodeString __fastcall GetCommandLineSwitch() = 0 ;
	virtual int __fastcall GetOldCommandLineSwitchCount() = 0 ;
	virtual System::UnicodeString __fastcall GetOldCommandLineSwitch(int Index) = 0 ;
	__property System::UnicodeString CommandLineSwitch = {read=GetCommandLineSwitch};
	__property int OldCommandLineSwitchCount = {read=GetOldCommandLineSwitchCount};
	__property System::UnicodeString OldCommandLineSwitch[int Index] = {read=GetOldCommandLineSwitch};
};

__interface  INTERFACE_UUID("{9A0397F4-A782-43EC-80F1-6ECB51F66BEA}") IOTADebuggerModuleLoadBreakpoint  : public System::IInterface 
{
	virtual void __fastcall ToggleModuleBreakpoint(const System::UnicodeString ModuleName) = 0 ;
	virtual bool __fastcall ModuleHasBreakpoint(const System::UnicodeString ModuleName) = 0 ;
	virtual int __fastcall GetModuleBreakpointCount() = 0 ;
	virtual System::UnicodeString __fastcall GetModuleBreakpoint(int Index) = 0 ;
	virtual System::UnicodeString __fastcall GetAddModuleFilter() = 0 ;
	__property int ModuleBreakpointCount = {read=GetModuleBreakpointCount};
	__property System::UnicodeString ModuleBreakpoint[int Index] = {read=GetModuleBreakpoint};
};

__interface  INTERFACE_UUID("{6A54735B-8B44-4E00-9314-21C5ADACEC7A}") IOTADebuggerAddressBreakpoint  : public System::IInterface 
{
	virtual Toolsapi::_di_IOTABreakpoint __fastcall NewAddressBreakpoint(unsigned __int64 Address, unsigned Length, Toolsapi::TOTAAccessType AccessType, const Toolsapi::_di_IOTAProcess AProcess = Toolsapi::_di_IOTAProcess()) = 0 ;
};

enum DECLSPEC_DENUM TExpressionInspectorStatusFlag : unsigned char { eisfCanChange, eisfCanSetRange, eisfRangeSet, eisfBlank, eisfBad };

typedef System::Set<TExpressionInspectorStatusFlag, TExpressionInspectorStatusFlag::eisfCanChange, TExpressionInspectorStatusFlag::eisfBad> TExpressionInspectorStatusFlags;

enum DECLSPEC_DENUM TExpressionInspectorMemberFlag : unsigned char { eimfCanInspect, eimfCanExpand, eimfCanModify, eimfRequiresMethodCall };

typedef System::Set<TExpressionInspectorMemberFlag, TExpressionInspectorMemberFlag::eimfCanInspect, TExpressionInspectorMemberFlag::eimfRequiresMethodCall> TExpressionInspectorMemberFlags;

enum DECLSPEC_DENUM TExpressionInspectorDisplayFlag : unsigned char { eidfShowInherited, eidfShowFullyQualifiedNames, eidfAlphaSort, eidfIncludeMethods, eidfDecimal, eidfHexadecimal };

typedef System::Set<TExpressionInspectorDisplayFlag, TExpressionInspectorDisplayFlag::eidfShowInherited, TExpressionInspectorDisplayFlag::eidfHexadecimal> TExpressionInspectorDisplayFlags;

enum DECLSPEC_DENUM TExpressionInspectorMemberType : unsigned char { eimtData, eimtMethod, eimtProperty };

__interface  INTERFACE_UUID("{9252D98E-D637-4B61-AE73-CB6DCBA1F8FA}") IOTAInspectorNotifier  : public Toolsapi::IOTANotifier 
{
	virtual void __fastcall InspectComplete(const _di_IOTAExpressionInspector ExpressionInspector) = 0 ;
	virtual void __fastcall SubInspectComplete(const _di_IOTAExpressionInspector ExpressionInspector) = 0 ;
	virtual void __fastcall RefreshComplete(const _di_IOTAExpressionInspector ExpressionInspector) = 0 ;
};

__interface  INTERFACE_UUID("{45DA101C-B0CD-4CA4-8379-41A67CE03797}") IOTAExpressionInspector120  : public System::IInterface 
{
	virtual int __fastcall AddNotifier(const _di_IOTAInspectorNotifier ANotifier) = 0 ;
	virtual void __fastcall RemoveNotifier(int Index) = 0 ;
	virtual System::UnicodeString __fastcall GetTitleLine() = 0 ;
	virtual TExpressionInspectorStatusFlags __fastcall GetStatusFlags() = 0 ;
	virtual TExpressionInspectorDisplayFlags __fastcall GetDisplayFlags() = 0 ;
	virtual void __fastcall SetDisplayFlags(TExpressionInspectorDisplayFlags Value) = 0 ;
	virtual bool __fastcall GetCurrentRange(int &RangeStart, int &RangeCount) = 0 ;
	virtual bool __fastcall SetCurrentRange(int RangeStart, int RangeCount) = 0 ;
	virtual int __fastcall GetMemberCount(TExpressionInspectorMemberType MemberType) = 0 ;
	virtual System::UnicodeString __fastcall GetMemberName(TExpressionInspectorMemberType MemberType, int Index) = 0 ;
	virtual System::UnicodeString __fastcall GetMemberValue(TExpressionInspectorMemberType MemberType, int Index) = 0 ;
	virtual TExpressionInspectorMemberFlags __fastcall GetMemberFlags(TExpressionInspectorMemberType MemberType, int Index) = 0 ;
	virtual bool __fastcall ChangeMemberValue(TExpressionInspectorMemberType MemberType, int Index, const System::UnicodeString NewValue) = 0 ;
	virtual _di_IOTAExpressionInspector __fastcall SubInspectMember(TExpressionInspectorMemberType MemberType, int Index, Toolsapi::TOTAEvaluateResult &InspectResult) = 0 ;
	virtual bool __fastcall GetCanExpand() = 0 ;
	virtual bool __fastcall GetExpanded() = 0 ;
	virtual System::UnicodeString __fastcall GetErrorMessage() = 0 ;
	virtual int __fastcall GetFrameNumber() = 0 ;
	virtual Toolsapi::_di_IOTAThread __fastcall GetThread() = 0 ;
	virtual void __fastcall SetExpanded(bool Value) = 0 ;
	virtual Toolsapi::TOTAEvaluateResult __fastcall SetFrameNumber(int Value) = 0 ;
	virtual Toolsapi::TOTAEvaluateResult __fastcall Refresh(bool RefreshAllSubInspectors) = 0 ;
	__property bool CanExpand = {read=GetCanExpand};
	__property TExpressionInspectorDisplayFlags DisplayFlags = {read=GetDisplayFlags, write=SetDisplayFlags};
	__property System::UnicodeString ErrorMessage = {read=GetErrorMessage};
	__property bool Expanded = {read=GetExpanded, write=SetExpanded};
	__property int FrameNumber = {read=GetFrameNumber};
	__property int MemberCount[TExpressionInspectorMemberType MemberType] = {read=GetMemberCount};
	__property TExpressionInspectorMemberFlags MemberFlags[TExpressionInspectorMemberType MemberType][int Index] = {read=GetMemberFlags};
	__property System::UnicodeString MemberName[TExpressionInspectorMemberType MemberType][int Index] = {read=GetMemberName};
	__property System::UnicodeString MemberValue[TExpressionInspectorMemberType MemberType][int Index] = {read=GetMemberValue};
	__property TExpressionInspectorStatusFlags StatusFlags = {read=GetStatusFlags};
	__property Toolsapi::_di_IOTAThread Thread = {read=GetThread};
	__property System::UnicodeString TitleLine = {read=GetTitleLine};
};

__interface  INTERFACE_UUID("{BB1741BC-E259-4033-9D42-56C7828B707E}") IOTAExpressionInspector  : public IOTAExpressionInspector120 
{
	virtual unsigned __int64 __fastcall GetAddress() = 0 ;
	virtual System::UnicodeString __fastcall GetTypeName() = 0 ;
	virtual System::UnicodeString __fastcall GetValue() = 0 ;
	virtual unsigned __int64 __fastcall GetMemberAddress(TExpressionInspectorMemberType MemberType, int Index) = 0 ;
	virtual System::UnicodeString __fastcall GetMemberType(TExpressionInspectorMemberType MemberType, int Index) = 0 ;
	virtual System::UnicodeString __fastcall GetMemberFullExpression(TExpressionInspectorMemberType MemberType, int Index) = 0 ;
	virtual bool __fastcall GetMemberError(TExpressionInspectorMemberType MemberType, int Index) = 0 ;
	virtual System::UnicodeString __fastcall GetFullExpression() = 0 ;
	virtual bool __fastcall GetUseVisualizer() = 0 ;
	virtual void __fastcall SetUseVisualizer(const bool Value) = 0 ;
	__property unsigned __int64 Address = {read=GetAddress};
	__property System::UnicodeString TypeName = {read=GetTypeName};
	__property System::UnicodeString Value = {read=GetValue};
	__property unsigned __int64 MemberAddress[TExpressionInspectorMemberType MemberType][int Index] = {read=GetMemberAddress};
	__property System::UnicodeString MemberType[TExpressionInspectorMemberType MemberType][int Index] = {read=GetMemberType};
	__property System::UnicodeString MemberFullExpression[TExpressionInspectorMemberType MemberType][int Index] = {read=GetMemberFullExpression};
	__property bool MemberError[TExpressionInspectorMemberType MemberType][int Index] = {read=GetMemberError};
	__property System::UnicodeString FullExpression = {read=GetFullExpression};
	__property bool UseVisualizer = {read=GetUseVisualizer, write=SetUseVisualizer};
};

__interface  INTERFACE_UUID("{A346C90B-AC81-406E-A6CC-F88013155338}") IOTADebuggerInspector  : public System::IInterface 
{
	virtual Toolsapi::TOTAEvaluateResult __fastcall CreateInspectorAtSource(const System::UnicodeString Expression, const System::UnicodeString FileName, int LineNumber, /* out */ _di_IOTAExpressionInspector &Inspector) = 0 ;
	virtual void __fastcall InspectAtSource(const System::UnicodeString Expression, const System::UnicodeString FileName, int LineNumber) = 0 ;
	virtual Toolsapi::TOTAEvaluateResult __fastcall CreateInspector(const System::UnicodeString Expression, /* out */ _di_IOTAExpressionInspector &Inspector) = 0 ;
	virtual void __fastcall Inspect(const System::UnicodeString Expression) = 0 /* overload */;
	virtual void __fastcall Inspect(const _di_IOTAExpressionInspector ExpressionInspector) = 0 /* overload */;
	virtual bool __fastcall SupportsCreateInspectorAtSource() = 0 ;
};

__interface  INTERFACE_UUID("{7F9237A9-D2CE-435E-8CB1-123340FDD1CA}") IOTADebuggerLocalVariables  : public System::IInterface 
{
	virtual bool __fastcall SupportsStackFrames() = 0 ;
	virtual Toolsapi::TOTAEvaluateResult __fastcall InspectLocalVariables(/* out */ _di_IOTAExpressionInspector &Inspector, int InitialFrame = 0x1) = 0 ;
};

__interface  INTERFACE_UUID("{9C9B1104-E15D-4502-BD81-C6DE17BD702B}") INTALogItem  : public System::IInterface 
{
	virtual System::Uitypes::TColor __fastcall GetForegroundColor() = 0 ;
	virtual System::Uitypes::TColor __fastcall GetBackgroundColor() = 0 ;
};

__interface  INTERFACE_UUID("{CAF31982-C258-459A-AA01-8A642ED61DA5}") IOTACGEventNotifier  : public System::IInterface 
{
	virtual void __fastcall CGEventOccurred(unsigned __int64 EventAddress, const System::UnicodeString EventMessage, /* out */ bool &ShouldStop, const Toolsapi::_di_IOTAProcess Process) = 0 ;
	virtual void __fastcall CGLibraryFound(const Toolsapi::_di_IOTAProcess Process) = 0 ;
};

__interface  INTERFACE_UUID("{74F601AF-BC18-4F59-8E4B-E722363869A6}") IOTACodeGuardProcess  : public System::IInterface 
{
	virtual int __fastcall AddNotifier(const _di_IOTACGEventNotifier ANotifier) = 0 ;
	virtual void __fastcall RemoveNotifier(int Index) = 0 ;
	virtual bool __fastcall IsCodeGuardPresent() = 0 ;
	virtual System::UnicodeString __fastcall GetCodeGuardSourcePath() = 0 ;
	virtual void __fastcall SetCodeGuardSourcePath(const System::UnicodeString Path) = 0 ;
};

__interface  INTERFACE_UUID("{C5EFDFAA-F234-4496-AC07-AB43C8F17C47}") IOTACodeGuardDebugger  : public System::IInterface 
{
	
};

__interface  INTERFACE_UUID("{84006B34-6049-434E-B677-965C209C20EC}") IOTADebuggerPlatform  : public System::IInterface 
{
	virtual System::UnicodeString __fastcall GetPlatform() = 0 ;
	virtual System::UnicodeString __fastcall GetPlatformPathDelim() = 0 ;
	virtual System::UnicodeString __fastcall GetPlatformPathSep() = 0 ;
};

__interface  INTERFACE_UUID("{CF6EBE76-9C1B-419D-BD31-3BF6E1310A8B}") IOTADebuggerManagerNotifier  : public Toolsapi::IOTANotifier 
{
	virtual void __fastcall DebuggerAdded(const _di_IOTADebugger Debugger) = 0 ;
	virtual void __fastcall DebuggerRemoved(const _di_IOTADebugger Debugger) = 0 ;
};

__interface  INTERFACE_UUID("{2FC38119-D047-4619-8B6A-4181CB5E1C1D}") IOTADebugManagerServices120  : public System::IInterface 
{
	virtual int __fastcall AddNotifier(const _di_IOTADebuggerManagerNotifier ANotifier) = 0 ;
	virtual void __fastcall RemoveNotifier(int Index) = 0 ;
	virtual void __fastcall RegisterDebugger(const _di_IOTADebugger ADebugger) = 0 ;
	virtual void __fastcall UnregisterDebugger(const _di_IOTADebugger ADebugger) = 0 ;
	virtual void __fastcall ActivateDebugger(const _di_IOTADebugger ADebugger) = 0 ;
	virtual void __fastcall AddEventLogOptionType(const System::UnicodeString LogTypeName) = 0 ;
	virtual void __fastcall SetEventLogOption(const System::UnicodeString LogTypeName, bool Value, const Toolsapi::_di_IOTAProcess Process) = 0 ;
	virtual bool __fastcall GetEventLogOption(const System::UnicodeString LogTypeName, const Toolsapi::_di_IOTAProcess Process) = 0 ;
	virtual void __fastcall AddEventLogColorType(const System::UnicodeString LogColorName) = 0 ;
	virtual void __fastcall SetEventLogColorOption(const System::UnicodeString LogColorName, System::Uitypes::TColor FGColor, System::Uitypes::TColor BGColor) = 0 ;
	virtual void __fastcall GetEventLogColorOption(const System::UnicodeString LogColorName, System::Uitypes::TColor &FGColor, System::Uitypes::TColor &BGColor) = 0 ;
	virtual void __fastcall AddLogStr(const System::UnicodeString LogStr, Toolsapi::TLogItemType LogItemType, const _di_INTALogItem LogItem, const Toolsapi::_di_IOTAProcess AProcess) = 0 ;
	virtual int __fastcall GetDebuggerCount() = 0 ;
	virtual _di_IOTADebugger __fastcall GetDebugger(int Index) = 0 ;
	virtual _di_IOTADebugger __fastcall GetCurrentDebugger() = 0 ;
	virtual int __fastcall GetProcessCount() = 0 ;
	virtual Toolsapi::_di_IOTAProcess __fastcall GetProcess(int Index) = 0 ;
	virtual Toolsapi::_di_IOTAProcess __fastcall GetCurrentProcess() = 0 ;
	virtual void __fastcall SetCurrentProcess(const Toolsapi::_di_IOTAProcess AProcess) = 0 ;
	virtual bool __fastcall GetIntegratedDebuggingOption() = 0 ;
	virtual bool __fastcall DebugFileExists(const System::UnicodeString FileName) = 0 ;
	virtual System::UnicodeString __fastcall GetDebugSearchPath() = 0 ;
	virtual System::UnicodeString __fastcall GetDebugSourcePath() = 0 ;
	virtual void __fastcall PostDebugMessage(const _di_IOTADebugger Sender, int WParam, int LParam) = 0 ;
	virtual void __fastcall ToggleBreakpoint(const System::UnicodeString Filename, int LineNumber) = 0 ;
	virtual void __fastcall EditProcessProperties(const Toolsapi::_di_IOTAProcess Process) = 0 ;
	virtual void __fastcall DebugFocusIDE() = 0 ;
	__property _di_IOTADebugger CurrentDebugger = {read=GetCurrentDebugger};
	__property Toolsapi::_di_IOTAProcess CurrentProcess = {read=GetCurrentProcess, write=SetCurrentProcess};
	__property int DebuggerCount = {read=GetDebuggerCount};
	__property _di_IOTADebugger Debuggers[int Index] = {read=GetDebugger};
	__property int ProcessCount = {read=GetProcessCount};
	__property Toolsapi::_di_IOTAProcess Processes[int Index] = {read=GetProcess};
};

__interface  INTERFACE_UUID("{BCB3EDB8-F840-4781-8D3A-62CB7A64BF2E}") IOTADebugManagerServices140  : public IOTADebugManagerServices120 
{
	virtual Toolsapi::_di_IOTASourceBreakpoint __fastcall FindBreakpoint(const System::UnicodeString Filename, const int LineNumber) = 0 ;
	virtual bool __fastcall GetReplacerVisualizerForType(const System::UnicodeString TypeName, /* out */ Toolsapi::_di_IOTADebuggerVisualizerValueReplacer &Replacer) = 0 ;
	virtual System::UnicodeString __fastcall GetReplacerValue(const System::UnicodeString Expression, const System::UnicodeString TypeName, const System::UnicodeString EvalResult) = 0 ;
	virtual int __fastcall GetExternalViewerVisualizerForTypeCount(const System::UnicodeString TypeName) = 0 ;
	virtual Toolsapi::_di_IOTADebuggerVisualizerExternalViewer __fastcall GetExternalViewerVisualizerForType(const System::UnicodeString TypeName, int Index) = 0 ;
	virtual bool __fastcall GetTDGoodies() = 0 ;
	__property bool TDGoodies = {read=GetTDGoodies};
};

__interface  INTERFACE_UUID("{E06AAE7A-BA55-41F6-B8BF-C9C5E6331513}") IOTADebugManagerServices  : public IOTADebugManagerServices140 
{
	virtual void __fastcall AddAutoCloseViewType(const System::UnicodeString ViewIdent, const System::UnicodeString ViewDisplayName, bool DefaultValue) = 0 ;
	virtual bool __fastcall GetAutoCloseViewOption(const System::UnicodeString ViewIdent) = 0 ;
};

__interface  INTERFACE_UUID("{47BAE4F3-8359-4735-A675-58202F92411B}") INTADebugManagerServices  : public System::IInterface 
{
	virtual void __fastcall RegisterAddBreakpointItem(Vcl::Actnlist::TCustomAction* NewAction) = 0 ;
};

__interface  INTERFACE_UUID("{DF7FA74B-54FF-4B00-9694-0A2BA2BA38FD}") IDebuggerTrait  : public System::IInterface 
{
	virtual System::UnicodeString __fastcall GetDefaultDebuggerName(const System::UnicodeString PlatformName = System::UnicodeString()) = 0 ;
};

enum DECLSPEC_DENUM TEvaluatorType: signed char { etNone = -1, etDelphi, etCPPBuilder, etMicrosoftCPP, etAssembly, etConstant, etJava, etGenericMSIL, etCSharpMSIL, etDelphiMSIL, etDelphiLLDB, etCPPBuilderLLDB };

struct DECLSPEC_DRECORD TDefaultLanguageException
{
public:
	System::UnicodeString ExceptionName;
	System::UnicodeString TypeName;
	System::TResStringRec *DisplayName;
	bool IgnoreException;
};


__interface  INTERFACE_UUID("{46F48162-6B8D-4039-BA66-90FDCCFBC977}") IDBKDebuggerTrait  : public System::IInterface 
{
	virtual TEvaluatorType __fastcall GetEvaluatorType() = 0 ;
	virtual int __fastcall GetDefaultLanguageExceptionsCount() = 0 ;
	virtual TDefaultLanguageException __fastcall GetDefaultLanguageException(int Index) = 0 ;
	virtual System::UnicodeString __fastcall GetDebugSymbolSearchPath(const Toolsapi::_di_IOTAProject AProject) = 0 ;
	virtual System::UnicodeString __fastcall GetDebugSourcePath(const Toolsapi::_di_IOTAProject AProject) = 0 ;
	virtual System::UnicodeString __fastcall GetDebugSourceFilter() = 0 ;
	__property int DefaultLanguageExceptionCount = {read=GetDefaultLanguageExceptionsCount};
	__property TDefaultLanguageException DefaultLanguageException[int Index] = {read=GetDefaultLanguageException};
};

struct DECLSPEC_DRECORD TDefaultOSException
{
public:
	unsigned ExceptionLowValue;
	unsigned ExceptionHighValue;
};


__interface  INTERFACE_UUID("{2547FBE8-9E59-4F39-9790-5CEC1C198E79}") IDBKOSExceptionDebuggerTrait  : public System::IInterface 
{
	virtual int __fastcall GetDefaultOSExceptionCount() = 0 ;
	virtual TDefaultOSException __fastcall GetDefaultOSException(int Index) = 0 ;
	__property int DefaultOSExceptionCount = {read=GetDefaultOSExceptionCount};
	__property TDefaultOSException DefaultOSException[int Index] = {read=GetDefaultOSException};
};

__interface  INTERFACE_UUID("{A188C5BC-3B1A-4309-B6FC-A3249B06B398}") IOTAInternalThreadNotifier  : public Toolsapi::IOTANotifier 
{
	virtual void __fastcall EvaluateComplete(const System::UnicodeString ExprStr, const System::UnicodeString ResultStr, const System::UnicodeString TypeNameStr, bool CanModify, unsigned __int64 ResultAddress, unsigned ResultSize, int ReturnCode) = 0 ;
};

__interface  INTERFACE_UUID("{5977CC90-83B0-439B-9B24-92A77140A923}") IOTAInternalThread  : public System::IInterface 
{
	virtual int __fastcall AddNotifier(const _di_IOTAInternalThreadNotifier Notifier) = 0 ;
	virtual Toolsapi::TOTAEvaluateResult __fastcall Evaluate(const System::UnicodeString ExprStr, System::WideChar * ResultStr, unsigned ResultStrSize, /* out */ bool &CanModify, Toolsapi::TOTAEvalSideEffects SideEffects, char * FormatSpecifiers, /* out */ unsigned __int64 &ResultAddr, /* out */ unsigned &ResultSize, /* out */ unsigned &ResultVal, System::UnicodeString FileName, int LineNumber, System::WideChar * TypeNameStr, unsigned TypeNameStrSize) = 0 /* overload */;
	virtual void __fastcall RemoveNotifier(int Index) = 0 ;
	virtual int __fastcall GetFocusedFrame() = 0 ;
	virtual void __fastcall SetFocusedFrame(int FrameIndex) = 0 ;
};

//-- var, const, procedure ---------------------------------------------------
#define AllDebugCommands (System::Set<TDebugCommand, TDebugCommand::dcRun, TDebugCommand::dcSetNextStatement>() << TDebugCommand::dcRun << TDebugCommand::dcRunNoDebug << TDebugCommand::dcStepOver << TDebugCommand::dcStepInto << TDebugCommand::dcStepToNextSource << TDebugCommand::dcRunToCursor << TDebugCommand::dcStepOut << TDebugCommand::dcShowCurrentLocation << TDebugCommand::dcPause << TDebugCommand::dcReset << TDebugCommand::dcDetach )
#define AllLoadProcessCommands (System::Set<TLoadProcessCommand, TLoadProcessCommand::lpcHostApp, TLoadProcessCommand::lpcSymbolTables>() << TLoadProcessCommand::lpcHostApp << TLoadProcessCommand::lpcParams << TLoadProcessCommand::lpcCurrentWorkingDirectory << TLoadProcessCommand::lpcLauncher << TLoadProcessCommand::lpcDebugSourcePath << TLoadProcessCommand::lpcRemoteHost << TLoadProcessCommand::lpcRemotePath << TLoadProcessCommand::lpcRemoteParams << TLoadProcessCommand::lpcRemoteCurrentWorkingDirectory << TLoadProcessCommand::lpcRemoteLauncher << TLoadProcessCommand::lpcRemoteDebugSourcePath << TLoadProcessCommand::lpcRunAfterLoad << TLoadProcessCommand::lpcRunToEntryAfterLoad << TLoadProcessCommand::lpcRunToFirstSourceAfterLoad << TLoadProcessCommand::lpcNoRunAfterLoad \
	<< TLoadProcessCommand::lpcEnvBlock << TLoadProcessCommand::lpcSymbolTables )
#define AllRunParametersCommands (System::Set<TRunParametersCommand, TRunParametersCommand::rpcHostApp, TRunParametersCommand::rpcSymbolTables>() << TRunParametersCommand::rpcHostApp << TRunParametersCommand::rpcParams << TRunParametersCommand::rpcCurrentWorkingDirectory << TRunParametersCommand::rpcLauncher << TRunParametersCommand::rpcDebugSourcePath << TRunParametersCommand::rpcEnvBlock << TRunParametersCommand::rpcSymbolTables )
#define AllAttachProcessCommands (System::Set<TAttachProcessCommand, TAttachProcessCommand::apcLocalAttach, TAttachProcessCommand::apcPauseAfterAttach>() << TAttachProcessCommand::apcLocalAttach << TAttachProcessCommand::apcRemoteAttach << TAttachProcessCommand::apcSystemProcesses << TAttachProcessCommand::apcPauseAfterAttach )
#define AllWatchFormats (System::Set<TWatchFormat, TWatchFormat::dfCharacter, TWatchFormat::dfRepeatCount>() << TWatchFormat::dfCharacter << TWatchFormat::dfDecimal << TWatchFormat::dfMemoryDump << TWatchFormat::dfPointer << TWatchFormat::dfStructureUnion << TWatchFormat::dfString << TWatchFormat::dfHexadecimal << TWatchFormat::dfOrdinal << TWatchFormat::dfDefault << TWatchFormat::dfAllowCalls << TWatchFormat::dfFloatingPoint << TWatchFormat::dfFloatingPointDigits << TWatchFormat::dfRepeatCount )
#define StoppedProcessStates (System::Set<Toolsapi::TOTAProcessState, Toolsapi::TOTAProcessState::psNothing, Toolsapi::TOTAProcessState::psNoProcess>() << Toolsapi::TOTAProcessState::psStopped << Toolsapi::TOTAProcessState::psFault << Toolsapi::TOTAProcessState::psResFault << Toolsapi::TOTAProcessState::psException )
#define cBuiltinWin32Debugger L"EmbarcaderoWin32Debugger"
#define cBuiltinWin64Debugger L"EmbarcaderoWin64Debugger"
#define cBuiltinWin64LLDBDebugger L"EmbarcaderoWin64LLDBDebugger"
#define cBuiltinDotNetDebugger L"EmbarcaderoDotNetDebugger"
#define cBuiltinHybridDebugger L"EmbarcaderoHybridDebugger"
#define cBuiltinOSX32Debugger L"EmbarcaderoOSX32Debugger"
#define cBuiltinOSX64Debugger L"EmbarcaderoOSX64Debugger"
#define cBuiltinOSXArm64Debugger L"EmbarcaderoOSXArm64Debugger"
#define cBuiltinLinux32Debugger L"EmbarcaderoLinux32Debugger"
#define cBuiltinAndroid32Debugger L"EmbarcaderoAndroid32Debugger"
#define cBuiltinAndroid64Debugger L"EmbarcaderoAndroid64Debugger"
#define cBuiltinIOS32Debugger L"EmbarcaderoIOS32DeviceDebugger"
#define cBuiltinIOS64Debugger L"EmbarcaderoIOS64DeviceDebugger"
#define cBuiltinLinux64Debugger L"EmbarcaderoLinux64Debugger"
extern DELPHI_PACKAGE System::ResourceString _sBuiltinWin32Debugger;
#define Debugapi_sBuiltinWin32Debugger System::LoadResourceString(&Debugapi::_sBuiltinWin32Debugger)
extern DELPHI_PACKAGE System::ResourceString _sBuiltinWin64Debugger;
#define Debugapi_sBuiltinWin64Debugger System::LoadResourceString(&Debugapi::_sBuiltinWin64Debugger)
extern DELPHI_PACKAGE System::ResourceString _sBuiltinWin64LLDBDebugger;
#define Debugapi_sBuiltinWin64LLDBDebugger System::LoadResourceString(&Debugapi::_sBuiltinWin64LLDBDebugger)
extern DELPHI_PACKAGE System::ResourceString _sBuiltinDotNetDebugger;
#define Debugapi_sBuiltinDotNetDebugger System::LoadResourceString(&Debugapi::_sBuiltinDotNetDebugger)
extern DELPHI_PACKAGE System::ResourceString _sBuiltinHybridDebugger;
#define Debugapi_sBuiltinHybridDebugger System::LoadResourceString(&Debugapi::_sBuiltinHybridDebugger)
extern DELPHI_PACKAGE System::ResourceString _sBuiltinOSX32Debugger;
#define Debugapi_sBuiltinOSX32Debugger System::LoadResourceString(&Debugapi::_sBuiltinOSX32Debugger)
extern DELPHI_PACKAGE System::ResourceString _sBuiltinOSX64Debugger;
#define Debugapi_sBuiltinOSX64Debugger System::LoadResourceString(&Debugapi::_sBuiltinOSX64Debugger)
extern DELPHI_PACKAGE System::ResourceString _sBuiltinOSXArm64Debugger;
#define Debugapi_sBuiltinOSXArm64Debugger System::LoadResourceString(&Debugapi::_sBuiltinOSXArm64Debugger)
extern DELPHI_PACKAGE System::ResourceString _sBuiltinLinux32Debugger;
#define Debugapi_sBuiltinLinux32Debugger System::LoadResourceString(&Debugapi::_sBuiltinLinux32Debugger)
extern DELPHI_PACKAGE System::ResourceString _sBuiltinAndroid32Debugger;
#define Debugapi_sBuiltinAndroid32Debugger System::LoadResourceString(&Debugapi::_sBuiltinAndroid32Debugger)
extern DELPHI_PACKAGE System::ResourceString _sBuiltinAndroid64Debugger;
#define Debugapi_sBuiltinAndroid64Debugger System::LoadResourceString(&Debugapi::_sBuiltinAndroid64Debugger)
extern DELPHI_PACKAGE System::ResourceString _sBuiltinIOS32Debugger;
#define Debugapi_sBuiltinIOS32Debugger System::LoadResourceString(&Debugapi::_sBuiltinIOS32Debugger)
extern DELPHI_PACKAGE System::ResourceString _sBuiltinIOS64Debugger;
#define Debugapi_sBuiltinIOS64Debugger System::LoadResourceString(&Debugapi::_sBuiltinIOS64Debugger)
extern DELPHI_PACKAGE System::ResourceString _sBuiltinLinux64Debugger;
#define Debugapi_sBuiltinLinux64Debugger System::LoadResourceString(&Debugapi::_sBuiltinLinux64Debugger)
extern DELPHI_PACKAGE _di_IOTADebugManagerServices DebuggerManagerServices;
}	/* namespace Debugapi */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DEBUGAPI)
using namespace Debugapi;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DebugapiHPP
