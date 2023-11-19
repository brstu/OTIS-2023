// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.TitleBarCtrls.pas' rev: 35.00 (Windows)

#ifndef Vcl_TitlebarctrlsHPP
#define Vcl_TitlebarctrlsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <System.Generics.Collections.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <Winapi.GDIPAPI.hpp>
#include <Winapi.GDIPOBJ.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.Forms.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Menus.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Titlebarctrls
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TSystemTitlebarButton;
class DELPHICLASS TCaptionButtonItem;
class DELPHICLASS TCustomButtons;
class DELPHICLASS TCustomTitleBarPanel;
class DELPHICLASS TTitleBarPanel;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TSystemButton : unsigned char { sbMinimize, sbRestore, sbClose, sbCustom, sbSpacer };

class PASCALIMPLEMENTATION TSystemTitlebarButton : public Vcl::Buttons::TCustomSpeedButton
{
	typedef Vcl::Buttons::TCustomSpeedButton inherited;
	
	
private:
	class DELPHICLASS TGlowWindow;
#ifndef _WIN64
	#pragma pack(push,4)
#endif /* not _WIN64 */
	class PASCALIMPLEMENTATION TGlowWindow : public System::TObject
	{
		typedef System::TObject inherited;
		
	public:
		NativeUInt FWindowHandle;
		NativeUInt FWndMethod;
		void __fastcall InitWindow();
		void __fastcall LoadImage();
		
	private:
		int FLeft;
		int FTop;
		bool FVisible;
		void __fastcall SetVisible(const bool Value);
		
