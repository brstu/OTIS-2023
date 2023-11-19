// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.Tabs.pas' rev: 35.00 (Windows)

#ifndef Vcl_TabsHPP
#define Vcl_TabsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Controls.hpp>
#include <Winapi.Messages.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Themes.hpp>
#include <System.Generics.Collections.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.SysUtils.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Menus.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Tabs
{
//-- forward type declarations -----------------------------------------------
struct TTabPos;
class DELPHICLASS TScroller;
class DELPHICLASS TTabList;
class DELPHICLASS TTabSet;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TScrollBtn : unsigned char { sbLeft, sbRight };

enum DECLSPEC_DENUM TScrollOrientation : unsigned char { soLeftRight, soUpDown };

struct DECLSPEC_DRECORD TTabPos
{
private:
	System::Word FSize;
	System::Word FStartPos;
	
public:
	__property System::Word Size = {read=FSize, write=FSize};
	__property System::Word StartPos = {read=FStartPos, write=FStartPos};
	__fastcall TTabPos(System::Word AStartPos, System::Word ASize);
	TTabPos() {}
};


typedef System::Generics::Collections::TList__1<TTabPos>* TTabPosList;

class PASCALIMPLEMENTATION TScroller : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
private:
	int FMin;
	int FMax;
	int FPosition;
	System::Classes::TNotifyEvent FOnClick;
	int FChange;
	TScrollOrientation FScrollOrientation;
	Vcl::Graphics::TBitmap* FBitmap;
	bool FHover;
	System::Types::TPoint FHoverPoint;
	bool FPressed;
	bool FDown;
	TScrollBtn FCurrent;
	int FWidth;
	int FHeight;
	Vcl::Extctrls::TTimer* FDownTimer;
	void __fastcall SetMin(int Value);
	void __fastcall SetMax(int Value);
	void __fastcall SetPosition(int Value);
	bool __fastcall CanScrollLeft();
	bool __fastcall CanScrollRight();
	HIDESBASE void __fastcall DoMouseDown(int X);
	HIDESBASE MESSAGE void __fastcall WMLButtonDown(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonDblClk(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMMouseMove(Winapi::Messages::TWMMouse &Message);
	MESSAGE void __fastcall WMMouseLeave(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonUp(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	void __fastcall SetScrollOrientation(const TScrollOrientation Value);
	void __fastcall DoScrollTimer(System::TObject* Sender);
	
protected:
	virtual void __fastcall Paint();
	DYNAMIC void __fastcall ChangeScale(int M, int D, bool isDpiChange)/* overload */;
	
public:
	__fastcall virtual TScroller(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TScroller();
	
__published:
	__property System::Classes::TNotifyEvent OnClick = {read=FOnClick, write=FOnClick};
	__property int Min = {read=FMin, write=SetMin, default=0};
	__property int Max = {read=FMax, write=SetMax, default=0};
	__property int Position = {read=FPosition, write=SetPosition, default=0};
	__property TScrollOrientation ScrollOrientation = {read=FScrollOrientation, write=SetScrollOrientation, nodefault};
	__property int Change = {read=FChange, write=FChange, default=1};
public:
	/* TWinControl.CreateParented */ inline __fastcall TScroller(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
	/* Hoisted overloads: */
	
protected:
	DYNAMIC inline void __fastcall  ChangeScale(int M, int D){ Vcl::Controls::TControl::ChangeScale(M, D); }
	
};


class PASCALIMPLEMENTATION TTabList : public System::Classes::TStringList
{
	typedef System::Classes::TStringList inherited;
	
private:
	TTabSet* FTabSet;
	
protected:
	virtual void __fastcall Put(int Index, const System::UnicodeString S);
	
public:
	__fastcall TTabList(TTabSet* const ATabSet);
	virtual void __fastcall Insert(int Index, const System::UnicodeString S);
	virtual void __fastcall Delete(int Index);
	virtual int __fastcall Add(const System::UnicodeString S);
	virtual void __fastcall Clear();
	virtual void __fastcall AddStrings(System::Classes::TStrings* Strings)/* overload */;
public:
	/* TStringList.Destroy */ inline __fastcall virtual ~TTabList() { }
	
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  AddStrings(const System::UnicodeString *Strings, const int Strings_High){ System::Classes::TStrings::AddStrings(Strings, Strings_High); }
	inline void __fastcall  AddStrings(const System::UnicodeString *Strings, const int Strings_High, System::TObject* const *Objects, const int Objects_High){ System::Classes::TStrings::AddStrings(Strings, Strings_High, Objects, Objects_High); }
	
};


enum DECLSPEC_DENUM TEdgePart : unsigned char { epSelectedLeft, epUnselectedLeft, epSelectedRight, epUnselectedRight };

enum DECLSPEC_DENUM TEdgeType : unsigned char { etNone, etFirstIsSel, etFirstNotSel, etLastIsSel, etLastNotSel, etNotSelToSel, etSelToNotSel, etNotSelToNotSel };

enum DECLSPEC_DENUM TTabSetTabStyle : unsigned char { tsStandard, tsOwnerDraw, tsSoftTabs, tsModernTabs, tsModernPopout, tsIDETabs };

typedef TTabSetTabStyle TTabStyle;

typedef void __fastcall (__closure *TMeasureTabEvent)(System::TObject* Sender, int Index, int &TabWidth);

typedef void __fastcall (__closure *TTabSetDrawTabEvent)(System::TObject* Sender, Vcl::Graphics::TCanvas* TabCanvas, const System::Types::TRect &R, int Index, bool Selected);

typedef TTabSetDrawTabEvent TDrawTabEvent;

typedef void __fastcall (__closure *TTabChangeEvent)(System::TObject* Sender, int NewTab, bool &AllowChange);

class PASCALIMPLEMENTATION TTabSet : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
private:
	int FStartMargin;
	int FEndMargin;
	System::Classes::TStrings* FTabs;
	int FTabIndex;
	int FFirstIndex;
	int FVisibleTabs;
	System::Uitypes::TColor FSelectedColor;
	System::Uitypes::TColor FUnselectedColor;
	System::Uitypes::TColor FBackgroundColor;
	bool FDitherBackground;
	bool FAutoScroll;
	TTabSetTabStyle FStyle;
	int FOwnerDrawHeight;
	TMeasureTabEvent FOnMeasureTab;
	TTabSetDrawTabEvent FOnDrawTab;
	TTabChangeEvent FOnChange;
	Vcl::Controls::TImageList* FEdgeImageList;
	Vcl::Graphics::TBitmap* FMemBitmap;
	Vcl::Graphics::TBitmap* FBrushBitmap;
	System::Generics::Collections::TList__1<TTabPos>* FTabPositions;
	System::Generics::Collections::TList__1<TTabPos>* FSortedTabPositions;
	int FTabHeight;
	TScroller* FScroller;
	bool FDoFix;
	bool FSoftTop;
	Vcl::Imglist::TCustomImageList* FImages;
	Vcl::Imglist::TChangeLink* FImageChangeLink;
	Vcl::Comctrls::TTabGetImageEvent FOnGetImageIndex;
	bool FShrinkToFit;
	int FEdgeWidth;
	Vcl::Comctrls::TTabPosition FTabPosition;
	System::Uitypes::TColor FSelectedFontColor;
	void __fastcall SetSelectedColor(System::Uitypes::TColor Value);
	void __fastcall SetUnselectedColor(System::Uitypes::TColor Value);
	void __fastcall SetBackgroundColor(System::Uitypes::TColor Value);
	void __fastcall SetDitherBackground(bool Value);
	void __fastcall SetAutoScroll(bool Value);
	void __fastcall SetStartMargin(int Value);
	void __fastcall SetEndMargin(int Value);
	void __fastcall SetFirstIndex(int Value);
	void __fastcall SetTabList(System::Classes::TStrings* Value);
	void __fastcall SetTabStyle(TTabSetTabStyle Value);
	void __fastcall SetTabHeight(int Value);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Message);
	MESSAGE void __fastcall WMGetDlgCode(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall CMDialogChar(Winapi::Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall CMSysColorChange(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMStyleChanged(Winapi::Messages::TMessage &Message);
	void __fastcall PaintEdge(int X, int Y, int H, TEdgeType Edge);
	void __fastcall CreateBrushPattern(Vcl::Graphics::TBitmap* Bitmap);
	int __fastcall CalcTabPositions(const int AStart, const int AStop, Vcl::Graphics::TCanvas* Canvas, int First, bool FullTabs);
	void __fastcall CreateScroller();
	void __fastcall InitBitmaps();
	void __fastcall DoneBitmaps();
	void __fastcall CreateEdgeParts();
	void __fastcall FixTabPos();
	void __fastcall ScrollClick(System::TObject* Sender);
	void __fastcall SetSoftTop(const bool Value);
	void __fastcall SetImages(Vcl::Imglist::TCustomImageList* const Value);
	int __fastcall ScrollerSize();
	void __fastcall SetShrinkToFit(const bool Value);
	void __fastcall SetTabPosition(const Vcl::Comctrls::TTabPosition Value);
	void __fastcall SetFontOrientation(Vcl::Graphics::TCanvas* ACanvas);
	void __fastcall ImageListChange(System::TObject* Sender);
	void __fastcall DoDefaultPainting();
	void __fastcall DoPopoutModernPainting();
	bool __fastcall ScrollerShown();
	
protected:
	bool __fastcall CanChange(int NewIndex);
	HIDESBASE MESSAGE void __fastcall CMHintShow(Vcl::Controls::TCMHintShow &Message);
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd();
	virtual void __fastcall DrawTab(Vcl::Graphics::TCanvas* TabCanvas, const System::Types::TRect &R, int Index, bool Selected);
	virtual int __fastcall GetImageIndex(int TabIndex);
	virtual void __fastcall MeasureTab(int Index, int &TabWidth);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	void __fastcall SetupTabPositions();
	virtual void __fastcall DoIDEPainting();
	virtual void __fastcall DoModernPainting();
	virtual void __fastcall Paint();
	virtual void __fastcall UpdateStyleElements();
	virtual void __fastcall SetTabIndex(int Value);
	void __fastcall DrawLine(Vcl::Graphics::TCanvas* Canvas, int FromX, int FromY, int ToX, int ToY);
	__property TScroller* Scroller = {read=FScroller};
	__property Vcl::Graphics::TBitmap* MemBitmap = {read=FMemBitmap};
	__property System::Generics::Collections::TList__1<TTabPos>* TabPositions = {read=FTabPositions};
	
public:
	__fastcall virtual TTabSet(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TTabSet();
	DYNAMIC void __fastcall GetChildren(System::Classes::TGetChildProc Proc, System::Classes::TComponent* Root);
	int __fastcall ItemAtPos(const System::Types::TPoint &Pos, bool IgnoreTabHeight = false);
	System::Types::TRect __fastcall ItemRect(int Index);
	int __fastcall ItemWidth(int Index);
	System::Types::TRect __fastcall MinClientRect()/* overload */;
	System::Types::TRect __fastcall MinClientRect(bool IncludeScroller)/* overload */;
	System::Types::TRect __fastcall MinClientRect(int TabCount, bool IncludeScroller = false)/* overload */;
	HIDESBASE void __fastcall SelectNext(bool Direction);
	__property Canvas;
	__property int FirstIndex = {read=FFirstIndex, write=SetFirstIndex, default=0};
	__property int EdgeWidth = {read=FEdgeWidth, write=FEdgeWidth, nodefault};
	__property System::Uitypes::TColor SelectedFontColor = {read=FSelectedFontColor, write=FSelectedFontColor, nodefault};
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property bool AutoScroll = {read=FAutoScroll, write=SetAutoScroll, default=1};
	__property System::Uitypes::TColor BackgroundColor = {read=FBackgroundColor, write=SetBackgroundColor, default=-16777201};
	__property Constraints;
	__property bool DitherBackground = {read=FDitherBackground, write=SetDitherBackground, default=1};
	__property DoubleBuffered;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property int EndMargin = {read=FEndMargin, write=SetEndMargin, default=5};
	__property Font;
	__property Vcl::Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property ParentBackground = {default=0};
	__property ParentDoubleBuffered = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property bool ShrinkToFit = {read=FShrinkToFit, write=SetShrinkToFit, default=0};
	__property int StartMargin = {read=FStartMargin, write=SetStartMargin, default=5};
	__property System::Uitypes::TColor SelectedColor = {read=FSelectedColor, write=SetSelectedColor, default=-16777201};
	__property bool SoftTop = {read=FSoftTop, write=SetSoftTop, default=0};
	__property TTabSetTabStyle Style = {read=FStyle, write=SetTabStyle, default=0};
	__property int TabHeight = {read=FOwnerDrawHeight, write=SetTabHeight, default=20};
	__property System::Classes::TStrings* Tabs = {read=FTabs, write=SetTabList};
	__property int TabIndex = {read=FTabIndex, write=SetTabIndex, default=-1};
	__property Vcl::Comctrls::TTabPosition TabPosition = {read=FTabPosition, write=SetTabPosition, default=1};
	__property Touch;
	__property System::Uitypes::TColor UnselectedColor = {read=FUnselectedColor, write=SetUnselectedColor, default=-16777211};
	__property Visible = {default=1};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property int VisibleTabs = {read=FVisibleTabs, nodefault};
	__property OnAlignInsertBefore;
	__property OnAlignPosition;
	__property OnClick;
	__property TTabChangeEvent OnChange = {read=FOnChange, write=FOnChange};
	__property OnDragDrop;
	__property OnDragOver;
	__property TTabSetDrawTabEvent OnDrawTab = {read=FOnDrawTab, write=FOnDrawTab};
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnGesture;
	__property Vcl::Comctrls::TTabGetImageEvent OnGetImageIndex = {read=FOnGetImageIndex, write=FOnGetImageIndex};
	__property OnMouseActivate;
	__property OnMouseDown;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
	__property TMeasureTabEvent OnMeasureTab = {read=FOnMeasureTab, write=FOnMeasureTab};
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TWinControl.CreateParented */ inline __fastcall TTabSet(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Tabs */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_TABS)
using namespace Vcl::Tabs;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_TabsHPP
