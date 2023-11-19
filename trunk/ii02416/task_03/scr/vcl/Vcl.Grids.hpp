// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.Grids.pas' rev: 35.00 (Windows)

#ifndef Vcl_GridsHPP
#define Vcl_GridsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Messages.hpp>
#include <Winapi.Windows.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <System.Variants.hpp>
#include <System.Types.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Mask.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Grids
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS EInvalidGridOperation;
struct TGridAxisDrawInfo;
struct TGridDrawInfo;
class DELPHICLASS TInplaceEdit;
struct TGridCoord;
struct TGridRect;
struct THotTrackCellInfo;
class DELPHICLASS TCustomGrid;
class DELPHICLASS TCustomDrawGrid;
class DELPHICLASS TDrawGrid;
class DELPHICLASS TStringGridStrings;
class DELPHICLASS TStringGrid;
class DELPHICLASS TInplaceEditList;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EInvalidGridOperation : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EInvalidGridOperation(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EInvalidGridOperation(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidGridOperation(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EInvalidGridOperation(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidGridOperation(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EInvalidGridOperation(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EInvalidGridOperation(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EInvalidGridOperation(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidGridOperation(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EInvalidGridOperation(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidGridOperation(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidGridOperation(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EInvalidGridOperation() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef int __fastcall (__closure *TGetExtentsFunc)(int Index);

struct DECLSPEC_DRECORD TGridAxisDrawInfo
{
public:
	int EffectiveLineWidth;
	int FixedBoundary;
	int GridBoundary;
	int GridExtent;
	int LastFullVisibleCell;
	int FullVisBoundary;
	int FixedCellCount;
	int FirstGridCell;
	int GridCellCount;
	TGetExtentsFunc GetExtent;
};


struct DECLSPEC_DRECORD TGridDrawInfo
{
public:
	TGridAxisDrawInfo Horz;
	TGridAxisDrawInfo Vert;
};


enum DECLSPEC_DENUM TGridState : unsigned char { gsNormal, gsSelecting, gsRowSizing, gsColSizing, gsRowMoving, gsColMoving };

typedef TGridState TGridMovement;

class PASCALIMPLEMENTATION TInplaceEdit : public Vcl::Mask::TCustomMaskEdit
{
	typedef Vcl::Mask::TCustomMaskEdit inherited;
	
private:
	TCustomGrid* FGrid;
	int FClickTime;
	void __fastcall InternalMove(const System::Types::TRect &Loc, bool Redraw);
	void __fastcall SetGrid(TCustomGrid* Value);
	HIDESBASE MESSAGE void __fastcall CMShowingChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMGetDlgCode(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall WMPaste(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMCut(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMClear(Winapi::Messages::TMessage &Message);
	
protected:
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	DYNAMIC void __fastcall DblClick();
	DYNAMIC bool __fastcall DoMouseWheel(System::Classes::TShiftState Shift, int WheelDelta, const System::Types::TPoint &MousePos);
	virtual bool __fastcall EditCanModify();
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	DYNAMIC void __fastcall KeyUp(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall BoundsChanged();
	virtual void __fastcall UpdateContents();
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	__property TCustomGrid* Grid = {read=FGrid};
	
public:
	__fastcall virtual TInplaceEdit(System::Classes::TComponent* AOwner);
	void __fastcall Deselect();
	HIDESBASE void __fastcall Hide();
	HIDESBASE void __fastcall Invalidate();
	void __fastcall Move(const System::Types::TRect &Loc);
	bool __fastcall PosEqual(const System::Types::TRect &Rect);
	HIDESBASE void __fastcall SetFocus();
	void __fastcall UpdateLoc(const System::Types::TRect &Loc);
	HIDESBASE bool __fastcall Visible();
public:
	/* TWinControl.CreateParented */ inline __fastcall TInplaceEdit(HWND ParentWindow) : Vcl::Mask::TCustomMaskEdit(ParentWindow) { }
	/* TWinControl.Destroy */ inline __fastcall virtual ~TInplaceEdit() { }
	
};


enum DECLSPEC_DENUM TGridOption : unsigned char { goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goDrawFocusSelected, goRowSizing, goColSizing, goRowMoving, goColMoving, goEditing, goTabs, goRowSelect, goAlwaysShowEditor, goThumbTracking, goFixedColClick, goFixedRowClick, goFixedHotTrack, goFixedColDefAlign, goFixedRowDefAlign };

typedef System::Set<TGridOption, TGridOption::goFixedVertLine, TGridOption::goFixedRowDefAlign> TGridOptions;

enum DECLSPEC_DENUM Vcl_Grids__3 : unsigned char { gdSelected, gdFocused, gdFixed, gdRowSelected, gdHotTrack, gdPressed };

typedef System::Set<Vcl_Grids__3, Vcl_Grids__3::gdSelected, Vcl_Grids__3::gdPressed> TGridDrawState;

enum DECLSPEC_DENUM Vcl_Grids__4 : unsigned char { sdLeft, sdRight, sdUp, sdDown };

typedef System::Set<Vcl_Grids__4, Vcl_Grids__4::sdLeft, Vcl_Grids__4::sdDown> TGridScrollDirection;

struct DECLSPEC_DRECORD TGridCoord
{
public:
	int X;
	int Y;
};


struct DECLSPEC_DRECORD TGridRect
{
	
public:
	union
	{
		struct 
		{
			TGridCoord TopLeft;
			TGridCoord BottomRight;
		};
		struct 
		{
			int Left;
			int Top;
			int Right;
			int Bottom;
		};
		
	};
};


struct DECLSPEC_DRECORD THotTrackCellInfo
{
public:
	bool Pressed;
	System::Uitypes::TMouseButton Button;
	
public:
	union
	{
		struct 
		{
			TGridRect Rect;
		};
		struct 
		{
			TGridCoord Coord _DEPRECATED_ATTRIBUTE1("Use THotTrackCellInfo.Rect field") ;
		};
		
	};
};


enum DECLSPEC_DENUM TEditStyle : unsigned char { esSimple, esEllipsis, esPickList };

typedef void __fastcall (__closure *TSelectCellEvent)(System::TObject* Sender, int ACol, int ARow, bool &CanSelect);

typedef void __fastcall (__closure *TDrawCellEvent)(System::TObject* Sender, int ACol, int ARow, const System::Types::TRect &Rect, TGridDrawState State);

typedef void __fastcall (__closure *TFixedCellClickEvent)(System::TObject* Sender, int ACol, int ARow);

enum DECLSPEC_DENUM TGridDrawingStyle : unsigned char { gdsClassic, gdsThemed, gdsGradient };

class PASCALIMPLEMENTATION TCustomGrid : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
private:
	TGridCoord FAnchor;
	Vcl::Forms::TFormBorderStyle FBorderStyle;
	bool FCanEditModify;
	int FColCount;
	TGridCoord FCurrent;
	int FDefaultColWidth;
	int FDefaultRowHeight;
	TGridDrawingStyle FDrawingStyle;
	int FFixedCols;
	int FFixedRows;
	System::Uitypes::TColor FFixedColor;
	System::Uitypes::TColor FGradientEndColor;
	System::Uitypes::TColor FGradientStartColor;
	int FGridLineWidth;
	TGridOptions FOptions;
	System::Types::TPoint FPanPoint;
	int FRowCount;
	System::Uitypes::TScrollStyle FScrollBars;
	TGridCoord FTopLeft;
	int FSizingIndex;
	int FSizingPos;
	int FSizingOfs;
	int FMoveIndex;
	int FMovePos;
	System::Types::TPoint FHitTest;
	TInplaceEdit* FInplaceEdit;
	int FInplaceCol;
	int FInplaceRow;
	int FColOffset;
	bool FDefaultDrawing;
	bool FEditorMode;
	void *FColWidths;
	void *FRowHeights;
	void *FTabStops;
	void *FColAlignments;
	TFixedCellClickEvent FOnFixedCellClick;
	int FUpdateCount;
	System::Classes::TAlignment FDefaultColAlignment;
	bool FEditorModeBeforeMoving;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
private:
	TGridCoord __fastcall CalcCoordFromPoint(int X, int Y, const TGridDrawInfo &DrawInfo);
	void __fastcall CalcDrawInfoXY(TGridDrawInfo &DrawInfo, int UseWidth, int UseHeight);
	TGridCoord __fastcall CalcMaxTopLeft(const TGridCoord &Coord, const TGridDrawInfo &DrawInfo);
	void __fastcall CancelMode();
	void __fastcall ChangeSize(int NewColCount, int NewRowCount);
	void __fastcall ClampInView(const TGridCoord &Coord);
	void __fastcall DrawSizingLine(const TGridDrawInfo &DrawInfo);
	void __fastcall DrawMove();
	void __fastcall GridRectToScreenRect(const TGridRect &GridRect, System::Types::TRect &ScreenRect, bool IncludeLine);
	void __fastcall Initialize();
	void __fastcall InvalidateRect(const TGridRect &ARect);
	void __fastcall ModifyScrollBar(unsigned ScrollBar, unsigned ScrollCode, unsigned Pos, bool UseRightToLeft);
	void __fastcall MoveAdjust(int &CellPos, int FromIndex, int ToIndex);
	void __fastcall MoveAnchor(const TGridCoord &NewAnchor);
	void __fastcall MoveAndScroll(int Mouse, int CellHit, TGridDrawInfo &DrawInfo, TGridAxisDrawInfo &Axis, int Scrollbar, const System::Types::TPoint &MousePt);
	void __fastcall MoveCurrent(int ACol, int ARow, bool MoveAnchor, bool Show);
	void __fastcall MoveTopLeft(int ALeft, int ATop);
	void __fastcall ResizeCol(int Index, int OldSize, int NewSize);
	void __fastcall ResizeRow(int Index, int OldSize, int NewSize);
	void __fastcall ScrollDataInfo(int DX, int DY, TGridDrawInfo &DrawInfo);
	void __fastcall TopLeftMoved(const TGridCoord &OldTopLeft);
	void __fastcall UpdateScrollPos();
	void __fastcall UpdateScrollRange();
	int __fastcall GetColWidths(int Index);
	int __fastcall GetRowHeights(int Index);
	TGridRect __fastcall GetSelection();
	bool __fastcall GetTabStops(int Index);
	int __fastcall GetVisibleColCount();
	int __fastcall GetVisibleRowCount();
	bool __fastcall IsActiveControl();
	bool __fastcall IsGradientEndColorStored();
	void __fastcall ReadColWidths(System::Classes::TReader* Reader);
	void __fastcall ReadRowHeights(System::Classes::TReader* Reader);
	void __fastcall SetBorderStyle(Vcl::Forms::TBorderStyle Value);
	void __fastcall SetCol(int Value);
	void __fastcall SetColCount(int Value);
	void __fastcall SetColWidths(int Index, int Value);
	void __fastcall SetDefaultColWidth(int Value);
	void __fastcall SetDefaultRowHeight(int Value);
	void __fastcall SetDrawingStyle(const TGridDrawingStyle Value);
	void __fastcall SetEditorMode(bool Value);
	void __fastcall SetFixedColor(System::Uitypes::TColor Value);
	void __fastcall SetFixedCols(int Value);
	void __fastcall SetFixedRows(int Value);
	void __fastcall SetGradientEndColor(System::Uitypes::TColor Value);
	void __fastcall SetGradientStartColor(System::Uitypes::TColor Value);
	void __fastcall SetGridLineWidth(int Value);
	void __fastcall SetLeftCol(int Value);
	void __fastcall SetOptions(TGridOptions Value);
	void __fastcall SetRow(int Value);
	void __fastcall SetRowCount(int Value);
	void __fastcall SetRowHeights(int Index, int Value);
	void __fastcall SetScrollBars(System::Uitypes::TScrollStyle Value);
	void __fastcall SetSelection(const TGridRect &Value);
	void __fastcall SetTabStops(int Index, bool Value);
	void __fastcall SetTopRow(int Value);
	void __fastcall UpdateEdit();
	void __fastcall UpdateText();
	void __fastcall WriteColWidths(System::Classes::TWriter* Writer);
	void __fastcall WriteRowHeights(System::Classes::TWriter* Writer);
	MESSAGE void __fastcall CMCancelMode(Vcl::Controls::TCMCancelMode &Msg);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMCtl3DChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMDesignHitTest(Winapi::Messages::TWMMouse &Msg);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMWantSpecialKey(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall CMShowingChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMChar(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall WMCancelMode(Winapi::Messages::TWMNoParams &Msg);
	HIDESBASE MESSAGE void __fastcall WMCommand(Winapi::Messages::TWMCommand &Message);
	MESSAGE void __fastcall WMGetDlgCode(Winapi::Messages::TWMNoParams &Msg);
	HIDESBASE MESSAGE void __fastcall WMHScroll(Winapi::Messages::TWMScroll &Msg);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TWMKillFocus &Msg);
	HIDESBASE MESSAGE void __fastcall WMLButtonDown(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMNCHitTest(Winapi::Messages::TWMNCHitTest &Msg);
	HIDESBASE MESSAGE void __fastcall WMSetCursor(Winapi::Messages::TWMSetCursor &Msg);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Msg);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Msg);
	MESSAGE void __fastcall WMTimer(Winapi::Messages::TWMTimer &Msg);
	HIDESBASE MESSAGE void __fastcall WMVScroll(Winapi::Messages::TWMScroll &Msg);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Message);
	bool __fastcall GetIsUpdating();
	System::Classes::TAlignment __fastcall GetColAlignments(int Index);
	void __fastcall SetColAlignments(int Index, const System::Classes::TAlignment Value);
	void __fastcall SetDefaultColAlignment(const System::Classes::TAlignment Value);
	void __fastcall ReadColAlignments(System::Classes::TReader* Reader);
	void __fastcall WriteColAlignments(System::Classes::TWriter* Writer);
	System::Classes::TAlignment __fastcall GetCellAlignments(int ACol, int ARow);
	
protected:
	TGridState FGridState;
	bool FSaveCellExtents;
	TGridOptions DesignOptionsBoost;
	bool VirtualView;
	System::Uitypes::TColor FInternalColor;
	TGridDrawingStyle FInternalDrawingStyle;
	THotTrackCellInfo FHotTrackCell;
	virtual bool __fastcall CanObserve(const int ID);
	virtual void __fastcall ObserverAdded(const int ID, const System::Classes::_di_IObserver Observer);
	void __fastcall ObserverToggle(const System::Classes::_di_IObserver AObserver, const bool Value);
	System::TVarRec __fastcall ObserverCurrent();
	void __fastcall CalcDrawInfo(TGridDrawInfo &DrawInfo);
	void __fastcall CalcFixedInfo(TGridDrawInfo &DrawInfo);
	virtual void __fastcall CalcSizingState(int X, int Y, TGridState &State, int &Index, int &SizingPos, int &SizingOfs, TGridDrawInfo &FixedInfo);
	virtual int __fastcall CalcColWidth(const int ATextLength, const System::UnicodeString ACaption, System::TObject* AColumnObj);
	void __fastcall ChangeGridOrientation(bool RightToLeftOrientation);
	virtual TInplaceEdit* __fastcall CreateEditor();
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd();
	virtual void __fastcall DoGesture(const Vcl::Controls::TGestureEventInfo &EventInfo, bool &Handled);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	HIDESBASEDYNAMIC void __fastcall AdjustSize(int Index, int Amount, bool Rows);
	System::Types::TRect __fastcall BoxRect(int ALeft, int ATop, int ARight, int ABottom);
	DYNAMIC void __fastcall DoExit();
	virtual TGridRect __fastcall CalcExpandedCellRect(const TGridCoord &Coord);
	System::Types::TRect __fastcall CellRect(int ACol, int ARow);
	DYNAMIC bool __fastcall CanEditAcceptKey(System::WideChar Key);
	DYNAMIC bool __fastcall CanGridAcceptKey(System::Word Key, System::Classes::TShiftState Shift);
	DYNAMIC bool __fastcall CanEditModify();
	virtual bool __fastcall CanEditShow();
	DYNAMIC void __fastcall ChangeScale(int M, int D, bool isDpiChange)/* overload */;
	DYNAMIC bool __fastcall DoMouseWheelDown(System::Classes::TShiftState Shift, const System::Types::TPoint &MousePos);
	DYNAMIC bool __fastcall DoMouseWheelUp(System::Classes::TShiftState Shift, const System::Types::TPoint &MousePos);
	DYNAMIC void __fastcall FixedCellClick(int ACol, int ARow);
	void __fastcall FocusCell(int ACol, int ARow, bool MoveAnchor);
	DYNAMIC System::UnicodeString __fastcall GetEditText(int ACol, int ARow);
	DYNAMIC void __fastcall SetEditText(int ACol, int ARow, const System::UnicodeString Value);
	DYNAMIC int __fastcall GetEditLimit();
	DYNAMIC System::UnicodeString __fastcall GetEditMask(int ACol, int ARow);
	DYNAMIC TEditStyle __fastcall GetEditStyle(int ACol, int ARow);
	int __fastcall GetGridWidth();
	int __fastcall GetGridHeight();
	void __fastcall HideEdit();
	void __fastcall HideEditor();
	void __fastcall ShowEditor();
	void __fastcall ShowEditorChar(System::WideChar Ch);
	void __fastcall InvalidateEditor();
	void __fastcall InvalidateGrid();
	void __fastcall MoveColumn(int FromIndex, int ToIndex);
	DYNAMIC void __fastcall ColumnMoved(int FromIndex, int ToIndex);
	void __fastcall MoveRow(int FromIndex, int ToIndex);
	DYNAMIC void __fastcall RowMoved(int FromIndex, int ToIndex);
	virtual void __fastcall SelectionMoved(const TGridRect &OldSel);
	virtual void __fastcall DrawCell(int ACol, int ARow, const System::Types::TRect &ARect, TGridDrawState AState) = 0 ;
	virtual void __fastcall DrawCellBackground(const System::Types::TRect &ARect, System::Uitypes::TColor AColor, TGridDrawState AState, int ACol, int ARow);
	virtual void __fastcall DrawCellHighlight(const System::Types::TRect &ARect, TGridDrawState AState, int ACol, int ARow);
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	void __fastcall MoveColRow(int ACol, int ARow, bool MoveAnchor, bool Show);
	virtual bool __fastcall SelectCell(int ACol, int ARow);
	DYNAMIC void __fastcall SizeChanged(int OldColCount, int OldRowCount);
	bool __fastcall Sizing(int X, int Y);
	void __fastcall ScrollData(int DX, int DY);
	virtual void __fastcall SetStyleElements(const Vcl::Controls::TStyleElements Value);
	void __fastcall InvalidateCell(int ACol, int ARow);
	void __fastcall InvalidateCol(int ACol);
	void __fastcall InvalidateRow(int ARow);
	DYNAMIC bool __fastcall IsTouchPropertyStored(Vcl::Controls::TTouchProperty AProperty);
	DYNAMIC void __fastcall TopLeftChanged();
	DYNAMIC void __fastcall TimedScroll(TGridScrollDirection Direction);
	virtual void __fastcall Paint();
	DYNAMIC void __fastcall ColWidthsChanged();
	DYNAMIC void __fastcall RowHeightsChanged();
	virtual void __fastcall DeleteColumn(int ACol);
	virtual void __fastcall DeleteRow(int ARow);
	void __fastcall UpdateDesigner();
	DYNAMIC bool __fastcall BeginColumnDrag(int &Origin, int &Destination, const System::Types::TPoint &MousePt);
	DYNAMIC bool __fastcall BeginRowDrag(int &Origin, int &Destination, const System::Types::TPoint &MousePt);
	DYNAMIC bool __fastcall CheckColumnDrag(int &Origin, int &Destination, const System::Types::TPoint &MousePt);
	DYNAMIC bool __fastcall CheckRowDrag(int &Origin, int &Destination, const System::Types::TPoint &MousePt);
	DYNAMIC bool __fastcall EndColumnDrag(int &Origin, int &Destination, const System::Types::TPoint &MousePt);
	DYNAMIC bool __fastcall EndRowDrag(int &Origin, int &Destination, const System::Types::TPoint &MousePt);
	__property Vcl::Forms::TBorderStyle BorderStyle = {read=FBorderStyle, write=SetBorderStyle, default=1};
	__property int Col = {read=FCurrent.X, write=SetCol, nodefault};
	__property Color = {default=-16777211};
	__property int ColCount = {read=FColCount, write=SetColCount, default=5};
	__property int ColWidths[int Index] = {read=GetColWidths, write=SetColWidths};
	__property System::Classes::TAlignment ColAlignments[int Index] = {read=GetColAlignments, write=SetColAlignments};
	__property System::Classes::TAlignment CellAlignments[int ACol][int ARow] = {read=GetCellAlignments};
	__property int DefaultColWidth = {read=FDefaultColWidth, write=SetDefaultColWidth, default=64};
	__property System::Classes::TAlignment DefaultColAlignment = {read=FDefaultColAlignment, write=SetDefaultColAlignment, default=0};
	__property bool DefaultDrawing = {read=FDefaultDrawing, write=FDefaultDrawing, default=1};
	__property int DefaultRowHeight = {read=FDefaultRowHeight, write=SetDefaultRowHeight, default=24};
	__property TGridDrawingStyle DrawingStyle = {read=FDrawingStyle, write=SetDrawingStyle, default=1};
	__property bool EditorMode = {read=FEditorMode, write=SetEditorMode, nodefault};
	__property System::Uitypes::TColor FixedColor = {read=FFixedColor, write=SetFixedColor, default=-16777201};
	__property int FixedCols = {read=FFixedCols, write=SetFixedCols, default=1};
	__property int FixedRows = {read=FFixedRows, write=SetFixedRows, default=1};
	__property System::Uitypes::TColor GradientEndColor = {read=FGradientEndColor, write=SetGradientEndColor, stored=IsGradientEndColorStored, nodefault};
	__property System::Uitypes::TColor GradientStartColor = {read=FGradientStartColor, write=SetGradientStartColor, default=16777215};
	__property int GridHeight = {read=GetGridHeight, nodefault};
	__property int GridLineWidth = {read=FGridLineWidth, write=SetGridLineWidth, default=1};
	__property int GridWidth = {read=GetGridWidth, nodefault};
	__property System::Types::TPoint HitTest = {read=FHitTest};
	__property TInplaceEdit* InplaceEditor = {read=FInplaceEdit};
	__property int LeftCol = {read=FTopLeft.X, write=SetLeftCol, nodefault};
	__property TGridOptions Options = {read=FOptions, write=SetOptions, default=524319};
	__property ParentColor = {default=0};
	__property int Row = {read=FCurrent.Y, write=SetRow, nodefault};
	__property int RowCount = {read=FRowCount, write=SetRowCount, default=5};
	__property int RowHeights[int Index] = {read=GetRowHeights, write=SetRowHeights};
	__property System::Uitypes::TScrollStyle ScrollBars = {read=FScrollBars, write=SetScrollBars, default=3};
	__property TGridRect Selection = {read=GetSelection, write=SetSelection};
	__property bool TabStops[int Index] = {read=GetTabStops, write=SetTabStops};
	__property int TopRow = {read=FTopLeft.Y, write=SetTopRow, nodefault};
	__property int VisibleColCount = {read=GetVisibleColCount, nodefault};
	__property int VisibleRowCount = {read=GetVisibleRowCount, nodefault};
	__property TFixedCellClickEvent OnFixedCellClick = {read=FOnFixedCellClick, write=FOnFixedCellClick};
	
public:
	__fastcall virtual TCustomGrid(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomGrid();
	TGridCoord __fastcall MouseCoord(int X, int Y);
	void __fastcall BeginUpdate();
	void __fastcall EndUpdate();
	int __fastcall TextWidthToColWidth(const int ATextLength, const System::UnicodeString ACaption, System::TObject* AColumnObj);
	__property bool IsUpdating = {read=GetIsUpdating, nodefault};
	
__published:
	__property TabStop = {default=1};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomGrid(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
	/* Hoisted overloads: */
	
protected:
	DYNAMIC inline void __fastcall  ChangeScale(int M, int D){ Vcl::Controls::TControl::ChangeScale(M, D); }
	
};


typedef void __fastcall (__closure *TGetEditEvent)(System::TObject* Sender, int ACol, int ARow, System::UnicodeString &Value);

typedef void __fastcall (__closure *TSetEditEvent)(System::TObject* Sender, int ACol, int ARow, const System::UnicodeString Value);

typedef void __fastcall (__closure *TMovedEvent)(System::TObject* Sender, int FromIndex, int ToIndex);

class PASCALIMPLEMENTATION TCustomDrawGrid : public TCustomGrid
{
	typedef TCustomGrid inherited;
	
private:
	TMovedEvent FOnColumnMoved;
	TDrawCellEvent FOnDrawCell;
	TGetEditEvent FOnGetEditMask;
	TGetEditEvent FOnGetEditText;
	TMovedEvent FOnRowMoved;
	TSelectCellEvent FOnSelectCell;
	TSetEditEvent FOnSetEditText;
	System::Classes::TNotifyEvent FOnTopLeftChanged;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
protected:
	DYNAMIC void __fastcall ColumnMoved(int FromIndex, int ToIndex);
	virtual void __fastcall DrawCell(int ACol, int ARow, const System::Types::TRect &ARect, TGridDrawState AState);
	DYNAMIC System::UnicodeString __fastcall GetEditMask(int ACol, int ARow);
	DYNAMIC System::UnicodeString __fastcall GetEditText(int ACol, int ARow);
	DYNAMIC void __fastcall RowMoved(int FromIndex, int ToIndex);
	virtual bool __fastcall SelectCell(int ACol, int ARow);
	DYNAMIC void __fastcall SetEditText(int ACol, int ARow, const System::UnicodeString Value);
	DYNAMIC void __fastcall TopLeftChanged();
	__property TMovedEvent OnColumnMoved = {read=FOnColumnMoved, write=FOnColumnMoved};
	__property TDrawCellEvent OnDrawCell = {read=FOnDrawCell, write=FOnDrawCell};
	__property TGetEditEvent OnGetEditMask = {read=FOnGetEditMask, write=FOnGetEditMask};
	__property TGetEditEvent OnGetEditText = {read=FOnGetEditText, write=FOnGetEditText};
	__property TMovedEvent OnRowMoved = {read=FOnRowMoved, write=FOnRowMoved};
	__property TSelectCellEvent OnSelectCell = {read=FOnSelectCell, write=FOnSelectCell};
	__property TSetEditEvent OnSetEditText = {read=FOnSetEditText, write=FOnSetEditText};
	__property System::Classes::TNotifyEvent OnTopLeftChanged = {read=FOnTopLeftChanged, write=FOnTopLeftChanged};
	
public:
	HIDESBASE System::Types::TRect __fastcall CellRect(int ACol, int ARow);
	void __fastcall MouseToCell(int X, int Y, int &ACol, int &ARow);
	__property Canvas;
	__property Col;
	__property ColWidths;
	__property ColAlignments;
	__property CellAlignments;
	__property DrawingStyle = {default=1};
	__property EditorMode;
	__property GridHeight;
	__property GridWidth;
	__property LeftCol;
	__property Selection;
	__property Row;
	__property RowHeights;
	__property TabStops;
	__property TopRow;
public:
	/* TCustomGrid.Create */ inline __fastcall virtual TCustomDrawGrid(System::Classes::TComponent* AOwner) : TCustomGrid(AOwner) { }
	/* TCustomGrid.Destroy */ inline __fastcall virtual ~TCustomDrawGrid() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomDrawGrid(HWND ParentWindow) : TCustomGrid(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TDrawGrid : public TCustomDrawGrid
{
	typedef TCustomDrawGrid inherited;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property BevelEdges = {default=15};
	__property BevelInner = {index=0, default=2};
	__property BevelKind = {default=0};
	__property BevelOuter = {index=1, default=1};
	__property BevelWidth = {default=1};
	__property BiDiMode;
	__property BorderStyle = {default=1};
	__property Color = {default=-16777211};
	__property ColCount = {default=5};
	__property Constraints;
	__property Ctl3D;
	__property DefaultColWidth = {default=64};
	__property DefaultColAlignment = {default=0};
	__property DefaultRowHeight = {default=24};
	__property DefaultDrawing = {default=1};
	__property DoubleBuffered;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property DrawingStyle = {default=1};
	__property Enabled = {default=1};
	__property FixedColor = {default=-16777201};
	__property FixedCols = {default=1};
	__property RowCount = {default=5};
	__property FixedRows = {default=1};
	__property Font;
	__property GradientEndColor;
	__property GradientStartColor = {default=16777215};
	__property GridLineWidth = {default=1};
	__property Options = {default=524319};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentDoubleBuffered = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ScrollBars = {default=3};
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property Touch;
	__property Visible = {default=1};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property VisibleColCount;
	__property VisibleRowCount;
	__property OnClick;
	__property OnColumnMoved;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnDrawCell;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnFixedCellClick;
	__property OnGesture;
	__property OnGetEditMask;
	__property OnGetEditText;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseActivate;
	__property OnMouseDown;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheelDown;
	__property OnMouseWheelUp;
	__property OnRowMoved;
	__property OnSelectCell;
	__property OnSetEditText;
	__property OnStartDock;
	__property OnStartDrag;
	__property OnTopLeftChanged;
public:
	/* TCustomGrid.Create */ inline __fastcall virtual TDrawGrid(System::Classes::TComponent* AOwner) : TCustomDrawGrid(AOwner) { }
	/* TCustomGrid.Destroy */ inline __fastcall virtual ~TDrawGrid() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TDrawGrid(HWND ParentWindow) : TCustomDrawGrid(ParentWindow) { }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TStringGridStrings : public System::Classes::TStrings
{
	typedef System::Classes::TStrings inherited;
	
private:
	TStringGrid* FGrid;
	int FIndex;
	void __fastcall CalcXY(int Index, int &X, int &Y);
	
protected:
	virtual System::UnicodeString __fastcall Get(int Index);
	virtual int __fastcall GetCount();
	virtual System::TObject* __fastcall GetObject(int Index);
	virtual void __fastcall Put(int Index, const System::UnicodeString S);
	virtual void __fastcall PutObject(int Index, System::TObject* AObject);
	virtual void __fastcall SetUpdateState(bool Updating);
	
public:
	__fastcall TStringGridStrings(TStringGrid* AGrid, int AIndex);
	virtual int __fastcall Add(const System::UnicodeString S);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual void __fastcall Clear();
	virtual void __fastcall Delete(int Index);
	virtual void __fastcall Insert(int Index, const System::UnicodeString S);
public:
	/* TStrings.Destroy */ inline __fastcall virtual ~TStringGridStrings() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TStringGrid : public TDrawGrid
{
	typedef TDrawGrid inherited;
	
private:
	bool FUpdating;
	bool FNeedsUpdating;
	int FEditUpdate;
	void *FData;
	void *FRows;
	void *FCols;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
private:
	void __fastcall DisableEditUpdate();
	void __fastcall EnableEditUpdate();
	HIDESBASE void __fastcall Initialize();
	HIDESBASE void __fastcall Update(int ACol, int ARow);
	void __fastcall SetUpdateState(bool Updating);
	System::UnicodeString __fastcall GetCells(int ACol, int ARow);
	System::Classes::TStrings* __fastcall GetCols(int Index);
	System::TObject* __fastcall GetObjects(int ACol, int ARow);
	System::Classes::TStrings* __fastcall GetRows(int Index);
	void __fastcall SetCells(int ACol, int ARow, const System::UnicodeString Value);
	void __fastcall SetCols(int Index, System::Classes::TStrings* Value);
	void __fastcall SetObjects(int ACol, int ARow, System::TObject* Value);
	void __fastcall SetRows(int Index, System::Classes::TStrings* Value);
	TStringGridStrings* __fastcall EnsureColRow(int Index, bool IsCol);
	void * __fastcall EnsureDataRow(int ARow);
	
protected:
	DYNAMIC void __fastcall ColumnMoved(int FromIndex, int ToIndex);
	virtual void __fastcall DrawCell(int ACol, int ARow, const System::Types::TRect &ARect, TGridDrawState AState);
	DYNAMIC System::UnicodeString __fastcall GetEditText(int ACol, int ARow);
	DYNAMIC void __fastcall SetEditText(int ACol, int ARow, const System::UnicodeString Value);
	DYNAMIC void __fastcall RowMoved(int FromIndex, int ToIndex);
	
public:
	__fastcall virtual TStringGrid(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TStringGrid();
	__property System::UnicodeString Cells[int ACol][int ARow] = {read=GetCells, write=SetCells};
	__property System::Classes::TStrings* Cols[int Index] = {read=GetCols, write=SetCols};
	__property System::TObject* Objects[int ACol][int ARow] = {read=GetObjects, write=SetObjects};
	__property System::Classes::TStrings* Rows[int Index] = {read=GetRows, write=SetRows};
public:
	/* TWinControl.CreateParented */ inline __fastcall TStringGrid(HWND ParentWindow) : TDrawGrid(ParentWindow) { }
	
};


typedef void __fastcall (__closure *TOnGetPickListItems)(int ACol, int ARow, System::Classes::TStrings* Items);

class PASCALIMPLEMENTATION TInplaceEditList : public TInplaceEdit
{
	typedef TInplaceEdit inherited;
	
private:
	int FButtonWidth;
	Vcl::Stdctrls::TCustomListBox* FPickList;
	Vcl::Controls::TWinControl* FActiveList;
	TEditStyle FEditStyle;
	int FDropDownRows;
	bool FListVisible;
	bool FTracking;
	bool FPressed;
	bool FPickListLoaded;
	TOnGetPickListItems FOnGetPickListitems;
	System::Classes::TNotifyEvent FOnEditButtonClick;
	bool FMouseInControl;
	Vcl::Stdctrls::TCustomListBox* __fastcall GetPickList();
	MESSAGE void __fastcall CMCancelMode(Vcl::Controls::TCMCancelMode &Message);
	HIDESBASE MESSAGE void __fastcall WMCancelMode(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TWMKillFocus &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonDblClk(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Message);
	HIDESBASE MESSAGE void __fastcall WMSetCursor(Winapi::Messages::TWMSetCursor &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	
protected:
	virtual void __fastcall BoundsChanged();
	System::Types::TRect __fastcall ButtonRect();
	DYNAMIC void __fastcall CloseUp(bool Accept);
	DYNAMIC void __fastcall DblClick();
	virtual void __fastcall DoDropDownKeys(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall DoEditButtonClick();
	DYNAMIC void __fastcall DoGetPickListItems();
	DYNAMIC void __fastcall DropDown();
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall ListMouseUp(System::TObject* Sender, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	bool __fastcall OverButton(const System::Types::TPoint &P);
	virtual void __fastcall PaintWindow(HDC DC);
	void __fastcall StopTracking();
	void __fastcall TrackButton(int X, int Y);
	virtual void __fastcall UpdateContents();
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	DYNAMIC void __fastcall ChangeScale(int M, int D, bool isDpiChange)/* overload */;
	
public:
	__fastcall virtual TInplaceEditList(System::Classes::TComponent* Owner);
	void __fastcall RestoreContents();
	__property Vcl::Controls::TWinControl* ActiveList = {read=FActiveList, write=FActiveList};
	__property int ButtonWidth = {read=FButtonWidth, write=FButtonWidth, nodefault};
	__property int DropDownRows = {read=FDropDownRows, write=FDropDownRows, nodefault};
	__property TEditStyle EditStyle = {read=FEditStyle, nodefault};
	__property bool ListVisible = {read=FListVisible, write=FListVisible, nodefault};
	__property Vcl::Stdctrls::TCustomListBox* PickList = {read=GetPickList};
	__property bool PickListLoaded = {read=FPickListLoaded, write=FPickListLoaded, nodefault};
	__property bool Pressed = {read=FPressed, nodefault};
	__property System::Classes::TNotifyEvent OnEditButtonClick = {read=FOnEditButtonClick, write=FOnEditButtonClick};
	__property TOnGetPickListItems OnGetPickListitems = {read=FOnGetPickListitems, write=FOnGetPickListitems};
public:
	/* TWinControl.CreateParented */ inline __fastcall TInplaceEditList(HWND ParentWindow) : TInplaceEdit(ParentWindow) { }
	/* TWinControl.Destroy */ inline __fastcall virtual ~TInplaceEditList() { }
	
	/* Hoisted overloads: */
	
protected:
	DYNAMIC inline void __fastcall  ChangeScale(int M, int D){ Vcl::Controls::TControl::ChangeScale(M, D); }
	
};


//-- var, const, procedure ---------------------------------------------------
static const int MaxGridSize = int(0x7ffffff);
static const System::Int8 MaxShortInt = System::Int8(127);
static const int MaxCustomExtents = int(0x7ffffff);
extern DELPHI_PACKAGE int __fastcall TCustomGrid_ActualGridLineWidth(TCustomGrid* Self);
}	/* namespace Grids */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_GRIDS)
using namespace Vcl::Grids;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_GridsHPP
