// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DeploymentAPI.pas' rev: 35.00 (Windows)

#ifndef DeploymentapiHPP
#define DeploymentapiHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <ToolsAPI.hpp>
#include <PlatformAPI.hpp>
#include <System.Generics.Collections.hpp>
#include <System.Types.hpp>
#include <System.Generics.Defaults.hpp>

//-- user supplied -----------------------------------------------------------

namespace Deploymentapi
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IOTADeploymentService;
typedef System::DelphiInterface<IOTADeploymentService> _di_IOTADeploymentService;
__interface DELPHIINTERFACE IProjectSupportsDeploymentTrait230;
typedef System::DelphiInterface<IProjectSupportsDeploymentTrait230> _di_IProjectSupportsDeploymentTrait230;
__interface DELPHIINTERFACE IProjectSupportsDeploymentTrait;
typedef System::DelphiInterface<IProjectSupportsDeploymentTrait> _di_IProjectSupportsDeploymentTrait;
__interface DELPHIINTERFACE IDeployableProject;
typedef System::DelphiInterface<IDeployableProject> _di_IDeployableProject;
__interface DELPHIINTERFACE IProjectDeploymentItem;
typedef System::DelphiInterface<IProjectDeploymentItem> _di_IProjectDeploymentItem;
__interface DELPHIINTERFACE IProjectDeploymentFile170;
typedef System::DelphiInterface<IProjectDeploymentFile170> _di_IProjectDeploymentFile170;
__interface DELPHIINTERFACE IProjectDeploymentFile190;
typedef System::DelphiInterface<IProjectDeploymentFile190> _di_IProjectDeploymentFile190;
__interface DELPHIINTERFACE IProjectDeploymentFile;
typedef System::DelphiInterface<IProjectDeploymentFile> _di_IProjectDeploymentFile;
__interface DELPHIINTERFACE IProjectDeploymentClass;
typedef System::DelphiInterface<IProjectDeploymentClass> _di_IProjectDeploymentClass;
__interface DELPHIINTERFACE IProjectDeploymentNotifier;
typedef System::DelphiInterface<IProjectDeploymentNotifier> _di_IProjectDeploymentNotifier;
__interface DELPHIINTERFACE IProjectDeployment170;
typedef System::DelphiInterface<IProjectDeployment170> _di_IProjectDeployment170;
__interface DELPHIINTERFACE IProjectDeployment180;
typedef System::DelphiInterface<IProjectDeployment180> _di_IProjectDeployment180;
__interface DELPHIINTERFACE IProjectDeployment190;
typedef System::DelphiInterface<IProjectDeployment190> _di_IProjectDeployment190;
__interface DELPHIINTERFACE IProjectDeployment200;
typedef System::DelphiInterface<IProjectDeployment200> _di_IProjectDeployment200;
__interface DELPHIINTERFACE IProjectDeployment220;
typedef System::DelphiInterface<IProjectDeployment220> _di_IProjectDeployment220;
__interface DELPHIINTERFACE IProjectDeployment230;
typedef System::DelphiInterface<IProjectDeployment230> _di_IProjectDeployment230;
__interface DELPHIINTERFACE IProjectDeployment;
typedef System::DelphiInterface<IProjectDeployment> _di_IProjectDeployment;
//-- type declarations -------------------------------------------------------
__interface  INTERFACE_UUID("{658EBC6E-E96F-45FA-934B-505D158852C7}") IOTADeploymentService  : public System::IInterface 
{
	virtual void __fastcall DeployManagerProject(const Toolsapi::_di_IOTAProject Project) = 0 ;
};

__interface  INTERFACE_UUID("{45F5E6B4-CFAE-4C8A-A6CE-D6513E12BE17}") IProjectSupportsDeploymentTrait230  : public System::IInterface 
{
	virtual bool __fastcall ProjectSupportsDeployment() = 0 ;
};

