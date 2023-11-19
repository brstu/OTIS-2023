// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'PercentageDockTree.pas' rev: 35.00 (Windows)

#ifndef PercentagedocktreeHPP
#define PercentagedocktreeHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Vcl.Controls.hpp>
#include <System.Classes.hpp>
#include <Vcl.DockTabSet.hpp>
#include <Winapi.Messages.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.CaptionedDockTree.hpp>
#include <System.Types.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <System.Generics.Collections.hpp>
#include <System.SysUtils.hpp>
#include <System.Generics.Defaults.hpp>

//-- user supplied -----------------------------------------------------------

namespace Percentagedocktree
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TDockTreeInfo;
class DELPHICLASS TPercentageDockTree;
class DELPHICLASS TPercentageCaptionDrawer;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TDockTreeInfo : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	System::Types::TRect FCaptionRect;
	unsigned FHotButton;
	__fastcall TDockTreeInfo();
	__property System::Types::TRect CaptionRect = {read=FCaptionRect, write=FCaptionRect};
	__property unsigned HotButton = {read=FHotButton, write=FHotButton, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDockTreeInfo() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TPercentageDockTree : public Vcl::Docktabset::TCaptionedTabDockTree
{
	typedef Vcl::Docktabset::TCaptionedTabDockTree inherited;
	
private:
	System::Generics::Collections::TObjectDictionary__2<Vcl::Controls::TControl*,TDockTreeInfo*>* FControls;
	
protected:
	virtual System::Types::TRect __fastcall AdjustCaptionRect(const System::Types::TRect &ARect);
	virtual void __fastcall AdjustDockRect(Vcl::Controls::TControl* Control, System::Types::TRect &ARect);
	virtual void __fastcall PaintDockFrame(Vcl::Graphics::TCanvas* Canvas, Vcl::Controls::TControl* Control, const System::Types::TRect &ARect);
	virtual void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y, bool &Handled);
	virtual void __fastcall MouseLeave(bool &Handled);
	virtual void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y, bool &Handled);
	virtual void __fastcall InsertControl(Vcl::Controls::TControl* Control, Vcl::Controls::TAlign InsertAt, Vcl::Controls::TControl* DropCtl);
	virtual void __fastcall RemoveControl(Vcl::Controls::TControl* Control);
	virtual int __fastcall GetGrabberSize();
	
public:
	__classmethod virtual Vcl::Captioneddocktree::TDockCaptionDrawerClass __fastcall GetDockCaptionDrawer();
	__fastcall virtual TPercentageDockTree(Vcl::Controls::TWinControl* DockSite)/* overload */;
	__fastcall virtual ~TPercentageDockTree();
public:
	/* TCaptionedDockTree.Create */ inline __fastcall TPercentageDockTree(Vcl::Controls::TWinControl* DockSite, Vcl::Captioneddocktree::TDockCaptionOrientation ADockCaptionOrientation)/* overload */ : Vcl::Docktabset::TCaptionedTabDockTree(DockSite, ADockCaptionOrientation) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TPercentageCaptionDrawer : public Vcl::Captioneddocktree::TDockCaptionDrawer
{
	typedef Vcl::Captioneddocktree::TDockCaptionDrawer inherited;
	
private:
	HIDESBASE System::Types::TRect __fastcall GetCloseRect(const System::Types::TRect &CaptionRect, Vcl::Controls::TWinControl* AControl);
	HIDESBASE System::Types::TRect __fastcall GetPinRect(const System::Types::TRect &CaptionRect, Vcl::Controls::TWinControl* AControl);
	HIDESBASE int __fastcall CalcButtonSize(const System::Types::TRect &CaptionRect, Vcl::Controls::TWinControl* AControl);
	void __fastcall DrawDockCaptionEx(Vcl::Graphics::TCanvas* const Canvas, const System::Types::TRect &CaptionRect, const Vcl::Captioneddocktree::TParentFormState &State, TDockTreeInfo* Info, Vcl::Controls::TWinControl* AControl);
	
public:
	virtual int __fastcall GetGrabberSize(Vcl::Controls::TWinControl* ADockSite);
	__fastcall virtual TPercentageCaptionDrawer(Vcl::Captioneddocktree::TDockCaptionOrientation DockCaptionOrientation);
	virtual void __fastcall DrawDockCaption(Vcl::Graphics::TCanvas* const Canvas, const System::Types::TRect &CaptionRect, const Vcl::Captioneddocktree::TParentFormState &State);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TPercentageCaptionDrawer() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Percentagedocktree */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_PERCENTAGEDOCKTREE)
using namespace Percentagedocktree;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// PercentagedocktreeHPP
