// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.Buttons.pas' rev: 35.00 (Windows)

#ifndef Vcl_ButtonsHPP
#define Vcl_ButtonsHPP

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
#include <Vcl.Forms.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Winapi.CommCtrl.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.Themes.hpp>
#include <System.UITypes.hpp>
#include <System.Generics.Collections.hpp>
#include <System.SysUtils.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.Types.hpp>
#include <System.Actions.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.ActnList.hpp>

//-- user supplied -----------------------------------------------------------
#ifndef _WIN64
#pragma link "dwmapi.lib"
#endif //_WIN64

namespace Vcl
{
namespace Buttons
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TSpeedButtonActionLink;
class DELPHICLASS TCustomSpeedButton;
class DELPHICLASS TSpeedButton;
class DELPHICLASS TBitBtnActionLink;
class DELPHICLASS TBitBtn;
class DELPHICLASS TBitBtnStyleHook;
class DELPHICLASS TBaseNavigator;
class DELPHICLASS TNavButton;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TButtonLayout : unsigned char { blGlyphLeft, blGlyphRight, blGlyphTop, blGlyphBottom };

enum DECLSPEC_DENUM TButtonState : unsigned char { bsUp, bsDisabled, bsDown, bsExclusive };

enum DECLSPEC_DENUM TButtonStyle : unsigned char { bsAutoDetect, bsWin31, bsNew };

typedef System::Int8 TNumGlyphs;

class PASCALIMPLEMENTATION TSpeedButtonActionLink : public Vcl::Controls::TControlActionLink
{
	typedef Vcl::Controls::TControlActionLink inherited;
	
protected:
	TSpeedButton* FClient;
	int FImageIndex;
	virtual void __fastcall AssignClient(System::TObject* AClient);
	virtual bool __fastcall IsCheckedLinked();
	virtual bool __fastcall IsGlyphLinked(System::Uitypes::TImageIndex Index);
	virtual bool __fastcall IsGroupIndexLinked();
	virtual bool __fastcall IsImageIndexLinked();
	virtual bool __fastcall IsImageNameLinked();
	virtual void __fastcall SetGroupIndex(int Value);
	virtual void __fastcall SetChecked(bool Value);
	virtual void __fastcall SetImageIndex(int Value);
	
public:
	__fastcall virtual TSpeedButtonActionLink(System::TObject* AClient);
public:
	/* TBasicActionLink.Destroy */ inline __fastcall virtual ~TSpeedButtonActionLink() { }
	
};


class PASCALIMPLEMENTATION TCustomSpeedButton : public Vcl::Controls::TGraphicControl
{
	typedef Vcl::Controls::TGraphicControl inherited;
	
private:
	int FGroupIndex;
	System::TObject* FGlyph;
	bool FDown;
	bool FDragging;
	bool FAllowAllUp;
	TButtonLayout FLayout;
	int FSpacing;
	bool FTransparent;
	int FMargin;
	bool FFlat;
	bool FMouseInControl;
	Vcl::Imglist::TChangeLink* FImageChangeLink;
	System::Uitypes::TImageName FImageName;
	System::Uitypes::TImageName FDisabledImageName;
	System::Uitypes::TImageName FHotImageName;
	System::Uitypes::TImageName FPressedImageName;
	System::Uitypes::TImageName FSelectedImageName;
	void __fastcall SetImageName(const System::Uitypes::TImageName Value);
	void __fastcall SetHotImageName(const System::Uitypes::TImageName Value);
	void __fastcall SetDisabledImageName(const System::Uitypes::TImageName Value);
	void __fastcall SetPressedImageName(const System::Uitypes::TImageName Value);
	void __fastcall SetSelectedImageName(const System::Uitypes::TImageName Value);
	void __fastcall GlyphChanged(System::TObject* Sender);
	void __fastcall ImageListChange(System::TObject* Sender);
	bool __fastcall HasCustomGlyph();
	void __fastcall InternalCopyImage(Vcl::Graphics::TBitmap* Image, Vcl::Imglist::TCustomImageList* ImageList, int Index);
	void __fastcall UpdateExclusive();
	Vcl::Graphics::TBitmap* __fastcall GetGlyph();
	void __fastcall SetGlyph(Vcl::Graphics::TBitmap* Value);
	TNumGlyphs __fastcall GetNumGlyphs();
	void __fastcall SetNumGlyphs(TNumGlyphs Value);
	void __fastcall SetDown(bool Value);
	void __fastcall SetFlat(bool Value);
	void __fastcall SetAllowAllUp(bool Value);
	void __fastcall SetGroupIndex(int Value);
	void __fastcall SetLayout(TButtonLayout Value);
	void __fastcall SetSpacing(int Value);
	void __fastcall SetTransparent(bool Value);
	void __fastcall SetMargin(int Value);
	Vcl::Imglist::TCustomImageList* __fastcall GetImages();
	void __fastcall SetImages(Vcl::Imglist::TCustomImageList* Value);
	System::Uitypes::TImageIndex __fastcall GetImageIndex();
	void __fastcall SetImageIndex(System::Uitypes::TImageIndex Value);
	System::Uitypes::TImageIndex __fastcall GetHotImageIndex();
	void __fastcall SetHotImageIndex(System::Uitypes::TImageIndex Value);
	System::Uitypes::TImageIndex __fastcall GetPressedImageIndex();
	void __fastcall SetPressedImageIndex(System::Uitypes::TImageIndex Value);
	System::Uitypes::TImageIndex __fastcall GetDisabledImageIndex();
	void __fastcall SetDisabledImageIndex(System::Uitypes::TImageIndex Value);
	System::Uitypes::TImageIndex __fastcall GetSelectedImageIndex();
	void __fastcall SetSelectedImageIndex(System::Uitypes::TImageIndex Value);
	void __fastcall UpdateTracking();
	bool __fastcall IsImageIndexStored();
	bool __fastcall IsImageNameStored();
	HIDESBASE MESSAGE void __fastcall WMLButtonDblClk(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMDialogChar(Winapi::Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMTextChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMSysColorChange(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMButtonPressed(Winapi::Messages::TMessage &Message);
	
protected:
	TButtonState FState;
	DYNAMIC void __fastcall ActionChange(System::TObject* Sender, bool CheckDefaults);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	void __fastcall CopyImage(Vcl::Imglist::TCustomImageList* ImageList, int Index);
	DYNAMIC Vcl::Controls::TControlActionLinkClass __fastcall GetActionLinkClass();
	DYNAMIC HPALETTE __fastcall GetPalette();
	virtual void __fastcall Loaded();
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall Paint();
	void __fastcall CheckImageIndexes();
	void __fastcall UpdateImageName(System::Uitypes::TImageIndex Index, System::Uitypes::TImageName &Name);
	void __fastcall UpdateImageIndex(System::Uitypes::TImageName Name, System::Uitypes::TImageIndex &Index);
	__property bool AllowAllUp = {read=FAllowAllUp, write=SetAllowAllUp, default=0};
	__property int GroupIndex = {read=FGroupIndex, write=SetGroupIndex, default=0};
	__property bool Down = {read=FDown, write=SetDown, default=0};
	__property System::Uitypes::TImageIndex DisabledImageIndex = {read=GetDisabledImageIndex, write=SetDisabledImageIndex, default=-1};
	__property System::Uitypes::TImageName DisabledImageName = {read=FDisabledImageName, write=SetDisabledImageName};
	__property System::Uitypes::TImageIndex ImageIndex = {read=GetImageIndex, write=SetImageIndex, stored=IsImageIndexStored, default=-1};
	__property System::Uitypes::TImageName ImageName = {read=FImageName, write=SetImageName, stored=IsImageNameStored};
	__property Vcl::Imglist::TCustomImageList* Images = {read=GetImages, write=SetImages};
	__property bool LocalDragging = {read=FDragging, write=FDragging, nodefault};
	__property bool MouseInControl = {read=FMouseInControl, nodefault};
	__property System::Uitypes::TImageIndex HotImageIndex = {read=GetHotImageIndex, write=SetHotImageIndex, default=-1};
	__property System::Uitypes::TImageName HotImageName = {read=FHotImageName, write=SetHotImageName};
	__property bool Flat = {read=FFlat, write=SetFlat, default=0};
	__property Vcl::Graphics::TBitmap* Glyph = {read=GetGlyph, write=SetGlyph, stored=HasCustomGlyph};
	__property TButtonLayout Layout = {read=FLayout, write=SetLayout, default=0};
	__property int Margin = {read=FMargin, write=SetMargin, default=-1};
	__property TNumGlyphs NumGlyphs = {read=GetNumGlyphs, write=SetNumGlyphs, default=1};
	__property System::Uitypes::TImageIndex PressedImageIndex = {read=GetPressedImageIndex, write=SetPressedImageIndex, default=-1};
	__property System::Uitypes::TImageName PressedImageName = {read=FPressedImageName, write=SetPressedImageName};
	__property System::Uitypes::TImageIndex SelectedImageIndex = {read=GetSelectedImageIndex, write=SetSelectedImageIndex, default=-1};
	__property System::Uitypes::TImageName SelectedImageName = {read=FSelectedImageName, write=SetSelectedImageName};
	__property int Spacing = {read=FSpacing, write=SetSpacing, default=4};
	__property bool Transparent = {read=FTransparent, write=SetTransparent, default=1};
	
public:
	__fastcall virtual TCustomSpeedButton(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomSpeedButton();
	DYNAMIC void __fastcall Click();
};


class PASCALIMPLEMENTATION TSpeedButton : public TCustomSpeedButton
{
	typedef TCustomSpeedButton inherited;
	
__published:
	__property Action;
	__property Align = {default=0};
	__property AllowAllUp = {default=0};
	__property Anchors = {default=3};
	__property BiDiMode;
	__property Constraints;
	__property GroupIndex = {default=0};
	__property Down = {default=0};
	__property DisabledImageIndex = {default=-1};
	__property DisabledImageName = {default=0};
	__property Caption = {default=0};
	__property ImageIndex = {default=-1};
	__property ImageName = {default=0};
	__property Images;
	__property Enabled = {default=1};
	__property HotImageIndex = {default=-1};
	__property HotImageName = {default=0};
	__property Flat = {default=0};
	__property Font;
	__property Glyph;
	__property Layout = {default=0};
	__property Margin = {default=-1};
	__property NumGlyphs = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property ParentBiDiMode = {default=1};
	__property PopupMenu;
	__property PressedImageIndex = {default=-1};
	__property PressedImageName = {default=0};
	__property ShowHint;
	__property SelectedImageIndex = {default=-1};
	__property SelectedImageName = {default=0};
	__property Spacing = {default=4};
	__property Transparent = {default=1};
	__property Visible = {default=1};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property OnClick;
	__property OnDblClick;
	__property OnMouseActivate;
	__property OnMouseDown;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
public:
	/* TCustomSpeedButton.Create */ inline __fastcall virtual TSpeedButton(System::Classes::TComponent* AOwner) : TCustomSpeedButton(AOwner) { }
	/* TCustomSpeedButton.Destroy */ inline __fastcall virtual ~TSpeedButton() { }
	
};


class PASCALIMPLEMENTATION TBitBtnActionLink : public Vcl::Controls::TControlActionLink
{
	typedef Vcl::Controls::TControlActionLink inherited;
	
protected:
	TBitBtn* FClient;
	int FImageIndex;
	virtual void __fastcall AssignClient(System::TObject* AClient);
	virtual bool __fastcall IsImageIndexLinked();
	bool __fastcall IsGlyphLinked(System::Uitypes::TImageIndex Index);
	virtual void __fastcall SetImageIndex(int Value);
	
public:
	__fastcall virtual TBitBtnActionLink(System::TObject* AClient);
public:
	/* TBasicActionLink.Destroy */ inline __fastcall virtual ~TBitBtnActionLink() { }
	
};


enum DECLSPEC_DENUM TBitBtnKind : unsigned char { bkCustom, bkOK, bkCancel, bkHelp, bkYes, bkNo, bkClose, bkAbort, bkRetry, bkIgnore, bkAll };

class PASCALIMPLEMENTATION TBitBtn : public Vcl::Stdctrls::TCustomButton
{
	typedef Vcl::Stdctrls::TCustomButton inherited;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
private:
	Vcl::Graphics::TCanvas* FCanvas;
	System::TObject* FGlyph;
	TButtonStyle FStyle;
	TBitBtnKind FKind;
	TButtonLayout FLayout;
	int FSpacing;
	int FMargin;
	bool IsFocused;
	bool FModifiedGlyph;
	bool FMouseInControl;
	void __fastcall DrawItem(const tagDRAWITEMSTRUCT &DrawItemStruct);
	void __fastcall SetGlyph(Vcl::Graphics::TBitmap* Value);
	Vcl::Graphics::TBitmap* __fastcall GetGlyph();
	TNumGlyphs __fastcall GetNumGlyphs();
	void __fastcall SetNumGlyphs(TNumGlyphs Value);
	void __fastcall GlyphChanged(System::TObject* Sender);
	void __fastcall InternalCopyImage(Vcl::Graphics::TBitmap* Image, Vcl::Imglist::TCustomImageList* ImageList, int Index);
	bool __fastcall IsCustom();
	bool __fastcall IsCustomCaption();
	HIDESBASE void __fastcall SetStyle(TButtonStyle Value);
	void __fastcall SetKind(TBitBtnKind Value);
	TBitBtnKind __fastcall GetKind();
	void __fastcall SetLayout(TButtonLayout Value);
	void __fastcall SetSpacing(int Value);
	void __fastcall SetMargin(int Value);
	MESSAGE void __fastcall CNMeasureItem(Winapi::Messages::TWMMeasureItem &Message);
	MESSAGE void __fastcall CNDrawItem(Winapi::Messages::TWMDrawItem &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonDblClk(Winapi::Messages::TWMMouse &Message);
	
protected:
	DYNAMIC void __fastcall ActionChange(System::TObject* Sender, bool CheckDefaults);
	void __fastcall CopyImage(Vcl::Imglist::TCustomImageList* ImageList, int Index);
	virtual void __fastcall CreateHandle();
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	DYNAMIC Vcl::Controls::TControlActionLinkClass __fastcall GetActionLinkClass();
	DYNAMIC HPALETTE __fastcall GetPalette();
	virtual void __fastcall SetButtonStyle(bool ADefault);
	virtual void __fastcall UpdateStyleElements();
	virtual void __fastcall UpdateImageList();
	virtual void __fastcall UpdateImages();
	virtual void __fastcall UpdateImage();
	virtual void __fastcall SetImageList(NativeUInt AHandle);
	
public:
	__fastcall virtual TBitBtn(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TBitBtn();
	DYNAMIC void __fastcall Click();
	
__published:
	__property Action;
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property BiDiMode;
	__property Cancel = {stored=IsCustom, default=0};
	__property Caption = {stored=IsCustomCaption, default=0};
	__property Constraints;
	__property Default = {stored=IsCustom, default=0};
	__property DisabledImageIndex = {default=-1};
	__property DisabledImageName = {default=0};
	__property DoubleBuffered = {default=1};
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property HotImageIndex = {default=-1};
	__property HotImageName = {default=0};
	__property ImageIndex = {default=-1};
	__property ImageName = {default=0};
	__property Images;
	__property Vcl::Graphics::TBitmap* Glyph = {read=GetGlyph, write=SetGlyph, stored=IsCustom};
	__property TBitBtnKind Kind = {read=GetKind, write=SetKind, default=0};
	__property TButtonLayout Layout = {read=FLayout, write=SetLayout, default=0};
	__property int Margin = {read=FMargin, write=SetMargin, default=-1};
	__property ModalResult = {stored=IsCustom, default=0};
	__property TNumGlyphs NumGlyphs = {read=GetNumGlyphs, write=SetNumGlyphs, default=1};
	__property ParentBiDiMode = {default=1};
	__property ParentDoubleBuffered = {default=0};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PressedImageIndex = {default=-1};
	__property PressedImageName = {default=0};
	__property PopupMenu;
	__property ShowHint;
	__property SelectedImageIndex = {default=-1};
	__property SelectedImageName = {default=0};
	__property TButtonStyle Style = {read=FStyle, write=SetStyle, default=0};
	__property int Spacing = {read=FSpacing, write=SetSpacing, default=4};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Visible = {default=1};
	__property WordWrap = {default=0};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
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
	/* TWinControl.CreateParented */ inline __fastcall TBitBtn(HWND ParentWindow) : Vcl::Stdctrls::TCustomButton(ParentWindow) { }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TBitBtnStyleHook : public Vcl::Stdctrls::TButtonStyleHook
{
	typedef Vcl::Stdctrls::TButtonStyleHook inherited;
	
protected:
	virtual void __fastcall DrawButton(Vcl::Graphics::TCanvas* ACanvas, bool AMouseInControl);
public:
	/* TButtonStyleHook.Create */ inline __fastcall virtual TBitBtnStyleHook(Vcl::Controls::TWinControl* AControl) : Vcl::Stdctrls::TButtonStyleHook(AControl) { }
	
public:
	/* TMouseTrackControlStyleHook.Destroy */ inline __fastcall virtual ~TBitBtnStyleHook() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef int TNavBtnID;

class PASCALIMPLEMENTATION TBaseNavigator : public Vcl::Extctrls::TCustomPanel
{
	typedef Vcl::Extctrls::TCustomPanel inherited;
	
	
public:
	enum class DECLSPEC_DENUM TOrientation : unsigned char { orHorizontal, orVertical };
	
	
protected:
	struct DECLSPEC_DRECORD TButtonDescription
	{
	public:
		int ID;
		bool AllowTimer;
		bool DefaultVisible;
		System::UnicodeString DefaultHint;
		NativeUInt GlyphResInstance;
		System::UnicodeString GlyphResName;
		Vcl::Themes::TThemedDataNavButtons ThemeNormal;
		Vcl::Themes::TThemedDataNavButtons ThemeHot;
		Vcl::Themes::TThemedDataNavButtons ThemeDisabled;
		Vcl::Themes::TThemedDataNavButtons ThemePressed;
	};
	
	
	
private:
	struct DECLSPEC_DRECORD TButtonInstance
	{
	public:
		TNavButton* Instance;
		TBaseNavigator::TButtonDescription Description;
		bool __fastcall Visible();
		void __fastcall Invalidate();
		void __fastcall Click();
		bool __fastcall Enabled();
	};
	
	
	
private:
	System::Generics::Collections::TDictionary__2<int,TButtonInstance>* FButtonInstances;
	System::Generics::Collections::TList__1<int>* FBtnIDs;
	int ButtonWidth;
	int ButtonHeight;
	System::Types::TPoint MinBtnSize;
	int FocusedButton;
	bool FConfirmDelete;
	bool FFlat;
	TOrientation FOrientation;
	void __fastcall BtnMouseDown(System::TObject* Sender, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall ClickHandler(System::TObject* Sender);
	void __fastcall InitButtons();
	void __fastcall SetFlat(bool Value);
	void __fastcall SetKind(TOrientation Value);
	void __fastcall SetSize(int &W, int &H);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Message);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TWMKillFocus &Message);
	MESSAGE void __fastcall WMGetDlgCode(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMWindowPosChanging(Winapi::Messages::TWMWindowPosMsg &Message);
	
protected:
	virtual void __fastcall BtnIDClick(int Index);
#ifndef _WIN64
	void __fastcall DefineButtons(System::DynamicArray<TButtonDescription> ADescriptions);
#else /* _WIN64 */
	void __fastcall DefineButtons(System::TArray__1<TButtonDescription> ADescriptions);
#endif /* _WIN64 */
	TNavButton* __fastcall GetButton(int Index);
#ifndef _WIN64
	HIDESBASE void __fastcall SetVisible(System::DynamicArray<int> Value);
#else /* _WIN64 */
	HIDESBASE void __fastcall SetVisible(System::TArray__1<int> Value);
#endif /* _WIN64 */
	virtual void __fastcall EnabledChanged();
	void __fastcall CalcMinSize(int &W, int &H);
	virtual void __fastcall CreateWnd();
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall Loaded();
	virtual void __fastcall Paint();
	virtual void __fastcall SetButtonGlyph(int Index);
	
public:
	__fastcall virtual TBaseNavigator(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TBaseNavigator();
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	DYNAMIC void __fastcall GetChildren(System::Classes::TGetChildProc Proc, System::Classes::TComponent* Root);
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property Constraints;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property bool Flat = {read=FFlat, write=SetFlat, default=0};
	__property Ctl3D;
	__property TOrientation Orientation = {read=FOrientation, write=SetKind, nodefault};
	__property ParentCtl3D = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property bool ConfirmDelete = {read=FConfirmDelete, write=FConfirmDelete, default=1};
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=0};
	__property Visible = {default=1};
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnResize;
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TWinControl.CreateParented */ inline __fastcall TBaseNavigator(HWND ParentWindow) : Vcl::Extctrls::TCustomPanel(ParentWindow) { }
	
};


enum DECLSPEC_DENUM Vcl_Buttons__8 : unsigned char { nsAllowTimer };

typedef System::Set<Vcl_Buttons__8, Vcl_Buttons__8::nsAllowTimer, Vcl_Buttons__8::nsAllowTimer> TNavButtonStyle;

class PASCALIMPLEMENTATION TNavButton : public TSpeedButton
{
	typedef TSpeedButton inherited;
	
private:
	static const System::Word InitRepeatPause = System::Word(0x190);
	
	static const System::Int8 RepeatPause = System::Int8(0x64);
	
	int FIndex;
	TNavButtonStyle FNavStyle;
	Vcl::Extctrls::TTimer* FRepeatTimer;
	Vcl::Themes::TThemedDataNavButtons FThemeHot;
	Vcl::Themes::TThemedDataNavButtons FThemePressed;
	Vcl::Themes::TThemedDataNavButtons FThemeNormal;
	Vcl::Themes::TThemedDataNavButtons FThemeDisabled;
	void __fastcall TimerExpired(System::TObject* Sender);
	
protected:
	virtual void __fastcall Paint();
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	
public:
	__fastcall virtual ~TNavButton();
	__property TNavButtonStyle NavStyle = {read=FNavStyle, write=FNavStyle, nodefault};
	__property int Index = {read=FIndex, write=FIndex, nodefault};
	__property Vcl::Themes::TThemedDataNavButtons ThemeHot = {read=FThemeHot, write=FThemeHot, nodefault};
	__property Vcl::Themes::TThemedDataNavButtons ThemeNormal = {read=FThemeNormal, write=FThemeNormal, nodefault};
	__property Vcl::Themes::TThemedDataNavButtons ThemeDisabled = {read=FThemeDisabled, write=FThemeDisabled, nodefault};
	__property Vcl::Themes::TThemedDataNavButtons ThemePressed = {read=FThemePressed, write=FThemePressed, nodefault};
public:
	/* TCustomSpeedButton.Create */ inline __fastcall virtual TNavButton(System::Classes::TComponent* AOwner) : TSpeedButton(AOwner) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::Types::TRect __fastcall DrawButtonFace(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &Client, int BevelWidth, TButtonStyle Style, bool IsRounded, bool IsDown, bool IsFocused);
}	/* namespace Buttons */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_BUTTONS)
using namespace Vcl::Buttons;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_ButtonsHPP