__interface  INTERFACE_UUID("{E58E526C-3D36-4D3D-A2FF-F8D153569F29}") IProjectSupportsDeploymentTrait  : public IProjectSupportsDeploymentTrait230 
{
	HIDESBASE virtual bool __fastcall ProjectSupportsDeployment _DEPRECATED_ATTRIBUTE1("Use the overloaded version with IOTAProject parameter") () = 0 /* overload */;
	HIDESBASE virtual bool __fastcall ProjectSupportsDeployment(const Toolsapi::_di_IOTAProject Project) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{F775F090-1966-4C65-B778-DF4CD2F7F9E6}") IDeployableProject  : public System::IInterface 
{
	
};

enum DECLSPEC_DENUM TDeployOperation : unsigned char { doCopyOnly, doSetExecBit, doUnArchive, doRun, doUnused, doExecuteScript, doNotSpecified };

enum DECLSPEC_DENUM TDeploymentItemAction : unsigned char { daAdded, daChanged, daRemoved, daReconciled };

__interface  INTERFACE_UUID("{9D9FC05C-49BD-4FD8-8425-833D16FA55E3}") IProjectDeploymentItem  : public System::IInterface 
{
	virtual System::UnicodeString __fastcall GetCondition() = 0 ;
	virtual System::Generics::Collections::TList__1<System::UnicodeString>* __fastcall GetLocalCommands(const System::UnicodeString PlatformName) = 0 ;
	virtual TDeployOperation __fastcall GetOperation(const System::UnicodeString PlatformName) = 0 ;
	virtual System::DynamicArray<System::UnicodeString> __fastcall GetPlatforms() = 0 ;
	virtual System::Generics::Collections::TList__1<System::UnicodeString>* __fastcall GetRemoteCommands(const System::UnicodeString PlatformName) = 0 ;
	virtual System::UnicodeString __fastcall GetRemoteDir(const System::UnicodeString PlatformName) = 0 ;
	virtual bool __fastcall GetRequired() = 0 ;
	virtual void __fastcall RemovePlatform(const System::UnicodeString PlatformName) = 0 ;
	virtual void __fastcall SetCondition(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetOperation(const System::UnicodeString PlatformName, const TDeployOperation Value) = 0 ;
	virtual void __fastcall SetRemoteDir(const System::UnicodeString PlatformName, const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetRequired(bool Value) = 0 ;
	__property System::UnicodeString Condition = {read=GetCondition, write=SetCondition};
	__property System::Generics::Collections::TList__1<System::UnicodeString>* LocalCommands[const System::UnicodeString PlatformName] = {read=GetLocalCommands};
	__property TDeployOperation Operation[const System::UnicodeString PlatformName] = {read=GetOperation, write=SetOperation};
	__property System::Generics::Collections::TList__1<System::UnicodeString>* RemoteCommands[const System::UnicodeString PlatformName] = {read=GetRemoteCommands};
	__property System::UnicodeString RemoteDir[const System::UnicodeString PlatformName] = {read=GetRemoteDir, write=SetRemoteDir};
	__property bool Required = {read=GetRequired, write=SetRequired};
	__property System::DynamicArray<System::UnicodeString> Platforms = {read=GetPlatforms};
};

__interface  INTERFACE_UUID("{184728B4-5713-4D50-A042-CD027A7802BA}") IProjectDeploymentFile170  : public IProjectDeploymentItem 
{
	virtual System::UnicodeString __fastcall GetConfiguration() = 0 ;
	virtual System::UnicodeString __fastcall GetDeploymentClass() = 0 ;
	virtual bool __fastcall GetEnabled(const System::UnicodeString PlatformName) = 0 ;
	virtual System::UnicodeString __fastcall GetLocalName() = 0 ;
	virtual System::UnicodeString __fastcall GetRemoteName(const System::UnicodeString PlatformName) = 0 ;
	virtual void __fastcall SetConfiguration(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetDeploymentClass(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetEnabled(const System::UnicodeString PlatformName, const bool Value) = 0 ;
	virtual void __fastcall SetLocalName(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetRemoteName(const System::UnicodeString PlatformName, const System::UnicodeString Value) = 0 ;
	__property System::UnicodeString Configuration = {read=GetConfiguration, write=SetConfiguration};
	__property System::UnicodeString DeploymentClass = {read=GetDeploymentClass, write=SetDeploymentClass};
	__property bool Enabled[const System::UnicodeString PlatformName] = {read=GetEnabled, write=SetEnabled};
	__property System::UnicodeString LocalName = {read=GetLocalName, write=SetLocalName};
	__property System::UnicodeString RemoteName[const System::UnicodeString PlatformName] = {read=GetRemoteName, write=SetRemoteName};
};

__interface  INTERFACE_UUID("{51CC1C02-BB0F-4CF1-8F48-68ABAEE511C2}") IProjectDeploymentFile190  : public IProjectDeploymentFile170 
{
	virtual System::UnicodeString __fastcall GetFilePlatform() = 0 ;
	virtual void __fastcall SetFilePlatform(const System::UnicodeString Value) = 0 ;
	__property System::UnicodeString FilePlatform = {read=GetFilePlatform, write=SetFilePlatform};
};

__interface  INTERFACE_UUID("{F8032C03-731C-4A4D-A493-8F119129B07D}") IProjectDeploymentFile  : public IProjectDeploymentFile190 
{
	virtual bool __fastcall GetOverwrite(const System::UnicodeString PlatformName) = 0 ;
	virtual void __fastcall SetOverwrite(const System::UnicodeString PlatformName, bool Value) = 0 ;
	__property bool Overwrite[const System::UnicodeString PlatformName] = {read=GetOverwrite, write=SetOverwrite};
};

__interface  INTERFACE_UUID("{C1FA0FD1-A0B0-4465-BE24-6C37C75B6D28}") IProjectDeploymentClass  : public IProjectDeploymentItem 
{
	virtual System::UnicodeString __fastcall GetClassId() = 0 ;
	virtual System::UnicodeString __fastcall GetDescription() = 0 ;
	virtual void __fastcall SetClassId(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetDescription(const System::UnicodeString Value) = 0 ;
	virtual bool __fastcall ValidFor(const System::UnicodeString Filename, const System::UnicodeString PlatformName) = 0 ;
	__property System::UnicodeString ClassId = {read=GetClassId, write=SetClassId};
	__property System::UnicodeString Description = {read=GetDescription, write=SetDescription};
};

__interface  INTERFACE_UUID("{E3BBD079-75B6-46F6-AC61-AD4B3B793111}") IProjectDeploymentNotifier  : public System::IInterface 
{
	virtual void __fastcall Destroyed() = 0 ;
	virtual void __fastcall ItemChanged(const _di_IProjectDeploymentItem Item, TDeploymentItemAction Action) = 0 ;
	virtual void __fastcall Loaded(const System::UnicodeString ClassId) = 0 ;
};

typedef System::DynamicArray<_di_IProjectDeploymentFile> TDeploymentFileArray;

typedef System::DynamicArray<_di_IProjectDeploymentClass> TDeploymentClassArray;

enum DECLSPEC_DENUM TReconcileResult : unsigned char { rrSuccess, rrNotUpToDate, rrCompileRequired, rrFailed, rrNotSupported };

__interface  INTERFACE_UUID("{FF8F9951-52D1-40F1-8A34-A72969BEE0D6}") IProjectDeployment170  : public System::IInterface 
{
	virtual int __fastcall AddNotifier(const _di_IProjectDeploymentNotifier Notifier) = 0 ;
	virtual void __fastcall AddClass(const _di_IProjectDeploymentClass AClass) = 0 ;
	virtual void __fastcall AddFile(const _di_IProjectDeploymentFile AFile) = 0 ;
	virtual void __fastcall Clear() = 0 ;
	virtual _di_IProjectDeploymentClass __fastcall CreateClass(const System::UnicodeString ClassId) = 0 ;
	virtual _di_IProjectDeploymentFile __fastcall CreateFile(const System::UnicodeString LocalName) = 0 ;
	virtual TDeploymentFileArray __fastcall FindFiles(const System::UnicodeString LocalName, const System::UnicodeString Configuration, const System::UnicodeString PlatformName, const System::UnicodeString ClassName) = 0 ;
	virtual System::Generics::Collections::TDictionary__2<System::UnicodeString,_di_IProjectDeploymentClass>::TValueCollection* __fastcall GetClasses() = 0 ;
	virtual _di_IProjectDeploymentClass __fastcall GetClass(const System::UnicodeString ClassId) = 0 ;
	virtual TDeploymentClassArray __fastcall GetDefaultClasses(const System::UnicodeString Filename, const System::UnicodeString PlatformName) = 0 ;
	virtual _di_IProjectDeploymentFile __fastcall GetFile(const System::UnicodeString LocalName) = 0 ;
	virtual System::Generics::Collections::TDictionary__2<System::UnicodeString,_di_IProjectDeploymentFile>::TValueCollection* __fastcall GetFiles() = 0 ;
	virtual TDeploymentFileArray __fastcall GetFilesOfClass(const System::UnicodeString ClassId) = 0 ;
	virtual System::UnicodeString __fastcall GetProjectOutputFile(const System::UnicodeString PlatformName = System::UnicodeString(), const System::UnicodeString ConfigurationName = System::UnicodeString()) = 0 ;
	virtual System::UnicodeString __fastcall GetRemoteProjectDir(System::UnicodeString PlatformName) = 0 ;
	virtual bool __fastcall IsEmpty() = 0 ;
	virtual TReconcileResult __fastcall Reconcile(System::UnicodeString Configuration = System::UnicodeString(), System::UnicodeString PlatformName = System::UnicodeString()) = 0 ;
	virtual void __fastcall RemoveClass(const System::UnicodeString ClassId) = 0 ;
	virtual void __fastcall RemoveFile(const System::UnicodeString LocalName) = 0 ;
	virtual void __fastcall RemoveFilesOfClass(const System::UnicodeString ClassId) = 0 ;
	virtual void __fastcall RemoveNotifier(const int NotifierIndex) = 0 ;
	virtual void __fastcall Reset() = 0 ;
	virtual void __fastcall SaveToMSBuild() = 0 ;
	virtual void __fastcall SetRemoteProjectDir(System::UnicodeString PlatformName, const System::UnicodeString Value) = 0 ;
	__property System::Generics::Collections::TDictionary__2<System::UnicodeString,_di_IProjectDeploymentClass>::TValueCollection* Classes = {read=GetClasses};
	__property System::Generics::Collections::TDictionary__2<System::UnicodeString,_di_IProjectDeploymentFile>::TValueCollection* Files = {read=GetFiles};
	__property System::UnicodeString RemoteProjectDir[System::UnicodeString PlatformName] = {read=GetRemoteProjectDir, write=SetRemoteProjectDir};
};

__interface  INTERFACE_UUID("{76A88D6C-8E6B-460E-8178-C21659E3D3CB}") IProjectDeployment180  : public IProjectDeployment170 
{
	HIDESBASE virtual void __fastcall AddFile(const _di_IProjectDeploymentFile AFile) = 0 /* overload */;
	HIDESBASE virtual void __fastcall AddFile(const System::UnicodeString PlatformName, const _di_IProjectDeploymentFile AFile) = 0 /* overload */;
	HIDESBASE virtual _di_IProjectDeploymentFile __fastcall CreateFile _DEPRECATED_ATTRIBUTE0 (const System::UnicodeString LocalName) = 0 /* overload */;
	HIDESBASE virtual _di_IProjectDeploymentFile __fastcall CreateFile(const System::UnicodeString PlatformName, const System::UnicodeString LocalName) = 0 /* overload */;
	HIDESBASE virtual _di_IProjectDeploymentFile __fastcall GetFile(const System::UnicodeString LocalName) = 0 /* overload */;
	HIDESBASE virtual _di_IProjectDeploymentFile __fastcall GetFile(const System::UnicodeString PlatformName, const System::UnicodeString LocalName) = 0 /* overload */;
	HIDESBASE virtual void __fastcall RemoveFile(const System::UnicodeString LocalName) = 0 /* overload */;
	HIDESBASE virtual void __fastcall RemoveFile(const System::UnicodeString PlatformName, const System::UnicodeString LocalName) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{34139979-F793-4B85-8C25-058545542407}") IProjectDeployment190  : public IProjectDeployment180 
{
	HIDESBASE virtual void __fastcall Clear() = 0 /* overload */;
	HIDESBASE virtual void __fastcall Clear(const System::UnicodeString PlatformName) = 0 /* overload */;
	virtual int __fastcall GetClassCount(const System::UnicodeString PlatformName) = 0 ;
	virtual bool __fastcall RequiresDeployClasses(const System::UnicodeString PlatformName) = 0 ;
};

__interface  INTERFACE_UUID("{5EDEAD6D-538B-47F6-B3D6-65405FAEEE1C}") IProjectDeployment200  : public IProjectDeployment190 
{
	HIDESBASE virtual void __fastcall Clear(const bool KeepUserFiles) = 0 /* overload */;
	HIDESBASE virtual void __fastcall Clear(const System::UnicodeString PlatformName, const bool KeepUserFiles) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{5D1B3896-962A-417B-A7B5-EE5FAA36BBB7}") IProjectDeployment220  : public IProjectDeployment200 
{
	HIDESBASE virtual void __fastcall AddFile _DEPRECATED_ATTRIBUTE1("Use overloaded version of this method with config and platform parameters") (const _di_IProjectDeploymentFile AFile) = 0 /* overload */;
	HIDESBASE virtual void __fastcall AddFile _DEPRECATED_ATTRIBUTE1("Use overloaded version of this method with config and platform parameters") (const System::UnicodeString PlatformName, const _di_IProjectDeploymentFile AFile) = 0 /* overload */;
	HIDESBASE virtual _di_IProjectDeploymentFile __fastcall CreateFile _DEPRECATED_ATTRIBUTE0 (const System::UnicodeString LocalName) = 0 /* overload */;
	HIDESBASE virtual _di_IProjectDeploymentFile __fastcall CreateFile _DEPRECATED_ATTRIBUTE1("Use overloaded version of this method with config and platform parameters") (const System::UnicodeString PlatformName, const System::UnicodeString LocalName) = 0 /* overload */;
	HIDESBASE virtual _di_IProjectDeploymentFile __fastcall GetFile _DEPRECATED_ATTRIBUTE0 (const System::UnicodeString LocalName) = 0 /* overload */;
	HIDESBASE virtual _di_IProjectDeploymentFile __fastcall GetFile _DEPRECATED_ATTRIBUTE1("Use overloaded version of this method with config and platform parameters") (const System::UnicodeString PlatformName, const System::UnicodeString LocalName) = 0 /* overload */;
	HIDESBASE virtual void __fastcall RemoveFile _DEPRECATED_ATTRIBUTE1("Use overloaded version of this method with config and platform parameters") (const System::UnicodeString LocalName) = 0 /* overload */;
	HIDESBASE virtual void __fastcall RemoveFile _DEPRECATED_ATTRIBUTE1("Use overloaded version of this method with config and platform parameters") (const System::UnicodeString PlatformName, const System::UnicodeString LocalName) = 0 /* overload */;
	HIDESBASE virtual void __fastcall AddFile(const System::UnicodeString Configuration, const System::UnicodeString PlatformName, const _di_IProjectDeploymentFile AFile) = 0 /* overload */;
	HIDESBASE virtual _di_IProjectDeploymentFile __fastcall CreateFile(const System::UnicodeString Configuration, const System::UnicodeString PlatformName, const System::UnicodeString LocalName) = 0 /* overload */;
	HIDESBASE virtual _di_IProjectDeploymentFile __fastcall GetFile(const System::UnicodeString Configuration, const System::UnicodeString PlatformName, const System::UnicodeString LocalName) = 0 /* overload */;
	HIDESBASE virtual void __fastcall RemoveFile(const System::UnicodeString Configuration, const System::UnicodeString PlatformName, const System::UnicodeString LocalName) = 0 /* overload */;
	HIDESBASE virtual TReconcileResult __fastcall Reconcile(System::UnicodeString Configuration = System::UnicodeString(), System::UnicodeString PlatformName = System::UnicodeString(), const bool ReconcileInternally = false) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{55D3B5B8-AE66-48BC-8357-2767E0121F03}") IProjectDeployment230  : public IProjectDeployment220 
{
	virtual void __fastcall SetBlockNotifications(const bool Value) = 0 ;
	virtual bool __fastcall GetBlockNotifications() = 0 ;
	__property bool BlockNotifications = {read=GetBlockNotifications, write=SetBlockNotifications};
};

__interface  INTERFACE_UUID("{3FF68DBA-FB95-477B-B619-43770365EF11}") IProjectDeployment  : public IProjectDeployment230 
{
	virtual System::DynamicArray<_di_IProjectDeploymentClass> __fastcall GetSortedClasses() = 0 ;
	__property System::DynamicArray<_di_IProjectDeploymentClass> SortedClasses = {read=GetSortedClasses};
};

//-- var, const, procedure ---------------------------------------------------
#define feDeployProj L".deployproj"
#define sDeviceId L"DeviceId"
#define dcFile L"File"
#define dcProfectFile L"ProjectFile"
#define dcProjectOutput L"ProjectOutput"
#define dcDebugSymbols L"DebugSymbols"
#define dcAdditionalDebugSymbols L"AdditionalDebugSymbols"
#define dcDependencyPackage L"DependencyPackage"
#define dcDependencyPackageResource L"DependencyPackageResource"
#define dcDependencyPackageDebugSymbols L"DependencyPackageDebugSymbols"
#define dcDependencyModule L"DependencyModule"
#define dcDependencyFramework L"DependencyFramework"
#define dcProjectMainIcns L"Icns_MainIcns"
#define dcProjectOSXResource L"ProjectOSXResource"
#define dcProjectOSXInfoPList L"ProjectOSXInfoPList"
#define dcProjectOSXEntitlements L"ProjectOSXEntitlements"
#define dcProjectOSXDebug L"ProjectOSXDebug"
#define dcProjectiOSResource L"ProjectiOSResource"
#define dcProjectOutput_iOS32 L"ProjectOutput_iOS32"
#define dcIOS_AppStore1024 L"iOS_AppStore1024"
#define dcIPhone_AppIcon120 L"iPhone_AppIcon120"
#define dcIPhone_AppIcon180 L"iPhone_AppIcon180"
#define dcIPhone_Spotlight80 L"iPhone_Spotlight80"
#define dcIPhone_Spotlight120 L"iPhone_Spotlight120"
#define dcIPhone_Setting58 L"iPhone_Setting58"
#define dcIPhone_Setting87 L"iPhone_Setting87"
#define dcIPhone_Notification40 L"iPhone_Notification40"
#define dcIPhone_Notification60 L"iPhone_Notification60"
#define dcIPhone_Launch2x L"iPhone_Launch2x"
#define dcIPhone_LaunchDark2x L"iPhone_LaunchDark2x"
#define dcIPhone_Launch3x L"iPhone_Launch3x"
#define dcIPhone_LaunchDark3x L"iPhone_LaunchDark3x"
#define dcIPad_AppIcon152 L"iPad_AppIcon152"
#define dcIPad_AppIcon167 L"iPad_AppIcon167"
#define dcIPad_SpotLight80 L"iPad_SpotLight80"
#define dcIPad_Setting58 L"iPad_Setting58"
#define dcIPad_Notification40 L"iPad_Notification40"
#define dcIPad_Launch2x L"iPad_Launch2x"
#define dcIPad_LaunchDark2x L"iPad_LaunchDark2x"
#define dcProjectiOSInfoPList L"ProjectiOSInfoPList"
#define dcProjectiOSDeviceDebug L"ProjectiOSDeviceDebug"
#define dcProjectiOSEntitlements L"ProjectiOSEntitlements"
#define dcProjectiOSLaunchScreen L"ProjectiOSLaunchScreen"
#define dcProjectOutput_Android32 L"ProjectOutput_Android32"
#define dcAndroidServiceOutput_Android32 L"AndroidServiceOutput_Android32"
#define dcAndroidDefaultAppIcon L"Android_DefaultAppIcon"
#define dcProjectAndroidManifest L"ProjectAndroidManifest"
#define dcAndroidLauncherIcon36 L"Android_LauncherIcon36"
#define dcAndroidLauncherIcon48 L"Android_LauncherIcon48"
#define dcAndroidLauncherIcon72 L"Android_LauncherIcon72"
#define dcAndroidLauncherIcon96 L"Android_LauncherIcon96"
#define dcAndroidLauncherIcon144 L"Android_LauncherIcon144"
#define dcAndroidLauncherIcon192 L"Android_LauncherIcon192"
#define dcAndroidSplashImage426 L"Android_SplashImage426"
#define dcAndroidSplashImage470 L"Android_SplashImage470"
#define dcAndroidSplashImage640 L"Android_SplashImage640"
#define dcAndroidSplashImage960 L"Android_SplashImage960"
#define dcAndroidGDBServer L"AndroidGDBServer"
#define dcAndroidClassesDexFile L"AndroidClassesDexFile"
#define dcAndroidClasses L"AndroidClasses"
#define dcAndroidLibnativeArmeabiFile L"AndroidLibnativeArmeabiFile"
#define dcAndroidLibnativeArmeabiv7aFile L"AndroidLibnativeArmeabiv7aFile"
#define dcAndroidLibnativeMipsFile L"AndroidLibnativeMipsFile"
#define dcAndroidSplashImageDef L"AndroidSplashImageDef"
#define dcAndroidSplashStyles L"AndroidSplashStyles"
#define dcAndroidSplashStylesV21 L"AndroidSplashStylesV21"
#define dcAndroidServiceOutput L"AndroidServiceOutput"
#define dcAndroidFileProvider L"AndroidFileProvider"
#define dcAndroidNotificationIcon24 L"Android_NotificationIcon24"
#define dcAndroidNotificationIcon36 L"Android_NotificationIcon36"
#define dcAndroidNotificationIcon48 L"Android_NotificationIcon48"
#define dcAndroidNotificationIcon72 L"Android_NotificationIcon72"
#define dcAndroidNotificationIcon96 L"Android_NotificationIcon96"
#define dcAndroidColors L"Android_Colors"
#define dcAndroidStrings L"Android_Strings"
#define dcProjectUWPManifest L"ProjectUWPManifest"
#define dcUWPDefaultDelphiLogo44 L"UWP_DelphiLogo44"
#define dcUWPDefaultDelphiLogo150 L"UWP_DelphiLogo150"
#define dcUWPDefaultCppLogo44 L"UWP_CppLogo44"
#define dcUWPDefaultCppLogo150 L"UWP_CppLogo150"
#define cAllPlatforms L"All"
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetDeploymentRemoteDir(const _di_IProjectDeploymentFile AFile, const System::UnicodeString PlatformName, const _di_IProjectDeployment Deployment);
extern DELPHI_PACKAGE TDeployOperation __fastcall GetDeploymentOperation(const _di_IProjectDeploymentFile AFile, const System::UnicodeString PlatformName, const _di_IProjectDeployment Deployment);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetDeploymentClass(const _di_IProjectDeploymentFile AFile);
extern DELPHI_PACKAGE bool __fastcall GetDeploymentRequired(const _di_IProjectDeploymentFile AFile, const System::UnicodeString PlatformName, const _di_IProjectDeployment Deployment);
}	/* namespace Deploymentapi */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DEPLOYMENTAPI)
using namespace Deploymentapi;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DeploymentapiHPP
