// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ComponentDesigner.pas' rev: 35.00 (Windows)

#ifndef ComponentdesignerHPP
#define ComponentdesignerHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.Generics.Collections.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.ActiveX.hpp>
#include <System.Classes.hpp>
#include <System.TypInfo.hpp>
#include <System.IniFiles.hpp>
#include <System.Types.hpp>
#include <Vcl.Graphics.hpp>
#include <Designer.hpp>
#include <DesignerTypes.hpp>
#include <DesignIntf.hpp>
#include <DesignEditors.hpp>
#include <DesignMenus.hpp>
#include <Update.hpp>
#include <ToolsAPI.hpp>
#include <PlatformAPI.hpp>
#include <ToolUtils.hpp>
#include <Events.hpp>
#include <System.Generics.Defaults.hpp>

//-- user supplied -----------------------------------------------------------

namespace Componentdesigner
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IRawEventInfo;
typedef System::DelphiInterface<IRawEventInfo> _di_IRawEventInfo;
__interface DELPHIINTERFACE IDatedStream;
typedef System::DelphiInterface<IDatedStream> _di_IDatedStream;
__interface DELPHIINTERFACE IFile;
typedef System::DelphiInterface<IFile> _di_IFile;
__interface DELPHIINTERFACE IOpenProjectOptionPage;
typedef System::DelphiInterface<IOpenProjectOptionPage> _di_IOpenProjectOptionPage;
__interface DELPHIINTERFACE IInternalPaletteItem;
typedef System::DelphiInterface<IInternalPaletteItem> _di_IInternalPaletteItem;
__interface DELPHIINTERFACE ICompInfo;
typedef System::DelphiInterface<ICompInfo> _di_ICompInfo;
__interface DELPHIINTERFACE IFlipChildren;
typedef System::DelphiInterface<IFlipChildren> _di_IFlipChildren;
__interface DELPHIINTERFACE IRoot;
typedef System::DelphiInterface<IRoot> _di_IRoot;
__interface DELPHIINTERFACE IBaseComponentDesigner;
typedef System::DelphiInterface<IBaseComponentDesigner> _di_IBaseComponentDesigner;
__interface DELPHIINTERFACE IComponentDesigner;
typedef System::DelphiInterface<IComponentDesigner> _di_IComponentDesigner;
__interface DELPHIINTERFACE TDesignerIterFunc;
typedef System::DelphiInterface<TDesignerIterFunc> _di_TDesignerIterFunc;
__interface DELPHIINTERFACE IComponentDesigners;
typedef System::DelphiInterface<IComponentDesigners> _di_IComponentDesigners;
__interface DELPHIINTERFACE IInternalComponentDesigner;
typedef System::DelphiInterface<IInternalComponentDesigner> _di_IInternalComponentDesigner;
__interface DELPHIINTERFACE IInternalComponentContainer;
typedef System::DelphiInterface<IInternalComponentContainer> _di_IInternalComponentContainer;
__interface DELPHIINTERFACE IInternalComponentContainerParent;
typedef System::DelphiInterface<IInternalComponentContainerParent> _di_IInternalComponentContainerParent;
__interface DELPHIINTERFACE IDesignerRegistrationInterface;
typedef System::DelphiInterface<IDesignerRegistrationInterface> _di_IDesignerRegistrationInterface;
__interface DELPHIINTERFACE IInternalComponentDesigners;
typedef System::DelphiInterface<IInternalComponentDesigners> _di_IInternalComponentDesigners;
struct TDesignerOptions;
__interface DELPHIINTERFACE IDesignEnvironment;
typedef System::DelphiInterface<IDesignEnvironment> _di_IDesignEnvironment;
__interface DELPHIINTERFACE IDesignerModule;
typedef System::DelphiInterface<IDesignerModule> _di_IDesignerModule;
__interface DELPHIINTERFACE IDesignerViewModule;
typedef System::DelphiInterface<IDesignerViewModule> _di_IDesignerViewModule;
__interface DELPHIINTERFACE IDesignerLoadingFormModified;
typedef System::DelphiInterface<IDesignerLoadingFormModified> _di_IDesignerLoadingFormModified;
__interface DELPHIINTERFACE IInterfaceDesigner;
typedef System::DelphiInterface<IInterfaceDesigner> _di_IInterfaceDesigner;
__interface DELPHIINTERFACE IInternalRoot;
typedef System::DelphiInterface<IInternalRoot> _di_IInternalRoot;
struct TDesignSurfaceOptions;
__interface DELPHIINTERFACE IComponentDesignSurface;
typedef System::DelphiInterface<IComponentDesignSurface> _di_IComponentDesignSurface;
__interface DELPHIINTERFACE ISurfaceHost;
typedef System::DelphiInterface<ISurfaceHost> _di_ISurfaceHost;
class DELPHICLASS TOTAComponent;
class DELPHICLASS TOTAFormEditor;
class DELPHICLASS TSelections;
class DELPHICLASS TRenameItem;
class DELPHICLASS TRenames;
class DELPHICLASS TEventItem;
class DELPHICLASS TEvents;
class DELPHICLASS TComponentRoot;
class DELPHICLASS TAncestorNotifier;
__interface DELPHIINTERFACE IRootListUpdate;
typedef System::DelphiInterface<IRootListUpdate> _di_IRootListUpdate;
__interface DELPHIINTERFACE IInternalItem;
typedef System::DelphiInterface<IInternalItem> _di_IInternalItem;
class DELPHICLASS TInternalItem;
class DELPHICLASS TComponentItem;
class DELPHICLASS TNonControlItem;
class DELPHICLASS TComponentDesigner;
class DELPHICLASS TIStreamAdapter;
class DELPHICLASS TStreamAdapter;
class DELPHICLASS TDatedStreamAdapter;
class DELPHICLASS TCompInfo;
class DELPHICLASS TEvRootActivatedEvent;
class DELPHICLASS TEvComponentRenamedEvent;
class DELPHICLASS TEnvironmentTools;
class DELPHICLASS EComponentDesignerException;
class DELPHICLASS ECannotDeleteNonComponentException;
//-- type declarations -------------------------------------------------------
__interface  INTERFACE_UUID("{6F33F2C2-23B5-4935-B490-FDDED9E58D57}") IRawEventInfo  : public Designintf::IEventInfo 
{
	virtual System::Typinfo::PTypeData __fastcall GetTypeData() = 0 ;
};

__interface  INTERFACE_UUID("{A8613563-3389-4BA7-9A8A-5A8FF324F317}") IDatedStream  : public IStream 
{
	virtual int __fastcall GetModifyTime() = 0 ;
	virtual void __fastcall SetModifyTime(int Time) = 0 ;
};

__interface  INTERFACE_UUID("{346E7BA0-D47E-11D3-BA96-0080C78ADCDB}") IFile  : public System::IInterface 
{
	virtual _di_IStream __fastcall FormFileOpen() = 0 ;
	virtual System::UnicodeString __fastcall GetFileName() = 0 ;
	virtual int __fastcall GetTimeAtLoad() = 0 ;
	virtual int __fastcall GetModifyTime() = 0 ;
	virtual bool __fastcall CheckFileDate() = 0 ;
	virtual void __fastcall Rename(const System::UnicodeString NewFileName) = 0 ;
	virtual void __fastcall Save() = 0 ;
	__property System::UnicodeString FileName = {read=GetFileName};
	__property int TimeAtLoad = {read=GetTimeAtLoad};
	__property int ModifyTime = {read=GetModifyTime};
};

__interface  INTERFACE_UUID("{E4BD1A92-6318-4EA2-AB44-E7BF84A94F4A}") IOpenProjectOptionPage  : public System::IInterface 
{
	virtual void __fastcall OpenProjectOptions(const System::UnicodeString ActivePage = System::UnicodeString(), const System::UnicodeString ActiveControl = System::UnicodeString()) = 0 ;
};

typedef void __fastcall (__closure *TGetRootProc)(_di_IRoot AForm);

__interface  INTERFACE_UUID("{F9D448F1-50BC-11D1-9FB5-0020AF3D82DA}") IInternalPaletteItem  : public System::IInterface 
{
	virtual System::Classes::TComponent* __fastcall CreateComponent(System::Classes::TComponent* const Owner, System::Classes::TComponent* const Parent, const _di_IDesignerModule Module, const System::Types::TRect &Rect) = 0 ;
};

__interface  INTERFACE_UUID("{E1065483-5709-4C88-8011-F38B70DD1FAA}") ICompInfo  : public System::IInterface 
{
	virtual void __fastcall ClearEvent(int Index) = 0 ;
	virtual System::UnicodeString __fastcall GetClassName() = 0 ;
	virtual System::UnicodeString __fastcall GetQualifiedClassName() = 0 ;
	virtual int __fastcall GetEventCount() = 0 ;
	virtual System::Typinfo::PPropInfo __fastcall GetEventInfo(int Index) = 0 ;
	virtual Designintf::_di_IEventInfo __fastcall GetIEventInfo(int Index) = 0 ;
	virtual System::UnicodeString __fastcall GetEventName(int Index) = 0 ;
	virtual System::UnicodeString __fastcall GetEventValue(int Index) = 0 ;
	virtual Designintf::_di_IDesignObject __fastcall GetComponentHandle() = 0 ;
	virtual System::UnicodeString __fastcall GetNamePath() = 0 ;
	virtual int __fastcall GetSubInfoCount() = 0 ;
	virtual _di_ICompInfo __fastcall GetSubInfo(int Index) = 0 ;
};

typedef Toolsapi::TOTAAffect TAffect;

typedef Toolsapi::TOTASizeAffect TSizeAffect;

typedef Toolsapi::_di_IOTAAlignable IAlignable;

typedef Toolsapi::_di_IOTAScaleable IScaleable;

typedef Toolsapi::_di_IOTATabOrderable ITabOrderable;

typedef Toolsapi::_di_IOTACreateOrderable ICreateOrderable;

__interface  INTERFACE_UUID("{EC71B51F-B812-42B2-865B-44E7819686F7}") IFlipChildren  : public System::IInterface 
{
	virtual void __fastcall FlipChildren(bool SelectedOnly) = 0 ;
};

__interface  INTERFACE_UUID("{76023428-77C4-4E10-B210-2DE6536C04E7}") IRoot  : public IFile 
{
	virtual void __fastcall Close() = 0 ;
	virtual void __fastcall CreateComponent(_di_IInternalPaletteItem Item) = 0 ;
	virtual void __fastcall CreateComponentPos(_di_IInternalPaletteItem Item, int X, int Y) = 0 ;
	virtual System::UnicodeString __fastcall FindCompClass(const System::UnicodeString CompName) = 0 ;
	virtual void __fastcall FreezeProperties() = 0 ;
	virtual System::UnicodeString __fastcall GetAncestorName() = 0 ;
	virtual int __fastcall GetCompCount() = 0 ;
	virtual void __fastcall GetDependentRoots(TGetRootProc Proc) = 0 ;
	virtual System::UnicodeString __fastcall GetDesignClassName() = 0 ;
	virtual void __fastcall GetDependencies(TGetRootProc Proc) = 0 ;
	virtual _di_ICompInfo __fastcall GetCompInfo(int Index) = 0 ;
	virtual _di_IDesignerModule __fastcall GetModule() = 0 ;
	virtual System::UnicodeString __fastcall GetCompName(int Index) = 0 ;
	virtual System::UnicodeString __fastcall GetCompType(int Index) = 0 ;
	virtual System::UnicodeString __fastcall GetFormFamilyName() = 0 ;
	virtual System::UnicodeString __fastcall GetFileSystem() = 0 ;
	virtual System::Classes::TComponent* __fastcall GetRoot() = 0 ;
	virtual System::UnicodeString __fastcall GetRootName() = 0 ;
	virtual void __fastcall GetUnits(System::Classes::TGetStrProc Proc) = 0 ;
	virtual Designertypes::TDesignerState __fastcall GetState() = 0 ;
	virtual void __fastcall Hide() = 0 ;
	virtual void __fastcall GoDormant() = 0 ;
	virtual void __fastcall RenameRootMethod(const System::UnicodeString CurName, const System::UnicodeString NewName) = 0 ;
	virtual bool __fastcall RenameComponent(const System::UnicodeString CurName, const System::UnicodeString NewName) = 0 ;
	virtual void __fastcall RemoveDependentLinks() = 0 ;
	virtual void __fastcall SetFileSystem(const System::UnicodeString FileSystem) = 0 ;
	virtual void __fastcall SetRootName(const System::UnicodeString AName) = 0 ;
	virtual void __fastcall SetSelection(const System::UnicodeString Name) = 0 ;
	virtual void __fastcall Show() = 0 ;
	virtual void __fastcall ShowAs(Designertypes::TShowState ShowState) = 0 ;
	virtual void __fastcall ShowComponentHelp() = 0 ;
	virtual bool __fastcall SpecialPropertyHelp(const System::UnicodeString Member, /* out */ System::UnicodeString &HelpFile, /* out */ System::UnicodeString &Context, /* out */ System::Classes::THelpType &HelpType) = 0 ;
	virtual void __fastcall ThawProperties() = 0 ;
	virtual Designintf::_di_IDesigner __fastcall GetDesigner() = 0 ;
	virtual Toolsapi::_di_IOTAFormEditor __fastcall GetFormEditor() = 0 ;
	virtual void __fastcall CreateDesignerViews(const System::_di_IInterface ACreator) = 0 ;
	virtual _di_IRoot __fastcall GetActiveView() = 0 ;
	virtual int __fastcall GetViewCount() = 0 ;
	virtual _di_IRoot __fastcall GetView(int Index) = 0 ;
	virtual System::UnicodeString __fastcall GetViewName(int Index) = 0 /* overload */;
	virtual System::UnicodeString __fastcall GetViewName() = 0 /* overload */;
	virtual int __fastcall GetViewIndex(const System::UnicodeString ViewName) = 0 ;
	virtual _di_IRoot __fastcall GetMasterView() = 0 ;
	virtual int __fastcall AddView(const System::UnicodeString ViewName) = 0 ;
	virtual void __fastcall GetViewPreview(Vcl::Graphics::TBitmap* ABitmap) = 0 /* overload */;
	virtual void __fastcall GetViewPreview(const System::UnicodeString AViewName, Vcl::Graphics::TBitmap* ABitmap) = 0 /* overload */;
	virtual System::Types::TSize __fastcall GetRootSize() = 0 ;
	virtual Platformapi::TOTADeviceOrientation __fastcall GetOrientation() = 0 ;
	virtual void __fastcall RemoveView(const System::UnicodeString ViewName) = 0 /* overload */;
	virtual void __fastcall RemoveView(int Index) = 0 /* overload */;
	__property _di_IRoot ActiveView = {read=GetActiveView};
	__property System::Classes::TComponent* Root = {read=GetRoot};
	__property _di_IDesignerModule Module = {read=GetModule};
	__property _di_IRoot MasterView = {read=GetMasterView};
	__property Platformapi::TOTADeviceOrientation Orientation = {read=GetOrientation};
	__property int ViewCount = {read=GetViewCount};
	__property _di_IRoot Views[int Index] = {read=GetView};
	__property System::UnicodeString ViewNames[int Index] = {read=GetViewName};
	__property System::UnicodeString ViewName = {read=GetViewName};
	__property int ViewIndex[const System::UnicodeString ViewName] = {read=GetViewIndex};
};

