// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.ButtonGroup.pas' rev: 35.00 (Windows)

#ifndef Vcl_ButtongroupHPP
#define Vcl_ButtongroupHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.Forms.hpp>
#include <Winapi.Messages.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.CategoryButtons.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Menus.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Buttongroup
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TButtonGroup;
class DELPHICLASS TGrpButtonItem;
class DELPHICLASS TGrpButtonItems;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
typedef System::TMetaClass* TGrpButtonItemClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TGrpButtonItemClass);
#endif /* _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TGrpButtonItemsClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TGrpButtonItemsClass);
#endif /* _WIN64 */

enum DECLSPEC_DENUM Vcl_Buttongroup__1 : unsigned char { gboAllowReorder, gboFullSize, gboGroupStyle, gboShowCaptions };

typedef System::Set<Vcl_Buttongroup__1, Vcl_Buttongroup__1::gboAllowReorder, Vcl_Buttongroup__1::gboShowCaptions> TGrpButtonOptions;

typedef void __fastcall (__closure *TGrpButtonEvent)(System::TObject* Sender, int Index);

typedef void __fastcall (__closure *TGrpButtonDrawEvent)(System::TObject* Sender, int Index, Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &Rect, Vcl::Categorybuttons::TButtonDrawState State);

typedef void __fastcall (__closure *TGrpButtonDrawIconEvent)(System::TObject* Sender, int Index, Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &Rect, Vcl::Categorybuttons::TButtonDrawState State, int &TextOffset);

typedef void __fastcall (__closure *TGrpButtonReorderEvent)(System::TObject* Sender, int OldIndex, int NewIndex);

class PASCALIMPLEMENTATION TButtonGroup : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
private:
	int FDownIndex;
	int FDragIndex;
	System::Types::TPoint FDragStartPos;
	bool FDragStarted;
	Vcl::Controls::TDragImageList* FDragImageList;
	int FHiddenItems;
	int FHotIndex;
	int FInsertLeft;
	int FInsertTop;
	int FInsertRight;
	int FInsertBottom;
	bool FIgnoreUpdate;
	int FScrollBarMax;
	int FPageAmount;
	TGrpButtonItems* FButtonItems;
	TGrpButtonOptions FButtonOptions;
	int FButtonWidth;
	int FButtonHeight;
	Vcl::Forms::TFormBorderStyle FBorderStyle;
	int FFocusIndex;
	int FItemIndex;
	Vcl::Imglist::TChangeLink* FImageChangeLink;
	Vcl::Imglist::TCustomImageList* FImages;
	bool FMouseInControl;
	System::Types::TPoint FPanPoint;
	TGrpButtonEvent FOnButtonClicked;
	System::Classes::TNotifyEvent FOnClick;
	TGrpButtonEvent FOnHotButton;
	TGrpButtonDrawIconEvent FOnDrawIcon;
	TGrpButtonDrawEvent FOnDrawButton;
	TGrpButtonDrawEvent FOnBeforeDrawButton;
	TGrpButtonDrawEvent FOnAfterDrawButton;
	TGrpButtonReorderEvent FOnReorderButton;
	bool FScrollBarShown;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
