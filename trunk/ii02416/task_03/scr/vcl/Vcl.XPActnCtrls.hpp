// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.XPActnCtrls.pas' rev: 35.00 (Windows)

#ifndef Vcl_XpactnctrlsHPP
#define Vcl_XpactnctrlsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ToolWin.hpp>
#include <Vcl.ActnMan.hpp>
#include <Vcl.ActnMenus.hpp>
#include <Vcl.ActnCtrls.hpp>
#include <Vcl.ActnColorMaps.hpp>
#include <Vcl.ShadowWnd.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Xpactnctrls
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TXPStyleMenuItem;
class DELPHICLASS TXPStyleMenuButton;
class DELPHICLASS TXPStylePopupMenu;
class DELPHICLASS TXPStyleExpandBtn;
class DELPHICLASS TXPStyleButton;
class DELPHICLASS TXPStyleDropDownBtn;
class DELPHICLASS TXPStyleCustomizePopup;
class DELPHICLASS TXPStyleToolScrollBtn;
class DELPHICLASS TXPStyleAddRemoveItem;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TXPStyleMenuItem : public Vcl::Actnmenus::TCustomMenuItem
{
	typedef Vcl::Actnmenus::TCustomMenuItem inherited;
	
protected:
	virtual void __fastcall DrawBackground(System::Types::TRect &PaintRect);
	virtual void __fastcall DrawGlyph(const System::Types::TPoint &Location);
	virtual void __fastcall DrawSeparator(const int Offset);
	virtual void __fastcall DrawSubMenuGlyph();
	virtual void __fastcall DrawText(System::Types::TRect &Rect, unsigned &Flags, System::UnicodeString Text);
	virtual void __fastcall DrawUnusedEdges();
	virtual void __fastcall DrawShadowedText(const System::Types::TRect &Rect, unsigned Flags, System::UnicodeString Text, System::Uitypes::TColor TextColor, System::Uitypes::TColor ShadowColor);
	virtual void __fastcall CalcLayout();
	
public:
	virtual void __fastcall CalcBounds();
public:
	/* TCustomMenuItem.Create */ inline __fastcall virtual TXPStyleMenuItem(System::Classes::TComponent* AOwner) : Vcl::Actnmenus::TCustomMenuItem(AOwner) { }
	/* TCustomMenuItem.Destroy */ inline __fastcall virtual ~TXPStyleMenuItem() { }
	
};


class PASCALIMPLEMENTATION TXPStyleMenuButton : public Vcl::Actnmenus::TCustomMenuButton
{
	typedef Vcl::Actnmenus::TCustomMenuButton inherited;
	
protected:
	virtual void __fastcall DrawBackground(System::Types::TRect &PaintRect);
	virtual void __fastcall DrawText(System::Types::TRect &ARect, unsigned &Flags, System::UnicodeString Text);
public:
	/* TCustomMenuButton.Create */ inline __fastcall virtual TXPStyleMenuButton(System::Classes::TComponent* AOwner) : Vcl::Actnmenus::TCustomMenuButton(AOwner) { }
	/* TCustomMenuButton.Destroy */ inline __fastcall virtual ~TXPStyleMenuButton() { }
	
};


