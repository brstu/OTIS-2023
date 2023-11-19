// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DockToolForm.pas' rev: 35.00 (Windows)

#ifndef DocktoolformHPP
#define DocktoolformHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <System.Actions.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Dialogs.hpp>
#include <DeskForm.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ToolWin.hpp>
#include <Vcl.ComCtrls.hpp>
#include <System.IniFiles.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.ActnPopup.hpp>
#include <Vcl.PlatformDefaultStyleActnCtrls.hpp>
#include <DockForm.hpp>

//-- user supplied -----------------------------------------------------------

namespace Docktoolform
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TDockableToolbarForm;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TDockableToolbarForm : public Dockform::TDockableForm
{
	typedef Dockform::TDockableForm inherited;
	
__published:
	Vcl::Comctrls::TToolBar* ToolBar;
	Vcl::Actnlist::TActionList* ToolActionList;
	Vcl::Actnlist::TAction* TextLabelsCmd;
	Vcl::Actnlist::TAction* ToolbarCmd;
	Vcl::Actnpopup::TPopupActionBar* ToolbarPopupMenu;
	Vcl::Menus::TMenuItem* TextLabelsMenuItem;
	Vcl::Actnpopup::TPopupActionBar* FormPopupMenu;
	Vcl::Menus::TMenuItem* ToolbarMenuItem;
	HIDESBASE void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall ToolbarCmdExecute(System::TObject* Sender);
	void __fastcall TextLabelsCmdExecute(System::TObject* Sender);
	void __fastcall ToolbarCmdUpdate(System::TObject* Sender);
	void __fastcall TextLabelsCmdUpdate(System::TObject* Sender);
	
private:
	bool __fastcall GetShowCaptions();
	void __fastcall SetShowCaptions(const bool Value);
	
protected:
	virtual void __fastcall LoadToolbarState();
	virtual void __fastcall SaveToolbarState();
	
public:
	virtual void __fastcall SaveWindowState(System::Inifiles::TCustomIniFile* Desktop, bool isProject);
	virtual void __fastcall LoadWindowState(System::Inifiles::TCustomIniFile* Desktop);
	__property bool ShowCaptions = {read=GetShowCaptions, write=SetShowCaptions, nodefault};
public:
	/* TDockableForm.Create */ inline __fastcall virtual TDockableToolbarForm(System::Classes::TComponent* AOwner) : Dockform::TDockableForm(AOwner) { }
	/* TDockableForm.Destroy */ inline __fastcall virtual ~TDockableToolbarForm() { }
	
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TDockableToolbarForm(System::Classes::TComponent* AOwner, int Dummy) : Dockform::TDockableForm(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TDockableToolbarForm(HWND ParentWindow) : Dockform::TDockableForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Docktoolform */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DOCKTOOLFORM)
using namespace Docktoolform;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DocktoolformHPP
