// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.ActnCtrls.pas' rev: 35.00 (Windows)

#ifndef Vcl_ActnctrlsHPP
#define Vcl_ActnctrlsHPP

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
#include <Vcl.ToolWin.hpp>
#include <Vcl.ActnMan.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.ComCtrls.hpp>
#include <System.Contnrs.hpp>
#include <Vcl.GraphUtil.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <System.UITypes.hpp>
#include <System.Types.hpp>
#include <Vcl.Menus.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Actnctrls
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TMenuResizeActionControl;
class DELPHICLASS TCustomButtonControl;
class DELPHICLASS TCustomUtilityButton;
class DELPHICLASS TCustomToolScrollBtn;
class DELPHICLASS TCustomDropDownButton;
class DELPHICLASS TCustomActionCombo;
class DELPHICLASS TCustomComboControl;
class DELPHICLASS TCustomActionDockBar;
class DELPHICLASS TCustomActionToolBar;
class DELPHICLASS TActionToolBar;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TMenuResizeActionControl : public Vcl::Actnman::TCustomActionControl
{
	typedef Vcl::Actnman::TCustomActionControl inherited;
	
public:
	/* TCustomActionControl.Create */ inline __fastcall virtual TMenuResizeActionControl(System::Classes::TComponent* AOwner) : Vcl::Actnman::TCustomActionControl(AOwner) { }
	/* TCustomActionControl.Destroy */ inline __fastcall virtual ~TMenuResizeActionControl() { }
	
};


