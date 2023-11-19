// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.NumberBox.pas' rev: 35.00 (Windows)

#ifndef Vcl_NumberboxHPP
#define Vcl_NumberboxHPP

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
#include <System.UITypes.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.Themes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <System.Math.hpp>
#include <System.Rtti.hpp>
#include <System.Bindings.Helper.hpp>
#include <System.Bindings.Expression.hpp>
#include <Vcl.Menus.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Numberbox
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TNumberBoxSpinButtonOptions;
class DELPHICLASS TNumberBoxButton;
class DELPHICLASS TCustomNumberBox;
class DELPHICLASS TNumberBox;
class DELPHICLASS TNumberBoxStyleHook;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TNumberBoxMode : unsigned char { nbmInteger, nbmFloat, nbmCurrency };

enum DECLSPEC_DENUM TNumberBoxSpinButtonPlacement : unsigned char { nbspNone, nbspCompact, nbspInline };

enum DECLSPEC_DENUM TNumberBoxCurrencyFormat : unsigned char { nbcfPrefix, nbcfPostfix, nbcfPrefixSpace, nbcfPostfixSpace };

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TNumberBoxSpinButtonOptions : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	int FButtonWidth;
	TCustomNumberBox* FNumberBox;
	TNumberBoxSpinButtonPlacement FPlacement;
	System::Uitypes::TColor FArrowColor;
	System::Uitypes::TColor FArrowHotColor;
	System::Uitypes::TColor FArrowPressedColor;
	System::Uitypes::TColor FArrowDisabledColor;
	bool FShowInlineDividers;
	int FArrowWidth;
	int FRepeatTimerInterval;
	void __fastcall SetArrowWidth(int AValue);
	void __fastcall SetShowInlineDividers(bool AValue);
	void __fastcall SetButtonWidth(int AValue);
	void __fastcall SetPlacement(TNumberBoxSpinButtonPlacement AValue);
	void __fastcall SetArrowColor(System::Uitypes::TColor AValue);
	void __fastcall SetArrowHotColor(System::Uitypes::TColor AValue);
	void __fastcall SetArrowPressedColor(System::Uitypes::TColor AValue);
	void __fastcall SetArrowDisabledColor(System::Uitypes::TColor AValue);
	void __fastcall Change(bool AFullUpdate);
	
public:
	__fastcall TNumberBoxSpinButtonOptions(TCustomNumberBox* ANumberBox);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property int ArrowWidth = {read=FArrowWidth, write=SetArrowWidth, default=0};
	__property int ButtonWidth = {read=FButtonWidth, write=SetButtonWidth, default=17};
	__property TNumberBoxSpinButtonPlacement Placement = {read=FPlacement, write=SetPlacement, default=0};
	__property System::Uitypes::TColor ArrowColor = {read=FArrowColor, write=SetArrowColor, default=-16777208};
	__property System::Uitypes::TColor ArrowHotColor = {read=FArrowHotColor, write=SetArrowHotColor, default=-16777208};
	__property System::Uitypes::TColor ArrowPressedColor = {read=FArrowPressedColor, write=SetArrowPressedColor, default=-16777208};
	__property System::Uitypes::TColor ArrowDisabledColor = {read=FArrowDisabledColor, write=SetArrowDisabledColor, default=-16777199};
	__property int RepeatTimerInterval = {read=FRepeatTimerInterval, write=FRepeatTimerInterval, default=100};
	__property bool ShowInlineDividers = {read=FShowInlineDividers, write=SetShowInlineDividers, default=1};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TNumberBoxSpinButtonOptions() { }
	
public:
	/* TObject.Create */ inline __fastcall TNumberBoxSpinButtonOptions() : System::Classes::TPersistent() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TNumberBoxButtonType : unsigned char { nbbtUp, nbbtDown };

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TNumberBoxButton : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TNumberBoxButtonType FButtonType;
	System::Types::TRect FButtonRect;
	bool FMouseIn;
	bool FDown;
	TCustomNumberBox* FNumberBox;
	
public:
	__fastcall TNumberBoxButton(TNumberBoxButtonType AButtonType, TCustomNumberBox* ANumberBox);
	void __fastcall Draw(Vcl::Graphics::TCanvas* ACanvas);
	void __fastcall Click();
	__property System::Types::TRect ButtonRect = {read=FButtonRect, write=FButtonRect};
	__property bool MouseIn = {read=FMouseIn, write=FMouseIn, nodefault};
	__property bool Down = {read=FDown, write=FDown, nodefault};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TNumberBoxButton() { }
	
public:
	/* TObject.Create */ inline __fastcall TNumberBoxButton() : System::Classes::TPersistent() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef void __fastcall (__closure *TNumberBoxValidateCharEvent)(System::WideChar AChar, bool &AValidated);

class PASCALIMPLEMENTATION TCustomNumberBox : public Vcl::Stdctrls::TCustomEdit
{
	typedef Vcl::Stdctrls::TCustomEdit inherited;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
private:
	bool FAcceptExpressions;
	System::UnicodeString FCurrencyString;
	System::UnicodeString FDisplayFormat;
	System::Extended FValue;
	System::Extended FMinValue;
	System::Extended FMaxValue;
	System::Extended FSmallStep;
	System::Extended FLargeStep;
	TNumberBoxMode FMode;
	System::Byte FDecimal;
	TNumberBoxSpinButtonOptions* FSpinButtonOptions;
	bool FMouseOverButtons;
	int FActiveButton;
	int FDownButton;
	System::Byte FTimerMode;
	bool FValueChanging;
	bool FTextChanging;
	System::Classes::TNotifyEvent FOnChangeValue;
	TNumberBoxValidateCharEvent FOnValidateChar;
	System::Classes::TNotifyEvent FOnEvaluateExpression;
	bool FUseNaNValue;
	bool FUseUpDownKeys;
	bool FUseMouseWheel;
	bool FWrap;
	System::Uitypes::TColor FNegativeValueColor;
	TNumberBoxCurrencyFormat FCurrencyFormat;
	void __fastcall SetDisplayFormat(const System::UnicodeString AValue);
	void __fastcall SetCurrencyString(const System::UnicodeString AValue);
	void __fastcall SetDecimal(System::Byte AValue);
	void __fastcall SetMinValue(System::Extended AValue);
	void __fastcall SetMaxValue(System::Extended AValue);
	void __fastcall SetValue(System::Extended AValue);
	void __fastcall SetMode(TNumberBoxMode AValue);
	void __fastcall SetSmallStep(System::Extended AValue);
	void __fastcall SetLargeStep(System::Extended AValue);
	void __fastcall SetAcceptExpressions(bool AValue);
	int __fastcall GetValueInt();
	System::Extended __fastcall GetValueFloat();
	System::Currency __fastcall GetValueCurrency();
	void __fastcall SetValueInt(const int AValue);
	void __fastcall SetValueFloat(const System::Extended AValue);
	void __fastcall SetValueCurrency(const System::Currency AValue);
	void __fastcall UpdateFrame(bool AFullUpdate);
	void __fastcall ShowButtons();
	void __fastcall HideButtons();
	bool __fastcall IsButtonsVisible();
	int __fastcall ButtonAtPos(const System::Types::TPoint &APos);
	void __fastcall CheckMouseLeave();
	void __fastcall SetTextFromValue();
	void __fastcall InitTimer(int ATimerMode);
	void __fastcall StartTimer(int ATimerMode);
	void __fastcall StopTimer();
	bool __fastcall IsSmallStepStored();
	bool __fastcall IsLargeStepStored();
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMExit(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Msg);
	HIDESBASE MESSAGE void __fastcall WMNCPaint(Winapi::Messages::TWMNCPaint &Message);
	HIDESBASE MESSAGE void __fastcall WMNCCalcSize(Winapi::Messages::TWMNCCalcSize &Message);
	HIDESBASE MESSAGE void __fastcall WMNCHitTest(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMSetCursor(Winapi::Messages::TWMSetCursor &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonDown(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonUp(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonDblClk(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMRButtonDown(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMMouseMove(Winapi::Messages::TWMMouse &Message);
	MESSAGE void __fastcall WMTimer(Winapi::Messages::TWMTimer &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Message);
	HIDESBASE MESSAGE void __fastcall WMChar(Winapi::Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall WMMouseWheel(Winapi::Messages::TWMMouseWheel &Message);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMCut(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMPaste(Winapi::Messages::TMessage &Message);
	bool __fastcall EditValue(const System::Extended AStep);
	void __fastcall SetNegativeValueColor(const System::Uitypes::TColor AValue);
	void __fastcall SetCurrencyFormat(const TNumberBoxCurrencyFormat AValue);
	bool __fastcall IsCurrencyFormatStored();
	bool __fastcall IsCurrencyStringStored();
	bool __fastcall IsDecimalStored();
	
protected:
	System::StaticArray<TNumberBoxButton*, 2> FButtons;
	virtual void __fastcall DrawButtons(Vcl::Graphics::TCanvas* ACanvas);
	virtual System::UnicodeString __fastcall GetDisplayText();
	virtual void __fastcall DrawDisplayText(System::UnicodeString AText, Vcl::Graphics::TCanvas* ACanvas, bool ANegative);
	void __fastcall DoButtonClick(TNumberBoxButtonType AButtonType);
	DYNAMIC void __fastcall ChangeScale(int M, int D, bool isDpiChange)/* overload */;
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	virtual bool __fastcall IsValidChar(System::WideChar AKey);
	virtual bool __fastcall IsNumericText(const System::UnicodeString AText)/* overload */;
	bool __fastcall IsNumericText()/* overload */;
	virtual System::Sysutils::TSysCharSet __fastcall GetValidCharSet(bool AAcceptExpressions);
	virtual void __fastcall DoChangeValue();
	virtual void __fastcall EvaluateExpression();
	DYNAMIC void __fastcall Change();
	virtual void __fastcall Loaded();
	
public:
	__fastcall virtual TCustomNumberBox(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomNumberBox();
	__property TNumberBoxMode Mode = {read=FMode, write=SetMode, default=0};
	__property System::Extended Value = {read=FValue, write=SetValue};
	__property int ValueInt = {read=GetValueInt, write=SetValueInt, nodefault};
	__property System::Extended ValueFloat = {read=GetValueFloat, write=SetValueFloat};
	__property System::Currency ValueCurrency = {read=GetValueCurrency, write=SetValueCurrency};
	__property System::UnicodeString CurrencyString = {read=FCurrencyString, write=SetCurrencyString, stored=IsCurrencyStringStored};
	__property TNumberBoxCurrencyFormat CurrencyFormat = {read=FCurrencyFormat, write=SetCurrencyFormat, stored=IsCurrencyFormatStored, nodefault};
	__property System::UnicodeString DisplayFormat = {read=FDisplayFormat, write=SetDisplayFormat};
	__property System::Extended MinValue = {read=FMinValue, write=SetMinValue};
	__property System::Extended MaxValue = {read=FMaxValue, write=SetMaxValue};
	__property System::Byte Decimal = {read=FDecimal, write=SetDecimal, stored=IsDecimalStored, nodefault};
	__property System::Extended SmallStep = {read=FSmallStep, write=SetSmallStep, stored=IsSmallStepStored};
	__property System::Extended LargeStep = {read=FLargeStep, write=SetLargeStep, stored=IsLargeStepStored};
	__property bool AcceptExpressions = {read=FAcceptExpressions, write=SetAcceptExpressions, default=0};
	__property TNumberBoxSpinButtonOptions* SpinButtonOptions = {read=FSpinButtonOptions, write=FSpinButtonOptions};
	__property bool UseNaNValue = {read=FUseNaNValue, write=FUseNaNValue, default=0};
	__property bool UseMouseWheel = {read=FUseMouseWheel, write=FUseMouseWheel, default=0};
	__property bool UseUpDownKeys = {read=FUseUpDownKeys, write=FUseUpDownKeys, default=1};
	__property bool Wrap = {read=FWrap, write=FWrap, default=0};
	__property System::Uitypes::TColor NegativeValueColor = {read=FNegativeValueColor, write=SetNegativeValueColor, default=536870911};
	__property System::Classes::TNotifyEvent OnChangeValue = {read=FOnChangeValue, write=FOnChangeValue};
	__property System::Classes::TNotifyEvent OnEvaluateExpression = {read=FOnEvaluateExpression, write=FOnEvaluateExpression};
	__property TNumberBoxValidateCharEvent OnValidateChar = {read=FOnValidateChar, write=FOnValidateChar};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomNumberBox(HWND ParentWindow) : Vcl::Stdctrls::TCustomEdit(ParentWindow) { }
	
	/* Hoisted overloads: */
	
protected:
	DYNAMIC inline void __fastcall  ChangeScale(int M, int D){ Vcl::Controls::TControl::ChangeScale(M, D); }
	
};


class PASCALIMPLEMENTATION TNumberBox : public TCustomNumberBox
{
	typedef TCustomNumberBox inherited;
	
__published:
	__property AcceptExpressions = {default=0};
	__property Align = {default=0};
	__property Alignment = {default=0};
	__property Anchors = {default=3};
	__property AutoSelect = {default=1};
	__property AutoSize = {default=1};
	__property BiDiMode;
	__property BorderStyle = {default=1};
	__property CharCase = {default=0};
	__property Color = {default=-16777211};
	__property Constraints;
	__property CurrencyString = {default=0};
	__property CurrencyFormat;
	__property Decimal;
	__property DisplayFormat = {default=0};
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property DoubleBuffered;
	__property Enabled = {default=1};
	__property Font;
	__property HideSelection = {default=1};
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property LargeStep = {default=0};
	__property Mode = {default=0};
	__property MinValue = {default=0};
	__property MaxValue = {default=0};
	__property MaxLength = {default=0};
	__property OEMConvert = {default=0};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentDoubleBuffered = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ReadOnly = {default=0};
	__property SmallStep = {default=0};
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property TextHint = {default=0};
	__property Touch;
	__property Value = {default=0};
	__property Visible = {default=1};
	__property SpinButtonOptions;
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property UseNaNValue = {default=0};
	__property UseMouseWheel = {default=0};
	__property UseUpDownKeys = {default=1};
	__property Wrap = {default=0};
	__property NegativeValueColor = {default=536870911};
	__property OnChange;
	__property OnChangeValue;
	__property OnClick;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEvaluateExpression;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnGesture;
	__property OnValidateChar;
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
	/* TCustomNumberBox.Create */ inline __fastcall virtual TNumberBox(System::Classes::TComponent* AOwner) : TCustomNumberBox(AOwner) { }
	/* TCustomNumberBox.Destroy */ inline __fastcall virtual ~TNumberBox() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TNumberBox(HWND ParentWindow) : TCustomNumberBox(ParentWindow) { }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TNumberBoxStyleHook : public Vcl::Stdctrls::TEditStyleHook
{
	typedef Vcl::Stdctrls::TEditStyleHook inherited;
	
protected:
	virtual void __fastcall PaintNC(Vcl::Graphics::TCanvas* Canvas);
public:
	/* TEditStyleHook.Create */ inline __fastcall virtual TNumberBoxStyleHook(Vcl::Controls::TWinControl* AControl) : Vcl::Stdctrls::TEditStyleHook(AControl) { }
	
public:
	/* TMouseTrackControlStyleHook.Destroy */ inline __fastcall virtual ~TNumberBoxStyleHook() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 cDefaultButtonWidth = System::Int8(0x11);
static const System::Int8 cDefaultSmallStep = System::Int8(0x1);
static const System::Int8 cDefaultLargeStep = System::Int8(0xa);
static const System::Int8 cDefaultRepeatTimerInterval = System::Int8(0x64);
static const TNumberBoxCurrencyFormat nbcfNone = (TNumberBoxCurrencyFormat)(4);
}	/* namespace Numberbox */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_NUMBERBOX)
using namespace Vcl::Numberbox;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_NumberboxHPP