typedef Designintf::_di_IDesignWindow IDesignWindowActions;

__interface  INTERFACE_UUID("{6EBEF997-E986-41B3-8E70-3112112F1AB7}") IBaseComponentDesigner  : public System::IInterface 
{
	virtual _di_IRoot __fastcall CreateRoot(const _di_IDesignerModule AModule, const System::UnicodeString AFileName, bool Existing, const System::UnicodeString ARootName, const System::UnicodeString AAncestor, const System::UnicodeString AFileSystem, const _di_IRoot ARoot = _di_IRoot(), const System::UnicodeString AViewName = System::UnicodeString()) = 0 ;
	virtual _di_IRoot __fastcall CreateFromStream(const _di_IDesignerModule AModule, const System::UnicodeString AFileName, const System::UnicodeString AFileSystem, const _di_IDatedStream Stream, const _di_IRoot ARoot = _di_IRoot(), const System::UnicodeString AViewName = System::UnicodeString()) = 0 ;
	virtual _di_IRoot __fastcall CreateNewRoot(const _di_IDesignerModule AModule, const System::UnicodeString AFileName, const System::_di_IInterface Creator, const _di_IRoot ARoot = _di_IRoot(), const System::UnicodeString AViewName = System::UnicodeString()) = 0 ;
	virtual System::UnicodeString __fastcall GetExtension() = 0 ;
};

__interface  INTERFACE_UUID("{7ED7BF25-E349-11D3-AB4A-00C04FB17A72}") IComponentDesigner  : public IBaseComponentDesigner 
{
	virtual void __fastcall CopySelectionToStream(System::Classes::TMemoryStream* S, System::Classes::TStrings* UnitDependencies) = 0 ;
	virtual bool __fastcall Active() = 0 ;
	virtual void __fastcall DesignerOptionsChanged() = 0 ;
	virtual bool __fastcall EditAction(Designintf::TEditAction Action) = 0 ;
	virtual _di_IFile __fastcall FindFile(const System::UnicodeString FileName) = 0 ;
	virtual _di_IRoot __fastcall FindRoot(System::Classes::TComponent* Component) = 0 /* overload */;
	virtual _di_IRoot __fastcall FindRoot(const System::UnicodeString RootName) = 0 /* overload */;
	virtual _di_IRoot __fastcall GetActiveRoot() = 0 ;
	virtual void __fastcall GetClassUnits(const System::UnicodeString ClassName, System::Classes::TGetStrProc Proc) = 0 ;
	virtual Designintf::TEditState __fastcall GetEditState() = 0 ;
	virtual System::UnicodeString __fastcall GetFirstSelectionType() = 0 ;
	virtual System::UnicodeString __fastcall GetFirstSelectionUnit() = 0 ;
	virtual void __fastcall GetRootNames(System::Classes::TGetStrProc Proc) = 0 ;
	virtual void __fastcall GetProperties(Designintf::TGetPropProc Proc) = 0 /* overload */;
	virtual void __fastcall GetProperties(const Designintf::_di_IDesignerSelections ASelections, const Designintf::_di_IDesigner ADesigner, Designintf::TGetPropProc Proc) = 0 /* overload */;
	virtual System::UnicodeString __fastcall GetSelectionName() = 0 ;
	virtual System::UnicodeString __fastcall GetSelectionType() = 0 ;
	virtual void __fastcall HideWindows() = 0 ;
	virtual void __fastcall ShowWindows() = 0 ;
	virtual void __fastcall ModalEditDone(const Designintf::_di_IActivatable ReturnWindow) = 0 ;
	virtual _di_IRoot __fastcall OpenRootClass(const System::UnicodeString ClassName) = 0 ;
	virtual void __fastcall PasteSelectionFromStream(System::Classes::TMemoryStream* S, System::Classes::TComponent* Parent, const System::Types::TRect &Rect) = 0 ;
	virtual void __fastcall GetSelection(const Designintf::_di_IDesignerSelections ASelection) = 0 ;
	virtual void __fastcall SetSelection(const Designintf::_di_IDesigner Designer, const Designintf::_di_IDesignWindow DesignWindow, const Designintf::_di_IDesignerSelections ASelection) = 0 ;
	virtual void __fastcall CancelModes() = 0 ;
	virtual System::Classes::TPersistentClass __fastcall GetFirstInvalidDataModuleClass() = 0 ;
	virtual bool __fastcall GetControlsLocked() = 0 ;
	virtual void __fastcall SetControlsLocked(bool Value) = 0 ;
	virtual _di_IRoot __fastcall GetRoots(int Index) = 0 ;
	virtual int __fastcall GetRootsCount() = 0 ;
	virtual System::TClass __fastcall GetFirstSelectionClass() = 0 ;
	virtual bool __fastcall IsNestable(const System::UnicodeString ClassName) = 0 ;
	virtual _di_IDesignEnvironment __fastcall GetEnvironment() = 0 ;
	virtual System::Classes::TPersistentClass __fastcall GetActiveClassGroup(const _di_IDesignerModule AModule) = 0 ;
	__property bool ControlsLocked = {read=GetControlsLocked, write=SetControlsLocked};
	__property _di_IRoot Roots[int Index] = {read=GetRoots};
	__property _di_IDesignEnvironment Environment = {read=GetEnvironment};
};

typedef System::DynamicArray<System::UnicodeString> TStringArray;

typedef System::DynamicArray<System::Classes::TPersistentClass> TPersistentClassArray;

__interface TDesignerIterFunc  : public System::IInterface 
{
	virtual bool __fastcall Invoke(const _di_IComponentDesigner Designer) = 0 ;
};

__interface  INTERFACE_UUID("{6442103E-4A8A-4276-9976-0BBABDD27CD7}") IComponentDesigners  : public System::IInterface 
{
	virtual bool __fastcall DesignerActive() = 0 ;
	virtual void __fastcall DesignerOptionsChanged() = 0 ;
	virtual _di_IFile __fastcall FindFile(const System::UnicodeString Filename) = 0 ;
	virtual _di_IComponentDesigner __fastcall GetActiveDesigner() = 0 ;
	virtual void __fastcall HideWindows() = 0 ;
	virtual void __fastcall ShowWindows() = 0 ;
	virtual void __fastcall SetProjectName(const System::UnicodeString Name) = 0 ;
	virtual void __fastcall SetControlsLocked(bool Value) = 0 ;
	virtual bool __fastcall GetControlsLocked() = 0 ;
	virtual Toolsapi::_di_IOTAAlignable __fastcall GetAlignable() = 0 ;
	virtual void __fastcall GetSelection(const Designintf::_di_IDesignerSelections ASelection) = 0 ;
	virtual void __fastcall SetSelection(const Designintf::_di_IDesigner Designer, const Designintf::_di_IDesignWindow DesignWindow, const Designintf::_di_IDesignerSelections ASelection) = 0 ;
	virtual void __fastcall ShowComponentHelp() = 0 ;
	virtual bool __fastcall SpecialPropertyHelp(const System::UnicodeString Member, /* out */ System::UnicodeString &HelpFile, /* out */ System::UnicodeString &Context, /* out */ System::Classes::THelpType &HelpType) = 0 ;
	virtual void __fastcall GetProperties(Designintf::TGetPropProc Proc) = 0 ;
	virtual System::UnicodeString __fastcall GetFirstSelectionType() = 0 ;
	virtual System::UnicodeString __fastcall GetFirstSelectionUnit() = 0 ;
	virtual TStringArray __fastcall RegisteredExtensions() = 0 ;
	virtual TPersistentClassArray __fastcall InvalidDataModuleClasses() = 0 ;
	virtual _di_IComponentDesigner __fastcall DesignerFromExtension(const System::UnicodeString Extension) = 0 ;
	virtual bool __fastcall RootComponentClass(System::Classes::TComponentClass ClassRef) = 0 ;
	virtual System::UnicodeString __fastcall GetCustomModuleIdentifier(const Designintf::_di_ICustomModule CustomModule) = 0 ;
	virtual void __fastcall DeactivateActiveDesigner() = 0 ;
	virtual void __fastcall ForEachDesigner(const _di_TDesignerIterFunc AFunc) = 0 ;
};

__interface  INTERFACE_UUID("{7ED7BF31-E349-11D3-AB4A-00C04FB17A72}") IInternalComponentDesigner  : public IComponentDesigner 
{
	virtual void __fastcall RemoveDependenciesOn(System::Classes::TComponent* const Component) = 0 ;
	virtual void __fastcall RootListAdd(const _di_IRoot ARoot) = 0 ;
	virtual void __fastcall RootListRemove(const _di_IRoot ARoot) = 0 ;
	virtual void __fastcall RootGoingDormant(const _di_IRoot ARoot) = 0 ;
	virtual void __fastcall RootActivated(const _di_IRoot ARoot) = 0 ;
	virtual void __fastcall RootModified(const _di_IRoot ARoot) = 0 ;
	virtual void __fastcall UpdateRootDependents() = 0 ;
	virtual void __fastcall UpdateSelections() = 0 ;
	virtual System::Classes::TStream* __fastcall FileSystemFileOpen(const System::UnicodeString FileSystem, const System::UnicodeString FileName, int Mode) = 0 ;
	virtual int __fastcall FileSystemFileAge(const System::UnicodeString FileSystem, const System::UnicodeString FileName) = 0 ;
	virtual bool __fastcall FileSystemFileExists(const System::UnicodeString FileSystem, const System::UnicodeString FileName) = 0 ;
	virtual bool __fastcall FileSystemRenameFile(const System::UnicodeString FileSystem, const System::UnicodeString OldFileName, const System::UnicodeString NewFileName) = 0 ;
	virtual System::UnicodeString __fastcall FileSystemGetTempFileName(const System::UnicodeString FileSystem, const System::UnicodeString FileName) = 0 ;
	virtual System::UnicodeString __fastcall FileSystemGetBackupName(const System::UnicodeString FileSystem, const System::UnicodeString FileName) = 0 ;
	virtual bool __fastcall FileSystemIsReadOnly(const System::UnicodeString FileSystem, const System::UnicodeString FileName) = 0 ;
	virtual void __fastcall FileSystemDeleteFile(const System::UnicodeString FileSystem, const System::UnicodeString FileName) = 0 ;
	virtual void __fastcall FileSystemSetDate(const System::UnicodeString FileSystem, System::Classes::TStream* FileStream, int Age) = 0 ;
	virtual System::UnicodeString __fastcall FindBaseClass(const System::UnicodeString AClassName) = 0 ;
	virtual Designintf::TCustomModuleClass __fastcall FindCustomModuleClass(const System::UnicodeString AClassName) = 0 ;
	virtual bool __fastcall IsRootBaseClass(const System::UnicodeString AClassName) = 0 ;
	virtual bool __fastcall ValidBaseClass(System::Classes::TComponentClass ComponentClass) = 0 ;
};

__interface  INTERFACE_UUID("{6D499D46-3074-4404-904D-28E7034B5499}") IInternalComponentContainer  : public System::IInterface 
{
	virtual Vcl::Graphics::TCanvas* __fastcall GetCanvas() = 0 ;
	virtual System::Uitypes::TColor __fastcall GetColor() = 0 ;
	virtual Vcl::Graphics::TBrush* __fastcall GetBrush() = 0 ;
	__property Vcl::Graphics::TCanvas* Canvas = {read=GetCanvas};
	__property System::Uitypes::TColor Color = {read=GetColor};
	__property Vcl::Graphics::TBrush* Brush = {read=GetBrush};
};

__interface  INTERFACE_UUID("{58315D64-EC35-4F06-9D0C-F2FB74D26AB6}") IInternalComponentContainerParent  : public System::IInterface 
{
	virtual void __fastcall FocusContainer() = 0 ;
};

__interface  INTERFACE_UUID("{D7E92724-1407-4D32-AB22-88F28B94F252}") IDesignerRegistrationInterface  : public IComponentDesigner 
{
	
};

__interface  INTERFACE_UUID("{FE5E8AD1-28D6-4D96-B5E7-455A2A8B9FC5}") IInternalComponentDesigners  : public IComponentDesigners 
{
	virtual void __fastcall AddDesigner(const _di_IDesignerRegistrationInterface Designer) = 0 ;
	virtual void __fastcall RemoveDesigner(const _di_IDesignerRegistrationInterface Designer) = 0 ;
	virtual void __fastcall ActivateDesigner(const _di_IDesignerRegistrationInterface Designer) = 0 ;
	virtual void __fastcall RemoveRoot(const _di_IRoot ARoot) = 0 ;
};

enum DECLSPEC_DENUM TDesignDialog : unsigned char { ddAlign, ddSize, ddScale, ddTabOrder, ddCreationOrder, ddSaveTemplate };

enum DECLSPEC_DENUM TDesignCommand : unsigned char { dmAlignToGrid, dmFlipAllChildren, dmFlipSelectedChildren, dmTextDFM, dmViewAsText, dmRevert, dmShowNonVisualComponents };

struct DECLSPEC_DRECORD TDesignerOptions
{
public:
	bool DisplayGrid;
	bool SnapToGrid;
	bool ScaleGridSize;
	bool UseDesignerGuidelines;
	int GridSizeX;
	int GridSizeY;
	bool ShowComponentCaptions;
	bool ShowDesignerHints;
	bool DFMFormat;
	bool ShowNonVisualComponents;
	bool ShowExtendedControlHints;
};


