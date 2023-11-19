// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.ControlList.pas' rev: 35.00 (Windows)

#ifndef Vcl_ControllistHPP
#define Vcl_ControllistHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.Types.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <System.Math.hpp>
#include <Vcl.Themes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ActnList.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Menus.hpp>
#include <System.Actions.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Controllist
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TControlListItemPanel;
class DELPHICLASS TControlListItemSelectionOptions;
class DELPHICLASS TCustomControlList;
class DELPHICLASS TControlList;
struct TCustomControlListHelper /* Helper for class 'TCustomControlList*' */;
class DELPHICLASS TControlListControl;
class DELPHICLASS TControlListButton;
class DELPHICLASS TControlListButtonActionLink;
class DELPHICLASS EControlListException;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TControlListItemPanel : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
private:
	TCustomControlList* FControlList;
	int FItemIndex;
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Message);
	HIDESBASE MESSAGE void __fastcall WMNCHitTest(Winapi::Messages::TWMNCHitTest &Message);
	HIDESBASE MESSAGE void __fastcall CMControlListChange(Vcl::Controls::TCMControlListChange &Msg);
	
protected:
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall Paint();
	
public:
	__fastcall TControlListItemPanel(TCustomControlList* AControlList);
	__property int ItemIndex = {read=FItemIndex, write=FItemIndex, nodefault};
public:
	/* TCustomControl.Create */ inline __fastcall virtual TControlListItemPanel(System::Classes::TComponent* AOwner) : Vcl::Controls::TCustomControl(AOwner) { }
	/* TCustomControl.Destroy */ inline __fastcall virtual ~TControlListItemPanel() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TControlListItemPanel(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
};


typedef void __fastcall (__closure *TControlListDrawItemEvent)(int AIndex, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, Winapi::Windows::TOwnerDrawState AState);

typedef void __fastcall (__closure *TControlListDrawItemsEvent)(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect);

typedef void __fastcall (__closure *TControlListEnableItemEvent)(const int AIndex, bool &AEnabled);

typedef void __fastcall (__closure *TControlListEnableControlEvent)(const int AIndex, Vcl::Controls::TControl* AControl, bool &AEnabled);

typedef void __fastcall (__closure *TControlListShowControlEvent)(const int AIndex, Vcl::Controls::TControl* AControl, bool &AVisible);

enum DECLSPEC_DENUM TControlListColumnLayout : unsigned char { cltSingle, cltMultiTopToBottom, cltMultiLeftToRight };

class PASCALIMPLEMENTATION TControlListItemSelectionOptions : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	System::Uitypes::TColor FHotColor;
	System::Uitypes::TColor FSelectedColor;
	System::Uitypes::TColor FFocusedColor;
	System::Byte FHotColorAlpha;
	System::Byte FSelectedColorAlpha;
	System::Byte FFocusedColorAlpha;
	System::Uitypes::TColor FHotFontColor;
	System::Uitypes::TColor FSelectedFontColor;
	System::Uitypes::TColor FFocusedFontColor;
	bool FUseFontColorForLabels;
	System::Classes::TNotifyEvent FOnChange;
	void __fastcall SetUseFontColorForLabels(bool Value);
	void __fastcall SetHotColor(System::Uitypes::TColor Value);
	void __fastcall SetFocusedColor(System::Uitypes::TColor Value);
	void __fastcall SetSelectedColor(System::Uitypes::TColor Value);
	void __fastcall SetHotColorAlpha(System::Byte Value);
	void __fastcall SetSelectedColorAlpha(System::Byte Value);
	void __fastcall SetFocusedColorAlpha(System::Byte Value);
	void __fastcall SetHotFontColor(System::Uitypes::TColor Value);
	void __fastcall SetFocusedFontColor(System::Uitypes::TColor Value);
	void __fastcall SetSelectedFontColor(System::Uitypes::TColor Value);
	
protected:
	void __fastcall DoChange();
	
public:
	__fastcall virtual TControlListItemSelectionOptions();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	
