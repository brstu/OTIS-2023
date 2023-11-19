// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'IDEMenuAction.pas' rev: 35.00 (Windows)

#ifndef IdemenuactionHPP
#define IdemenuactionHPP

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
#include <Vcl.ActnList.hpp>
#include <Vcl.Menus.hpp>
#include <System.Actions.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Idemenuaction
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TCustomPopupAction;
class DELPHICLASS TPopupAction;
class DELPHICLASS TPopupActionLink;
class DELPHICLASS TCustomSubMenuAction;
class DELPHICLASS TSubMenuAction;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TCustomPopupAction : public Vcl::Actnlist::TCustomAction
{
	typedef Vcl::Actnlist::TCustomAction inherited;
	
private:
	Vcl::Menus::TPopupMenu* FDropdownMenu;
	Vcl::Menus::TPopupMenu* FPopupMenu;
	bool FEnableDropdown;
	void __fastcall SetDropdownMenu(Vcl::Menus::TPopupMenu* Value);
	void __fastcall SetEnableDropdown(bool Value);
	void __fastcall SetPopupMenu(Vcl::Menus::TPopupMenu* Value);
	
public:
	__property Vcl::Menus::TPopupMenu* DropdownMenu = {read=FDropdownMenu, write=SetDropdownMenu};
	__property bool EnableDropdown = {read=FEnableDropdown, write=SetEnableDropdown, default=0};
	__property Vcl::Menus::TPopupMenu* PopupMenu = {read=FPopupMenu, write=SetPopupMenu};
public:
	/* TCustomAction.Create */ inline __fastcall virtual TCustomPopupAction(System::Classes::TComponent* AOwner) : Vcl::Actnlist::TCustomAction(AOwner) { }
	/* TCustomAction.Destroy */ inline __fastcall virtual ~TCustomPopupAction() { }
	
};


class PASCALIMPLEMENTATION TPopupAction : public TCustomPopupAction
{
	typedef TCustomPopupAction inherited;
	
__published:
	__property Caption = {default=0};
	__property Checked = {default=0};
	__property DropdownMenu;
	__property Enabled = {default=1};
	__property EnableDropdown = {default=0};
	__property HelpContext = {default=0};
	__property Hint = {default=0};
	__property ImageIndex = {default=-1};
	__property PopupMenu;
	__property ShortCut = {default=0};
	__property Visible = {default=1};
	__property OnExecute;
	__property OnHint;
	__property OnUpdate;
public:
	/* TCustomAction.Create */ inline __fastcall virtual TPopupAction(System::Classes::TComponent* AOwner) : TCustomPopupAction(AOwner) { }
	/* TCustomAction.Destroy */ inline __fastcall virtual ~TPopupAction() { }
	
};


class PASCALIMPLEMENTATION TPopupActionLink : public Vcl::Controls::TControlActionLink
{
	typedef Vcl::Controls::TControlActionLink inherited;
	
protected:
	virtual bool __fastcall IsDropdownMenuLinked();
	virtual bool __fastcall IsEnableDropdownLinked();
	virtual bool __fastcall IsPopupMenuLinked();
	virtual void __fastcall SetDropdownMenu(Vcl::Menus::TPopupMenu* Value);
	virtual void __fastcall SetEnableDropdown(bool Value);
	virtual void __fastcall SetPopupMenu(Vcl::Menus::TPopupMenu* Value);
public:
	/* TBasicActionLink.Create */ inline __fastcall virtual TPopupActionLink(System::TObject* AClient) : Vcl::Controls::TControlActionLink(AClient) { }
	/* TBasicActionLink.Destroy */ inline __fastcall virtual ~TPopupActionLink() { }
	
};


typedef void __fastcall (__closure *TPopulateSubMenuEvent)(System::TObject* Sender, Vcl::Menus::TMenuItem* AParent);

class PASCALIMPLEMENTATION TCustomSubMenuAction : public Vcl::Actnlist::TCustomAction
{
	typedef Vcl::Actnlist::TCustomAction inherited;
	
private:
	TPopulateSubMenuEvent FOnPopulateSubMenu;
	
public:
	void __fastcall PopulateSubMenu(Vcl::Menus::TMenuItem* AParent);
	__property TPopulateSubMenuEvent OnPopulateSubMenu = {read=FOnPopulateSubMenu, write=FOnPopulateSubMenu};
public:
	/* TCustomAction.Create */ inline __fastcall virtual TCustomSubMenuAction(System::Classes::TComponent* AOwner) : Vcl::Actnlist::TCustomAction(AOwner) { }
	/* TCustomAction.Destroy */ inline __fastcall virtual ~TCustomSubMenuAction() { }
	
};


class PASCALIMPLEMENTATION TSubMenuAction : public TCustomSubMenuAction
{
	typedef TCustomSubMenuAction inherited;
	
__published:
	__property OnPopulateSubMenu;
	__property Caption = {default=0};
	__property Enabled = {default=1};
	__property HelpContext = {default=0};
	__property Hint = {default=0};
	__property ImageIndex = {default=-1};
	__property ShortCut = {default=0};
	__property Visible = {default=1};
	__property OnExecute;
	__property OnHint;
	__property OnUpdate;
public:
	/* TCustomAction.Create */ inline __fastcall virtual TSubMenuAction(System::Classes::TComponent* AOwner) : TCustomSubMenuAction(AOwner) { }
	/* TCustomAction.Destroy */ inline __fastcall virtual ~TSubMenuAction() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Idemenuaction */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IDEMENUACTION)
using namespace Idemenuaction;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IdemenuactionHPP
