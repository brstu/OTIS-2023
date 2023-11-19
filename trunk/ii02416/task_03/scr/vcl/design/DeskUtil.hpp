// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DeskUtil.pas' rev: 35.00 (Windows)

#ifndef DeskutilHPP
#define DeskutilHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <System.Win.Registry.hpp>
#include <System.IniFiles.hpp>
#include <System.Types.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Events.hpp>
#include <DeskForm.hpp>

//-- user supplied -----------------------------------------------------------

namespace Deskutil
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IDesktopFormCreator;
typedef System::DelphiInterface<IDesktopFormCreator> _di_IDesktopFormCreator;
//-- type declarations -------------------------------------------------------
typedef void __fastcall (*TLoadDesktopProc)(System::Inifiles::TCustomIniFile* DeskFile);

typedef void __fastcall (*TSaveDesktopProc)(System::Inifiles::TCustomIniFile* DeskFile, bool IsProject);

__interface  INTERFACE_UUID("{12AB3308-1456-4E78-B3BF-8CF8A0846A88}") IDesktopFormCreator  : public System::IInterface 
{
	virtual void __fastcall SetDesktopSection(const System::UnicodeString DesktopSection) = 0 ;
};

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::Inifiles::TCustomIniFile* __fastcall (*IDEIniFile)();
extern DELPHI_PACKAGE void * __fastcall (*GetFieldAddress)(const System::UnicodeString FieldName);
extern DELPHI_PACKAGE void __fastcall (*RegisterFieldAddress)(const System::UnicodeString FieldName, void * Address);
extern DELPHI_PACKAGE void __fastcall (*UnregisterFieldAddress)(void * Address);
extern DELPHI_PACKAGE void __fastcall (*AddMainFormCreatedEvent)(System::Classes::TNotifyEvent Event);
extern DELPHI_PACKAGE void __fastcall (*RemoveMainFormCreatedEvent)(System::Classes::TNotifyEvent Event);
extern DELPHI_PACKAGE void __fastcall (*AddMainFormShownEvent)(System::Classes::TNotifyEvent Event);
extern DELPHI_PACKAGE void __fastcall (*RemoveMainFormShownEvent)(System::Classes::TNotifyEvent Event);
extern DELPHI_PACKAGE Vcl::Forms::TCustomForm* WorkspaceReferenceTop;
extern DELPHI_PACKAGE Vcl::Forms::TCustomForm* WorkspaceReferenceLeft;
extern DELPHI_PACKAGE int DesktopId;
extern DELPHI_PACKAGE int LargeToolbarSize;
extern DELPHI_PACKAGE int LargeToolbarAsListSize;
extern DELPHI_PACKAGE int SmallToolbarSize;
extern DELPHI_PACKAGE Vcl::Forms::TCustomForm* __fastcall ShowDockableForm(Vcl::Forms::TCustomForm* Window);
extern DELPHI_PACKAGE Vcl::Forms::TCustomForm* __fastcall FocusWindow(Vcl::Forms::TCustomForm* Window);
extern DELPHI_PACKAGE void __fastcall RegisterDesktopFormClass(Deskform::TDesktopFormClass AFormClass, const System::UnicodeString Section, const System::UnicodeString InstanceName);
extern DELPHI_PACKAGE void __fastcall RegisterDesktopProcs(TLoadDesktopProc LoadProc, TSaveDesktopProc SaveProc);
extern DELPHI_PACKAGE void __fastcall UnregisterDesktopProcs(TLoadDesktopProc LoadProc, TSaveDesktopProc SaveProc);
extern DELPHI_PACKAGE void __fastcall LoadDesktopFormClasses(System::Inifiles::TCustomIniFile* Desk);
extern DELPHI_PACKAGE void __fastcall SaveDesktopFormClasses(System::Inifiles::TCustomIniFile* Desk, bool IsProject);
extern DELPHI_PACKAGE void __fastcall DoDesktopLoadProcs(System::Inifiles::TCustomIniFile* Desk);
extern DELPHI_PACKAGE void __fastcall DoDesktopSaveProcs(System::Inifiles::TCustomIniFile* Desk, bool IsProject);
extern DELPHI_PACKAGE void __fastcall SetShowCaptionsToolBar(Vcl::Forms::TForm* const Form, Vcl::Comctrls::TToolBar* const ToolBar, const bool Value);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetInstanceName(Deskform::TDesktopFormClass AFormClass, const System::UnicodeString ADeskSection);
extern DELPHI_PACKAGE HWND __fastcall GetTopWindow();
extern DELPHI_PACKAGE void __fastcall RefocusTopWindow();
extern DELPHI_PACKAGE Deskform::TDesktopForm* __fastcall GetImmediateDesktopForm(Deskform::TDesktopForm* DesktopForm);
extern DELPHI_PACKAGE void __fastcall RegisterDesignForm(const System::TClass DesignFormClass);
extern DELPHI_PACKAGE void __fastcall UnregisterDesignForm(const System::TClass DesignFormClass);
extern DELPHI_PACKAGE void __fastcall HideDesignForms();
extern DELPHI_PACKAGE void __fastcall ShowDesignForms();
extern DELPHI_PACKAGE void __fastcall RegisterDefaultForm(const System::TClass DefaultFormClass);
extern DELPHI_PACKAGE void __fastcall UnregisterDefaultForm(const System::TClass DefaultFormClass);
extern DELPHI_PACKAGE void __fastcall ShowDefaultForms();
extern DELPHI_PACKAGE System::Types::TPoint __fastcall GetWorkspaceOrigin();
extern DELPHI_PACKAGE Events::TEvent* __fastcall HideDesignFormsEvent();
extern DELPHI_PACKAGE Events::TEvent* __fastcall ShowDesignFormsEvent();
extern DELPHI_PACKAGE void * __fastcall DisableDesktop();
extern DELPHI_PACKAGE void __fastcall EnableDesktop(void * Desktop);
}	/* namespace Deskutil */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DESKUTIL)
using namespace Deskutil;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DeskutilHPP
