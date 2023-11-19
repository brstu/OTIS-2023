// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.CategoryButtons.pas' rev: 35.00 (Windows)

#ifndef Vcl_CategorybuttonsHPP
#define Vcl_CategorybuttonsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <Vcl.ImgList.hpp>
#include <System.Classes.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.GraphUtil.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.Themes.hpp>
#include <System.Types.hpp>
#include <Vcl.Menus.hpp>
#include <System.Actions.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Categorybuttons
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TCategoryButtons;
class DELPHICLASS TBaseItem;
class DELPHICLASS TBaseButtonItem;
class DELPHICLASS TButtonItem;
class DELPHICLASS TItemCollection;
class DELPHICLASS TButtonCollection;
class DELPHICLASS TButtonCategory;
class DELPHICLASS TButtonCategories;
class DELPHICLASS TButtonItemActionLink;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
typedef System::TMetaClass* TBaseButtonItemClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TBaseButtonItemClass);
#endif /* _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TButtonItemClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TButtonItemClass);
#endif /* _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TButtonCategoryClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TButtonCategoryClass);
#endif /* _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TButtonCategoriesClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TButtonCategoriesClass);
#endif /* _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TButtonItemActionLinkClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TButtonItemActionLinkClass);
#endif /* _WIN64 */

enum DECLSPEC_DENUM Vcl_Categorybuttons__1 : unsigned char { bdsSelected, bdsHot, bdsFocused, bdsDown, bdsDragged, bdsInsertLeft, bdsInsertTop, bdsInsertRight, bdsInsertBottom };

typedef System::Set<Vcl_Categorybuttons__1, Vcl_Categorybuttons__1::bdsSelected, Vcl_Categorybuttons__1::bdsInsertBottom> TButtonDrawState;

enum DECLSPEC_DENUM TCatButtonFlow : unsigned char { cbfVertical, cbfHorizontal };

enum DECLSPEC_DENUM Vcl_Categorybuttons__2 : unsigned char { boAllowReorder, boAllowCopyingButtons, boFullSize, boGradientFill, boShowCaptions, boVerticalCategoryCaptions, boBoldCaptions, boUsePlusMinus, boCaptionOnlyBorder };

typedef System::Set<Vcl_Categorybuttons__2, Vcl_Categorybuttons__2::boAllowReorder, Vcl_Categorybuttons__2::boCaptionOnlyBorder> TCatButtonOptions;

typedef void __fastcall (__closure *TCatButtonEvent)(System::TObject* Sender, TButtonItem* const Button);

typedef void __fastcall (__closure *TCatButtonCategoryEvent)(System::TObject* Sender, TButtonCategory* const Category);

typedef void __fastcall (__closure *TCatButtonGetHint)(System::TObject* Sender, TButtonItem* const Button, TButtonCategory* const Category, System::UnicodeString &HintStr, bool &Handled);

typedef void __fastcall (__closure *TCatButtonDrawEvent)(System::TObject* Sender, TButtonItem* const Button, Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &Rect, TButtonDrawState State);

typedef void __fastcall (__closure *TCatButtonDrawIconEvent)(System::TObject* Sender, TButtonItem* const Button, Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &Rect, TButtonDrawState State, int &TextOffset);

typedef void __fastcall (__closure *TCatButtonReorderEvent)(System::TObject* Sender, TButtonItem* const Button, TButtonCategory* const SourceCategory, TButtonCategory* const TargetCategory);

typedef void __fastcall (__closure *TCatButtonCopyEvent)(System::TObject* Sender, TButtonItem* const SourceButton, TButtonItem* const CopiedButton);

typedef void __fastcall (__closure *TCatButtonEditingEvent)(System::TObject* Sender, TBaseItem* Item, bool &AllowEdit);

typedef void __fastcall (__closure *TCatButtonEditedEvent)(System::TObject* Sender, TBaseItem* Item, System::UnicodeString &S);

typedef void __fastcall (__closure *TCatButtonCancelEditEvent)(System::TObject* Sender, TBaseItem* const Item);

typedef void __fastcall (__closure *TCategoryReorderEvent)(System::TObject* Sender, TButtonCategory* const SourceCategory, TButtonCategory* const TargetCategory);

