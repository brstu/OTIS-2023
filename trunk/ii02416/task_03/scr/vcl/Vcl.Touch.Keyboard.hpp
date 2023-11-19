// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.Touch.Keyboard.pas' rev: 35.00 (Windows)

#ifndef Vcl_Touch_KeyboardHPP
#define Vcl_Touch_KeyboardHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Vcl.Touch.KeyboardTypes.hpp>
#include <System.Generics.Collections.hpp>
#include <Vcl.Controls.hpp>
#include <System.Classes.hpp>
#include <Winapi.Messages.hpp>
#include <Winapi.Windows.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Graphics.hpp>
#include <System.Types.hpp>
#include <System.SysUtils.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Touch
{
namespace Keyboard
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TCustomKeyboardButton;
class DELPHICLASS TKeyboardButton;
class DELPHICLASS TButtonList;
class DELPHICLASS TKeyCaptions;
class DELPHICLASS TKeyboardLayouts;
class DELPHICLASS TCustomTouchKeyboard;
class DELPHICLASS TTouchKeyboard;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCustomKeyboardButton : public System::TObject
{
	typedef System::TObject inherited;
	
	
public:
	enum class DECLSPEC_DENUM TDrawState : unsigned char { dsNormal, dsPressed, dsDisabled };
	
	
private:
	System::UnicodeString FCaption;
	TDrawState FState;
	Vcl::Touch::Keyboardtypes::TVirtualKey FKey;
	bool FModifier;
	bool FDown;
	int FID;
	Vcl::Touch::Keyboardtypes::TKeyImage FKeyImage;
	
private:
	int FBottomMargin;
	int FTopMargin;
	int FLeft;
	int FTop;
	int FHeight;
	int FWidth;
	TCustomTouchKeyboard* FParent;
	void __fastcall SetCaption(const System::UnicodeString Value);
	void __fastcall SetState(const TDrawState Value, bool Delay);
	System::Types::TRect __fastcall GetBoundsRect();
	void __fastcall SetBoundsRect(const System::Types::TRect &Value);
	System::Types::TRect __fastcall GetClientRect();
	
public:
	__fastcall TCustomKeyboardButton(const Vcl::Touch::Keyboardtypes::TVirtualKey &AKey);
	virtual void __fastcall Paint(Vcl::Graphics::TCustomCanvas* Canvas = (Vcl::Graphics::TCustomCanvas*)(0x0));
	__property int BottomMargin = {read=FBottomMargin, nodefault};
	__property System::Types::TRect BoundsRect = {read=GetBoundsRect, write=SetBoundsRect};
	__property System::UnicodeString Caption = {read=FCaption, write=SetCaption};
	__property System::Types::TRect ClientRect = {read=GetClientRect};
	__property bool Down = {read=FDown, write=FDown, nodefault};
	__property int Height = {read=FHeight, nodefault};
	__property int ID = {read=FID, write=FID, nodefault};
	__property Vcl::Touch::Keyboardtypes::TVirtualKey Key = {read=FKey};
	__property Vcl::Touch::Keyboardtypes::TKeyImage KeyImage = {read=FKeyImage, write=FKeyImage, nodefault};
	__property int Left = {read=FLeft, nodefault};
	__property bool Modifier = {read=FModifier, write=FModifier, nodefault};
	__property TCustomTouchKeyboard* Parent = {read=FParent};
	__property TDrawState State = {read=FState, nodefault};
	__property int Top = {read=FTop, nodefault};
	__property int TopMargin = {read=FTopMargin, nodefault};
	__property int Width = {read=FWidth, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TCustomKeyboardButton() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TKeyboardButton : public TCustomKeyboardButton
{
	typedef TCustomKeyboardButton inherited;
	
public:
	/* TCustomKeyboardButton.Create */ inline __fastcall TKeyboardButton(const Vcl::Touch::Keyboardtypes::TVirtualKey &AKey) : TCustomKeyboardButton(AKey) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TKeyboardButton() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TButtonList : public System::Generics::Collections::TList__1<TCustomKeyboardButton*>
{
	typedef System::Generics::Collections::TList__1<TCustomKeyboardButton*> inherited;
	
public:
	/* {System_Generics_Collections}TList<Vcl_Touch_Keyboard_TCustomKeyboardButton>.Create */ inline __fastcall TButtonList()/* overload */ : System::Generics::Collections::TList__1<TCustomKeyboardButton*>() { }
	/* {System_Generics_Collections}TList<Vcl_Touch_Keyboard_TCustomKeyboardButton>.Create */ inline __fastcall TButtonList(const System::DelphiInterface<System::Generics::Defaults::IComparer__1<TCustomKeyboardButton*> > AComparer)/* overload */ : System::Generics::Collections::TList__1<TCustomKeyboardButton*>(AComparer) { }
	/* {System_Generics_Collections}TList<Vcl_Touch_Keyboard_TCustomKeyboardButton>.Create */ inline __fastcall TButtonList(System::Generics::Collections::TEnumerable__1<TCustomKeyboardButton*>* const Collection)/* overload */ : System::Generics::Collections::TList__1<TCustomKeyboardButton*>(Collection) { }
	/* {System_Generics_Collections}TList<Vcl_Touch_Keyboard_TCustomKeyboardButton>.Create */ inline __fastcall TButtonList(TCustomKeyboardButton* const *Values, const int Values_High)/* overload */ : System::Generics::Collections::TList__1<TCustomKeyboardButton*>(Values, Values_High) { }
	/* {System_Generics_Collections}TList<Vcl_Touch_Keyboard_TCustomKeyboardButton>.Destroy */ inline __fastcall virtual ~TButtonList() { }
	
};


#ifndef _WIN64
typedef System::TMetaClass* TCustomKeyboardButtonClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TCustomKeyboardButtonClass);
#endif /* _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TKeyCaptions : /*[[sealed]]*/ public System::TObject
{
	typedef System::TObject inherited;
	
	
public:
#ifndef _WIN64
	#pragma pack(push,8)
#endif /* not _WIN64 */
	struct DECLSPEC_DRECORD TKeyCaption
	{
	public:
		System::UnicodeString Name;
		System::UnicodeString Value;
		System::UnicodeString Language;
	};
#ifndef _WIN64
	#pragma pack(pop)
#endif /* not _WIN64 */
	
	
	typedef System::DynamicArray<TKeyCaption> TKeyCaptionArray;
	
	
public:
	TKeyCaption operator[](const int Index) { return this->Items[Index]; }
	
public:
	TKeyCaption __fastcall KeyCaption(const System::UnicodeString AName, const System::UnicodeString AValue, const System::UnicodeString ALanguage);
	
private:
	TKeyCaptionArray FItems;
	int __fastcall GetCount();
	TKeyCaption __fastcall GetItems(const int Index);
	void __fastcall SetItems(const int Index, const TKeyCaption &Value);
	
public:
	bool __fastcall HasCaption(const System::UnicodeString AName, const System::UnicodeString ALanguage = System::UnicodeString());
	void __fastcall Clear();
	void __fastcall Add(const System::UnicodeString AName, const System::UnicodeString AValue, const System::UnicodeString ALanguage = System::UnicodeString());
	void __fastcall Delete(const System::UnicodeString AName, const System::UnicodeString ALanguage = System::UnicodeString());
	System::UnicodeString __fastcall GetCaption(const System::UnicodeString AName, const System::UnicodeString ALanguage = System::UnicodeString());
	void __fastcall SetCaption(const System::UnicodeString AName, const System::UnicodeString AValue, const System::UnicodeString ALanguage = System::UnicodeString());
	__property int Count = {read=GetCount, nodefault};
	__property TKeyCaption Items[const int Index] = {read=GetItems, write=SetItems/*, default*/};
public:
	/* TObject.Create */ inline __fastcall TKeyCaptions() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TKeyCaptions() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TKeyboardLayouts : /*[[sealed]]*/ public System::TObject
{
	typedef System::TObject inherited;
	
private:
	static Vcl::Touch::Keyboardtypes::TVirtualKeyLayouts* FKeyboardLayouts;
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
private:
#ifndef _WIN64
	static System::DynamicArray<System::UnicodeString> __fastcall GetLayoutNames();
#else /* _WIN64 */
	static System::TArray__1<System::UnicodeString> __fastcall GetLayoutNames();
#endif /* _WIN64 */
	static int __fastcall GetCount();
	__classmethod Vcl::Touch::Keyboardtypes::TVirtualKeyLayout* __fastcall Find(const System::UnicodeString Layout, const System::UnicodeString Language)/* overload */;
	__classmethod Vcl::Touch::Keyboardtypes::TVirtualKeyLayout* __fastcall Find(const System::UnicodeString Layout)/* overload */;
	/* static */ __property Vcl::Touch::Keyboardtypes::TVirtualKeyLayouts* Layouts = {read=FKeyboardLayouts};
	
public:
	__classmethod void __fastcall LoadFromResourceName(const System::UnicodeString ResourceName);
	__classmethod void __fastcall LoadFromStream(System::Classes::TStream* Stream);
	/* static */ __property int Count = {read=GetCount, nodefault};
#ifndef _WIN64
	/* static */ __property System::DynamicArray<System::UnicodeString> LayoutNames = {read=GetLayoutNames};
#else /* _WIN64 */
	/* static */ __property System::TArray__1<System::UnicodeString> LayoutNames = {read=GetLayoutNames};
#endif /* _WIN64 */
public:
	/* TObject.Create */ inline __fastcall TKeyboardLayouts() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TKeyboardLayouts() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TCustomTouchKeyboard : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
	
private:
	struct DECLSPEC_DRECORD TChangeState
	{
	public:
		TCustomKeyboardButton* Button;
		TCustomKeyboardButton::TDrawState State;
		static TCustomTouchKeyboard::TChangeState __fastcall ChangeState(TCustomKeyboardButton* AButton, const TCustomKeyboardButton::TDrawState AState);
	};
	
	
	class DELPHICLASS TChangeStates;
	class PASCALIMPLEMENTATION TChangeStates : public System::Generics::Collections::TList__1<TCustomTouchKeyboard::TChangeState>
	{
		typedef System::Generics::Collections::TList__1<TCustomTouchKeyboard::TChangeState> inherited;
		
	public:
		/* {System_Generics_Collections}TList<Vcl_Touch_Keyboard_TCustomTouchKeyboard_TChangeState>.Create */ inline __fastcall TChangeStates()/* overload */ : System::Generics::Collections::TList__1<TCustomTouchKeyboard::TChangeState>() { }
		/* {System_Generics_Collections}TList<Vcl_Touch_Keyboard_TCustomTouchKeyboard_TChangeState>.Create */ inline __fastcall TChangeStates(const System::DelphiInterface<System::Generics::Defaults::IComparer__1<TCustomTouchKeyboard::TChangeState> > AComparer)/* overload */ : System::Generics::Collections::TList__1<TCustomTouchKeyboard::TChangeState>(AComparer) { }
		/* {System_Generics_Collections}TList<Vcl_Touch_Keyboard_TCustomTouchKeyboard_TChangeState>.Create */ inline __fastcall TChangeStates(System::Generics::Collections::TEnumerable__1<TCustomTouchKeyboard::TChangeState>* const Collection)/* overload */ : System::Generics::Collections::TList__1<TCustomTouchKeyboard::TChangeState>(Collection) { }
		/* {System_Generics_Collections}TList<Vcl_Touch_Keyboard_TCustomTouchKeyboard_TChangeState>.Create */ inline __fastcall TChangeStates(const TCustomTouchKeyboard::TChangeState *Values, const int Values_High)/* overload */ : System::Generics::Collections::TList__1<TCustomTouchKeyboard::TChangeState>(Values, Values_High) { }
		/* {System_Generics_Collections}TList<Vcl_Touch_Keyboard_TCustomTouchKeyboard_TChangeState>.Destroy */ inline __fastcall virtual ~TChangeStates() { }
		
	};
	
	
	
public:
	enum class DECLSPEC_DENUM TDrawingStyle : unsigned char { dsNormal, dsGradient };
	
	
private:
	Vcl::Touch::Keyboardtypes::TKeyboardLayout FLayout;
	Vcl::Touch::Keyboardtypes::TVirtualKeyLayout* FCurrentLayout;
	TKeyCaptions* FKeyCaptions;
	bool FInitialized;
	System::UnicodeString FLanguage;
	Vcl::Extctrls::TTimer* FChangeTimer;
	Vcl::Extctrls::TTimer* FRepeat;
	unsigned FRepeatDelay;
	unsigned FRepeatRate;
	System::Uitypes::TColor FGradientEnd;
	System::Uitypes::TColor FGradientStart;
	TCustomKeyboardButtonClass FDefaultButtonClass;
	TChangeStates* FChangeStates;
	Vcl::Touch::Keyboardtypes::TKeyData FDeadKey;
	TButtonList* FButtons;
	TButtonList* FUnclick;
	TButtonList* FPressedKeys;
	TButtonList* FDeadKeyUnclick;
	TDrawingStyle FDrawingStyle;
	void __fastcall ToggleKeys(TCustomKeyboardButton* AButton, Vcl::Touch::Keyboardtypes::TKeyState KeyState, bool Immediate = false);
	void __fastcall OnRepeat(System::TObject* Sender);
	void __fastcall OnChange(System::TObject* Sender);
	void __fastcall KeyClick(TCustomKeyboardButton* Button);
	Vcl::Touch::Keyboardtypes::TModifierState __fastcall GetShiftState(const Vcl::Touch::Keyboardtypes::TVirtualKey &VirtualKey);
	void __fastcall ProcessKeyPress(const Winapi::Messages::TWMMouse &Msg, int ID);
	Vcl::Touch::Keyboardtypes::TKey __fastcall GetModifiedKey(const Vcl::Touch::Keyboardtypes::TVirtualKey &Key, const System::UnicodeString Language);
	Vcl::Touch::Keyboardtypes::TVirtualKey __fastcall GetLanguageKey(const Vcl::Touch::Keyboardtypes::TVirtualKey &Key, const System::UnicodeString Language);
	void __fastcall SetLayout(const Vcl::Touch::Keyboardtypes::TKeyboardLayout Value);
	void __fastcall ReadCustomCaptionOverrides(System::Classes::TStream* Stream);
	void __fastcall WriteCustomCaptionOverrides(System::Classes::TStream* Stream);
	void __fastcall AddChangeState(TCustomKeyboardButton* Button, const TCustomKeyboardButton::TDrawState State);
	bool __fastcall GetOverrideCaption(const Vcl::Touch::Keyboardtypes::TVirtualKey &Key, System::UnicodeString &Caption);
	void __fastcall SetGradientEnd(const System::Uitypes::TColor Value);
	void __fastcall SetGradientStart(const System::Uitypes::TColor Value);
	System::UnicodeString __fastcall GetPrimaryLanguage(const System::UnicodeString Language);
	System::UnicodeString __fastcall GetCurrentInputLanguage();
	HIDESBASE MESSAGE void __fastcall WMInputLangChange(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMTouch(Winapi::Messages::TMessage &Message);
	TCustomKeyboardButton* __fastcall GetButtons(int Index);
	void __fastcall SetDrawingStyle(const TDrawingStyle Value);
	
protected:
	virtual void __fastcall DestroyWnd();
	virtual void __fastcall Paint();
	DYNAMIC void __fastcall Resize();
	virtual void __fastcall SetEnabled(bool Value);
#ifndef _WIN64
	System::DynamicArray<System::UnicodeString> __fastcall GetPropertyNames();
#else /* _WIN64 */
	System::TArray__1<System::UnicodeString> __fastcall GetPropertyNames();
#endif /* _WIN64 */
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	virtual void __fastcall CreateWnd();
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	bool __fastcall CreateKeyboard(const System::UnicodeString Language = System::UnicodeString());
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Message);
	__property TCustomKeyboardButton* Buttons[int Index] = {read=GetButtons};
	int __fastcall ButtonsCount();
	void __fastcall ClearState();
	void __fastcall UpdateCaptions();
	
public:
	__fastcall virtual TCustomTouchKeyboard(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomTouchKeyboard();
	void __fastcall Redraw();
	__property TKeyCaptions* CaptionOverrides = {read=FKeyCaptions};
	__property TCustomKeyboardButtonClass DefaultButtonClass = {read=FDefaultButtonClass, write=FDefaultButtonClass};
	__property TDrawingStyle DrawingStyle = {read=FDrawingStyle, write=SetDrawingStyle, default=0};
	__property System::Uitypes::TColor GradientEnd = {read=FGradientEnd, write=SetGradientEnd, default=8421504};
	__property System::Uitypes::TColor GradientStart = {read=FGradientStart, write=SetGradientStart, default=12632256};
	__property Vcl::Touch::Keyboardtypes::TKeyboardLayout Layout = {read=FLayout, write=SetLayout};
	__property unsigned RepeatRate = {read=FRepeatRate, write=FRepeatRate, default=50};
	__property unsigned RepeatDelay = {read=FRepeatDelay, write=FRepeatDelay, default=300};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomTouchKeyboard(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TTouchKeyboard : public TCustomTouchKeyboard
{
	typedef TCustomTouchKeyboard inherited;
	
__published:
	__property Anchors = {default=3};
	__property Align = {default=0};
	__property Color = {default=-16777211};
	__property DrawingStyle = {default=0};
	__property Enabled = {default=1};
	__property GradientEnd = {default=8421504};
	__property GradientStart = {default=12632256};
	__property Height;
	__property Left;
	__property Layout = {default=0};
	__property ParentColor = {default=1};
	__property ParentShowHint = {default=1};
	__property RepeatRate = {default=50};
	__property RepeatDelay = {default=300};
	__property ShowHint;
	__property Top;
	__property Tag = {default=0};
	__property Width;
	__property Visible = {default=1};
public:
	/* TCustomTouchKeyboard.Create */ inline __fastcall virtual TTouchKeyboard(System::Classes::TComponent* AOwner) : TCustomTouchKeyboard(AOwner) { }
	/* TCustomTouchKeyboard.Destroy */ inline __fastcall virtual ~TTouchKeyboard() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TTouchKeyboard(HWND ParentWindow) : TCustomTouchKeyboard(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE void __fastcall SendKeys(const Vcl::Touch::Keyboardtypes::TKeyData *Keys, const int Keys_High)/* overload */;
extern DELPHI_PACKAGE void __fastcall SendKeys(const Vcl::Touch::Keyboardtypes::TKeyData *Keys, const int Keys_High, Vcl::Touch::Keyboardtypes::TKeyState KeyState)/* overload */;
extern DELPHI_PACKAGE void __fastcall SendKey(const Vcl::Touch::Keyboardtypes::TKeyData Key, Vcl::Touch::Keyboardtypes::TKeyState KeyState);
}	/* namespace Keyboard */
}	/* namespace Touch */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_TOUCH_KEYBOARD)
using namespace Vcl::Touch::Keyboard;
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
#endif	// Vcl_Touch_KeyboardHPP