__interface  INTERFACE_UUID("{D3104C04-FD92-4C0E-B72D-23D1FFA76A25}") IDesignEnvironment  : public System::IInterface 
{
	virtual void __fastcall ActiveRootModified() = 0 ;
	virtual void __fastcall ComponentRenamed(const System::UnicodeString CurName, const System::UnicodeString NewName) = 0 ;
	virtual System::Classes::TComponent* __fastcall FindComponent(const System::UnicodeString Name) = 0 ;
	virtual void __fastcall ExecDesignDialog(TDesignDialog DesignDialog) = 0 ;
	virtual void __fastcall RootActivated() = 0 ;
	virtual void __fastcall RootDeactivated() = 0 ;
	virtual System::UnicodeString __fastcall GetPathAndBaseExeName() = 0 ;
	virtual System::UnicodeString __fastcall GetPrivateDirectory() = 0 ;
	virtual System::UnicodeString __fastcall GetAppDataDirectory(bool Local = false) = 0 ;
	virtual System::UnicodeString __fastcall GetTemplateDirectory() = 0 ;
	virtual System::UnicodeString __fastcall GetBaseRegKey() = 0 ;
	virtual System::Inifiles::TCustomIniFile* __fastcall GetIDEOptions() = 0 ;
	virtual bool __fastcall GetToolSelected() = 0 ;
	virtual _di_IInternalPaletteItem __fastcall GetCurCompClass() = 0 ;
	virtual _di_IInternalPaletteItem __fastcall GetPaletteItem(System::Classes::TComponentClass ComponentClass) = 0 ;
	virtual int __fastcall GetCurTime() = 0 ;
	virtual void __fastcall GetDesignerOptions(TDesignerOptions &Options) = 0 ;
	virtual System::Types::TRect __fastcall GetMainWindowSize() = 0 ;
	virtual System::Types::TPoint __fastcall GetWorkspaceOrigin() = 0 ;
	virtual Events::TEvent* __fastcall GetPackagesEvInstalled() = 0 ;
	virtual Events::TEvent* __fastcall GetPackagesEvUninstalling() = 0 ;
	virtual System::Classes::TComponentClass __fastcall GetComponentClass(const System::UnicodeString ClassName) = 0 ;
	virtual void __fastcall LoadCustomModuleClass(const System::UnicodeString ClassName, const _di_IComponentDesigner Designer) = 0 ;
	virtual void __fastcall ModalEdit(System::WideChar EditKey, const Designintf::_di_IActivatable ReturnWindow) = 0 ;
	virtual void __fastcall OpenRoot(const System::UnicodeString RootName, bool Show) = 0 ;
	virtual void __fastcall ResetCompClass() = 0 ;
	virtual void __fastcall SelectionChanged() = 0 ;
	virtual void __fastcall SelectItemName(const System::UnicodeString PropertyName) = 0 ;
	virtual System::UnicodeString __fastcall MakeBackupFileName(const System::UnicodeString FileName) = 0 ;
	virtual bool __fastcall CreateBackupFile() = 0 ;
	virtual void __fastcall RequestTemplate(const System::UnicodeString UnitName, const System::UnicodeString CompName, System::Classes::TStream* Stream, System::Classes::TStrings* Dependencies) = 0 ;
	virtual void __fastcall ItemDeleted(const Designintf::_di_IDesigner ADesigner, System::Classes::TPersistent* AItem) = 0 ;
	__property Events::TEvent* PackagesEvUninstalling = {read=GetPackagesEvUninstalling};
	__property Events::TEvent* PackagesEvInstalled = {read=GetPackagesEvInstalled};
};

enum DECLSPEC_DENUM TNotifyCode : unsigned char { ncModuleDeleted, ncModuleRenamed, ncEditorModified, ncFormModified, ncEditorSelected, ncFormSelected, ncBeforeSave, ncAfterSave, ncFormSaving, ncProjResModified };

__interface  INTERFACE_UUID("{7ED7BF27-E349-11D3-AB4A-00C04FB17A72}") IDesignerModule  : public System::IInterface 
{
	virtual void __fastcall Activate(bool IsVisual) = 0 ;
	virtual void __fastcall CreateMethod(const System::UnicodeString Name, const Designintf::_di_IEventInfo AEventInfo) = 0 ;
	virtual void __fastcall RootModified() = 0 ;
	virtual System::UnicodeString __fastcall GetClassGroup() = 0 ;
	virtual System::TClass __fastcall GetClassGroupClass() = 0 ;
	virtual System::UnicodeString __fastcall GetAncestorClassName(const System::UnicodeString ClassName) = 0 ;
	virtual void __fastcall GetMethods(const Designintf::_di_IEventInfo AEventInfo, System::Classes::TGetStrProc Proc) = 0 ;
	virtual bool __fastcall GetRootIsTopmost() = 0 ;
	virtual bool __fastcall HasClassGroup() = 0 ;
	virtual void __fastcall SetClassGroup(const System::UnicodeString AGroup) = 0 ;
	virtual void __fastcall RootResurrected() = 0 ;
	virtual bool __fastcall MethodExists(const System::UnicodeString Name) = 0 ;
	virtual void __fastcall RenameComponent(const _di_ICompInfo CompInfo, const System::UnicodeString CurName, const System::UnicodeString NewName) = 0 ;
	virtual void __fastcall RenameRoot(const _di_ICompInfo CompInfo, const System::UnicodeString NewName) = 0 ;
	virtual void __fastcall RenameMethod(const System::UnicodeString CurName, const System::UnicodeString NewName) = 0 ;
	virtual void __fastcall ShowMethod(const System::UnicodeString Name) = 0 ;
	virtual void __fastcall GetImportedRoots(System::Classes::TGetStrProc Proc) = 0 ;
	virtual void __fastcall ImportRoot(const System::UnicodeString RootName) = 0 ;
	virtual void __fastcall RootSaving() = 0 ;
	virtual void __fastcall Notify(TNotifyCode NotifyCode) = 0 ;
	virtual void __fastcall SwapSourceVisualView() = 0 ;
	virtual System::UnicodeString __fastcall GetMethod(const System::UnicodeString MethodName) = 0 ;
	virtual void __fastcall AddMethods(System::UnicodeString Methods, System::Classes::TStrings* Replacements, System::Classes::TStrings* MethodNames) = 0 ;
	virtual void __fastcall GetProjectModules(System::Classes::TGetModuleProc Proc) = 0 ;
	virtual bool __fastcall GetReadOnly() = 0 ;
	virtual System::UnicodeString __fastcall GetModuleName() = 0 ;
	virtual void __fastcall ChainCall(const System::UnicodeString MethodName, const System::UnicodeString InstanceName, const System::UnicodeString InstanceMethod, const Designintf::_di_IEventInfo AEventInfo) = 0 ;
	virtual bool __fastcall GetUnnamed() = 0 ;
	virtual bool __fastcall SaveModule() = 0 ;
	virtual void __fastcall ValidateEdit() = 0 ;
	__property System::TClass ClassGroupClass = {read=GetClassGroupClass};
	__property System::UnicodeString ClassGroup = {read=GetClassGroup, write=SetClassGroup};
	__property bool RootIsTopmost = {read=GetRootIsTopmost};
	__property bool ReadOnly = {read=GetReadOnly};
	__property bool Unnamed = {read=GetUnnamed};
	virtual void __fastcall FormFamilyChanged(const System::UnicodeString OldFormFamilyName, const System::UnicodeString NewFormFamilyName, const System::UnicodeString FormClassName) = 0 ;
};

__interface  INTERFACE_UUID("{657FC2FA-9E89-4854-9174-27BB75BAFF5E}") IDesignerViewModule  : public IDesignerModule 
{
	virtual void __fastcall GetDesignerViews(System::Classes::TStrings* const Views) = 0 ;
	virtual void __fastcall SetDesignerViews(System::Classes::TStrings* const Views) = 0 ;
	virtual System::UnicodeString __fastcall GetConditionalAttributeName() = 0 ;
	__property System::UnicodeString ConditionalAttributeName = {read=GetConditionalAttributeName};
};

__interface  INTERFACE_UUID("{697008B8-19E8-45B9-9BEF-53CF8A9A31A5}") IDesignerLoadingFormModified  : public System::IInterface 
{
	virtual void __fastcall FormModified() = 0 ;
};

__interface  INTERFACE_UUID("{7ED7BF28-E349-11D3-AB4A-00C04FB17A72}") IInterfaceDesigner  : public System::IInterface 
{
	virtual bool __fastcall HasInterface() = 0 ;
	virtual bool __fastcall InterfaceMemberExists(const System::UnicodeString Name) = 0 ;
	virtual void __fastcall AddToInterface(int InvKind, const System::UnicodeString Name, System::Word VT, const System::UnicodeString TypeInfo) = 0 ;
};

__interface  INTERFACE_UUID("{7ED7BF2C-E349-11D3-AB4A-00C04FB17A72}") IInternalRoot  : public IRoot 
{
	virtual bool __fastcall CanRevert(System::Classes::TPersistent* Instance, System::Typinfo::PPropInfo PropInfo) = 0 ;
	virtual void __fastcall CancelModes() = 0 ;
	virtual void __fastcall CopySelectionToStream(System::Classes::TMemoryStream* S, System::Classes::TStrings* UnitDependencies) = 0 ;
	virtual void __fastcall DesignerHide() = 0 ;
	virtual void __fastcall DesignerShow() = 0 ;
	virtual void __fastcall Edit(System::Classes::TComponent* const Component) = 0 ;
	virtual Designintf::TCustomModuleClass __fastcall GetCustomModuleClass() = 0 ;
	virtual System::UnicodeString __fastcall GetRootBaseClass() = 0 ;
	virtual System::TClass __fastcall GetRootClass() = 0 ;
	virtual Designintf::_di_ICustomModule __fastcall GetCustomModule() = 0 ;
	virtual _di_IInternalComponentDesigner __fastcall GetComponentDesigner() = 0 ;
	virtual Update::_di_IUpdateManager __fastcall GetUpdateManager() = 0 ;
	virtual TComponentRoot* __fastcall Implementor() = 0 ;
	virtual bool __fastcall IsDormant() = 0 ;
	virtual bool __fastcall IsFrame(System::Classes::TPersistent* AInstance) = 0 ;
	virtual void __fastcall Modified() = 0 ;
	virtual void __fastcall PasteSelectionFromStream(System::Classes::TMemoryStream* S, System::Classes::TComponent* Parent, const System::Types::TRect &Rect) = 0 ;
	virtual void __fastcall RemoveDependenciesOn(System::Classes::TComponent* const Component) = 0 ;
	virtual void __fastcall Resurrect() = 0 ;
	virtual void __fastcall Revert(System::Classes::TPersistent* Instance, System::Typinfo::PPropInfo PropInfo) = 0 ;
	virtual void __fastcall Select(System::Classes::TPersistent* Component, bool Extend) = 0 ;
	virtual void __fastcall SetActive(bool Value) = 0 ;
	virtual void __fastcall SetControlsLocked(bool Value) = 0 ;
	virtual void __fastcall UpdateDependencies() = 0 ;
	virtual void __fastcall UpdateOptions() = 0 ;
	virtual void __fastcall SetActiveView(const _di_IRoot AView) = 0 ;
	virtual void __fastcall GetStream(System::Classes::TStream* const AStream, const System::UnicodeString AViewName = System::UnicodeString()) = 0 ;
	__property System::UnicodeString RootBaseClass = {read=GetRootBaseClass};
	__property System::TClass RootClass = {read=GetRootClass};
	__property Designintf::TCustomModuleClass CustomModuleClass = {read=GetCustomModuleClass};
	__property Designintf::_di_ICustomModule CustomModule = {read=GetCustomModule};
	__property Update::_di_IUpdateManager UpdateManager = {read=GetUpdateManager};
	__property _di_IInternalComponentDesigner Designer = {read=GetComponentDesigner};
};

struct DECLSPEC_DRECORD TDesignSurfaceOptions
{
public:
	bool DisplayGrid;
	bool ScaleGridSize;
	System::Types::TPoint GridSize;
	bool ShowComponentCaptions;
	bool ShowDesignerHints;
	bool ShowNonVisualComponents;
	bool ShowExtendedControlHints;
};


__interface  INTERFACE_UUID("{7ED7BF33-E349-11D3-AB4A-00C04FB17A72}") IComponentDesignSurface  : public Designer::IDesignSurface 
{
	virtual void __fastcall MoveContainersFront() = 0 ;
	virtual void __fastcall ResyncContainers() = 0 ;
	virtual void __fastcall Update() = 0 ;
	virtual void __fastcall InstanceRemoved(System::Classes::TPersistent* AInstance) = 0 ;
	virtual System::Classes::TShiftState __fastcall GetShiftState() = 0 ;
	virtual void __fastcall FlipContainers() = 0 ;
	virtual void __fastcall SetOptions(const TDesignSurfaceOptions &Value) = 0 ;
	virtual void __fastcall SetInitializing(bool Value) = 0 ;
};

__interface  INTERFACE_UUID("{5DAEC2D5-5746-4DAD-ABD0-61ED54BFFF25}") ISurfaceHost  : public System::IInterface 
{
	virtual System::Classes::TComponent* __fastcall FindGlobalComponent(const System::UnicodeString Name) = 0 ;
	virtual Designintf::_di_ICustomModule __fastcall GetCustomModule() = 0 ;
	virtual Designintf::_di_ISelectionEditorList __fastcall GetSelectionEditors() = 0 ;
	virtual Designintf::_di_IComponentEditor __fastcall GetComponentEditor() = 0 ;
	virtual Designer::_di_IItem __fastcall FindSelection(System::Classes::TPersistent* Instance) = 0 ;
	virtual bool __fastcall IsAnchorSelection(System::Classes::TPersistent* Instance) = 0 ;
	virtual _di_IInternalPaletteItem __fastcall GetPaletteItem(System::Classes::TComponentClass ComponentClass) = 0 ;
	virtual void __fastcall ValidateRename(System::Classes::TComponent* AComponent, const System::UnicodeString CurName, const System::UnicodeString NewName) = 0 ;
	virtual void __fastcall InstanceInserted(System::Classes::TPersistent* AInstance) = 0 ;
	virtual void __fastcall InstanceRemoved(System::Classes::TPersistent* AInstance) = 0 ;
	virtual void __fastcall CanInsertComponent(System::Classes::TComponent* AComponent) = 0 ;
	virtual void __fastcall Modified() = 0 ;
	virtual bool __fastcall ModifiableFrame(System::Classes::TComponent* AComponent) = 0 ;
	virtual System::Classes::TComponent* __fastcall GetInliningComponent(System::Classes::TComponent* AComponent) = 0 ;
	virtual void __fastcall ValidateModification() = 0 ;
	virtual bool __fastcall HasSelectableChildren(System::Classes::TComponent* AComponent) = 0 ;
	virtual System::UnicodeString __fastcall UniqueName(const System::UnicodeString ClassName) = 0 ;
	virtual void __fastcall EditComponent(System::Classes::TComponent* const Component) = 0 ;
	virtual void __fastcall Activate(bool Activating) = 0 ;
	virtual void __fastcall FormFamilyChanged(const System::UnicodeString OldFormFamilyName, const System::UnicodeString NewFormFamilyName, const System::UnicodeString FormClassName) = 0 ;
	virtual bool __fastcall GetTextDFM() = 0 ;
	virtual bool __fastcall CanRevert() = 0 ;
	virtual bool __fastcall CanModify() = 0 ;
	virtual Designintf::_di_IDesignerSelections __fastcall GetSelection() = 0 ;
	virtual bool __fastcall GetLocked() = 0 ;
	virtual bool __fastcall CanUndelete() = 0 ;
	virtual void __fastcall Dialog(TDesignDialog Dialog) = 0 ;
	virtual void __fastcall Command(TDesignCommand Command) = 0 ;
	virtual void __fastcall ConvertToMetropolisUI() = 0 ;
	virtual void __fastcall DoUndelete() = 0 ;
	virtual void __fastcall DeleteSelection(bool ADoAll = false) = 0 ;
	virtual void __fastcall ShowHelp() = 0 ;
	virtual void __fastcall ModalEdit(System::WideChar EditKey, const Designintf::_di_IActivatable ReturnWindow) = 0 ;
	virtual void __fastcall SelectItemName(const System::UnicodeString PropertyName) = 0 ;
	virtual int __fastcall GetSelectableComponentCount() = 0 ;
	virtual System::Classes::TComponent* __fastcall GetSelectableComponents(int Index) = 0 ;
	__property int SelectableComponentCount = {read=GetSelectableComponentCount};
	__property System::Classes::TComponent* SelectableComponents[int Index] = {read=GetSelectableComponents};
};