__published:
	__property System::Uitypes::TColor HotColor = {read=FHotColor, write=SetHotColor, default=-16777203};
	__property System::Byte HotColorAlpha = {read=FHotColorAlpha, write=SetHotColorAlpha, default=80};
	__property System::Uitypes::TColor SelectedColor = {read=FSelectedColor, write=SetSelectedColor, default=-16777203};
	__property System::Byte SelectedColorAlpha = {read=FSelectedColorAlpha, write=SetSelectedColorAlpha, default=130};
	__property System::Uitypes::TColor FocusedColor = {read=FFocusedColor, write=SetFocusedColor, default=-16777203};
	__property System::Byte FocusedColorAlpha = {read=FFocusedColorAlpha, write=SetFocusedColorAlpha, default=150};
	__property System::Uitypes::TColor HotFontColor = {read=FHotFontColor, write=SetHotFontColor, default=-16777208};
	__property System::Uitypes::TColor SelectedFontColor = {read=FSelectedFontColor, write=SetSelectedFontColor, default=-16777208};
	__property System::Uitypes::TColor FocusedFontColor = {read=FFocusedFontColor, write=SetFocusedFontColor, default=-16777208};
	__property bool UseFontColorForLabels = {read=FUseFontColorForLabels, write=SetUseFontColorForLabels, default=0};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TControlListItemSelectionOptions() { }
	
};


class PASCALIMPLEMENTATION TCustomControlList : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
private:
	Vcl::Forms::TFormBorderStyle FBorderStyle;
	int FItemCount;
	int FItemWidth;
	int FItemHeight;
	int FItemIndex;
	TControlListItemPanel* FItemPanel;
	TControlListColumnLayout FColumnLayout;
	int FOldWidth;
	int FOldHeight;
	int FHotItemIndex;
	int FItemDownIndex;
	bool FClicksDisabled;
	Vcl::Controls::TMargins* FItemMargins;
	System::Uitypes::TColor FItemColor;
	bool FStopScroll;
	int FUpdatingItemIndex;
	int FScrollPos;
	bool FDrawingList;
	bool FNeedUpdateItem;
	bool FCheckingControlStates;
	Vcl::Controls::TControl* FActiveControl;
	TControlListItemSelectionOptions* FItemSelectionOptions;
	bool FMarkDisabledItem;
	System::Classes::TNotifyEvent FOnChange;
	System::Classes::TNotifyEvent FOnItemClick;
	System::Classes::TNotifyEvent FOnItemDblClick;
	TControlListDrawItemEvent FOnBeforeDrawItem;
	TControlListDrawItemEvent FOnAfterDrawItem;
	TControlListDrawItemsEvent FOnBeforeDrawItems;
	TControlListDrawItemsEvent FOnAfterDrawItems;
	TControlListEnableItemEvent FOnEnableItem;
	TControlListEnableControlEvent FOnEnableControl;
	TControlListShowControlEvent FOnShowControl;
	bool FItemIndexChanged;
	bool FItemDblClick;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
