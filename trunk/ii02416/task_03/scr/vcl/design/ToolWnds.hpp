// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ToolWnds.pas' rev: 35.00 (Windows)

#ifndef ToolwndsHPP
#define ToolwndsHPP

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
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Dialogs.hpp>
#include <DesignWindows.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ToolWin.hpp>
#include <Vcl.ComCtrls.hpp>
#include <System.IniFiles.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.ActnPopup.hpp>
#include <System.Actions.hpp>
#include <Vcl.PlatformDefaultStyleActnCtrls.hpp>

//-- user supplied -----------------------------------------------------------

namespace Toolwnds
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TToolbarDesignWindow;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TToolbarDesignWindow : public Designwindows::TDesignWindow
{
	typedef Designwindows::TDesignWindow inherited;
	
__published:
	Vcl::Comctrls::TToolBar* ToolBar1;
	Vcl::Extctrls::TSplitter* Splitter1;
	Vcl::Actnpopup::TPopupActionBar* PopupMenu1;
	Vcl::Actnlist::TActionList* ActionList1;
	Vcl::Actnlist::TAction* ToolbarCmd;
	Vcl::Actnlist::TAction* TextLabelsCmd;
	Vcl::Menus::TMenuItem* Toolbar2;
	Vcl::Actnpopup::TPopupActionBar* PopupMenu2;
	Vcl::Menus::TMenuItem* TextLabels1;
	Vcl::Actnlist::TAction* HelpCmd;
	void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall Splitter1Moved(System::TObject* Sender);
	void __fastcall Splitter1CanResize(System::TObject* Sender, int &NewSize, bool &Accept);
	void __fastcall ToolbarCmdExecute(System::TObject* Sender);
	void __fastcall TextLabelsCmdExecute(System::TObject* Sender);
	void __fastcall ToolbarCmdUpdate(System::TObject* Sender);
	void __fastcall TextLabelsCmdUpdate(System::TObject* Sender);
	void __fastcall HelpCmdExecute(System::TObject* Sender);
	void __fastcall HelpCmdUpdate(System::TObject* Sender);
	void __fastcall FormAfterMonitorDpiChanged(System::TObject* Sender, int OldDPI, int NewDPI);
	
private:
	bool FLargeButtons;
	void __fastcall SetLargeButtons(bool Value);
	bool __fastcall GetToolbarVisible();
	void __fastcall SetToolbarVisible(const bool Value);
	void __fastcall UpdateToolbarVisible(bool Visible);
	
protected:
	virtual void __fastcall ResizeButtons(bool Large);
	
public:
	__property bool ToolbarVisible = {read=GetToolbarVisible, write=SetToolbarVisible, nodefault};
	__property bool LargeButtons = {read=FLargeButtons, write=SetLargeButtons, nodefault};
public:
	/* TDesignWindow.Create */ inline __fastcall virtual TToolbarDesignWindow(System::Classes::TComponent* AOwner) : Designwindows::TDesignWindow(AOwner) { }
	/* TDesignWindow.Destroy */ inline __fastcall virtual ~TToolbarDesignWindow() { }
	
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TToolbarDesignWindow(System::Classes::TComponent* AOwner, int Dummy) : Designwindows::TDesignWindow(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TToolbarDesignWindow(HWND ParentWindow) : Designwindows::TDesignWindow(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Toolwnds */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_TOOLWNDS)
using namespace Toolwnds;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// ToolwndsHPP