class PASCALIMPLEMENTATION TOTAComponent : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	System::Classes::TPersistent* FObject;
	TComponentRoot* FComponentRoot;
	System::Typinfo::TPropList *FPropList;
	Toolsapi::TOTAGetChildCallback FProc;
	void *FParam;
	System::Typinfo::PPropList __fastcall GetPropList();
	void __fastcall GetChildProc(System::Classes::TComponent* Child);
	
protected:
	System::UnicodeString __fastcall GetComponentType();
	void * __fastcall GetComponentHandle();
	Toolsapi::_di_IOTAComponent __fastcall GetParent();
	bool __fastcall IsTControl();
	int __fastcall GetPropCount();
	System::UnicodeString __fastcall GetPropName(int Index);
	System::TTypeKind __fastcall GetPropType(int Index);
	System::TTypeKind __fastcall GetPropTypeByName(const System::UnicodeString Name);
	bool __fastcall GetPropValue(int Index, void *Value);
	bool __fastcall GetPropValueByName(const System::UnicodeString Name, void *Value);
	bool __fastcall SetProp(int Index, const void *Value);
	bool __fastcall SetPropByName(const System::UnicodeString Name, const void *Value);
	bool __fastcall GetChildren(void * Param, Toolsapi::TOTAGetChildCallback Proc);
	int __fastcall GetControlCount();
	Toolsapi::_di_IOTAComponent __fastcall GetControl(int Index);
	int __fastcall GetComponentCount();
	Toolsapi::_di_IOTAComponent __fastcall GetComponent(int Index);
	bool __fastcall Select(bool AddToSelection);
	bool __fastcall Focus(bool AddToSelection);
	bool __fastcall Delete();
	System::Classes::TPersistent* __fastcall INTAComponent_GetPersistent();
	System::Classes::TComponent* __fastcall INTAComponent_GetComponent();
	
public:
	__fastcall TOTAComponent(System::Classes::TPersistent* AObject, TComponentRoot* AComponentRoot);
	__fastcall virtual ~TOTAComponent();