private:
	void __fastcall SetMarkDisabledItem(bool Value);
	void __fastcall SetItemColor(System::Uitypes::TColor Value);
	void __fastcall SetItemMargins(Vcl::Controls::TMargins* const Value);
	void __fastcall SetColumnLayout(TControlListColumnLayout Value);
	void __fastcall SetBorderStyle(Vcl::Forms::TBorderStyle Value);
	void __fastcall SetItemCount(int Value);
	void __fastcall SetItemWidth(int Value);
	void __fastcall SetItemHeight(int Value);
	void __fastcall SetItemIndex(int Value);
	void __fastcall DoItemMarginChange(System::TObject* Sender);
	void __fastcall DoItemSelectionOptionsChange(System::TObject* Sender);
	void __fastcall CheckItemPanelSize();
	void __fastcall UpdateList();
	int __fastcall GetItemWidth(bool AWithMargins);
	int __fastcall GetItemHeight(bool AWithMargins);
	System::Types::TRect __fastcall GetItemRect(int AIndex, bool AWithMargins)/* overload */;
	int __fastcall GetItemsPerPage();
	int __fastcall GetScrollItemsPerPage();
	int __fastcall GetVisibleColumns();
	int __fastcall GetVisibleRows();
	int __fastcall GetRows();
	int __fastcall GetCols();
	TControlListColumnLayout __fastcall GetInternalColumnLayout();
	int __fastcall GetFirstDrawItemIndex();
	int __fastcall GetLastDrawItemIndex();
	void __fastcall ScrollToItem(int AIndex, bool ASelect, bool AUpdate);
	void __fastcall FindFirstItem();
	void __fastcall FindLastItem();
	void __fastcall FindLeftItem();
	void __fastcall FindRightItem();
	void __fastcall FindUpItem();
	void __fastcall FindDownItem();
	void __fastcall FindPageUpItem();
	void __fastcall FindPageDownItem();
	void __fastcall FindNextEnabledItem(int AIndex);
	void __fastcall FindPriorEnabledItem(int AIndex);
	void __fastcall CheckHotItem();
	void __fastcall CheckEnabledControls(int AIndex);
	void __fastcall CheckVisibleControls(int AIndex);
	
