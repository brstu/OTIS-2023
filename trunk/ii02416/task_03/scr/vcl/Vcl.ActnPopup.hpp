// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.ActnPopup.pas' rev: 35.00 (Windows)

#ifndef Vcl_ActnpopupHPP
#define Vcl_ActnpopupHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.Actions.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.ActnMan.hpp>
#include <Vcl.XPActnCtrls.hpp>
#include <Vcl.ActnMenus.hpp>
#include <Vcl.ActnCtrls.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Actnpopup
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TCustomActionPopupMenuEx;
class DELPHICLASS TPopupActionBar;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TCustomActionPopupMenuEx : public Vcl::Xpactnctrls::TXPStylePopupMenu
{
	typedef Vcl::Xpactnctrls::TXPStylePopupMenu inherited;
	
private:
	TPopupActionBar* FPopupActionBar;
	
protected:
	virtual void __fastcall DoPopup(Vcl::Actnman::TCustomActionControl* Item);
	virtual Vcl::Actnmenus::TCustomPopupClass __fastcall GetPopupClass();
	virtual void __fastcall ExecAction(System::Actions::TContainedAction* Action);
	virtual void __fastcall AdjustFont();
	__property AutoSize = {default=0};
	
public:
	void __fastcall LoadMenu(Vcl::Actnman::TActionClients* Clients, Vcl::Menus::TMenuItem* AMenu);
public:
	/* TXPStylePopupMenu.Create */ inline __fastcall virtual TCustomActionPopupMenuEx(System::Classes::TComponent* AOwner) : Vcl::Xpactnctrls::TXPStylePopupMenu(AOwner) { }
	/* TXPStylePopupMenu.Destroy */ inline __fastcall virtual ~TCustomActionPopupMenuEx() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomActionPopupMenuEx(HWND ParentWindow) : Vcl::Xpactnctrls::TXPStylePopupMenu(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TPopupActionBar : public Vcl::Menus::TPopupMenu
{
	typedef Vcl::Menus::TPopupMenu inherited;
	
private:
	Vcl::Actnman::TCustomActionManager* FActionManager;
	TCustomActionPopupMenuEx* FPopupMenu;
	Vcl::Actnman::TGetControlClassEvent FOnGetControlClass;
	bool __fastcall GetMenuActive();
	Vcl::Actnman::TActionBarStyle* __fastcall GetStyle();
	void __fastcall ReadStyleProp(System::Classes::TReader* Reader);
	void __fastcall SetStyle(Vcl::Actnman::TActionBarStyle* const Value);
	void __fastcall WriteStyleProp(System::Classes::TWriter* Writer);
	
protected:
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	
public:
	__fastcall virtual TPopupActionBar(System::Classes::TComponent* AOwner);
	virtual void __fastcall Popup(int X, int Y);
	__property bool MenuActive = {read=GetMenuActive, nodefault};
	
__published:
	__property TCustomActionPopupMenuEx* PopupMenu = {read=FPopupMenu, write=FPopupMenu};
	__property Vcl::Actnman::TActionBarStyle* Style = {read=GetStyle, write=SetStyle};
	__property Vcl::Actnman::TGetControlClassEvent OnGetControlClass = {read=FOnGetControlClass, write=FOnGetControlClass};
public:
	/* TPopupMenu.Destroy */ inline __fastcall virtual ~TPopupActionBar() { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE Vcl::Menus::TPopupMenu* __fastcall NewPopupMenu(System::Classes::TComponent* Owner, const System::UnicodeString AName, Vcl::Menus::TPopupAlignment Alignment, bool AutoPopup, Vcl::Menus::TMenuItem* const *Items, const int Items_High);
}	/* namespace Actnpopup */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_ACTNPOPUP)
using namespace Vcl::Actnpopup;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_ActnpopupHPP