class PASCALIMPLEMENTATION TXPStylePopupMenu : public Vcl::Actnmenus::TCustomActionPopupMenu
{
	typedef Vcl::Actnmenus::TCustomActionPopupMenu inherited;
	
private:
	Vcl::Shadowwnd::TShadowWindow* FBtnShadow;
	
protected:
	virtual Vcl::Actnmenus::TCustomMenuExpandBtnClass __fastcall GetExpandBtnClass();
	virtual void __fastcall NCPaint(HDC DC);
	virtual void __fastcall PositionPopup(Vcl::Actnman::TCustomActionBar* AnOwner, Vcl::Actnman::TCustomActionControl* ParentItem);
	DYNAMIC void __fastcall VisibleChanging();
	virtual void __fastcall DisplayShadow();
	virtual void __fastcall HideShadow();
	
public:
	__fastcall virtual TXPStylePopupMenu(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TXPStylePopupMenu();
public:
	/* TWinControl.CreateParented */ inline __fastcall TXPStylePopupMenu(HWND ParentWindow) : Vcl::Actnmenus::TCustomActionPopupMenu(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TXPStyleExpandBtn : public Vcl::Actnmenus::TCustomMenuExpandBtn
{
	typedef Vcl::Actnmenus::TCustomMenuExpandBtn inherited;
	
protected:
	virtual void __fastcall DrawBackground(System::Types::TRect &PaintRect);
	virtual void __fastcall DrawFrame(const System::Types::TRect &ARect, bool Down);
public:
	/* TCustomMenuExpandBtn.Create */ inline __fastcall virtual TXPStyleExpandBtn(System::Classes::TComponent* AOwner) : Vcl::Actnmenus::TCustomMenuExpandBtn(AOwner) { }
	
public:
	/* TCustomUtilityButton.Destroy */ inline __fastcall virtual ~TXPStyleExpandBtn() { }
	
};


class PASCALIMPLEMENTATION TXPStyleButton : public Vcl::Actnctrls::TCustomButtonControl
{
	typedef Vcl::Actnctrls::TCustomButtonControl inherited;
	
protected:
	virtual void __fastcall DrawBackground(System::Types::TRect &PaintRect);
	virtual void __fastcall DrawFrame(const System::Types::TRect &ARect, bool Down);
	virtual void __fastcall DrawGlyph(const System::Types::TPoint &Location);
	virtual void __fastcall DrawText(System::Types::TRect &ARect, unsigned &Flags, System::UnicodeString Text);
public:
	/* TCustomButtonControl.Create */ inline __fastcall virtual TXPStyleButton(System::Classes::TComponent* AOwner) : Vcl::Actnctrls::TCustomButtonControl(AOwner) { }
	
public:
	/* TCustomActionControl.Destroy */ inline __fastcall virtual ~TXPStyleButton() { }
	
};


class PASCALIMPLEMENTATION TXPStyleDropDownBtn : public Vcl::Actnctrls::TCustomDropDownButton
{
	typedef Vcl::Actnctrls::TCustomDropDownButton inherited;
	
protected:
	virtual void __fastcall DrawFrame(const System::Types::TRect &ARect, bool Down);
	virtual void __fastcall DrawBackground(System::Types::TRect &PaintRect);
	virtual Vcl::Actnman::TCustomActionBarClass __fastcall GetPopupClass();
	virtual void __fastcall DrawGlyph(const System::Types::TPoint &Location);
public:
	/* TCustomButtonControl.Create */ inline __fastcall virtual TXPStyleDropDownBtn(System::Classes::TComponent* AOwner) : Vcl::Actnctrls::TCustomDropDownButton(AOwner) { }
	
public:
	/* TCustomActionControl.Destroy */ inline __fastcall virtual ~TXPStyleDropDownBtn() { }
	
};


class PASCALIMPLEMENTATION TXPStyleCustomizePopup : public Vcl::Actnmenus::TCustomizeActionToolBar
{
	typedef Vcl::Actnmenus::TCustomizeActionToolBar inherited;
	
protected:
	virtual void __fastcall NCPaint(HDC DC);
	virtual Vcl::Actnmenus::TCustomAddRemoveItemClass __fastcall GetAddRemoveItemClass();
	virtual Vcl::Actnman::TCustomColorMapClass __fastcall GetDefaultColorMapClass();
	
public:
	__fastcall virtual TXPStyleCustomizePopup(System::Classes::TComponent* AOwner);
public:
	/* TCustomizeActionToolBar.Destroy */ inline __fastcall virtual ~TXPStyleCustomizePopup() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TXPStyleCustomizePopup(HWND ParentWindow) : Vcl::Actnmenus::TCustomizeActionToolBar(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TXPStyleToolScrollBtn : public Vcl::Actnctrls::TCustomToolScrollBtn
{
	typedef Vcl::Actnctrls::TCustomToolScrollBtn inherited;
	
protected:
	virtual void __fastcall DrawBackground(System::Types::TRect &PaintRect);
public:
	/* TCustomToolScrollBtn.Create */ inline __fastcall virtual TXPStyleToolScrollBtn(System::Classes::TComponent* AOwner) : Vcl::Actnctrls::TCustomToolScrollBtn(AOwner) { }
	
public:
	/* TCustomUtilityButton.Destroy */ inline __fastcall virtual ~TXPStyleToolScrollBtn() { }
	
};


class PASCALIMPLEMENTATION TXPStyleAddRemoveItem : public Vcl::Actnmenus::TCustomAddRemoveItem
{
	typedef Vcl::Actnmenus::TCustomAddRemoveItem inherited;
	
protected:
	virtual void __fastcall DrawBackground(System::Types::TRect &PaintRect);
	virtual void __fastcall DrawGlyph(const System::Types::TPoint &Location);
	virtual void __fastcall DrawSeparator(const int Offset);
	virtual void __fastcall DrawText(System::Types::TRect &Rect, unsigned &Flags, System::UnicodeString Text);
	virtual void __fastcall DrawUnusedEdges();
	
public:
	virtual void __fastcall CalcBounds();
public:
	/* TCustomMenuItem.Create */ inline __fastcall virtual TXPStyleAddRemoveItem(System::Classes::TComponent* AOwner) : Vcl::Actnmenus::TCustomAddRemoveItem(AOwner) { }
	/* TCustomMenuItem.Destroy */ inline __fastcall virtual ~TXPStyleAddRemoveItem() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Xpactnctrls */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_XPACTNCTRLS)
using namespace Vcl::Xpactnctrls;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_XpactnctrlsHPP
