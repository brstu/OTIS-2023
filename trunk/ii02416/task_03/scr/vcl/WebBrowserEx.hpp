// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'WebBrowserEx.pas' rev: 35.00 (Windows)

#ifndef WebbrowserexHPP
#define WebbrowserexHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
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
#include <Mshtmdid.hpp>
#include <Winapi.UrlMon.hpp>

//-- user supplied -----------------------------------------------------------

namespace Webbrowserex
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TCustomWebBrowserComponent;
class DELPHICLASS TWebBrowserServiceProvider;
class DELPHICLASS TEventDispatchEx;
class DELPHICLASS THTMLElementEventDispatch;
class DELPHICLASS TWebBrowserEventDispatch;
class DELPHICLASS TDocEventDispatch;
class DELPHICLASS TIFrameDocEventDispatch;
class DELPHICLASS TWndEventDispatch;
class DELPHICLASS TWebBrowserEvents2Dispatch;
class DELPHICLASS TWebBrowserEx;
class DELPHICLASS TCustomWebBrowserCommandUpdater;
class DELPHICLASS TWebBrowserCommandUpdater;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TControlBorder : unsigned char { cb3D, cbNone };

class PASCALIMPLEMENTATION TCustomWebBrowserComponent : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	TWebBrowserEx* FWebBrowser;
	System::Classes::TNotifyEvent FOnBrowserChanged;
	
protected:
	void __fastcall CheckWebBrowserAssigned();
	void __fastcall CheckDocumentAssigned();
	virtual void __fastcall SetWebBrowser(TWebBrowserEx* const Value);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	
public:
	__property TWebBrowserEx* WebBrowser = {read=FWebBrowser, write=SetWebBrowser};
	__property System::Classes::TNotifyEvent OnBrowserChanged = {read=FOnBrowserChanged, write=FOnBrowserChanged};