class PASCALIMPLEMENTATION TCustomButtonControl : public Vcl::Actnman::TCustomActionControl
{
	typedef Vcl::Actnman::TCustomActionControl inherited;
	
private:
	bool FAllowAllUp;
	bool FDown;
	bool FDragging;
	bool FMouseInControl;
	System::Uitypes::TMouseButton FTrackButton;
	void __fastcall SetDown(bool Value);
	void __fastcall SetAllowAllUp(bool Value);
	void __fastcall UpdateTracking();
	void __fastcall SetFlat(const bool Value);
	void __fastcall SetState(const Vcl::Buttons::TButtonState Value);
	
protected:
	bool FFlat;
	Vcl::Buttons::TButtonState FState;
	virtual void __fastcall DrawBackground(System::Types::TRect &PaintRect);
	virtual void __fastcall DrawFrame(const System::Types::TRect &ARect, bool Down);
	virtual bool __fastcall GetShowShortCut();
	virtual void __fastcall Loaded();
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall Paint();
	virtual void __fastcall SetActionClient(Vcl::Actnman::TActionClientItem* Value);
	virtual void __fastcall SetGlyphLayout(const Vcl::Buttons::TButtonLayout Value);
	virtual void __fastcall SetSelected(bool Value);
	HIDESBASE MESSAGE void __fastcall WMLButtonDblClk(Winapi::Messages::TWMMouse &Message);
	MESSAGE void __fastcall CMDialogChar(Winapi::Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMTextChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	virtual void __fastcall DrawLargeGlyph(const System::Types::TPoint &Location);
	__property bool MouseInControl = {read=FMouseInControl, nodefault};
	
public:
	__fastcall virtual TCustomButtonControl(System::Classes::TComponent* AOwner);
	virtual void __fastcall CalcBounds();
	DYNAMIC void __fastcall Click();
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	__property bool AllowAllUp = {read=FAllowAllUp, write=SetAllowAllUp, nodefault};
	__property Caption = {default=0};
	__property bool Down = {read=FDown, write=SetDown, nodefault};
	__property bool Flat = {read=FFlat, write=SetFlat, nodefault};
	__property ShowCaption;
	__property ShowShortCut;
	__property Vcl::Buttons::TButtonState State = {read=FState, write=SetState, nodefault};
	__property System::Uitypes::TMouseButton TrackButton = {read=FTrackButton, write=FTrackButton, nodefault};
public:
	/* TCustomActionControl.Destroy */ inline __fastcall virtual ~TCustomButtonControl() { }
	
};


class PASCALIMPLEMENTATION TCustomUtilityButton : public TCustomButtonControl
{
	typedef TCustomButtonControl inherited;
	
private:
	int FArrowSize;
	Vcl::Graphutil::TScrollDirection FDirection;
	Vcl::Extctrls::TTimer* FScrollTimer;
	System::Classes::TNotifyEvent FOnClick;
	int FRepeatRate;
	bool FAutoScroll;
	Vcl::Graphutil::TArrowType FArrowType;
	void __fastcall SetArrowSize(const int Value);
	void __fastcall SetArrowType(const Vcl::Graphutil::TArrowType Value);
	void __fastcall SetDirection(const Vcl::Graphutil::TScrollDirection Value);
	
protected:
	virtual void __fastcall DrawArrows();
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall OnDelay(System::TObject* Sender);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	virtual void __fastcall Paint();
	
public:
	__fastcall virtual TCustomUtilityButton(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomUtilityButton();
	DYNAMIC void __fastcall Click();
	__property bool AutoScroll = {read=FAutoScroll, write=FAutoScroll, nodefault};
	__property int ArrowSize = {read=FArrowSize, write=SetArrowSize, nodefault};
	__property Vcl::Graphutil::TArrowType ArrowType = {read=FArrowType, write=SetArrowType, nodefault};
	__property Color = {default=-16777211};
	__property Vcl::Graphutil::TScrollDirection Direction = {read=FDirection, write=SetDirection, nodefault};
	__property int RepeatRate = {read=FRepeatRate, write=FRepeatRate, nodefault};
	__property System::Classes::TNotifyEvent OnClick = {read=FOnClick, write=FOnClick};
};


class PASCALIMPLEMENTATION TCustomToolScrollBtn : public TCustomUtilityButton
{
	typedef TCustomUtilityButton inherited;
	
protected:
	virtual void __fastcall DrawArrows();
	
public:
	__fastcall virtual TCustomToolScrollBtn(System::Classes::TComponent* AOwner);
	virtual void __fastcall CalcBounds();
public:
	/* TCustomUtilityButton.Destroy */ inline __fastcall virtual ~TCustomToolScrollBtn() { }
	
};


class PASCALIMPLEMENTATION TCustomDropDownButton : public TCustomButtonControl
{
	typedef TCustomButtonControl inherited;
	
private:
	bool FDroppedDown;
	HIDESBASE MESSAGE void __fastcall CMMouseleave(Winapi::Messages::TMessage &Message);
	
protected:
	virtual void __fastcall DrawDropDownArrow();
	virtual void __fastcall DrawFrame(const System::Types::TRect &ARect, bool Down);
	virtual int __fastcall GetDropDownButtonWidth();
	virtual Vcl::Actnman::TCustomActionBarClass __fastcall GetPopupClass();
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual bool __fastcall MouseOverDropDown();
	virtual void __fastcall Paint();
	__property bool DroppedDown = {read=FDroppedDown, nodefault};
	
public:
	virtual void __fastcall CalcBounds();
	DYNAMIC void __fastcall Click();
	virtual void __fastcall DropDownClick();
public:
	/* TCustomButtonControl.Create */ inline __fastcall virtual TCustomDropDownButton(System::Classes::TComponent* AOwner) : TCustomButtonControl(AOwner) { }
	
public:
	/* TCustomActionControl.Destroy */ inline __fastcall virtual ~TCustomDropDownButton() { }
	
};


class PASCALIMPLEMENTATION TCustomActionCombo : public Vcl::Comctrls::TCustomComboBoxEx
{
	typedef Vcl::Comctrls::TCustomComboBoxEx inherited;
	
private:
	TCustomComboControl* FComboControl;
	
protected:
	DYNAMIC void __fastcall BeginAutoDrag();
	DYNAMIC void __fastcall DragOver(System::TObject* Source, int X, int Y, System::Uitypes::TDragState State, bool &Accept);
	virtual void __fastcall ComboWndProc(Winapi::Messages::TMessage &Message, HWND ComboWnd, void * ComboProc);
	__property DragMode = {default=0};
	__property OnClick;
	
public:
	DYNAMIC bool __fastcall DesignWndProc(Winapi::Messages::TMessage &Message);
	DYNAMIC void __fastcall DragDrop(System::TObject* Source, int X, int Y);
public:
	/* TCustomComboBoxEx.Create */ inline __fastcall virtual TCustomActionCombo(System::Classes::TComponent* AOwner) : Vcl::Comctrls::TCustomComboBoxEx(AOwner) { }
	/* TCustomComboBoxEx.Destroy */ inline __fastcall virtual ~TCustomActionCombo() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomActionCombo(HWND ParentWindow) : Vcl::Comctrls::TCustomComboBoxEx(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TCustomComboControl : public Vcl::Actnman::TCustomActionControl
{
	typedef Vcl::Actnman::TCustomActionControl inherited;
	
private:
	TCustomActionCombo* FComboBox;
	
protected:
	void __fastcall ComboClick(System::TObject* Sender);
	virtual void __fastcall SetParent(Vcl::Controls::TWinControl* AParent);
	virtual void __fastcall SetActionClient(Vcl::Actnman::TActionClientItem* Value);
	virtual void __fastcall SetDragMode(System::Uitypes::TDragMode Value);
	DYNAMIC void __fastcall VisibleChanging();
	HIDESBASE MESSAGE void __fastcall CMVisiblechanged(Winapi::Messages::TMessage &Message);
	virtual void __fastcall Paint();
	
public:
	__fastcall virtual TCustomComboControl(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomComboControl();
	virtual void __fastcall CalcBounds();
	DYNAMIC void __fastcall Click();
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	__property TCustomActionCombo* ComboBox = {read=FComboBox};
};


class PASCALIMPLEMENTATION TCustomActionDockBar : public Vcl::Actnman::TCustomActionBar
{
	typedef Vcl::Actnman::TCustomActionBar inherited;
	
	
private:
	typedef System::DynamicArray<int> _TCustomActionDockBar__1;
	
	
private:
	bool FAllowScrolling;
	Vcl::Controls::TDragDockObject* FDragObject;
	bool FLastItemVisible;
	int FScrollingRate;
	int FVisibleIndex;
	bool __fastcall ScrollButtonsVisible();
	void __fastcall ScrollDownClickHandler(System::TObject* Sender);
	void __fastcall ScrollUpClickHandler(System::TObject* Sender);
	void __fastcall SetAllowScrolling(const bool Value);
	void __fastcall SetVisibleIndex(const int Value);
	
protected:
	_TCustomActionDockBar__1 FControlHeightIndexes;
	TCustomToolScrollBtn* FScrollDown;
	TCustomToolScrollBtn* FScrollUp;
	virtual void __fastcall CustomAlignPosition(Vcl::Controls::TControl* Control, int &NewLeft, int &NewTop, int &NewWidth, int &NewHeight, System::Types::TRect &AlignRect, const Vcl::Controls::TAlignInfo &AlignInfo);
	virtual void __fastcall CreateControls();
	virtual void __fastcall CreateScrollButtons();
	DYNAMIC void __fastcall DoEndDock(System::TObject* Target, int X, int Y);
	DYNAMIC void __fastcall DoStartDock(Vcl::Controls::TDragObject* &DragObject);
	virtual void __fastcall DoScrollDown();
	virtual void __fastcall DoScrollUp();
	virtual void __fastcall GenerateControlHeightLookup();
	virtual Vcl::Controls::TWinControlClass __fastcall GetFloatingDockSiteClass();
	DYNAMIC void __fastcall GetSiteInfo(Vcl::Controls::TControl* Client, System::Types::TRect &InfluenceRect, const System::Types::TPoint &MousePos, bool &CanDock);
	virtual void __fastcall Loaded();
	void __fastcall MakeLastItemVisible();
	DYNAMIC void __fastcall Resize();
	virtual void __fastcall SetOrientation(const Vcl::Actnman::TBarOrientation Value);
	virtual void __fastcall SetupScrolling(const bool Allowed);
	virtual void __fastcall ShowScrollButtons();
	__property bool AllowScrolling = {read=FAllowScrolling, write=SetAllowScrolling, default=0};
	__property int ScrollingRate = {read=FScrollingRate, write=FScrollingRate, default=125};
	__property int VisibleIndex = {read=FVisibleIndex, write=SetVisibleIndex, nodefault};
	
public:
	__fastcall virtual TCustomActionDockBar(System::Classes::TComponent* AOwner);
	virtual int __fastcall CalcDockedWidth();
	DYNAMIC void __fastcall Dock(Vcl::Controls::TWinControl* NewDockSite, const System::Types::TRect &ARect);
public:
	/* TCustomActionBar.Destroy */ inline __fastcall virtual ~TCustomActionDockBar() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomActionDockBar(HWND ParentWindow) : Vcl::Actnman::TCustomActionBar(ParentWindow) { }
	
};


#ifndef _WIN64
typedef System::TMetaClass* TCustomToolScrollBtnClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TCustomToolScrollBtnClass);
#endif /* _WIN64 */

class PASCALIMPLEMENTATION TCustomActionToolBar : public TCustomActionDockBar
{
	typedef TCustomActionDockBar inherited;
	
private:
	int FHideLevel;
	System::Uitypes::TColor FShadowClr;
	System::Uitypes::TColor FHighlightClr;
	int __fastcall GetHiddenCount();
	void __fastcall ScrollBtnClick(System::TObject* Sender);
	
protected:
	System::Contnrs::TStack* FHiddenItems;
	Vcl::Actnman::TCustomActionBar* FPopupBar;
	TCustomToolScrollBtn* FScrollBtn;
	virtual void __fastcall AutoSizingChanged();
	int __fastcall CalcButtonWidth();
	virtual void __fastcall CreateControls();
	void __fastcall DisableHiding();
	virtual void __fastcall DrawBackground();
	virtual void __fastcall DrawSeparator(const int Pos, const int Offset);
	void __fastcall EnableHiding();
	virtual Vcl::Actnman::TCustomActionControlClass __fastcall GetControlClass(Vcl::Actnman::TActionClientItem* AnItem);
	virtual TCustomToolScrollBtnClass __fastcall GetScrollBtnClass();
	virtual Vcl::Actnman::TCustomActionBarClass __fastcall GetPopupClass();
	void __fastcall HideUnusedItems();
	virtual void __fastcall Reset();
	virtual void __fastcall DoScrollBtnClick();
	virtual void __fastcall SetOrientation(const Vcl::Actnman::TBarOrientation Value);
	virtual void __fastcall SetupDropDownBtn();
	HIDESBASE MESSAGE void __fastcall CMColorchanged(Winapi::Messages::TMessage &Message);
	
public:
	__fastcall virtual TCustomActionToolBar(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomActionToolBar();
	virtual int __fastcall CalcDockedWidth();
	virtual Vcl::Actnman::TCustomActionControl* __fastcall CreateControl(Vcl::Actnman::TActionClientItem* AnItem);
	virtual void __fastcall DoDropCategory(Vcl::Actnman::TCategoryDragObject* Source, const int X, const int Y);
	DYNAMIC void __fastcall DragDrop(System::TObject* Source, int X, int Y);
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	__property int HiddenCount = {read=GetHiddenCount, nodefault};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomActionToolBar(HWND ParentWindow) : TCustomActionDockBar(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TActionToolBar : public TCustomActionToolBar
{
	typedef TCustomActionToolBar inherited;
	
public:
	__property Canvas;
	
__published:
	__property ActionManager;
	__property Align = {default=1};
	__property AllowHiding = {default=1};
	__property Anchors = {default=3};
	__property BiDiMode;
	__property Caption = {default=0};
	__property Color = {default=-16777201};
	__property ColorMap;
	__property Constraints;
	__property Cursor = {default=0};
	__property DragCursor = {default=-12};
	__property DragKind = {default=1};
	__property DragMode = {default=0};
	__property EdgeBorders = {default=0};
	__property EdgeInner = {default=1};
	__property EdgeOuter = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property HorzMargin = {default=1};
	__property HorzSeparator = {default=1};
	__property Orientation = {default=0};
	__property ParentBiDiMode = {default=1};
	__property ParentBackground = {default=0};
	__property ParentColor = {default=0};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PersistentHotKeys = {default=0};
	__property PopupMenu;
	__property ShowHint;
	__property Spacing;
	__property StyleName = {default=0};
	__property Touch;
	__property VertMargin = {default=1};
	__property Visible = {default=1};
	__property OnAlignInsertBefore;
	__property OnAlignPosition;
	__property OnControlCreated;
	__property OnCanResize;
	__property OnClick;
	__property OnConstrainedResize;
	__property OnContextPopup;
	__property OnDockDrop;
	__property OnDockOver;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnGesture;
	__property OnGetControlClass;
	__property OnGetSiteInfo;
	__property OnMouseActivate;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnPaint;
	__property OnResize;
	__property OnStartDock;
	__property OnStartDrag;
	__property OnUnDock;
public:
	/* TCustomActionToolBar.Create */ inline __fastcall virtual TActionToolBar(System::Classes::TComponent* AOwner) : TCustomActionToolBar(AOwner) { }
	/* TCustomActionToolBar.Destroy */ inline __fastcall virtual ~TActionToolBar() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TActionToolBar(HWND ParentWindow) : TCustomActionToolBar(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const int cAlignOffScreen = int(-99999);
}	/* namespace Actnctrls */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_ACTNCTRLS)
using namespace Vcl::Actnctrls;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_ActnctrlsHPP
