// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'WBComp.pas' rev: 35.00 (Windows)

#ifndef WbcompHPP
#define WbcompHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.OleCtrls.hpp>
#include <Winapi.ActiveX.hpp>
#include <SHDocVw.hpp>
#include <MSHTML.hpp>
#include <mshtmcid.hpp>
#include <idoc.hpp>
#include <System.Contnrs.hpp>
#include <System.Variants.hpp>
#include <System.Win.ComObj.hpp>
#include <WebBrowserEx.hpp>
#include <System.Win.ComObjWrapper.hpp>
#include <System.WideStrings.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Wbcomp
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS THTMLEditDesignerImpl;
class DELPHICLASS TCustomHTMLEditDesigner;
class DELPHICLASS THTMLEditDesigner;
class DELPHICLASS TCustomSelectionDesigner;
class DELPHICLASS TSelectionDesigner;
class DELPHICLASS TCustomHTMLDocumentFragment;
class DELPHICLASS TBehaviorElementEvents;
class DELPHICLASS TCustomElementBehavior;
class DELPHICLASS TCustomPaintedBehavior;
class DELPHICLASS TCustomBinaryElementBehavior;
class DELPHICLASS TGridInfo;
class DELPHICLASS TCustomBGColorBehavior;
class DELPHICLASS TCustomGridBehavior;
class DELPHICLASS TCustomBodyGridBehavior;
class DELPHICLASS TGridBehavior;
class DELPHICLASS TCustomBehaviorWrapper;
class DELPHICLASS TBehaviorWrapper;
class DELPHICLASS TCustomElementBehaviorFactory;
class DELPHICLASS TElementBehaviorFactory;
class DELPHICLASS TElementNamespaceFactory;
class DELPHICLASS TGlyphTable;
class DELPHICLASS TCustomHTMLEditHost;
class DELPHICLASS THTMLEditHost;
class DELPHICLASS TCustomHostBehaviorInit;
class DELPHICLASS THostBehaviorInit;
class DELPHICLASS TCustomHTMLValidator;
class DELPHICLASS TCustomWebBrowserServices;
class DELPHICLASS TCustomMarkupServices;
class DELPHICLASS TMarkupServices;
class DELPHICLASS TCustomDisplayServices;
class DELPHICLASS TDisplayServices;
class DELPHICLASS TCustomHighlightRenderingServices;
class DELPHICLASS THighlightRenderingServices;
class DELPHICLASS TParserEventDispatch;
class DELPHICLASS TCustomMSHTMLParser;
class DELPHICLASS TMSHTMLParser;
class DELPHICLASS TSelectionServicesListenter;
class DELPHICLASS TCustomWebBrowserChangeManager;
class DELPHICLASS TWebBrowserChangeManager;
class DELPHICLASS TCustomHTMLTableDesigner;
class DELPHICLASS THTMLTableDesigner;
class DELPHICLASS TCustomHTMLDragDropDesigner;
class DELPHICLASS THTMLDragDropDesigner;
class DELPHICLASS TCustomHTMLRegionDesigner;
class DELPHICLASS THTMLRegionDesigner;
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TEditDesignerEvent)(TCustomHTMLEditDesigner* Sender, int EventDispID, const Mshtml::_di_IHTMLEventObj Event, HRESULT &Result);

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION THTMLEditDesignerImpl : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	Mshtml::_di_IHTMLEditDesigner FComponentIntf;
	TCustomHTMLEditDesigner* FComponent;
	HRESULT __stdcall PostEditorEventNotify(int inEvtDispId, const Mshtml::_di_IHTMLEventObj pIEventObj);
	HRESULT __stdcall PostHandleEvent(int inEvtDispId, const Mshtml::_di_IHTMLEventObj pIEventObj);
	HRESULT __stdcall PreHandleEvent(int inEvtDispId, const Mshtml::_di_IHTMLEventObj pIEventObj);
	HRESULT __stdcall TranslateAccelerator(int inEvtDispId, const Mshtml::_di_IHTMLEventObj pIEventObj);
	void __fastcall DisconnectComponent();
	
public:
	__fastcall THTMLEditDesignerImpl(TCustomHTMLEditDesigner* AComponent);
	__fastcall virtual ~THTMLEditDesignerImpl();