private:
	void *__INTAComponent;	// Toolsapi::INTAComponent 
	void *__IOTAComponent;	// Toolsapi::IOTAComponent 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {34B2E2D1-E36F-11D1-AB0E-00C04FB16FB3}
	operator Toolsapi::_di_INTAComponent()
	{
		Toolsapi::_di_INTAComponent intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::INTAComponent*(void) { return (Toolsapi::INTAComponent*)&__INTAComponent; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {AC139ADF-329A-D411-87C6-9B2730412200}
	operator Toolsapi::_di_IOTAComponent()
	{
		Toolsapi::_di_IOTAComponent intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::IOTAComponent*(void) { return (Toolsapi::IOTAComponent*)&__IOTAComponent; }
	#endif
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TOTAFormEditor : public Toolutils::TOTAClass
{
	typedef Toolutils::TOTAClass inherited;
	
private:
	TComponentRoot* FComponentRoot;
	
protected:
	int __fastcall AddNotifier(const Toolsapi::_di_IOTANotifier ANotifier);
	System::UnicodeString __fastcall GetFileName();
	bool __fastcall GetModified();
	Toolsapi::_di_IOTAModule __fastcall GetModule();
	bool __fastcall MarkModified();
	void __fastcall RemoveNotifier(int Index);
	void __fastcall Show();
	_di_IStream __fastcall GetContent();
	void __fastcall SetContent(const _di_IStream AStream);
	System::TDateTime __fastcall GetContentAge();
	void __fastcall ResetDiskAge();
	Toolsapi::_di_IOTAComponent __fastcall GetRootComponent();
	Toolsapi::_di_IOTAComponent __fastcall FindComponent(const System::UnicodeString Name);
	Toolsapi::_di_IOTAComponent __fastcall GetComponentFromHandle(void * ComponentHandle);
	int __fastcall GetSelCount();
	Toolsapi::_di_IOTAComponent __fastcall GetSelComponent(int Index);
	Toolsapi::_di_IOTAComponent __fastcall GetCreateParent();
	Toolsapi::_di_IOTAComponent __fastcall CreateComponent(const Toolsapi::_di_IOTAComponent Container, const System::UnicodeString TypeName, int X, int Y, int W, int H);
	void __fastcall GetFormResource(const _di_IStream Stream);
	Designintf::_di_IDesigner __fastcall GetFormDesigner();
	void __fastcall INTAFormEditor_GetFormResource(System::Classes::TStream* Stream);
	
public:
	__fastcall TOTAFormEditor(TComponentRoot* AComponentRoot);
	void __fastcall FormModified();
	void __fastcall NotifyFormModified(System::_di_IInterface Unk, System::_di_IInterface UnkParam);
	void __fastcall FormSaving();
	void __fastcall NotifyFormSaving(System::_di_IInterface Unk, System::_di_IInterface UnkParam);
	void __fastcall NotifyActivate();
	void __fastcall NotifyActivated(System::_di_IInterface Unk, System::_di_IInterface UnkParam);
	void __fastcall NotifyDestruct();
	void __fastcall NotifyRenamed(System::Classes::TComponent* Component, const System::UnicodeString OldName, const System::UnicodeString NewName);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TOTAFormEditor() { }
	
private:
	void *__INTAFormEditor;	// Toolsapi::INTAFormEditor 
	void *__IOTAEditorContent;	// Toolsapi::IOTAEditorContent 
	void *__IOTAFormEditor;	// Toolsapi::IOTAFormEditor 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {56931EB9-329A-D411-87C6-9B2730412200}
	operator Toolsapi::_di_INTAFormEditor()
	{
		Toolsapi::_di_INTAFormEditor intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::INTAFormEditor*(void) { return (Toolsapi::INTAFormEditor*)&__INTAFormEditor; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {748FB436-59B9-495D-8AC8-807CF6622967}
	operator Toolsapi::_di_IOTAEditorContent()
	{
		Toolsapi::_di_IOTAEditorContent intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::IOTAEditorContent*(void) { return (Toolsapi::IOTAEditorContent*)&__IOTAEditorContent; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {F17A7BD2-E07D-11D1-AB0B-00C04FB16FB3}
	operator Toolsapi::_di_IOTAFormEditor()
	{
		Toolsapi::_di_IOTAFormEditor intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::IOTAFormEditor*(void) { return (Toolsapi::IOTAFormEditor*)&__IOTAFormEditor; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {F17A7BD0-E07D-11D1-AB0B-00C04FB16FB3}
	operator Toolsapi::_di_IOTAEditor()
	{
		Toolsapi::_di_IOTAEditor intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::IOTAEditor*(void) { return (Toolsapi::IOTAEditor*)&__IOTAFormEditor; }
	#endif
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TSelections : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
public:
	System::Classes::TPersistent* operator[](int Index) { return this->Persistents[Index]; }
	
private:
	Designer::_di_ISelections FSelections;
	System::Classes::TNotifyEvent FOnChanged;
	void __fastcall SelectionChanged(const Designer::_di_ISelections Selections);
	int __fastcall GetCount();
	System::Classes::TPersistent* __fastcall GetPersistents(int Index);
	
public:
	__fastcall TSelections(const Designer::_di_ISelections Selections);
	__fastcall virtual ~TSelections();
	Designer::_di_IItem __fastcall FindItemFor(System::Classes::TPersistent* const Obj);
	__property int Count = {read=GetCount, nodefault};
	__property Designer::_di_ISelections Items = {read=FSelections};
	__property System::Classes::TPersistent* Persistents[int Index] = {read=GetPersistents/*, default*/};
	__property System::Classes::TNotifyEvent OnChanged = {read=FOnChanged, write=FOnChanged};
private:
	void *__ISelectionsListener;	// Designer::ISelectionsListener 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3D642F40-D567-11D3-BA96-0080C78ADCDB}
	operator Designer::_di_ISelectionsListener()
	{
		Designer::_di_ISelectionsListener intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Designer::ISelectionsListener*(void) { return (Designer::ISelectionsListener*)&__ISelectionsListener; }
	#endif
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TRenameItem : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	System::UnicodeString Source;
	System::UnicodeString Target;
	__fastcall TRenameItem(const System::UnicodeString ASource, const System::UnicodeString ATarget);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TRenameItem() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRenames : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	TRenameItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	System::Classes::TList* FList;
	int __fastcall GetCount();
	TRenameItem* __fastcall GetItems(int Index);
	
public:
	__fastcall TRenames();
	__fastcall virtual ~TRenames();
	void __fastcall Add(System::UnicodeString Source, System::UnicodeString Target);
	void __fastcall Rename(System::UnicodeString &Name);
	__property int Count = {read=GetCount, nodefault};
	__property TRenameItem* Items[int Index] = {read=GetItems/*, default*/};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEventItem : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	void *Value;
	System::UnicodeString Name;
	System::UnicodeString OriginalName;
	void *NewValue;
	__fastcall TEventItem(void * AValue, const System::UnicodeString AName);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TEventItem() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEvents : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	TEventItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	System::Classes::TList* FList;
	int __fastcall GetCount();
	TEventItem* __fastcall GetItems(int Index);
	
public:
	__fastcall TEvents();
	__fastcall virtual ~TEvents();
	void __fastcall Add(void * Value, System::UnicodeString MethodName);
	__property int Count = {read=GetCount, nodefault};
	__property TEventItem* Items[int Index] = {read=GetItems/*, default*/};
};

#pragma pack(pop)

enum DECLSPEC_DENUM TRootReadErrorResult : unsigned char { rerOK, rerCancel, rerIgnoreAll };

enum DECLSPEC_DENUM TRecoveryResult : unsigned char { rrDelete, rrRename, rrCreate, rrCancel };

enum DECLSPEC_DENUM TQueryRedirectLinksResult : unsigned char { qrYes, qrNo, qrCancel };

enum DECLSPEC_DENUM TDeleteWarnResult : unsigned char { dwYes, dwNo, dwCancel };

typedef System::DynamicArray<System::Classes::TComponent*> TComponentArray;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TComponentRoot : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	_di_IInternalComponentDesigner FDesigner;
	_di_IDesignerModule FModule;
	_di_IDesignerViewModule FViewModule;
	_di_IComponentDesignSurface FSurface;
	Designer::_di_ISurfaceDesigner FSurfaceDesigner;
	Update::_di_IUpdateManager FRootUpdateManager;
	System::Classes::_di_IInterfaceList FUpdateManagers;
	_di_IInternalRoot FAncestorRoot;
	TAncestorNotifier* FAncestorRootNotifier;
	System::_di_IInterface FAncestorRootNotifierUnk;
	System::Generics::Collections::TList__1<System::Generics::Collections::TPair__2<System::UnicodeString,_di_IInternalRoot> >* FDesignerViews;
	int FActiveView;
	Designintf::_di_IComponentEditor FRootEditor;
	Designintf::_di_ICustomModule FCustomModule;
	System::UnicodeString FFileSystem;
	System::UnicodeString FFileName;
	System::UnicodeString FRootBaseClass;
	System::UnicodeString FRootName;
	TComponentArray FSelectableComponents;
	System::Types::TRect FAdjustmentRect;
	System::Types::TRect FAdjustmentBounds;
	System::Classes::TComponent* FRoot;
	System::TClass FRootClass;
	Designintf::TCustomModuleClass FCustomModuleClass;
	TSelections* FSelections;
	System::Classes::_di_IInterfaceList FMarkedItems;
	System::_di_IInterface FSelectionsRef;
	System::Classes::TStrings* FUnitDependencies;
	System::Classes::TStrings* FImportedRootList;
	System::Classes::TStream* FRootStream;
	System::Classes::TStream* FDormantStream;
	System::Classes::TStream* FUndoStream;
	System::Classes::TComponent* FUndoParent;
	System::Classes::TList* FDependencies;
	System::Classes::TList* FDependents;
	System::Classes::TList* FModifiableFrames;
	System::Generics::Collections::TDictionary__2<System::Classes::TComponent*,System::Classes::TComponent*>* FInliningComponents;
	TRenames* FRenames;
	TEvents* FEvents;
	int FModifyTime;
	int FDiskAge;
	bool FInUndo;
	bool FCreateContainers;
	bool FRevertingComponent;
	bool FDependenciesUpToDate;
	bool FReadError;
	bool FDFMToText;
	System::Classes::TStreamOriginalFormat FOrigDFMFormat;
	bool FCreateFrameManagers;
	bool FIgnoringErrors;
	bool FIgnoreNext;
	bool FResurrecting;
	bool FAllowNoSelection;
	bool FIgnoreRename;
	TOTAFormEditor* FOTAFormEditor;
	System::_di_IInterface FOTAFormEditorRef;
	bool FClosing;
	int FReadStreamSize;
	System::UnicodeString FViewName;
	bool FGeneratePreview;
	void __fastcall ClearDependents();
	void __fastcall ClearDependencies();
	void __fastcall CloseViews();
	System::Classes::TComponent* __fastcall DoCreateComponent(const _di_IInternalPaletteItem Item, Designer::_di_IItem ParentItem, const System::Types::TRect &ARect, bool ApplyDefaults = true, bool ScaleRect = true);
	void __fastcall EnsureSelectableComponents();
	Designer::_di_IItem __fastcall FindItemParent(const Designer::_di_IItem Item);
	TComponentRoot* __fastcall GetComponentRootFor(System::Classes::TComponent* const Root)/* overload */;
	TComponentRoot* __fastcall GetComponentRootFor(const System::UnicodeString RootName)/* overload */;
	_di_IDesignEnvironment __fastcall GetEnvironment();
	System::Classes::TStream* __fastcall GetRootStream();
	void __fastcall IterateMethods(void * Func);
	void __fastcall WriterFindAncestor(System::Classes::TWriter* Writer, System::Classes::TComponent* Component, const System::UnicodeString Name, System::Classes::TComponent* &Ancestor, System::Classes::TComponent* &RootAncestor);
	void __fastcall CreateFromStream(System::Classes::TStream* const Stream, const _di_IRoot ARoot = _di_IRoot());
	System::Classes::TStream* __fastcall PrepareInputStream(System::Classes::TStream* const Strm, bool MatchFormat);
	void __fastcall GetCreateInfoFrom(System::Classes::TStream* const Stream, System::UnicodeString &ClassName, System::UnicodeString &AncestorClassName, const _di_IRoot ARoot = _di_IRoot());
	_di_IRoot __fastcall FindAncestorRoot(const System::UnicodeString AncestorClassName);
	void __fastcall SetCreateInfo(const System::UnicodeString AncestorClassName, const _di_IRoot ARoot = _di_IRoot());
	System::Classes::TComponent* __fastcall CreateRootInstance(const System::UnicodeString AClassName);
	void __fastcall ValidateInheritence(System::Classes::TComponent* Root);
	System::Classes::TComponent* __fastcall CreateRootAs(const System::UnicodeString AClassName, const System::UnicodeString AAncestorClassName, const _di_IRoot ARoot = _di_IRoot());
	void __fastcall FindObjectMethod(System::Classes::TReader* Reader, const System::UnicodeString MethodName, void * &Address, bool &Error);
	void __fastcall ReaderObjectError(System::Classes::TReader* Reader, const System::UnicodeString Message, bool &Handled);
	void __fastcall ReaderAncestorNotFound(System::Classes::TReader* Reader, const System::UnicodeString ComponentName, System::Classes::TPersistentClass ComponentClass, System::Classes::TComponent* &Component);
	void __fastcall ReaderFindComponentClass(System::Classes::TReader* Reader, const System::UnicodeString ClassName, System::Classes::TComponentClass &ComponentClass);
	void __fastcall ReaderCreateComponent(System::Classes::TReader* Reader, System::Classes::TComponentClass ComponentClass, System::Classes::TComponent* &Component);
	System::Classes::TComponent* __fastcall FrameCreateComponent(System::Classes::TComponentClass ComponentClass, System::Classes::TComponent* Owner);
	void __fastcall AddClassProps(System::Classes::TList* ClassList, System::TObject* Obj);
	void __fastcall WriteRootStream(System::Classes::TStream* S);
	void __fastcall LoadDependentModules(System::Classes::TComponent* Component);
	void __fastcall ResurrectDependentModules(System::Classes::TComponent* Component);
	void __fastcall ClearDependenciesOn(System::Classes::TComponent* const Dependent);
	void __fastcall RenameEvents();
	void __fastcall VerifyEvents(System::Classes::TStrings* NewEvents);
	void __fastcall UpdateEvents();
	void __fastcall ReaderSetName(System::Classes::TReader* Reader, System::Classes::TComponent* Component, System::UnicodeString &Name);
	void __fastcall ReaderReferenceName(System::Classes::TReader* Reader, System::UnicodeString &Name);
	void __fastcall ReaderFindMethod(System::Classes::TReader* Reader, const System::UnicodeString MethodName, void * &Address, bool &Error);
	void __fastcall ComponentRead(System::Classes::TComponent* Component);
	void __fastcall ComponentReadAdjust(System::Classes::TComponent* Component);
	void __fastcall AddImportedRoot(const System::UnicodeString RootName);
	void __fastcall InternalInitializeDesigner(bool AResurrecting = false);
	void __fastcall InternalDeinitializeDesigner(bool AGoingDormant = false);
	void __fastcall SelectionsChanged(System::TObject* Sender);
	void __fastcall ModifiedUpdateNotification();
	int __fastcall InternalAddView(const System::UnicodeString AViewName, bool Existing, const _di_IDatedStream AStream = _di_IDatedStream());
	Designer::_di_IItem __fastcall GetMasterViewComponent(const Designer::_di_IItem ParentItem);
	
protected:
	void __fastcall BringToFront();
	void __fastcall SendToBack();
	void __fastcall SelectAll();
	void __fastcall ZOrder(bool Front);
	void __fastcall AlignToGrid();
	virtual void __fastcall DoHide() = 0 ;
	virtual void __fastcall DoShow() = 0 ;
	virtual void __fastcall DoShowAs(Designertypes::TShowState ShowState) = 0 ;
	System::Classes::TComponent* __fastcall CompIndexToComponent(int Index);
	System::Classes::TComponent* __fastcall FindCurrentParent();
	Designer::_di_IItem __fastcall FindCurrentParentItem();
	void __fastcall ForceCommonParent();
	bool __fastcall IsRootSelected();
	void __fastcall SelectReadStream(System::Classes::TStream* const S, System::Classes::TComponent* const Parent, bool AdjustPos, const System::Types::TRect &Rect);
	void __fastcall ReadStream(System::Classes::TStream* const S, System::Classes::TComponent* const Parent, bool AdjustPos, const System::Types::TRect &Rect);
	virtual void __fastcall ReadObjectFromStream(System::Classes::TComponent* Instance, System::Classes::TStream* const Stream);
	System::Classes::TPersistent* __fastcall SelectedPersistent();
	System::Classes::TComponent* __fastcall SelectedComponent();
	void __fastcall StreamSelection(System::Classes::TStream* const S, bool CopyMethods, bool CopyBounds, System::Classes::TStrings* UnitDependencies);
	void __fastcall ValidateComponent(System::Classes::TComponent* Component);
	virtual void __fastcall GetPreviewFromMaster(const System::UnicodeString ViewName, Vcl::Graphics::TBitmap* Bitmap) = 0 ;
	__property _di_IDesignerModule Module = {read=FModule};
	__property System::Classes::TList* Dependencies = {read=FDependencies};
	__property System::Classes::TList* Dependents = {read=FDependents};
	__property _di_IDesignEnvironment Environment = {read=GetEnvironment};
	__property System::Classes::TComponent* Root = {read=FRoot};
	__property System::UnicodeString RootBaseClass = {read=FRootBaseClass};
	__property _di_IComponentDesignSurface Surface = {read=FSurface, write=FSurface};
	__property Designer::_di_ISurfaceDesigner SurfaceDesigner = {read=FSurfaceDesigner, write=FSurfaceDesigner};
	__property TSelections* Selections = {read=FSelections};
	__property Update::_di_IUpdateManager RootUpdateManager = {read=FRootUpdateManager};
	__property System::Classes::_di_IInterfaceList UpdateManagers = {read=FUpdateManagers};
	__property _di_IInternalComponentDesigner Designer = {read=FDesigner};
	__property System::Classes::TStream* UndoStream = {read=FUndoStream};
	__property TOTAFormEditor* OTAFormEditor = {read=FOTAFormEditor};
	__property bool GeneratePreview = {read=FGeneratePreview, write=FGeneratePreview, nodefault};
	_di_IStream __fastcall FormFileOpen();
	System::UnicodeString __fastcall GetFileName();
	int __fastcall GetTimeAtLoad();
	int __fastcall GetModifyTime();
	bool __fastcall CheckFileDate();
	void __fastcall Rename(const System::UnicodeString NewFileName);
	void __fastcall Save();
	void __fastcall Close();
	void __fastcall CreateComponent(_di_IInternalPaletteItem Item)/* overload */;
	void __fastcall CreateComponentPos(_di_IInternalPaletteItem Item, int X, int Y)/* overload */;
	System::UnicodeString __fastcall FindCompClass(const System::UnicodeString CompName);
	void __fastcall FreezeProperties();
	System::UnicodeString __fastcall GetAncestorName();
	int __fastcall GetCompCount();
	_di_ICompInfo __fastcall GetCompInfo(int Index);
	System::UnicodeString __fastcall GetCompName(int Index);
	System::UnicodeString __fastcall GetCompType(int Index);
	void __fastcall GetDependencies(TGetRootProc Proc);
	void __fastcall GetDependentRoots(TGetRootProc Proc);
	System::UnicodeString __fastcall GetDesignClassName();
	_di_IDesignerModule __fastcall GetModule();
	System::UnicodeString __fastcall GetFileSystem();
	System::Classes::TComponent* __fastcall GetRoot();
	System::UnicodeString __fastcall GetRootName();
	void __fastcall GetUnits(System::Classes::TGetStrProc Proc);
	void __fastcall GoDormant();
	void __fastcall Hide();
	bool __fastcall IsDormant();
	bool __fastcall RenameComponent(const System::UnicodeString CurName, const System::UnicodeString NewName);
	void __fastcall RenameRootMethod(const System::UnicodeString CurName, const System::UnicodeString NewName);
	void __fastcall RemoveDependentLinks();
	void __fastcall SetFileSystem(const System::UnicodeString FileSystem);
	void __fastcall SetRootName(const System::UnicodeString AName);
	void __fastcall SetSelection(const System::UnicodeString Name);
	void __fastcall Show();
	void __fastcall ShowAs(Designertypes::TShowState ShowState);
	void __fastcall ThawProperties();
	void __fastcall CreateDesignerViews(const System::_di_IInterface ACreator);
	_di_IRoot __fastcall GetActiveView();
	int __fastcall GetViewCount();
	_di_IRoot __fastcall GetView(int Index);
	System::UnicodeString __fastcall GetViewName(int Index)/* overload */;
	System::UnicodeString __fastcall GetViewName()/* overload */;
	int __fastcall GetViewIndex(const System::UnicodeString ViewName);
	_di_IRoot __fastcall GetMasterView();
	int __fastcall AddView(const System::UnicodeString ViewName);
	void __fastcall RemoveView(const System::UnicodeString ViewName)/* overload */;
	void __fastcall RemoveView(int Index)/* overload */;
	virtual Platformapi::TOTADeviceOrientation __fastcall GetOrientation() = 0 ;
	virtual System::Types::TSize __fastcall GetRootSize() = 0 ;
	virtual void __fastcall GetViewPreview(Vcl::Graphics::TBitmap* ABitmap) = 0 /* overload */;
	void __fastcall GetViewPreview(const System::UnicodeString AViewName, Vcl::Graphics::TBitmap* ABitmap)/* overload */;
	bool __fastcall SpecialPropertyHelp(const System::UnicodeString Member, /* out */ System::UnicodeString &HelpFile, /* out */ System::UnicodeString &Context, /* out */ System::Classes::THelpType &HelpType);
	bool __fastcall CanRevert(System::Classes::TPersistent* Instance, System::Typinfo::PPropInfo PropInfo)/* overload */;
	void __fastcall CopySelectionToStream(System::Classes::TMemoryStream* S, System::Classes::TStrings* UnitDependencies);
	System::UnicodeString __fastcall GetRootBaseClass();
	System::TClass __fastcall GetRootClass();
	Designintf::TCustomModuleClass __fastcall GetCustomModuleClass();
	_di_IInternalComponentDesigner __fastcall GetComponentDesigner();
	Update::_di_IUpdateManager __fastcall GetUpdateManager();
	TComponentRoot* __fastcall Implementor();
	bool __fastcall IsFrame(System::Classes::TPersistent* AInstance);
	void __fastcall Modified();
	void __fastcall PasteSelectionFromStream(System::Classes::TMemoryStream* S, System::Classes::TComponent* Parent, const System::Types::TRect &Rect);
	void __fastcall RemoveDependenciesOn(System::Classes::TComponent* const Component);
	void __fastcall Resurrect();
	void __fastcall Revert(System::Classes::TPersistent* Instance, System::Typinfo::PPropInfo PropInfo);
	void __fastcall SetActive(bool Value);
	void __fastcall SetControlsLocked(bool Value);
	void __fastcall UpdateDependencies();
	void __fastcall UpdateOptions();
	Toolsapi::_di_IOTAFormEditor __fastcall GetFormEditor();
	void __fastcall Edit(System::Classes::TComponent* const Component);
	void __fastcall Select(System::Classes::TPersistent* Component, bool Extend);
	void __fastcall SetActiveView(const _di_IRoot AView);
	System::Classes::TComponent* __fastcall CreateChild(System::Classes::TComponentClass ComponentClass, System::Classes::TComponent* Parent)/* overload */;
	System::Classes::TComponent* __fastcall CreateComponent(System::Classes::TComponentClass ComponentClass, System::Classes::TComponent* Parent, int Left, int Top, int Width, int Height)/* overload */;
	System::Classes::TComponent* __fastcall CreateCurrentComponent(System::Classes::TComponent* Parent, const System::Types::TRect &Rect);
	System::Classes::TComponent* __fastcall CreateCurrentComponentScaled(System::Classes::TComponent* Parent, const System::Types::TRect &Rect, bool ScaleRect);
	System::TMethod __fastcall CreateMethod(const System::UnicodeString Name, System::Typinfo::PTypeData TypeData)/* overload */;
	System::TMethod __fastcall CreateMethod(const System::UnicodeString Name, const Designintf::_di_IEventInfo AEventInfo)/* overload */;
	System::UnicodeString __fastcall GetMethodName(const System::TMethod &Method);
	void __fastcall GetMethods(System::Typinfo::PTypeData TypeData, System::Classes::TGetStrProc Proc)/* overload */;
	void __fastcall GetMethods(const Designintf::_di_IEventInfo AEventInfo, System::Classes::TGetStrProc Proc)/* overload */;
	System::UnicodeString __fastcall GetPathAndBaseExeName();
	System::UnicodeString __fastcall GetPrivateDirectory();
	System::UnicodeString __fastcall GetAppDataDirectory(bool Local = false);
	System::UnicodeString __fastcall GetBaseRegKey();
	System::Inifiles::TCustomIniFile* __fastcall GetIDEOptions();
	void __fastcall GetSelections(const Designintf::_di_IDesignerSelections List);
	bool __fastcall MethodExists(const System::UnicodeString Name);
	void __fastcall SelectComponent(System::Classes::TPersistent* Instance)/* overload */;
	void __fastcall SelectComponent(const Designintf::_di_IDesignObject ADesignObject)/* overload */;
	void __fastcall SetSelections(const Designintf::_di_IDesignerSelections List);
	void __fastcall ShowMethod(const System::UnicodeString Name);
	void __fastcall GetComponentNames(System::Typinfo::PTypeData TypeData, System::Classes::TGetStrProc Proc);
	System::Classes::TComponent* __fastcall GetComponent(const System::UnicodeString Name);
	System::UnicodeString __fastcall GetComponentName(System::Classes::TComponent* Component);
	System::Classes::TPersistent* __fastcall GetObject(const System::UnicodeString Name);
	System::UnicodeString __fastcall GetObjectName(System::Classes::TPersistent* Instance);
	void __fastcall GetObjectNames(System::Typinfo::PTypeData TypeData, System::Classes::TGetStrProc Proc);
	bool __fastcall MethodFromAncestor(const System::TMethod &Method);
	bool __fastcall IsComponentLinkable(System::Classes::TComponent* Component);
	bool __fastcall IsComponentHidden(System::Classes::TComponent* Component);
	void __fastcall MakeComponentLinkable(System::Classes::TComponent* Component);
	bool __fastcall GetIsDormant();
	void __fastcall GetProjectModules(System::Classes::TGetModuleProc Proc);
	Designintf::_di_IDesigner __fastcall GetAncestorDesigner();
	bool __fastcall IsSourceReadOnly();
	System::Types::TPoint __fastcall GetScrollRanges(const System::Types::TPoint &ScrollPosition);
	void __fastcall ChainCall(const System::UnicodeString MethodName, const System::UnicodeString InstanceName, const System::UnicodeString InstanceMethod, System::Typinfo::PTypeData TypeData)/* overload */;
	void __fastcall ChainCall(const System::UnicodeString MethodName, const System::UnicodeString InstanceName, const System::UnicodeString InstanceMethod, const Designintf::_di_IEventInfo AEventInfo)/* overload */;
	void __fastcall ClearSelection();
	void __fastcall DeleteSelection(bool ADoAll = false);
	void __fastcall NoSelection();
	void __fastcall ModuleFileNames(System::UnicodeString &ImplFileName, System::UnicodeString &IntfFileName, System::UnicodeString &FormFileName);
	System::UnicodeString __fastcall GetRootClassName();
	System::UnicodeString __fastcall UniqueName(const System::UnicodeString ClassName);
	void __fastcall RenameMethod(const System::UnicodeString CurName, const System::UnicodeString NewName);
	void __fastcall EditComponent(System::Classes::TComponent* const Component);
	System::UnicodeString __fastcall GetDesignerExtension();
	System::Classes::TComponent* __fastcall GetCurrentParent();
	System::Classes::TComponent* __fastcall FindRootAncestor(const System::UnicodeString AClassName);
	System::Classes::TComponent* __fastcall FindGlobalComponent(const System::UnicodeString Name);
	Designintf::_di_ICustomModule __fastcall GetCustomModule();
	Designintf::_di_ISelectionEditorList __fastcall GetSelectionEditors();
	Designintf::_di_IComponentEditor __fastcall GetComponentEditor();
	Designer::_di_IItem __fastcall FindSelection(System::Classes::TPersistent* Instance);
	bool __fastcall IsAnchorSelection(System::Classes::TPersistent* Instance);
	_di_IInternalPaletteItem __fastcall GetPaletteItem(System::Classes::TComponentClass ComponentClass);
	void __fastcall ValidateRename(System::Classes::TComponent* AComponent, const System::UnicodeString CurName, const System::UnicodeString NewName);
	void __fastcall InstanceInserted(System::Classes::TPersistent* AInstance);
	void __fastcall InstanceRemoved(System::Classes::TPersistent* AInstance);
	void __fastcall CanInsertComponent(System::Classes::TComponent* AComponent);
	bool __fastcall ModifiableFrame(System::Classes::TComponent* AComponent);
	System::Classes::TComponent* __fastcall GetInliningComponent(System::Classes::TComponent* AComponent);
	void __fastcall ModalEdit(System::WideChar EditKey, const Designintf::_di_IActivatable ReturnWindow);
	void __fastcall SelectItemName(const System::UnicodeString PropertyName);
	void __fastcall ValidateModification();
	bool __fastcall CanUndelete();
	void __fastcall DoUndelete();
	void __fastcall ShowHelp();
	bool __fastcall HasSelectableChildren(System::Classes::TComponent* AComponent);
	int __fastcall GetSelectableComponentCount();
	System::Classes::TComponent* __fastcall GetSelectableComponents(int Index);
	void __fastcall Updating(const Update::_di_IUpdateManager Context);
	void __fastcall Updated(const Update::_di_IUpdateManager Context);
	void __fastcall Deleting(const Update::_di_IUpdateManager Context, System::Classes::TPersistent* Instance);
	System::Classes::TComponent* __fastcall UpdateManagerCreateComponent(System::TClass ComponentClass, System::Classes::TComponent* const Owner);
	void __fastcall WriteComponent(System::Classes::TWriter* Writer, System::Classes::TComponent* Component);
	virtual void __fastcall RefuseChildren(System::Classes::TComponent* Component) = 0 ;
	void __fastcall Align(Toolsapi::TOTAAffect Affect);
	void __fastcall Size(Toolsapi::TOTASizeAffect Affect, int Value);
	void __fastcall IFlipChildren_FlipChildren(bool SelectedOnly);
	bool __fastcall GetTextDFM();
	bool __fastcall CanRevert()/* overload */;
	bool __fastcall CanModify();
	Designintf::_di_IDesignerSelections __fastcall GetSelection();
	bool __fastcall GetLocked();
	void __fastcall Dialog(TDesignDialog Dialog);
	void __fastcall Command(TDesignCommand Command);
	void __fastcall DoViewAsText();
	virtual void __fastcall FlipChildren(bool AllLevels) = 0 ;
	virtual void __fastcall AddClassProp(System::Classes::TList* ClassList, System::TObject* Obj) = 0 ;
	virtual void __fastcall AdjustComponent(System::Classes::TComponent* Component, const System::Types::TRect &AdjustmentRect, const System::Types::TRect &AdjustmentBounds) = 0 ;
	virtual bool __fastcall CanClassBeFrame(System::TClass Cls) = 0 ;
	virtual void __fastcall DisableAlignments() = 0 ;
	virtual void __fastcall DeinitializeDesigner() = 0 ;
	virtual void __fastcall FreeRoot(System::Classes::TComponent* Root) = 0 ;
	virtual void __fastcall EnableAlignments() = 0 ;
	virtual void __fastcall FinalizeNewRoot(System::Classes::TComponent* Component, const System::UnicodeString RootName) = 0 ;
	virtual TRecoveryResult __fastcall InheritenceRecovery(const System::UnicodeString RootName, const System::UnicodeString AncestorName, System::UnicodeString &ComponentName, const System::UnicodeString Names, bool RecoveringFrame) = 0 ;
	virtual void __fastcall InitializeDesigner() = 0 ;
	virtual bool __fastcall IsBlankNameInheritenceException(System::Classes::TComponent* Component) = 0 ;
	virtual TQueryRedirectLinksResult __fastcall QueryRedirectLinks(const System::UnicodeString RootName, const System::UnicodeString ComponentName) = 0 ;
	virtual void __fastcall RedirectLinks(System::Classes::TComponent* Root, const System::UnicodeString LinkName) = 0 ;
	virtual TRootReadErrorResult __fastcall RootReadError(const System::UnicodeString Message) = 0 ;
	virtual void __fastcall SetDesignerListenerFor(System::Classes::TComponent* Component) = 0 ;
	virtual void __fastcall SelectComponent(System::Classes::TPersistent* Component, bool Extend)/* overload */;
	virtual void __fastcall SetRootDefaults(System::Classes::TComponent* Component, const System::UnicodeString RootName) = 0 ;
	virtual void __fastcall InitCustomModule() = 0 ;
	virtual System::Classes::TComponent* __fastcall FindRootOf(System::Classes::TPersistent* Instance) = 0 ;
	virtual TDeleteWarnResult __fastcall NonAncestorDeleteWarning(const System::UnicodeString Name, const System::UnicodeString NonAncestors) = 0 ;
	virtual int __fastcall GetControlCount(System::Classes::TPersistent* APersistent) = 0 ;
	virtual System::Classes::TComponent* __fastcall GetControl(System::Classes::TPersistent* APersistent, int Index) = 0 ;
	virtual bool __fastcall IsTControl(System::Classes::TPersistent* APersistent) = 0 ;
	virtual System::Classes::TComponent* __fastcall GetParent(System::Classes::TPersistent* APersistent) = 0 ;
	virtual void __fastcall ForceRefuseChildren(System::Classes::TComponent* Component) = 0 ;
	virtual System::Classes::TPersistentClass __fastcall GetActiveClassGroup() = 0 ;
	virtual bool __fastcall SendRootComponent() = 0 ;
	virtual void __fastcall ClearRootReferences() = 0 ;
	virtual void __fastcall SetInstanceParent(System::Classes::TComponent* Instance) = 0 ;
	__property Designintf::_di_ICustomModule CustomModule = {read=FCustomModule};
	__property Designintf::TCustomModuleClass CustomModuleClass = {read=FCustomModuleClass};
	__property System::TClass RootClass = {read=GetRootClass};
	
public:
	__fastcall TComponentRoot(const _di_IComponentDesigner Designer, const _di_IDesignerModule AModule, const System::UnicodeString AFileName, bool Existing, const _di_IDatedStream RootStream, const _di_IDatedStream DesignStream, const System::UnicodeString ARootName, const System::UnicodeString AAncestor, const System::UnicodeString AFileSystem, const _di_IRoot ARoot, const System::UnicodeString AViewName);
	__fastcall virtual ~TComponentRoot();
	virtual void __fastcall BeforeDestruction();
private:
	void *__IFlipChildren;	// IFlipChildren 
	void *__IOTAAlignable;	// Toolsapi::IOTAAlignable 
	void *__IUpdateManagerCallback;	// Update::IUpdateManagerCallback 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {EC71B51F-B812-42B2-865B-44E7819686F7}
	operator _di_IFlipChildren()
	{
		_di_IFlipChildren intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IFlipChildren*(void) { return (IFlipChildren*)&__IFlipChildren; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {346E7BA3-D47E-11D3-BA96-0080C78ADCDB}
	operator Toolsapi::_di_IOTAAlignable()
	{
		Toolsapi::_di_IOTAAlignable intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::IOTAAlignable*(void) { return (Toolsapi::IOTAAlignable*)&__IOTAAlignable; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {ABBE7254-5495-11D1-9FB5-0020AF3D82DA}
	operator Update::_di_IUpdateManagerCallback()
	{
		Update::_di_IUpdateManagerCallback intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Update::IUpdateManagerCallback*(void) { return (Update::IUpdateManagerCallback*)&__IUpdateManagerCallback; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAncestorNotifier : public Toolsapi::TNotifierObject
{
	typedef Toolsapi::TNotifierObject inherited;
	
private:
	Toolsapi::_di_IOTAModule FModule;
	TComponentRoot* FComponentRoot;
	int FNotifierIndex;
	
protected:
	HIDESBASE void __fastcall Destroyed();
	bool __fastcall CheckOverwrite();
	void __fastcall ModuleRenamed(const System::UnicodeString NewName);
	
public:
	__fastcall TAncestorNotifier(TComponentRoot* AComponentRoot);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TAncestorNotifier() { }
	
private:
	void *__IOTAModuleNotifier;	// Toolsapi::IOTAModuleNotifier 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {F17A7BCE-E07D-11D1-AB0B-00C04FB16FB3}
	operator Toolsapi::_di_IOTAModuleNotifier()
	{
		Toolsapi::_di_IOTAModuleNotifier intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::IOTAModuleNotifier*(void) { return (Toolsapi::IOTAModuleNotifier*)&__IOTAModuleNotifier; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {F17A7BCF-E07D-11D1-AB0B-00C04FB16FB3}
	operator Toolsapi::_di_IOTANotifier()
	{
		Toolsapi::_di_IOTANotifier intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::IOTANotifier*(void) { return (Toolsapi::IOTANotifier*)&__IOTAModuleNotifier; }
	#endif
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{7ED7BF26-E349-11D3-AB4A-00C04FB17A72}") IRootListUpdate  : public System::IInterface 
{
	virtual void __fastcall RootListAdd(const _di_IRoot ARoot) = 0 ;
	virtual void __fastcall RootListRemove(const _di_IRoot ARoot) = 0 ;
	virtual void __fastcall RootGoingDormant(const _di_IRoot ARoot) = 0 ;
	virtual void __fastcall RootModified(const _di_IRoot ARoot) = 0 ;
};

__interface  INTERFACE_UUID("{7ED7BF32-E349-11D3-AB4A-00C04FB17A72}") IInternalItem  : public Designer::IItem 
{
	virtual Designer::_di_IItem __fastcall GetChildren(int Index) = 0 ;
	virtual int __fastcall GetChildCount() = 0 ;
	virtual Designintf::_di_IComponentEditor __fastcall GetEditor() = 0 ;
	virtual bool __fastcall GetMarked() = 0 ;
	virtual void __fastcall SetMarked(bool Value) = 0 ;
	virtual void __fastcall SetParent(const Designer::_di_IItem Item) = 0 ;
	virtual void __fastcall Show() = 0 ;
	virtual void __fastcall ZOrder(bool Front) = 0 ;
	virtual void __fastcall FlipChildren() = 0 ;
	__property Designer::_di_IItem Children[int Index] = {read=GetChildren};
	__property int ChildCount = {read=GetChildCount};
	__property Designintf::_di_IComponentEditor Editor = {read=GetEditor};
	__property Designer::_di_IItem Parent = {read=GetParent, write=SetParent};
	__property bool Marked = {read=GetMarked, write=SetMarked};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TInternalItem : public Designer::TPersistentItem
{
	typedef Designer::TPersistentItem inherited;
	
private:
	Designintf::_di_IComponentEditor FEditor;
	_di_IInternalRoot FInternalRoot;
	Designintf::_di_IDesigner FDesigner;
	
protected:
	void __fastcall Edit();
	Designer::_di_IItem __fastcall GetChildren(int Index);
	int __fastcall GetChildCount();
	Designintf::_di_IComponentEditor __fastcall GetEditor();
	bool __fastcall Selectable();
	__property Designintf::_di_IDesigner Designer = {read=FDesigner};
	__property _di_IInternalRoot InternalRoot = {read=FInternalRoot};
	
public:
	__fastcall TInternalItem(System::Classes::TPersistent* AInstance, const Designintf::_di_IDesigner ADesigner);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TInternalItem() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TComponentItem : public TInternalItem
{
	typedef TInternalItem inherited;
	
private:
	System::Classes::TComponent* __fastcall GetComponent();
	
protected:
	__property System::Classes::TComponent* Component = {read=GetComponent};
	HIDESBASE bool __fastcall Selectable();
	HIDESBASE void __fastcall ValidateDeletable();
	void __fastcall ZOrder(bool Front);
	void __fastcall FlipChildren();
	
public:
	__fastcall TComponentItem(System::Classes::TComponent* AComponent, const Designintf::_di_IDesigner ADesigner)/* overload */;
	__fastcall TComponentItem(System::Classes::TPersistent* Persistent, const Designintf::_di_IDesigner ADesigner)/* overload */;
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TComponentItem() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TNonControlItem : public TComponentItem
{
	typedef TComponentItem inherited;
	
protected:
	HIDESBASE System::Types::TRect __fastcall GetBoundsRect();
	System::Types::TRect __fastcall GetPaddedBoundsRect();
	HIDESBASE Designer::_di_IItem __fastcall GetParent();
	System::Types::TPoint __fastcall GlobalToLocal(const System::Types::TPoint &Point);
	System::Types::TPoint __fastcall LocalToGlobal(const System::Types::TPoint &Point);
	HIDESBASE void __fastcall SetBoundsRect(const System::Types::TRect &Value);
	HIDESBASE void __fastcall ValidateDeletable();
	HIDESBASE bool __fastcall Selectable();
	HIDESBASE void __fastcall ZOrder(bool Front);
	void __fastcall SetParent(const Designer::_di_IItem Item);
	void __fastcall Show();
	bool __fastcall GetMarked();
	void __fastcall SetMarked(bool Value);
	HIDESBASE void __fastcall FlipChildren();
	
public:
	__fastcall TNonControlItem(System::Classes::TComponent* Component, const Designintf::_di_IDesigner Designer)/* overload */;
	__fastcall TNonControlItem(System::Classes::TPersistent* Persistent, const Designintf::_di_IDesigner Designer)/* overload */;
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TNonControlItem() { }
	
private:
	void *__IInternalItem;	// IInternalItem 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {7ED7BF32-E349-11D3-AB4A-00C04FB17A72}
	operator _di_IInternalItem()
	{
		_di_IInternalItem intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IInternalItem*(void) { return (IInternalItem*)&__IInternalItem; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {C41303AD-CAE3-11D3-AB47-00C04FB17A72}
	operator Designer::_di_IItem()
	{
		Designer::_di_IItem intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Designer::IItem*(void) { return (Designer::IItem*)&__IInternalItem; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TComponentDesigner : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	System::Classes::_di_IInterfaceList FRootList;
	_di_IInternalRoot FActiveRoot;
	Designintf::_di_IEditHandler FActiveEditHandler;
	_di_IDesignEnvironment FEnvironment;
	Designintf::_di_IDesignerSelections FSelections;
	bool FControlsLocked;
	bool FInUpdateSelections;
	
protected:
	__property Designintf::_di_IEditHandler ActiveEditHandler = {read=FActiveEditHandler};
	__property _di_IInternalRoot ActiveRoot = {read=FActiveRoot};
	__property _di_IDesignEnvironment Environment = {read=FEnvironment, write=FEnvironment};
	__property System::Classes::_di_IInterfaceList RootList = {read=FRootList};
	__property Designintf::_di_IDesignerSelections Selections = {read=FSelections};
	void __fastcall RootListAdd(const _di_IRoot ARoot);
	void __fastcall RootListRemove(const _di_IRoot ARoot);
	void __fastcall RootGoingDormant(const _di_IRoot ARoot);
	void __fastcall RootModified(const _di_IRoot ARoot);
	void __fastcall CopySelectionToStream(System::Classes::TMemoryStream* S, System::Classes::TStrings* UnitDependencies);
	void __fastcall DesignerOptionsChanged();
	bool __fastcall EditAction(Designintf::TEditAction Action);
	_di_IFile __fastcall FindFile(const System::UnicodeString FileName);
	_di_IRoot __fastcall FindRoot(const System::UnicodeString RootName)/* overload */;
	_di_IRoot __fastcall FindRoot(System::Classes::TComponent* Component)/* overload */;
	_di_IRoot __fastcall GetActiveRoot();
	void __fastcall GetClassUnits(const System::UnicodeString ClassName, System::Classes::TGetStrProc Proc);
	Designintf::TEditState __fastcall GetEditState();
	System::UnicodeString __fastcall GetFirstSelectionType();
	System::UnicodeString __fastcall GetFirstSelectionUnit();
	void __fastcall GetRootNames(System::Classes::TGetStrProc Proc);
	void __fastcall GetProperties(Designintf::TGetPropProc Proc)/* overload */;
	void __fastcall GetProperties(const Designintf::_di_IDesignerSelections ASelections, const Designintf::_di_IDesigner ADesigner, Designintf::TGetPropProc Proc)/* overload */;
	System::UnicodeString __fastcall GetSelectionName();
	System::UnicodeString __fastcall GetSelectionType();
	void __fastcall HideWindows();
	void __fastcall ShowWindows();
	void __fastcall ModalEditDone(const Designintf::_di_IActivatable ReturnWindow);
	_di_IRoot __fastcall OpenRootClass(const System::UnicodeString ClassName);
	void __fastcall PasteSelectionFromStream(System::Classes::TMemoryStream* S, System::Classes::TComponent* Parent, const System::Types::TRect &Rect);
	void __fastcall GetSelection(const Designintf::_di_IDesignerSelections ASelection);
	void __fastcall SetSelection(const Designintf::_di_IDesigner ADesigner, const Designintf::_di_IDesignWindow DesignWindow, const Designintf::_di_IDesignerSelections ASelection);
	void __fastcall CancelModes();
	bool __fastcall GetControlsLocked();
	void __fastcall SetControlsLocked(bool Value);
	_di_IRoot __fastcall GetRoots(int Index);
	int __fastcall GetRootsCount();
	System::TClass __fastcall GetFirstSelectionClass();
	bool __fastcall IsNestable(const System::UnicodeString ClassName);
	void __fastcall RemoveDependenciesOn(System::Classes::TComponent* const Component);
	void __fastcall RootActivated(const _di_IRoot ARoot);
	void __fastcall UpdateRootDependents();
	void __fastcall UpdateSelections();
	System::UnicodeString __fastcall FindBaseClass(const System::UnicodeString AClassName);
	Designintf::TCustomModuleClass __fastcall FindCustomModuleClass(const System::UnicodeString AClassName);
	bool __fastcall IsRootBaseClass(const System::UnicodeString AClassName);
	virtual bool __fastcall ValidBaseClass(System::Classes::TComponentClass ComponentClass) = 0 ;
	
public:
	__fastcall TComponentDesigner();
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TComponentDesigner() { }
	
private:
	void *__IRootListUpdate;	// IRootListUpdate 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {7ED7BF26-E349-11D3-AB4A-00C04FB17A72}
	operator _di_IRootListUpdate()
	{
		_di_IRootListUpdate intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IRootListUpdate*(void) { return (IRootListUpdate*)&__IRootListUpdate; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIStreamAdapter : public System::Classes::TStream
{
	typedef System::Classes::TStream inherited;
	
private:
	_di_IStream FStream;
	
public:
	virtual int __fastcall Read(void *Buffer, int Count)/* overload */;
	virtual int __fastcall Seek(int Offset, System::Word Origin)/* overload */;
	virtual int __fastcall Write(const void *Buffer, int Count)/* overload */;
	__fastcall TIStreamAdapter(const _di_IStream Stream);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TIStreamAdapter() { }
	
	/* Hoisted overloads: */
	
public:
	inline int __fastcall  Read(System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Read(Buffer, Offset, Count); }
	inline int __fastcall  Read(System::DynamicArray<System::Byte> &Buffer, int Count){ return System::Classes::TStream::Read(Buffer, Count); }
	inline __int64 __fastcall  Seek(const __int64 Offset, System::Classes::TSeekOrigin Origin){ return System::Classes::TStream::Seek(Offset, Origin); }
	inline __int64 __fastcall  Seek(const __int64 Offset, System::Word Origin){ return System::Classes::TStream::Seek(Offset, Origin); }
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Write(Buffer, Offset, Count); }
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Count){ return System::Classes::TStream::Write(Buffer, Count); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TStreamAdapter : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	System::Classes::TStream* FStream;
	bool FOwned;
	
protected:
	__property bool Owned = {read=FOwned, nodefault};
	__property System::Classes::TStream* Stream = {read=FStream};
	__int64 __fastcall Read(void *Buffer, __int64 Length);
	__int64 __fastcall Write(void *Buffer, __int64 Length);
	__int64 __fastcall Seek(__int64 Offset, int Origin);
	void __fastcall SetSize(__int64 Size);
	
public:
	__fastcall TStreamAdapter(System::Classes::TStream* const Stream, bool Owned);
	__fastcall virtual ~TStreamAdapter();
private:
	void *__IStream;	// IStream 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {B7B8F53F-2A84-4CDD-97D9-B7D9CDAC33F8}
	operator _di_IStream()
	{
		_di_IStream intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IStream*(void) { return (IStream*)&__IStream; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDatedStreamAdapter : public TStreamAdapter
{
	typedef TStreamAdapter inherited;
	
private:
	int FDate;
	
protected:
	int __fastcall GetModifyTime();
	void __fastcall SetModifyTime(int Time);
	
public:
	__fastcall TDatedStreamAdapter(System::Classes::TStream* const Stream, int Date, bool Owned);
public:
	/* TStreamAdapter.Destroy */ inline __fastcall virtual ~TDatedStreamAdapter() { }
	
private:
	void *__IDatedStream;	// IDatedStream 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {A8613563-3389-4BA7-9A8A-5A8FF324F317}
	operator _di_IDatedStream()
	{
		_di_IDatedStream intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IDatedStream*(void) { return (IDatedStream*)&__IDatedStream; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCompInfo : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	_di_IInternalRoot FRoot;
	System::Classes::TPersistent* FInstance;
	System::Typinfo::TPropList *FList;
	int FCount;
	System::Typinfo::TPropList *FSubList;
	int FSubCount;
	void __fastcall InitSubList();
	
public:
	__fastcall TCompInfo(const _di_IInternalRoot Root, System::Classes::TPersistent* Instance);
	__fastcall virtual ~TCompInfo();
	void __fastcall ClearEvent(int Index);
	System::UnicodeString __fastcall GetClassName();
	System::UnicodeString __fastcall GetQualifiedClassName();
	int __fastcall GetEventCount();
	System::Typinfo::PPropInfo __fastcall GetEventInfo(int Index);
	Designintf::_di_IEventInfo __fastcall GetIEventInfo(int Index);
	System::UnicodeString __fastcall GetEventValue(int Index);
	System::UnicodeString __fastcall GetEventName(int Index);
	Designintf::_di_IDesignObject __fastcall GetComponentHandle();
	System::UnicodeString __fastcall GetNamePath();
	int __fastcall GetSubInfoCount();
	_di_ICompInfo __fastcall GetSubInfo(int Index);
private:
	void *__ICompInfo;	// ICompInfo 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {E1065483-5709-4C88-8011-F38B70DD1FAA}
	operator _di_ICompInfo()
	{
		_di_ICompInfo intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ICompInfo*(void) { return (ICompInfo*)&__ICompInfo; }
	#endif
	
};

#pragma pack(pop)

typedef void __fastcall (__closure *TRootActivatedEvent)(System::TObject* Sender, const Designintf::_di_ICustomModule CustomModule);

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEvRootActivatedEvent : public Events::TEvent
{
	typedef Events::TEvent inherited;
	
public:
	HIDESBASE void __fastcall Add(TRootActivatedEvent AHandler);
	HIDESBASE int __fastcall IndexOf(TRootActivatedEvent AHandler);
	HIDESBASE void __fastcall Remove(TRootActivatedEvent AHandler);
	HIDESBASE void __fastcall Send(System::TObject* Sender, const Designintf::_di_ICustomModule CustomModule);
	void __fastcall ActivateNonVclDesigner();
public:
	/* TEvent.Create */ inline __fastcall TEvRootActivatedEvent() : Events::TEvent() { }
	/* TEvent.Destroy */ inline __fastcall virtual ~TEvRootActivatedEvent() { }
	
};

#pragma pack(pop)

typedef void __fastcall (__closure *TComponentRenamedEvent)(System::TObject* Sender, const System::UnicodeString CurName, const System::UnicodeString NewName);

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEvComponentRenamedEvent : public Events::TEvent
{
	typedef Events::TEvent inherited;
	
public:
	HIDESBASE void __fastcall Add(TComponentRenamedEvent AHandler);
	HIDESBASE int __fastcall IndexOf(TComponentRenamedEvent AHandler);
	HIDESBASE void __fastcall Remove(TComponentRenamedEvent AHandler);
	HIDESBASE void __fastcall Send(System::TObject* Sender, const System::UnicodeString CurName, const System::UnicodeString NewName);
public:
	/* TEvent.Create */ inline __fastcall TEvComponentRenamedEvent() : Events::TEvent() { }
	/* TEvent.Destroy */ inline __fastcall virtual ~TEvComponentRenamedEvent() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEnvironmentTools : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	_di_IDesignEnvironment FEnvironment;
	
protected:
	bool __fastcall ToolSelected();
	
public:
	__fastcall TEnvironmentTools(const _di_IDesignEnvironment Environment);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TEnvironmentTools() { }
	
private:
	void *__ITools;	// Designer::ITools 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {C41303AF-CAE3-11D3-AB47-00C04FB17A72}
	operator Designer::_di_ITools()
	{
		Designer::_di_ITools intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Designer::ITools*(void) { return (Designer::ITools*)&__ITools; }
	#endif
	
};

#pragma pack(pop)

typedef void __fastcall (*TInitializeDesigner)(const _di_IDesignEnvironment Environment);

#pragma pack(push,4)
class PASCALIMPLEMENTATION EComponentDesignerException : public Toolsapi::ENonAIRException
{
	typedef Toolsapi::ENonAIRException inherited;
	
public:
	/* Exception.Create */ inline __fastcall EComponentDesignerException(const System::UnicodeString Msg) : Toolsapi::ENonAIRException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EComponentDesignerException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : Toolsapi::ENonAIRException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EComponentDesignerException(NativeUInt Ident)/* overload */ : Toolsapi::ENonAIRException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EComponentDesignerException(System::PResStringRec ResStringRec)/* overload */ : Toolsapi::ENonAIRException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EComponentDesignerException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : Toolsapi::ENonAIRException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EComponentDesignerException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : Toolsapi::ENonAIRException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EComponentDesignerException(const System::UnicodeString Msg, int AHelpContext) : Toolsapi::ENonAIRException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EComponentDesignerException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Toolsapi::ENonAIRException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EComponentDesignerException(NativeUInt Ident, int AHelpContext)/* overload */ : Toolsapi::ENonAIRException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EComponentDesignerException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Toolsapi::ENonAIRException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EComponentDesignerException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Toolsapi::ENonAIRException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EComponentDesignerException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Toolsapi::ENonAIRException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EComponentDesignerException() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION ECannotDeleteNonComponentException : public EComponentDesignerException
{
	typedef EComponentDesignerException inherited;
	
public:
	/* Exception.Create */ inline __fastcall ECannotDeleteNonComponentException(const System::UnicodeString Msg) : EComponentDesignerException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ECannotDeleteNonComponentException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EComponentDesignerException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ECannotDeleteNonComponentException(NativeUInt Ident)/* overload */ : EComponentDesignerException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ECannotDeleteNonComponentException(System::PResStringRec ResStringRec)/* overload */ : EComponentDesignerException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotDeleteNonComponentException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EComponentDesignerException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ECannotDeleteNonComponentException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EComponentDesignerException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ECannotDeleteNonComponentException(const System::UnicodeString Msg, int AHelpContext) : EComponentDesignerException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ECannotDeleteNonComponentException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EComponentDesignerException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotDeleteNonComponentException(NativeUInt Ident, int AHelpContext)/* overload */ : EComponentDesignerException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECannotDeleteNonComponentException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EComponentDesignerException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotDeleteNonComponentException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EComponentDesignerException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECannotDeleteNonComponentException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EComponentDesignerException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ECannotDeleteNonComponentException() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
#define cPSNativeDesignerActive L"NativeDesignerActive"
static const System::Int8 CompIconSize = System::Int8(0x18);
extern DELPHI_PACKAGE System::ResourceString _sAncestorClassName;
#define Componentdesigner_sAncestorClassName System::LoadResourceString(&Componentdesigner::_sAncestorClassName)
extern DELPHI_PACKAGE System::ResourceString _sBlankName;
#define Componentdesigner_sBlankName System::LoadResourceString(&Componentdesigner::_sBlankName)
extern DELPHI_PACKAGE System::ResourceString _sBlankNameMultiview;
#define Componentdesigner_sBlankNameMultiview System::LoadResourceString(&Componentdesigner::_sBlankNameMultiview)
extern DELPHI_PACKAGE System::ResourceString _sCannotInherit;
#define Componentdesigner_sCannotInherit System::LoadResourceString(&Componentdesigner::_sCannotInherit)
extern DELPHI_PACKAGE System::ResourceString _sCannotInheritFrom;
#define Componentdesigner_sCannotInheritFrom System::LoadResourceString(&Componentdesigner::_sCannotInheritFrom)
extern DELPHI_PACKAGE System::ResourceString _sCannotInheritFroms;
#define Componentdesigner_sCannotInheritFroms System::LoadResourceString(&Componentdesigner::_sCannotInheritFroms)
extern DELPHI_PACKAGE System::ResourceString _sCantDeleteAncestor;
#define Componentdesigner_sCantDeleteAncestor System::LoadResourceString(&Componentdesigner::_sCantDeleteAncestor)
extern DELPHI_PACKAGE System::ResourceString _sCantDeleteComponent;
#define Componentdesigner_sCantDeleteComponent System::LoadResourceString(&Componentdesigner::_sCantDeleteComponent)
extern DELPHI_PACKAGE System::ResourceString _sCantRename;
#define Componentdesigner_sCantRename System::LoadResourceString(&Componentdesigner::_sCantRename)
extern DELPHI_PACKAGE System::ResourceString _sRootMustHaveName;
#define Componentdesigner_sRootMustHaveName System::LoadResourceString(&Componentdesigner::_sRootMustHaveName)
extern DELPHI_PACKAGE System::ResourceString _sComponentAlreadyExists;
#define Componentdesigner_sComponentAlreadyExists System::LoadResourceString(&Componentdesigner::_sComponentAlreadyExists)
extern DELPHI_PACKAGE System::ResourceString _sReadOnlyError;
#define Componentdesigner_sReadOnlyError System::LoadResourceString(&Componentdesigner::_sReadOnlyError)
extern DELPHI_PACKAGE System::ResourceString _sReadOnlySource;
#define Componentdesigner_sReadOnlySource System::LoadResourceString(&Componentdesigner::_sReadOnlySource)
extern DELPHI_PACKAGE System::ResourceString _sRenamingAncestor;
#define Componentdesigner_sRenamingAncestor System::LoadResourceString(&Componentdesigner::_sRenamingAncestor)
extern DELPHI_PACKAGE System::ResourceString _sCannotPasteForm;
#define Componentdesigner_sCannotPasteForm System::LoadResourceString(&Componentdesigner::_sCannotPasteForm)
extern DELPHI_PACKAGE System::ResourceString _sRootClassNotFound;
#define Componentdesigner_sRootClassNotFound System::LoadResourceString(&Componentdesigner::_sRootClassNotFound)
extern DELPHI_PACKAGE System::ResourceString _sNestedInsertedInSelf;
#define Componentdesigner_sNestedInsertedInSelf System::LoadResourceString(&Componentdesigner::_sNestedInsertedInSelf)
extern DELPHI_PACKAGE System::ResourceString _sAncestorDeleteWarning;
#define Componentdesigner_sAncestorDeleteWarning System::LoadResourceString(&Componentdesigner::_sAncestorDeleteWarning)
extern DELPHI_PACKAGE System::ResourceString _sCannotInheritControl;
#define Componentdesigner_sCannotInheritControl System::LoadResourceString(&Componentdesigner::_sCannotInheritControl)
extern DELPHI_PACKAGE System::ResourceString _sCantSaveModuleWithAFixup;
#define Componentdesigner_sCantSaveModuleWithAFixup System::LoadResourceString(&Componentdesigner::_sCantSaveModuleWithAFixup)
extern DELPHI_PACKAGE System::ResourceString _sCantSaveModuleWithFixups;
#define Componentdesigner_sCantSaveModuleWithFixups System::LoadResourceString(&Componentdesigner::_sCantSaveModuleWithFixups)
extern DELPHI_PACKAGE System::ResourceString _sDuplicateViewName;
#define Componentdesigner_sDuplicateViewName System::LoadResourceString(&Componentdesigner::_sDuplicateViewName)
extern DELPHI_PACKAGE System::ResourceString _sViewDoesntExist;
#define Componentdesigner_sViewDoesntExist System::LoadResourceString(&Componentdesigner::_sViewDoesntExist)
extern DELPHI_PACKAGE System::ResourceString _sRedirectLinks;
#define Componentdesigner_sRedirectLinks System::LoadResourceString(&Componentdesigner::_sRedirectLinks)
extern DELPHI_PACKAGE System::ResourceString _sCannotCreateComponentOnView;
#define Componentdesigner_sCannotCreateComponentOnView System::LoadResourceString(&Componentdesigner::_sCannotCreateComponentOnView)
extern DELPHI_PACKAGE System::ResourceString _sPasteError;
#define Componentdesigner_sPasteError System::LoadResourceString(&Componentdesigner::_sPasteError)
extern DELPHI_PACKAGE System::ResourceString _sConverToMetropolisUIConfirmation;
#define Componentdesigner_sConverToMetropolisUIConfirmation System::LoadResourceString(&Componentdesigner::_sConverToMetropolisUIConfirmation)
extern DELPHI_PACKAGE System::ResourceString _sMenuAlignToGrid;
#define Componentdesigner_sMenuAlignToGrid System::LoadResourceString(&Componentdesigner::_sMenuAlignToGrid)
extern DELPHI_PACKAGE System::ResourceString _sMenuBringToFront;
#define Componentdesigner_sMenuBringToFront System::LoadResourceString(&Componentdesigner::_sMenuBringToFront)
extern DELPHI_PACKAGE System::ResourceString _sMenuSendToBack;
#define Componentdesigner_sMenuSendToBack System::LoadResourceString(&Componentdesigner::_sMenuSendToBack)
extern DELPHI_PACKAGE System::ResourceString _sMenuRevert;
#define Componentdesigner_sMenuRevert System::LoadResourceString(&Componentdesigner::_sMenuRevert)
extern DELPHI_PACKAGE System::ResourceString _sMenuAlign;
#define Componentdesigner_sMenuAlign System::LoadResourceString(&Componentdesigner::_sMenuAlign)
extern DELPHI_PACKAGE System::ResourceString _sMenuSize;
#define Componentdesigner_sMenuSize System::LoadResourceString(&Componentdesigner::_sMenuSize)
extern DELPHI_PACKAGE System::ResourceString _sMenuScale;
#define Componentdesigner_sMenuScale System::LoadResourceString(&Componentdesigner::_sMenuScale)
extern DELPHI_PACKAGE System::ResourceString _sMenuTabOrder;
#define Componentdesigner_sMenuTabOrder System::LoadResourceString(&Componentdesigner::_sMenuTabOrder)
extern DELPHI_PACKAGE System::ResourceString _sMenuCreatOrder;
#define Componentdesigner_sMenuCreatOrder System::LoadResourceString(&Componentdesigner::_sMenuCreatOrder)
extern DELPHI_PACKAGE System::ResourceString _sPositionItems;
#define Componentdesigner_sPositionItems System::LoadResourceString(&Componentdesigner::_sPositionItems)
extern DELPHI_PACKAGE System::ResourceString _sMenuFlipChildren;
#define Componentdesigner_sMenuFlipChildren System::LoadResourceString(&Componentdesigner::_sMenuFlipChildren)
extern DELPHI_PACKAGE System::ResourceString _sSubMenuFlipChildrenAll;
#define Componentdesigner_sSubMenuFlipChildrenAll System::LoadResourceString(&Componentdesigner::_sSubMenuFlipChildrenAll)
extern DELPHI_PACKAGE System::ResourceString _sSubMenuFlipChidrenSelected;
#define Componentdesigner_sSubMenuFlipChidrenSelected System::LoadResourceString(&Componentdesigner::_sSubMenuFlipChidrenSelected)
extern DELPHI_PACKAGE System::ResourceString _sMenuSaveAsTemplate;
#define Componentdesigner_sMenuSaveAsTemplate System::LoadResourceString(&Componentdesigner::_sMenuSaveAsTemplate)
extern DELPHI_PACKAGE System::ResourceString _sMenuViewAsText;
#define Componentdesigner_sMenuViewAsText System::LoadResourceString(&Componentdesigner::_sMenuViewAsText)
extern DELPHI_PACKAGE System::ResourceString _sMenuTextDFM;
#define Componentdesigner_sMenuTextDFM System::LoadResourceString(&Componentdesigner::_sMenuTextDFM)
extern DELPHI_PACKAGE System::ResourceString _sMenuTextXFM;
#define Componentdesigner_sMenuTextXFM System::LoadResourceString(&Componentdesigner::_sMenuTextXFM)
extern DELPHI_PACKAGE System::ResourceString _sConvertToMetropolisUI;
#define Componentdesigner_sConvertToMetropolisUI System::LoadResourceString(&Componentdesigner::_sConvertToMetropolisUI)
extern DELPHI_PACKAGE System::ResourceString _sShowNonVisualComponents;
#define Componentdesigner_sShowNonVisualComponents System::LoadResourceString(&Componentdesigner::_sShowNonVisualComponents)
extern DELPHI_PACKAGE System::ResourceString _sHideNonVisualComponents;
#define Componentdesigner_sHideNonVisualComponents System::LoadResourceString(&Componentdesigner::_sHideNonVisualComponents)
extern DELPHI_PACKAGE System::ResourceString _sMenuTextFMX;
#define Componentdesigner_sMenuTextFMX System::LoadResourceString(&Componentdesigner::_sMenuTextFMX)
extern DELPHI_PACKAGE System::ResourceString _sCannotDeleteNonComponent;
#define Componentdesigner_sCannotDeleteNonComponent System::LoadResourceString(&Componentdesigner::_sCannotDeleteNonComponent)
extern DELPHI_PACKAGE System::Types::TRect EmptyRect;
extern DELPHI_PACKAGE System::Types::TPoint EmptyPoint;
extern DELPHI_PACKAGE System::Types::TRect OffScreenRect;
extern DELPHI_PACKAGE System::Types::TPoint OffScreenPoint;
extern DELPHI_PACKAGE TEvRootActivatedEvent* EvRootActivatedEvent;
extern DELPHI_PACKAGE Events::TEvent* EvActiveRootModifiedEvent;
extern DELPHI_PACKAGE TEvComponentRenamedEvent* EvComponentRenamedEvent;
extern DELPHI_PACKAGE Events::TEvent* EvDesignerDeactivated;
extern DELPHI_PACKAGE bool AllowUseScaleRect;
extern DELPHI_PACKAGE bool __fastcall IsNoIconComponent(System::Classes::TComponent* Component);
extern DELPHI_PACKAGE _di_IDesignEnvironment __fastcall ProtectEnvironment(const _di_IDesignEnvironment ADesignEnvironment);
extern DELPHI_PACKAGE _di_IComponentDesigners __fastcall Designers();
extern DELPHI_PACKAGE _di_IComponentDesigner __fastcall ActiveDesigner();
extern DELPHI_PACKAGE _di_IRoot __fastcall ActiveRoot();
extern DELPHI_PACKAGE void __fastcall RegisterInitializeDesigner(TInitializeDesigner InitFunc);
extern DELPHI_PACKAGE void __fastcall InitializeDesigners(const _di_IDesignEnvironment Environment);
extern DELPHI_PACKAGE void __fastcall DesignNotificationItemDeleted(const Designintf::_di_IDesigner ADesigner, System::Classes::TPersistent* AItem);
extern DELPHI_PACKAGE void __fastcall DesignNotificationSelectionChanged(const Designintf::_di_IDesigner ADesigner, const Designintf::_di_IDesignerSelections ASelections);
extern DELPHI_PACKAGE void __fastcall DesignNotificationDesignerOpened(const Designintf::_di_IDesigner ADesigner, bool AResurrected);
extern DELPHI_PACKAGE void __fastcall DesignNotificationDesignerClosed(const Designintf::_di_IDesigner ADesigner, bool AGoingDormant);
extern DELPHI_PACKAGE void __fastcall DesignNotificationItemsModified(const Designintf::_di_IDesigner ADesigner);
extern DELPHI_PACKAGE void __fastcall DesignNotificationDescendantUpdated(const Designintf::_di_IDesigner ADesigner);
extern DELPHI_PACKAGE void __fastcall DesignNotificationViewAdded(const Designintf::_di_IDesigner ADesigner, const System::UnicodeString AViewName);
extern DELPHI_PACKAGE void __fastcall DesignNotificationViewRemoved(const Designintf::_di_IDesigner ADesigner, const System::UnicodeString AViewName);
}	/* namespace Componentdesigner */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_COMPONENTDESIGNER)
using namespace Componentdesigner;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// ComponentdesignerHPP
