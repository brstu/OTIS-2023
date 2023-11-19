// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.WinXCtrls.pas' rev: 35.00 (Windows)

#ifndef Vcl_WinxctrlsHPP
#define Vcl_WinxctrlsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.ImageCollection.hpp>
#include <Vcl.VirtualImageList.hpp>
#include <System.UITypes.hpp>
#include <Vcl.ActnList.hpp>
#include <System.Actions.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.Themes.hpp>
#include <System.Types.hpp>
#include <Vcl.Forms.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Winxctrls
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TCustomActivityIndicator;
class DELPHICLASS TActivityIndicator;
class DELPHICLASS TToggleSwitchStateCaptions;
class DELPHICLASS TToggleSwitchActionLink;
class DELPHICLASS TCustomToggleSwitch;
class DELPHICLASS TToggleSwitch;
class DELPHICLASS TSearchBoxStyleHook;
class DELPHICLASS TSearchBox;
class DELPHICLASS ERelativePanelException;
class DELPHICLASS TRelativePanelControlItem;
class DELPHICLASS TRelativePanelControlCollection;
class DELPHICLASS TCustomRelativePanel;
class DELPHICLASS TRelativePanel;
class DELPHICLASS TCustomSplitView;
class DELPHICLASS TSplitView;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TActivityIndicatorColor : unsigned char { aicBlack, aicWhite };

enum DECLSPEC_DENUM TActivityIndicatorSize : unsigned char { aisSmall, aisMedium, aisLarge, aisXLarge };

enum DECLSPEC_DENUM TActivityIndicatorType : unsigned char { aitMomentumDots, aitRotatingSector, aitSectorRing };

class PASCALIMPLEMENTATION TCustomActivityIndicator : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
private:
	bool FAnimate;
	TActivityIndicatorColor FIndicatorColor;
	TActivityIndicatorSize FIndicatorSize;
	TActivityIndicatorType FIndicatorType;
	System::Word FFrameDelay;
	int FFrameIndex;
	Vcl::Extctrls::TTimer* FTimer;
	Vcl::Controls::TImageList* FFrameList;
	int FFrameCount;
	int FFrameSize;
	Vcl::Graphics::TBitmap* FFrameBitmap;
	bool FLoadedFrames;
	void __fastcall TimerExpired(System::TObject* Sender);
	void __fastcall SetAnimate(bool Value);
	void __fastcall SetFrameDelay(System::Word Value);
	void __fastcall SetIndicatorColor(TActivityIndicatorColor Value);
	void __fastcall SetIndicatorSize(TActivityIndicatorSize Value);
	void __fastcall SetIndicatorType(TActivityIndicatorType Value);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Msg);
	
protected:
	virtual void __fastcall ReloadFrames();
	virtual void __fastcall DrawFrame();
	virtual void __fastcall Paint();
	DYNAMIC void __fastcall Resize();
	__property bool Animate = {read=FAnimate, write=SetAnimate, default=0};
	__property System::Word FrameDelay = {read=FFrameDelay, write=SetFrameDelay, default=50};
	__property TActivityIndicatorColor IndicatorColor = {read=FIndicatorColor, write=SetIndicatorColor, default=0};
	__property TActivityIndicatorSize IndicatorSize = {read=FIndicatorSize, write=SetIndicatorSize, default=1};
	__property TActivityIndicatorType IndicatorType = {read=FIndicatorType, write=SetIndicatorType, default=0};
	
