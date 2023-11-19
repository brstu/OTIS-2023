// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ToolIntf.pas' rev: 35.00 (Windows)

#ifndef ToolintfHPP
#define ToolintfHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#if !defined(_NO_DEPRECATED_UNIT_MSG)
#pragma message("Unit 'ToolIntf' is deprecated")
#endif
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.ActiveX.hpp>
#include <System.Classes.hpp>
#include <VirtIntf.hpp>
#include <EditIntf.hpp>
#include <FileIntf.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Toolintf
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TIMenuItemIntf;
class DELPHICLASS TIMainMenuIntf;
class DELPHICLASS TIAddInNotifier;
class DELPHICLASS TIToolServices;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TIMenuFlag : unsigned char { mfInvalid, mfEnabled, mfVisible, mfChecked, mfBreak, mfBarBreak, mfRadioItem };

typedef System::Set<TIMenuFlag, TIMenuFlag::mfInvalid, TIMenuFlag::mfRadioItem> TIMenuFlags;

typedef void __fastcall (__closure *TIMenuClickEvent)(TIMenuItemIntf* Sender);

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIMenuItemIntf : public Virtintf::TInterface
{
	typedef Virtintf::TInterface inherited;
	
public:
	virtual bool __stdcall DestroyMenuItem() = 0 ;
	virtual int __stdcall GetIndex() = 0 ;
	virtual int __stdcall GetItemCount() = 0 ;
	virtual TIMenuItemIntf* __stdcall GetItem(int Index) = 0 ;
	virtual System::UnicodeString __stdcall GetName() = 0 ;
	virtual TIMenuItemIntf* __stdcall GetParent() = 0 ;
	virtual System::UnicodeString __stdcall GetCaption() = 0 ;
	virtual bool __stdcall SetCaption(const System::UnicodeString Caption) = 0 ;
	virtual int __stdcall GetShortCut() = 0 ;
	virtual bool __stdcall SetShortCut(int ShortCut) = 0 ;
	virtual TIMenuFlags __stdcall GetFlags() = 0 ;
	virtual bool __stdcall SetFlags(TIMenuFlags Mask, TIMenuFlags Flags) = 0 ;
	virtual int __stdcall GetGroupIndex() = 0 ;
	virtual bool __stdcall SetGroupIndex(int GroupIndex) = 0 ;
	virtual System::UnicodeString __stdcall GetHint() = 0 ;
	virtual bool __stdcall SetHint(System::UnicodeString Hint) = 0 ;
	virtual int __stdcall GetContext() = 0 ;
	virtual bool __stdcall SetContext(int Context) = 0 ;
	virtual TIMenuClickEvent __stdcall GetOnClick() = 0 ;
	virtual bool __stdcall SetOnClick(TIMenuClickEvent Click) = 0 ;
	virtual TIMenuItemIntf* __stdcall InsertItem(int Index, System::UnicodeString Caption, System::UnicodeString Name, System::UnicodeString Hint, int ShortCut, int Context, int GroupIndex, TIMenuFlags Flags, TIMenuClickEvent EventHandler) = 0 ;
public:
	/* TInterface.Create */ inline __fastcall TIMenuItemIntf() : Virtintf::TInterface() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TIMenuItemIntf() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIMainMenuIntf : public Virtintf::TInterface
{
	typedef Virtintf::TInterface inherited;
	
public:
	virtual TIMenuItemIntf* __stdcall GetMenuItems() = 0 ;
	virtual TIMenuItemIntf* __stdcall FindMenuItem(const System::UnicodeString Name) = 0 ;
public:
	/* TInterface.Create */ inline __fastcall TIMainMenuIntf() : Virtintf::TInterface() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TIMainMenuIntf() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TFileNotification : unsigned char { fnFileOpening, fnFileOpened, fnFileClosing, fnProjectOpening, fnProjectOpened, fnProjectClosing, fnAddedToProject, fnRemovedFromProject, fnDefaultDesktopLoad, fnDefaultDesktopSave, fnProjectDesktopLoad, fnprojectDesktopSave, fnPackageInstalled, fnPackageUninstalled };

enum DECLSPEC_DENUM TEventNotification : unsigned char { enBeforeCompile, enAfterCompile };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIAddInNotifier : public Virtintf::TInterface
{
	typedef Virtintf::TInterface inherited;
	
public:
	virtual void __stdcall FileNotification(TFileNotification NotifyCode, const System::UnicodeString FileName, bool &Cancel) = 0 ;
	virtual void __stdcall EventNotification(TEventNotification NotifyCode, bool &Cancel) = 0 ;
public:
	/* TInterface.Create */ inline __fastcall TIAddInNotifier() : Virtintf::TInterface() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TIAddInNotifier() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TCreateModuleFlag : unsigned char { cmAddToProject, cmShowSource, cmShowForm, cmUnNamed, cmNewUnit, cmNewForm, cmMainForm, cmMarkModified, cmNewFile, cmExisting };

typedef System::Set<TCreateModuleFlag, TCreateModuleFlag::cmAddToProject, TCreateModuleFlag::cmExisting> TCreateModuleFlags;

enum DECLSPEC_DENUM TCreateProjectFlag : unsigned char { cpCustom, cpApplication, cpLibrary, cpCanShowSource, cpExisting, cpConsole };

typedef System::Set<TCreateProjectFlag, TCreateProjectFlag::cpCustom, TCreateProjectFlag::cpConsole> TCreateProjectFlags;

enum DECLSPEC_DENUM TBoundsType : unsigned char { btForm, btCustomModule };

typedef bool __stdcall (*TProjectEnumProc)(void * Param, const System::UnicodeString FileName, const System::UnicodeString UnitName, const System::UnicodeString FormName);

typedef bool __stdcall (*TProjectEnumModuleProc)(void * Param, const System::UnicodeString FileName, const System::UnicodeString UnitName, const System::UnicodeString FormName, const System::UnicodeString DesignClass);

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIToolServices : public Virtintf::TInterface
{
	typedef Virtintf::TInterface inherited;
	
public:
	virtual bool __stdcall CloseProject() = 0 ;
	virtual bool __stdcall OpenProject(const System::UnicodeString ProjName) = 0 ;
	virtual bool __stdcall OpenProjectInfo(const System::UnicodeString ProjName) = 0 ;
	virtual bool __stdcall SaveProject() = 0 ;
	virtual bool __stdcall CloseFile(const System::UnicodeString FileName) = 0 ;
	virtual bool __stdcall SaveFile(const System::UnicodeString FileName) = 0 ;
	virtual bool __stdcall OpenFile(const System::UnicodeString FileName) = 0 ;
	virtual bool __stdcall ReloadFile(const System::UnicodeString FileName) = 0 ;
	virtual int __stdcall ModalDialogBox(NativeUInt Instance, System::WideChar * TemplateName, HWND WndParent, void * DialogFunc, int InitParam) = 0 ;
	virtual bool __stdcall CreateModule(const System::UnicodeString ModuleName, _di_IStream Source, _di_IStream Form, TCreateModuleFlags CreateFlags) = 0 ;
	virtual Editintf::TIModuleInterface* __stdcall CreateModuleEx(const System::UnicodeString ModuleName, const System::UnicodeString FormName, const System::UnicodeString AncestorClass, const System::UnicodeString FileSystem, _di_IStream Source, _di_IStream Form, TCreateModuleFlags CreateFlags) = 0 ;
	virtual HWND __stdcall GetParentHandle() = 0 ;
	virtual System::UnicodeString __stdcall GetProjectName() = 0 ;
	virtual int __stdcall GetUnitCount() = 0 ;
	virtual System::UnicodeString __stdcall GetUnitName(int Index) = 0 ;
	virtual bool __stdcall EnumProjectUnits(TProjectEnumProc EnumProc, void * Param) = 0 ;
	virtual int __stdcall GetFormCount() = 0 ;
	virtual System::UnicodeString __stdcall GetFormName(int Index) = 0 ;
	virtual System::UnicodeString __stdcall GetCurrentFile() = 0 ;
	virtual bool __stdcall IsFileOpen(const System::UnicodeString FileName) = 0 ;
	virtual bool __stdcall GetNewModuleName(System::UnicodeString &UnitIdent, System::UnicodeString &FileName) = 0 ;
	virtual int __stdcall GetModuleCount() = 0 ;
	virtual System::UnicodeString __stdcall GetModuleName(int Index) = 0 ;
	virtual int __stdcall GetComponentCount(int ModIndex) = 0 ;
	virtual System::UnicodeString __stdcall GetComponentName(int ModIndex, int CompIndex) = 0 ;
	virtual bool __stdcall RegisterFileSystem(Fileintf::TIVirtualFileSystem* AVirtualFileSystem) = 0 ;
	virtual bool __stdcall UnRegisterFileSystem(const System::UnicodeString Ident) = 0 ;
	virtual Fileintf::TIVirtualFileSystem* __stdcall GetFileSystem(const System::UnicodeString Ident) = 0 ;
	virtual Editintf::TIModuleInterface* __stdcall GetModuleInterface(const System::UnicodeString FileName) = 0 ;
	virtual Editintf::TIModuleInterface* __stdcall GetFormModuleInterface(const System::UnicodeString FormName) = 0 ;
	virtual TIMainMenuIntf* __stdcall GetMainMenu() = 0 ;
	virtual bool __stdcall AddNotifier(TIAddInNotifier* AddInNotifier) = 0 ;
	virtual bool __stdcall RemoveNotifier(TIAddInNotifier* AddInNotifier) = 0 ;
	virtual void * __stdcall NewPascalString(System::WideChar * Str) = 0 ;
	virtual void __stdcall FreePascalString(void * &Str) = 0 ;
	virtual void __stdcall ReferencePascalString(void * &Str) = 0 ;
	virtual void __stdcall AssignPascalString(void * &Dest, void * &Src) = 0 ;
	virtual void __stdcall RaiseException(const System::UnicodeString Message) = 0 ;
	virtual System::UnicodeString __stdcall GetBaseRegistryKey() = 0 ;
	virtual System::Types::TRect __stdcall GetFormBounds(TBoundsType BoundsType) = 0 ;
	virtual Editintf::TIModuleInterface* __stdcall ProjectCreate(Editintf::TIProjectCreator* ProjectCreator, TCreateProjectFlags CreateFlags) = 0 ;
	virtual Editintf::TIModuleInterface* __stdcall ModuleCreate(Editintf::TIModuleCreator* ModuleCreator, TCreateModuleFlags CreateFlags) = 0 ;
	virtual bool __stdcall AddNotifierEx(TIAddInNotifier* AddInNotifier) = 0 ;
	virtual bool __stdcall GetNewModuleAndClassName(const System::UnicodeString Prefix, System::UnicodeString &UnitIdent, System::UnicodeString &ClassName, System::UnicodeString &FileName) = 0 ;
	virtual Editintf::TIModuleInterface* __stdcall CreateCppModule(const System::UnicodeString ModuleName, const System::UnicodeString FormName, const System::UnicodeString AncestorClass, const System::UnicodeString FileSystem, _di_IStream HdrSource, _di_IStream Source, _di_IStream Form, TCreateModuleFlags CreateFlags) = 0 ;
	virtual int __stdcall GetVcsCount() = 0 ;
	virtual void __stdcall GetVcsList(System::Classes::TStringList* List) = 0 ;
	virtual System::UnicodeString __stdcall GetVcsName(int Index) = 0 ;
	virtual bool __stdcall EnumProjectModules(TProjectEnumModuleProc EnumProc, void * Param) = 0 ;
	virtual Editintf::TIModuleInterface* __stdcall ProjectCreateEx(Editintf::TIProjectCreatorEx* ProjectCreator, TCreateProjectFlags CreateFlags) = 0 ;
	virtual Editintf::TIModuleInterface* __stdcall ModuleCreateEx(Editintf::TIModuleCreatorEx* ModuleCreator, TCreateModuleFlags CreateFlags) = 0 ;
public:
	/* TInterface.Create */ inline __fastcall TIToolServices() : Virtintf::TInterface() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TIToolServices() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Toolintf */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_TOOLINTF)
using namespace Toolintf;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// ToolintfHPP