	public:
		__fastcall TGlowWindow();
		__fastcall virtual ~TGlowWindow();
		void __fastcall SetLocation(int X, int Y);
		__property bool Visible = {read=FVisible, write=SetVisible, nodefault};
	};
	
#ifndef _WIN64
	#pragma pack(pop)
#endif /* not _WIN64 */
	
	
private:
	System::Classes::TNotifyEvent FOnPaint;
	Vcl::Forms::TCustomForm* FClient;
	TSystemButton FButtonType;
	Winapi::Gdipobj::TGPGraphicsPath* FPath;
	TGlowWindow* FGlow;
	System::Generics::Collections::TObjectDictionary__2<System::UnicodeString,Vcl::Graphics::TBitmap*>* FBitmapList;
	int FIndex;
	int FCount;
	bool FDesignMode;
	Vcl::Forms::TCustomForm* __fastcall GetClient();
	void __fastcall SetButtonType(const TSystemButton Value);
	void __fastcall DrawWin10CloseSymbol(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, System::Uitypes::TColor FGColor, System::Uitypes::TColor BGColor);
	void __fastcall DrawWin10MaximizeSymbol(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, System::Uitypes::TColor FGColor, System::Uitypes::TColor BGColor);
	void __fastcall DrawWin10RestoreSymbol(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, System::Uitypes::TColor FGColor, System::Uitypes::TColor BGColor);
	void __fastcall DrawWin10MinimizeSymbol(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, System::Uitypes::TColor FGColor, System::Uitypes::TColor BGColor);
	void __fastcall DrawWin81Symbol(System::WideChar AChar, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, System::Uitypes::TColor FGColor, System::Uitypes::TColor BGColor);
	void __fastcall DrawWin81CloseSymbol(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, System::Uitypes::TColor FGColor, System::Uitypes::TColor BGColor);
	void __fastcall DrawWin81MaximizeSymbol(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, System::Uitypes::TColor FGColor, System::Uitypes::TColor BGColor);
	void __fastcall DrawWin81RestoreSymbol(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, System::Uitypes::TColor FGColor, System::Uitypes::TColor BGColor);
	void __fastcall DrawWin81MinimizeSymbol(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, System::Uitypes::TColor FGColor, System::Uitypes::TColor BGColor);
	void __fastcall DrawWin7CaptionButton();
	void __fastcall DrawWin81CaptionButton();
	void __fastcall DrawWin10CaptionButton();
	void __fastcall DrawWin10CaptionButtonDesign();
	Winapi::Gdipobj::TGPGraphicsPath* __fastcall GetGraphicsPath();
	int __fastcall GetSymbolSize();
	bool __fastcall DoGlassPaint();
	Vcl::Graphics::TBitmap* __fastcall GetBitmapResource(System::UnicodeString AName);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	
protected:
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall Paint();
	__property Vcl::Forms::TCustomForm* Client = {read=GetClient};
	__property Winapi::Gdipobj::TGPGraphicsPath* Path = {read=GetGraphicsPath};
	__property int CollectionIndex = {read=FIndex, nodefault};
	
public:
	__property Canvas;
	__fastcall virtual TSystemTitlebarButton(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TSystemTitlebarButton();
	
__published:
	__property Action;
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property TSystemButton ButtonType = {read=FButtonType, write=SetButtonType, nodefault};
	__property Constraints;
	__property Enabled = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property Visible = {default=1};
	__property OnClick;
	__property OnDblClick;
	__property OnMouseActivate;
	__property OnMouseDown;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
	__property System::Classes::TNotifyEvent OnPaint = {read=FOnPaint, write=FOnPaint};
};


typedef void __fastcall (__closure *TTitleBarPaintEvent)(System::TObject* Sender, Vcl::Graphics::TCanvas* Canvas, System::Types::TRect &ARect);

#ifndef _WIN64
typedef System::TMetaClass* TCustomButtonsClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TCustomButtonsClass);
#endif /* _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TCaptionButtonItemClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TCaptionButtonItemClass);
#endif /* _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCaptionButtonItem : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	TSystemTitlebarButton* FTitlebarButton;
	void __fastcall SetTitlebarButton(TSystemTitlebarButton* const Value);
	void __fastcall SetButtonType(const TSystemButton Value);
	void __fastcall SetVisible(const bool Value);
	void __fastcall SetEnabled(const bool Value);
	void __fastcall SetOnClick(const System::Classes::TNotifyEvent Value);
	void __fastcall SetOnPaint(const System::Classes::TNotifyEvent Value);
	TSystemButton __fastcall GetButtonType();
	bool __fastcall GetEnabled();
	System::UnicodeString __fastcall GetHint();
	int __fastcall GetWidth();
	System::Classes::TNotifyEvent __fastcall GetOnClick();
	System::Classes::TNotifyEvent __fastcall GetOnPaint();
	bool __fastcall GetVisible();
	void __fastcall SetWidth(int Value);
	void __fastcall SetHint(const System::UnicodeString Value);
	
public:
	__fastcall virtual TCaptionButtonItem(System::Classes::TCollection* Collection);
	__fastcall virtual ~TCaptionButtonItem();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
protected:
	__property TSystemTitlebarButton* Button = {read=FTitlebarButton, write=SetTitlebarButton};
	
__published:
	__property TSystemButton ButtonType = {read=GetButtonType, write=SetButtonType, nodefault};
	__property bool Enabled = {read=GetEnabled, write=SetEnabled, nodefault};
	__property System::UnicodeString Hint = {read=GetHint, write=SetHint};
	__property int Width = {read=GetWidth, write=SetWidth, nodefault};
	__property bool Visible = {read=GetVisible, write=SetVisible, nodefault};
	__property System::Classes::TNotifyEvent OnPaint = {read=GetOnPaint, write=SetOnPaint};
	__property System::Classes::TNotifyEvent OnClick = {read=GetOnClick, write=SetOnClick};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCustomButtons : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	TCaptionButtonItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	TCustomTitleBarPanel* FTitleBarPanel;
	
protected:
	HIDESBASE TCaptionButtonItem* __fastcall GetItem(int Index);
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	HIDESBASE void __fastcall SetItem(int Index, TCaptionButtonItem* const Value);
	
