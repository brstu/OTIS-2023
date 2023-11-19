// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.StdActnMenus.pas' rev: 35.00 (Windows)

#ifndef Vcl_StdactnmenusHPP
#define Vcl_StdactnmenusHPP

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
#include <Vcl.ActnMenus.hpp>
#include <Vcl.ActnMan.hpp>
#include <Vcl.ActnCtrls.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Stdactnmenus
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TStandardMenuItem;
class DELPHICLASS TStandardMenuButton;
class DELPHICLASS TStandardToolScrollBtn;
class DELPHICLASS TStandardMenuExpandBtn;
class DELPHICLASS TStandardMenuPopup;
class DELPHICLASS TStandardAddRemoveItem;
class DELPHICLASS TStandardCustomizePopup;
class DELPHICLASS TStandardButtonControl;
class DELPHICLASS TStandardDropDownButton;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TStandardMenuItem : public Vcl::Actnmenus::TCustomMenuItem
{
	typedef Vcl::Actnmenus::TCustomMenuItem inherited;
	
protected:
	HIDESBASE MESSAGE void __fastcall CMTextchanged(Winapi::Messages::TMessage &Message);
	virtual void __fastcall DrawBackground(System::Types::TRect &PaintRect);
	virtual void __fastcall DrawDesignFocus(System::Types::TRect &PaintRect);
	virtual void __fastcall DrawEdge(Vcl::Actnmenus::TMenuEdges Edges);
	virtual void __fastcall DrawGlyph(const System::Types::TPoint &Location);
	void __fastcall DrawGlyphFrame(const System::Types::TPoint &Location);
	virtual void __fastcall DrawSeparator(const int Offset);
	virtual void __fastcall DrawText(System::Types::TRect &Rect, unsigned &Flags, System::UnicodeString Text);
	virtual void __fastcall DrawLargeGlyph(const System::Types::TPoint &Location);
public:
	/* TCustomMenuItem.Create */ inline __fastcall virtual TStandardMenuItem(System::Classes::TComponent* AOwner) : Vcl::Actnmenus::TCustomMenuItem(AOwner) { }
	/* TCustomMenuItem.Destroy */ inline __fastcall virtual ~TStandardMenuItem() { }
	
};


class PASCALIMPLEMENTATION TStandardMenuButton : public Vcl::Actnmenus::TCustomMenuButton
{
	typedef Vcl::Actnmenus::TCustomMenuButton inherited;
	
protected:
	virtual void __fastcall DrawBackground(System::Types::TRect &PaintRect);
	virtual void __fastcall DrawText(System::Types::TRect &ARect, unsigned &Flags, System::UnicodeString Text);
	virtual void __fastcall DrawDesignFocus(System::Types::TRect &PaintRect);
	virtual void __fastcall DrawFrame(const System::Types::TRect &ARect, bool Down);
public:
	/* TCustomMenuButton.Create */ inline __fastcall virtual TStandardMenuButton(System::Classes::TComponent* AOwner) : Vcl::Actnmenus::TCustomMenuButton(AOwner) { }
	/* TCustomMenuButton.Destroy */ inline __fastcall virtual ~TStandardMenuButton() { }
	
};


class PASCALIMPLEMENTATION TStandardToolScrollBtn : public Vcl::Actnctrls::TCustomToolScrollBtn
{
	typedef Vcl::Actnctrls::TCustomToolScrollBtn inherited;
	
protected:
	virtual void __fastcall DrawFrame(const System::Types::TRect &ARect, bool Down);
public:
	/* TCustomToolScrollBtn.Create */ inline __fastcall virtual TStandardToolScrollBtn(System::Classes::TComponent* AOwner) : Vcl::Actnctrls::TCustomToolScrollBtn(AOwner) { }
	
public:
	/* TCustomUtilityButton.Destroy */ inline __fastcall virtual ~TStandardToolScrollBtn() { }
	
};


class PASCALIMPLEMENTATION TStandardMenuExpandBtn : public Vcl::Actnmenus::TCustomMenuExpandBtn
{
	typedef Vcl::Actnmenus::TCustomMenuExpandBtn inherited;
	
protected:
	virtual void __fastcall DrawBackground(System::Types::TRect &PaintRect);
	virtual void __fastcall DrawFrame(const System::Types::TRect &ARect, bool Down);
public:
	/* TCustomMenuExpandBtn.Create */ inline __fastcall virtual TStandardMenuExpandBtn(System::Classes::TComponent* AOwner) : Vcl::Actnmenus::TCustomMenuExpandBtn(AOwner) { }
	
public:
	/* TCustomUtilityButton.Destroy */ inline __fastcall virtual ~TStandardMenuExpandBtn() { }
	
};


