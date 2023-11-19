// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.DBCGrids.pas' rev: 35.00 (Windows)

#ifndef Vcl_DbcgridsHPP
#define Vcl_DbcgridsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Menus.hpp>
#include <Data.DB.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Dbcgrids
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TDBCtrlGridLink;
class DELPHICLASS TDBCtrlPanel;
class DELPHICLASS TDBCtrlGrid;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TDBCtrlGridLink : public Data::Db::TDataLink
{
	typedef Data::Db::TDataLink inherited;
	
private:
	TDBCtrlGrid* FDBCtrlGrid;
	
protected:
	virtual void __fastcall ActiveChanged();
	virtual void __fastcall DataSetChanged();
	
public:
	__fastcall TDBCtrlGridLink(TDBCtrlGrid* DBCtrlGrid);
public:
	/* TDataLink.Destroy */ inline __fastcall virtual ~TDBCtrlGridLink() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TDBCtrlPanel : public Vcl::Controls::TWinControl
{
	typedef Vcl::Controls::TWinControl inherited;
	
private:
	TDBCtrlGrid* FDBCtrlGrid;
	HIDESBASE MESSAGE void __fastcall CMControlListChange(Vcl::Controls::TCMControlListChange &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Message);
	HIDESBASE MESSAGE void __fastcall WMNCHitTest(Winapi::Messages::TWMNCHitTest &Message);
	
protected:
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall PaintWindow(HDC DC);
	
public:
	__fastcall TDBCtrlPanel(TDBCtrlGrid* DBCtrlGrid);
public:
	/* TWinControl.Create */ inline __fastcall virtual TDBCtrlPanel(System::Classes::TComponent* AOwner) : Vcl::Controls::TWinControl(AOwner) { }
	/* TWinControl.CreateParented */ inline __fastcall TDBCtrlPanel(HWND ParentWindow) : Vcl::Controls::TWinControl(ParentWindow) { }
	/* TWinControl.Destroy */ inline __fastcall virtual ~TDBCtrlPanel() { }
	
};


enum DECLSPEC_DENUM TDBCtrlGridOrientation : unsigned char { goVertical, goHorizontal };

enum DECLSPEC_DENUM TDBCtrlGridBorder : unsigned char { gbNone, gbRaised };

enum DECLSPEC_DENUM TDBCtrlGridKey : unsigned char { gkNull, gkEditMode, gkPriorTab, gkNextTab, gkLeft, gkRight, gkUp, gkDown, gkScrollUp, gkScrollDown, gkPageUp, gkPageDown, gkHome, gkEnd, gkInsert, gkAppend, gkDelete, gkCancel };

typedef void __fastcall (__closure *TPaintPanelEvent)(TDBCtrlGrid* DBCtrlGrid, int Index);

class PASCALIMPLEMENTATION TDBCtrlGrid : public Vcl::Controls::TWinControl
{
	typedef Vcl::Controls::TWinControl inherited;
	
private:
	TDBCtrlGridLink* FDataLink;
	TDBCtrlPanel* FPanel;
	Vcl::Graphics::TCanvas* FCanvas;
	int FColCount;
	int FRowCount;
	int FPanelWidth;
	int FPanelHeight;
	int FPanelIndex;
	int FPanelCount;
	int FBitmapCount;
	HBITMAP FPanelBitmap;
	HBITMAP FSaveBitmap;
	HDC FPanelDC;
	TDBCtrlGridOrientation FOrientation;
	TDBCtrlGridBorder FPanelBorder;
	bool FAllowInsert;
	bool FAllowDelete;
	bool FShowFocus;
	bool FFocused;
	bool FClicking;
	bool FSelColorChanged;
	int FScrollBarKind;
	System::Uitypes::TColor FSelectedColor;
	TPaintPanelEvent FOnPaintPanel;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
private:
	bool __fastcall AcquireFocus();
	HIDESBASE void __fastcall AdjustSize();
	void __fastcall CreatePanelBitmap();
	void __fastcall DataSetChanged(bool Reset);
	void __fastcall DestroyPanelBitmap();
	void __fastcall DrawPanel(HDC DC, int Index);
	void __fastcall DrawPanelBackground(HDC DC, const System::Types::TRect &R, bool Erase, bool Selected);
	Vcl::Controls::TWinControl* __fastcall FindNext(Vcl::Controls::TWinControl* StartControl, bool GoForward, int &WrapFlag);
	Data::Db::TDataSource* __fastcall GetDataSource();
	bool __fastcall GetEditMode();
	System::Types::TRect __fastcall GetPanelBounds(int Index);
	bool __fastcall PointInPanel(const System::Types::TSmallPoint P);
	void __fastcall Reset();
	void __fastcall Scroll(int Inc, bool ScrollLock);
	void __fastcall ScrollMessage(Winapi::Messages::TWMScroll &Message);
	HIDESBASE void __fastcall SelectNext(bool GoForward);
	void __fastcall SetColCount(int Value);
	void __fastcall SetDataSource(Data::Db::TDataSource* Value);
	void __fastcall SetEditMode(bool Value);
	void __fastcall SetOrientation(TDBCtrlGridOrientation Value);
	void __fastcall SetPanelBorder(TDBCtrlGridBorder Value);
	void __fastcall SetPanelHeight(int Value);
	void __fastcall SetPanelIndex(int Value);
	void __fastcall SetPanelWidth(int Value);
	void __fastcall SetRowCount(int Value);
	void __fastcall SetSelectedColor(System::Uitypes::TColor Value);
	void __fastcall UpdateDataLinks(Vcl::Controls::TControl* Control, bool Inserting);
	void __fastcall UpdateScrollBar();
	HIDESBASE MESSAGE void __fastcall WMLButtonDown(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonDblClk(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMHScroll(Winapi::Messages::TWMScroll &Message);
	HIDESBASE MESSAGE void __fastcall WMVScroll(Winapi::Messages::TWMScroll &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Message);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Message);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TWMKillFocus &Message);
	MESSAGE void __fastcall WMGetDlgCode(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMChildKey(Vcl::Controls::TCMChildKey &Message);
	HIDESBASE MESSAGE void __fastcall CMColorChanged(Winapi::Messages::TMessage &Message);
	
protected:
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd();
	DYNAMIC System::Classes::TComponent* __fastcall GetChildParent();
	virtual void __fastcall PaintPanel(int Index);
	virtual void __fastcall PaintWindow(HDC DC);
	virtual void __fastcall ReadState(System::Classes::TReader* Reader);
	__property TDBCtrlPanel* Panel = {read=FPanel};
	
public:
	__fastcall virtual TDBCtrlGrid(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TDBCtrlGrid();
	void __fastcall DoKey(TDBCtrlGridKey Key);
	DYNAMIC bool __fastcall ExecuteAction(System::Classes::TBasicAction* Action);
	DYNAMIC void __fastcall GetTabOrderList(System::Classes::TList* List);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	virtual bool __fastcall UpdateAction(System::Classes::TBasicAction* Action);
	DYNAMIC void __fastcall GetChildren(System::Classes::TGetChildProc Proc, System::Classes::TComponent* Root);
	__property Vcl::Graphics::TCanvas* Canvas = {read=FCanvas};
	__property bool EditMode = {read=GetEditMode, write=SetEditMode, nodefault};
	__property int PanelCount = {read=FPanelCount, nodefault};
	__property int PanelIndex = {read=FPanelIndex, write=SetPanelIndex, nodefault};
	
__published:
	__property Align = {default=0};
	__property bool AllowDelete = {read=FAllowDelete, write=FAllowDelete, default=1};
	__property bool AllowInsert = {read=FAllowInsert, write=FAllowInsert, default=1};
	__property Anchors = {default=3};
	__property int ColCount = {read=FColCount, write=SetColCount, default=1};
	__property Color = {default=-16777211};
	__property Constraints;
	__property Data::Db::TDataSource* DataSource = {read=GetDataSource, write=SetDataSource};
	__property DragCursor = {default=-12};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property TDBCtrlGridOrientation Orientation = {read=FOrientation, write=SetOrientation, default=0};
	__property TDBCtrlGridBorder PanelBorder = {read=FPanelBorder, write=SetPanelBorder, default=1};
	__property int PanelHeight = {read=FPanelHeight, write=SetPanelHeight, default=72};
	__property int PanelWidth = {read=FPanelWidth, write=SetPanelWidth, default=200};
	__property ParentColor = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property int RowCount = {read=FRowCount, write=SetRowCount, default=3};
	__property System::Uitypes::TColor SelectedColor = {read=FSelectedColor, write=SetSelectedColor, stored=FSelColorChanged, default=-16777211};
	__property bool ShowFocus = {read=FShowFocus, write=FShowFocus, default=1};
	__property ShowHint;
	__property Touch;
	__property Visible = {default=1};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property OnClick;
	__property OnDblClick;
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
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
	__property TPaintPanelEvent OnPaintPanel = {read=FOnPaintPanel, write=FOnPaintPanel};
	__property OnStartDrag;
public:
	/* TWinControl.CreateParented */ inline __fastcall TDBCtrlGrid(HWND ParentWindow) : Vcl::Controls::TWinControl(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Dbcgrids */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_DBCGRIDS)
using namespace Vcl::Dbcgrids;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_DbcgridsHPP