typedef void __fastcall (__closure *TCategoryCollapseEvent)(System::TObject* Sender, TButtonCategory* const Category);

class PASCALIMPLEMENTATION TCategoryButtons : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
private:
	TCatButtonFlow FButtonFlow;
	int FCollapsedHeight;
	TButtonItem* FDownButton;
	TButtonItem* FDragButton;
	TButtonItem* FHotButton;
	TButtonCategory* FDragCategory;
	System::Types::TPoint FDragStartPos;
	bool FDragStarted;
	Vcl::Controls::TDragImageList* FDragImageList;
	Vcl::Graphutil::TGradientDirection FGradientDirection;
	Vcl::Graphutil::TGradientDirection FBackGradientDirection;
	int FGutterSize;
	int FScrollSize;
	int FSideBufferSize;
	Vcl::Imglist::TChangeLink* FImageChangeLink;
	Vcl::Imglist::TCustomImageList* FImages;
	TBaseItem* FInsertLeft;
	TBaseItem* FInsertTop;
	TBaseItem* FInsertRight;
	TBaseItem* FInsertBottom;
	bool FIgnoreUpdate;
	int FScrollBarMax;
	int FScrollBarPos;
	int FPageAmount;
	TButtonCategories* FButtonCategories;
	TCatButtonOptions FButtonOptions;
	int FButtonWidth;
	int FButtonHeight;
	Vcl::Forms::TFormBorderStyle FBorderStyle;
	TBaseItem* FSelectedItem;
	TBaseItem* FFocusedItem;
	bool FMouseInControl;
	bool FScrollBarShown;
	System::Uitypes::TColor FBackgroundGradientColor;
	System::Uitypes::TColor FHotButtonColor;
	System::Uitypes::TColor FSelectedButtonColor;
	System::Uitypes::TColor FRegularButtonColor;
	Vcl::Stdctrls::TCustomEdit* FInplaceEdit;
	System::Types::TPoint FPanPoint;
	TCatButtonEvent FOnButtonClicked;
	TCatButtonCategoryEvent FOnCategoryClicked;
	TCatButtonCopyEvent FOnCopyButton;
	TCatButtonEvent FOnSelectedButtonChange;
	TCatButtonCategoryEvent FOnSelectedCategoryChange;
	TCatButtonEvent FOnHotButton;
	TCatButtonGetHint FOnGetHint;
	TCatButtonDrawIconEvent FOnDrawIcon;
	TCatButtonDrawEvent FOnDrawText;
	TCatButtonDrawEvent FOnDrawButton;
	TCatButtonDrawEvent FOnBeforeDrawButton;
	TCatButtonDrawEvent FOnAfterDrawButton;
	TCatButtonReorderEvent FOnReorderButton;
	TCatButtonEditingEvent FOnEditing;
	TCatButtonEditedEvent FOnEdited;
	TCatButtonCancelEditEvent FOnCancelEdit;
	TCategoryReorderEvent FOnReorderCategory;
	TCategoryCollapseEvent FOnCategoryCollapase;
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	void __fastcall AutoScroll(System::Uitypes::TScrollCode ScrollCode);
	int __fastcall CalcButtonsPerRow();
	int __fastcall CalcButtonsPerCol();
	void __fastcall CalcBufferSizes();
	int __fastcall CalcCategoryHeight(TButtonCategory* const Category, const int ButtonsPerRow);
	int __fastcall CalcCategoryWidth(TButtonCategory* const Category, const int ButtonsPerCol);
	void __fastcall DrawCategory(TButtonCategory* const Category, Vcl::Graphics::TCanvas* const Canvas, int StartingPos);
	TBaseItem* __fastcall GetNextButtonInGroup(TBaseItem* const StartingItem, bool GoForward);
	TBaseItem* __fastcall GetNextButton(TBaseItem* const StartingItem, bool GoForward);
	int __fastcall GetScrollBuffer();
	void __fastcall ImageListChange(System::TObject* Sender);
	void __fastcall ScrollPosChanged(System::Uitypes::TScrollCode ScrollCode, int ScrollPos);
	void __fastcall SetOnDrawButton(const TCatButtonDrawEvent Value);
	void __fastcall SetOnDrawIcon(const TCatButtonDrawIconEvent Value);
	void __fastcall SetBackgroundGradientColor(const System::Uitypes::TColor Value);
	void __fastcall SetBackGradientDirection(const Vcl::Graphutil::TGradientDirection Value);
	void __fastcall SetBorderStyle(const Vcl::Forms::TBorderStyle Value);
	void __fastcall SetButtonCategories(TButtonCategories* const Value);
	void __fastcall SetButtonFlow(const TCatButtonFlow Value);
	void __fastcall SetButtonHeight(const int Value);
	void __fastcall SetButtonWidth(const int Value);
	void __fastcall SetCatButtonOptions(const TCatButtonOptions Value);
	void __fastcall SetDragButton(TButtonItem* const Value);
	void __fastcall SetFocusedItem(TBaseItem* const Value);
	void __fastcall SetGradientDirection(const Vcl::Graphutil::TGradientDirection Value);
	void __fastcall SetHotButtonColor(const System::Uitypes::TColor Value);
	void __fastcall SetImages(Vcl::Imglist::TCustomImageList* const Value);
	void __fastcall SetRegularButtonColor(const System::Uitypes::TColor Value);
	void __fastcall SetSelectedItem(TBaseItem* const Value);
	void __fastcall SetSelectedButtonColor(const System::Uitypes::TColor Value);
	bool __fastcall IsStyleEnabled();
	bool __fastcall ShouldScrollDown(/* out */ unsigned &Delay);
	bool __fastcall ShouldScrollUp(/* out */ unsigned &Delay);
	void __fastcall ShowScrollBar(const bool Visible);
	HIDESBASE MESSAGE void __fastcall CMFontchanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMHintShow(Vcl::Controls::TCMHintShow &Message);
	HIDESBASE MESSAGE void __fastcall CNKeydown(Winapi::Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Message);
	MESSAGE void __fastcall WMMouseLeave(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMVScroll(Winapi::Messages::TWMScroll &Message);
	HIDESBASE MESSAGE void __fastcall WMHScroll(Winapi::Messages::TWMScroll &Message);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Message);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TWMKillFocus &Message);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	int __fastcall GetDropDownSize();
	void __fastcall CheckImageIndexes();
	