private:
	void __fastcall AutoScroll(System::Uitypes::TScrollCode ScrollCode);
	void __fastcall ImageListChange(System::TObject* Sender);
	int __fastcall CalcButtonsPerRow();
	int __fastcall CalcRowsSeen();
	void __fastcall DoFillRect(const System::Types::TRect &Rect, Vcl::Graphics::TCanvas* ACanvas);
	void __fastcall ScrollPosChanged(System::Uitypes::TScrollCode ScrollCode, int ScrollPos);
	void __fastcall SetOnDrawButton(const TGrpButtonDrawEvent Value);
	void __fastcall SetOnDrawIcon(const TGrpButtonDrawIconEvent Value);
	void __fastcall SetBorderStyle(const Vcl::Forms::TBorderStyle Value);
	void __fastcall SeTGrpButtonItems(TGrpButtonItems* const Value);
	void __fastcall SetButtonHeight(const int Value);
	void __fastcall SetGrpButtonOptions(const TGrpButtonOptions Value);
	void __fastcall SetButtonWidth(const int Value);
	void __fastcall SetItemIndex(const int Value);
	void __fastcall SetImages(Vcl::Imglist::TCustomImageList* const Value);
	bool __fastcall IsStyleEnabled();
	void __fastcall ShowScrollBar(const bool Visible);
	HIDESBASE MESSAGE void __fastcall CMHintShow(Vcl::Controls::TCMHintShow &Message);
	HIDESBASE MESSAGE void __fastcall CNKeydown(Winapi::Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Message);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TWMKillFocus &Message);
	MESSAGE void __fastcall WMMouseLeave(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMHScroll(Winapi::Messages::TWMScroll &Message);
	HIDESBASE MESSAGE void __fastcall WMVScroll(Winapi::Messages::TWMScroll &Message);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	void __fastcall SetDragIndex(const int Value);
	void __fastcall CheckImageIndexes();
	
protected:
	virtual TGrpButtonItem* __fastcall CreateButton();
	virtual void __fastcall CreateHandle();
	DYNAMIC void __fastcall ChangeScale(int M, int D, bool isDpiChange)/* overload */;
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	DYNAMIC void __fastcall DoEndDrag(System::TObject* Target, int X, int Y);
	virtual void __fastcall DoGesture(const Vcl::Controls::TGestureEventInfo &EventInfo, bool &Handled);
	DYNAMIC void __fastcall DoHotButton();
	DYNAMIC bool __fastcall DoMouseWheelUp(System::Classes::TShiftState Shift, const System::Types::TPoint &MousePos);
	DYNAMIC bool __fastcall DoMouseWheelDown(System::Classes::TShiftState Shift, const System::Types::TPoint &MousePos);
	void __fastcall DoReorderButton(const int OldIndex, const int NewIndex);
	DYNAMIC void __fastcall DoStartDrag(Vcl::Controls::TDragObject* &DragObject);
	DYNAMIC void __fastcall DragOver(System::TObject* Source, int X, int Y, System::Uitypes::TDragState State, bool &Accept);
	virtual void __fastcall DrawButton(int Index, Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &Rect, Vcl::Categorybuttons::TButtonDrawState State);
	virtual void __fastcall DoItemClicked(const int Index);
	virtual TGrpButtonItemClass __fastcall GetButtonClass();
	virtual TGrpButtonItemsClass __fastcall GetButtonsClass();
	DYNAMIC bool __fastcall IsTouchPropertyStored(Vcl::Controls::TTouchProperty AProperty);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall Paint();
	DYNAMIC void __fastcall Resize();
	void __fastcall UpdateButton(const int Index);
	void __fastcall UpdateAllButtons();
	
public:
	__fastcall virtual TButtonGroup(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TButtonGroup();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property int DragIndex = {read=FDragIndex, write=SetDragIndex, nodefault};
	__property Vcl::Controls::TDragImageList* DragImageList = {read=FDragImageList};
	DYNAMIC void __fastcall DragDrop(System::TObject* Source, int X, int Y);
	System::Types::TRect __fastcall GetButtonRect(const int Index);
	virtual Vcl::Controls::TDragImageList* __fastcall GetDragImages();
	int __fastcall IndexOfButtonAt(const int X, const int Y);
	void __fastcall RemoveInsertionPoints();
	void __fastcall ScrollIntoView(const int Index);
	void __fastcall SetInsertionPoints(const int InsertionIndex);
	int __fastcall TargetIndexAt(const int X, const int Y);
	__property Canvas;
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property BevelEdges = {default=15};
	__property BevelInner = {index=0, default=2};
	__property BevelOuter = {index=1, default=1};
	__property BevelKind = {default=0};
	__property BevelWidth = {default=1};
	__property BorderWidth = {default=0};
	__property Vcl::Forms::TBorderStyle BorderStyle = {read=FBorderStyle, write=SetBorderStyle, default=1};
	__property int ButtonHeight = {read=FButtonHeight, write=SetButtonHeight, default=24};
	__property int ButtonWidth = {read=FButtonWidth, write=SetButtonWidth, default=24};
	__property TGrpButtonOptions ButtonOptions = {read=FButtonOptions, write=SetGrpButtonOptions, default=8};
	__property DockSite = {default=0};
	__property DoubleBuffered;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property Height = {default=100};
	__property Vcl::Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property TGrpButtonItems* Items = {read=FButtonItems, write=SeTGrpButtonItems};
	__property int ItemIndex = {read=FItemIndex, write=SetItemIndex, default=-1};
	__property ParentDoubleBuffered = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Touch;
	__property Width = {default=100};
	__property Visible = {default=1};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property OnAlignInsertBefore;
	__property OnAlignPosition;
	__property TGrpButtonEvent OnButtonClicked = {read=FOnButtonClicked, write=FOnButtonClicked};
	__property System::Classes::TNotifyEvent OnClick = {read=FOnClick, write=FOnClick};
	__property OnContextPopup;
	__property OnDockDrop;
	__property OnDockOver;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property TGrpButtonEvent OnHotButton = {read=FOnHotButton, write=FOnHotButton};
	__property TGrpButtonDrawEvent OnAfterDrawButton = {read=FOnAfterDrawButton, write=FOnAfterDrawButton};
	__property TGrpButtonDrawEvent OnBeforeDrawButton = {read=FOnBeforeDrawButton, write=FOnBeforeDrawButton};
	__property TGrpButtonDrawEvent OnDrawButton = {read=FOnDrawButton, write=SetOnDrawButton};
	__property TGrpButtonDrawIconEvent OnDrawIcon = {read=FOnDrawIcon, write=SetOnDrawIcon};
	__property OnGesture;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property TGrpButtonReorderEvent OnReorderButton = {read=FOnReorderButton, write=FOnReorderButton};
	__property OnMouseActivate;
	__property OnMouseDown;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseWheelDown;
	__property OnMouseWheelUp;
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TWinControl.CreateParented */ inline __fastcall TButtonGroup(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
	/* Hoisted overloads: */
	
protected:
	DYNAMIC inline void __fastcall  ChangeScale(int M, int D){ Vcl::Controls::TControl::ChangeScale(M, D); }
	
};


class PASCALIMPLEMENTATION TGrpButtonItem : public Vcl::Categorybuttons::TBaseButtonItem
{
	typedef Vcl::Categorybuttons::TBaseButtonItem inherited;
	
protected:
	TButtonGroup* __fastcall GetButtonGroup();
	TGrpButtonItems* __fastcall GetCollection();
	virtual System::Classes::TComponent* __fastcall GetNotifyTarget();
	HIDESBASE void __fastcall SetCollection(TGrpButtonItems* const Value);
	void __fastcall CheckImageIndexAndName();
	
public:
	virtual void __fastcall ScrollIntoView();
	__property TGrpButtonItems* Collection = {read=GetCollection, write=SetCollection};
	
__published:
	__property TButtonGroup* ButtonGroup = {read=GetButtonGroup};
public:
	/* TBaseButtonItem.Create */ inline __fastcall virtual TGrpButtonItem(System::Classes::TCollection* Collection) : Vcl::Categorybuttons::TBaseButtonItem(Collection) { }
	/* TBaseButtonItem.Destroy */ inline __fastcall virtual ~TGrpButtonItem() { }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TGrpButtonItems : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	TGrpButtonItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	TButtonGroup* FButtonGroup;
	int FOriginalID;
	
protected:
	HIDESBASE TGrpButtonItem* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TGrpButtonItem* const Value);
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	virtual void __fastcall Update(System::Classes::TCollectionItem* Item);
	
public:
	__fastcall virtual TGrpButtonItems(TButtonGroup* const ButtonGroup);
	HIDESBASE TGrpButtonItem* __fastcall Add();
	TGrpButtonItem* __fastcall AddItem(TGrpButtonItem* Item, int Index);
	virtual void __fastcall BeginUpdate();
	HIDESBASE TGrpButtonItem* __fastcall Insert(int Index);
	__property TButtonGroup* ButtonGroup = {read=FButtonGroup};
	__property TGrpButtonItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TGrpButtonItems() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Buttongroup */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_BUTTONGROUP)
using namespace Vcl::Buttongroup;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_ButtongroupHPP