protected:
	Vcl::Controls::TControl* __fastcall ItemControlAtPos(int AIndex, int AX, int AY);
	int __fastcall ItemAtPos(int AX, int AY, System::Types::TRect &ARect);
	virtual bool __fastcall CanObserve(const int ID);
	virtual void __fastcall DoChange();
	virtual void __fastcall DoItemClicked();
	virtual void __fastcall DoAfterDrawItems(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect);
	virtual void __fastcall DoBeforeDrawItems(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect);
	virtual void __fastcall DoAfterDrawItem(int AIndex, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, Winapi::Windows::TOwnerDrawState AState);
	virtual void __fastcall DoBeforeDrawItem(int AIndex, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, Winapi::Windows::TOwnerDrawState AState);
	Winapi::Windows::TOwnerDrawState __fastcall GetItemState(int AIndex);
	void __fastcall UpdateHScrollBar();
	void __fastcall UpdateVScrollBar();
	void __fastcall UpdateScrollBar();
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall DrawList(Vcl::Graphics::TCanvas* ACanvas);
	virtual void __fastcall Loaded();
	virtual int __fastcall GetItemCount();
	DYNAMIC System::Classes::TComponent* __fastcall GetChildParent();
	void __fastcall DrawItem(Vcl::Graphics::TCanvas* ACanvas, int AX, int AY, int AIndex);
	DYNAMIC void __fastcall ChangeScale(int M, int D, bool isDpiChange)/* overload */;
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Message);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Msg);
	HIDESBASE MESSAGE void __fastcall WMHScroll(Winapi::Messages::TWMScroll &Message);
	HIDESBASE MESSAGE void __fastcall WMVScroll(Winapi::Messages::TWMScroll &Message);
	HIDESBASE MESSAGE void __fastcall WMMouseWheel(Winapi::Messages::TWMMouseWheel &Message);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Message);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TWMKillFocus &Message);
	MESSAGE void __fastcall WMGetDlgCode(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMCtl3DChanged(Winapi::Messages::TMessage &Message);
	__property TControlListItemPanel* ItemPanel = {read=FItemPanel};
	__property TControlListColumnLayout InternalColumnLayout = {read=GetInternalColumnLayout, nodefault};
	__property int FirstDrawItemIndex = {read=GetFirstDrawItemIndex, nodefault};
	__property int LastDrawItemIndex = {read=GetLastDrawItemIndex, nodefault};
	
public:
	__fastcall virtual TCustomControlList(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomControlList();
	virtual void __fastcall Invalidate();
	virtual void __fastcall Paint();
	void __fastcall AddControlToItem(Vcl::Controls::TControl* AControl, bool AUpdate = false);
	System::Types::TRect __fastcall GetItemRect(int AIndex)/* overload */;
	DYNAMIC void __fastcall GetChildren(System::Classes::TGetChildProc Proc, System::Classes::TComponent* Root);
	virtual bool __fastcall IsItemEnabled(const int AIndex);
	virtual bool __fastcall IsControlVisible(const int AIndex, Vcl::Controls::TControl* AControl);
	virtual bool __fastcall IsControlEnabled(const int AIndex, Vcl::Controls::TControl* AControl);
	virtual void __fastcall UpdateItem(const int AIndex);
	__property Vcl::Forms::TBorderStyle BorderStyle = {read=FBorderStyle, write=SetBorderStyle, default=1};
	__property Color = {default=-16777211};
	__property int ItemCount = {read=GetItemCount, write=SetItemCount, default=0};
	__property System::Uitypes::TColor ItemColor = {read=FItemColor, write=SetItemColor, default=536870911};
	__property int ItemIndex = {read=FItemIndex, write=SetItemIndex, default=-1};
	__property int ItemWidth = {read=FItemWidth, write=SetItemWidth, default=0};
	__property int ItemHeight = {read=FItemHeight, write=SetItemHeight, default=70};
	__property Vcl::Controls::TMargins* ItemMargins = {read=FItemMargins, write=SetItemMargins};
	__property TControlListColumnLayout ColumnLayout = {read=FColumnLayout, write=SetColumnLayout, default=0};
	__property TControlListItemSelectionOptions* ItemSelectionOptions = {read=FItemSelectionOptions, write=FItemSelectionOptions};
	__property int HotItemIndex = {read=FHotItemIndex, nodefault};
	__property bool MarkDisabledItem = {read=FMarkDisabledItem, write=SetMarkDisabledItem, default=1};
	__property TControlListDrawItemEvent OnBeforeDrawItem = {read=FOnBeforeDrawItem, write=FOnBeforeDrawItem};
	__property TControlListDrawItemEvent OnAfterDrawItem = {read=FOnAfterDrawItem, write=FOnAfterDrawItem};
	__property TControlListDrawItemsEvent OnBeforeDrawItems = {read=FOnBeforeDrawItems, write=FOnBeforeDrawItems};
	__property TControlListDrawItemsEvent OnAfterDrawItems = {read=FOnAfterDrawItems, write=FOnAfterDrawItems};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property System::Classes::TNotifyEvent OnItemClick = {read=FOnItemClick, write=FOnItemClick};
	__property System::Classes::TNotifyEvent OnItemDblClick = {read=FOnItemDblClick, write=FOnItemDblClick};
	__property TControlListEnableItemEvent OnEnableItem = {read=FOnEnableItem, write=FOnEnableItem};
	__property TControlListEnableControlEvent OnEnableControl = {read=FOnEnableControl, write=FOnEnableControl};
	__property TControlListShowControlEvent OnShowControl = {read=FOnShowControl, write=FOnShowControl};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomControlList(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
	/* Hoisted overloads: */
	
protected:
	DYNAMIC inline void __fastcall  ChangeScale(int M, int D){ Vcl::Controls::TControl::ChangeScale(M, D); }
	
};


class PASCALIMPLEMENTATION TControlList : public TCustomControlList
{
	typedef TCustomControlList inherited;
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property BiDiMode;
	__property BorderStyle = {default=1};
	__property Color = {default=-16777211};
	__property Constraints;
	__property Ctl3D;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property ItemCount = {default=0};
	__property ItemColor = {default=536870911};
	__property ItemWidth = {default=0};
	__property ItemHeight = {default=70};
	__property ItemIndex = {default=-1};
	__property ItemMargins;
	__property ColumnLayout = {default=0};
	__property ItemSelectionOptions;
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=1};
	__property ParentCtl3D = {default=1};
	__property ParentDoubleBuffered = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property MarkDisabledItem = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Touch;
	__property Visible = {default=1};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property OnAfterDrawItem;
	__property OnBeforeDrawItem;
	__property OnAfterDrawItems;
	__property OnBeforeDrawItems;
	__property OnClick;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEnableControl;
	__property OnShowControl;
	__property OnEnableItem;
	__property OnEndDock;
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
	__property OnMouseWheelDown;
	__property OnMouseWheelUp;
	__property OnStartDock;
	__property OnStartDrag;
	__property OnItemClick;
	__property OnItemDblClick;
public:
	/* TCustomControlList.Create */ inline __fastcall virtual TControlList(System::Classes::TComponent* AOwner) : TCustomControlList(AOwner) { }
	/* TCustomControlList.Destroy */ inline __fastcall virtual ~TControlList() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TControlList(HWND ParentWindow) : TCustomControlList(ParentWindow) { }
	
};


enum DECLSPEC_DENUM TControlListControlState : unsigned char { clstNormal, clstHot, clstPressed, clstDisabled };

class PASCALIMPLEMENTATION TControlListControl : public Vcl::Controls::TGraphicControl
{
	typedef Vcl::Controls::TGraphicControl inherited;
	
private:
	TCustomControlList* __fastcall GetControlList();
	
protected:
	bool FMouseInControl;
	bool FMouseDown;
	virtual TControlListControlState __fastcall GetState();
	virtual void __fastcall MouseEnter();
	virtual void __fastcall MouseLeave();
	__property TCustomControlList* ControlList = {read=GetControlList};
	__property TControlListControlState State = {read=GetState, nodefault};
	
public:
	__fastcall virtual TControlListControl(System::Classes::TComponent* AOwner);
	virtual void __fastcall Invalidate();
	virtual void __fastcall InvalidateWithItem();
public:
	/* TGraphicControl.Destroy */ inline __fastcall virtual ~TControlListControl() { }
	
};


enum DECLSPEC_DENUM TControlListButtonStyle : unsigned char { clbkPushButton, clbkToolButton, clbkLink };

class PASCALIMPLEMENTATION TControlListButton : public TControlListControl
{
	typedef TControlListControl inherited;
	
private:
	Vcl::Imglist::TCustomImageList* FImages;
	System::Uitypes::TImageIndex FImageIndex;
	System::Uitypes::TImageIndex FDisabledImageIndex;
	System::Uitypes::TImageIndex FHotImageIndex;
	System::Uitypes::TImageIndex FPressedImageIndex;
	System::Uitypes::TImageName FImageName;
	System::Uitypes::TImageName FDisabledImageName;
	System::Uitypes::TImageName FHotImageName;
	System::Uitypes::TImageName FPressedImageName;
	Vcl::Imglist::TChangeLink* FImageChangeLink;
	Vcl::Buttons::TButtonLayout FLayout;
	int FSpacing;
	int FMargin;
	TControlListButtonStyle FStyle;
	System::Uitypes::TColor FLinkHotColor;
	bool FWordWrap;
	void __fastcall SetWordWrap(bool Value);
	void __fastcall SetStyle(TControlListButtonStyle Value);
	void __fastcall SetLayout(Vcl::Buttons::TButtonLayout Value);
	void __fastcall SetSpacing(int Value);
	void __fastcall SetMargin(int Value);
	void __fastcall ImageListChange(System::TObject* Sender);
	void __fastcall SetImages(Vcl::Imglist::TCustomImageList* Value);
	void __fastcall SetImageIndex(System::Uitypes::TImageIndex Value);
	void __fastcall SetHotImageIndex(System::Uitypes::TImageIndex Value);
	void __fastcall SetPressedImageIndex(System::Uitypes::TImageIndex Value);
	void __fastcall SetDisabledImageIndex(System::Uitypes::TImageIndex Value);
	void __fastcall SetImageName(const System::Uitypes::TImageName Value);
	void __fastcall SetHotImageName(const System::Uitypes::TImageName Value);
	void __fastcall SetDisabledImageName(const System::Uitypes::TImageName Value);
	void __fastcall SetPressedImageName(const System::Uitypes::TImageName Value);
	bool __fastcall IsImageIndexStored();
	bool __fastcall IsImageNameStored();
	void __fastcall CheckImageIndexes();
	void __fastcall UpdateImageName(System::Uitypes::TImageIndex AIndex, System::Uitypes::TImageName &AName);
	void __fastcall UpdateImageIndex(System::Uitypes::TImageName AName, System::Uitypes::TImageIndex &AIndex);
	void __fastcall PaintPushButton();
	void __fastcall PaintToolButton();
	void __fastcall PaintLink();
	void __fastcall PaintImageAndText();
	
protected:
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	DYNAMIC void __fastcall ActionChange(System::TObject* Sender, bool CheckDefaults);
	DYNAMIC Vcl::Controls::TControlActionLinkClass __fastcall GetActionLinkClass();
	virtual void __fastcall MouseEnter();
	virtual void __fastcall MouseLeave();
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	MESSAGE void __fastcall CMTextChanged(Winapi::Messages::TMessage &Message);
	
public:
	__fastcall virtual TControlListButton(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TControlListButton();
	virtual void __fastcall Paint();
	
__published:
	__property Action;
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property BiDiMode;
	__property Constraints;
	__property Caption = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property ParentBiDiMode = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property Visible = {default=1};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property Vcl::Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property System::Uitypes::TImageIndex DisabledImageIndex = {read=FDisabledImageIndex, write=SetDisabledImageIndex, default=-1};
	__property System::Uitypes::TImageName DisabledImageName = {read=FDisabledImageName, write=SetDisabledImageName};
	__property System::Uitypes::TImageIndex ImageIndex = {read=FImageIndex, write=SetImageIndex, stored=IsImageIndexStored, default=-1};
	__property System::Uitypes::TImageName ImageName = {read=FImageName, write=SetImageName, stored=IsImageNameStored};
	__property System::Uitypes::TImageIndex HotImageIndex = {read=FHotImageIndex, write=SetHotImageIndex, default=-1};
	__property System::Uitypes::TImageName HotImageName = {read=FHotImageName, write=SetHotImageName};
	__property System::Uitypes::TImageIndex PressedImageIndex = {read=FPressedImageIndex, write=SetPressedImageIndex, default=-1};
	__property System::Uitypes::TImageName PressedImageName = {read=FPressedImageName, write=SetPressedImageName};
	__property int Margin = {read=FMargin, write=SetMargin, default=-1};
	__property int Spacing = {read=FSpacing, write=SetSpacing, default=4};
	__property Vcl::Buttons::TButtonLayout Layout = {read=FLayout, write=SetLayout, default=0};
	__property System::Uitypes::TColor LinkHotColor = {read=FLinkHotColor, write=FLinkHotColor, default=-16777202};
	__property TControlListButtonStyle Style = {read=FStyle, write=SetStyle, default=0};
	__property bool WordWrap = {read=FWordWrap, write=SetWordWrap, default=0};
	__property OnClick;
	__property OnDblClick;
	__property OnMouseActivate;
	__property OnMouseDown;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
};


class PASCALIMPLEMENTATION TControlListButtonActionLink : public Vcl::Controls::TControlActionLink
{
	typedef Vcl::Controls::TControlActionLink inherited;
	
protected:
	TControlListButton* FClient;
	int FImageIndex;
	virtual void __fastcall AssignClient(System::TObject* AClient);
	virtual bool __fastcall IsImageIndexLinked();
	virtual bool __fastcall IsImageNameLinked();
	
public:
	__fastcall virtual TControlListButtonActionLink(System::TObject* AClient);
public:
	/* TBasicActionLink.Destroy */ inline __fastcall virtual ~TControlListButtonActionLink() { }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EControlListException : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EControlListException(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EControlListException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EControlListException(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EControlListException(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EControlListException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EControlListException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EControlListException(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EControlListException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EControlListException(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EControlListException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EControlListException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EControlListException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EControlListException() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Controllist */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_CONTROLLIST)
using namespace Vcl::Controllist;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_ControllistHPP