protected:
	DYNAMIC void __fastcall BeginAutoDrag();
	DYNAMIC bool __fastcall CanEdit(TBaseItem* Item);
	virtual void __fastcall CreateHandle();
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	DYNAMIC void __fastcall ChangeScale(int M, int D, bool isDpiChange)/* overload */;
	virtual void __fastcall DoBeginDrag(bool Immediate, int Threshold);
	DYNAMIC void __fastcall DoCopyButton(TButtonItem* const Button, TButtonCategory* const TargetCategory, TButtonItem* const TargetButton);
	DYNAMIC void __fastcall DoEndDrag(System::TObject* Target, int X, int Y);
	virtual void __fastcall DoGesture(const Vcl::Controls::TGestureEventInfo &EventInfo, bool &Handled);
	DYNAMIC void __fastcall DoHotButton();
	DYNAMIC void __fastcall DoReorderButton(TButtonItem* const Button, TButtonCategory* const TargetCategory, TButtonItem* const TargetButton);
	DYNAMIC void __fastcall DoReorderCategory(TButtonCategory* const SourceCategory, TButtonCategory* const TargetCategory);
	DYNAMIC void __fastcall DoStartDrag(Vcl::Controls::TDragObject* &DragObject);
	DYNAMIC void __fastcall DoItemClicked(TBaseItem* const Item);
	void __fastcall DoItemNotify(System::Classes::TCollectionItem* Item, System::Generics::Collections::TCollectionNotification Action);
	void __fastcall DoItemUpdate(System::Classes::TCollectionItem* Item);
	DYNAMIC bool __fastcall DoMouseWheelUp(System::Classes::TShiftState Shift, const System::Types::TPoint &MousePos);
	DYNAMIC bool __fastcall DoMouseWheelDown(System::Classes::TShiftState Shift, const System::Types::TPoint &MousePos);
	DYNAMIC void __fastcall DoSelectedItemChanged(TBaseItem* const Item);
	DYNAMIC void __fastcall DragOver(System::TObject* Source, int X, int Y, System::Uitypes::TDragState State, bool &Accept);
	virtual void __fastcall DrawButton(TButtonItem* const Button, Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &Rect, TButtonDrawState State);
	virtual bool __fastcall Edit(TBaseItem* const Item);
	void __fastcall EndEdit(bool Cancel);
	DYNAMIC bool __fastcall GetAllowReorder();
	virtual TButtonCategory* __fastcall GetCurrentCategory();
	virtual TButtonCategoriesClass __fastcall GetButtonCategoriesClass();
	virtual TButtonCategoryClass __fastcall GetButtonCategoryClass();
	virtual TButtonItemClass __fastcall GetButtonItemClass();
	System::Types::TRect __fastcall GetInplaceEditBounds(TBaseItem* const Item);
	int __fastcall GetScrollOffset();
	int __fastcall GetIndexOfFirstCategory();
	int __fastcall GetScrollPos();
	void __fastcall AdjustCategoryBounds(TButtonCategory* const Category, System::Types::TRect &CategoryBounds, bool IgnoreButtonFlow = false);
	void __fastcall GetCategoryBounds(TButtonCategory* const Category, const int StartingPos, System::Types::TRect &CategoryBounds, System::Types::TRect &ButtonBounds);
	System::Types::TRect __fastcall GetChevronBounds(const System::Types::TRect &CategoryBounds);
	bool __fastcall HasVerticalCaption(TButtonCategory* const Category);
	DYNAMIC bool __fastcall IsTouchPropertyStored(Vcl::Controls::TTouchProperty AProperty);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall Paint();
	DYNAMIC void __fastcall Resize();
	void __fastcall ScrollRectIntoView(const System::Types::TRect &Rect, bool PlaceOnTop = false);
	void __fastcall SetScrollPos(const int Value);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	__property int SideBufferSize = {read=FSideBufferSize, nodefault};
	__property TButtonItem* DownButton = {read=FDownButton};
	__property TButtonItem* HotButton = {read=FHotButton};
	__property TBaseItem* InsertLeft = {read=FInsertLeft};
	__property TBaseItem* InsertTop = {read=FInsertTop};
	__property TBaseItem* InsertRight = {read=FInsertRight};
	__property TBaseItem* InsertBottom = {read=FInsertBottom};
	