public:
	/* TComponent.Create */ inline __fastcall virtual TCustomWebBrowserComponent(System::Classes::TComponent* AOwner) : System::Classes::TComponent(AOwner) { }
	/* TComponent.Destroy */ inline __fastcall virtual ~TCustomWebBrowserComponent() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserServiceProvider : public TCustomWebBrowserComponent
{
	typedef TCustomWebBrowserComponent inherited;
	
protected:
	GUID FServiceGUID;
	virtual void __fastcall SetWebBrowser(TWebBrowserEx* const Value);
	
public:
	__fastcall virtual TWebBrowserServiceProvider(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TWebBrowserServiceProvider();
	__property GUID ServiceGUID = {read=FServiceGUID, write=FServiceGUID};
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TEventDispatchEx : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	bool FActive;
	int FConnection;
	int FInternalCount;
	void __fastcall SetActive(const bool Value);
	
protected:
	GUID FIID;
	virtual System::_di_IInterface __fastcall GetEventInterface() = 0 ;
	int __stdcall _AddRef();
	int __stdcall _Release();
	virtual HRESULT __stdcall QueryInterface(const GUID &IID, /* out */ void *Obj);
	HRESULT __stdcall GetIDsOfNames(const GUID &IID, void * Names, int NameCount, int LocaleID, void * DispIDs);
	HRESULT __stdcall GetTypeInfo(int Index, int LocaleID, /* out */ void *TypeInfo);
	HRESULT __stdcall GetTypeInfoCount(/* out */ int &Count);
	HRESULT __stdcall Invoke(int DispID, const GUID &IID, int LocaleID, System::Word Flags, void *Params, void * VarResult, void * ExcepInfo, void * ArgErr);
	virtual HRESULT __fastcall DoInvoke(int DispID, const GUID &IID, int LocaleID, System::Word Flags, tagDISPPARAMS &dps, Winapi::Activex::PDispIDList pDispIds, void * VarResult, void * ExcepInfo, void * ArgErr);
	
public:
	__fastcall virtual ~TEventDispatchEx();
	__property bool Active = {read=FActive, write=SetActive, nodefault};
	__property GUID IID = {read=FIID};
public:
	/* TObject.Create */ inline __fastcall TEventDispatchEx() : System::TObject() { }
	
private:
	void *__IDispatch;	// IDispatch 
	
public:
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
	operator System::IInterface*(void) { return (System::IInterface*)&__IDispatch; }
	#endif
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION THTMLElementEventDispatch : public TEventDispatchEx
{
	typedef TEventDispatchEx inherited;
	
private:
	Mshtml::_di_IHTMLElement FHTMLElement;
	
protected:
	virtual System::_di_IInterface __fastcall GetEventInterface();
	virtual HRESULT __fastcall DoInvoke(int DispID, const GUID &IID, int LocaleID, System::Word Flags, tagDISPPARAMS &dps, Winapi::Activex::PDispIDList pDispIds, void * VarResult, void * ExcepInfo, void * ArgErr);
	virtual HRESULT __stdcall QueryInterface(const GUID &IID, /* out */ void *Obj);
	
public:
	virtual void __fastcall AfterConstruction();
	__property Mshtml::_di_IHTMLElement HTMLElement = {read=FHTMLElement, write=FHTMLElement};
public:
	/* TEventDispatchEx.Destroy */ inline __fastcall virtual ~THTMLElementEventDispatch() { }
	
public:
	/* TObject.Create */ inline __fastcall THTMLElementEventDispatch() : TEventDispatchEx() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TWebBrowserEventDispatch : public TEventDispatchEx
{
	typedef TEventDispatchEx inherited;
	
protected:
	TWebBrowserEx* FWebBrowser;
	
public:
	__property TWebBrowserEx* WebBrowser = {read=FWebBrowser};
public:
	/* TEventDispatchEx.Destroy */ inline __fastcall virtual ~TWebBrowserEventDispatch() { }
	
public:
	/* TObject.Create */ inline __fastcall TWebBrowserEventDispatch() : TEventDispatchEx() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TDocEventDispatch : public TWebBrowserEventDispatch
{
	typedef TWebBrowserEventDispatch inherited;
	
protected:
	virtual System::_di_IInterface __fastcall GetEventInterface();
	virtual HRESULT __fastcall DoInvoke(int DispID, const GUID &IID, int LocaleID, System::Word Flags, tagDISPPARAMS &dps, Winapi::Activex::PDispIDList pDispIds, void * VarResult, void * ExcepInfo, void * ArgErr);
	
public:
	virtual void __fastcall AfterConstruction();
public:
	/* TEventDispatchEx.Destroy */ inline __fastcall virtual ~TDocEventDispatch() { }
	
public:
	/* TObject.Create */ inline __fastcall TDocEventDispatch() : TWebBrowserEventDispatch() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TIFrameDocEventDispatch : public TDocEventDispatch
{
	typedef TDocEventDispatch inherited;
	
private:
	Mshtml::_di_IHTMLDocument2 FDocument;
	
protected:
	virtual System::_di_IInterface __fastcall GetEventInterface();
	virtual HRESULT __fastcall DoInvoke(int DispID, const GUID &IID, int LocaleID, System::Word Flags, tagDISPPARAMS &dps, Winapi::Activex::PDispIDList pDispIds, void * VarResult, void * ExcepInfo, void * ArgErr);
	
public:
	__property Mshtml::_di_IHTMLDocument2 Document = {read=FDocument, write=FDocument};
public:
	/* TEventDispatchEx.Destroy */ inline __fastcall virtual ~TIFrameDocEventDispatch() { }
	
public:
	/* TObject.Create */ inline __fastcall TIFrameDocEventDispatch() : TDocEventDispatch() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TWndEventDispatch : public TWebBrowserEventDispatch
{
	typedef TWebBrowserEventDispatch inherited;
	
protected:
	virtual System::_di_IInterface __fastcall GetEventInterface();
	Mshtml::_di_IHTMLWindow2 __fastcall GetHTMLWindow2();
	virtual HRESULT __fastcall DoInvoke(int DispID, const GUID &IID, int LocaleID, System::Word Flags, tagDISPPARAMS &dps, Winapi::Activex::PDispIDList pDispIds, void * VarResult, void * ExcepInfo, void * ArgErr);
	
public:
	virtual void __fastcall AfterConstruction();
	__property Mshtml::_di_IHTMLWindow2 HTMLWindow2 = {read=GetHTMLWindow2};
public:
	/* TEventDispatchEx.Destroy */ inline __fastcall virtual ~TWndEventDispatch() { }
	
public:
	/* TObject.Create */ inline __fastcall TWndEventDispatch() : TWebBrowserEventDispatch() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TWebBrowserEvents2Dispatch : public TWebBrowserEventDispatch
{
	typedef TWebBrowserEventDispatch inherited;
	
protected:
	virtual System::_di_IInterface __fastcall GetEventInterface();
	virtual void __fastcall DoStatusTextChange(const System::WideString Text);
	virtual void __fastcall DoProgressChange(int Progress, int ProgressMax);
	virtual void __fastcall DoCommandStateChange(Winapi::Activex::TOleEnum Command, System::WordBool Enable);
	virtual void __fastcall DoDownloadBegin();
	virtual void __fastcall DoDownloadComplete();
	virtual void __fastcall DoTitleChange(const System::WideString Text);
	virtual void __fastcall DoPropertyChange(const System::WideString szProperty);
	virtual void __fastcall DoBeforeNavigate2(const _di_IDispatch pDisp, System::OleVariant &URL, System::OleVariant &Flags, System::OleVariant &TargetFrameName, System::OleVariant &PostData, System::OleVariant &Headers, System::WordBool &Cancel);
	virtual void __fastcall DoNewWindow2(_di_IDispatch &ppDisp, System::WordBool &Cancel);
	virtual void __fastcall DoNavigateComplete2(const _di_IDispatch pDisp, System::OleVariant &URL);
	virtual void __fastcall DoDocumentComplete(const _di_IDispatch pDisp, System::OleVariant &URL);
	virtual void __fastcall DoOnQuit();
	virtual void __fastcall DoOnVisible(System::WordBool Visible);
	virtual void __fastcall DoOnToolBar(System::WordBool ToolBar);
	virtual void __fastcall DoOnMenuBar(System::WordBool MenuBar);
	virtual void __fastcall DoOnStatusBar(System::WordBool StatusBar);
	virtual void __fastcall DoOnFullScreen(System::WordBool FullScreen);
	virtual void __fastcall DoOnTheaterMode(System::WordBool TheaterMode);
	virtual void __fastcall DoWindowSetResizable(System::WordBool Resizable);
	virtual void __fastcall DoWindowSetLeft(int Left);
	virtual void __fastcall DoWindowSetTop(int Top);
	virtual void __fastcall DoWindowSetWidth(int Width);
	virtual void __fastcall DoWindowSetHeight(int Height);
	virtual void __fastcall DoWindowClosing(System::WordBool IsChildWindow, System::WordBool &Cancel);
	virtual void __fastcall DoClientToHostWindow(int &CX, int &CY);
	virtual void __fastcall DoSetSecureLockIcon(int SecureLockIcon);
	virtual void __fastcall DoFileDownload(System::WordBool &Cancel);
	virtual void __fastcall DoNavigateError(const _di_IDispatch pDisp, System::OleVariant &URL, System::OleVariant &Frame, System::OleVariant &StatusCode, System::WordBool &Cancel);
	virtual void __fastcall DoPrintTemplateInstantiation(const _di_IDispatch pDisp);
	virtual void __fastcall DoPrintTemplateTeardown(const _di_IDispatch pDisp);
	virtual void __fastcall DoUpdatePageStatus(const _di_IDispatch pDisp, System::OleVariant &nPage, System::OleVariant &fDone);
	virtual void __fastcall DoPrivacyImpactedStateChange(System::WordBool bImpacted);
	virtual HRESULT __fastcall DoInvoke(int DispID, const GUID &IID, int LocaleID, System::Word Flags, tagDISPPARAMS &dps, Winapi::Activex::PDispIDList pDispIds, void * VarResult, void * ExcepInfo, void * ArgErr);
	
public:
	virtual void __fastcall AfterConstruction();
public:
	/* TEventDispatchEx.Destroy */ inline __fastcall virtual ~TWebBrowserEvents2Dispatch() { }
	
public:
	/* TObject.Create */ inline __fastcall TWebBrowserEvents2Dispatch() : TWebBrowserEventDispatch() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TCurrentElementType : unsigned char { cetUndefined, cetNone, cetAtCursor, cetTextRange, cetControlRange };

enum DECLSPEC_DENUM TElementEditableFlag : unsigned char { efInnerOrOuterRequired, efInnerRequired, efOuterRequired, efSelectableControlRequired };

typedef System::Set<TElementEditableFlag, TElementEditableFlag::efInnerOrOuterRequired, TElementEditableFlag::efSelectableControlRequired> TElementEditableFlags;

enum DECLSPEC_DENUM TCommandState : unsigned char { csSupported, csEnabled, csChecked };

typedef System::Set<TCommandState, TCommandState::csSupported, TCommandState::csChecked> TCommandStates;

typedef System::DynamicArray<_tagOLECMD> TCommandStateArray;

typedef void __fastcall (__closure *TWebBrowserEvent)(TWebBrowserEx* Sender, Mshtml::_di_IHTMLEventObj Event);

typedef System::WordBool __fastcall (__closure *TWebBrowserEventWordBool)(TWebBrowserEx* Sender, Mshtml::_di_IHTMLEventObj Event);

typedef void __fastcall (__closure *TWebBrowserNotifyEvent)(TWebBrowserEx* Sender);

typedef void __fastcall (__closure *TWndActivateEvent)(Shdocvw::TWebBrowser* Sender, bool Activate, HRESULT &hr);

typedef void __fastcall (__closure *TGetExternalDispatchEvent)(System::TObject* Sender, /* out */ _di_IDispatch &ExternalDisp);

typedef void __fastcall (__closure *TStatusTextChangeEvent)(System::TObject* Sender, const System::UnicodeString Text);

typedef System::WordBool __fastcall (__closure *TControlSelectEvent)(Shdocvw::TWebBrowser* Sender, const Mshtml::_di_IHTMLEventObj EventObj);

typedef System::WordBool __fastcall (__closure *TControlMoveEvent)(Shdocvw::TWebBrowser* Sender, const Mshtml::_di_IHTMLEventObj EventObj, int DispID);

typedef System::WordBool __fastcall (__closure *TControlResizeEvent)(Shdocvw::TWebBrowser* Sender, const Mshtml::_di_IHTMLEventObj EventObj, int DispID);

typedef void __fastcall (__closure *TResolveRelativePathEvent)(Shdocvw::TWebBrowser* Sender, System::UnicodeString &Path);

typedef void __fastcall (__closure *TGetDropTargetEvent)(System::TObject* Sender, const _di_IDropTarget pDropTarget, /* out */ _di_IDropTarget &ppDropTarget);

typedef void __fastcall (__closure *TShowContextMenuEvent)(System::TObject* Sender, unsigned dwID, Mshtml::PtagPOINT ppt, const System::_di_IInterface pcmdtReserved, const _di_IDispatch pdispReserved, HRESULT &Result);

typedef void __fastcall (__closure *TInitMenuPopupEvent)(System::TObject* Sender, HMENU Menu, short Pos, bool SystemMenu);

typedef void __fastcall (__closure *TWindowClosingEvent)(System::TObject* Sender, bool IsChildWindow, System::WordBool &Cancel);

typedef void __fastcall (__closure *TGetSelectionObjectEvent)(System::TObject* Sender, Mshtml::_di_IHTMLSelectionObject &ppSelectionObject);

typedef void __fastcall (__closure *TGetActiveDocumentEvent)(System::TObject* Sender, Mshtml::_di_IHTMLDocument &ppDocumentObject);

typedef HRESULT __fastcall (__closure *TGetHostInfoEvent)(System::TObject* Sender, Idoc::_DOCHOSTUIINFO &pInfo);

typedef HRESULT __fastcall (__closure *TGetAmbientControlEvent)(System::TObject* Sender, int &Flags);

typedef void __fastcall (__closure *TPreProcessMessageEvent)(System::TObject* Sender, tagMSG &Msg, /* out */ bool &Handled);

typedef void __fastcall (__closure *TInterceptMouseMessageEvent)(System::TObject* Sender, Winapi::Messages::TMessage &Message, /* out */ bool &Handled);

typedef void __fastcall (__closure *TGetElementOfViewLinkDocumentEvent)(System::TObject* Sender, Mshtml::_di_IHTMLDocument ADocument, /* out */ Mshtml::_di_IHTMLElement &AElement);

typedef void __fastcall (__closure *TGetIsEditableElementEvent)(System::TObject* Sender, Mshtml::_di_IHTMLElement AElement, TElementEditableFlags AFlags, /* out */ bool &AIsEditable);

typedef void __fastcall (__closure *TGetIsContentPageEvent)(System::TObject* Sender, /* out */ bool &AIsContentPage);

typedef void __fastcall (__closure *TGetViewLinkDocumentsEvent)(System::TObject* Sender, Winapi::Activex::TOleEnum CmdId, System::Classes::_di_IInterfaceList &pDocuments);

class PASCALIMPLEMENTATION TWebBrowserEx : public Shdocvw::TWebBrowser
{
	typedef Shdocvw::TWebBrowser inherited;
	
private:
	TWebBrowserNotifyEvent FBeforeLoadFromStream;
	TWebBrowserNotifyEvent FBeforeDestroy;
	System::WordBool FUserMode;
	System::UnicodeString FURL;
	TControlBorder FControlBorder;
	bool FShowScrollBar;
	bool FFlatScrollBar;
	Mshtml::_di_IHTMLSelectionObject FHTMLSelectionObject;
	bool FHasFocus;
	TDocEventDispatch* FDocEventDispatch;
	TWndEventDispatch* FWndEventDispatch;
	TWebBrowserEvents2Dispatch* FWebBrowserEvents2Dispatch;
	Mshtml::_di_IHTMLChangeLog FChangeLog;
	System::_di_IInterface FDocEventDispatchCounter;
	System::_di_IInterface FWndEventDispatchCounter;
	System::_di_IInterface FWebBrowserEvents2DispatchCounter;
	Vcl::Controls::TMouseMoveEvent FOnMouseOut;
	Vcl::Controls::TMouseMoveEvent FOnMouseOver;
	System::Classes::TNotifyEvent FAfterUpdate;
	System::Classes::TNotifyEvent FBeforeUpdate;
	System::Classes::TNotifyEvent FOnError;
	System::Classes::TNotifyEvent FOnSelectStart;
	System::Classes::TNotifyEvent FOnRowExit;
	System::Classes::TNotifyEvent FOnRowEnter;
	System::Classes::TNotifyEvent FOnErrorUpdate;
	System::Classes::TNotifyEvent FOnLoad;
	System::Classes::TNotifyEvent FOnHelp;
	System::Classes::TNotifyEvent FOnUnLoad;
	System::Classes::TNotifyEvent FOnFocus;
	System::Classes::TNotifyEvent FOnBlur;
	System::Classes::TNotifyEvent FOnScroll;
	System::Classes::TNotifyEvent FOnWndResize;
	System::Classes::TNotifyEvent FBeforeUnload;
	TWndActivateEvent FOnDocWndActivate;
	TWndActivateEvent FOnFrameWndActivate;
	System::Contnrs::TComponentList* FServiceProviders;
	TCustomWebBrowserCommandUpdater* FCommandUpdater;
	System::Classes::TNotifyEvent FOnReadyStateChange;
	TGetExternalDispatchEvent FOnGetExternalDispatch;
	TStatusTextChangeEvent FOnStatusTextChange;
	TWebBrowserEvent FOnSelectionChange;
	System::Classes::TNotifyEvent FOnUpdateCommands;
	System::Classes::TNotifyEvent FOnCancelMode;
	TGetDropTargetEvent FOnGetDropTarget;
	TWindowClosingEvent FOnWindowClosing;
	Mshtml::_di_IDisplayServices FDisplayServices;
	Mshtml::_di_IHTMLCaret FCaret;
	Mshtml::_di_IMarkupServices2 FMarkupServices;
	Mshtml::_di_ISelectionServices FPrimarySelectionServices;
	void *FDefInetExplorerServerProc;
	void *FDefShellObjViewProc;
	NativeUInt FShellDocObjViewHandle;
	NativeUInt FInetExplorerServerHandle;
	void *FShellDocObjInstance;
	void *FInetExplorerServerInstance;
	bool FUseDivBlock;
	bool FUseTheme;
	bool FHooksSet;
	bool FAutoComplete;
	TControlSelectEvent FOnControlSelect;
	TResolveRelativePathEvent FOnResolveRelativePath;
	TShowContextMenuEvent FOnShowContextMenu;
	TInitMenuPopupEvent FOnInitMenuPopup;
	System::Classes::TNotifyEvent FOnOpenNewWindow;
	TWebBrowserNotifyEvent FOnReloadDocument;
	TControlMoveEvent FOnControlMove;
	TControlResizeEvent FOnControlResize;
	System::UnicodeString FBaseURL;
	System::Classes::TNotifyEvent FOnChange;
	TGetSelectionObjectEvent FOnGetSelectionObject;
	TGetActiveDocumentEvent FOnGetActiveDocument;
	TGetViewLinkDocumentsEvent FOnGetViewLinkDocuments;
	TGetElementOfViewLinkDocumentEvent FOnGetElementOfViewLinkDocument;
	TGetIsEditableElementEvent FOnGetIsEditableElement;
	TGetIsContentPageEvent FOnGetIsContentPage;
	TWebBrowserEventWordBool FOnBeforeEditFocus;
	TGetHostInfoEvent FOnGetHostInfo;
	TGetAmbientControlEvent FOnGetAmbientControlInfo;
	TPreProcessMessageEvent FOnPreProcessMessage;
	TInterceptMouseMessageEvent FOnInterceptMouseMessage;
	Mshtml::_di_IHTMLElement FCurrentElement;
	TCurrentElementType FCurrentElementType;
	void __fastcall SetUserMode(const System::WordBool Value);
	Mshtml::_di_IHTMLElement __fastcall GetTag(int Index);
	Mshtml::_di_IHTMLDocument2 __fastcall GetDocument2();
	void __fastcall SetURL(System::UnicodeString Value);
	Mshtml::_di_IHTMLElement __fastcall GetActiveElement();
	int __fastcall GetCount();
	void __fastcall SetControlBorder(const TControlBorder Value);
	void __fastcall SetFlatScrollBar(const bool Value);
	void __fastcall SetShowScrollBar(const bool Value);
	Mshtml::_di_IHTMLWindow2 __fastcall GetWindow();
	_di_IServiceProvider __fastcall GetServiceProvider();
	Mshtml::_di_IHTMLEditServices2 __fastcall GetHTMLEditServices();
	_di_IOleCommandTarget __fastcall GetCommandTarget();
	Mshtml::_di_IHTMLDocument3 __fastcall GetDocument3();
	Mshtml::_di_IDisplayServices __fastcall GetDisplayServices();
	Mshtml::_di_IHighlightRenderingServices __fastcall GetHighlightRenderingServices();
	Mshtml::_di_IMarkupServices2 __fastcall GetMarkupServices();
	Mshtml::_di_IMarkupContainer2 __fastcall GetPrimaryMarkupContainer();
	Mshtml::_di_IHTMLDocument4 __fastcall GetDocument4();
	Mshtml::_di_IHTMLNamespaceCollection __fastcall GetIHTMLNamespaceCollection();
	bool __fastcall GetModified();
	MESSAGE void __fastcall CMCancelMode(Vcl::Controls::TCMCancelMode &Message);
	Mshtml::_di_IHTMLCaret __fastcall GetCaret();
	HIDESBASE MESSAGE void __fastcall CMRecreatewnd(Winapi::Messages::TMessage &Message);
	void __fastcall SetCommandUpdater(TCustomWebBrowserCommandUpdater* const Value);
	HIDESBASE MESSAGE void __fastcall WMParentNotify(Winapi::Messages::TWMParentNotify &Message);
	bool __fastcall GetOverrideCursor();
	void __fastcall SetOverrideCursor(const bool Value);
	void __fastcall SetModified(const bool Value);
	Mshtml::_di_IHTMLDocument __fastcall GetActiveDocument();
	Mshtml::_di_IHTMLElement __fastcall GetCurrentElement();
	TCurrentElementType __fastcall GetCurrentElementType();
	void __fastcall ClearCurrentElement();
	
protected:
	bool FBackEnabled;
	bool FForwardEnabled;
	void __fastcall ShellWndProc(Winapi::Messages::TMessage &Message, HWND Wnd, void * WndProc);
	virtual void __fastcall DestroyWindowHandle();
	void __fastcall DoStatusTextChange(const System::UnicodeString Text);
	void __fastcall DoResolveRelativePath(System::UnicodeString &Path);
	HRESULT __safecall DoOnControlSelect(const Mshtml::_di_IHTMLEventObj EventObj, System::WordBool &__DoOnControlSelect_result);
	System::WordBool __fastcall DoOnControlMove(const Mshtml::_di_IHTMLEventObj EventObj, int DispID);
	System::WordBool __fastcall DoOnControlResize(const Mshtml::_di_IHTMLEventObj EventObj, int DispID);
	System::WordBool __fastcall DoBeforeEditFocus(const Mshtml::_di_IHTMLEventObj EventObj, const int DispID);
	HIDESBASE void __fastcall DoCommandStateChange(Winapi::Activex::TOleEnum Command, System::WordBool Enable);
	void __fastcall DoUpdateCommands();
	virtual void __fastcall Loaded();
	void __fastcall HookChildWindows();
	void __fastcall UnHookChildWindows();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	void __fastcall ShellDocObjWndProc(Winapi::Messages::TMessage &Message);
	void __fastcall InetExplorerServerWndProc(Winapi::Messages::TMessage &Message);
	HIDESBASE HRESULT __stdcall Invoke(int DispID, const GUID &IID, int LocaleID, System::Word Flags, void *Params, void * VarResult, void * ExcepInfo, void * ArgErr);
	HIDESBASE HRESULT __stdcall ShowMessage(NativeUInt hwnd, System::WideChar * lpstrText, System::WideChar * lpstrCaption, int dwType, System::WideChar * lpstrHelpFile, int dwHelpContext, NativeInt &plResult);
	HIDESBASE HRESULT __stdcall ShowHelp(NativeUInt hwnd, System::WideChar * pszHelpFile, unsigned uCommand, int dwData, System::Types::TPoint ptMouse, _di_IDispatch &pDispachObjectHit);
	HIDESBASE HRESULT __stdcall EnableModeless(int fEnable);
	HIDESBASE HRESULT __stdcall FilterDataObject(const _di_IDataObject pDO, /* out */ _di_IDataObject &ppDORet);
	HIDESBASE HRESULT __stdcall GetDropTarget(const _di_IDropTarget pDropTarget, /* out */ _di_IDropTarget &ppDropTarget);
	HIDESBASE HRESULT __stdcall GetExternal(/* out */ _di_IDispatch &ppDispatch);
	HIDESBASE HRESULT __stdcall GetHostInfo(Idoc::_DOCHOSTUIINFO &pInfo);
	HIDESBASE HRESULT __stdcall GetOptionKeyPath(/* out */ System::WideChar * &pchKey, unsigned dw);
	HIDESBASE HRESULT __stdcall HideUI();
	HIDESBASE HRESULT __stdcall OnDocWindowActivate(int fActivate);
	HIDESBASE HRESULT __stdcall OnFrameWindowActivate(int fActivate);
	HIDESBASE HRESULT __stdcall ResizeBorder(System::Types::TRect &prcBorder, const _di_IOleInPlaceUIWindow pUIWindow, int fRameWindow);
	HIDESBASE HRESULT __stdcall ShowUI(unsigned dwID, const _di_IOleInPlaceActiveObject pActiveObject, const _di_IOleCommandTarget pCommandTarget, const _di_IOleInPlaceFrame pFrame, const _di_IOleInPlaceUIWindow pDoc);
	HIDESBASE HRESULT __stdcall TranslateAccelerator(tagMSG &lpmsg, GUID &pguidCmdGroup, unsigned nCmdID);
	HIDESBASE HRESULT __stdcall TranslateUrl(unsigned dwTranslate, System::WideChar * pchURLIn, /* out */ System::WideChar * &ppchURLOut);
	HIDESBASE HRESULT __stdcall UpdateUI();
	HRESULT __stdcall GetOverrideKeyPath(/* out */ System::WideChar * &pchKey, unsigned dw);
	HIDESBASE HRESULT __stdcall OnFocus(System::LongBool fGotFocus);
	HIDESBASE HRESULT __stdcall QueryService(const GUID &rsid, const GUID &iid, /* out */ void *Obj);
	HIDESBASE HRESULT __stdcall QueryStatus(System::PGUID CmdGroup, unsigned cCmds, Winapi::Activex::POleCmd prgCmds, Winapi::Activex::POleCmdText CmdText);
	HIDESBASE HRESULT __stdcall Exec(System::PGUID CmdGroup, unsigned nCmdID, unsigned nCmdexecopt, const System::OleVariant &vaIn, System::OleVariant &vaOut);
	HRESULT __stdcall Notify();
	virtual void __fastcall InvokeEvent(int DispID, tagDISPPARAMS &Params);
	DYNAMIC void __fastcall MouseOut(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseOver(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall DoError();
	DYNAMIC void __fastcall DoBeforeUpdate();
	DYNAMIC void __fastcall DoAfterUpdate();
	DYNAMIC void __fastcall DoReadyStateChange();
	DYNAMIC void __fastcall DoWndResize();
	DYNAMIC void __fastcall DoScroll();
	DYNAMIC void __fastcall DoFocus();
	DYNAMIC void __fastcall DoBlur();
	DYNAMIC void __fastcall DoHelp();
	DYNAMIC void __fastcall DoLoad();
	DYNAMIC void __fastcall DoUnLoad();
	DYNAMIC void __fastcall DoBeforeUnLoad();
	DYNAMIC void __fastcall ErrorUpdate();
	DYNAMIC void __fastcall RowEnter();
	DYNAMIC void __fastcall RowExit();
	DYNAMIC void __fastcall SelectStart();
	DYNAMIC void __fastcall SelectionChange();
	
public:
	__fastcall virtual TWebBrowserEx(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TWebBrowserEx();
	DYNAMIC bool __fastcall PreProcessMessage(tagMSG &Msg);
	void __fastcall DoCommand(const System::UnicodeString CmdStr)/* overload */;
	void __fastcall DoCommand(const Winapi::Activex::TOleEnum Cmd, const System::OleVariant &InParam, const System::OleVariant &OutParam)/* overload */;
	TCommandStates __fastcall CommandState(const Winapi::Activex::TOleEnum CmdID)/* overload */;
	TCommandStateArray __fastcall CommandState(TCommandStateArray Cmds)/* overload */;
	HIDESBASE HRESULT __stdcall ShowContextMenu(unsigned dwID, Mshtml::PtagPOINT ppt, const System::_di_IInterface pcmdtReserved, const _di_IDispatch pdispReserved);
	void __fastcall ForceSelectionChange();
	void __fastcall Bold();
	DYNAMIC bool __fastcall Focused();
	void __fastcall Italic();
	void __fastcall Underline();
	void __fastcall CutToClipBoard();
	void __fastcall CopyToClipBoard();
	void __fastcall PasteFromClipBoard();
	void __fastcall Delete();
	void __fastcall Undo();
	void __fastcall Redo();
	void __fastcall SelectAll();
	void __fastcall Clear();
	int __fastcall SelLength();
	Mshtml::_di_IHTMLSelectionObject __fastcall Selection();
	void __fastcall CreateBookmark();
	void __fastcall Overwrite();
	System::Classes::_di_IInterfaceList __fastcall GetViewLinkDocuments(Winapi::Activex::TOleEnum CmdId);
	Mshtml::_di_IHTMLElement __fastcall GetElementOfViewLinkDocument(Mshtml::_di_IHTMLDocument ADocument);
	bool __fastcall GetIsEditableElement(Mshtml::_di_IHTMLElement AElement, TElementEditableFlags AFlags);
	bool __fastcall GetIsContentPage();
	void __fastcall Print();
	void __fastcall PageSetup();
	void __fastcall PrintPreview();
	void __fastcall ClearDirtyFlag();
	void __fastcall Open();
	void __fastcall Save();
	void __fastcall SaveAs();
	void __fastcall LoadFromStream(System::Classes::TStream* S);
	virtual void __fastcall LoadFromFile(const System::UnicodeString FileName);
	void __fastcall SaveToStream(System::Classes::TStream* S);
	virtual void __fastcall SaveToFile(const System::UnicodeString FileName);
	void __fastcall ViewSource();
	Mshtml::_di_ISelectionServices __fastcall GetSelectionServices();
	void __fastcall RegisterServiceProvider(TWebBrowserServiceProvider* Provider);
	void __fastcall UnRegisterServiceProvider(TWebBrowserServiceProvider* Provider);
	__property bool BackEnabled = {read=FBackEnabled, nodefault};
	__property Mshtml::_di_IHTMLCaret Caret = {read=GetCaret};
	__property TCustomWebBrowserCommandUpdater* CommandUpdater = {read=FCommandUpdater, write=SetCommandUpdater};
	__property bool ForwardEnabled = {read=FForwardEnabled, nodefault};
	__property _di_IOleCommandTarget CommandTarget = {read=GetCommandTarget};
	__property Mshtml::_di_IDisplayServices DisplayServices = {read=GetDisplayServices};
	__property Mshtml::_di_IHTMLDocument2 Document2 = {read=GetDocument2};
	__property Mshtml::_di_IHTMLDocument3 Document3 = {read=GetDocument3};
	__property Mshtml::_di_IHTMLDocument4 Document4 = {read=GetDocument4};
	__property Mshtml::_di_IHTMLEditServices2 HTMLEditServices = {read=GetHTMLEditServices};
	__property Mshtml::_di_IHighlightRenderingServices HighlightRenderingServices = {read=GetHighlightRenderingServices};
	__property Mshtml::_di_IMarkupServices2 MarkupServices = {read=GetMarkupServices};
	__property bool Modified = {read=GetModified, write=SetModified, nodefault};
	__property Mshtml::_di_IHTMLNamespaceCollection Namespaces = {read=GetIHTMLNamespaceCollection};
	__property bool OverrideCursor = {read=GetOverrideCursor, write=SetOverrideCursor, nodefault};
	__property Mshtml::_di_IMarkupContainer2 PrimaryMarkupContainer = {read=GetPrimaryMarkupContainer};
	__property _di_IServiceProvider ServiceProvider = {read=GetServiceProvider};
	__property Mshtml::_di_ISelectionServices SelectionServices = {read=GetSelectionServices};
#ifndef _WIN64
	__property NativeUInt ShellDocObjViewHandle = {read=FShellDocObjViewHandle, nodefault};
	__property NativeUInt InetExplorerServerHandle = {read=FInetExplorerServerHandle, nodefault};
#else /* _WIN64 */
	__property NativeUInt ShellDocObjViewHandle = {read=FShellDocObjViewHandle};
	__property NativeUInt InetExplorerServerHandle = {read=FInetExplorerServerHandle};
#endif /* _WIN64 */
	__property Mshtml::_di_IHTMLElement ActiveElement = {read=GetActiveElement};
	__property int Count = {read=GetCount, nodefault};
	__property Mshtml::_di_IHTMLElement Tags[int Index] = {read=GetTag};
	__property Mshtml::_di_IHTMLWindow2 Window = {read=GetWindow};
	__property TDocEventDispatch* DocEvents = {read=FDocEventDispatch};
	__property TWndEventDispatch* WndEvents = {read=FWndEventDispatch};
	__property TWebBrowserEvents2Dispatch* WebBrowserEvents = {read=FWebBrowserEvents2Dispatch};
	__property Mshtml::_di_IHTMLElement CurrentElement = {read=GetCurrentElement};
	__property TCurrentElementType CurrentElementType = {read=GetCurrentElementType, nodefault};
	
__published:
	__property bool AutoComplete = {read=FAutoComplete, write=FAutoComplete, nodefault};
	__property Mshtml::_di_IHTMLDocument ActiveDocument = {read=GetActiveDocument};
	__property System::UnicodeString BaseURL = {read=FBaseURL, write=FBaseURL};
	__property TWebBrowserNotifyEvent BeforeDestroy = {read=FBeforeDestroy, write=FBeforeDestroy};
	__property Constraints;
	__property bool FlatScrollBar = {read=FFlatScrollBar, write=SetFlatScrollBar, default=0};
	__property bool ShowScrollBar = {read=FShowScrollBar, write=SetShowScrollBar, default=1};
	__property TControlBorder ControlBorder = {read=FControlBorder, write=SetControlBorder, nodefault};
	__property System::WordBool UserMode = {read=FUserMode, write=SetUserMode, nodefault};
	__property bool UseDivBlock = {read=FUseDivBlock, write=FUseDivBlock, nodefault};
	__property bool UseTheme = {read=FUseTheme, write=FUseTheme, nodefault};
	__property System::UnicodeString URL = {read=FURL, write=SetURL};
	__property TWebBrowserNotifyEvent BeforeLoadFromStream = {read=FBeforeLoadFromStream, write=FBeforeLoadFromStream};
	__property System::Classes::TNotifyEvent BeforeUpdate = {read=FBeforeUpdate, write=FBeforeUpdate};
	__property System::Classes::TNotifyEvent AfterUpdate = {read=FAfterUpdate, write=FAfterUpdate};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property OnDblClick;
	__property System::Classes::TNotifyEvent OnCancelMode = {read=FOnCancelMode, write=FOnCancelMode};
	__property OnClick;
	__property System::Classes::TNotifyEvent OnError = {read=FOnError, write=FOnError};
	__property System::Classes::TNotifyEvent OnErrorUpdate = {read=FOnErrorUpdate, write=FOnErrorUpdate};
	__property TGetAmbientControlEvent OnGetAmbientControlInfo = {read=FOnGetAmbientControlInfo, write=FOnGetAmbientControlInfo};
	__property TGetHostInfoEvent OnGetHostInfo = {read=FOnGetHostInfo, write=FOnGetHostInfo};
	__property TWebBrowserNotifyEvent OnReloadDocument = {read=FOnReloadDocument, write=FOnReloadDocument};
	__property TResolveRelativePathEvent OnResolveRelativePath = {read=FOnResolveRelativePath, write=FOnResolveRelativePath};
	__property TPreProcessMessageEvent OnPreprocessMessage = {read=FOnPreProcessMessage, write=FOnPreProcessMessage};
	__property TInterceptMouseMessageEvent OnInterceptMouseMessage = {read=FOnInterceptMouseMessage, write=FOnInterceptMouseMessage};
	__property TWndActivateEvent OnDocWndActivate = {read=FOnDocWndActivate, write=FOnDocWndActivate};
	__property TWndActivateEvent OnFrameWndActivate = {read=FOnFrameWndActivate, write=FOnFrameWndActivate};
	__property TGetExternalDispatchEvent OnGetExternalDispatch = {read=FOnGetExternalDispatch, write=FOnGetExternalDispatch};
	__property TStatusTextChangeEvent OnStatusTextChange = {read=FOnStatusTextChange, write=FOnStatusTextChange};
	__property TGetDropTargetEvent OnGetDropTarget = {read=FOnGetDropTarget, write=FOnGetDropTarget};
	__property TGetSelectionObjectEvent OnGetSelectionObject = {read=FOnGetSelectionObject, write=FOnGetSelectionObject};
	__property TGetActiveDocumentEvent OnGetActiveDocument = {read=FOnGetActiveDocument, write=FOnGetActiveDocument};
	__property TGetViewLinkDocumentsEvent OnGetViewLinkDocuments = {read=FOnGetViewLinkDocuments, write=FOnGetViewLinkDocuments};
	__property TGetElementOfViewLinkDocumentEvent OnGetElementOfViewLinkDocument = {read=FOnGetElementOfViewLinkDocument, write=FOnGetElementOfViewLinkDocument};
	__property TGetIsEditableElementEvent OnGetIsEditableElement = {read=FOnGetIsEditableElement, write=FOnGetIsEditableElement};
	__property TGetIsContentPageEvent OnGetIsContentPage = {read=FOnGetIsContentPage, write=FOnGetIsContentPage};
	__property TShowContextMenuEvent OnShowContextMenu = {read=FOnShowContextMenu, write=FOnShowContextMenu};
	__property TInitMenuPopupEvent OnInitMenuPopup = {read=FOnInitMenuPopup, write=FOnInitMenuPopup};
	__property System::Classes::TNotifyEvent OnOpenNewWindow = {read=FOnOpenNewWindow, write=FOnOpenNewWindow};
	__property TWindowClosingEvent OnWindowClosing = {read=FOnWindowClosing, write=FOnWindowClosing};
	__property System::Classes::TNotifyEvent BeforeUnload = {read=FBeforeUnload, write=FBeforeUnload};
	__property System::Classes::TNotifyEvent OnBlur = {read=FOnBlur, write=FOnBlur};
	__property System::Classes::TNotifyEvent OnHelp = {read=FOnHelp, write=FOnHelp};
	__property System::Classes::TNotifyEvent OnLoad = {read=FOnLoad, write=FOnLoad};
	__property System::Classes::TNotifyEvent OnUnLoad = {read=FOnUnLoad, write=FOnUnLoad};
	__property System::Classes::TNotifyEvent OnWndResize = {read=FOnWndResize, write=FOnWndResize};
	__property System::Classes::TNotifyEvent OnScroll = {read=FOnScroll, write=FOnScroll};
	__property System::Classes::TNotifyEvent OnReadyStateChange = {read=FOnReadyStateChange, write=FOnReadyStateChange};
	__property TWebBrowserEvent OnSelectionChange = {read=FOnSelectionChange, write=FOnSelectionChange};
	__property TWebBrowserEventWordBool OnBeforeEditFocus = {read=FOnBeforeEditFocus, write=FOnBeforeEditFocus};
	__property System::Classes::TNotifyEvent OnUpdateCommands = {read=FOnUpdateCommands, write=FOnUpdateCommands};
	__property TControlSelectEvent OnControlSelect = {read=FOnControlSelect, write=FOnControlSelect};
	__property OnMouseMove;
	__property OnMouseDown;
	__property Vcl::Controls::TMouseMoveEvent OnMouseOut = {read=FOnMouseOut, write=FOnMouseOut};
	__property Vcl::Controls::TMouseMoveEvent OnMouseOver = {read=FOnMouseOver, write=FOnMouseOver};
	__property System::Classes::TNotifyEvent OnRowEnter = {read=FOnRowEnter, write=FOnRowEnter};
	__property System::Classes::TNotifyEvent OnRowExit = {read=FOnRowExit, write=FOnRowExit};
	__property System::Classes::TNotifyEvent OnSelectStart = {read=FOnSelectStart, write=FOnSelectStart};
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property TControlMoveEvent OnControlMove = {read=FOnControlMove, write=FOnControlMove};
	__property TControlResizeEvent OnControlResize = {read=FOnControlResize, write=FOnControlResize};
public:
	/* TWinControl.CreateParented */ inline __fastcall TWebBrowserEx(HWND ParentWindow) : Shdocvw::TWebBrowser(ParentWindow) { }
	
private:
	void *__IHTMLChangeSink;	// Mshtml::IHTMLChangeSink 
	void *__IOleCommandTarget;	// IOleCommandTarget 
	void *__IServiceProvider;	// IServiceProvider 
	void *__IDocHostShowUI;	// Idoc::IDocHostShowUI 
	void *__IDocHostUIHandler2;	// Idoc::IDocHostUIHandler2 
	void *__IDispatch;	// IDispatch 
	
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
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {B722BCCB-4E68-101B-A2BC-00AA00404770}
	operator _di_IOleCommandTarget()
	{
		_di_IOleCommandTarget intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IOleCommandTarget*(void) { return (IOleCommandTarget*)&__IOleCommandTarget; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {6D5140C1-7436-11CE-8034-00AA006009FA}
	operator _di_IServiceProvider()
	{
		_di_IServiceProvider intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IServiceProvider*(void) { return (IServiceProvider*)&__IServiceProvider; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {C4D244B0-D43E-11CF-893B-00AA00BDCE1A}
	operator Idoc::_di_IDocHostShowUI()
	{
		Idoc::_di_IDocHostShowUI intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Idoc::IDocHostShowUI*(void) { return (Idoc::IDocHostShowUI*)&__IDocHostShowUI; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3050F6D0-98B5-11CF-BB82-00AA00BDCE0B}
	operator Idoc::_di_IDocHostUIHandler2()
	{
		Idoc::_di_IDocHostUIHandler2 intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Idoc::IDocHostUIHandler2*(void) { return (Idoc::IDocHostUIHandler2*)&__IDocHostUIHandler2; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {BD3F23C0-D43E-11CF-893B-00AA00BDCE1A}
	operator Idoc::_di_IDocHostUIHandler()
	{
		Idoc::_di_IDocHostUIHandler intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Idoc::IDocHostUIHandler*(void) { return (Idoc::IDocHostUIHandler*)&__IDocHostUIHandler2; }
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
	operator System::IInterface*(void) { return (System::IInterface*)&__IHTMLChangeSink; }
	#endif
	
};


enum DECLSPEC_DENUM TElementProperty : unsigned char { epWidth, epHeight };

typedef System::Set<TElementProperty, TElementProperty::epWidth, TElementProperty::epHeight> TElementProperties;

typedef void __fastcall (__closure *TCommandUpdaterEvent)(TCustomWebBrowserCommandUpdater* Sender, unsigned CmdID);

typedef void __fastcall (__closure *TCommandUpdaterBeforeExecuteEvent)(TCustomWebBrowserCommandUpdater* Sender, unsigned CmdID, bool &Executed);

typedef void __fastcall (__closure *TSaveActionStateEvent)(TCustomWebBrowserCommandUpdater* Sender, System::TObject* Action, TCommandState State, bool Value);

typedef void __fastcall (__closure *TGetActionStateEvent)(TCustomWebBrowserCommandUpdater* Sender, System::TObject* Action, TCommandState State, bool &Value, bool &HaveState);

typedef void __fastcall (__closure *TElementPropertiesChangedEvent)(TCustomWebBrowserCommandUpdater* Sender, Mshtml::_di_IHTMLElement Element, TElementProperties Properties);

typedef void __fastcall (__closure *TFilterCommandStateEvent)(TCustomWebBrowserCommandUpdater* Sender, Winapi::Activex::TOleEnum CmdID, TCommandStates &State);

class PASCALIMPLEMENTATION TCustomWebBrowserCommandUpdater : public TCustomWebBrowserComponent
{
	typedef TCustomWebBrowserComponent inherited;
	
private:
	TCommandStateArray FCmds;
	TCommandUpdaterEvent FOnUpdateCommands;
	TCommandUpdaterBeforeExecuteEvent FBeforeCommand;
	TCommandUpdaterEvent FAfterCommand;
	TGetActionStateEvent FOnGetActionState;
	TSaveActionStateEvent FOnSaveActionState;
	TElementPropertiesChangedEvent FOnElementPropertiesChanged;
	TFilterCommandStateEvent FOnFilterCommandState;
	void __fastcall QuickSort(int L, int R);
	bool __fastcall Find(const Winapi::Activex::TOleEnum CmdID, int &Index);
	
protected:
	virtual void __fastcall SetWebBrowser(TWebBrowserEx* const Value);
	
public:
	TCommandStates __fastcall CommandState(Winapi::Activex::TOleEnum CmdID);
	void __fastcall DoElementPropertiesChanged(Mshtml::_di_IHTMLElement Element, TElementProperties Properties);
	void __fastcall DoAfterCommand(unsigned CmdID);
	void __fastcall DoBeforeCommand(unsigned CmdID, bool &Executed);
	bool __fastcall GetActionState(System::TObject* Action, TCommandState State, bool Value);
	void __fastcall RegisterCommand(unsigned CmdID);
	void __fastcall RegisterCommands(unsigned *CmdIDs, const int CmdIDs_High);
	void __fastcall SaveActionState(System::TObject* Action, TCommandState State, bool Value);
	void __fastcall UnRegisterCommand(unsigned CmdID);
	void __fastcall UnRegisterCommands(unsigned *CmdIDs, const int CmdIDs_High);
	void __fastcall UpdateCommands(unsigned CmdID = (unsigned)(0x0));
	__property TCommandUpdaterEvent AfterCommand = {read=FAfterCommand, write=FAfterCommand};
	__property TCommandUpdaterBeforeExecuteEvent BeforeCommand = {read=FBeforeCommand, write=FBeforeCommand};
	__property TCommandUpdaterEvent OnUpdateCommands = {read=FOnUpdateCommands, write=FOnUpdateCommands};
	__property TGetActionStateEvent OnGetActionState = {read=FOnGetActionState, write=FOnGetActionState};
	__property TSaveActionStateEvent OnSaveActionState = {read=FOnSaveActionState, write=FOnSaveActionState};
	__property TElementPropertiesChangedEvent OnElementPropertiesChanged = {read=FOnElementPropertiesChanged, write=FOnElementPropertiesChanged};
	__property TFilterCommandStateEvent OnFilterCommandState = {read=FOnFilterCommandState, write=FOnFilterCommandState};
public:
	/* TComponent.Create */ inline __fastcall virtual TCustomWebBrowserCommandUpdater(System::Classes::TComponent* AOwner) : TCustomWebBrowserComponent(AOwner) { }
	/* TComponent.Destroy */ inline __fastcall virtual ~TCustomWebBrowserCommandUpdater() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserCommandUpdater : public TCustomWebBrowserCommandUpdater
{
	typedef TCustomWebBrowserCommandUpdater inherited;
	
__published:
	__property WebBrowser;
	__property AfterCommand;
	__property BeforeCommand;
	__property OnBrowserChanged;
	__property OnUpdateCommands;
	__property OnGetActionState;
	__property OnSaveActionState;
	__property OnElementPropertiesChanged;
public:
	/* TComponent.Create */ inline __fastcall virtual TWebBrowserCommandUpdater(System::Classes::TComponent* AOwner) : TCustomWebBrowserCommandUpdater(AOwner) { }
	/* TComponent.Destroy */ inline __fastcall virtual ~TWebBrowserCommandUpdater() { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE GUID SID_SHTMLEditServices;
extern DELPHI_PACKAGE GUID SID_SDownloadManager;
extern DELPHI_PACKAGE GUID SID_STopLevelBrowser;
extern DELPHI_PACKAGE GUID CGID_MSHTML;
extern DELPHI_PACKAGE GUID CGID_DocHostCommandHandler;
static const System::Int8 DOCHOSTUIDBLCLK_DEFAULT = System::Int8(0x0);
static const System::Int8 DOCHOSTUIDBLCLK_SHOWPROPERTIES = System::Int8(0x1);
static const System::Int8 DOCHOSTUIDBLCLK_SHOWCODE = System::Int8(0x2);
static const System::Int8 ELEMENTNAMESPACEFLAGS_ALLOWANYTAG = System::Int8(0x1);
static const System::Int8 ELEMENTNAMESPACEFLAGS_QUERYFORUNKNOWNTAGS = System::Int8(0x2);
extern DELPHI_PACKAGE GUID CLSID_HTMLDocument;
static const System::Word OLECMDID_OPENNEWWINDOW = System::Word(0x1b8a);
extern DELPHI_PACKAGE GUID GUID_TriEditCommandGroup;
extern DELPHI_PACKAGE Mshtml::_di_IHTMLControlRange __fastcall SafeCreateControlRange(TWebBrowserEx* WebBrowserEx);
extern DELPHI_PACKAGE _di_IDispatch __fastcall SafeCreateRange(TWebBrowserEx* WebBrowserEx);
}	/* namespace Webbrowserex */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WEBBROWSEREX)
using namespace Webbrowserex;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WebbrowserexHPP
