// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.ColorGrd.pas' rev: 35.00 (Windows)

#ifndef Vcl_ColorgrdHPP
#define Vcl_ColorgrdHPP

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
#include <Vcl.Graphics.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Menus.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Colorgrd
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TColorGrid;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TGridOrdering : unsigned char { go16x1, go8x2, go4x4, go2x8, go1x16 };

class PASCALIMPLEMENTATION TColorGrid : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
private:
	System::StaticArray<tagPALETTEENTRY, 20> FPaletteEntries;
	bool FClickEnablesColor;
	int FForegroundIndex;
	int FBackgroundIndex;
	bool FForegroundEnabled;
	bool FBackgroundEnabled;
	int FSelection;
	int FCellXSize;
	int FCellYSize;
	int FNumXSquares;
	int FNumYSquares;
	TGridOrdering FGridOrdering;
	bool FHasFocus;
	System::Classes::TNotifyEvent FOnChange;
	System::Uitypes::TMouseButton FButton;
	bool FButtonDown;
	void __fastcall DrawSquare(int Which, bool ShowSelector);
	void __fastcall DrawFgBg();
	void __fastcall UpdateCellSizes(bool DoRepaint);
	void __fastcall SetGridOrdering(TGridOrdering Value);
	System::Uitypes::TColor __fastcall GetForegroundColor();
	System::Uitypes::TColor __fastcall GetBackgroundColor();
	void __fastcall SetForegroundIndex(int Value);
	void __fastcall SetBackgroundIndex(int Value);
	void __fastcall SetSelection(int Value);
	void __fastcall EnableForeground(bool Value);
	void __fastcall EnableBackground(bool Value);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Message);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TWMKillFocus &Message);
	MESSAGE void __fastcall WMGetDlgCode(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	HIDESBASE MESSAGE void __fastcall CMCtl3DChanged(Winapi::Messages::TMessage &Message);
	
protected:
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall CreateWnd();
	virtual void __fastcall Paint();
	DYNAMIC void __fastcall Change();
	int __fastcall SquareFromPos(int X, int Y);
	
public:
	__fastcall virtual TColorGrid(System::Classes::TComponent* AOwner);
	int __fastcall ColorToIndex(System::Uitypes::TColor AColor);
	__property System::Uitypes::TColor ForegroundColor = {read=GetForegroundColor, nodefault};
	__property System::Uitypes::TColor BackgroundColor = {read=GetBackgroundColor, nodefault};
	
__published:
	__property Anchors = {default=3};
	__property bool ClickEnablesColor = {read=FClickEnablesColor, write=FClickEnablesColor, default=0};
	__property Constraints;
	__property Ctl3D;
	__property DoubleBuffered;
	__property DragCursor = {default=-12};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property TGridOrdering GridOrdering = {read=FGridOrdering, write=SetGridOrdering, default=2};
	__property int ForegroundIndex = {read=FForegroundIndex, write=SetForegroundIndex, default=0};
	__property int BackgroundIndex = {read=FBackgroundIndex, write=SetBackgroundIndex, default=0};
	__property bool ForegroundEnabled = {read=FForegroundEnabled, write=EnableForeground, default=1};
	__property bool BackgroundEnabled = {read=FBackgroundEnabled, write=EnableBackground, default=1};
	__property Font;
	__property ParentCtl3D = {default=1};
	__property ParentDoubleBuffered = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property int Selection = {read=FSelection, write=SetSelection, default=0};
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=0};
	__property Touch;
	__property Visible = {default=1};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property OnClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnGesture;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseActivate;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnStartDrag;
public:
	/* TCustomControl.Destroy */ inline __fastcall virtual ~TColorGrid() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TColorGrid(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 NumPaletteEntries = System::Int8(0x14);
}	/* namespace Colorgrd */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_COLORGRD)
using namespace Vcl::Colorgrd;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_ColorgrdHPP