public:
	__fastcall virtual TCategoryButtons(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCategoryButtons();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	DYNAMIC void __fastcall DragDrop(System::TObject* Source, int X, int Y);
	void __fastcall GenerateDragImage();
	TButtonItem* __fastcall GetButtonAt(int X, int Y, TButtonCategory* Category = (TButtonCategory*)(0x0));
	System::Types::TRect __fastcall GetButtonRect(TBaseItem* const Item);
	TButtonCategory* __fastcall GetCategoryAt(int X, int Y);
	System::Types::TRect __fastcall GetCategoryRect(TButtonCategory* const Category, bool ButtonOnly = false);
	virtual Vcl::Controls::TDragImageList* __fastcall GetDragImages();
	void __fastcall GetTargetAt(int X, int Y, TButtonItem* &TargetButton, TButtonCategory* &TargetCategory);
	bool __fastcall IsEditing();
	void __fastcall RemoveInsertionPoints();
	void __fastcall ScrollIntoView(TBaseItem* const Item);
	void __fastcall SetInsertionButton(TButtonItem* InsertionButton, TButtonCategory* InsertionCategory);
	void __fastcall UpdateAllButtons();
	void __fastcall UpdateButton(TBaseItem* const Item);
	__property TButtonCategory* CurrentCategory = {read=GetCurrentCategory};
	__property TButtonItem* DragButton = {read=FDragButton, write=SetDragButton};
	__property TButtonCategory* DragCategory = {read=FDragCategory, write=FDragCategory};
	__property Vcl::Controls::TDragImageList* DragImageList = {read=FDragImageList};
	__property TBaseItem* SelectedItem = {read=FSelectedItem, write=SetSelectedItem};
	__property TBaseItem* FocusedItem = {read=FFocusedItem, write=SetFocusedItem};
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property System::Uitypes::TColor BackgroundGradientColor = {read=FBackgroundGradientColor, write=SetBackgroundGradientColor, default=536870911};
	__property Vcl::Graphutil::TGradientDirection BackgroundGradientDirection = {read=FBackGradientDirection, write=SetBackGradientDirection, default=0};
	__property BevelEdges = {default=15};
	__property BevelInner = {index=0, default=2};
	__property BevelOuter = {index=1, default=1};
	__property BevelKind = {default=0};
	__property BevelWidth = {default=1};
	__property BorderWidth = {default=0};
	__property Vcl::Forms::TBorderStyle BorderStyle = {read=FBorderStyle, write=SetBorderStyle, default=1};
	__property TCatButtonFlow ButtonFlow = {read=FButtonFlow, write=SetButtonFlow, nodefault};
	__property int ButtonHeight = {read=FButtonHeight, write=SetButtonHeight, default=24};
	__property int ButtonWidth = {read=FButtonWidth, write=SetButtonWidth, default=24};
	__property TCatButtonOptions ButtonOptions = {read=FButtonOptions, write=SetCatButtonOptions, default=56};
	__property TButtonCategories* Categories = {read=FButtonCategories, write=SetButtonCategories};
	__property Color = {default=-16777211};
	__property Cursor = {default=0};
	__property DockSite = {default=0};
	__property DoubleBuffered;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property Vcl::Graphutil::TGradientDirection GradientDirection = {read=FGradientDirection, write=SetGradientDirection, default=0};
	__property Height = {default=100};
	__property System::Uitypes::TColor HotButtonColor = {read=FHotButtonColor, write=SetHotButtonColor, default=15717318};
	__property Vcl::Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property ParentDoubleBuffered = {default=1};
	__property PopupMenu;
	__property System::Uitypes::TColor RegularButtonColor = {read=FRegularButtonColor, write=SetRegularButtonColor, nodefault};
	__property System::Uitypes::TColor SelectedButtonColor = {read=FSelectedButtonColor, write=SetSelectedButtonColor, nodefault};
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Touch;
	__property Visible = {default=1};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property Width = {default=100};
	__property OnAlignInsertBefore;
	__property OnAlignPosition;
	__property TCatButtonDrawEvent OnAfterDrawButton = {read=FOnAfterDrawButton, write=FOnAfterDrawButton};
	__property TCatButtonDrawEvent OnBeforeDrawButton = {read=FOnBeforeDrawButton, write=FOnBeforeDrawButton};
	__property TCatButtonEvent OnButtonClicked = {read=FOnButtonClicked, write=FOnButtonClicked};
	__property TCatButtonCancelEditEvent OnCancelEdit = {read=FOnCancelEdit, write=FOnCancelEdit};
	__property TCategoryCollapseEvent OnCategoryCollapase = {read=FOnCategoryCollapase, write=FOnCategoryCollapase};
	__property TCatButtonCategoryEvent OnCategoryClicked = {read=FOnCategoryClicked, write=FOnCategoryClicked};
	__property OnClick;
	__property OnContextPopup;
	__property TCatButtonCopyEvent OnCopyButton = {read=FOnCopyButton, write=FOnCopyButton};
	__property OnDockDrop;
	__property OnDockOver;
	__property OnDragDrop;
	__property OnDragOver;
	__property TCatButtonDrawEvent OnDrawButton = {read=FOnDrawButton, write=SetOnDrawButton};
	__property TCatButtonDrawIconEvent OnDrawIcon = {read=FOnDrawIcon, write=SetOnDrawIcon};
	__property TCatButtonDrawEvent OnDrawText = {read=FOnDrawText, write=FOnDrawText};
	__property TCatButtonEditingEvent OnEditing = {read=FOnEditing, write=FOnEditing};
	__property TCatButtonEditedEvent OnEdited = {read=FOnEdited, write=FOnEdited};
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnGesture;
	__property TCatButtonGetHint OnGetHint = {read=FOnGetHint, write=FOnGetHint};
	__property TCatButtonEvent OnHotButton = {read=FOnHotButton, write=FOnHotButton};
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseActivate;
	__property OnMouseDown;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseWheelDown;
	__property OnMouseWheelUp;
	__property TCatButtonReorderEvent OnReorderButton = {read=FOnReorderButton, write=FOnReorderButton};
	__property TCategoryReorderEvent OnReorderCategory = {read=FOnReorderCategory, write=FOnReorderCategory};
	__property TCatButtonEvent OnSelectedItemChange = {read=FOnSelectedButtonChange, write=FOnSelectedButtonChange};
	__property TCatButtonCategoryEvent OnSelectedCategoryChange = {read=FOnSelectedCategoryChange, write=FOnSelectedCategoryChange};
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TWinControl.CreateParented */ inline __fastcall TCategoryButtons(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
	/* Hoisted overloads: */
	
protected:
	DYNAMIC inline void __fastcall  ChangeScale(int M, int D){ Vcl::Controls::TControl::ChangeScale(M, D); }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TBaseItem : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	System::UnicodeString FCaption;
	System::_di_IInterface FInterfaceData;
	
protected:
	virtual System::Types::TRect __fastcall GetBounds() = 0 ;
	virtual bool __fastcall IsCaptionStored();
	void __fastcall SetCaption(const System::UnicodeString Value);
	TBaseItem* __fastcall GetFirstSibling();
	TBaseItem* __fastcall GetLastSibling();
	TBaseItem* __fastcall GetNextSibling(int Distance = 0x1);
	TBaseItem* __fastcall GetPrevSibling(int Distance = 0x1);
	
public:
	bool __fastcall EditText();
	void __fastcall EndEdit(bool Cancel);
	virtual void __fastcall ScrollIntoView() = 0 ;
	__property System::Types::TRect Bounds = {read=GetBounds};
	__property System::_di_IInterface InterfaceData = {read=FInterfaceData, write=FInterfaceData};
	__property System::UnicodeString Caption = {read=FCaption, write=SetCaption, stored=IsCaptionStored};
public:
	/* TCollectionItem.Create */ inline __fastcall virtual TBaseItem(System::Classes::TCollection* Collection) : System::Classes::TCollectionItem(Collection) { }
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TBaseItem() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TBaseButtonItem : public TBaseItem
{
	typedef TBaseItem inherited;
	
private:
	TButtonItemActionLink* FActionLink;
	void *FData;
	System::UnicodeString FHint;
	System::Classes::TNotifyEvent FOnClick;
	
protected:
	System::Uitypes::TImageIndex FImageIndex;
	System::Uitypes::TImageName FImageName;
	virtual void __fastcall ActionChange(System::TObject* Sender, bool CheckDefaults);
	void __fastcall DoActionChange(System::TObject* Sender);
	System::Classes::TBasicAction* __fastcall GetAction();
	virtual TButtonItemActionLinkClass __fastcall GetActionLinkClass();
	virtual System::Types::TRect __fastcall GetBounds();
	virtual System::UnicodeString __fastcall GetDisplayName();
	virtual System::Classes::TComponent* __fastcall GetNotifyTarget() = 0 ;
	virtual bool __fastcall IsCaptionStored();
	bool __fastcall IsHintStored();
	bool __fastcall IsImageIndexStored();
	bool __fastcall IsImageNameStored();
	bool __fastcall IsOnClickStored();
	void __fastcall SetAction(System::Classes::TBasicAction* const Value);
	void __fastcall SetImageIndex(const System::Uitypes::TImageIndex Value);
	void __fastcall SetImageName(const System::Uitypes::TImageName Value);
	virtual void __fastcall UpdateImageName(System::Uitypes::TImageIndex Index, System::Uitypes::TImageName &Name);
	virtual void __fastcall UpdateImageIndex(System::Uitypes::TImageName Name, System::Uitypes::TImageIndex &Index);
	
public:
	__fastcall virtual TBaseButtonItem(System::Classes::TCollection* Collection);
	__fastcall virtual ~TBaseButtonItem();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property TButtonItemActionLink* ActionLink = {read=FActionLink, write=FActionLink};
	__property void * Data = {read=FData, write=FData};
	
__published:
	__property System::Classes::TBasicAction* Action = {read=GetAction, write=SetAction};
	__property Caption = {default=0};
	__property System::UnicodeString Hint = {read=FHint, write=FHint, stored=IsHintStored};
	__property System::Uitypes::TImageIndex ImageIndex = {read=FImageIndex, write=SetImageIndex, stored=IsImageIndexStored, nodefault};
	__property System::Uitypes::TImageName ImageName = {read=FImageName, write=SetImageName, stored=IsImageNameStored};
	__property System::Classes::TNotifyEvent OnClick = {read=FOnClick, write=FOnClick, stored=IsOnClickStored};
};


class PASCALIMPLEMENTATION TButtonItem : public TBaseButtonItem
{
	typedef TBaseButtonItem inherited;
	
protected:
	virtual System::Types::TRect __fastcall GetBounds();
	TButtonCategory* __fastcall GetCategory();
	TCategoryButtons* __fastcall GetCategoryButtons();
	virtual System::Classes::TComponent* __fastcall GetNotifyTarget();
	virtual void __fastcall UpdateImageName(System::Uitypes::TImageIndex Index, System::Uitypes::TImageName &Name);
	virtual void __fastcall UpdateImageIndex(System::Uitypes::TImageName Name, System::Uitypes::TImageIndex &Index);
	void __fastcall CheckImageIndexAndName();
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual void __fastcall ScrollIntoView();
	__property TButtonCategory* Category = {read=GetCategory};
	
__published:
	__property TCategoryButtons* CategoryButtons = {read=GetCategoryButtons};
public:
	/* TBaseButtonItem.Create */ inline __fastcall virtual TButtonItem(System::Classes::TCollection* Collection) : TBaseButtonItem(Collection) { }
	/* TBaseButtonItem.Destroy */ inline __fastcall virtual ~TButtonItem() { }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TItemCollection : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
private:
	TCategoryButtons* FCategoryButtons;
	
protected:
	virtual void __fastcall Notify(System::Classes::TCollectionItem* Item, System::Generics::Collections::TCollectionNotification Action);
	
public:
	__fastcall virtual TItemCollection(TCategoryButtons* const ACategoryButtons, const System::Classes::TCollectionItemClass ItemClass)/* overload */;
	__property TCategoryButtons* CategoryButtons = {read=FCategoryButtons};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TItemCollection() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TButtonCollection : public TItemCollection
{
	typedef TItemCollection inherited;
	
public:
	TButtonItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	TButtonCategory* FCategory;
	
protected:
	HIDESBASE TButtonItem* __fastcall GetItem(int Index);
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	HIDESBASE void __fastcall SetItem(int Index, TButtonItem* const Value);
	virtual void __fastcall Update(System::Classes::TCollectionItem* Item);
	
public:
	__fastcall TButtonCollection(TButtonCategory* const ACategory);
	HIDESBASE TButtonItem* __fastcall Add();
	TButtonItem* __fastcall AddItem(TButtonItem* Item, int Index);
	HIDESBASE TButtonItem* __fastcall Insert(int Index);
	__property TButtonCategory* Category = {read=FCategory};
	__property TButtonItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TButtonCollection() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TButtonCategory : public TBaseItem
{
	typedef TBaseItem inherited;
	
private:
	bool FCollapsed;
	System::Uitypes::TColor FColor;
	System::Uitypes::TColor FGradientColor;
	System::Uitypes::TColor FTextColor;
	TButtonCollection* FItems;
	int FStart;
	int FEnd;
	void *FData;
	bool FVisibleGutter;
	
protected:
	virtual System::Types::TRect __fastcall GetBounds();
	TButtonCategories* __fastcall GetCategories();
	TCategoryButtons* __fastcall GetCategoryButtons();
	void __fastcall SetItems(TButtonCollection* const Value);
	void __fastcall SetCollapsed(const bool Value);
	void __fastcall SetColor(const System::Uitypes::TColor Value);
	void __fastcall SetGradientColor(const System::Uitypes::TColor Value);
	virtual void __fastcall SetIndex(int Value);
	void __fastcall SetTextColor(const System::Uitypes::TColor Value);
	void __fastcall SetVisibleGutter(const bool Value);
	__property int StartOffset = {read=FStart, write=FStart, nodefault};
	__property int EndOffset = {read=FEnd, write=FEnd, nodefault};
	
public:
	__fastcall virtual TButtonCategory(System::Classes::TCollection* Collection);
	__fastcall virtual ~TButtonCategory();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	System::Types::TRect __fastcall GetButtonRect(bool ButtonOnly);
	int __fastcall IndexOf(const System::UnicodeString Caption);
	virtual void __fastcall ScrollIntoView();
	__property TButtonCategories* Categories = {read=GetCategories};
	__property System::Types::TRect Bounds = {read=GetBounds};
	__property void * Data = {read=FData, write=FData};
	
__published:
	__property Caption = {default=0};
	__property TCategoryButtons* CategoryButtons = {read=GetCategoryButtons};
	__property System::Uitypes::TColor Color = {read=FColor, write=SetColor, nodefault};
	__property bool Collapsed = {read=FCollapsed, write=SetCollapsed, nodefault};
	__property System::Uitypes::TColor GradientColor = {read=FGradientColor, write=SetGradientColor, default=536870911};
	__property TButtonCollection* Items = {read=FItems, write=SetItems};
	__property System::Uitypes::TColor TextColor = {read=FTextColor, write=SetTextColor, default=-16777208};
	__property bool VisibleGutter = {read=FVisibleGutter, write=SetVisibleGutter, default=1};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TButtonCategories : public TItemCollection
{
	typedef TItemCollection inherited;
	
public:
	TButtonCategory* operator[](int Index) { return this->Items[Index]; }
	
private:
	int FOriginalID;
	
protected:
	HIDESBASE TButtonCategory* __fastcall GetItem(int Index);
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	int __fastcall GetUpdateCount();
	int __fastcall GetVisibleCount();
	HIDESBASE void __fastcall SetItem(int Index, TButtonCategory* const Value);
	virtual void __fastcall Update(System::Classes::TCollectionItem* Item);
	__property int UpdateCount = {read=GetUpdateCount, nodefault};
	
public:
	__fastcall virtual TButtonCategories(TCategoryButtons* const CategoryButtons)/* overload */;
	HIDESBASE TButtonCategory* __fastcall Add();
	TButtonCategory* __fastcall AddItem(TButtonCategory* Item, int Index);
	virtual void __fastcall BeginUpdate();
	int __fastcall IndexOf(const System::UnicodeString Caption);
	HIDESBASE TButtonCategory* __fastcall Insert(int Index);
	TBaseItem* __fastcall ItemAt(const int Index);
	int __fastcall ItemIndex(const System::UnicodeString Caption);
	__property TButtonCategory* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
	__property int VisibleCount = {read=GetVisibleCount, nodefault};
public:
	/* TItemCollection.Create */ inline __fastcall virtual TButtonCategories(TCategoryButtons* const ACategoryButtons, const System::Classes::TCollectionItemClass ItemClass)/* overload */ : TItemCollection(ACategoryButtons, ItemClass) { }
	
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TButtonCategories() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TButtonItemActionLink : public Vcl::Actnlist::TActionLink
{
	typedef Vcl::Actnlist::TActionLink inherited;
	
private:
	TBaseButtonItem* FClient;
	
protected:
	virtual void __fastcall AssignClient(System::TObject* AClient);
	virtual bool __fastcall IsCaptionLinked();
	virtual bool __fastcall IsHintLinked();
	virtual bool __fastcall IsImageIndexLinked();
	virtual bool __fastcall IsImageNameLinked();
	virtual bool __fastcall IsOnExecuteLinked();
	virtual void __fastcall SetCaption(const System::UnicodeString Value);
	virtual void __fastcall SetHint(const System::UnicodeString Value);
	virtual void __fastcall SetImageIndex(int Value);
	virtual void __fastcall SetOnExecute(System::Classes::TNotifyEvent Value);
	
public:
	virtual bool __fastcall DoShowHint(System::UnicodeString &HintStr);
public:
	/* TBasicActionLink.Create */ inline __fastcall virtual TButtonItemActionLink(System::TObject* AClient) : Vcl::Actnlist::TActionLink(AClient) { }
	/* TBasicActionLink.Destroy */ inline __fastcall virtual ~TButtonItemActionLink() { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Uitypes::TCursor crDragCopy = System::Uitypes::TCursor(-23);
}	/* namespace Categorybuttons */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_CATEGORYBUTTONS)
using namespace Vcl::Categorybuttons;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_CategorybuttonsHPP