public:
	__fastcall virtual TCustomButtons(TCustomTitleBarPanel* const ATitleBarPanel, const System::Classes::TCollectionItemClass ItemClass)/* overload */;
	__property TCustomTitleBarPanel* TitleBarPanel = {read=FTitleBarPanel};
	__property TCaptionButtonItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TCustomButtons() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TCustomTitleBarPanel : public Vcl::Controls::TCustomTransparentControl
{
	typedef Vcl::Controls::TCustomTransparentControl inherited;
	
private:
	System::Byte FAlphaValue;
	Vcl::Forms::TCustomForm* FClient;
	System::Uitypes::TWindowState FLastWindowStateUpdated;
	TTitleBarPaintEvent FOnPaint;
	System::Classes::TNotifyEvent FOnUpdateTitlebarButtons;
	TSystemTitlebarButton* FTitleButtonClose;
	TSystemTitlebarButton* FTitleButtonRestore;
	TSystemTitlebarButton* FTitleButtonMin;
	void __fastcall UpdateAlign();
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Message);
	Vcl::Forms::TCustomForm* __fastcall GetClient();
	__property Vcl::Forms::TCustomForm* Client = {read=GetClient};
	void __fastcall TitleButtonCloseClick(System::TObject* Sender);
	void __fastcall TitleButtonRestoreClick(System::TObject* Sender);
	void __fastcall TitleButtonMinClick(System::TObject* Sender);
	void __fastcall SetTitleButtonsVisibility(bool Value);
	System::Types::TRect __fastcall UpdateCustomButtons(int XOffset = 0x0);
	bool __fastcall IsValidState(unsigned AState);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Message);
	
private:
	TCustomButtons* FCustomButtons;
	void __fastcall SetCustomButtons(TCustomButtons* const Value);
	MESSAGE void __fastcall CMStyleChanged(Winapi::Messages::TMessage &Message);
	void __fastcall UpdateTitlebarButtons(bool BoundsOnly = false);
	
protected:
	DYNAMIC void __fastcall AdjustSize();
	virtual TCustomButtonsClass __fastcall GetCustomButtonsClass();
	virtual TCaptionButtonItemClass __fastcall GetCaptionButtonItemClass();
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall Loaded();
	
public:
	virtual void __fastcall Invalidate();
	virtual void __fastcall Paint();
	__fastcall virtual TCustomTitleBarPanel(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomTitleBarPanel();
	__property TTitleBarPaintEvent OnPaint = {read=FOnPaint, write=FOnPaint};
	__property System::Classes::TNotifyEvent OnUpdateTitlebarButtons = {read=FOnUpdateTitlebarButtons, write=FOnUpdateTitlebarButtons};
	__property System::Byte AlphaValue = {read=FAlphaValue, write=FAlphaValue, nodefault};
	__property TCustomButtons* CustomButtons = {read=FCustomButtons, write=SetCustomButtons};
	__property TSystemTitlebarButton* TitleButtonClose = {read=FTitleButtonClose};
	__property TSystemTitlebarButton* TitleButtonRestore = {read=FTitleButtonRestore};
	__property TSystemTitlebarButton* TitleButtonMin = {read=FTitleButtonMin};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomTitleBarPanel(HWND ParentWindow) : Vcl::Controls::TCustomTransparentControl(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TTitleBarPanel : public TCustomTitleBarPanel
{
	typedef TCustomTitleBarPanel inherited;
	
__published:
	__property OnPaint;
	__property CustomButtons;
public:
	/* TCustomTitleBarPanel.Create */ inline __fastcall virtual TTitleBarPanel(System::Classes::TComponent* AOwner) : TCustomTitleBarPanel(AOwner) { }
	/* TCustomTitleBarPanel.Destroy */ inline __fastcall virtual ~TTitleBarPanel() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TTitleBarPanel(HWND ParentWindow) : TCustomTitleBarPanel(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Titlebarctrls */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_TITLEBARCTRLS)
using namespace Vcl::Titlebarctrls;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_TitlebarctrlsHPP
