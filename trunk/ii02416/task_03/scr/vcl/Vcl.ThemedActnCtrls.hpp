// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.ThemedActnCtrls.pas' rev: 35.00 (Windows)

#ifndef Vcl_ThemedactnctrlsHPP
#define Vcl_ThemedactnctrlsHPP

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
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Themedactnctrls
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TThemedMenuItem;
class DELPHICLASS TThemedMenuButton;
class DELPHICLASS TThemedPopupMenu;
class DELPHICLASS TThemedExpandBtn;
class DELPHICLASS TThemedButtonControl;
class DELPHICLASS TThemedDropDownButton;
class DELPHICLASS TThemedCustomizePopup;
class DELPHICLASS TThemedToolScrollBtn;
class DELPHICLASS TThemedAddRemoveItem;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TThemedMenuItem : public Vcl::Actnmenus::TCustomMenuItem
{
	typedef Vcl::Actnmenus::TCustomMenuItem inherited;
	
private:
	System::Types::TRect FCheckRect;
	System::Types::TRect FGutterRect;
	System::Types::TRect FPaintRect;
	System::Types::TRect FSubMenuGlyphRect;
	int FSeparatorHeight;
	void __fastcall DoDrawMenuCheck();
	void __fastcall DoDrawText(HDC DC, const System::UnicodeString Text, System::Types::TRect &Rect, int Flags);
	
protected:
	virtual void __fastcall DrawBackground(System::Types::TRect &PaintRect);
	virtual void __fastcall DrawGlyph(const System::Types::TPoint &Location);
	virtual void __fastcall DrawLargeGlyph(const System::Types::TPoint &Location);
	virtual void __fastcall DrawSeparator(const int Offset);
	virtual void __fastcall DrawSubMenuGlyph();
	virtual void __fastcall DrawText(System::Types::TRect &Rect, unsigned &Flags, System::UnicodeString Text);
	virtual void __fastcall DrawUnusedEdges();
	virtual void __fastcall DrawShadowedText(const System::Types::TRect &Rect, unsigned Flags, System::UnicodeString Text, System::Uitypes::TColor TextColor, System::Uitypes::TColor ShadowColor);
	virtual System::Types::TPoint __fastcall GetImageSize();
	
public:
	virtual void __fastcall CalcBounds();
public:
	/* TCustomMenuItem.Create */ inline __fastcall virtual TThemedMenuItem(System::Classes::TComponent* AOwner) : Vcl::Actnmenus::TCustomMenuItem(AOwner) { }
	/* TCustomMenuItem.Destroy */ inline __fastcall virtual ~TThemedMenuItem() { }
	
};


class PASCALIMPLEMENTATION TThemedMenuButton : public Vcl::Actnmenus::TCustomMenuButton
{
	typedef Vcl::Actnmenus::TCustomMenuButton inherited;
	
private:
	void __fastcall DoDrawText(const System::UnicodeString Text, System::Types::TRect &Rect, int Flags);
	
protected:
	virtual void __fastcall DrawBackground(System::Types::TRect &PaintRect);
	virtual void __fastcall DrawText(System::Types::TRect &ARect, unsigned &Flags, System::UnicodeString Text);
	virtual void __fastcall DrawShadowedText(const System::Types::TRect &Rect, unsigned Flags, System::UnicodeString Text, System::Uitypes::TColor TextColor, System::Uitypes::TColor ShadowColor);
	
public:
	virtual void __fastcall CalcBounds();
public:
	/* TCustomMenuButton.Create */ inline __fastcall virtual TThemedMenuButton(System::Classes::TComponent* AOwner) : Vcl::Actnmenus::TCustomMenuButton(AOwner) { }
	/* TCustomMenuButton.Destroy */ inline __fastcall virtual ~TThemedMenuButton() { }
	
};