class PASCALIMPLEMENTATION TStandardMenuPopup : public Vcl::Actnmenus::TCustomActionPopupMenu
{
	typedef Vcl::Actnmenus::TCustomActionPopupMenu inherited;
	
protected:
	virtual bool __fastcall CanAutoSize(int &NewWidth, int &NewHeight);
	virtual Vcl::Actnmenus::TCustomMenuExpandBtnClass __fastcall GetExpandBtnClass();
	virtual void __fastcall NCPaint(HDC DC);
	virtual void __fastcall PositionPopup(Vcl::Actnman::TCustomActionBar* AnOwner, Vcl::Actnman::TCustomActionControl* ParentItem);
public:
	/* TCustomActionPopupMenu.Create */ inline __fastcall virtual TStandardMenuPopup(System::Classes::TComponent* AOwner) : Vcl::Actnmenus::TCustomActionPopupMenu(AOwner) { }
	/* TCustomActionPopupMenu.Destroy */ inline __fastcall virtual ~TStandardMenuPopup() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TStandardMenuPopup(HWND ParentWindow) : Vcl::Actnmenus::TCustomActionPopupMenu(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TStandardAddRemoveItem : public Vcl::Actnmenus::TCustomAddRemoveItem
{
	typedef Vcl::Actnmenus::TCustomAddRemoveItem inherited;
	
protected:
	virtual void __fastcall DrawBackground(System::Types::TRect &PaintRect);
	virtual void __fastcall DrawGlyph(const System::Types::TPoint &Location);
public:
	/* TCustomMenuItem.Create */ inline __fastcall virtual TStandardAddRemoveItem(System::Classes::TComponent* AOwner) : Vcl::Actnmenus::TCustomAddRemoveItem(AOwner) { }
	/* TCustomMenuItem.Destroy */ inline __fastcall virtual ~TStandardAddRemoveItem() { }
	
};


class PASCALIMPLEMENTATION TStandardCustomizePopup : public Vcl::Actnmenus::TCustomizeActionToolBar
{
	typedef Vcl::Actnmenus::TCustomizeActionToolBar inherited;
	
protected:
	virtual bool __fastcall CanAutoSize(int &NewWidth, int &NewHeight);
	virtual void __fastcall PositionPopup(Vcl::Actnman::TCustomActionBar* AnOwner, Vcl::Actnman::TCustomActionControl* ParentItem);
	virtual void __fastcall NCPaint(HDC DC);
public:
	/* TCustomizeActionToolBar.Create */ inline __fastcall virtual TStandardCustomizePopup(System::Classes::TComponent* AOwner) : Vcl::Actnmenus::TCustomizeActionToolBar(AOwner) { }
	/* TCustomizeActionToolBar.Destroy */ inline __fastcall virtual ~TStandardCustomizePopup() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TStandardCustomizePopup(HWND ParentWindow) : Vcl::Actnmenus::TCustomizeActionToolBar(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TStandardButtonControl : public Vcl::Actnctrls::TCustomButtonControl
{
	typedef Vcl::Actnctrls::TCustomButtonControl inherited;
	
protected:
	virtual void __fastcall DrawText(System::Types::TRect &ARect, unsigned &Flags, System::UnicodeString Text);
	virtual void __fastcall DrawGlyph(const System::Types::TPoint &Location);
	virtual void __fastcall DrawFrame(const System::Types::TRect &ARect, bool Down);
public:
	/* TCustomButtonControl.Create */ inline __fastcall virtual TStandardButtonControl(System::Classes::TComponent* AOwner) : Vcl::Actnctrls::TCustomButtonControl(AOwner) { }
	
public:
	/* TCustomActionControl.Destroy */ inline __fastcall virtual ~TStandardButtonControl() { }
	
};


class PASCALIMPLEMENTATION TStandardDropDownButton : public Vcl::Actnctrls::TCustomDropDownButton
{
	typedef Vcl::Actnctrls::TCustomDropDownButton inherited;
	
protected:
	virtual void __fastcall DrawFrame(const System::Types::TRect &ARect, bool Down);
	virtual Vcl::Actnman::TCustomActionBarClass __fastcall GetPopupClass();
public:
	/* TCustomButtonControl.Create */ inline __fastcall virtual TStandardDropDownButton(System::Classes::TComponent* AOwner) : Vcl::Actnctrls::TCustomDropDownButton(AOwner) { }
	
public:
	/* TCustomActionControl.Destroy */ inline __fastcall virtual ~TStandardDropDownButton() { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE void __fastcall RegisterStandardMenus _DEPRECATED_ATTRIBUTE0 (void);
}	/* namespace Stdactnmenus */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_STDACTNMENUS)
using namespace Vcl::Stdactnmenus;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_StdactnmenusHPP