private:
	void *__IHTMLEditDesigner;	// Mshtml::IHTMLEditDesigner 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3050F662-98B5-11CF-BB82-00AA00BDCE0B}
	operator Mshtml::_di_IHTMLEditDesigner()
	{
		Mshtml::_di_IHTMLEditDesigner intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Mshtml::IHTMLEditDesigner*(void) { return (Mshtml::IHTMLEditDesigner*)&__IHTMLEditDesigner; }
	#endif
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TCustomHTMLEditDesigner : public Webbrowserex::TCustomWebBrowserComponent
{
	typedef Webbrowserex::TCustomWebBrowserComponent inherited;
	
private:
	TEditDesignerEvent FOnPostEditor;
	TEditDesignerEvent FOnPostHandle;
	TEditDesignerEvent FOnPreHandle;
	TEditDesignerEvent FOnTranslateAccel;
	bool FActive;
	THTMLEditDesignerImpl* FDesignerImpl;
	
protected:
	bool __fastcall IsPrimaryDocumentEvent(Mshtml::_di_IHTMLEventObj EventObj);
	bool __fastcall IsPrimaryDocumentElement(Mshtml::_di_IHTMLElement AElement);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall SetWebBrowser(Webbrowserex::TWebBrowserEx* const Value);
	HRESULT __stdcall PostEditorEventNotify(int inEvtDispId, const Mshtml::_di_IHTMLEventObj pIEventObj);
	HRESULT __stdcall PostHandleEvent(int inEvtDispId, const Mshtml::_di_IHTMLEventObj pIEventObj);
	HRESULT __stdcall PreHandleEvent(int inEvtDispId, const Mshtml::_di_IHTMLEventObj pIEventObj);
	HRESULT __stdcall TranslateAccelerator(int inEvtDispId, const Mshtml::_di_IHTMLEventObj pIEventObj);
	virtual void __fastcall SetActive(const bool Value);
	
public:
	__property bool Active = {read=FActive, write=SetActive, nodefault};
	__property TEditDesignerEvent OnPostEditor = {read=FOnPostEditor, write=FOnPostEditor};
	__property TEditDesignerEvent OnPostHandle = {read=FOnPostHandle, write=FOnPostHandle};
	__property TEditDesignerEvent OnPreHandle = {read=FOnPreHandle, write=FOnPreHandle};
	__property TEditDesignerEvent OnTranslateAccel = {read=FOnTranslateAccel, write=FOnTranslateAccel};
	__fastcall virtual ~TCustomHTMLEditDesigner();
public:
	/* TComponent.Create */ inline __fastcall virtual TCustomHTMLEditDesigner(System::Classes::TComponent* AOwner) : Webbrowserex::TCustomWebBrowserComponent(AOwner) { }
	
private:
	void *__IHTMLEditDesigner;	// Mshtml::IHTMLEditDesigner 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3050F662-98B5-11CF-BB82-00AA00BDCE0B}
	operator Mshtml::_di_IHTMLEditDesigner()
	{
		Mshtml::_di_IHTMLEditDesigner intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Mshtml::IHTMLEditDesigner*(void) { return (Mshtml::IHTMLEditDesigner*)&__IHTMLEditDesigner; }
	#endif
	
};


class PASCALIMPLEMENTATION THTMLEditDesigner : public TCustomHTMLEditDesigner
{
	typedef TCustomHTMLEditDesigner inherited;
	
__published:
	__property WebBrowser;
	__property Active;
	__property OnPostEditor;
	__property OnPostHandle;
	__property OnPreHandle;
	__property OnTranslateAccel;
	__property OnBrowserChanged;
public:
	/* TCustomHTMLEditDesigner.Destroy */ inline __fastcall virtual ~THTMLEditDesigner() { }
	
public:
	/* TComponent.Create */ inline __fastcall virtual THTMLEditDesigner(System::Classes::TComponent* AOwner) : TCustomHTMLEditDesigner(AOwner) { }
	
};


class PASCALIMPLEMENTATION TCustomSelectionDesigner : public TCustomHTMLEditDesigner
{
	typedef TCustomHTMLEditDesigner inherited;
	
private:
	Vcl::Graphics::TCanvas* FCanvas;
	bool FDrawPrevious;
	System::Types::TPoint FInitialPt;
	System::Types::TRect FSelectionRect;
	bool FSelectionStarted;
	Mshtml::_di_IHTMLElement FSrcElement;
	Mshtml::_di_IHTMLElement2 FSrcBody;
	System::Types::TPoint FSrcElementXY;
	bool FOverrideCursorState;
	
protected:
	void __fastcall AdjustSelectionRect();
	void __fastcall CancelSelection();
	System::Types::TPoint __fastcall CalcMousePt(Mshtml::_di_IHTMLEventObj EventObj);
	void __fastcall ClearSelectionRect();
	void __fastcall SelectControls();
	virtual void __fastcall SetActive(const bool Value);
	HIDESBASE HRESULT __stdcall PreHandleEvent(int inEvtDispId, const Mshtml::_di_IHTMLEventObj pIEventObj);
	HIDESBASE HRESULT __stdcall TranslateAccelerator(int inEvtDispId, const Mshtml::_di_IHTMLEventObj pIEventObj);
	HRESULT __fastcall DoMouseMove(Mshtml::_di_IHTMLEventObj EventObj);
	HRESULT __fastcall DoMouseDown(Mshtml::_di_IHTMLEventObj EventObj);
	HRESULT __fastcall DoMouseUp(Mshtml::_di_IHTMLEventObj EventObj);
	
public:
	__fastcall virtual ~TCustomSelectionDesigner();
public:
	/* TComponent.Create */ inline __fastcall virtual TCustomSelectionDesigner(System::Classes::TComponent* AOwner) : TCustomHTMLEditDesigner(AOwner) { }
	
private:
	void *__IHTMLEditDesigner;	// Mshtml::IHTMLEditDesigner 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3050F662-98B5-11CF-BB82-00AA00BDCE0B}
	operator Mshtml::_di_IHTMLEditDesigner()
	{
		Mshtml::_di_IHTMLEditDesigner intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Mshtml::IHTMLEditDesigner*(void) { return (Mshtml::IHTMLEditDesigner*)&__IHTMLEditDesigner; }
	#endif
	
};


class PASCALIMPLEMENTATION TSelectionDesigner : public TCustomSelectionDesigner
{
	typedef TCustomSelectionDesigner inherited;
	
__published:
	__property WebBrowser;
	__property Active;
	__property OnPostEditor;
	__property OnPostHandle;
	__property OnPreHandle;
	__property OnTranslateAccel;
	__property OnBrowserChanged;
public:
	/* TCustomSelectionDesigner.Destroy */ inline __fastcall virtual ~TSelectionDesigner() { }
	
public:
	/* TComponent.Create */ inline __fastcall virtual TSelectionDesigner(System::Classes::TComponent* AOwner) : TCustomSelectionDesigner(AOwner) { }
	
};


class PASCALIMPLEMENTATION TCustomHTMLDocumentFragment : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	TCustomElementBehavior* FBehavior;
	Mshtml::_di_IHTMLElement FSpanElement;
	Mshtml::_di_IHTMLElement FBodyElement;
	Mshtml::_di_IHTMLDocument2 FFragment;
	System::Widestrings::TWideStringList* FHTML;
	Mshtml::_di_IHTMLDocument2 __fastcall GetHTMLDocument();
	void __fastcall SetHTML(System::Widestrings::TWideStringList* const Value);
	void __fastcall HTMLChange(System::TObject* Sender);
	
public:
	__fastcall virtual TCustomHTMLDocumentFragment(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomHTMLDocumentFragment();
	__property Mshtml::_di_IHTMLDocument2 Document2 = {read=GetHTMLDocument};
	__property TCustomElementBehavior* Behavior = {read=FBehavior, write=FBehavior};
	__property Mshtml::_di_IHTMLElement BodyElement = {read=FBodyElement};
	__property Mshtml::_di_IHTMLElement SpanElement = {read=FSpanElement};
	
__published:
	__property System::Widestrings::TWideStringList* HTML = {read=FHTML, write=SetHTML};
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TBehaviorElementEvents : public Webbrowserex::THTMLElementEventDispatch
{
	typedef Webbrowserex::THTMLElementEventDispatch inherited;
	
private:
	TCustomElementBehavior* FBehavior;
	
protected:
	virtual HRESULT __fastcall DoInvoke(int DispID, const GUID &IID, int LocaleID, System::Word Flags, tagDISPPARAMS &dps, Winapi::Activex::PDispIDList pDispIds, void * VarResult, void * ExcepInfo, void * ArgErr);
	
public:
	__fastcall TBehaviorElementEvents(TCustomElementBehavior* Behavior, Mshtml::_di_IHTMLElement Element);
	__property TCustomElementBehavior* Behavior = {read=FBehavior};
public:
	/* TEventDispatchEx.Destroy */ inline __fastcall virtual ~TBehaviorElementEvents() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TBehaviorElementEventsClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TBehaviorElementEventsClass);
#endif /* _WIN64 */

typedef void __fastcall (__closure *TElementEvent)(TCustomElementBehavior* Sender, HRESULT &Result);

typedef void __fastcall (__closure *TElementInitEvent)(TCustomElementBehavior* Sender, const Mshtml::_di_IElementBehaviorSite pBehaviorSite, HRESULT &Result);

typedef void __fastcall (__closure *TElementNotifyEvent)(TCustomElementBehavior* Sender, int lEvent, System::OleVariant &pVar, HRESULT &Result);

class PASCALIMPLEMENTATION TCustomElementBehavior : public System::Win::Comobjwrapper::TWrappedComObject
{
	typedef System::Win::Comobjwrapper::TWrappedComObject inherited;
	
private:
	bool FIsAttached;
	Mshtml::_di_IHTMLElement2 FElement2;
	Mshtml::_di_IHTMLElement3 FElement3;
	Mshtml::_di_IHTMLElement4 FElement4;
	System::UnicodeString FBehavior;
	Mshtml::_di_IElementBehaviorSite FBehaviorSite;
	int FCookie;
	unsigned FObjectSafetyFlags;
	TElementEvent FOnDetach;
	TElementInitEvent FOnInit;
	TElementNotifyEvent FOnNotify;
	TElementEvent FOnContentSave;
	TElementEvent FOnContentReady;
	TElementEvent FOnDocumentReady;
	TElementEvent FOnDocumentContextChange;
	TElementEvent FOnMove;
	TCustomHTMLDocumentFragment* FViewLink;
	TCustomHTMLDocumentFragment* FInternalViewLink;
	System::UnicodeString FViewLinkHTML;
	System::_di_IInterface FElementEventsHolder;
	TBehaviorElementEvents* FElementEvents;
	TElementEvent FOnControlSelect;
	bool FHandleEvents;
	System::TObject* FComComponentReference;
	Mshtml::_di_IHTMLElement __fastcall GetElement();
	Mshtml::_di_IHTMLElement2 __fastcall GetElement2();
	Mshtml::_di_IHTMLElement3 __fastcall GetElement3();
	Mshtml::_di_IHTMLElement4 __fastcall GetElement4();
	Mshtml::_di_IHTMLElementDefaults __fastcall GetDefaults();
	void __fastcall SetBehavior(const System::UnicodeString Value);
	void __fastcall SetViewLink(TCustomHTMLDocumentFragment* const Value);
	void __fastcall SetViewLinkHTML(const System::UnicodeString Value);
	void __fastcall SetHandleEvents(const bool Value);
	TCustomHTMLDocumentFragment* __fastcall GetViewLink();
	
protected:
	virtual bool __fastcall GetIsReadOnly();
	virtual HRESULT __fastcall DoContentReady();
	virtual HRESULT __fastcall DoContentSave();
	virtual HRESULT __fastcall DoDetach();
	virtual HRESULT __fastcall DoDocumentReady();
	virtual HRESULT __fastcall DoDocumentContextChange();
	virtual HRESULT __fastcall DoControlSelect();
	virtual HRESULT __fastcall DoMove();
	virtual HRESULT __fastcall DoNotify(int lEvent, System::OleVariant &pVar);
	virtual HRESULT __fastcall DoInit(const Mshtml::_di_IElementBehaviorSite pBehaviorSite);
	virtual TBehaviorElementEventsClass __fastcall GetElementEventsClass();
	TCustomBehaviorWrapper* __fastcall GetBehaviorWrapper();
	virtual void __fastcall SetBehaviorSite(const Mshtml::_di_IElementBehaviorSite Value);
	virtual HRESULT __stdcall Detach();
	virtual HRESULT __stdcall Init(const Mshtml::_di_IElementBehaviorSite pBehaviorSite);
	virtual HRESULT __stdcall Notify(int lEvent, System::OleVariant &pVar);
	virtual HRESULT __stdcall GetLayoutInfo(/* out */ int &plLayoutInfo);
	virtual HRESULT __stdcall GetPosition(int lFlags, System::Types::TPoint &pptTopLeft);
	virtual HRESULT __stdcall GetSize(int dwFlags, Mshtml::tagSIZE sizeContent, System::Types::TPoint &pptTranslateBy, System::Types::TPoint &pptTopLeft, Mshtml::tagSIZE &psizeProposed);
	virtual HRESULT __stdcall MapSize(Mshtml::PtagSize psizeIn, /* out */ System::Types::TRect &prcOut);
	__property Mshtml::_di_IElementBehaviorSite BehaviorSite = {read=FBehaviorSite, write=SetBehaviorSite};
	virtual HRESULT __stdcall GetTextDescent(/* out */ int &plDescent);
	virtual HRESULT __stdcall GetFocusRect(System::Types::TRect &pRect);
	HRESULT __stdcall GetInterfaceSafetyOptions(const GUID &IID, unsigned* pdwSupportedOptions, unsigned* pdwEnabledOptions);
	HRESULT __stdcall SetInterfaceSafetyOptions(const GUID &IID, unsigned dwOptionSetMask, unsigned dwEnabledOptions);
	
public:
	virtual void __fastcall Initialize();
	__fastcall virtual ~TCustomElementBehavior();
	__property bool HandleEvents = {read=FHandleEvents, write=SetHandleEvents, nodefault};
	__property bool IsReadOnly = {read=GetIsReadOnly, nodefault};
	__property int Cookie = {read=FCookie, nodefault};
	__property Mshtml::_di_IHTMLElement Element = {read=GetElement};
	__property Mshtml::_di_IHTMLElement2 Element2 = {read=GetElement2};
	__property Mshtml::_di_IHTMLElement3 Element3 = {read=GetElement3};
	__property Mshtml::_di_IHTMLElement4 Element4 = {read=GetElement4};
	__property Mshtml::_di_IHTMLElementDefaults Defaults = {read=GetDefaults};
	__property System::UnicodeString Behavior = {read=FBehavior, write=SetBehavior};
	__property bool IsAttached = {read=FIsAttached, nodefault};
	__property TCustomHTMLDocumentFragment* ViewLink = {read=GetViewLink, write=SetViewLink};
	__property System::UnicodeString ViewLinkHTML = {read=FViewLinkHTML, write=SetViewLinkHTML};
	__property TElementNotifyEvent OnNotify = {read=FOnNotify, write=FOnNotify};
	__property TElementEvent OnDetach = {read=FOnDetach, write=FOnDetach};
	__property TElementInitEvent OnInit = {read=FOnInit, write=FOnInit};
	__property TElementEvent OnContentReady = {read=FOnContentReady, write=FOnContentReady};
	__property TElementEvent OnContentSave = {read=FOnContentSave, write=FOnContentSave};
	__property TElementEvent OnDocumentReady = {read=FOnDocumentReady, write=FOnDocumentReady};
	__property TElementEvent OnDocumentContextChange = {read=FOnDocumentContextChange, write=FOnDocumentContextChange};
	__property TElementEvent OnControlSelect = {read=FOnControlSelect, write=FOnControlSelect};
	__property TElementEvent OnMove = {read=FOnMove, write=FOnMove};
public:
	/* TComObject.Create */ inline __fastcall TCustomElementBehavior() : System::Win::Comobjwrapper::TWrappedComObject() { }
	/* TComObject.CreateAggregated */ inline __fastcall TCustomElementBehavior(const System::_di_IInterface Controller) : System::Win::Comobjwrapper::TWrappedComObject(Controller) { }
	/* TComObject.CreateFromFactory */ inline __fastcall TCustomElementBehavior(System::Win::Comobj::TComObjectFactory* Factory, const System::_di_IInterface Controller) : System::Win::Comobjwrapper::TWrappedComObject(Factory, Controller) { }
	
private:
	void *__IObjectSafety;	// IObjectSafety 
	void *__IElementBehaviorFocus;	// Mshtml::IElementBehaviorFocus 
	void *__IElementBehaviorLayout2;	// Mshtml::IElementBehaviorLayout2 
	void *__IElementBehaviorLayout;	// Mshtml::IElementBehaviorLayout 
	void *__IElementBehavior;	// Mshtml::IElementBehavior 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {CB5BDC81-93C1-11CF-8F20-00805F2CD064}
	operator _di_IObjectSafety()
	{
		_di_IObjectSafety intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IObjectSafety*(void) { return (IObjectSafety*)&__IObjectSafety; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3050F6B6-98B5-11CF-BB82-00AA00BDCE0B}
	operator Mshtml::_di_IElementBehaviorFocus()
	{
		Mshtml::_di_IElementBehaviorFocus intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Mshtml::IElementBehaviorFocus*(void) { return (Mshtml::IElementBehaviorFocus*)&__IElementBehaviorFocus; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3050F846-98B5-11CF-BB82-00AA00BDCE0B}
	operator Mshtml::_di_IElementBehaviorLayout2()
	{
		Mshtml::_di_IElementBehaviorLayout2 intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Mshtml::IElementBehaviorLayout2*(void) { return (Mshtml::IElementBehaviorLayout2*)&__IElementBehaviorLayout2; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3050F6BA-98B5-11CF-BB82-00AA00BDCE0B}
	operator Mshtml::_di_IElementBehaviorLayout()
	{
		Mshtml::_di_IElementBehaviorLayout intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Mshtml::IElementBehaviorLayout*(void) { return (Mshtml::IElementBehaviorLayout*)&__IElementBehaviorLayout; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3050F425-98B5-11CF-BB82-00AA00BDCE0B}
	operator Mshtml::_di_IElementBehavior()
	{
		Mshtml::_di_IElementBehavior intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Mshtml::IElementBehavior*(void) { return (Mshtml::IElementBehavior*)&__IElementBehavior; }
	#endif
	
};


enum DECLSPEC_DENUM TPainterFlag : unsigned char { pfOpaque, pfTransparent, pfAlpha, pfComplex, pfOverlay, pfHitTest, pfSurface, pf3DSurface, pfNoBand, pfNoDC, pfNoPhysicalClip, pfNoSaveDC, pfSupportsXFORM, pfExpand, pfNoScrollBits };

typedef System::Set<TPainterFlag, TPainterFlag::pfOpaque, TPainterFlag::pfNoScrollBits> TPainterFlags;

enum DECLSPEC_DENUM TPaintZOrder : unsigned char { pzNone, pzReplaceAll, pzReplaceContent, pzReplaceBackground, pzBelowContent, pzBelowFlow, pzAboveFlow, pzAboveContent, pzWindowTop };

enum DECLSPEC_DENUM TPainterDrawFlags : unsigned char { dfUpdateRegion = 0x1, dfUseXForm };

typedef void __fastcall (__closure *TPainterDrawEvent)(TCustomPaintedBehavior* Behavior, const System::Types::TRect &BoundsRect, const System::Types::TRect &UpdateRect, TPainterDrawFlags DrawFlags, void * DrawObject, HRESULT &Result);

typedef void __fastcall (__closure *TPainterGetPainterInfoEvent)(TCustomPaintedBehavior* Behavior, Mshtml::_HTML_PAINTER_INFO &PainterInfo, HRESULT &Result);

typedef void __fastcall (__closure *TPainterHitTestPointEvent)(TCustomPaintedBehavior* Behavior, const System::Types::TPoint &pt, /* out */ int &pbHit, /* out */ int &plPartID, HRESULT &Result);

typedef void __fastcall (__closure *TPainterResizeEvent)(TCustomPaintedBehavior* Behavior, const Mshtml::tagSIZE &size, HRESULT &Result);

typedef void __fastcall (__closure *TPainterGetEventTarget)(TCustomPaintedBehavior* Behavior, Mshtml::_di_IHTMLElement &ppElement, HRESULT Result);

typedef void __fastcall (__closure *TPainterSetCursor)(TCustomPaintedBehavior* Behavior, int lPartID, HRESULT Result);

class PASCALIMPLEMENTATION TCustomPaintedBehavior : public TCustomElementBehavior
{
	typedef TCustomElementBehavior inherited;
	
private:
	Vcl::Graphics::TCanvas* FCanvas;
	Mshtml::_di_IHTMLPaintSite FPaintSite;
	TPainterDrawEvent FOnDraw;
	TPainterGetPainterInfoEvent FOnGetPainterInfo;
	TPainterHitTestPointEvent FOnHitTestPoint;
	TPainterResizeEvent FOnResize;
	Mshtml::_HTML_PAINT_DRAW_INFO FDrawInfo;
	TPainterGetEventTarget FOnGetEventTarget;
	TPainterSetCursor FOnSetCursor;
	GUID FDrawObject;
	TPainterFlags FPainterFlags;
	TPaintZOrder FPaintZOrder;
	System::Types::TRect FExpandRect;
	
protected:
	virtual void __fastcall DoCanvasCreated();
	virtual HRESULT __fastcall DoDraw(const System::Types::TRect &BoundsRect, const System::Types::TRect &UpdateRect, const TPainterDrawFlags DrawFlags, void * DrawObject);
	virtual HRESULT __fastcall DoGetEventTarget(Mshtml::_di_IHTMLElement &ppElement);
	virtual HRESULT __fastcall DoSetCursor(int lPartID);
	virtual HRESULT __stdcall Init(const Mshtml::_di_IElementBehaviorSite pBehaviorSite);
	virtual HRESULT __stdcall Detach();
#ifndef _WIN64
	virtual HRESULT __stdcall Draw(System::Types::TRect rcBounds, System::Types::TRect rcUpdate, int lDrawFlags, HDC hdc, void * pvDrawObject);
#else /* _WIN64 */
	virtual HRESULT __stdcall Draw(const System::Types::TRect &rcBounds, const System::Types::TRect &rcUpdate, int lDrawFlags, HDC hdc, void * pvDrawObject);
#endif /* _WIN64 */
	virtual HRESULT __stdcall GetPainterInfo(/* out */ Mshtml::_HTML_PAINTER_INFO &pInfo);
	virtual HRESULT __stdcall HitTestPoint(System::Types::TPoint pt, /* out */ int &pbHit, /* out */ int &plPartID);
	virtual HRESULT __stdcall onresizeevent(Mshtml::tagSIZE size);
	virtual HRESULT __stdcall GetEventInfoFlags(/* out */ int &plEventInfoFlags);
	HRESULT __stdcall GetEventTarget(Mshtml::_di_IHTMLElement &ppElement);
	HRESULT __stdcall SetCursor(int lPartID);
	HRESULT __stdcall StringFromPartID(int lPartID, /* out */ System::WideString &pbstrPart);
	
public:
	virtual void __fastcall Initialize();
	__fastcall virtual ~TCustomPaintedBehavior();
	void __fastcall InvalidatePainterInfo();
	__property Vcl::Graphics::TCanvas* Canvas = {read=FCanvas};
	__property Mshtml::_HTML_PAINT_DRAW_INFO DrawInfo = {read=FDrawInfo};
	__property GUID DrawObject = {read=FDrawObject, write=FDrawObject};
	__property Mshtml::_di_IHTMLPaintSite PaintSite = {read=FPaintSite};
	__property TPainterFlags PainterFlags = {read=FPainterFlags, write=FPainterFlags, nodefault};
	__property TPaintZOrder PaintZOrder = {read=FPaintZOrder, write=FPaintZOrder, nodefault};
	__property System::Types::TRect ExpandRect = {read=FExpandRect, write=FExpandRect};
	__property TPainterDrawEvent OnDraw = {read=FOnDraw, write=FOnDraw};
	__property TPainterGetPainterInfoEvent OnGetPainterInfo = {read=FOnGetPainterInfo, write=FOnGetPainterInfo};
	__property TPainterHitTestPointEvent OnHitTestPoint = {read=FOnHitTestPoint, write=FOnHitTestPoint};
	__property TPainterResizeEvent OnResize = {read=FOnResize, write=FOnResize};
	__property TPainterGetEventTarget OnGetEventTarget = {read=FOnGetEventTarget, write=FOnGetEventTarget};
	__property TPainterSetCursor OnSetCursor = {read=FOnSetCursor, write=FOnSetCursor};
public:
	/* TComObject.Create */ inline __fastcall TCustomPaintedBehavior() : TCustomElementBehavior() { }
	/* TComObject.CreateAggregated */ inline __fastcall TCustomPaintedBehavior(const System::_di_IInterface Controller) : TCustomElementBehavior(Controller) { }
	/* TComObject.CreateFromFactory */ inline __fastcall TCustomPaintedBehavior(System::Win::Comobj::TComObjectFactory* Factory, const System::_di_IInterface Controller) : TCustomElementBehavior(Factory, Controller) { }
	
private:
	void *__IHTMLPainterEventInfo;	// Mshtml::IHTMLPainterEventInfo 
	void *__IHTMLPainter;	// Mshtml::IHTMLPainter 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3050F6DF-98B5-11CF-BB82-00AA00BDCE0B}
	operator Mshtml::_di_IHTMLPainterEventInfo()
	{
		Mshtml::_di_IHTMLPainterEventInfo intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Mshtml::IHTMLPainterEventInfo*(void) { return (Mshtml::IHTMLPainterEventInfo*)&__IHTMLPainterEventInfo; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3050F6A6-98B5-11CF-BB82-00AA00BDCE0B}
	operator Mshtml::_di_IHTMLPainter()
	{
		Mshtml::_di_IHTMLPainter intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Mshtml::IHTMLPainter*(void) { return (Mshtml::IHTMLPainter*)&__IHTMLPainter; }
	#endif
	
};


class PASCALIMPLEMENTATION TCustomBinaryElementBehavior : public TCustomPaintedBehavior
{
	typedef TCustomPaintedBehavior inherited;
	
protected:
	HRESULT __stdcall _create(const Mshtml::_di_IElementNamespace pNamespace);
	virtual HRESULT __stdcall CreateWithImplementation(const Mshtml::_di_IElementNamespace pNamespace, const System::WideString bstrImplementation);
	virtual HRESULT __stdcall FindBehavior(const System::WideString bstrBehavior, const System::WideString bstrBehaviorUrl, const Mshtml::_di_IElementBehaviorSite pSite, /* out */ Mshtml::_di_IElementBehavior &ppBehavior);
public:
	/* TCustomPaintedBehavior.Destroy */ inline __fastcall virtual ~TCustomBinaryElementBehavior() { }
	
public:
	/* TComObject.Create */ inline __fastcall TCustomBinaryElementBehavior() : TCustomPaintedBehavior() { }
	/* TComObject.CreateAggregated */ inline __fastcall TCustomBinaryElementBehavior(const System::_di_IInterface Controller) : TCustomPaintedBehavior(Controller) { }
	/* TComObject.CreateFromFactory */ inline __fastcall TCustomBinaryElementBehavior(System::Win::Comobj::TComObjectFactory* Factory, const System::_di_IInterface Controller) : TCustomPaintedBehavior(Factory, Controller) { }
	
private:
	void *__IElementBehaviorFactory;	// Mshtml::IElementBehaviorFactory 
	void *__IElementNamespaceFactory2;	// Mshtml::IElementNamespaceFactory2 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3050F429-98B5-11CF-BB82-00AA00BDCE0B}
	operator Mshtml::_di_IElementBehaviorFactory()
	{
		Mshtml::_di_IElementBehaviorFactory intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Mshtml::IElementBehaviorFactory*(void) { return (Mshtml::IElementBehaviorFactory*)&__IElementBehaviorFactory; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3050F805-98B5-11CF-BB82-00AA00BDCE0B}
	operator Mshtml::_di_IElementNamespaceFactory2()
	{
		Mshtml::_di_IElementNamespaceFactory2 intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Mshtml::IElementNamespaceFactory2*(void) { return (Mshtml::IElementNamespaceFactory2*)&__IElementNamespaceFactory2; }
	#endif
	
};


typedef void __fastcall (__closure *TGetMessageInfoEvent)(TCustomBGColorBehavior* Sender, System::UnicodeString &MsgText, System::Uitypes::TColor &TextColor, System::Uitypes::TFontStyles &FontStyle, bool &DoDefault);

typedef void __fastcall (__closure *TGetIsCustomContainerEvent)(TGridInfo* Sender, Mshtml::_di_IHTMLElement Element, bool &IsGridContainer);

class PASCALIMPLEMENTATION TGridInfo : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int FGridsizeX;
	int FGridsizeY;
	bool FShowGrid;
	System::Classes::TNotifyEvent FOnInvalidateGrid;
	TGetIsCustomContainerEvent FOnGetIsCustomContainer;
	void __fastcall SetShowGrid(const bool Value);
	void __fastcall SetGridSizeX(const int Value);
	void __fastcall SetGridSizeY(const int Value);
	
private:
	void __fastcall InvalidateGrid();
	
public:
	__fastcall TGridInfo();
	bool __fastcall IsCustomContainer(Mshtml::_di_IHTMLElement Element);
	__property bool ShowGrid = {read=FShowGrid, write=SetShowGrid, nodefault};
	__property int GridSizeX = {read=FGridsizeX, write=SetGridSizeX, nodefault};
	__property int GridSizeY = {read=FGridsizeY, write=SetGridSizeY, nodefault};
	__property System::Classes::TNotifyEvent OnInvalidateGrid = {read=FOnInvalidateGrid, write=FOnInvalidateGrid};
	__property TGetIsCustomContainerEvent OnGetIsCustomContainer = {read=FOnGetIsCustomContainer, write=FOnGetIsCustomContainer};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TGridInfo() { }
	
};


typedef System::DynamicArray<Mshtml::_di_IHTMLElement> TExcludeRects;

typedef bool __fastcall (*TExcludeElementRectEvent)(TCustomBGColorBehavior* Sender, const Mshtml::_di_IHTMLElement E, bool &DoDefault);

class PASCALIMPLEMENTATION TCustomBGColorBehavior : public TCustomPaintedBehavior
{
	typedef TCustomPaintedBehavior inherited;
	
private:
	bool FShowMessage;
	TExcludeRects FExcludeRects;
	int FDocVersion;
	TGetMessageInfoEvent FOnGetMessageInfo;
	TExcludeElementRectEvent FOnExcludeElementRect;
	void __fastcall SetShowMessage(const bool Value);
	
private:
	TCustomHTMLEditHost* FHTMLEditHost;
	bool FCanChangeLayoutMode;
	
protected:
	void __fastcall DrawMessage(const System::Types::TRect &BoundsRect, Mshtml::_di_IHTMLDocument2 Document);
	virtual HRESULT __fastcall DoDraw(const System::Types::TRect &BoundsRect, const System::Types::TRect &UpdateRect, const TPainterDrawFlags DrawFlags, void * DrawObject);
	virtual void __fastcall DrawBackground(const System::Types::TRect &BoundsRect, const System::Types::TRect &UpdateRect, const TPainterDrawFlags DrawFlags, void * DrawObject, const Mshtml::_di_IHTMLDocument2 Document) = 0 ;
	virtual bool __fastcall ExcludeElementRect(const System::_di_IInterface EUnk, const Mshtml::_di_IHTMLElement E, bool &DoDefault);
	virtual HRESULT __stdcall GetPainterInfo(/* out */ Mshtml::_HTML_PAINTER_INFO &pInfo);
	virtual HRESULT __stdcall onresizeevent(Mshtml::tagSIZE size);
	virtual HRESULT __fastcall DoDetach();
	
public:
	virtual void __fastcall Initialize();
	__fastcall virtual ~TCustomBGColorBehavior();
	virtual void __fastcall Refresh();
	__property TExcludeRects ExcludeRects = {read=FExcludeRects, write=FExcludeRects};
	__property bool CanChangeLayoutMode = {read=FCanChangeLayoutMode, write=FCanChangeLayoutMode, nodefault};
	__property bool ShowMessage = {read=FShowMessage, write=SetShowMessage, nodefault};
	__property TGetMessageInfoEvent OnGetMessageInfo = {read=FOnGetMessageInfo, write=FOnGetMessageInfo};
	__property TExcludeElementRectEvent OnExcludeElementRect = {read=FOnExcludeElementRect, write=FOnExcludeElementRect};
public:
	/* TComObject.Create */ inline __fastcall TCustomBGColorBehavior() : TCustomPaintedBehavior() { }
	/* TComObject.CreateAggregated */ inline __fastcall TCustomBGColorBehavior(const System::_di_IInterface Controller) : TCustomPaintedBehavior(Controller) { }
	/* TComObject.CreateFromFactory */ inline __fastcall TCustomBGColorBehavior(System::Win::Comobj::TComObjectFactory* Factory, const System::_di_IInterface Controller) : TCustomPaintedBehavior(Factory, Controller) { }
	
};


class PASCALIMPLEMENTATION TCustomGridBehavior : public TCustomBGColorBehavior
{
	typedef TCustomBGColorBehavior inherited;
	
private:
	bool FOwnsInfo;
	TGridInfo* FGridInfo;
	bool FIsContentPage;
	int __fastcall GetGridsizeX();
	int __fastcall GetGridsizeY();
	bool __fastcall GetShowGrid();
	void __fastcall SetGridSizeX(const int Value);
	void __fastcall SetGridSizeY(const int Value);
	void __fastcall SetShowGrid(const bool Value);
	void __fastcall SetInfo(TGridInfo* AGridInfo);
	TGridInfo* __fastcall GetInfo();
	TGetIsCustomContainerEvent __fastcall GetOnGetIsCustomContainer();
	void __fastcall SetOnGetIsCustomContainer(const TGetIsCustomContainerEvent Value);
	void __fastcall InvalidateGrid(System::TObject* Sender);
	
protected:
	bool __fastcall DisplayGrid();
	void __fastcall DrawAlphaBlend(const System::Types::TRect &rt, HDC hdcwnd);
	virtual void __fastcall DrawBackground(const System::Types::TRect &BoundsRect, const System::Types::TRect &UpdateRect, const TPainterDrawFlags DrawFlags, void * DrawObject, const Mshtml::_di_IHTMLDocument2 Document);
	virtual bool __fastcall ExcludeElementRect(const System::_di_IInterface EUnk, const Mshtml::_di_IHTMLElement E, bool &DoDefault);
	
public:
	__fastcall virtual ~TCustomGridBehavior();
	virtual void __fastcall Refresh();
	__property TGridInfo* GridInfo = {read=GetInfo, write=SetInfo};
	__property int GridSizeX = {read=GetGridsizeX, write=SetGridSizeX, nodefault};
	__property int GridSizeY = {read=GetGridsizeY, write=SetGridSizeY, nodefault};
	__property bool ShowGrid = {read=GetShowGrid, write=SetShowGrid, nodefault};
	__property bool IsContentPage = {read=FIsContentPage, write=FIsContentPage, nodefault};
	__property TGetIsCustomContainerEvent OnGetIsCustomContainer = {read=GetOnGetIsCustomContainer, write=SetOnGetIsCustomContainer};
public:
	/* TComObject.Create */ inline __fastcall TCustomGridBehavior() : TCustomBGColorBehavior() { }
	/* TComObject.CreateAggregated */ inline __fastcall TCustomGridBehavior(const System::_di_IInterface Controller) : TCustomBGColorBehavior(Controller) { }
	/* TComObject.CreateFromFactory */ inline __fastcall TCustomGridBehavior(System::Win::Comobj::TComObjectFactory* Factory, const System::_di_IInterface Controller) : TCustomBGColorBehavior(Factory, Controller) { }
	
};


class PASCALIMPLEMENTATION TCustomBodyGridBehavior : public TCustomGridBehavior
{
	typedef TCustomGridBehavior inherited;
	
private:
	System::Classes::TList* FBehaviors;
	TCustomBehaviorWrapper* FGridWrapper;
	int FBehaviorsDocVersion;
	void __fastcall GetComClass(System::Win::Comobjwrapper::TComComponent* Sender, System::Win::Comobj::TComClass &ComClass);
	bool __fastcall AddGridBehavior(const System::OleVariant &MSPositioning, Mshtml::_di_IHTMLElement Element);
	
protected:
	void __fastcall BehaviorCreated(TCustomBehaviorWrapper* Sender, TCustomElementBehavior* const Behavior);
	void __fastcall BehaviorDestroyed(TCustomBehaviorWrapper* Sender, TCustomElementBehavior* const Behavior);
	virtual HRESULT __stdcall Detach();
	
public:
	void __fastcall AddGridBehaviors();
	virtual void __fastcall Initialize();
	__fastcall virtual ~TCustomBodyGridBehavior();
public:
	/* TComObject.Create */ inline __fastcall TCustomBodyGridBehavior() : TCustomGridBehavior() { }
	/* TComObject.CreateAggregated */ inline __fastcall TCustomBodyGridBehavior(const System::_di_IInterface Controller) : TCustomGridBehavior(Controller) { }
	/* TComObject.CreateFromFactory */ inline __fastcall TCustomBodyGridBehavior(System::Win::Comobj::TComObjectFactory* Factory, const System::_di_IInterface Controller) : TCustomGridBehavior(Factory, Controller) { }
	
};


class PASCALIMPLEMENTATION TGridBehavior : public TCustomGridBehavior
{
	typedef TCustomGridBehavior inherited;
	
public:
	/* TCustomGridBehavior.Destroy */ inline __fastcall virtual ~TGridBehavior() { }
	
public:
	/* TComObject.Create */ inline __fastcall TGridBehavior() : TCustomGridBehavior() { }
	/* TComObject.CreateAggregated */ inline __fastcall TGridBehavior(const System::_di_IInterface Controller) : TCustomGridBehavior(Controller) { }
	/* TComObject.CreateFromFactory */ inline __fastcall TGridBehavior(System::Win::Comobj::TComObjectFactory* Factory, const System::_di_IInterface Controller) : TCustomGridBehavior(Factory, Controller) { }
	
};


#ifndef _WIN64
typedef System::TMetaClass* TCustomElementBehaviorClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TCustomElementBehaviorClass);
#endif /* _WIN64 */

typedef void __fastcall (__closure *TGetComClassEvent)(TCustomBehaviorWrapper* Sender, TCustomElementBehaviorClass &BehaviorComClass);

typedef void __fastcall (__closure *TBehaviorWrapperHResultEvent)(TCustomBehaviorWrapper* Sender, TCustomElementBehavior* Behavior, HRESULT &Result);

typedef void __fastcall (__closure *TBehaviorWrapperInitEvent)(TCustomBehaviorWrapper* Sender, TCustomElementBehavior* Behavior, const Mshtml::_di_IElementBehaviorSite pBehaviorSite, HRESULT &Result);

typedef void __fastcall (__closure *TBehaviorWrapperNotifyEvent)(TCustomBehaviorWrapper* Sender, TCustomElementBehavior* Behavior, int lEvent, System::OleVariant &pVar, HRESULT &Result);

typedef void __fastcall (__closure *TBehaviorWrapperEvent)(TCustomBehaviorWrapper* Sender, TCustomElementBehavior* const Behavior);

typedef void __fastcall (__closure *TBehaviorWrapperCreateEvent)(TCustomBehaviorWrapper* Sender, TCustomElementBehavior* &Behavior);

typedef void __fastcall (__closure *TBehaviorWrapperSupportsNamespaceEvent)(TCustomBehaviorWrapper* Sender, System::UnicodeString ANamespace, System::UnicodeString AURL, System::UnicodeString ALongURL, bool &Supports);

class PASCALIMPLEMENTATION TCustomBehaviorWrapper : public System::Win::Comobjwrapper::TComComponent
{
	typedef System::Win::Comobjwrapper::TComComponent inherited;
	
private:
	bool FAttachedBehavior;
	TCustomElementBehavior* FBehavior;
	System::Classes::TStringList* FTags;
	TBehaviorWrapperEvent FOnBehaviorCreated;
	TBehaviorWrapperEvent FOnBehaviorDestroy;
	TBehaviorWrapperHResultEvent FOnDetach;
	TBehaviorWrapperInitEvent FOnInit;
	TBehaviorWrapperNotifyEvent FOnNotify;
	TBehaviorWrapperHResultEvent FOnContentSave;
	TBehaviorWrapperHResultEvent FOnContentReady;
	TBehaviorWrapperHResultEvent FOnDocumentReady;
	TBehaviorWrapperHResultEvent FOnDocumentContextChange;
	TBehaviorWrapperHResultEvent FOnControlSelect;
	TCustomElementBehaviorFactory* FFactory;
	System::UnicodeString FNamespace;
	System::UnicodeString FURL;
	TBehaviorWrapperCreateEvent FOnCreateBehavior;
	TBehaviorWrapperSupportsNamespaceEvent FOnSupportsNamespace;
	void __fastcall SetFactory(TCustomElementBehaviorFactory* const Value);
	void __fastcall SetTags(System::Classes::TStringList* const Value);
	
protected:
	virtual void __fastcall DoCreated(System::Win::Comobjwrapper::TWrappedComObject* const ComObj);
	virtual HRESULT __fastcall DoContentReady(TCustomElementBehavior* Behavior);
	virtual HRESULT __fastcall DoContentSave(TCustomElementBehavior* Behavior);
	virtual void __fastcall DoDestroy(System::Win::Comobjwrapper::TWrappedComObject* const ComObj);
	virtual HRESULT __fastcall DoDetach(TCustomElementBehavior* Behavior);
	virtual HRESULT __fastcall DoDocumentReady(TCustomElementBehavior* Behavior);
	virtual HRESULT __fastcall DoDocumentContextChange(TCustomElementBehavior* Behavior);
	virtual HRESULT __fastcall DoControlSelect(TCustomElementBehavior* Behavior);
	virtual HRESULT __fastcall DoNotify(TCustomElementBehavior* Behavior, int lEvent, System::OleVariant &pVar);
	virtual HRESULT __fastcall DoInit(TCustomElementBehavior* Behavior, const Mshtml::_di_IElementBehaviorSite pBehaviorSite);
	virtual System::Win::Comobj::TComClass __fastcall GetComClass();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	
public:
	__fastcall virtual TCustomBehaviorWrapper(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomBehaviorWrapper();
	void __fastcall AddBehavior(System::UnicodeString URL, Mshtml::_di_IHTMLElement Element)/* overload */;
	void __fastcall AddBehavior(System::UnicodeString URL, Mshtml::_di_IHTMLElement2 Element)/* overload */;
	void __fastcall AddBehavior(Mshtml::_di_IHTMLElement Element)/* overload */;
	void __fastcall AddBehavior(Mshtml::_di_IHTMLElement2 Element)/* overload */;
	Mshtml::_di_IElementBehavior __fastcall CreateBehavior();
	bool __fastcall RemoveBehavior(TCustomElementBehavior* Behavior);
	bool __fastcall SupportsNamespace(const System::UnicodeString ANamespace, const System::UnicodeString AURL, const System::UnicodeString ALongURL);
	__property TCustomElementBehaviorFactory* Factory = {read=FFactory, write=SetFactory};
	__property System::UnicodeString Namespace = {read=FNamespace, write=FNamespace};
	__property System::Classes::TStringList* Tags = {read=FTags, write=SetTags};
	__property System::UnicodeString URL = {read=FURL, write=FURL};
	__property TBehaviorWrapperEvent OnBehaviorCreated = {read=FOnBehaviorCreated, write=FOnBehaviorCreated};
	__property TBehaviorWrapperEvent OnBehaviorDestroy = {read=FOnBehaviorDestroy, write=FOnBehaviorDestroy};
	__property TBehaviorWrapperNotifyEvent OnNotify = {read=FOnNotify, write=FOnNotify};
	__property TBehaviorWrapperHResultEvent OnDetach = {read=FOnDetach, write=FOnDetach};
	__property TBehaviorWrapperInitEvent OnInit = {read=FOnInit, write=FOnInit};
	__property TBehaviorWrapperHResultEvent OnContentReady = {read=FOnContentReady, write=FOnContentReady};
	__property TBehaviorWrapperHResultEvent OnContentSave = {read=FOnContentSave, write=FOnContentSave};
	__property TBehaviorWrapperHResultEvent OnDocumentReady = {read=FOnDocumentReady, write=FOnDocumentReady};
	__property TBehaviorWrapperHResultEvent OnDocumentContextChange = {read=FOnDocumentContextChange, write=FOnDocumentContextChange};
	__property TBehaviorWrapperHResultEvent OnControlSelect = {read=FOnControlSelect, write=FOnControlSelect};
	__property TBehaviorWrapperCreateEvent OnCreateBehavior = {read=FOnCreateBehavior, write=FOnCreateBehavior};
	__property TBehaviorWrapperSupportsNamespaceEvent OnSupportsNamespace = {read=FOnSupportsNamespace, write=FOnSupportsNamespace};
};


class PASCALIMPLEMENTATION TBehaviorWrapper : public TCustomBehaviorWrapper
{
	typedef TCustomBehaviorWrapper inherited;
	
__published:
	__property Factory;
	__property Description = {default=0};
	__property GUID = {default=0};
	__property Namespace = {default=0};
	__property Tags;
	__property URL = {default=0};
	__property OnBehaviorCreated;
	__property OnBehaviorDestroy;
	__property OnCreateBehavior;
	__property OnGetComClass;
	__property OnNotify;
	__property OnDetach;
	__property OnInit;
	__property OnContentReady;
	__property OnContentSave;
	__property OnDocumentReady;
	__property OnDocumentContextChange;
	__property OnControlSelect;
	__property OnSupportsNamespace;
public:
	/* TCustomBehaviorWrapper.Create */ inline __fastcall virtual TBehaviorWrapper(System::Classes::TComponent* AOwner) : TCustomBehaviorWrapper(AOwner) { }
	/* TCustomBehaviorWrapper.Destroy */ inline __fastcall virtual ~TBehaviorWrapper() { }
	
};


typedef void __fastcall (__closure *TFindBehaviorEvent)(TCustomElementBehaviorFactory* Sender, const System::UnicodeString Behavior, const System::UnicodeString BehaviorUrl, const Mshtml::_di_IElementBehaviorSite pSite, /* out */ Mshtml::_di_IElementBehavior &ppBehavior, HRESULT &Result);

typedef void __fastcall (__closure *TResolveEvent)(TCustomElementBehaviorFactory* Sender, const System::UnicodeString Namespace, const System::UnicodeString TagName, System::WideString Attrs, const Mshtml::_di_IElementNamespace pNamespace, HRESULT Result);

typedef System::DynamicArray<TCustomElementBehavior*> TBehaviorArray;

class PASCALIMPLEMENTATION TCustomElementBehaviorFactory : public Webbrowserex::TWebBrowserServiceProvider
{
	typedef Webbrowserex::TWebBrowserServiceProvider inherited;
	
private:
	System::Classes::TList* FBehaviors;
	TFindBehaviorEvent FOnFindBehavior;
	TResolveEvent FOnResolve;
	
protected:
	HRESULT __fastcall DoResolve(const System::WideString bstrNamespace, const System::WideString bstrTagName, const System::WideString bstrAttrs, const Mshtml::_di_IElementNamespace pNamespace);
	HRESULT __stdcall FindBehavior(const System::WideString bstrBehavior, const System::WideString bstrBehaviorUrl, const Mshtml::_di_IElementBehaviorSite pSite, /* out */ Mshtml::_di_IElementBehavior &ppBehavior);
	virtual HRESULT __stdcall _create(const Mshtml::_di_IElementNamespace pNamespace);
	HRESULT __stdcall CreateWithImplementation(const Mshtml::_di_IElementNamespace pNamespace, const System::WideString bstrImplementation);
	HRESULT __stdcall Resolve(const System::WideString bstrNamespace, const System::WideString bstrTagName, const System::WideString bstrAttrs, const Mshtml::_di_IElementNamespace pNamespace);
	
public:
	__fastcall virtual TCustomElementBehaviorFactory(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomElementBehaviorFactory();
	void __fastcall AddBehavior(Mshtml::_di_IHTMLElement2 Element, TCustomElementBehavior* Behavior);
	void __fastcall Delete(TCustomElementBehavior* Behavior, bool AllowUndo = true)/* overload */;
	void __fastcall Delete(TBehaviorArray BehaviorsArray, bool AllowUndo = true)/* overload */;
	void __fastcall RegisterBehavior(TCustomBehaviorWrapper* Behavior);
	void __fastcall Select(TCustomElementBehavior* Behavior)/* overload */;
	void __fastcall Select(TBehaviorArray BehaviorsArray)/* overload */;
	void __fastcall UnRegisterBehavior(TCustomBehaviorWrapper* Behavior);
	__property System::Classes::TList* Behaviors = {read=FBehaviors};
	__property TFindBehaviorEvent OnFindBehavior = {read=FOnFindBehavior, write=FOnFindBehavior};
	__property TResolveEvent OnResolve = {read=FOnResolve, write=FOnResolve};
private:
	void *__IElementNamespaceFactoryCallback;	// Mshtml::IElementNamespaceFactoryCallback 
	void *__IElementNamespaceFactory2;	// Mshtml::IElementNamespaceFactory2 
	void *__IElementBehaviorFactory;	// Mshtml::IElementBehaviorFactory 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3050F7FD-98B5-11CF-BB82-00AA00BDCE0B}
	operator Mshtml::_di_IElementNamespaceFactoryCallback()
	{
		Mshtml::_di_IElementNamespaceFactoryCallback intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Mshtml::IElementNamespaceFactoryCallback*(void) { return (Mshtml::IElementNamespaceFactoryCallback*)&__IElementNamespaceFactoryCallback; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3050F805-98B5-11CF-BB82-00AA00BDCE0B}
	operator Mshtml::_di_IElementNamespaceFactory2()
	{
		Mshtml::_di_IElementNamespaceFactory2 intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Mshtml::IElementNamespaceFactory2*(void) { return (Mshtml::IElementNamespaceFactory2*)&__IElementNamespaceFactory2; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3050F429-98B5-11CF-BB82-00AA00BDCE0B}
	operator Mshtml::_di_IElementBehaviorFactory()
	{
		Mshtml::_di_IElementBehaviorFactory intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Mshtml::IElementBehaviorFactory*(void) { return (Mshtml::IElementBehaviorFactory*)&__IElementBehaviorFactory; }
	#endif
	
};


class PASCALIMPLEMENTATION TElementBehaviorFactory : public TCustomElementBehaviorFactory
{
	typedef TCustomElementBehaviorFactory inherited;
	
__published:
	__property WebBrowser;
	__property OnFindBehavior;
	__property OnResolve;
public:
	/* TCustomElementBehaviorFactory.Create */ inline __fastcall virtual TElementBehaviorFactory(System::Classes::TComponent* AOwner) : TCustomElementBehaviorFactory(AOwner) { }
	/* TCustomElementBehaviorFactory.Destroy */ inline __fastcall virtual ~TElementBehaviorFactory() { }
	
};


class PASCALIMPLEMENTATION TElementNamespaceFactory : public Webbrowserex::TWebBrowserServiceProvider
{
	typedef Webbrowserex::TWebBrowserServiceProvider inherited;
	
public:
	virtual HRESULT __stdcall _create(const Mshtml::_di_IElementNamespace pNamespace);
	virtual HRESULT __stdcall CreateWithImplementation(const Mshtml::_di_IElementNamespace pNamespace, const System::WideString bstrImplementation);
public:
	/* TWebBrowserServiceProvider.Create */ inline __fastcall virtual TElementNamespaceFactory(System::Classes::TComponent* AOwner) : Webbrowserex::TWebBrowserServiceProvider(AOwner) { }
	/* TWebBrowserServiceProvider.Destroy */ inline __fastcall virtual ~TElementNamespaceFactory() { }
	
private:
	void *__IElementNamespaceFactory2;	// Mshtml::IElementNamespaceFactory2 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3050F805-98B5-11CF-BB82-00AA00BDCE0B}
	operator Mshtml::_di_IElementNamespaceFactory2()
	{
		Mshtml::_di_IElementNamespaceFactory2 intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Mshtml::IElementNamespaceFactory2*(void) { return (Mshtml::IElementNamespaceFactory2*)&__IElementNamespaceFactory2; }
	#endif
	
};


enum DECLSPEC_DENUM TTagType : unsigned char { ttOpen, ttClose, ttBoth };

enum DECLSPEC_DENUM TTagAlignment : unsigned char { taLeft, taCenter, taRight, taUndefined };

enum DECLSPEC_DENUM TTagPositioning : unsigned char { tpStatic, tpAbsolute, tpRelative, tpAll };

enum DECLSPEC_DENUM TTagDirection : unsigned char { tdLeftToRight, tdRightToLeft, tdTopToBottom, tdBottomToTop, tdAll };

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TGlyphTable : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::UnicodeString FGlyphTable;
	
public:
	void __fastcall AddGlyph(System::UnicodeString TagID, System::UnicodeString GlyphLocation, TTagType TagType, TTagAlignment Alignment, TTagPositioning Positioning, TTagDirection Direction, int Width, int Height);
	void __fastcall ClearTable();
	__property System::UnicodeString GlyphTable = {read=FGlyphTable};
public:
	/* TObject.Create */ inline __fastcall TGlyphTable() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TGlyphTable() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TCustomHTMLEditHost : public Webbrowserex::TWebBrowserServiceProvider
{
	typedef Webbrowserex::TWebBrowserServiceProvider inherited;
	
private:
	bool FSnap;
	TCustomGridBehavior* FGridBehavior;
	int FGridSizeX;
	int FGridSizeY;
	void __fastcall SetGridBehavior(TCustomGridBehavior* const Value);
	int __fastcall GetGridSizeX();
	int __fastcall GetGridSizeY();
	void __fastcall SetGridSizeX(const int Value);
	void __fastcall SetGridSizeY(const int Value);
	
protected:
	virtual HRESULT __stdcall SnapRect(const Mshtml::_di_IHTMLElement pIElement, System::Types::TRect &prcNew, Winapi::Activex::TOleEnum eHandle);
	virtual HRESULT __stdcall PreDrag();
	
public:
	__fastcall virtual TCustomHTMLEditHost(System::Classes::TComponent* AOwner);
	int __fastcall SnapBottom(int Bottom);
	int __fastcall SnapLeft(int Left);
	int __fastcall SnapRight(int Right);
	int __fastcall SnapTop(int Top);
	__property TCustomGridBehavior* Grid = {read=FGridBehavior, write=SetGridBehavior};
	__property int GridSizeX = {read=GetGridSizeX, write=SetGridSizeX, default=10};
	__property int GridSizeY = {read=GetGridSizeY, write=SetGridSizeY, default=10};
	__property bool Snap = {read=FSnap, write=FSnap, default=1};
public:
	/* TWebBrowserServiceProvider.Destroy */ inline __fastcall virtual ~TCustomHTMLEditHost() { }
	
private:
	void *__IHTMLEditHost2;	// Mshtml::IHTMLEditHost2 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3050F848-98B5-11CF-BB82-00AA00BDCE0D}
	operator Mshtml::_di_IHTMLEditHost2()
	{
		Mshtml::_di_IHTMLEditHost2 intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Mshtml::IHTMLEditHost2*(void) { return (Mshtml::IHTMLEditHost2*)&__IHTMLEditHost2; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3050F6A0-98B5-11CF-BB82-00AA00BDCE0B}
	operator Mshtml::_di_IHTMLEditHost()
	{
		Mshtml::_di_IHTMLEditHost intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Mshtml::IHTMLEditHost*(void) { return (Mshtml::IHTMLEditHost*)&__IHTMLEditHost2; }
	#endif
	
};


class PASCALIMPLEMENTATION THTMLEditHost : public TCustomHTMLEditHost
{
	typedef TCustomHTMLEditHost inherited;
	
__published:
	__property GridSizeX = {default=10};
	__property GridSizeY = {default=10};
	__property Snap = {default=1};
	__property WebBrowser;
public:
	/* TCustomHTMLEditHost.Create */ inline __fastcall virtual THTMLEditHost(System::Classes::TComponent* AOwner) : TCustomHTMLEditHost(AOwner) { }
	
public:
	/* TWebBrowserServiceProvider.Destroy */ inline __fastcall virtual ~THTMLEditHost() { }
	
};


typedef void __fastcall (__closure *TPopulateNamespaceTableEvent)(TCustomHostBehaviorInit* Sender);

class PASCALIMPLEMENTATION TCustomHostBehaviorInit : public Webbrowserex::TWebBrowserServiceProvider
{
	typedef Webbrowserex::TWebBrowserServiceProvider inherited;
	
private:
	System::Widestrings::TWideStringList* FNamespaces;
	Mshtml::_di_IElementNamespaceTable FElementNamespaceTable;
	TPopulateNamespaceTableEvent FOnPopulateNamespaceTable;
	TCustomElementBehaviorFactory* FFactory;
	void __fastcall SetNamespaces(System::Widestrings::TWideStringList* const Value);
	void __fastcall SetFactory(TCustomElementBehaviorFactory* const Value);
	
protected:
	HRESULT __stdcall PopulateNamespaceTable();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	
public:
	__fastcall virtual TCustomHostBehaviorInit(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomHostBehaviorInit();
	__property TCustomElementBehaviorFactory* Factory = {read=FFactory, write=SetFactory};
	__property System::Widestrings::TWideStringList* Namespaces = {read=FNamespaces, write=SetNamespaces};
	__property TPopulateNamespaceTableEvent OnPopulateNamespaceTable = {read=FOnPopulateNamespaceTable, write=FOnPopulateNamespaceTable};
	__property Mshtml::_di_IElementNamespaceTable ElementNamespaceTable = {read=FElementNamespaceTable};
private:
	void *__IHostBehaviorInit;	// Mshtml::IHostBehaviorInit 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3050F842-98B5-11CF-BB82-00AA00BDCE0B}
	operator Mshtml::_di_IHostBehaviorInit()
	{
		Mshtml::_di_IHostBehaviorInit intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Mshtml::IHostBehaviorInit*(void) { return (Mshtml::IHostBehaviorInit*)&__IHostBehaviorInit; }
	#endif
	
};


class PASCALIMPLEMENTATION THostBehaviorInit : public TCustomHostBehaviorInit
{
	typedef TCustomHostBehaviorInit inherited;
	
__published:
	__property Factory;
	__property Namespaces;
	__property WebBrowser;
	__property OnPopulateNamespaceTable;
	__property OnBrowserChanged;
public:
	/* TCustomHostBehaviorInit.Create */ inline __fastcall virtual THostBehaviorInit(System::Classes::TComponent* AOwner) : TCustomHostBehaviorInit(AOwner) { }
	/* TCustomHostBehaviorInit.Destroy */ inline __fastcall virtual ~THostBehaviorInit() { }
	
};


class PASCALIMPLEMENTATION TCustomHTMLValidator : public Webbrowserex::TCustomWebBrowserComponent
{
	typedef Webbrowserex::TCustomWebBrowserComponent inherited;
	
private:
	System::Classes::TList* FInvalidTags;
	
public:
	void __fastcall ValidateDocument();
	__property System::Classes::TList* InvalidTags = {read=FInvalidTags};
public:
	/* TComponent.Create */ inline __fastcall virtual TCustomHTMLValidator(System::Classes::TComponent* AOwner) : Webbrowserex::TCustomWebBrowserComponent(AOwner) { }
	/* TComponent.Destroy */ inline __fastcall virtual ~TCustomHTMLValidator() { }
	
};


class PASCALIMPLEMENTATION TCustomWebBrowserServices : public Webbrowserex::TCustomWebBrowserComponent
{
	typedef Webbrowserex::TCustomWebBrowserComponent inherited;
	
protected:
	virtual void __fastcall ClearReferences();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall SetWebBrowser(Webbrowserex::TWebBrowserEx* const Value);
	
public:
	__fastcall virtual ~TCustomWebBrowserServices();
public:
	/* TComponent.Create */ inline __fastcall virtual TCustomWebBrowserServices(System::Classes::TComponent* AOwner) : Webbrowserex::TCustomWebBrowserComponent(AOwner) { }
	
};


typedef System::DynamicArray<Mshtml::_di_IHTMLElement> TElementArray;

enum DECLSPEC_DENUM TMarkupContentFlag : unsigned char { mctAbsoluteLayout, mctFlowLayout, mctText };

typedef System::Set<TMarkupContentFlag, TMarkupContentFlag::mctAbsoluteLayout, TMarkupContentFlag::mctText> TMarkupContentFlags;

class PASCALIMPLEMENTATION TCustomMarkupServices : public TCustomWebBrowserServices
{
	typedef TCustomWebBrowserServices inherited;
	
private:
	Mshtml::_di_IMarkupPointer2 FLeftPos;
	Mshtml::_di_IMarkupPointer2 FRightPos;
	Mshtml::_di_IMarkupPointer2 FStartPos;
	Mshtml::_di_IMarkupPointer2 FInsertPos;
	Mshtml::_di_IMarkupPointer2 FFinishPos;
	Mshtml::_di_IMarkupPointer2 FEndMatch;
	Mshtml::_di_IMarkupContainer2 FContainer;
	System::WideString FSearchText;
	Mshtml::_di_IHTMLDocument FDocument;
	Mshtml::_di_IMarkupServices FMarkupServices;
	Mshtml::_di_IMarkupServices2 FMarkupServices2;
	Mshtml::_di_IMarkupContainer FMarkupContainer;
	Mshtml::_di_IMarkupPointer2 __fastcall GetLeftPos();
	Mshtml::_di_IMarkupPointer2 __fastcall GetRightPos();
	Mshtml::_di_IMarkupPointer2 __fastcall GetStartPos();
	Mshtml::_di_IMarkupPointer2 __fastcall GetFinishPos();
	Mshtml::_di_IMarkupPointer2 __fastcall GetInsertPos();
	Mshtml::_di_IMarkupContainer2 __fastcall GetContainer();
	Mshtml::_di_IHTMLDocument2 __fastcall GetDocument2();
	Mshtml::_di_IMarkupServices __fastcall GetMarkupServices();
	Mshtml::_di_IMarkupServices2 __fastcall GetMarkupServices2();
	void __fastcall SetDocument(const Mshtml::_di_IHTMLDocument Value);
	Mshtml::_di_IHTMLElement __fastcall GetParsedElement();
	
protected:
	virtual void __fastcall ClearReferences();
	Mshtml::_di_IHTMLDocument __fastcall GetDocument();
	
public:
	void __fastcall CreateContainer();
	Mshtml::_di_IMarkupPointer __fastcall CreatePointer();
	void __fastcall Copy();
	bool __fastcall Find(System::UnicodeString TheText, bool FromBeginning = true);
	bool __fastcall FindNext();
	bool __fastcall ParseGlobalOnly(const NativeUInt HTML, Mshtml::_di_IMarkupContainer &ResultContainer);
	TMarkupContentFlags __fastcall CalcMarkupContentFlags();
	bool __fastcall ParseStringOnly(const System::WideString HTML, Mshtml::_di_IMarkupContainer &ResultContainer);
	void __fastcall ParseStringMove(const System::WideString HTML);
	void __fastcall ParseStringMovePosition(const System::WideString HTML, int Left, int Top, int ZIndex);
	void __fastcall InsertText(System::UnicodeString TheText);
	void __fastcall InsertElement(Mshtml::_di_IHTMLElement Element);
	void __fastcall Move();
	void __fastcall MovePosition(int Left, int Top, int ZIndex);
	bool __fastcall SelectLeftElement(bool CollapseText = false);
	void __fastcall SelectLeftToRightElements();
	void __fastcall RemoveElement(Mshtml::_di_IHTMLElement Element);
	HIDESBASE void __fastcall Remove();
	void __fastcall ReplaceContent(System::UnicodeString NewContent);
	void __fastcall Select(Mshtml::_di_IHTMLElement Element)/* overload */;
	void __fastcall Select(TElementArray Elements)/* overload */;
	__property Mshtml::_di_IHTMLDocument Document = {read=GetDocument, write=SetDocument};
	__property Mshtml::_di_IHTMLDocument2 Document2 = {read=GetDocument2};
	__property Mshtml::_di_IMarkupContainer2 Container = {read=GetContainer};
	__property Mshtml::_di_IMarkupPointer2 LeftPos = {read=GetLeftPos};
	__property Mshtml::_di_IMarkupServices MarkupServices = {read=GetMarkupServices};
	__property Mshtml::_di_IMarkupServices2 MarkupServices2 = {read=GetMarkupServices2};
	__property Mshtml::_di_IMarkupPointer2 RightPos = {read=GetRightPos};
	__property Mshtml::_di_IMarkupPointer2 StartPos = {read=GetStartPos};
	__property Mshtml::_di_IMarkupPointer2 FinishPos = {read=GetFinishPos};
	__property Mshtml::_di_IMarkupPointer2 InsertPos = {read=GetInsertPos};
	__property Mshtml::_di_IMarkupPointer2 EndMatch = {read=FEndMatch};
	__property Mshtml::_di_IMarkupContainer ResultContainer = {read=FMarkupContainer};
	__property Mshtml::_di_IHTMLElement ParsedElement = {read=GetParsedElement};
public:
	/* TCustomWebBrowserServices.Destroy */ inline __fastcall virtual ~TCustomMarkupServices() { }
	
public:
	/* TComponent.Create */ inline __fastcall virtual TCustomMarkupServices(System::Classes::TComponent* AOwner) : TCustomWebBrowserServices(AOwner) { }
	
};


class PASCALIMPLEMENTATION TMarkupServices : public TCustomMarkupServices
{
	typedef TCustomMarkupServices inherited;
	
__published:
	__property WebBrowser;
public:
	/* TCustomWebBrowserServices.Destroy */ inline __fastcall virtual ~TMarkupServices() { }
	
public:
	/* TComponent.Create */ inline __fastcall virtual TMarkupServices(System::Classes::TComponent* AOwner) : TCustomMarkupServices(AOwner) { }
	
};


class PASCALIMPLEMENTATION TCustomDisplayServices : public TCustomWebBrowserServices
{
	typedef TCustomWebBrowserServices inherited;
	
private:
	Mshtml::_di_IDisplayPointer FStartPtr;
	Mshtml::_di_IDisplayPointer FEndPtr;
	Mshtml::_di_IDisplayServices FDisplayServices;
	Mshtml::_di_IDisplayPointer __fastcall GetStartPtr();
	Mshtml::_di_IDisplayPointer __fastcall GetEndPtr();
	Mshtml::_di_IDisplayServices __fastcall GetDisplayServices();
	Mshtml::_di_IHTMLCaret __fastcall GetCaret();
	Mshtml::_di_ILineInfo __fastcall GetLineInfo();
	
protected:
	virtual void __fastcall ClearReferences();
	
public:
	Mshtml::_di_IDisplayPointer __fastcall CreateDisplayPointer();
	__property Mshtml::_di_IHTMLCaret Caret = {read=GetCaret};
	__property Mshtml::_di_ILineInfo LineInfo = {read=GetLineInfo};
	__property Mshtml::_di_IDisplayServices DisplayServices = {read=GetDisplayServices};
	__property Mshtml::_di_IDisplayPointer StartPtr = {read=GetStartPtr};
	__property Mshtml::_di_IDisplayPointer EndPtr = {read=GetEndPtr};
public:
	/* TCustomWebBrowserServices.Destroy */ inline __fastcall virtual ~TCustomDisplayServices() { }
	
public:
	/* TComponent.Create */ inline __fastcall virtual TCustomDisplayServices(System::Classes::TComponent* AOwner) : TCustomWebBrowserServices(AOwner) { }
	
};


class PASCALIMPLEMENTATION TDisplayServices : public TCustomDisplayServices
{
	typedef TCustomDisplayServices inherited;
	
__published:
	__property WebBrowser;
public:
	/* TCustomWebBrowserServices.Destroy */ inline __fastcall virtual ~TDisplayServices() { }
	
public:
	/* TComponent.Create */ inline __fastcall virtual TDisplayServices(System::Classes::TComponent* AOwner) : TCustomDisplayServices(AOwner) { }
	
};


class PASCALIMPLEMENTATION TCustomHighlightRenderingServices : public TCustomWebBrowserServices
{
	typedef TCustomWebBrowserServices inherited;
	
private:
	Mshtml::_di_IHTMLRenderStyle FHTMLRenderStyle;
	Mshtml::_di_IHighlightRenderingServices FHighlightRenderingServices;
	Mshtml::_di_IHTMLRenderStyle __fastcall GetHTMLRenderStyle();
	Mshtml::_di_IHighlightRenderingServices __fastcall GetHighlightRenderingServices();
	
protected:
	virtual void __fastcall ClearReferences();
	
public:
	Mshtml::_di_IHTMLRenderStyle __fastcall CreateRenderStyle();
	__property Mshtml::_di_IHighlightRenderingServices HighlightRenderingServices = {read=GetHighlightRenderingServices};
	__property Mshtml::_di_IHTMLRenderStyle RenderStyle = {read=GetHTMLRenderStyle};
public:
	/* TCustomWebBrowserServices.Destroy */ inline __fastcall virtual ~TCustomHighlightRenderingServices() { }
	
public:
	/* TComponent.Create */ inline __fastcall virtual TCustomHighlightRenderingServices(System::Classes::TComponent* AOwner) : TCustomWebBrowserServices(AOwner) { }
	
};


class PASCALIMPLEMENTATION THighlightRenderingServices : public TCustomHighlightRenderingServices
{
	typedef TCustomHighlightRenderingServices inherited;
	
__published:
	__property WebBrowser;
public:
	/* TCustomWebBrowserServices.Destroy */ inline __fastcall virtual ~THighlightRenderingServices() { }
	
public:
	/* TComponent.Create */ inline __fastcall virtual THighlightRenderingServices(System::Classes::TComponent* AOwner) : TCustomHighlightRenderingServices(AOwner) { }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TParserEventDispatch : public Webbrowserex::TEventDispatchEx
{
	typedef Webbrowserex::TEventDispatchEx inherited;
	
private:
	TCustomMSHTMLParser* FParser;
	
protected:
	virtual System::_di_IInterface __fastcall GetEventInterface();
	virtual HRESULT __fastcall DoInvoke(int DispID, const GUID &IID, int LocaleID, System::Word Flags, tagDISPPARAMS &dps, Winapi::Activex::PDispIDList pDispIds, void * VarResult, void * ExcepInfo, void * ArgErr);
	
public:
	virtual void __fastcall AfterConstruction();
public:
	/* TEventDispatchEx.Destroy */ inline __fastcall virtual ~TParserEventDispatch() { }
	
public:
	/* TObject.Create */ inline __fastcall TParserEventDispatch() : Webbrowserex::TEventDispatchEx() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TCustomMSHTMLParser : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	TParserEventDispatch* FDocEvents;
	Mshtml::_di_IHTMLDocument2 FDocument2;
	System::Classes::TNotifyEvent FAfterUpdate;
	System::Classes::TNotifyEvent FOnReadyStateChange;
	System::Classes::TNotifyEvent FBeforeUpdate;
	Mshtml::_di_IHTMLDocument2 __fastcall GetDocument2();
	Mshtml::_di_IHTMLDocument3 __fastcall GetDocument3();
	
protected:
	void __fastcall DoAfterUpdate();
	void __fastcall DoBeforeUpdate();
	void __fastcall DoReadyStateChange();
	HIDESBASE HRESULT __stdcall Invoke(int DispID, const GUID &IID, int LocaleID, System::Word Flags, void *Params, void * VarResult, void * ExcepInfo, void * ArgErr);
	HRESULT __stdcall OnChanged(int dispid);
	HRESULT __stdcall OnRequestEdit(int dispid);
	HRESULT __stdcall GetContainer(/* out */ _di_IOleContainer &container);
	HRESULT __stdcall GetMoniker(int dwAssign, int dwWhichMoniker, /* out */ _di_IMoniker &mk);
	HRESULT __stdcall OnShowWindow(System::LongBool fShow);
	HRESULT __stdcall RequestNewObjectLayout();
	HRESULT __stdcall SaveObject();
	HRESULT __stdcall ShowObject();
	
public:
	__fastcall virtual ~TCustomMSHTMLParser();
	void __fastcall LoadFromStream(System::Classes::TStream* S);
	virtual void __fastcall LoadFromFile(const System::UnicodeString FileName);
	void __fastcall SaveToStream(System::Classes::TStream* S);
	virtual void __fastcall SaveToFile(const System::UnicodeString FileName);
	__property Mshtml::_di_IHTMLDocument2 Document2 = {read=GetDocument2};
	__property Mshtml::_di_IHTMLDocument3 Document3 = {read=GetDocument3};
	__property System::Classes::TNotifyEvent AfterUpdate = {read=FAfterUpdate, write=FAfterUpdate};
	__property System::Classes::TNotifyEvent BeforeUpdate = {read=FBeforeUpdate, write=FBeforeUpdate};
	__property System::Classes::TNotifyEvent OnReadyStateChange = {read=FOnReadyStateChange, write=FOnReadyStateChange};
public:
	/* TComponent.Create */ inline __fastcall virtual TCustomMSHTMLParser(System::Classes::TComponent* AOwner) : System::Classes::TComponent(AOwner) { }
	
private:
	void *__IOleClientSite;	// IOleClientSite 
	void *__IPropertyNotifySink;	// IPropertyNotifySink 
	void *__IDispatch;	// IDispatch 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00000118-0000-0000-C000-000000000046}
	operator _di_IOleClientSite()
	{
		_di_IOleClientSite intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IOleClientSite*(void) { return (IOleClientSite*)&__IOleClientSite; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {9BFBBC02-EFF1-101A-84ED-00AA00341D07}
	operator _di_IPropertyNotifySink()
	{
		_di_IPropertyNotifySink intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IPropertyNotifySink*(void) { return (IPropertyNotifySink*)&__IPropertyNotifySink; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00020400-0000-0000-C000-000000000046}
	operator _di_IDispatch()
	{
		_di_IDispatch intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IDispatch*(void) { return (IDispatch*)&__IDispatch; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00000000-0000-0000-C000-000000000046}
	operator System::_di_IInterface()
	{
		System::_di_IInterface intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator System::IInterface*(void) { return (System::IInterface*)&__IOleClientSite; }
	#endif
	
};


class PASCALIMPLEMENTATION TMSHTMLParser : public TCustomMSHTMLParser
{
	typedef TCustomMSHTMLParser inherited;
	
__published:
	__property AfterUpdate;
	__property BeforeUpdate;
	__property OnReadyStateChange;
public:
	/* TCustomMSHTMLParser.Destroy */ inline __fastcall virtual ~TMSHTMLParser() { }
	
public:
	/* TComponent.Create */ inline __fastcall virtual TMSHTMLParser(System::Classes::TComponent* AOwner) : TCustomMSHTMLParser(AOwner) { }
	
};


class PASCALIMPLEMENTATION TSelectionServicesListenter : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
public:
	HRESULT __stdcall BeginSelectionUndo();
	HRESULT __stdcall EndSelectionUndo();
	HRESULT __stdcall GetTypeDetail(/* out */ System::WideString &pTypeDetail);
	HRESULT __stdcall OnChangeType(Winapi::Activex::TOleEnum eType, const Mshtml::_di_ISelectionServicesListener pIListener);
	HRESULT __stdcall OnSelectedElementExit(const Mshtml::_di_IMarkupPointer pIElementStart, const Mshtml::_di_IMarkupPointer pIElementEnd, const Mshtml::_di_IMarkupPointer pIElementContentStart, const Mshtml::_di_IMarkupPointer pIElementContentEnd);
public:
	/* TComponent.Create */ inline __fastcall virtual TSelectionServicesListenter(System::Classes::TComponent* AOwner) : System::Classes::TComponent(AOwner) { }
	/* TComponent.Destroy */ inline __fastcall virtual ~TSelectionServicesListenter() { }
	
private:
	void *__ISelectionServicesListener;	// Mshtml::ISelectionServicesListener 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3050F699-98B5-11CF-BB82-00AA00BDCE0B}
	operator Mshtml::_di_ISelectionServicesListener()
	{
		Mshtml::_di_ISelectionServicesListener intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Mshtml::ISelectionServicesListener*(void) { return (Mshtml::ISelectionServicesListener*)&__ISelectionServicesListener; }
	#endif
	
};


class PASCALIMPLEMENTATION TCustomWebBrowserChangeManager : public Webbrowserex::TCustomWebBrowserComponent
{
	typedef Webbrowserex::TCustomWebBrowserComponent inherited;
	
private:
	System::Classes::TNotifyEvent FOnNotify;
	Mshtml::_di_IHTMLChangeLog FChangeLog;
	bool FActive;
	void __fastcall SetActive(const bool Value);
	
protected:
	void __fastcall CreateChangeLog();
	void __fastcall ExecChange(bool Forward);
	virtual void __fastcall Loaded();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	HRESULT __stdcall Notify();
	
public:
	void __fastcall Redo();
	void __fastcall Undo();
	__property bool Active = {read=FActive, write=SetActive, nodefault};
	__property System::Classes::TNotifyEvent OnNotify = {read=FOnNotify, write=FOnNotify};
public:
	/* TComponent.Create */ inline __fastcall virtual TCustomWebBrowserChangeManager(System::Classes::TComponent* AOwner) : Webbrowserex::TCustomWebBrowserComponent(AOwner) { }
	/* TComponent.Destroy */ inline __fastcall virtual ~TCustomWebBrowserChangeManager() { }
	
private:
	void *__IHTMLChangeSink;	// Mshtml::IHTMLChangeSink 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3050F64A-98B5-11CF-BB82-00AA00BDCE0B}
	operator Mshtml::_di_IHTMLChangeSink()
	{
		Mshtml::_di_IHTMLChangeSink intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Mshtml::IHTMLChangeSink*(void) { return (Mshtml::IHTMLChangeSink*)&__IHTMLChangeSink; }
	#endif
	
};


class PASCALIMPLEMENTATION TWebBrowserChangeManager : public TCustomWebBrowserChangeManager
{
	typedef TCustomWebBrowserChangeManager inherited;
	
__published:
	__property Active;
	__property WebBrowser;
	__property OnNotify;
	__property OnBrowserChanged;
public:
	/* TComponent.Create */ inline __fastcall virtual TWebBrowserChangeManager(System::Classes::TComponent* AOwner) : TCustomWebBrowserChangeManager(AOwner) { }
	/* TComponent.Destroy */ inline __fastcall virtual ~TWebBrowserChangeManager() { }
	
};


enum DECLSPEC_DENUM TTableDragKind : unsigned char { tdkNone, tdkRow, tdkColumn, tdkRowSelect, tdkColSelect };

typedef void __fastcall (__closure *TTableDesignerNotifyEvent)(TCustomHTMLTableDesigner* Sender);

class PASCALIMPLEMENTATION TCustomHTMLTableDesigner : public TCustomHTMLEditDesigner
{
	typedef TCustomHTMLEditDesigner inherited;
	
private:
	Mshtml::_di_IHTMLTableCell FDragCell;
	Mshtml::_di_IHTMLTable FDragTable;
	Mshtml::_di_IHTMLTableRow2 FDragRow2;
	Mshtml::_di_IHTMLElement FDragCol;
	bool FDraggingRow;
	System::Types::TPoint FOffsetPos;
	bool FOverridingCursor;
	TTableDesignerNotifyEvent FOnChange;
	System::UnicodeString FColumnResizeColor;
	System::UnicodeString FRowResizeColor;
	void __fastcall SetColumnHeight(const int AWidth);
	void __fastcall SetColumnWidth(const int AWidth);
	bool __fastcall CanDesignElement(Mshtml::_di_IHTMLElement AElement);
	
protected:
	void __fastcall Clear();
	HRESULT __fastcall DoMouseDown(Mshtml::_di_IHTMLEventObj EventObj);
	HRESULT __fastcall DoMouseMove(Mshtml::_di_IHTMLEventObj EventObj);
	void __fastcall SetColumnHighlight(const System::UnicodeString Color);
	void __fastcall SetRowHighlight(const System::UnicodeString Color);
	TTableDragKind __fastcall OnTable(Mshtml::_di_IHTMLTable ADragTable, const int X, const int Y, Mshtml::_di_IHTMLTableRow2 &ARow);
	TTableDragKind __fastcall OnCell(Mshtml::_di_IHTMLTableCell ADragCell, const int X, const int Y, Mshtml::_di_IHTMLTableRow2 &ATableRow2);
	HIDESBASE HRESULT __stdcall PreHandleEvent(int inEvtDispId, const Mshtml::_di_IHTMLEventObj pIEventObj);
	HRESULT __stdcall BeginSelectionUndo();
	HRESULT __stdcall EndSelectionUndo();
	HRESULT __stdcall GetTypeDetail(/* out */ System::WideString &pTypeDetail);
	HRESULT __stdcall OnChangeType(Winapi::Activex::TOleEnum eType, const Mshtml::_di_ISelectionServicesListener pIListener);
	HRESULT __stdcall OnSelectedElementExit(const Mshtml::_di_IMarkupPointer pIElementStart, const Mshtml::_di_IMarkupPointer pIElementEnd, const Mshtml::_di_IMarkupPointer pIElementContentStart, const Mshtml::_di_IMarkupPointer pIElementContentEnd);
	
public:
	__fastcall virtual TCustomHTMLTableDesigner(System::Classes::TComponent* AOwner);
	__property System::UnicodeString ColumnResizeColor = {read=FColumnResizeColor, write=FColumnResizeColor};
	__property System::UnicodeString RowResizeColor = {read=FRowResizeColor, write=FRowResizeColor};
	__property TTableDesignerNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
public:
	/* TCustomHTMLEditDesigner.Destroy */ inline __fastcall virtual ~TCustomHTMLTableDesigner() { }
	
private:
	void *__ISelectionServicesListener;	// Mshtml::ISelectionServicesListener 
	void *__IHTMLEditDesigner;	// Mshtml::IHTMLEditDesigner 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3050F699-98B5-11CF-BB82-00AA00BDCE0B}
	operator Mshtml::_di_ISelectionServicesListener()
	{
		Mshtml::_di_ISelectionServicesListener intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Mshtml::ISelectionServicesListener*(void) { return (Mshtml::ISelectionServicesListener*)&__ISelectionServicesListener; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3050F662-98B5-11CF-BB82-00AA00BDCE0B}
	operator Mshtml::_di_IHTMLEditDesigner()
	{
		Mshtml::_di_IHTMLEditDesigner intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Mshtml::IHTMLEditDesigner*(void) { return (Mshtml::IHTMLEditDesigner*)&__IHTMLEditDesigner; }
	#endif
	
};


class PASCALIMPLEMENTATION THTMLTableDesigner : public TCustomHTMLTableDesigner
{
	typedef TCustomHTMLTableDesigner inherited;
	
__published:
	__property Active;
	__property ColumnResizeColor = {default=0};
	__property RowResizeColor = {default=0};
	__property WebBrowser;
	__property OnBrowserChanged;
public:
	/* TCustomHTMLTableDesigner.Create */ inline __fastcall virtual THTMLTableDesigner(System::Classes::TComponent* AOwner) : TCustomHTMLTableDesigner(AOwner) { }
	
public:
	/* TCustomHTMLEditDesigner.Destroy */ inline __fastcall virtual ~THTMLTableDesigner() { }
	
};


typedef void __fastcall (__closure *THTMLDragDropEffectEvent)(System::TObject* Sender, Mshtml::_di_IHTMLEventObj EventObj, int &dwEffect);

typedef void __fastcall (__closure *THTMLDragDropEvent)(System::TObject* Sender, Mshtml::_di_IHTMLEventObj EventObj);

typedef void __fastcall (__closure *THTMLDragDropSetCursorEvent)(System::TObject* Sender, bool &CursorSet);

class PASCALIMPLEMENTATION TCustomHTMLDragDropDesigner : public TCustomHTMLEditDesigner
{
	typedef TCustomHTMLEditDesigner inherited;
	
private:
	bool FDragOver;
	bool FDragEnter;
	bool FOverridingCursor;
	THTMLDragDropEffectEvent FOnDragEnter;
	THTMLDragDropEvent FOnDragLeave;
	THTMLDragDropEffectEvent FOnDragOver;
	THTMLDragDropEffectEvent FOnDragDrop;
	THTMLDragDropSetCursorEvent FOnSetDragCursor;
	void __fastcall DoDragDrop(Mshtml::_di_IHTMLEventObj EventObj);
	void __fastcall DoDragLeave(Mshtml::_di_IHTMLEventObj EventObj);
	void __fastcall DoDragOver(Mshtml::_di_IHTMLEventObj EventObj);
	void __fastcall DoDragEnter(Mshtml::_di_IHTMLEventObj EventObj);
	void __fastcall RestoreCursor();
	void __fastcall DoSetCursor();
	
protected:
	void __fastcall Clear();
	HRESULT __fastcall DoCancel(Mshtml::_di_IHTMLEventObj EventObj);
	HRESULT __fastcall DoMouseDown(Mshtml::_di_IHTMLEventObj EventObj);
	HRESULT __fastcall DoMouseMove(Mshtml::_di_IHTMLEventObj EventObj);
	HRESULT __fastcall DoMouseUp(Mshtml::_di_IHTMLEventObj EventObj);
	HRESULT __fastcall DoMouseOut(Mshtml::_di_IHTMLEventObj EventObj);
	HIDESBASE HRESULT __stdcall PreHandleEvent(int inEvtDispId, const Mshtml::_di_IHTMLEventObj pIEventObj);
	
public:
	__fastcall virtual TCustomHTMLDragDropDesigner(System::Classes::TComponent* AOwner);
	__property THTMLDragDropEffectEvent OnDragEnter = {read=FOnDragEnter, write=FOnDragEnter};
	__property THTMLDragDropEvent OnDragLeave = {read=FOnDragLeave, write=FOnDragLeave};
	__property THTMLDragDropEffectEvent OnDragOver = {read=FOnDragOver, write=FOnDragOver};
	__property THTMLDragDropEffectEvent OnDragDrop = {read=FOnDragDrop, write=FOnDragDrop};
	__property THTMLDragDropSetCursorEvent OnSetDragCursor = {read=FOnSetDragCursor, write=FOnSetDragCursor};
public:
	/* TCustomHTMLEditDesigner.Destroy */ inline __fastcall virtual ~TCustomHTMLDragDropDesigner() { }
	
private:
	void *__IHTMLEditDesigner;	// Mshtml::IHTMLEditDesigner 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3050F662-98B5-11CF-BB82-00AA00BDCE0B}
	operator Mshtml::_di_IHTMLEditDesigner()
	{
		Mshtml::_di_IHTMLEditDesigner intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Mshtml::IHTMLEditDesigner*(void) { return (Mshtml::IHTMLEditDesigner*)&__IHTMLEditDesigner; }
	#endif
	
};


class PASCALIMPLEMENTATION THTMLDragDropDesigner : public TCustomHTMLDragDropDesigner
{
	typedef TCustomHTMLDragDropDesigner inherited;
	
__published:
	__property Active;
	__property WebBrowser;
	__property OnBrowserChanged;
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
public:
	/* TCustomHTMLDragDropDesigner.Create */ inline __fastcall virtual THTMLDragDropDesigner(System::Classes::TComponent* AOwner) : TCustomHTMLDragDropDesigner(AOwner) { }
	
public:
	/* TCustomHTMLEditDesigner.Destroy */ inline __fastcall virtual ~THTMLDragDropDesigner() { }
	
};


typedef void __fastcall (__closure *THTMLRegionDesignerClickRegionEvent)(System::TObject* Sender, Mshtml::_di_IHTMLEventObj EventObj, int Region);

typedef void __fastcall (__closure *THTMLRegionDesignerClickEvent)(System::TObject* Sender, Mshtml::_di_IHTMLEventObj EventObj, /* out */ bool &AHandled);

typedef void __fastcall (__closure *THTMLRegionDesignerCanClickRegionEvent)(System::TObject* Sender, Mshtml::_di_IHTMLEventObj EventObj, int Region, /* out */ bool &CanClick);

class PASCALIMPLEMENTATION TCustomHTMLRegionDesigner : public TCustomHTMLEditDesigner
{
	typedef TCustomHTMLEditDesigner inherited;
	
private:
	bool FOverridingCursor;
	THTMLRegionDesignerClickRegionEvent FOnClickRegion;
	THTMLRegionDesignerClickEvent FOnClickNonEditable;
	THTMLRegionDesignerCanClickRegionEvent FOnCanClickRegion;
	bool FMouseDownCancelled;
	bool __fastcall InClickableRegion(Mshtml::_di_IHTMLEventObj EventObj)/* overload */;
	bool __fastcall InClickableRegion(Mshtml::_di_IHTMLEventObj EventObj, /* out */ int &Region)/* overload */;
	bool __fastcall InNonEditableRegion(Mshtml::_di_IHTMLEventObj EventObj);
	__classmethod int __fastcall RegionIndexOfElement(Mshtml::_di_IHTMLElement HTMLElement);
	HRESULT __fastcall DoMouseDown(Mshtml::_di_IHTMLEventObj EventObj);
	HRESULT __fastcall DoPostEditEventMouseDown(Mshtml::_di_IHTMLEventObj EventObj);
	HRESULT __fastcall DoMouseUp(Mshtml::_di_IHTMLEventObj EventObj);
	HRESULT __fastcall DoKeyUp(Mshtml::_di_IHTMLEventObj EventObj);
	HRESULT __fastcall DoKeyPress(Mshtml::_di_IHTMLEventObj EventObj);
	HRESULT __fastcall DoKeyDown(Mshtml::_di_IHTMLEventObj EventObj);
	bool __fastcall CanEnterText(Mshtml::_di_IHTMLEventObj AEventObj);
	HRESULT __fastcall DoBeforeDeactivate(Mshtml::_di_IHTMLEventObj EventObj);
	HRESULT __fastcall DoMouseMove(Mshtml::_di_IHTMLEventObj EventObj);
	HIDESBASE HRESULT __stdcall PostEditorEventNotify(int inEvtDispId, const Mshtml::_di_IHTMLEventObj pIEventObj);
	HIDESBASE HRESULT __stdcall PostHandleEvent(int inEvtDispId, const Mshtml::_di_IHTMLEventObj pIEventObj);
	HIDESBASE HRESULT __stdcall PreHandleEvent(int inEvtDispId, const Mshtml::_di_IHTMLEventObj pIEventObj);
	HIDESBASE HRESULT __stdcall TranslateAccelerator(int inEvtDispId, const Mshtml::_di_IHTMLEventObj pIEventObj);
	void __fastcall SetClickableRegionCursor(Mshtml::_di_IHTMLEventObj EventObj);
	void __fastcall SetNonEditableRegionCursor(Mshtml::_di_IHTMLEventObj EventObj);
	bool __fastcall OverSelectableControlInRegion(Mshtml::_di_IHTMLEventObj EventObj, /* out */ Mshtml::_di_IHTMLElement &AControlElement)/* overload */;
	bool __fastcall OverSelectableControlInRegion(Mshtml::_di_IHTMLEventObj EventObj)/* overload */;
	void __fastcall SetOverSelectableControlInRegionCursor(Mshtml::_di_IHTMLEventObj EventObj);
	void __fastcall SelectControlInRegion(Mshtml::_di_IHTMLElement AHTMLElement);
	void __fastcall SetFocusControlInRegion(Mshtml::_di_IHTMLElement AHTMLElement);
	bool __fastcall CanSelectTextInSrcElement(Mshtml::_di_IHTMLEventObj EventObj);
	void __fastcall RestoreCursor();
	void __fastcall CalcClientRect(System::Types::TRect &Rect);
	bool __fastcall OverClient(Mshtml::_di_IHTMLEventObj EventObj);
	
public:
	__fastcall virtual TCustomHTMLRegionDesigner(System::Classes::TComponent* AOwner);
	__classmethod int __fastcall RegionIndexOfElementOrParent(Mshtml::_di_IHTMLElement HTMLElement, /* out */ Mshtml::_di_IHTMLElement &RegionElement);
	__property THTMLRegionDesignerClickRegionEvent OnClickRegion = {read=FOnClickRegion, write=FOnClickRegion};
	__property THTMLRegionDesignerClickEvent OnClickNonEditable = {read=FOnClickNonEditable, write=FOnClickNonEditable};
	__property THTMLRegionDesignerCanClickRegionEvent OnCanClickRegion = {read=FOnCanClickRegion, write=FOnCanClickRegion};
public:
	/* TCustomHTMLEditDesigner.Destroy */ inline __fastcall virtual ~TCustomHTMLRegionDesigner() { }
	
private:
	void *__IHTMLEditDesigner;	// Mshtml::IHTMLEditDesigner 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3050F662-98B5-11CF-BB82-00AA00BDCE0B}
	operator Mshtml::_di_IHTMLEditDesigner()
	{
		Mshtml::_di_IHTMLEditDesigner intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Mshtml::IHTMLEditDesigner*(void) { return (Mshtml::IHTMLEditDesigner*)&__IHTMLEditDesigner; }
	#endif
	
};


class PASCALIMPLEMENTATION THTMLRegionDesigner : public TCustomHTMLRegionDesigner
{
	typedef TCustomHTMLRegionDesigner inherited;
	
__published:
	__property Active;
	__property WebBrowser;
	__property OnBrowserChanged;
	__property OnClickRegion;
public:
	/* TCustomHTMLRegionDesigner.Create */ inline __fastcall virtual THTMLRegionDesigner(System::Classes::TComponent* AOwner) : TCustomHTMLRegionDesigner(AOwner) { }
	
public:
	/* TCustomHTMLEditDesigner.Destroy */ inline __fastcall virtual ~THTMLRegionDesigner() { }
	
};


enum DECLSPEC_DENUM TDefaultPositioning : unsigned char { dpGrid, dpFlow };

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE void __fastcall SetDefaultPositioning(TDefaultPositioning ADefaultPositioning);
extern DELPHI_PACKAGE bool __fastcall IsGridPositioning(const System::OleVariant &MSPositioning);
extern DELPHI_PACKAGE bool __fastcall IsFlowPositioning(const System::OleVariant &MSPositioning);
extern DELPHI_PACKAGE System::Types::TPoint __fastcall CalcElementXY(Mshtml::_di_IHTMLElement E);
extern DELPHI_PACKAGE int __fastcall GetPixelHeightPropertyValue(Mshtml::_di_IHTMLElement HTMLElement);
extern DELPHI_PACKAGE int __fastcall GetPixelWidthPropertyValue(Mshtml::_di_IHTMLElement HTMLElement);
extern DELPHI_PACKAGE bool __fastcall SameDocument(Mshtml::_di_IHTMLDocument ADocument1, Mshtml::_di_IHTMLDocument ADocument2);
extern DELPHI_PACKAGE void __fastcall RestoreBrowserCursor(Webbrowserex::TWebBrowserEx* WebBrowser);
}	/* namespace Wbcomp */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WBCOMP)
using namespace Wbcomp;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WbcompHPP
