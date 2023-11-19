// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.Styles.pas' rev: 35.00 (Windows)

#ifndef Vcl_StylesHPP
#define Vcl_StylesHPP

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
#include <Winapi.CommCtrl.hpp>
#include <System.Generics.Collections.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Themes.hpp>
#include <System.SysUtils.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>
#include <Winapi.UxTheme.hpp>

//-- user supplied -----------------------------------------------------------
#pragma link "Vcl.Styles"

namespace Vcl
{
namespace Styles
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TCustomStyle;
class DELPHICLASS TStyleEngine;
class DELPHICLASS TUxThemeStyleElements;
class DELPHICLASS TCustomStyleCategoryButtonElements;
class DELPHICLASS TCustomStyleCategoryPanelGroupElements;
class DELPHICLASS TCustomStyleControlBarElements;
class DELPHICLASS TCustomStyleDataNavButtonElements;
class DELPHICLASS TCustomStyleMPlayerButtonElements;
class DELPHICLASS TCustomStyleGridElements;
class DELPHICLASS TCustomStyleHintElements;
class DELPHICLASS TCustomStyleListViewElements;
class DELPHICLASS TCustomStyleMenuElements;
class DELPHICLASS TCustomStylePanelElements;
class DELPHICLASS TCustomStyleTabSetElements;
class DELPHICLASS TCustomStyleTextLabelElements;
class DELPHICLASS TCustomStyleSearchIndicatorElements;
class DELPHICLASS TCustomStyleToggleSwitchElements;
class DELPHICLASS TCustomStyleToolBarElements;
class DELPHICLASS TCustomStyleTreeViewElements;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TCustomStyle : public Vcl::Themes::TCustomStyleServices
{
	typedef Vcl::Themes::TCustomStyleServices inherited;
	
protected:
	System::StaticArray<Vcl::Themes::TCustomElementServicesClass, 45> FCustomElements;
	System::TObject* FSource;
	bool __fastcall InternalDrawText(HDC DC, const Vcl::Themes::TThemedElementDetails &Details, const System::UnicodeString S, const System::Types::TRect &R, Vcl::Graphics::TTextFormat Flags, System::Uitypes::TColor Color, int DPI = 0x0);
	bool __fastcall SourceLoaded();
	virtual unsigned __fastcall DoColorToRGB(System::Uitypes::TColor Color, Vcl::Themes::PThemedElementDetails Details);
	virtual bool __fastcall DoDrawEdge(HDC DC, const Vcl::Themes::TThemedElementDetails &Details, const System::Types::TRect &R, Vcl::Themes::TElementEdges Edges, Vcl::Themes::TElementEdgeFlags Flags, System::Types::PRect ContentRect, int DPI = 0x0)/* overload */;
	virtual bool __fastcall DoDrawElement(HDC DC, const Vcl::Themes::TThemedElementDetails &Details, const System::Types::TRect &R, System::Types::PRect ClipRect, int DPI = 0x0)/* overload */;
	virtual bool __fastcall DoDrawIcon(HDC DC, const Vcl::Themes::TThemedElementDetails &Details, const System::Types::TRect &R, NativeUInt himl, int Index, int DPI = 0x0)/* overload */;
	virtual bool __fastcall DoDrawParentBackground(HWND Window, HDC Target, Vcl::Themes::PThemedElementDetails Details, bool OnlyIfTransparent, System::Types::PRect Bounds)/* overload */;
	virtual bool __fastcall DoDrawText(HDC DC, const Vcl::Themes::TThemedElementDetails &Details, const System::UnicodeString S, System::Types::TRect &R, Vcl::Graphics::TTextFormat Flags, const Vcl::Themes::TStyleTextOptions &Options, int DPI = 0x0)/* overload */;
	virtual bool __fastcall DoGetElementContentRect(HDC DC, const Vcl::Themes::TThemedElementDetails &Details, const System::Types::TRect &BoundingRect, /* out */ System::Types::TRect &ContentRect, int DPI = 0x0);
	virtual bool __fastcall DoGetElementColor(const Vcl::Themes::TThemedElementDetails &Details, Vcl::Themes::TElementColor ElementColor, /* out */ System::Uitypes::TColor &Color);
	virtual bool __fastcall DoGetElementMargins(HDC DC, const Vcl::Themes::TThemedElementDetails &Details, System::Types::PRect Rect, Vcl::Themes::TElementMargin ElementMargin, /* out */ _MARGINS &Margins, int DPI = 0x0);
	virtual bool __fastcall DoGetElementRegion(HDC DC, const Vcl::Themes::TThemedElementDetails &Details, const System::Types::TRect &Rect, /* out */ HRGN &Region, int DPI = 0x0);
	virtual bool __fastcall DoGetElementSize(HDC DC, const Vcl::Themes::TThemedElementDetails &Details, System::Types::PRect Rect, Vcl::Themes::TElementSize ElementSize, /* out */ System::Types::TSize &Size, int DPI = 0x0);
	virtual System::Uitypes::TColor __fastcall DoGetStyleColor(Vcl::Themes::TStyleColor Color);
	virtual System::Uitypes::TColor __fastcall DoGetStyleFontColor(Vcl::Themes::TStyleFont Font);
	virtual System::Uitypes::TColor __fastcall DoGetSystemColor(System::Uitypes::TColor Color);
	virtual bool __fastcall DoGetTextExtent(HDC DC, const Vcl::Themes::TThemedElementDetails &Details, const System::UnicodeString Text, Vcl::Graphics::TTextFormat Flags, System::Types::PRect BoundingRect, /* out */ System::Types::TRect &ExtentRect, int DPI = 0x0);
	virtual bool __fastcall DoHasTransparentParts(const Vcl::Themes::TThemedElementDetails &Details);
	virtual bool __fastcall DoHasElementFixedPosition(const Vcl::Themes::TThemedElementDetails &Details);
	__classmethod virtual bool __fastcall DoIsValidStyle(System::Classes::TStream* Stream, Vcl::Themes::PStyleInfo StyleInfo);
	virtual bool __fastcall GetAvailable();
	virtual bool __fastcall GetEnabled();
	virtual System::UnicodeString __fastcall GetName();
	virtual NativeUInt __fastcall GetTheme(Vcl::Themes::TThemedElement Element);
	virtual NativeUInt __fastcall GetThemeForDPI(Vcl::Themes::TThemedElement Element, int DPI = 0x0);
	virtual Vcl::Themes::TCustomStyleServices::TStyleFlags __fastcall GetFlags();
	virtual void __fastcall UnloadThemeData();
	virtual void __fastcall UnloadThemeDataForDPI();
	
public:
	__fastcall virtual TCustomStyle();
	__fastcall virtual ~TCustomStyle();
	virtual void __fastcall UpdateThemes();
	virtual Vcl::Themes::TThemedElementDetails __fastcall GetElementDetails(Vcl::Themes::TThemedButton Detail)/* overload */;
	virtual Vcl::Themes::TThemedElementDetails __fastcall GetElementDetails(Vcl::Themes::TThemedCategoryButtons Detail)/* overload */;
	virtual Vcl::Themes::TThemedElementDetails __fastcall GetElementDetails(Vcl::Themes::TThemedCategoryPanelGroup Detail)/* overload */;
	virtual Vcl::Themes::TThemedElementDetails __fastcall GetElementDetails(Vcl::Themes::TThemedCheckListBox Detail)/* overload */;
	virtual Vcl::Themes::TThemedElementDetails __fastcall GetElementDetails(Vcl::Themes::TThemedClock Detail)/* overload */;
	virtual Vcl::Themes::TThemedElementDetails __fastcall GetElementDetails(Vcl::Themes::TThemedComboBox Detail)/* overload */;
	virtual Vcl::Themes::TThemedElementDetails __fastcall GetElementDetails(Vcl::Themes::TThemedControlBar Detail)/* overload */;
	virtual Vcl::Themes::TThemedElementDetails __fastcall GetElementDetails(Vcl::Themes::TThemedDataNavButtons Detail)/* overload */;
	virtual Vcl::Themes::TThemedElementDetails __fastcall GetElementDetails(Vcl::Themes::TThemedMPlayerButtons Detail)/* overload */;
	virtual Vcl::Themes::TThemedElementDetails __fastcall GetElementDetails(Vcl::Themes::TThemedDatePicker Detail)/* overload */;
	virtual Vcl::Themes::TThemedElementDetails __fastcall GetElementDetails(Vcl::Themes::TThemedEdit Detail)/* overload */;
	virtual Vcl::Themes::TThemedElementDetails __fastcall GetElementDetails(Vcl::Themes::TThemedFlyOut Detail)/* overload */;
	virtual Vcl::Themes::TThemedElementDetails __fastcall GetElementDetails(Vcl::Themes::TThemedExplorerBar Detail)/* overload */;
	virtual Vcl::Themes::TThemedElementDetails __fastcall GetElementDetails(Vcl::Themes::TThemedHeader Detail)/* overload */;
	virtual Vcl::Themes::TThemedElementDetails __fastcall GetElementDetails(Vcl::Themes::TThemedHint Detail)/* overload */;
	virtual Vcl::Themes::TThemedElementDetails __fastcall GetElementDetails(Vcl::Themes::TThemedGrid Detail)/* overload */;
	virtual Vcl::Themes::TThemedElementDetails __fastcall GetElementDetails(Vcl::Themes::TThemedLink Detail)/* overload */;
	virtual Vcl::Themes::TThemedElementDetails __fastcall GetElementDetails(Vcl::Themes::TThemedListview Detail)/* overload */;
	virtual Vcl::Themes::TThemedElementDetails __fastcall GetElementDetails(Vcl::Themes::TThemedMenu Detail)/* overload */;
	virtual Vcl::Themes::TThemedElementDetails __fastcall GetElementDetails(Vcl::Themes::TThemedMenuBand Detail)/* overload */;
	virtual Vcl::Themes::TThemedElementDetails __fastcall GetElementDetails(Vcl::Themes::TThemedMonthCal Detail)/* overload */;
	virtual Vcl::Themes::TThemedElementDetails __fastcall GetElementDetails(Vcl::Themes::TThemedNavigation Detail)/* overload */;
	virtual Vcl::Themes::TThemedElementDetails __fastcall GetElementDetails(Vcl::Themes::TThemedPage Detail)/* overload */;
	virtual Vcl::Themes::TThemedElementDetails __fastcall GetElementDetails(Vcl::Themes::TThemedPanel Detail)/* overload */;
	virtual Vcl::Themes::TThemedElementDetails __fastcall GetElementDetails(Vcl::Themes::TThemedProgress Detail)/* overload */;
	virtual Vcl::Themes::TThemedElementDetails __fastcall GetElementDetails(Vcl::Themes::TThemedRebar Detail)/* overload */;
	virtual Vcl::Themes::TThemedElementDetails __fastcall GetElementDetails(Vcl::Themes::TThemedScrollBar Detail)/* overload */;
	virtual Vcl::Themes::TThemedElementDetails __fastcall GetElementDetails(Vcl::Themes::TThemedSearchIndicators Detail)/* overload */;
	virtual Vcl::Themes::TThemedElementDetails __fastcall GetElementDetails(Vcl::Themes::TThemedSpin Detail)/* overload */;
	virtual Vcl::Themes::TThemedElementDetails __fastcall GetElementDetails(Vcl::Themes::TThemedStartPanel Detail)/* overload */;
	virtual Vcl::Themes::TThemedElementDetails __fastcall GetElementDetails(Vcl::Themes::TThemedStatus Detail)/* overload */;
	virtual Vcl::Themes::TThemedElementDetails __fastcall GetElementDetails(Vcl::Themes::TThemedTab Detail)/* overload */;
	virtual Vcl::Themes::TThemedElementDetails __fastcall GetElementDetails(Vcl::Themes::TThemedTabSet Detail)/* overload */;
	virtual Vcl::Themes::TThemedElementDetails __fastcall GetElementDetails(Vcl::Themes::TThemedTaskBand Detail)/* overload */;
	virtual Vcl::Themes::TThemedElementDetails __fastcall GetElementDetails(Vcl::Themes::TThemedTaskBar Detail)/* overload */;
	virtual Vcl::Themes::TThemedElementDetails __fastcall GetElementDetails(Vcl::Themes::TThemedTaskDialog Detail)/* overload */;
	virtual Vcl::Themes::TThemedElementDetails __fastcall GetElementDetails(Vcl::Themes::TThemedTextLabel Detail)/* overload */;
	virtual Vcl::Themes::TThemedElementDetails __fastcall GetElementDetails(Vcl::Themes::TThemedTextStyle Detail)/* overload */;
	virtual Vcl::Themes::TThemedElementDetails __fastcall GetElementDetails(Vcl::Themes::TThemedToggleSwitch Detail)/* overload */;
	virtual Vcl::Themes::TThemedElementDetails __fastcall GetElementDetails(Vcl::Themes::TThemedToolBar Detail)/* overload */;
	virtual Vcl::Themes::TThemedElementDetails __fastcall GetElementDetails(Vcl::Themes::TThemedToolTip Detail)/* overload */;
	virtual Vcl::Themes::TThemedElementDetails __fastcall GetElementDetails(Vcl::Themes::TThemedTrackBar Detail)/* overload */;
	virtual Vcl::Themes::TThemedElementDetails __fastcall GetElementDetails(Vcl::Themes::TThemedTrayNotify Detail)/* overload */;
	virtual Vcl::Themes::TThemedElementDetails __fastcall GetElementDetails(Vcl::Themes::TThemedTreeview Detail)/* overload */;
	virtual Vcl::Themes::TThemedElementDetails __fastcall GetElementDetails(Vcl::Themes::TThemedWindow Detail)/* overload */;
	__classmethod virtual Vcl::Themes::TCustomStyleServices* __fastcall LoadFromStream(System::Classes::TStream* Stream);
	virtual void __fastcall PaintBorder(Vcl::Controls::TWinControl* Control, bool EraseLRCorner);
	virtual void __fastcall SaveToStream(System::Classes::TStream* Stream);
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TStyleEngine : public Vcl::Themes::TCustomStyleEngine
{
	typedef Vcl::Themes::TCustomStyleEngine inherited;
	
	
private:
	typedef System::Generics::Collections::TDictionary__2<System::Classes::TComponent*,Vcl::Themes::TStyleHook*>* TControlList;
	
	
public:
	#define TStyleEngine_ResourceTypeName L"VCLSTYLE"
	
	#define TStyleEngine_FileExtension L".vsf"
	
	
private:
	static System::Generics::Collections::TDictionary__2<System::Classes::TComponent*,Vcl::Themes::TStyleHook*>* FControls;
	__classmethod virtual void __fastcall DoRemoveControl(Vcl::Controls::TWinControl* Control);
	__classmethod virtual void __fastcall DoUnregisterStyleHook(System::TClass ControlClass, Vcl::Themes::TStyleHookClass StyleHookClass);
	__classmethod void __fastcall FreeControlHooks();
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
public:
	__classmethod virtual bool __fastcall HandleMessage(Vcl::Controls::TWinControl* Control, Winapi::Messages::TMessage &Message, System::Classes::TWndMethod DefWndProc);
	__classmethod virtual void __fastcall Notification(Vcl::Themes::TCustomStyleEngine::TStyleEngineNotification Operation, void * Data);
public:
	/* TObject.Create */ inline __fastcall TStyleEngine() : Vcl::Themes::TCustomStyleEngine() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TStyleEngine() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TUxThemeStyleElements : public Vcl::Themes::TCustomElementServices
{
	typedef Vcl::Themes::TCustomElementServices inherited;
	
protected:
	virtual __classmethod Vcl::Themes::TThemedElement __fastcall GetThemedElement() = 0 ;
	
public:
	__classmethod virtual bool __fastcall DrawEdge(Vcl::Themes::TCustomStyleServices* Style, HDC DC, int Part, int State, const System::Types::TRect &R, Vcl::Themes::TElementEdges Edges, Vcl::Themes::TElementEdgeFlags Flags, System::Types::PRect ContentRect, int DPI = 0x0);
	__classmethod virtual bool __fastcall DrawElement(Vcl::Themes::TCustomStyleServices* Style, HDC DC, int Part, int State, const System::Types::TRect &R, System::Types::PRect ClipRect, int DPI = 0x0);
	__classmethod virtual bool __fastcall DrawIcon(Vcl::Themes::TCustomStyleServices* Style, HDC DC, int Part, int State, const System::Types::TRect &R, NativeUInt himl, int Index, int DPI = 0x0);
	__classmethod virtual bool __fastcall DrawText(Vcl::Themes::TCustomStyleServices* Style, HDC DC, int Part, int State, const System::UnicodeString S, System::Types::TRect &R, Vcl::Graphics::TTextFormat Flags, const Vcl::Themes::TStyleTextOptions &Options, int DPI = 0x0);
	__classmethod virtual bool __fastcall GetElementContentRect(Vcl::Themes::TCustomStyleServices* Style, HDC DC, int Part, int State, const System::Types::TRect &BoundingRect, /* out */ System::Types::TRect &ContentRect, int DPI = 0x0);
	__classmethod virtual bool __fastcall GetElementColor(Vcl::Themes::TCustomStyleServices* Style, int Part, int State, Vcl::Themes::TElementColor ElementColor, /* out */ System::Uitypes::TColor &Color);
	__classmethod virtual bool __fastcall GetElementMargins(Vcl::Themes::TCustomStyleServices* Style, HDC DC, int Part, int State, System::Types::PRect Rect, Vcl::Themes::TElementMargin Margin, /* out */ _MARGINS &ElementMargins, int DPI = 0x0);
	__classmethod virtual bool __fastcall GetElementRegion(Vcl::Themes::TCustomStyleServices* Style, HDC DC, int Part, int State, const System::Types::TRect &Rect, /* out */ HRGN &Region, int DPI = 0x0);
	__classmethod virtual bool __fastcall GetElementSize(Vcl::Themes::TCustomStyleServices* Style, HDC DC, int Part, int State, System::Types::PRect Rect, Vcl::Themes::TElementSize ElementSize, /* out */ System::Types::TSize &Size, int DPI = 0x0);
	__classmethod virtual bool __fastcall GetTextExtent(Vcl::Themes::TCustomStyleServices* Style, HDC DC, int Part, int State, const System::UnicodeString Text, Vcl::Graphics::TTextFormat Flags, System::Types::PRect BoundingRect, /* out */ System::Types::TRect &ExtentRect, int DPI = 0x0);
	__classmethod virtual bool __fastcall HasTransparentParts(Vcl::Themes::TCustomStyleServices* Style, int Part, int State);
public:
	/* TObject.Create */ inline __fastcall TUxThemeStyleElements() : Vcl::Themes::TCustomElementServices() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TUxThemeStyleElements() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCustomStyleCategoryButtonElements : public Vcl::Themes::TUxThemeCategoryButtonElements
{
	typedef Vcl::Themes::TUxThemeCategoryButtonElements inherited;
	
public:
	__classmethod virtual bool __fastcall DrawElement(Vcl::Themes::TCustomStyleServices* Style, HDC DC, int Part, int State, const System::Types::TRect &R, System::Types::PRect ClipRect, int DPI = 0x0);
	__classmethod virtual bool __fastcall GetElementColor(Vcl::Themes::TCustomStyleServices* Style, int Part, int State, Vcl::Themes::TElementColor ElementColor, /* out */ System::Uitypes::TColor &Color);
public:
	/* TObject.Create */ inline __fastcall TCustomStyleCategoryButtonElements() : Vcl::Themes::TUxThemeCategoryButtonElements() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TCustomStyleCategoryButtonElements() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCustomStyleCategoryPanelGroupElements : public Vcl::Themes::TUxThemeCategoryPanelGroupElements
{
	typedef Vcl::Themes::TUxThemeCategoryPanelGroupElements inherited;
	
public:
	__classmethod virtual bool __fastcall DrawElement(Vcl::Themes::TCustomStyleServices* Style, HDC DC, int Part, int State, const System::Types::TRect &R, System::Types::PRect ClipRect, int DPI = 0x0);
	__classmethod virtual bool __fastcall DrawText(Vcl::Themes::TCustomStyleServices* Style, HDC DC, int Part, int State, const System::UnicodeString S, System::Types::TRect &R, Vcl::Graphics::TTextFormat Flags, const Vcl::Themes::TStyleTextOptions &Options, int DPI = 0x0);
	__classmethod virtual bool __fastcall GetElementColor(Vcl::Themes::TCustomStyleServices* Style, int Part, int State, Vcl::Themes::TElementColor ElementColor, /* out */ System::Uitypes::TColor &Color);
	__classmethod virtual bool __fastcall GetElementSize(Vcl::Themes::TCustomStyleServices* Style, HDC DC, int Part, int State, System::Types::PRect Rect, Vcl::Themes::TElementSize ElementSize, /* out */ System::Types::TSize &Size, int DPI = 0x0);
public:
	/* TObject.Create */ inline __fastcall TCustomStyleCategoryPanelGroupElements() : Vcl::Themes::TUxThemeCategoryPanelGroupElements() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TCustomStyleCategoryPanelGroupElements() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCustomStyleControlBarElements : public Vcl::Themes::TUxThemeControlBarElements
{
	typedef Vcl::Themes::TUxThemeControlBarElements inherited;
	
public:
	__classmethod virtual bool __fastcall GetElementColor(Vcl::Themes::TCustomStyleServices* Style, int Part, int State, Vcl::Themes::TElementColor ElementColor, /* out */ System::Uitypes::TColor &Color);
public:
	/* TObject.Create */ inline __fastcall TCustomStyleControlBarElements() : Vcl::Themes::TUxThemeControlBarElements() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TCustomStyleControlBarElements() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCustomStyleDataNavButtonElements : public Vcl::Themes::TCustomElementServices
{
	typedef Vcl::Themes::TCustomElementServices inherited;
	
public:
	__classmethod virtual bool __fastcall DrawElement(Vcl::Themes::TCustomStyleServices* Style, HDC DC, int Part, int State, const System::Types::TRect &R, System::Types::PRect ClipRect, int DPI = 0x0);
	__classmethod virtual bool __fastcall GetElementContentRect(Vcl::Themes::TCustomStyleServices* Style, HDC DC, int Part, int State, const System::Types::TRect &BoundingRect, /* out */ System::Types::TRect &ContentRect, int DPI = 0x0);
public:
	/* TObject.Create */ inline __fastcall TCustomStyleDataNavButtonElements() : Vcl::Themes::TCustomElementServices() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TCustomStyleDataNavButtonElements() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCustomStyleMPlayerButtonElements : public Vcl::Themes::TCustomElementServices
{
	typedef Vcl::Themes::TCustomElementServices inherited;
	
public:
	__classmethod virtual bool __fastcall DrawElement(Vcl::Themes::TCustomStyleServices* Style, HDC DC, int Part, int State, const System::Types::TRect &R, System::Types::PRect ClipRect, int DPI = 0x0);
	__classmethod virtual bool __fastcall GetElementContentRect(Vcl::Themes::TCustomStyleServices* Style, HDC DC, int Part, int State, const System::Types::TRect &BoundingRect, /* out */ System::Types::TRect &ContentRect, int DPI = 0x0);
public:
	/* TObject.Create */ inline __fastcall TCustomStyleMPlayerButtonElements() : Vcl::Themes::TCustomElementServices() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TCustomStyleMPlayerButtonElements() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCustomStyleGridElements : public Vcl::Themes::TUxThemeGridElements
{
	typedef Vcl::Themes::TUxThemeGridElements inherited;
	
public:
	__classmethod virtual bool __fastcall DrawEdge(Vcl::Themes::TCustomStyleServices* Style, HDC DC, int Part, int State, const System::Types::TRect &R, Vcl::Themes::TElementEdges Edges, Vcl::Themes::TElementEdgeFlags Flags, System::Types::PRect ContentRect, int DPI = 0x0);
	__classmethod virtual bool __fastcall DrawElement(Vcl::Themes::TCustomStyleServices* Style, HDC DC, int Part, int State, const System::Types::TRect &R, System::Types::PRect ClipRect, int DPI = 0x0);
	__classmethod virtual bool __fastcall GetElementColor(Vcl::Themes::TCustomStyleServices* Style, int Part, int State, Vcl::Themes::TElementColor ElementColor, /* out */ System::Uitypes::TColor &Color);
public:
	/* TObject.Create */ inline __fastcall TCustomStyleGridElements() : Vcl::Themes::TUxThemeGridElements() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TCustomStyleGridElements() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCustomStyleHintElements : public Vcl::Themes::TUxThemeHintElements
{
	typedef Vcl::Themes::TUxThemeHintElements inherited;
	
public:
	__classmethod virtual bool __fastcall GetElementColor(Vcl::Themes::TCustomStyleServices* Style, int Part, int State, Vcl::Themes::TElementColor ElementColor, /* out */ System::Uitypes::TColor &Color);
public:
	/* TObject.Create */ inline __fastcall TCustomStyleHintElements() : Vcl::Themes::TUxThemeHintElements() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TCustomStyleHintElements() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCustomStyleListViewElements : public TUxThemeStyleElements
{
	typedef TUxThemeStyleElements inherited;
	
protected:
	__classmethod virtual Vcl::Themes::TThemedElement __fastcall GetThemedElement();
	
public:
	__classmethod virtual bool __fastcall GetElementColor(Vcl::Themes::TCustomStyleServices* Style, int Part, int State, Vcl::Themes::TElementColor ElementColor, /* out */ System::Uitypes::TColor &Color);
public:
	/* TObject.Create */ inline __fastcall TCustomStyleListViewElements() : TUxThemeStyleElements() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TCustomStyleListViewElements() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCustomStyleMenuElements : public Vcl::Themes::TCustomElementServices
{
	typedef Vcl::Themes::TCustomElementServices inherited;
	
public:
	__classmethod virtual bool __fastcall DrawElement(Vcl::Themes::TCustomStyleServices* Style, HDC DC, int Part, int State, const System::Types::TRect &R, System::Types::PRect ClipRect, int DPI = 0x0);
	__classmethod virtual bool __fastcall DrawText(Vcl::Themes::TCustomStyleServices* Style, HDC DC, int Part, int State, const System::UnicodeString S, System::Types::TRect &R, Vcl::Graphics::TTextFormat Flags, const Vcl::Themes::TStyleTextOptions &Options, int DPI = 0x0);
	__classmethod virtual bool __fastcall GetElementColor(Vcl::Themes::TCustomStyleServices* Style, int Part, int State, Vcl::Themes::TElementColor ElementColor, /* out */ System::Uitypes::TColor &Color);
	__classmethod virtual bool __fastcall GetElementMargins(Vcl::Themes::TCustomStyleServices* Style, HDC DC, int Part, int State, System::Types::PRect Rect, Vcl::Themes::TElementMargin Margin, /* out */ _MARGINS &ElementMargins, int DPI = 0x0);
	__classmethod virtual bool __fastcall GetElementSize(Vcl::Themes::TCustomStyleServices* Style, HDC DC, int Part, int State, System::Types::PRect Rect, Vcl::Themes::TElementSize ElementSize, /* out */ System::Types::TSize &Size, int DPI = 0x0);
public:
	/* TObject.Create */ inline __fastcall TCustomStyleMenuElements() : Vcl::Themes::TCustomElementServices() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TCustomStyleMenuElements() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCustomStylePanelElements : public Vcl::Themes::TUxThemePanelElements
{
	typedef Vcl::Themes::TUxThemePanelElements inherited;
	
public:
	__classmethod virtual bool __fastcall GetElementColor(Vcl::Themes::TCustomStyleServices* Style, int Part, int State, Vcl::Themes::TElementColor ElementColor, /* out */ System::Uitypes::TColor &Color);
public:
	/* TObject.Create */ inline __fastcall TCustomStylePanelElements() : Vcl::Themes::TUxThemePanelElements() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TCustomStylePanelElements() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCustomStyleTabSetElements : public Vcl::Themes::TUxThemeTabSetElements
{
	typedef Vcl::Themes::TUxThemeTabSetElements inherited;
	
public:
	__classmethod virtual bool __fastcall GetElementColor(Vcl::Themes::TCustomStyleServices* Style, int Part, int State, Vcl::Themes::TElementColor ElementColor, /* out */ System::Uitypes::TColor &Color);
public:
	/* TObject.Create */ inline __fastcall TCustomStyleTabSetElements() : Vcl::Themes::TUxThemeTabSetElements() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TCustomStyleTabSetElements() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCustomStyleTextLabelElements : public Vcl::Themes::TUxThemeTextLabelElements
{
	typedef Vcl::Themes::TUxThemeTextLabelElements inherited;
	
public:
	__classmethod virtual bool __fastcall DrawText(Vcl::Themes::TCustomStyleServices* Style, HDC DC, int Part, int State, const System::UnicodeString S, System::Types::TRect &R, Vcl::Graphics::TTextFormat Flags, const Vcl::Themes::TStyleTextOptions &Options, int DPI = 0x0);
	__classmethod virtual bool __fastcall GetElementColor(Vcl::Themes::TCustomStyleServices* Style, int Part, int State, Vcl::Themes::TElementColor ElementColor, /* out */ System::Uitypes::TColor &Color);
public:
	/* TObject.Create */ inline __fastcall TCustomStyleTextLabelElements() : Vcl::Themes::TUxThemeTextLabelElements() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TCustomStyleTextLabelElements() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCustomStyleSearchIndicatorElements : public Vcl::Themes::TCustomElementServices
{
	typedef Vcl::Themes::TCustomElementServices inherited;
	
public:
	__classmethod virtual bool __fastcall DrawElement(Vcl::Themes::TCustomStyleServices* Style, HDC DC, int Part, int State, const System::Types::TRect &R, System::Types::PRect ClipRect, int DPI = 0x0);
	__classmethod virtual bool __fastcall GetElementContentRect(Vcl::Themes::TCustomStyleServices* Style, HDC DC, int Part, int State, const System::Types::TRect &BoundingRect, /* out */ System::Types::TRect &ContentRect, int DPI = 0x0);
public:
	/* TObject.Create */ inline __fastcall TCustomStyleSearchIndicatorElements() : Vcl::Themes::TCustomElementServices() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TCustomStyleSearchIndicatorElements() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCustomStyleToggleSwitchElements : public Vcl::Themes::TCustomElementServices
{
	typedef Vcl::Themes::TCustomElementServices inherited;
	
public:
	__classmethod virtual bool __fastcall DrawElement(Vcl::Themes::TCustomStyleServices* Style, HDC DC, int Part, int State, const System::Types::TRect &R, System::Types::PRect ClipRect, int DPI = 0x0);
public:
	/* TObject.Create */ inline __fastcall TCustomStyleToggleSwitchElements() : Vcl::Themes::TCustomElementServices() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TCustomStyleToggleSwitchElements() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCustomStyleToolBarElements : public Vcl::Themes::TCustomElementServices
{
	typedef Vcl::Themes::TCustomElementServices inherited;
	
public:
	__classmethod virtual bool __fastcall DrawElement(Vcl::Themes::TCustomStyleServices* Style, HDC DC, int Part, int State, const System::Types::TRect &R, System::Types::PRect ClipRect, int DPI = 0x0);
	__classmethod virtual bool __fastcall DrawText(Vcl::Themes::TCustomStyleServices* Style, HDC DC, int Part, int State, const System::UnicodeString S, System::Types::TRect &R, Vcl::Graphics::TTextFormat Flags, const Vcl::Themes::TStyleTextOptions &Options, int DPI = 0x0);
	__classmethod virtual bool __fastcall GetElementColor(Vcl::Themes::TCustomStyleServices* Style, int Part, int State, Vcl::Themes::TElementColor ElementColor, /* out */ System::Uitypes::TColor &Color);
	__classmethod virtual bool __fastcall GetElementContentRect(Vcl::Themes::TCustomStyleServices* Style, HDC DC, int Part, int State, const System::Types::TRect &BoundingRect, /* out */ System::Types::TRect &ContentRect, int DPI = 0x0);
	__classmethod virtual bool __fastcall HasTransparentParts(Vcl::Themes::TCustomStyleServices* Style, int Part, int State);
	__classmethod virtual bool __fastcall DrawEdge(Vcl::Themes::TCustomStyleServices* Style, HDC DC, int Part, int State, const System::Types::TRect &R, Vcl::Themes::TElementEdges Edges, Vcl::Themes::TElementEdgeFlags Flags, System::Types::PRect ContentRect, int DPI = 0x0);
public:
	/* TObject.Create */ inline __fastcall TCustomStyleToolBarElements() : Vcl::Themes::TCustomElementServices() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TCustomStyleToolBarElements() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCustomStyleTreeViewElements : public TUxThemeStyleElements
{
	typedef TUxThemeStyleElements inherited;
	
protected:
	__classmethod virtual Vcl::Themes::TThemedElement __fastcall GetThemedElement();
	
public:
	__classmethod virtual bool __fastcall GetElementColor(Vcl::Themes::TCustomStyleServices* Style, int Part, int State, Vcl::Themes::TElementColor ElementColor, /* out */ System::Uitypes::TColor &Color);
public:
	/* TObject.Create */ inline __fastcall TCustomStyleTreeViewElements() : TUxThemeStyleElements() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TCustomStyleTreeViewElements() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Styles */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_STYLES)
using namespace Vcl::Styles;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_StylesHPP