public:
	__fastcall virtual TCustomActivityIndicator(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomActivityIndicator();
	void __fastcall StartAnimation();
	void __fastcall StopAnimation();
	
__published:
	__property Height = {stored=false};
	__property Width = {stored=false};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomActivityIndicator(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TActivityIndicator : public TCustomActivityIndicator
{
	typedef TCustomActivityIndicator inherited;
	
__published:
	__property Anchors = {default=3};
	__property Animate = {default=0};
	__property FrameDelay = {default=50};
	__property IndicatorColor = {default=0};
	__property IndicatorSize = {default=1};
	__property IndicatorType = {default=0};
public:
	/* TCustomActivityIndicator.Create */ inline __fastcall virtual TActivityIndicator(System::Classes::TComponent* AOwner) : TCustomActivityIndicator(AOwner) { }
	/* TCustomActivityIndicator.Destroy */ inline __fastcall virtual ~TActivityIndicator() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TActivityIndicator(HWND ParentWindow) : TCustomActivityIndicator(ParentWindow) { }
	
};


enum DECLSPEC_DENUM TToggleSwitchState : unsigned char { tssOff, tssOn };

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TToggleSwitchStateCaptions : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TCustomToggleSwitch* FToggleSwitch;
	System::UnicodeString FCaptionOn;
	System::UnicodeString FCaptionOff;
	void __fastcall SetCaptionOn(const System::UnicodeString Value);
	bool __fastcall IsCaptionOnStored();
	void __fastcall SetCaptionOff(const System::UnicodeString Value);
	bool __fastcall IsCaptionOffStored();
	
public:
	__fastcall TToggleSwitchStateCaptions(TCustomToggleSwitch* ToggleSwitch);
	
__published:
	__property System::UnicodeString CaptionOn = {read=FCaptionOn, write=SetCaptionOn, stored=IsCaptionOnStored};
	__property System::UnicodeString CaptionOff = {read=FCaptionOff, write=SetCaptionOff, stored=IsCaptionOffStored};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TToggleSwitchStateCaptions() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TToggleSwitchActionLink : public Vcl::Controls::TWinControlActionLink
{
	typedef Vcl::Controls::TWinControlActionLink inherited;
	
protected:
	TCustomToggleSwitch* FClient;
	virtual void __fastcall AssignClient(System::TObject* AClient);
	virtual bool __fastcall IsCheckedLinked();
	virtual void __fastcall SetChecked(bool Value);
public:
	/* TBasicActionLink.Create */ inline __fastcall virtual TToggleSwitchActionLink(System::TObject* AClient) : Vcl::Controls::TWinControlActionLink(AClient) { }
	/* TBasicActionLink.Destroy */ inline __fastcall virtual ~TToggleSwitchActionLink() { }
	
};


#ifndef _WIN64
typedef System::TMetaClass* TToggleSwitchActionLinkClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TToggleSwitchActionLinkClass);
#endif /* _WIN64 */

class PASCALIMPLEMENTATION TCustomToggleSwitch : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
private:
	System::Classes::TAlignment FAlignment;
	bool FAutoSize;
	bool FReadOnly;
	TToggleSwitchState FState;
	TToggleSwitchStateCaptions* FStateCaptions;
	bool FShowStateCaption;
	System::Uitypes::TColor FDisabledColor;
	System::Uitypes::TColor FFrameColor;
	System::Uitypes::TColor FThumbColor;
	bool FKeyToggle;
	int FSwitchWidth;
	int FSwitchHeight;
	int FThumbWidth;
	bool __fastcall ShowFocus();
	void __fastcall SetAlignment(System::Classes::TLeftRight Value);
	void __fastcall SetDisabledColor(System::Uitypes::TColor Value);
	void __fastcall SetFrameColor(System::Uitypes::TColor Value);
	void __fastcall SetState(TToggleSwitchState Value);
	bool __fastcall IsStateStored();
	void __fastcall SetShowStateCaption(bool Value);
	void __fastcall SetStateCaptions(TToggleSwitchStateCaptions* Value);
	void __fastcall SetSwitchHeight(int Value);
	void __fastcall SetSwitchWidth(int Value);
	void __fastcall SetThumbColor(System::Uitypes::TColor Value);
	void __fastcall SetThumbWidth(int Value);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall CMColorChanged(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall CMParentColorChanged(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall CMTextChanged(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Msg);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Msg);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TWMKillFocus &Msg);
	
protected:
	bool FClicksDisabled;
	Vcl::Graphics::TBitmap* FBackgroundBmp;
	bool FUsingMouse;
	virtual void __fastcall CreateWnd();
	virtual void __fastcall Loaded();
	DYNAMIC void __fastcall AdjustBounds();
	DYNAMIC void __fastcall ChangeScale(int M, int D, bool isDpiChange)/* overload */;
	virtual void __fastcall ChangeState();
	DYNAMIC void __fastcall ActionChange(System::TObject* Sender, bool CheckDefaults);
	DYNAMIC Vcl::Controls::TControlActionLinkClass __fastcall GetActionLinkClass();
	virtual void __fastcall GetGlyphPosition(int &X, int &Y);
	void __fastcall UpdateDisplay();
	void __fastcall RepaintDisplay();
	System::UnicodeString __fastcall GetActiveStateCaption();
	void __fastcall DrawSwitch(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall Paint();
	DYNAMIC void __fastcall Click();
	DYNAMIC void __fastcall DoExit();
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyUp(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall SetAutoSize(bool Value);
	__property System::Classes::TLeftRight Alignment = {read=FAlignment, write=SetAlignment, default=1};
	__property bool AutoSize = {read=FAutoSize, write=SetAutoSize, default=1};
	__property System::Uitypes::TColor DisabledColor = {read=FDisabledColor, write=SetDisabledColor, default=-16777200};
	__property System::Uitypes::TColor FrameColor = {read=FFrameColor, write=SetFrameColor, default=-16777208};
	__property bool ReadOnly = {read=FReadOnly, write=FReadOnly, default=0};
	__property TToggleSwitchState State = {read=FState, write=SetState, stored=IsStateStored, default=0};
	__property TToggleSwitchStateCaptions* StateCaptions = {read=FStateCaptions, write=SetStateCaptions};
	__property bool ShowStateCaption = {read=FShowStateCaption, write=SetShowStateCaption, default=1};
	__property int SwitchHeight = {read=FSwitchHeight, write=SetSwitchHeight, default=20};
	__property int SwitchWidth = {read=FSwitchWidth, write=SetSwitchWidth, default=50};
	__property System::Uitypes::TColor ThumbColor = {read=FThumbColor, write=SetThumbColor, default=-16777208};
	__property int ThumbWidth = {read=FThumbWidth, write=SetThumbWidth, default=15};
	__property Color = {default=-16777211};
	__property ParentColor = {default=0};
	__property TabStop = {default=1};
	
public:
	__fastcall virtual TCustomToggleSwitch(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomToggleSwitch();
	DYNAMIC System::Classes::TAlignment __fastcall GetControlsAlignment();
	bool __fastcall IsOn();
	
__published:
	__property Height = {default=50};
	__property Width = {default=80};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomToggleSwitch(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
	/* Hoisted overloads: */
	
protected:
	DYNAMIC inline void __fastcall  ChangeScale(int M, int D){ Vcl::Controls::TControl::ChangeScale(M, D); }
	
};


class PASCALIMPLEMENTATION TToggleSwitch : public TCustomToggleSwitch
{
	typedef TCustomToggleSwitch inherited;
	
__published:
	__property Action;
	__property Align = {default=0};
	__property Alignment = {default=1};
	__property Anchors = {default=3};
	__property AutoSize = {default=1};
	__property BiDiMode;
	__property Color = {default=-16777211};
	__property Constraints;
	__property DisabledColor = {default=-16777200};
	__property DoubleBuffered;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property FrameColor = {default=-16777208};
	__property Height = {default=50};
	__property HelpContext = {default=0};
	__property Hint = {default=0};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentDoubleBuffered = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ReadOnly = {default=0};
	__property ShowHint;
	__property ShowStateCaption = {default=1};
	__property State = {default=0};
	__property StateCaptions;
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property SwitchHeight = {default=20};
	__property SwitchWidth = {default=50};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property ThumbColor = {default=-16777208};
	__property ThumbWidth = {default=15};
	__property Visible = {default=1};
	__property Width = {default=80};
	__property OnClick;
	__property OnContextPopup;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseActivate;
	__property OnMouseDown;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TCustomToggleSwitch.Create */ inline __fastcall virtual TToggleSwitch(System::Classes::TComponent* AOwner) : TCustomToggleSwitch(AOwner) { }
	/* TCustomToggleSwitch.Destroy */ inline __fastcall virtual ~TToggleSwitch() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TToggleSwitch(HWND ParentWindow) : TCustomToggleSwitch(ParentWindow) { }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TSearchBoxStyleHook : public Vcl::Stdctrls::TEditStyleHook
{
	typedef Vcl::Stdctrls::TEditStyleHook inherited;
	
private:
	HIDESBASE MESSAGE void __fastcall WMNCCalcSize(Winapi::Messages::TWMNCCalcSize &Msg);
	
protected:
	virtual void __fastcall PaintNC(Vcl::Graphics::TCanvas* Canvas);
	
public:
	__fastcall virtual TSearchBoxStyleHook(Vcl::Controls::TWinControl* AControl);
public:
	/* TMouseTrackControlStyleHook.Destroy */ inline __fastcall virtual ~TSearchBoxStyleHook() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TSearchBoxIndicator : unsigned char { sbiText, sbiAudio };

class PASCALIMPLEMENTATION TSearchBox : public Vcl::Stdctrls::TEdit
{
	typedef Vcl::Stdctrls::TEdit inherited;
	
private:
	static Vcl::Imagecollection::TImageCollection* FButtonImageCollection;
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
private:
	TSearchBoxIndicator FSearchIndicator;
	Vcl::Virtualimagelist::TVirtualImageList* FButtonImages;
	int FButtonWidth;
	System::Types::TRect FButtonRect;
	bool FMouseOverButton;
	bool FButtonDown;
	System::Classes::TNotifyEvent FOnInvokeSearch;
	void __fastcall SetButtonWidth(int Value);
	void __fastcall SetSearchIndicator(TSearchBoxIndicator Value);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Msg);
	MESSAGE void __fastcall CMWantSpecialKey(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall WMNCPaint(Winapi::Messages::TWMNCPaint &Msg);
	HIDESBASE MESSAGE void __fastcall WMNCHitTest(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall WMNCCalcSize(Winapi::Messages::TWMNCCalcSize &Msg);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall WMLButtonDown(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall WMLButtonUp(Winapi::Messages::TWMMouse &Msg);
	HIDESBASE MESSAGE void __fastcall WMLButtonDblClk(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall WMRButtonDown(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall WMSetCursor(Winapi::Messages::TWMSetCursor &Msg);
	
protected:
	Vcl::Graphics::TCanvas* FCanvas;
	DYNAMIC void __fastcall ChangeScale(int M, int D, bool isDpiChange)/* overload */;
	void __fastcall LoadImages();
	void __fastcall RepaintButton();
	virtual void __fastcall DrawButton(Vcl::Graphics::TCanvas* Canvas);
	void __fastcall MouseCancel();
	DYNAMIC void __fastcall InvokeSearch();
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	__property Vcl::Graphics::TCanvas* Canvas = {read=FCanvas};
	
public:
	__fastcall virtual TSearchBox(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TSearchBox();
	
__published:
	__property int ButtonWidth = {read=FButtonWidth, write=SetButtonWidth, default=24};
	__property TSearchBoxIndicator SearchIndicator = {read=FSearchIndicator, write=SetSearchIndicator, default=0};
	__property System::Classes::TNotifyEvent OnInvokeSearch = {read=FOnInvokeSearch, write=FOnInvokeSearch};
public:
	/* TWinControl.CreateParented */ inline __fastcall TSearchBox(HWND ParentWindow) : Vcl::Stdctrls::TEdit(ParentWindow) { }
	
	/* Hoisted overloads: */
	
protected:
	DYNAMIC inline void __fastcall  ChangeScale(int M, int D){ Vcl::Controls::TControl::ChangeScale(M, D); }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ERelativePanelException : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ERelativePanelException(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ERelativePanelException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ERelativePanelException(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ERelativePanelException(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ERelativePanelException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ERelativePanelException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ERelativePanelException(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ERelativePanelException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ERelativePanelException(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ERelativePanelException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ERelativePanelException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ERelativePanelException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ERelativePanelException() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TRelativePanelControlItem : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	Vcl::Controls::TControl* FControl;
	int FSaveWidth;
	int FSaveHeight;
	Vcl::Controls::TControl* FAbove;
	Vcl::Controls::TControl* FAlignBottomWith;
	bool FAlignBottomWithPanel;
	Vcl::Controls::TControl* FAlignHorizontalCenterWith;
	bool FAlignHorizontalCenterWithPanel;
	Vcl::Controls::TControl* FAlignLeftWith;
	bool FAlignLeftWithPanel;
	Vcl::Controls::TControl* FAlignRightWith;
	bool FAlignRightWithPanel;
	Vcl::Controls::TControl* FAlignTopWith;
	bool FAlignTopWithPanel;
	Vcl::Controls::TControl* FAlignVerticalCenterWith;
	bool FAlignVerticalCenterWithPanel;
	Vcl::Controls::TControl* FBelow;
	Vcl::Controls::TControl* FLeftOf;
	Vcl::Controls::TControl* FRightOf;
	void __fastcall SetControl(Vcl::Controls::TControl* Value);
	void __fastcall SetAbove(Vcl::Controls::TControl* Value);
	void __fastcall SetAlignBottomWith(Vcl::Controls::TControl* Value);
	void __fastcall SetAlignBottomWithPanel(bool Value);
	void __fastcall SetAlignHorizontalCenterWith(Vcl::Controls::TControl* Value);
	void __fastcall SetAlignHorizontalCenterWithPanel(bool Value);
	void __fastcall SetAlignLeftWith(Vcl::Controls::TControl* Value);
	void __fastcall SetAlignLeftWithPanel(bool Value);
	void __fastcall SetAlignRightWith(Vcl::Controls::TControl* Value);
	void __fastcall SetAlignRightWithPanel(bool Value);
	void __fastcall SetAlignTopWith(Vcl::Controls::TControl* Value);
	void __fastcall SetAlignTopWithPanel(bool Value);
	void __fastcall SetAlignVerticalCenterWith(Vcl::Controls::TControl* Value);
	void __fastcall SetAlignVerticalCenterWithPanel(bool Value);
	void __fastcall SetBelow(Vcl::Controls::TControl* Value);
	void __fastcall SetLeftOf(Vcl::Controls::TControl* Value);
	void __fastcall SetRightOf(Vcl::Controls::TControl* Value);
	TRelativePanel* __fastcall GetRelativePanel();
	
protected:
	void __fastcall CheckControl(Vcl::Controls::TControl* Value);
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	virtual System::UnicodeString __fastcall GetDisplayName();
	__property TRelativePanel* RelativePanel = {read=GetRelativePanel};
	
public:
	__fastcall virtual TRelativePanelControlItem(System::Classes::TCollection* Collection);
	__fastcall virtual ~TRelativePanelControlItem();
	void __fastcall CheckSaveWidth();
	void __fastcall CheckSaveHeight();
	__property int SaveWidth = {read=FSaveWidth, write=FSaveWidth, nodefault};
	__property int SaveHeight = {read=FSaveHeight, write=FSaveHeight, nodefault};
	
__published:
	__property Vcl::Controls::TControl* Control = {read=FControl, write=SetControl};
	__property Vcl::Controls::TControl* Above = {read=FAbove, write=SetAbove};
	__property Vcl::Controls::TControl* AlignBottomWith = {read=FAlignBottomWith, write=SetAlignBottomWith};
	__property bool AlignBottomWithPanel = {read=FAlignBottomWithPanel, write=SetAlignBottomWithPanel, nodefault};
	__property Vcl::Controls::TControl* AlignHorizontalCenterWith = {read=FAlignHorizontalCenterWith, write=SetAlignHorizontalCenterWith};
	__property bool AlignHorizontalCenterWithPanel = {read=FAlignHorizontalCenterWithPanel, write=SetAlignHorizontalCenterWithPanel, nodefault};
	__property Vcl::Controls::TControl* AlignLeftWith = {read=FAlignLeftWith, write=SetAlignLeftWith};
	__property bool AlignLeftWithPanel = {read=FAlignLeftWithPanel, write=SetAlignLeftWithPanel, nodefault};
	__property Vcl::Controls::TControl* AlignRightWith = {read=FAlignRightWith, write=SetAlignRightWith};
	__property bool AlignRightWithPanel = {read=FAlignRightWithPanel, write=SetAlignRightWithPanel, nodefault};
	__property Vcl::Controls::TControl* AlignTopWith = {read=FAlignTopWith, write=SetAlignTopWith};
	__property bool AlignTopWithPanel = {read=FAlignTopWithPanel, write=SetAlignTopWithPanel, nodefault};
	__property Vcl::Controls::TControl* AlignVerticalCenterWith = {read=FAlignVerticalCenterWith, write=SetAlignVerticalCenterWith};
	__property bool AlignVerticalCenterWithPanel = {read=FAlignVerticalCenterWithPanel, write=SetAlignVerticalCenterWithPanel, nodefault};
	__property Vcl::Controls::TControl* Below = {read=FBelow, write=SetBelow};
	__property Vcl::Controls::TControl* LeftOf = {read=FLeftOf, write=SetLeftOf};
	__property Vcl::Controls::TControl* RightOf = {read=FRightOf, write=SetRightOf};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TRelativePanelControlCollection : public System::Classes::TOwnedCollection
{
	typedef System::Classes::TOwnedCollection inherited;
	
public:
	TRelativePanelControlItem* operator[](int Index) { return this->Items[Index]; }
	
protected:
	Vcl::Controls::TControl* __fastcall GetControl(int Index);
	HIDESBASE TRelativePanelControlItem* __fastcall GetItem(int Index);
	void __fastcall SetControl(int Index, Vcl::Controls::TControl* Value);
	HIDESBASE void __fastcall SetItem(int Index, TRelativePanelControlItem* Value);
	virtual void __fastcall Update(System::Classes::TCollectionItem* Item);
	
public:
	__fastcall TRelativePanelControlCollection(System::Classes::TPersistent* AOwner);
	HIDESBASE TRelativePanelControlItem* __fastcall Add();
	void __fastcall AddControl(Vcl::Controls::TControl* AControl);
	void __fastcall RemoveControl(Vcl::Controls::TControl* AControl);
	int __fastcall IndexOf(Vcl::Controls::TControl* AControl);
	HIDESBASE TRelativePanel* __fastcall Owner();
	__property Vcl::Controls::TControl* Controls[int Index] = {read=GetControl, write=SetControl};
	__property TRelativePanelControlItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TRelativePanelControlCollection() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TCustomRelativePanel : public Vcl::Extctrls::TCustomPanel
{
	typedef Vcl::Extctrls::TCustomPanel inherited;
	
private:
	TRelativePanelControlCollection* FControlCollection;
	void __fastcall SetControlCollection(TRelativePanelControlCollection* const Value);
	MESSAGE void __fastcall CMControlChange(Vcl::Controls::TCMControlChange &Msg);
	void __fastcall AlignControlsToPanel(const System::Types::TRect &APanelRect);
	void __fastcall AlignControlsToSibling();
	
protected:
	virtual void __fastcall AlignControls(Vcl::Controls::TControl* AControl, System::Types::TRect &Rect);
	
public:
	__fastcall virtual TCustomRelativePanel(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomRelativePanel();
	DYNAMIC void __fastcall GetChildren(System::Classes::TGetChildProc Proc, System::Classes::TComponent* Root);
	int __fastcall GetControlIndex(Vcl::Controls::TControl* AControl);
	void __fastcall SetControlIndex(Vcl::Controls::TControl* AControl, int Index);
	
__published:
	__property TRelativePanelControlCollection* ControlCollection = {read=FControlCollection, write=SetControlCollection};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomRelativePanel(HWND ParentWindow) : Vcl::Extctrls::TCustomPanel(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TRelativePanel : public TCustomRelativePanel
{
	typedef TCustomRelativePanel inherited;
	
public:
	__property DockManager;
	
__published:
	__property Align = {default=0};
	__property Alignment = {default=2};
	__property Anchors = {default=3};
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
	__property ShowCaption = {default=1};
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
	/* TCustomRelativePanel.Create */ inline __fastcall virtual TRelativePanel(System::Classes::TComponent* AOwner) : TCustomRelativePanel(AOwner) { }
	/* TCustomRelativePanel.Destroy */ inline __fastcall virtual ~TRelativePanel() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TRelativePanel(HWND ParentWindow) : TCustomRelativePanel(ParentWindow) { }
	
};


enum DECLSPEC_DENUM TSplitViewDisplayMode : unsigned char { svmDocked, svmOverlay };

enum DECLSPEC_DENUM TSplitViewCloseStyle : unsigned char { svcCollapse, svcCompact };

enum DECLSPEC_DENUM TSplitViewPlacement : unsigned char { svpLeft, svpRight };

enum DECLSPEC_DENUM TSplitViewState : unsigned char { svsOpened, svsOpening, svsClosed, svsClosing };

class PASCALIMPLEMENTATION TCustomSplitView : public Vcl::Extctrls::TCustomPanel
{
	typedef Vcl::Extctrls::TCustomPanel inherited;
	
private:
	TSplitViewCloseStyle FCloseStyle;
	int FCompactWidth;
	TSplitViewDisplayMode FDisplayMode;
	int FOpenedWidth;
	TSplitViewPlacement FPlacement;
	System::Classes::TNotifyEvent FOnOpening;
	System::Classes::TNotifyEvent FOnOpened;
	System::Classes::TNotifyEvent FOnClosing;
	System::Classes::TNotifyEvent FOnClosed;
	Vcl::Controls::TWinControl* FOverlayPadding;
	TSplitViewState FState;
	System::Word FAnimationStep;
	System::Word FAnimationDelay;
	bool FUseAnimation;
	Vcl::Extctrls::TTimer* FAnimationTimer;
	void __fastcall SetAnimationDelay(System::Word Value);
	void __fastcall SetCloseStyle(TSplitViewCloseStyle Value);
	void __fastcall SetCompactWidth(int Value);
	void __fastcall SetDisplayMode(TSplitViewDisplayMode Value);
	bool __fastcall GetOpened();
	void __fastcall SetOpened(bool Value);
	void __fastcall SetOpenedWidth(int Value);
	void __fastcall SetPlacement(TSplitViewPlacement Value);
	int __fastcall GetWidth();
	HIDESBASE void __fastcall SetWidth(int Value);
	void __fastcall AnimationTimerHandler(System::TObject* Sender);
	
protected:
	virtual void __fastcall ConstrainedResize(int &MinWidth, int &MinHeight, int &MaxWidth, int &MaxHeight);
	DYNAMIC void __fastcall ChangeScale(int M, int D, bool isDpiChange)/* overload */;
	virtual void __fastcall SetParent(Vcl::Controls::TWinControl* AParent);
	virtual void __fastcall SetState(TSplitViewState Value);
	DYNAMIC void __fastcall DoClosing();
	DYNAMIC void __fastcall DoClosed();
	DYNAMIC void __fastcall DoOpening();
	DYNAMIC void __fastcall DoOpened();
	__property System::Word AnimationDelay = {read=FAnimationDelay, write=SetAnimationDelay, default=15};
	__property System::Word AnimationStep = {read=FAnimationStep, write=FAnimationStep, default=20};
	__property TSplitViewCloseStyle CloseStyle = {read=FCloseStyle, write=SetCloseStyle, default=0};
	__property int CompactWidth = {read=FCompactWidth, write=SetCompactWidth, default=50};
	__property TSplitViewDisplayMode DisplayMode = {read=FDisplayMode, write=SetDisplayMode, default=0};
	__property bool Opened = {read=GetOpened, write=SetOpened, default=1};
	__property int OpenedWidth = {read=FOpenedWidth, write=SetOpenedWidth, nodefault};
	__property TSplitViewPlacement Placement = {read=FPlacement, write=SetPlacement, nodefault};
	__property bool UseAnimation = {read=FUseAnimation, write=FUseAnimation, default=1};
	__property int Width = {read=GetWidth, write=SetWidth, nodefault};
	__property System::Classes::TNotifyEvent OnClosed = {read=FOnClosed, write=FOnClosed};
	__property System::Classes::TNotifyEvent OnClosing = {read=FOnClosing, write=FOnClosing};
	__property System::Classes::TNotifyEvent OnOpened = {read=FOnOpened, write=FOnOpened};
	__property System::Classes::TNotifyEvent OnOpening = {read=FOnOpening, write=FOnOpening};
	__property BevelOuter = {default=0};
	__property DoubleBuffered = {default=1};
	__property ParentBackground = {default=0};
	__property ParentDoubleBuffered = {default=0};
	__property UseDockManager = {default=1};
	
public:
	__fastcall virtual TCustomSplitView(System::Classes::TComponent* AOwner);
	void __fastcall Open();
	void __fastcall Close();
	__property DockManager;
public:
	/* TCustomControl.Destroy */ inline __fastcall virtual ~TCustomSplitView() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomSplitView(HWND ParentWindow) : Vcl::Extctrls::TCustomPanel(ParentWindow) { }
	
	/* Hoisted overloads: */
	
protected:
	DYNAMIC inline void __fastcall  ChangeScale(int M, int D){ Vcl::Controls::TControl::ChangeScale(M, D); }
	
};


class PASCALIMPLEMENTATION TSplitView : public TCustomSplitView
{
	typedef TCustomSplitView inherited;
	
__published:
	__property AnimationDelay = {default=15};
	__property AnimationStep = {default=20};
	__property BevelEdges = {default=15};
	__property BevelInner = {default=0};
	__property BevelKind = {default=0};
	__property BevelOuter = {default=0};
	__property BevelWidth = {default=1};
	__property BiDiMode;
	__property BorderWidth = {default=0};
	__property BorderStyle = {default=0};
	__property CloseStyle = {default=0};
	__property Color = {default=-16777201};
	__property CompactWidth = {default=50};
	__property Constraints;
	__property DisplayMode = {default=0};
	__property UseDockManager = {default=1};
	__property DockSite = {default=0};
	__property DoubleBuffered = {default=1};
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property FullRepaint = {default=1};
	__property Font;
	__property Locked = {default=0};
	__property Opened = {default=1};
	__property OpenedWidth;
	__property Padding;
	__property ParentBiDiMode = {default=1};
	__property ParentBackground = {default=0};
	__property ParentColor = {default=0};
	__property ParentDoubleBuffered = {default=0};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property Placement;
	__property PopupMenu;
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=0};
	__property Touch;
	__property UseAnimation = {default=1};
	__property Visible = {default=1};
	__property Width;
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property OnAlignInsertBefore;
	__property OnAlignPosition;
	__property OnCanResize;
	__property OnClick;
	__property OnClosed;
	__property OnClosing;
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
	__property OnOpened;
	__property OnOpening;
	__property OnResize;
	__property OnStartDock;
	__property OnStartDrag;
	__property OnUnDock;
public:
	/* TCustomSplitView.Create */ inline __fastcall virtual TSplitView(System::Classes::TComponent* AOwner) : TCustomSplitView(AOwner) { }
	
public:
	/* TCustomControl.Destroy */ inline __fastcall virtual ~TSplitView() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TSplitView(HWND ParentWindow) : TCustomSplitView(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 DefaultActivityIndicatorFrameDelay = System::Int8(0x32);
static const System::Int8 DefaultSwitchWidth = System::Int8(0x32);
static const System::Int8 DefaultSwitchHeight = System::Int8(0x14);
static const System::Int8 DefaultSwitchThumbWidth = System::Int8(0xf);
static const System::Int8 DefaultSearchButtonWidth = System::Int8(0x18);
static const int DefaultToggleSwitchDisabledColor = int(-16777200);
static const int DefaultToggleSwitchFrameColor = int(-16777208);
static const int DefaultToggleSwitchThumbColor = int(-16777208);
static const int DefaultToggleSwitchTrackColor = int(-16777211);
static const System::Int8 DefaultToggleSwitchHeight = System::Int8(0x32);
static const System::Int8 DefaultToggleSwitchWidth = System::Int8(0x50);
static const System::Int8 DefaultSplitViewCompactWidth = System::Int8(0x32);
static const System::Byte DefaultSplitViewOpenedWidth = System::Byte(0xc8);
static const System::Int8 DefaultSplitViewAnimationDelay = System::Int8(0xf);
static const System::Int8 DefaultSplitViewAnimationStep = System::Int8(0x14);
static const System::Int8 DefaultSearchButtonImageSize = System::Int8(0x10);
}	/* namespace Winxctrls */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_WINXCTRLS)
using namespace Vcl::Winxctrls;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_WinxctrlsHPP
