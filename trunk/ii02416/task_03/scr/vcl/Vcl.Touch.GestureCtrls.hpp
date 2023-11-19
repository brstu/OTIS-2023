// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.Touch.GestureCtrls.pas' rev: 35.00 (Windows)

#ifndef Vcl_Touch_GesturectrlsHPP
#define Vcl_Touch_GesturectrlsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <Winapi.Messages.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.GraphUtil.hpp>
#include <Vcl.Touch.Gestures.hpp>
#include <Vcl.Touch.GestureMgr.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <System.Generics.Collections.hpp>
#include <System.SysUtils.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.Menus.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Touch
{
namespace Gesturectrls
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE TGestureProviderChangeEvent;
typedef System::DelphiInterface<TGestureProviderChangeEvent> _di_TGestureProviderChangeEvent;
__interface DELPHIINTERFACE IGestureProvider;
typedef System::DelphiInterface<IGestureProvider> _di_IGestureProvider;
class DELPHICLASS TCustomGestureListView;
class DELPHICLASS TGestureListView;
class DELPHICLASS TCustomGesturePreview;
class DELPHICLASS TGesturePreview;
class DELPHICLASS TCustomGestureRecorder;
class DELPHICLASS TGestureRecorder;
//-- type declarations -------------------------------------------------------
__interface TGestureProviderChangeEvent  : public System::IInterface 
{
	virtual void __fastcall Invoke(System::TObject* Sender, Vcl::Controls::TCustomGestureCollectionItem* AGesture) = 0 ;
};

__interface  INTERFACE_UUID("{2BBA64C5-CD16-4DF7-A89A-10903F6649BC}") IGestureProvider  : public System::IInterface 
{
	virtual void __fastcall ChangeNotification(System::Classes::TComponent* AComponent, _di_TGestureProviderChangeEvent ASelectionChangeEvent) = 0 ;
	virtual void __fastcall RemoveChangeNotification(System::Classes::TComponent* AComponent) = 0 ;
};

typedef void __fastcall (__closure *TGetGestureGroupEvent)(System::TObject* Sender, Vcl::Controls::TCustomGestureCollectionItem* Gesture, int &GroupID);

typedef void __fastcall (__closure *TCreateSubItemsEvent)(System::TObject* Sender, Vcl::Comctrls::TListItem* ListItem, Vcl::Controls::TCustomGestureCollectionItem* Gesture);

class PASCALIMPLEMENTATION TCustomGestureListView : public Vcl::Comctrls::TCustomListView
{
	typedef Vcl::Comctrls::TCustomListView inherited;
	
	
protected:
	struct DECLSPEC_DRECORD TGestureItemData
	{
	public:
		Vcl::Controls::TCustomGestureCollectionItem* Gesture;
		int GroupID;
	};
	
	
	typedef System::DynamicArray<TGestureItemData> TGestureItemDataArray;
	
	
private:
	TGestureItemDataArray FGestureData;
	Vcl::Touch::Gesturemgr::TGestureManager* FGestureManager;
	bool FGroupView;
	Vcl::Controls::TImageList* FImages;
	int FImageSize;
	System::Generics::Collections::TDictionary__2<System::Classes::TComponent*,_di_TGestureProviderChangeEvent>* FNotifyList;
	int FUpdateCount;
	TCreateSubItemsEvent FOnCreateSubItems;
	TGetGestureGroupEvent FOnGetGestureGroup;
	void __fastcall AddGestureImage(const System::Types::TPoint *Points, const int Points_High);
	void __fastcall RebuildListItem(const TGestureItemData &ItemData)/* overload */;
	void __fastcall RebuildListItem(const TGestureItemData &ItemData, Vcl::Comctrls::TListItem* ListItem)/* overload */;
	void __fastcall SetGestureManager(Vcl::Touch::Gesturemgr::TGestureManager* const Value);
	HIDESBASE void __fastcall SetGroupView(const bool Value);
	void __fastcall SetImageSize(const int Value);
	MESSAGE void __fastcall CMCustomGesturesChanged(Winapi::Messages::TMessage &Message);
	
protected:
	DYNAMIC void __fastcall Change(Vcl::Comctrls::TListItem* Item, int Change);
	virtual void __fastcall CreateColumns();
	virtual void __fastcall CreateSubItems(Vcl::Comctrls::TListItem* ListItem, Vcl::Controls::TCustomGestureCollectionItem* Gesture);
	virtual void __fastcall CreateWnd();
	virtual void __fastcall Loaded();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall UpdateGesture(Vcl::Controls::TGestureID GestureID);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	
public:
	__fastcall virtual TCustomGestureListView(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomGestureListView();
	virtual void __fastcall AddGesture(Vcl::Controls::TCustomGestureCollectionItem* Gesture, int GroupID = 0xffffffff)/* overload */;
	virtual void __fastcall AddGesture(Vcl::Controls::TGestureID GestureID, int GroupID = 0xffffffff)/* overload */;
	virtual void __fastcall AddGestures(Vcl::Controls::TControl* Control, int GroupID = 0xffffffff)/* overload */;
	virtual void __fastcall AddGestures(Vcl::Controls::TGestureArray Gestures, int GroupID = 0xffffffff)/* overload */;
	virtual void __fastcall AddGestures(Vcl::Controls::TCustomGestureCollection* Gestures, int GroupID = 0xffffffff)/* overload */;
	void __fastcall BeginUpdate();
	void __fastcall ChangeNotification(System::Classes::TComponent* AComponent, _di_TGestureProviderChangeEvent ASelectionChangeEvent);
	void __fastcall ClearGestureList();
	void __fastcall EndUpdate();
	Vcl::Controls::TGestureID __fastcall GestureIDFromItem(Vcl::Comctrls::TListItem* Item);
	Vcl::Comctrls::TListItem* __fastcall ItemFromGestureID(Vcl::Controls::TGestureID GestureID);
	void __fastcall RefreshList();
	void __fastcall RemoveChangeNotification(System::Classes::TComponent* AComponent);
	virtual void __fastcall RemoveGesture(Vcl::Controls::TGestureID GestureID);
	__property Vcl::Touch::Gesturemgr::TGestureManager* GestureManager = {read=FGestureManager, write=SetGestureManager};
	__property bool GroupView = {read=FGroupView, write=SetGroupView, nodefault};
	__property int ImageSize = {read=FImageSize, write=SetImageSize, default=20};
	__property TCreateSubItemsEvent OnCreateSubItems = {read=FOnCreateSubItems, write=FOnCreateSubItems};
	__property TGetGestureGroupEvent OnGetGestureGroup = {read=FOnGetGestureGroup, write=FOnGetGestureGroup};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomGestureListView(HWND ParentWindow) : Vcl::Comctrls::TCustomListView(ParentWindow) { }
	
private:
	void *__IGestureProvider;	// IGestureProvider 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {2BBA64C5-CD16-4DF7-A89A-10903F6649BC}
	operator _di_IGestureProvider()
	{
		_di_IGestureProvider intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IGestureProvider*(void) { return (IGestureProvider*)&__IGestureProvider; }
	#endif
	
};


class PASCALIMPLEMENTATION TGestureListView : public TCustomGestureListView
{
	typedef TCustomGestureListView inherited;
	
__published:
	__property Align = {default=0};
	__property AllocBy = {default=0};
	__property Anchors = {default=3};
	__property BevelEdges = {default=15};
	__property BevelInner = {index=0, default=2};
	__property BevelOuter = {index=1, default=1};
	__property BevelKind = {default=0};
	__property BevelWidth = {default=1};
	__property BiDiMode;
	__property BorderStyle = {default=1};
	__property BorderWidth = {default=0};
	__property Checkboxes = {default=0};
	__property Color = {default=-16777211};
	__property Columns;
	__property ColumnClick = {default=1};
	__property Constraints;
	__property Ctl3D;
	__property DoubleBuffered = {default=1};
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property FlatScrollBars = {default=0};
	__property FullDrag = {default=0};
	__property GestureManager;
	__property GridLines = {default=0};
	__property Groups;
	__property HideSelection = {default=1};
	__property HotTrack = {default=0};
	__property HotTrackStyles = {default=0};
	__property HoverTime = {default=-1};
	__property IconOptions;
	__property MultiSelect = {default=0};
	__property OwnerDraw = {default=0};
	__property GroupHeaderImages;
	__property GroupView = {default=0};
	__property ReadOnly = {default=1};
	__property RowSelect = {default=1};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentDoubleBuffered = {default=0};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ImageSize = {default=20};
	__property ShowColumnHeaders = {default=1};
	__property ShowWorkAreas = {default=0};
	__property ShowHint;
	__property SortType = {default=0};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Touch;
	__property ViewStyle = {default=3};
	__property Visible = {default=1};
	__property OnAdvancedCustomDraw;
	__property OnAdvancedCustomDrawItem;
	__property OnAdvancedCustomDrawSubItem;
	__property OnChange;
	__property OnChanging;
	__property OnClick;
	__property OnColumnClick;
	__property OnColumnDragged;
	__property OnColumnRightClick;
	__property OnCompare;
	__property OnContextPopup;
	__property OnCreateSubItems;
	__property OnCustomDraw;
	__property OnCustomDrawItem;
	__property OnCustomDrawSubItem;
	__property OnCreateItemClass;
	__property OnData;
	__property OnDataFind;
	__property OnDataHint;
	__property OnDataStateChange;
	__property OnDblClick;
	__property OnDeletion;
	__property OnDrawItem;
	__property OnEdited;
	__property OnEditing;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnGesture;
	__property OnGetGestureGroup;
	__property OnGetImageIndex;
	__property OnGetSubItemImage;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnInfoTip;
	__property OnInsert;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseActivate;
	__property OnMouseDown;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnResize;
	__property OnSelectItem;
	__property OnItemChecked;
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TCustomGestureListView.Create */ inline __fastcall virtual TGestureListView(System::Classes::TComponent* AOwner) : TCustomGestureListView(AOwner) { }
	/* TCustomGestureListView.Destroy */ inline __fastcall virtual ~TGestureListView() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TGestureListView(HWND ParentWindow) : TCustomGestureListView(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TCustomGesturePreview : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
	
private:
	enum DECLSPEC_DENUM TAnimateDirection : unsigned char { adForward, adBackward };
	
	enum DECLSPEC_DENUM TAnimateState : unsigned char { asAnimating, asCompleted, asPaused, asRestarting };
	
	
public:
	enum class DECLSPEC_DENUM TDrawingStyle : unsigned char { dsNormal, dsGradient };
	
	typedef Vcl::Graphics::TPenStyle TFrameStyle;
	
	enum DECLSPEC_DENUM TLegendPosition : unsigned char { lpNone, lpTop, lpBottom };
	
	
public:
	static const int DefGradientEndColor = int(0xf0e5e6);
	
	static const int DefGradientStartColor = int(0xfdfdfd);
	
	
private:
	bool FAnimate;
	int FAnimateIndex;
	TAnimateDirection FAnimateDirection;
	System::Uitypes::TColor FAnimatedPointColor;
	int FAnimateLastIndex;
	int FAnimateLongDelay;
	Vcl::Controls::TGesturePointArray FAnimatePoints;
	int FAnimateShortDelay;
	TAnimateState FAnimateState;
	int FAnimateStep;
	TDrawingStyle FDrawingStyle;
	Vcl::Controls::TGesturePointArray FDrawPoints;
	System::Uitypes::TColor FFrameColor;
	bool FFrameGesture;
	Vcl::Graphics::TPenStyle FFrameStyle;
	Vcl::Controls::TCustomGestureCollectionItem* FGesture;
	_di_IGestureProvider FGestureProvider;
	Vcl::Graphutil::TGradientDirection FGradientDirection;
	System::Uitypes::TColor FGradientEndColor;
	System::Uitypes::TColor FGradientStartColor;
	System::Types::TRect FLegendRect;
	TLegendPosition FLegendPosition;
	int FMaxPreviewSize;
	System::Uitypes::TColor FPreviewEndPointColor;
	System::Uitypes::TColor FPreviewLineColor;
	Vcl::Extctrls::TTimer* FTimer;
	System::Types::TPoint __fastcall AdjustGesturePoint(const System::Types::TPoint &Point);
	void __fastcall AnimateGesture(System::TObject* Sender);
	Vcl::Controls::TGesturePointArray __fastcall InterpolatePoints(const Vcl::Controls::TGesturePointArray Points);
	void __fastcall SetAnimate(const bool Value);
	void __fastcall SetAnimatedPointColor(const System::Uitypes::TColor Value);
	void __fastcall SetAnimateLongDelay(const int Value);
	void __fastcall SetAnimateShortDelay(const int Value);
	void __fastcall SetDrawingStyle(const TDrawingStyle Value);
	void __fastcall SetFrameColor(const System::Uitypes::TColor Value);
	void __fastcall SetFrameGesture(const bool Value);
	void __fastcall SetFrameStyle(const TFrameStyle Value);
	void __fastcall SetGestureProvider(const _di_IGestureProvider Value);
	void __fastcall SetGradientDirection(const Vcl::Graphutil::TGradientDirection Value);
	void __fastcall SetGradientEndColor(const System::Uitypes::TColor Value);
	void __fastcall SetGradientStartColor(const System::Uitypes::TColor Value);
	void __fastcall SetGesture(Vcl::Controls::TCustomGestureCollectionItem* const Value);
	void __fastcall SetLegendPosition(const TLegendPosition Value);
	void __fastcall SetMaxPreviewSize(const int Value);
	void __fastcall SetPreviewEndPointColor(const System::Uitypes::TColor Value);
	void __fastcall SetPreviewLineColor(const System::Uitypes::TColor Value);
	
protected:
	int FInternalPreviewSize;
	System::UnicodeString FLegendText;
	int FOffsetX;
	int FOffsetY;
	virtual void __fastcall CreateWnd();
	virtual void __fastcall DrawBackground();
	virtual void __fastcall DrawGesturePoints();
	virtual void __fastcall DrawLegend();
	virtual void __fastcall DrawPoint(const System::Types::TPoint &P, System::Uitypes::TColor AColor);
	virtual void __fastcall EraseAnimatePoint(int Index);
	virtual void __fastcall Loaded();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall Paint();
	DYNAMIC void __fastcall Resize();
	virtual void __fastcall UpdatePosition();
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	
public:
	__fastcall virtual TCustomGesturePreview(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomGesturePreview();
	void __fastcall StartAnimation();
	void __fastcall SuspendAnimation();
	__property bool Animate = {read=FAnimate, write=SetAnimate, default=1};
	__property System::Uitypes::TColor AnimatedPointColor = {read=FAnimatedPointColor, write=SetAnimatedPointColor, default=16711680};
	__property int AnimateLongDelay = {read=FAnimateLongDelay, write=SetAnimateLongDelay, default=500};
	__property int AnimateShortDelay = {read=FAnimateShortDelay, write=SetAnimateShortDelay, default=75};
	__property TDrawingStyle DrawingStyle = {read=FDrawingStyle, write=SetDrawingStyle, default=0};
	__property System::Uitypes::TColor FrameColor = {read=FFrameColor, write=SetFrameColor, default=12632256};
	__property bool FrameGesture = {read=FFrameGesture, write=SetFrameGesture, default=1};
	__property TFrameStyle FrameStyle = {read=FFrameStyle, write=SetFrameStyle, default=2};
	__property Vcl::Controls::TCustomGestureCollectionItem* Gesture = {read=FGesture, write=SetGesture};
	__property _di_IGestureProvider GestureProvider = {read=FGestureProvider, write=SetGestureProvider};
	__property Vcl::Graphutil::TGradientDirection GradientDirection = {read=FGradientDirection, write=SetGradientDirection, default=1};
	__property System::Uitypes::TColor GradientEndColor = {read=FGradientEndColor, write=SetGradientEndColor, default=15787494};
	__property System::Uitypes::TColor GradientStartColor = {read=FGradientStartColor, write=SetGradientStartColor, default=16645629};
	__property TLegendPosition LegendPosition = {read=FLegendPosition, write=SetLegendPosition, default=2};
	__property int MaxPreviewSize = {read=FMaxPreviewSize, write=SetMaxPreviewSize, default=0};
	__property System::Uitypes::TColor PreviewEndPointColor = {read=FPreviewEndPointColor, write=SetPreviewEndPointColor, default=8421504};
	__property System::Uitypes::TColor PreviewLineColor = {read=FPreviewLineColor, write=SetPreviewLineColor, default=8421504};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomGesturePreview(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TGesturePreview : public TCustomGesturePreview
{
	typedef TCustomGesturePreview inherited;
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property Animate = {default=1};
	__property AnimatedPointColor = {default=16711680};
	__property AnimateLongDelay = {default=500};
	__property AnimateShortDelay = {default=75};
	__property BevelEdges = {default=15};
	__property BevelInner = {index=0, default=2};
	__property BevelOuter = {index=1, default=1};
	__property BevelKind = {default=0};
	__property BevelWidth = {default=1};
	__property BiDiMode;
	__property Color = {default=-16777211};
	__property Constraints;
	__property Ctl3D;
	__property DoubleBuffered = {default=1};
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property DrawingStyle = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property FrameColor = {default=12632256};
	__property FrameGesture = {default=1};
	__property FrameStyle = {default=2};
	__property GestureProvider;
	__property GradientDirection = {default=1};
	__property GradientEndColor = {default=15787494};
	__property GradientStartColor = {default=16645629};
	__property Height = {default=200};
	__property LegendPosition = {default=2};
	__property MaxPreviewSize = {default=0};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=1};
	__property ParentDoubleBuffered = {default=0};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property PreviewEndPointColor = {default=8421504};
	__property PreviewLineColor = {default=8421504};
	__property ShowHint;
	__property Touch;
	__property Visible = {default=1};
	__property Width = {default=200};
	__property OnClick;
	__property OnContextPopup;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnGesture;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnMouseActivate;
	__property OnMouseDown;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnResize;
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TCustomGesturePreview.Create */ inline __fastcall virtual TGesturePreview(System::Classes::TComponent* AOwner) : TCustomGesturePreview(AOwner) { }
	/* TCustomGesturePreview.Destroy */ inline __fastcall virtual ~TGesturePreview() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TGesturePreview(HWND ParentWindow) : TCustomGesturePreview(ParentWindow) { }
	
};


typedef void __fastcall (__closure *TGestureRecordedEvent)(System::TObject* Sender, Vcl::Touch::Gesturemgr::TGestureCollectionItem* RecordedGesture);

class PASCALIMPLEMENTATION TCustomGestureRecorder : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
	
public:
	enum class DECLSPEC_DENUM TDrawingStyle : unsigned char { dsNormal, dsGradient };
	
	
public:
	static const int DefGradientEndColor = int(0xf0e5e6);
	
	static const int DefGradientStartColor = int(0xfdfdfd);
	
	
private:
	TDrawingStyle FDrawingStyle;
	Vcl::Touch::Gesturemgr::TGestureCollectionItem* FGesture;
	System::Uitypes::TColor FGestureLineColor;
	Vcl::Touch::Gesturemgr::TGestureManager* FGestureManager;
	System::Uitypes::TColor FGesturePointColor;
	Vcl::Graphutil::TGradientDirection FGradientDirection;
	System::Uitypes::TColor FGradientEndColor;
	System::Uitypes::TColor FGradientStartColor;
	int FLastDrawnPoint;
	Vcl::Controls::TGesturePointArray FPoints;
	System::Generics::Collections::TList__1<System::Types::TPoint>* FRecordedPoints;
	bool FRecording;
	System::UnicodeString FCaption;
	TGestureRecordedEvent FOnGestureRecorded;
	void __fastcall AddGesturePoint(const System::Types::TPoint &LastPoint, const System::Types::TPoint &NextPoint);
	Vcl::Controls::TGesturePointArray __fastcall PointsToArray(System::Generics::Collections::TList__1<System::Types::TPoint>* Source);
	void __fastcall SetCaption(const System::UnicodeString Value);
	void __fastcall SetDrawingStyle(const TDrawingStyle Value);
	void __fastcall SetGestureLineColor(const System::Uitypes::TColor Value);
	void __fastcall SetGesturePointColor(const System::Uitypes::TColor Value);
	void __fastcall SetGradientDirection(const Vcl::Graphutil::TGradientDirection Value);
	void __fastcall SetGradientEndColor(const System::Uitypes::TColor Value);
	void __fastcall SetGradientStartColor(const System::Uitypes::TColor Value);
	void __fastcall SetGestureManager(Vcl::Touch::Gesturemgr::TGestureManager* const Value);
	
protected:
	virtual void __fastcall DrawPoint(const System::Types::TPoint &Point);
	DYNAMIC bool __fastcall IsTouchPropertyStored(Vcl::Controls::TTouchProperty AProperty);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall Paint();
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	
public:
	__fastcall virtual TCustomGestureRecorder(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomGestureRecorder();
	__property System::UnicodeString Caption = {read=FCaption, write=SetCaption};
	__property TDrawingStyle DrawingStyle = {read=FDrawingStyle, write=SetDrawingStyle, default=0};
	__property Vcl::Touch::Gesturemgr::TGestureCollectionItem* Gesture = {read=FGesture, write=FGesture};
	__property Vcl::Touch::Gesturemgr::TGestureManager* GestureManager = {read=FGestureManager, write=SetGestureManager};
	__property System::Uitypes::TColor GestureLineColor = {read=FGestureLineColor, write=SetGestureLineColor, default=16711680};
	__property System::Uitypes::TColor GesturePointColor = {read=FGesturePointColor, write=SetGesturePointColor, default=16711680};
	__property Vcl::Graphutil::TGradientDirection GradientDirection = {read=FGradientDirection, write=SetGradientDirection, default=1};
	__property System::Uitypes::TColor GradientEndColor = {read=FGradientEndColor, write=SetGradientEndColor, default=15787494};
	__property System::Uitypes::TColor GradientStartColor = {read=FGradientStartColor, write=SetGradientStartColor, default=16645629};
	__property TGestureRecordedEvent OnGestureRecorded = {read=FOnGestureRecorded, write=FOnGestureRecorded};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomGestureRecorder(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TGestureRecorder : public TCustomGestureRecorder
{
	typedef TCustomGestureRecorder inherited;
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property BevelEdges = {default=15};
	__property BevelInner = {index=0, default=2};
	__property BevelOuter = {index=1, default=1};
	__property BevelKind = {default=0};
	__property BevelWidth = {default=1};
	__property BiDiMode;
	__property Caption;
	__property Color = {default=-16777211};
	__property Constraints;
	__property Ctl3D;
	__property DoubleBuffered = {default=1};
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property DrawingStyle = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property GestureManager;
	__property GestureLineColor = {default=16711680};
	__property GesturePointColor = {default=16711680};
	__property GradientDirection = {default=1};
	__property GradientEndColor = {default=15787494};
	__property GradientStartColor = {default=16645629};
	__property Height = {default=200};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=1};
	__property ParentDoubleBuffered = {default=0};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property Visible = {default=1};
	__property Width = {default=200};
	__property OnClick;
	__property OnContextPopup;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnGesture;
	__property OnGestureRecorded;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnMouseActivate;
	__property OnMouseDown;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnResize;
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TCustomGestureRecorder.Create */ inline __fastcall virtual TGestureRecorder(System::Classes::TComponent* AOwner) : TCustomGestureRecorder(AOwner) { }
	/* TCustomGestureRecorder.Destroy */ inline __fastcall virtual ~TGestureRecorder() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TGestureRecorder(HWND ParentWindow) : TCustomGestureRecorder(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE void __fastcall DrawGesture(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TPoint *APoints, const int APoints_High, System::Uitypes::TColor AColor)/* overload */;
extern DELPHI_PACKAGE void __fastcall DrawGesture(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TPoint *APoints, const int APoints_High, System::Uitypes::TColor AColor, const System::Types::TPoint &AOffset)/* overload */;
extern DELPHI_PACKAGE void __fastcall DrawGesture(Vcl::Graphics::TCanvas* ACanvas, Vcl::Controls::TCustomGestureCollectionItem* AGesture, System::Uitypes::TColor AColor)/* overload */;
extern DELPHI_PACKAGE void __fastcall DrawGesture(Vcl::Graphics::TCanvas* ACanvas, Vcl::Controls::TCustomGestureCollectionItem* AGesture, System::Uitypes::TColor AColor, const System::Types::TPoint &AOffset)/* overload */;
extern DELPHI_PACKAGE Vcl::Controls::TGesturePointArray __fastcall ScaleGesturePoints(const System::Types::TPoint *Points, const int Points_High, int Size);
}	/* namespace Gesturectrls */
}	/* namespace Touch */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_TOUCH_GESTURECTRLS)
using namespace Vcl::Touch::Gesturectrls;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_TOUCH)
using namespace Vcl::Touch;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_Touch_GesturectrlsHPP
