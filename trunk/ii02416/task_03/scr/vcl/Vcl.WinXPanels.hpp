// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.WinXPanels.pas' rev: 35.00 (Windows)

#ifndef Vcl_WinxpanelsHPP
#define Vcl_WinxpanelsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Types.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <System.Generics.Collections.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <System.Generics.Defaults.hpp>
#include <Vcl.Forms.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Menus.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Winxpanels
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS ECardPanelException;
class DELPHICLASS TCard;
class DELPHICLASS TCustomCardPanel;
class DELPHICLASS TCardPanel;
class DELPHICLASS TStackPanelControlItem;
class DELPHICLASS TStackPanelControlCollection;
class DELPHICLASS TCustomStackPanel;
class DELPHICLASS TStackPanel;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ECardPanelException : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ECardPanelException(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ECardPanelException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ECardPanelException(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ECardPanelException(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ECardPanelException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ECardPanelException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ECardPanelException(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ECardPanelException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECardPanelException(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ECardPanelException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECardPanelException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ECardPanelException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ECardPanelException() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TCard : public Vcl::Extctrls::TCustomPanel
{
	typedef Vcl::Extctrls::TCustomPanel inherited;
	
private:
	TCustomCardPanel* FCardPanel;
	bool FCardVisible;
	int __fastcall GetCardIndex();
	void __fastcall SetCardIndex(const int Value);
	bool __fastcall GetActive();
	void __fastcall SetActive(const bool Value);
	void __fastcall SetCardVisible(const bool Value);
	
protected:
	virtual void __fastcall ReadState(System::Classes::TReader* Reader);
	virtual void __fastcall SetParent(Vcl::Controls::TWinControl* AParent);
	
public:
	__fastcall virtual TCard(System::Classes::TComponent* AOwner);
	__property TCustomCardPanel* CardPanel = {read=FCardPanel};
	__property bool Active = {read=GetActive, write=SetActive, nodefault};
	
__published:
	__property Alignment = {default=2};
	__property BevelEdges = {default=15};
	__property BevelInner = {default=0};
	__property BevelKind = {default=0};
	__property BevelOuter = {default=0};
	__property BevelWidth = {default=1};
	__property BiDiMode;
	__property BorderWidth = {default=0};
	__property BorderStyle = {default=0};
	__property Caption = {default=0};
	__property int CardIndex = {read=GetCardIndex, write=SetCardIndex, nodefault};
	__property bool CardVisible = {read=FCardVisible, write=SetCardVisible, default=1};
	__property Color = {default=-16777201};
	__property Constraints;
	__property Ctl3D;
	__property UseDockManager = {default=1};
	__property DockSite = {default=0};
	__property DoubleBuffered;
	__property Enabled = {default=1};
	__property FullRepaint = {default=1};
	__property Font;
	__property Locked = {default=0};
	__property Padding;
	__property ParentBiDiMode = {default=1};
	__property ParentBackground = {default=1};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentDoubleBuffered = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowCaption = {default=0};
	__property ShowHint;
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property TabOrder = {default=-1};
	__property TabStop = {default=0};
	__property Touch;
	__property VerticalAlignment = {default=2};
	__property OnAlignInsertBefore;
	__property OnAlignPosition;
	__property OnCanResize;
	__property OnClick;
	__property OnConstrainedResize;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnEnter;
	__property OnExit;
	__property OnGesture;
	__property OnGetSiteInfo;
	__property OnMouseActivate;
	__property OnMouseDown;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnResize;
public:
	/* TCustomControl.Destroy */ inline __fastcall virtual ~TCard() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TCard(HWND ParentWindow) : Vcl::Extctrls::TCustomPanel(ParentWindow) { }
	
};


#ifndef _WIN64
typedef System::TMetaClass* TCardClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TCardClass);
#endif /* _WIN64 */

typedef void __fastcall (__closure *TCardChangeEvent)(System::TObject* Sender, TCard* PrevCard, TCard* NextCard);

class PASCALIMPLEMENTATION TCustomCardPanel : public Vcl::Extctrls::TCustomPanel
{
	typedef Vcl::Extctrls::TCustomPanel inherited;
	
private:
	int FActiveCardIndex;
	System::Generics::Collections::TList__1<TCard*>* FCardList;
	int FSavedActiveCard;
	Vcl::Controls::TControl* FInsertingControl;
	TCard* FInsertingControlCard;
	bool FLoop;
	TCardChangeEvent FOnCardChange;
	void __fastcall CardRemove(TCard* Card);
	void __fastcall Change();
	void __fastcall ChangeActiveCard(int Index);
	HIDESBASE MESSAGE void __fastcall CMControlListChanging(Vcl::Controls::TCMControlListChanging &Msg);
	void __fastcall SetActiveCardIndex(int Value);
	void __fastcall DoCardChange(TCard* PrevCard, TCard* NextCard);
	void __fastcall UpdateCardsShowing();
	int __fastcall GetCardCount();
	TCard* __fastcall GetCard(int Index);
	void __fastcall MoveCard(TCard* Card, int Index);
	TCard* __fastcall GetActiveCard();
	void __fastcall SetActiveCard(TCard* const Value);
	
protected:
	static const System::Word DefaultWidth = System::Word(0x12c);
	
	static const System::Byte DefaultHeight = System::Byte(0xc8);
	
	static const System::Int8 DefaultSpacing = System::Int8(0x2);
	
	virtual void __fastcall Loaded();
	virtual TCardClass __fastcall GetCardClass();
	virtual void __fastcall CreateHandle();
	virtual void __fastcall ShowControl(Vcl::Controls::TControl* AControl);
	
public:
	__fastcall virtual TCustomCardPanel(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomCardPanel();
	virtual TCard* __fastcall CreateNewCard();
	void __fastcall DeleteCard(int Index);
	int __fastcall FindNextCard(int Index, bool GoForward, bool CheckCardVisible);
	DYNAMIC void __fastcall GetChildren(System::Classes::TGetChildProc Proc, System::Classes::TComponent* Root);
	void __fastcall NextCard();
	void __fastcall PreviousCard();
	__property int ActiveCardIndex = {read=FActiveCardIndex, write=SetActiveCardIndex, default=-1};
	__property TCard* ActiveCard = {read=GetActiveCard, write=SetActiveCard};
	__property int CardCount = {read=GetCardCount, nodefault};
	__property TCard* Cards[int Index] = {read=GetCard};
	__property bool Loop = {read=FLoop, write=FLoop, default=1};
	__property TCardChangeEvent OnCardChange = {read=FOnCardChange, write=FOnCardChange};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomCardPanel(HWND ParentWindow) : Vcl::Extctrls::TCustomPanel(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TCardPanel : public TCustomCardPanel
{
	typedef TCustomCardPanel inherited;
	
__published:
	__property Align = {default=0};
	__property Alignment = {default=2};
	__property Anchors = {default=3};
	__property ActiveCard;
	__property AutoSize = {default=0};
	__property BevelEdges = {default=15};
	__property BevelInner = {default=0};
	__property BevelKind = {default=0};
	__property BevelOuter = {default=2};
	__property BevelWidth = {default=1};
	__property BiDiMode;
	__property BorderWidth = {default=0};
	__property BorderStyle = {default=0};
	__property Caption = {default=0};
	__property Color = {default=-16777201};
	__property Constraints;
	__property Ctl3D;
	__property UseDockManager = {default=1};
	__property DockSite = {default=0};
	__property DoubleBuffered;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property FullRepaint = {default=1};
	__property Font;
	__property Locked = {default=0};
	__property Padding;
	__property ParentBiDiMode = {default=1};
	__property ParentBackground = {default=1};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentDoubleBuffered = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowCaption = {default=0};
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=0};
	__property Touch;
	__property VerticalAlignment = {default=2};
	__property Visible = {default=1};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property OnAlignInsertBefore;
	__property OnAlignPosition;
	__property OnCanResize;
	__property OnCardChange;
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
	__property OnGetSiteInfo;
	__property OnMouseActivate;
	__property OnMouseDown;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnResize;
	__property OnStartDock;
	__property OnStartDrag;
	__property OnUnDock;
public:
	/* TCustomCardPanel.Create */ inline __fastcall virtual TCardPanel(System::Classes::TComponent* AOwner) : TCustomCardPanel(AOwner) { }
	/* TCustomCardPanel.Destroy */ inline __fastcall virtual ~TCardPanel() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TCardPanel(HWND ParentWindow) : TCustomCardPanel(ParentWindow) { }
	
};


enum DECLSPEC_DENUM TStackPanelOrientation : unsigned char { spoVertical, spoHorizontal };

enum DECLSPEC_DENUM TStackPanelControlHorizontalPositioning : unsigned char { sphpDefault, sphpLeft, sphpCenter, sphpRight, sphpFill };

typedef TStackPanelControlHorizontalPositioning TStackPanelHorizontalPositioning;

enum DECLSPEC_DENUM TStackPanelControlVerticalPositioning : unsigned char { spvpDefault, spvpTop, spvpCenter, spvpBottom, spvpFill };

typedef TStackPanelControlVerticalPositioning TStackPanelVerticalPositioning;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TStackPanelControlItem : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	Vcl::Controls::TControl* FControl;
	TStackPanelControlHorizontalPositioning FHorizontalPositioning;
	TStackPanelControlVerticalPositioning FVerticalPositioning;
	
private:
	System::Types::TRect __fastcall GetBounds();
	void __fastcall SetBounds(const System::Types::TRect &Value);
	void __fastcall SetHorizontalPositioning(TStackPanelControlHorizontalPositioning Value);
	void __fastcall SetVerticalPositioning(TStackPanelControlVerticalPositioning Value);
	
public:
	void __fastcall MapAlign();
	__fastcall virtual TStackPanelControlItem(System::Classes::TCollection* Collection);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property Vcl::Controls::TControl* Control = {read=FControl, write=FControl};
	
public:
	__property System::Types::TRect Bounds = {read=GetBounds, write=SetBounds};
	
__published:
	__property TStackPanelControlHorizontalPositioning HorizontalPositioning = {read=FHorizontalPositioning, write=SetHorizontalPositioning, default=0};
	__property TStackPanelControlVerticalPositioning VerticalPositioning = {read=FVerticalPositioning, write=SetVerticalPositioning, default=0};
public:
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TStackPanelControlItem() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TStackPanelControlCollection : public System::Classes::TOwnedCollection
{
	typedef System::Classes::TOwnedCollection inherited;
	
public:
	TStackPanelControlItem* operator[](int AIndex) { return this->Items[AIndex]; }
	
private:
	HIDESBASE TStackPanelControlItem* __fastcall GetItem(int AIndex);
	
protected:
	virtual void __fastcall Update(System::Classes::TCollectionItem* Item);
	
public:
	HIDESBASE TStackPanelControlItem* __fastcall Add();
	int __fastcall IndexOf(Vcl::Controls::TControl* AControl);
	__property TStackPanelControlItem* Items[int AIndex] = {read=GetItem/*, default*/};
public:
	/* TOwnedCollection.Create */ inline __fastcall TStackPanelControlCollection(System::Classes::TPersistent* AOwner, System::Classes::TCollectionItemClass ItemClass) : System::Classes::TOwnedCollection(AOwner, ItemClass) { }
	
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TStackPanelControlCollection() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TCustomStackPanel : public Vcl::Extctrls::TCustomPanel
{
	typedef Vcl::Extctrls::TCustomPanel inherited;
	
private:
	TStackPanelControlCollection* FControlCollection;
	TStackPanelControlHorizontalPositioning FHorizontalPositioning;
	TStackPanelOrientation FOrientation;
	int FSpacing;
	TStackPanelControlVerticalPositioning FVerticalPositioning;
	TStackPanelControlHorizontalPositioning __fastcall GetControlHorizontalPositioning(Vcl::Controls::TControl* AControl);
	int __fastcall GetControlIndex(Vcl::Controls::TControl* AControl);
	TStackPanelControlVerticalPositioning __fastcall GetControlVerticalPositioning(Vcl::Controls::TControl* AControl);
	void __fastcall MoveControlToItsCoordinates(Vcl::Controls::TControl* AMovedControl);
	void __fastcall SetControlCollection(TStackPanelControlCollection* const Value);
	void __fastcall SetControlHorizontalPositioning(Vcl::Controls::TControl* AControl, TStackPanelControlHorizontalPositioning Positioning);
	void __fastcall SetControlIndex(Vcl::Controls::TControl* AControl, int Index);
	void __fastcall SetHorizontalPositioning(const TStackPanelHorizontalPositioning Value);
	void __fastcall SetOrientation(const TStackPanelOrientation Value);
	void __fastcall SetVerticalPositioning(const TStackPanelVerticalPositioning Value);
	void __fastcall SetControlVerticalPositioning(Vcl::Controls::TControl* AControl, TStackPanelControlVerticalPositioning Positioning);
	void __fastcall SetSpacing(const int Value);
	
protected:
	static const System::Byte DefaultHeight = System::Byte(0xc8);
	
	static const System::Byte DefaultWidth = System::Byte(0xb9);
	
	static const TStackPanelControlHorizontalPositioning DefaultHorizontalPositioning = (TStackPanelControlHorizontalPositioning)(1);
	
	static const TStackPanelOrientation DefaultOrientation = (TStackPanelOrientation)(0);
	
	static const System::Int8 DefaultSpacing = System::Int8(0x2);
	
	static const TStackPanelControlVerticalPositioning DefaultVerticalPositioning = (TStackPanelControlVerticalPositioning)(2);
	
	virtual void __fastcall AlignControls(Vcl::Controls::TControl* AControl, System::Types::TRect &Rect);
	MESSAGE void __fastcall CMControlChange(Vcl::Controls::TCMControlChange &Msg);
	
public:
	__fastcall virtual TCustomStackPanel(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomStackPanel();
	DYNAMIC void __fastcall GetChildren(System::Classes::TGetChildProc Proc, System::Classes::TComponent* Root);
	__property TStackPanelControlCollection* ControlCollection = {read=FControlCollection, write=SetControlCollection};
	__property TStackPanelControlHorizontalPositioning ControlHorizontalPositioning[Vcl::Controls::TControl* AControl] = {read=GetControlHorizontalPositioning, write=SetControlHorizontalPositioning};
	__property int ControlIndex[Vcl::Controls::TControl* AControl] = {read=GetControlIndex, write=SetControlIndex};
	__property TStackPanelControlVerticalPositioning ControlVerticalPositioning[Vcl::Controls::TControl* AControl] = {read=GetControlVerticalPositioning, write=SetControlVerticalPositioning};
	__property TStackPanelHorizontalPositioning HorizontalPositioning = {read=FHorizontalPositioning, write=SetHorizontalPositioning, nodefault};
	__property TStackPanelOrientation Orientation = {read=FOrientation, write=SetOrientation, nodefault};
	__property int Spacing = {read=FSpacing, write=SetSpacing, nodefault};
	__property TStackPanelVerticalPositioning VerticalPositioning = {read=FVerticalPositioning, write=SetVerticalPositioning, nodefault};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomStackPanel(HWND ParentWindow) : Vcl::Extctrls::TCustomPanel(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TStackPanel : public TCustomStackPanel
{
	typedef TCustomStackPanel inherited;
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property AutoSize = {default=0};
	__property BevelEdges = {default=15};
	__property BevelInner = {default=0};
	__property BevelKind = {default=0};
	__property BevelOuter = {default=2};
	__property BevelWidth = {default=1};
	__property BiDiMode;
	__property BorderStyle = {default=0};
	__property BorderWidth = {default=0};
	__property Color = {default=-16777201};
	__property Constraints;
	__property ControlCollection;
	__property Ctl3D;
	__property DockSite = {default=0};
	__property DoubleBuffered;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property FullRepaint = {default=1};
	__property Height = {default=200};
	__property HorizontalPositioning = {default=1};
	__property Locked = {default=0};
	__property Orientation = {default=0};
	__property Padding;
	__property ParentBackground = {default=1};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentDoubleBuffered = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property Spacing = {default=2};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property TabOrder = {default=-1};
	__property TabStop = {default=0};
	__property Touch;
	__property UseDockManager = {default=1};
	__property VerticalPositioning = {default=2};
	__property Visible = {default=1};
	__property Width = {default=185};
	__property OnAlignInsertBefore;
	__property OnAlignPosition;
	__property OnCanResize;
	__property OnClick;
	__property OnConstrainedResize;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDockDrop;
	__property OnDockOver;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnGesture;
	__property OnGetSiteInfo;
	__property OnMouseActivate;
	__property OnMouseDown;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnResize;
	__property OnStartDock;
	__property OnStartDrag;
	__property OnUnDock;
public:
	/* TCustomStackPanel.Create */ inline __fastcall virtual TStackPanel(System::Classes::TComponent* AOwner) : TCustomStackPanel(AOwner) { }
	/* TCustomStackPanel.Destroy */ inline __fastcall virtual ~TStackPanel() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TStackPanel(HWND ParentWindow) : TCustomStackPanel(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Winxpanels */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_WINXPANELS)
using namespace Vcl::Winxpanels;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_WinxpanelsHPP