class PASCALIMPLEMENTATION TThemedPopupMenu : public Vcl::Actnmenus::TCustomActionPopupMenu
{
	typedef Vcl::Actnmenus::TCustomActionPopupMenu inherited;
	
protected:
	virtual Vcl::Actnmenus::TCustomMenuExpandBtnClass __fastcall GetExpandBtnClass();
	virtual void __fastcall NCPaint(HDC DC);
	virtual void __fastcall PositionPopup(Vcl::Actnman::TCustomActionBar* AnOwner, Vcl::Actnman::TCustomActionControl* ParentItem);
	DYNAMIC void __fastcall VisibleChanging();
	virtual void __fastcall AdjustFont();
	
public:
	__fastcall virtual TThemedPopupMenu(System::Classes::TComponent* AOwner);
public:
	/* TCustomActionPopupMenu.Destroy */ inline __fastcall virtual ~TThemedPopupMenu() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TThemedPopupMenu(HWND ParentWindow) : Vcl::Actnmenus::TCustomActionPopupMenu(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TThemedExpandBtn : public Vcl::Actnmenus::TCustomMenuExpandBtn
{
	typedef Vcl::Actnmenus::TCustomMenuExpandBtn inherited;
	
protected:
	virtual void __fastcall DrawBackground(System::Types::TRect &PaintRect);
	virtual void __fastcall DrawFrame(const System::Types::TRect &ARect, bool Down);
	virtual System::Types::TPoint __fastcall GetImageSize();
public:
	/* TCustomMenuExpandBtn.Create */ inline __fastcall virtual TThemedExpandBtn(System::Classes::TComponent* AOwner) : Vcl::Actnmenus::TCustomMenuExpandBtn(AOwner) { }
	
public:
	/* TCustomUtilityButton.Destroy */ inline __fastcall virtual ~TThemedExpandBtn() { }
	
};


class PASCALIMPLEMENTATION TThemedButtonControl : public Vcl::Actnctrls::TCustomButtonControl
{
	typedef Vcl::Actnctrls::TCustomButtonControl inherited;
	
protected:
	virtual void __fastcall DrawBackground(System::Types::TRect &PaintRect);
	virtual void __fastcall DrawFrame(const System::Types::TRect &ARect, bool Down);
	virtual void __fastcall DrawGlyph(const System::Types::TPoint &Location);
	virtual void __fastcall DrawLargeGlyph(const System::Types::TPoint &Location);
	virtual void __fastcall DrawText(System::Types::TRect &ARect, unsigned &Flags, System::UnicodeString Text);
	virtual void __fastcall DrawShadowedText(const System::Types::TRect &Rect, unsigned Flags, System::UnicodeString Text, System::Uitypes::TColor TextColor, System::Uitypes::TColor ShadowColor);
public:
	/* TCustomButtonControl.Create */ inline __fastcall virtual TThemedButtonControl(System::Classes::TComponent* AOwner) : Vcl::Actnctrls::TCustomButtonControl(AOwner) { }
	
public:
	/* TCustomActionControl.Destroy */ inline __fastcall virtual ~TThemedButtonControl() { }
	
};


class PASCALIMPLEMENTATION TThemedDropDownButton : public Vcl::Actnctrls::TCustomDropDownButton
{
	typedef Vcl::Actnctrls::TCustomDropDownButton inherited;
	
protected:
	virtual void __fastcall DrawFrame(const System::Types::TRect &ARect, bool Down);
	virtual void __fastcall DrawBackground(System::Types::TRect &PaintRect);
	virtual int __fastcall GetDropDownButtonWidth();
	virtual Vcl::Actnman::TCustomActionBarClass __fastcall GetPopupClass();
	virtual void __fastcall DrawGlyph(const System::Types::TPoint &Location);
	virtual void __fastcall DrawLargeGlyph(const System::Types::TPoint &Location);
	virtual void __fastcall DrawText(System::Types::TRect &ARect, unsigned &Flags, System::UnicodeString Text);
public:
	/* TCustomButtonControl.Create */ inline __fastcall virtual TThemedDropDownButton(System::Classes::TComponent* AOwner) : Vcl::Actnctrls::TCustomDropDownButton(AOwner) { }
	
public:
	/* TCustomActionControl.Destroy */ inline __fastcall virtual ~TThemedDropDownButton() { }
	
};


class PASCALIMPLEMENTATION TThemedCustomizePopup : public Vcl::Actnmenus::TCustomizeActionToolBar
{
	typedef Vcl::Actnmenus::TCustomizeActionToolBar inherited;
	
protected:
	virtual void __fastcall NCPaint(HDC DC);
	virtual Vcl::Actnmenus::TCustomAddRemoveItemClass __fastcall GetAddRemoveItemClass();
	virtual Vcl::Actnman::TCustomColorMapClass __fastcall GetDefaultColorMapClass();
	
public:
	__fastcall virtual TThemedCustomizePopup(System::Classes::TComponent* AOwner);
public:
	/* TCustomizeActionToolBar.Destroy */ inline __fastcall virtual ~TThemedCustomizePopup() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TThemedCustomizePopup(HWND ParentWindow) : Vcl::Actnmenus::TCustomizeActionToolBar(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TThemedToolScrollBtn : public Vcl::Actnctrls::TCustomToolScrollBtn
{
	typedef Vcl::Actnctrls::TCustomToolScrollBtn inherited;
	
protected:
	virtual void __fastcall DrawBackground(System::Types::TRect &PaintRect);
public:
	/* TCustomToolScrollBtn.Create */ inline __fastcall virtual TThemedToolScrollBtn(System::Classes::TComponent* AOwner) : Vcl::Actnctrls::TCustomToolScrollBtn(AOwner) { }
	
public:
	/* TCustomUtilityButton.Destroy */ inline __fastcall virtual ~TThemedToolScrollBtn() { }
	
};


class PASCALIMPLEMENTATION TThemedAddRemoveItem : public Vcl::Actnmenus::TCustomAddRemoveItem
{
	typedef Vcl::Actnmenus::TCustomAddRemoveItem inherited;
	
private:
	System::Types::TRect FCheckRect;
	System::Types::TRect FVisibleCheckRect;
	System::Types::TRect FGutterRect;
	System::Types::TRect FPaintRect;
	System::Types::TRect FSubMenuGlyphRect;
	int FSeparatorHeight;
	void __fastcall DoDrawText(HDC DC, const System::UnicodeString Text, System::Types::TRect &Rect, int Flags);
	
protected:
	virtual void __fastcall DrawBackground(System::Types::TRect &PaintRect);
	virtual void __fastcall DrawGlyph(const System::Types::TPoint &Location);
	virtual void __fastcall DrawSeparator(const int Offset);
	virtual void __fastcall DrawText(System::Types::TRect &Rect, unsigned &Flags, System::UnicodeString Text);
	virtual void __fastcall DrawUnusedEdges();
	virtual System::Types::TPoint __fastcall GetImageSize();
	
public:
	virtual void __fastcall CalcBounds();
public:
	/* TCustomMenuItem.Create */ inline __fastcall virtual TThemedAddRemoveItem(System::Classes::TComponent* AOwner) : Vcl::Actnmenus::TCustomAddRemoveItem(AOwner) { }
	/* TCustomMenuItem.Destroy */ inline __fastcall virtual ~TThemedAddRemoveItem() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Themedactnctrls */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_THEMEDACTNCTRLS)
using namespace Vcl::Themedactnctrls;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_ThemedactnctrlsHPP
