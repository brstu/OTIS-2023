// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.Edge.pas' rev: 35.00 (Windows)

#ifndef Vcl_EdgeHPP
#define Vcl_EdgeHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.Win.ComObj.hpp>
#include <System.Generics.Collections.hpp>
#include <System.SyncObjs.hpp>
#include <Vcl.Controls.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <Winapi.WebView2.hpp>
#include <System.SysUtils.hpp>
#include <System.Generics.Defaults.hpp>
#include <Winapi.ActiveX.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Edge
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TNavigationStartingEventArgs;
class DELPHICLASS TNewWindowRequestedEventArgs;
class DELPHICLASS TPermissionRequestedEventArgs;
class DELPHICLASS TScriptDialogOpeningEventArgs;
class DELPHICLASS TWebMessageReceivedEventArgs;
class DELPHICLASS TWebResourceRequestedEventArgs;
class DELPHICLASS TCustomEdgeBrowser;
class DELPHICLASS TEdgeBrowser;
class DELPHICLASS EEdgeError;
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TContainsFullScreenElementChangedEvent)(TCustomEdgeBrowser* Sender, bool ContainsFullScreenElement);

typedef unsigned __int64 TUInt64;

typedef void __fastcall (__closure *TContentLoadingEvent)(TCustomEdgeBrowser* Sender, bool IsErrorPage, TUInt64 NavigationID);

typedef void __fastcall (__closure *TDevToolsProtocolEventReceivedEvent)(TCustomEdgeBrowser* Sender, const System::UnicodeString CDPEventName, const System::UnicodeString AParameterObjectAsJson);

typedef void __fastcall (__closure *TDocumentTitleChangedEvent)(TCustomEdgeBrowser* Sender, const System::UnicodeString ADocumentTitle);

typedef void __fastcall (__closure *TExecuteScriptEvent)(TCustomEdgeBrowser* Sender, HRESULT AResult, const System::UnicodeString AResultObjectAsJson);

typedef void __fastcall (__closure *THistoryChangedEvent)(TCustomEdgeBrowser* Sender);

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TNavigationStartingEventArgs : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	Winapi::Webview2::_di_ICoreWebView2NavigationStartingEventArgs FArgsInterface;
	
public:
	__fastcall TNavigationStartingEventArgs(const Winapi::Webview2::_di_ICoreWebView2NavigationStartingEventArgs Args);
	__property Winapi::Webview2::_di_ICoreWebView2NavigationStartingEventArgs ArgsInterface = {read=FArgsInterface};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TNavigationStartingEventArgs() { }
	
private:
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {EE1938CE-D385-4CB0-854B-F498F78C3D88}
	operator Winapi::Webview2::_di_ICoreWebView2NavigationStartingEventArgs() { return ArgsInterface; }
	#else
	operator Winapi::Webview2::ICoreWebView2NavigationStartingEventArgs*(void) { return (Winapi::Webview2::ICoreWebView2NavigationStartingEventArgs*)ArgsInterface; }
	#endif
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef void __fastcall (__closure *TNavigationStartingEvent)(TCustomEdgeBrowser* Sender, TNavigationStartingEventArgs* Args);

typedef void __fastcall (__closure *TNavigationCompletedEvent)(TCustomEdgeBrowser* Sender, bool IsSuccess, Winapi::Activex::TOleEnum WebErrorStatus);

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TNewWindowRequestedEventArgs : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	Winapi::Webview2::_di_ICoreWebView2NewWindowRequestedEventArgs FArgsInterface;
	
public:
	__fastcall TNewWindowRequestedEventArgs(const Winapi::Webview2::_di_ICoreWebView2NewWindowRequestedEventArgs Args);
	__property Winapi::Webview2::_di_ICoreWebView2NewWindowRequestedEventArgs ArgsInterface = {read=FArgsInterface};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TNewWindowRequestedEventArgs() { }
	
private:
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {9EDC7F5F-C6EA-4F3C-827B-A8880794C0A9}
	operator Winapi::Webview2::_di_ICoreWebView2NewWindowRequestedEventArgs() { return ArgsInterface; }
	#else
	operator Winapi::Webview2::ICoreWebView2NewWindowRequestedEventArgs*(void) { return (Winapi::Webview2::ICoreWebView2NewWindowRequestedEventArgs*)ArgsInterface; }
	#endif
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef void __fastcall (__closure *TNewWindowRequestedEvent)(TCustomEdgeBrowser* Sender, TNewWindowRequestedEventArgs* Args);

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TPermissionRequestedEventArgs : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	Winapi::Webview2::_di_ICoreWebView2PermissionRequestedEventArgs FArgsInterface;
	
public:
	__fastcall TPermissionRequestedEventArgs(const Winapi::Webview2::_di_ICoreWebView2PermissionRequestedEventArgs Args);
	__property Winapi::Webview2::_di_ICoreWebView2PermissionRequestedEventArgs ArgsInterface = {read=FArgsInterface};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TPermissionRequestedEventArgs() { }
	
private:
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {774B5EA1-3FAD-435C-B1FC-A77D1ACD5EAF}
	operator Winapi::Webview2::_di_ICoreWebView2PermissionRequestedEventArgs() { return ArgsInterface; }
	#else
	operator Winapi::Webview2::ICoreWebView2PermissionRequestedEventArgs*(void) { return (Winapi::Webview2::ICoreWebView2PermissionRequestedEventArgs*)ArgsInterface; }
	#endif
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef void __fastcall (__closure *TPermissionRequestedEvent)(TCustomEdgeBrowser* Sender, TPermissionRequestedEventArgs* Args);

typedef void __fastcall (__closure *TProcessFailedEvent)(TCustomEdgeBrowser* Sender, Winapi::Activex::TOleEnum ProcessFailedKind);

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TScriptDialogOpeningEventArgs : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	Winapi::Webview2::_di_ICoreWebView2ScriptDialogOpeningEventArgs FArgsInterface;
	
public:
	__fastcall TScriptDialogOpeningEventArgs(const Winapi::Webview2::_di_ICoreWebView2ScriptDialogOpeningEventArgs Args);
	__property Winapi::Webview2::_di_ICoreWebView2ScriptDialogOpeningEventArgs ArgsInterface = {read=FArgsInterface};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TScriptDialogOpeningEventArgs() { }
	
private:
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {B8F6356E-24DC-4D74-90FE-AD071E11CB91}
	operator Winapi::Webview2::_di_ICoreWebView2ScriptDialogOpeningEventArgs() { return ArgsInterface; }
	#else
	operator Winapi::Webview2::ICoreWebView2ScriptDialogOpeningEventArgs*(void) { return (Winapi::Webview2::ICoreWebView2ScriptDialogOpeningEventArgs*)ArgsInterface; }
	#endif
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef void __fastcall (__closure *TScriptDialogOpeningEvent)(TCustomEdgeBrowser* Sender, TScriptDialogOpeningEventArgs* Args);

typedef void __fastcall (__closure *TSourceChangedEvent)(TCustomEdgeBrowser* Sender, bool IsNewDocument);

typedef void __fastcall (__closure *TWebViewStatusEvent)(TCustomEdgeBrowser* Sender, HRESULT AResult);

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TWebMessageReceivedEventArgs : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	Winapi::Webview2::_di_ICoreWebView2WebMessageReceivedEventArgs FArgsInterface;
	
public:
	__fastcall TWebMessageReceivedEventArgs(const Winapi::Webview2::_di_ICoreWebView2WebMessageReceivedEventArgs Args);
	__property Winapi::Webview2::_di_ICoreWebView2WebMessageReceivedEventArgs ArgsInterface = {read=FArgsInterface};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TWebMessageReceivedEventArgs() { }
	
private:
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {B263B5AE-9C54-4B75-B632-40AE1A0B6912}
	operator Winapi::Webview2::_di_ICoreWebView2WebMessageReceivedEventArgs() { return ArgsInterface; }
	#else
	operator Winapi::Webview2::ICoreWebView2WebMessageReceivedEventArgs*(void) { return (Winapi::Webview2::ICoreWebView2WebMessageReceivedEventArgs*)ArgsInterface; }
	#endif
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef void __fastcall (__closure *TWebMessageReceivedEvent)(TCustomEdgeBrowser* Sender, TWebMessageReceivedEventArgs* Args);

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TWebResourceRequestedEventArgs : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	Winapi::Webview2::_di_ICoreWebView2WebResourceRequestedEventArgs FArgsInterface;
	
public:
	__fastcall TWebResourceRequestedEventArgs(const Winapi::Webview2::_di_ICoreWebView2WebResourceRequestedEventArgs Args);
	__property Winapi::Webview2::_di_ICoreWebView2WebResourceRequestedEventArgs ArgsInterface = {read=FArgsInterface};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TWebResourceRequestedEventArgs() { }
	
private:
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {2D7B3282-83B1-41CA-8BBF-FF18F6BFE320}
	operator Winapi::Webview2::_di_ICoreWebView2WebResourceRequestedEventArgs() { return ArgsInterface; }
	#else
	operator Winapi::Webview2::ICoreWebView2WebResourceRequestedEventArgs*(void) { return (Winapi::Webview2::ICoreWebView2WebResourceRequestedEventArgs*)ArgsInterface; }
	#endif
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef void __fastcall (__closure *TWebResourceRequestedEvent)(TCustomEdgeBrowser* Sender, TWebResourceRequestedEventArgs* Args);

typedef void __fastcall (__closure *TZoomFactorChangedEvent)(TCustomEdgeBrowser* Sender, double AZoomFactor);

class PASCALIMPLEMENTATION TCustomEdgeBrowser : public Vcl::Controls::TWinControl
{
	typedef Vcl::Controls::TWinControl inherited;
	
	
public:
	enum DECLSPEC_DENUM TBrowserControlState : unsigned char { None, Creating, Created, Failed };
	
	enum DECLSPEC_DENUM TPreviewFormat : unsigned char { PNG, JPEG };
	
	
private:
	TBrowserControlState FBrowserControlState;
	Winapi::Webview2::_di_ICoreWebView2Environment FWebViewEnvironment;
	Winapi::Webview2::_di_ICoreWebView2Controller FWebViewController;
	Winapi::Webview2::_di_ICoreWebView2 FWebView;
	Winapi::Webview2::_di_ICoreWebView2Settings FWebViewSettings;
	double FSizeRatio;
	HRESULT FLastErrorCode;
	bool FWebViewFocusEventActive;
	System::UnicodeString FLastURI;
	System::Syncobjs::TCriticalSection* FCritSec;
	System::UnicodeString FBrowserExecutableFolder;
	System::UnicodeString FUserDataFolder;
	Winapi::Webview2::EventRegistrationToken FAcceleratorKeyPressedToken;
	Winapi::Webview2::EventRegistrationToken FContainsFullScreenElementChangedToken;
	Winapi::Webview2::EventRegistrationToken FContentLoadingToken;
	Winapi::Webview2::EventRegistrationToken FDocumentTitleChangedToken;
	Winapi::Webview2::EventRegistrationToken FFrameNavigationStartingToken;
	Winapi::Webview2::EventRegistrationToken FFrameNavigationCompletedToken;
	Winapi::Webview2::EventRegistrationToken FGotFocusToken;
	Winapi::Webview2::EventRegistrationToken FHistoryChangedToken;
	Winapi::Webview2::EventRegistrationToken FLostFocusToken;
	Winapi::Webview2::EventRegistrationToken FMoveFocusRequestedToken;
	Winapi::Webview2::EventRegistrationToken FNavigationStartingToken;
	Winapi::Webview2::EventRegistrationToken FNavigationCompletedToken;
	Winapi::Webview2::EventRegistrationToken FNewWindowRequestedToken;
	Winapi::Webview2::EventRegistrationToken FPermissionRequestedToken;
	Winapi::Webview2::EventRegistrationToken FProcessFailedToken;
	Winapi::Webview2::EventRegistrationToken FScriptDialogOpeningToken;
	Winapi::Webview2::EventRegistrationToken FSourceChangedToken;
	Winapi::Webview2::EventRegistrationToken FWebResourceRequestedToken;
	Winapi::Webview2::EventRegistrationToken FWebMessageReceivedToken;
	Winapi::Webview2::EventRegistrationToken FWindowCloseRequestedToken;
	Winapi::Webview2::EventRegistrationToken FZoomFactorChangedToken;
	System::Generics::Collections::TDictionary__2<System::UnicodeString,Winapi::Webview2::EventRegistrationToken>* FDevToolsProtocolEventReceivedTokenMap;
	TWebViewStatusEvent FOnCapturePreviewCompleted;
	TContainsFullScreenElementChangedEvent FOnContainsFullScreenElementChanged;
	TContentLoadingEvent FOnContentLoading;
	TWebViewStatusEvent FOnCreateWebViewCompleted;
	TDevToolsProtocolEventReceivedEvent FOnDevToolsProtocolEventReceived;
	TDocumentTitleChangedEvent FOnDocumentTitleChanged;
	TExecuteScriptEvent FOnExecuteScript;
	TNavigationStartingEvent FOnFrameNavigationStarting;
	TNavigationCompletedEvent FOnFrameNavigationCompleted;
	THistoryChangedEvent FOnHistoryChanged;
	TNavigationStartingEvent FOnNavigationStarting;
	TNavigationCompletedEvent FOnNavigationCompleted;
	TNewWindowRequestedEvent FOnNewWindowRequested;
	TPermissionRequestedEvent FOnPermissionRequested;
	TProcessFailedEvent FOnProcessFailed;
	TScriptDialogOpeningEvent FOnScriptDialogOpening;
	TSourceChangedEvent FOnSourceChanged;
	TWebMessageReceivedEvent FOnWebMessageReceived;
	TWebResourceRequestedEvent FOnWebResourceRequested;
	System::Classes::TNotifyEvent FOnWindowCloseRequested;
	TZoomFactorChangedEvent FOnZoomFactorChanged;
	HRESULT __stdcall CreateEnvironmentCompleted(HRESULT AResult, const Winapi::Webview2::_di_ICoreWebView2Environment AEnvironment);
	HRESULT __stdcall CreateCoreWebView2ControllerCompleted(HRESULT AResult, const Winapi::Webview2::_di_ICoreWebView2Controller ACreatedController);
	unsigned __fastcall GetBrowserProcessID();
	System::UnicodeString __fastcall GetBrowserVersionInfo();
	bool __fastcall GetCanGoBack();
	bool __fastcall GetCanGoForward();
	bool __fastcall GetContainsFullScreenElement();
	System::UnicodeString __fastcall GetDocumentTitle();
	System::UnicodeString __fastcall GetLocationURL();
	bool __fastcall GetWebViewCreated();
	double __fastcall GetZoomFactor();
	bool __fastcall ProcessHResult(HRESULT AHResult);
	void __fastcall SetSizeRatio(const double Value);
	void __fastcall SetZoomFactor(const double Value);
	bool __fastcall GetBuiltInErrorPageEnabled();
	bool __fastcall GetDefaultContextMenusEnabled();
	bool __fastcall GetDefaultScriptDialogsEnabled();
	bool __fastcall GetDevToolsEnabled();
	bool __fastcall GetScriptEnabled();
	bool __fastcall GetStatusBarEnabled();
	bool __fastcall GetWebMessageEnabled();
	bool __fastcall GetZoomControlEnabled();
	void __fastcall SetBuiltInErrorPageEnabled(const bool Value);
	void __fastcall SetDefaultContextMenusEnabled(const bool Value);
	void __fastcall SetDefaultScriptDialogsEnabled(const bool Value);
	void __fastcall SetDevToolsEnabled(const bool Value);
	void __fastcall SetScriptEnabled(const bool Value);
	void __fastcall SetStatusBarEnabled(const bool Value);
	void __fastcall SetWebMessageEnabled(const bool Value);
	void __fastcall SetZoomControlEnabled(const bool Value);
	
protected:
	void __fastcall InitializeWebView();
	virtual void __fastcall SetParent(Vcl::Controls::TWinControl* AParent);
	virtual void __fastcall CreateWnd();
	DYNAMIC void __fastcall DoEnter();
	DYNAMIC void __fastcall Resize();
	HIDESBASE MESSAGE void __fastcall CMSysCommand(Winapi::Messages::TWMSysCommand &Message);
	MESSAGE void __fastcall CMParentVisibleChanged(Winapi::Messages::TMessage &Message);
	
public:
	__fastcall virtual TCustomEdgeBrowser(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomEdgeBrowser();
	void __fastcall AddWebResourceRequestedFilter(const System::UnicodeString URL, Winapi::Activex::TOleEnum ResourceContext);
	void __fastcall CapturePreview(const System::UnicodeString AFilename, TPreviewFormat PreviewFormat = (TPreviewFormat)(0x0))/* overload */;
	void __fastcall CapturePreview(System::Classes::TStream* Stream, TPreviewFormat PreviewFormat = (TPreviewFormat)(0x0))/* overload */;
	void __fastcall CreateWebView();
	void __fastcall CloseWebView();
	void __fastcall CloseBrowserProcess();
	void __fastcall ExecuteScript(const System::UnicodeString JavaScript);
	void __fastcall GoBack();
	void __fastcall GoForward();
	bool __fastcall Navigate(const System::UnicodeString AUri);
	bool __fastcall NavigateToString(const System::UnicodeString AHTMLContent);
	void __fastcall ReinitializeWebView();
	void __fastcall ReinitializeWebViewWithNewBrowser();
	HIDESBASE void __fastcall Refresh();
	void __fastcall RemoveWebResourceRequestedFilter(const System::UnicodeString URL, Winapi::Activex::TOleEnum ResourceContext);
	virtual void __fastcall SetFocus();
	void __fastcall Stop();
	void __fastcall SubscribeToCDPEvent(const System::UnicodeString CDPEventName);
	__property TBrowserControlState BrowserControlState = {read=FBrowserControlState, nodefault};
	__property System::UnicodeString BrowserVersionInfo = {read=GetBrowserVersionInfo};
	__property unsigned BrowserProcessID = {read=GetBrowserProcessID, nodefault};
	__property Winapi::Webview2::_di_ICoreWebView2 DefaultInterface = {read=FWebView};
	__property Winapi::Webview2::_di_ICoreWebView2Controller ControllerInterface = {read=FWebViewController};
	__property Winapi::Webview2::_di_ICoreWebView2Environment EnvironmentInterface = {read=FWebViewEnvironment};
	__property Winapi::Webview2::_di_ICoreWebView2Settings SettingsInterface = {read=FWebViewSettings};
	__property System::UnicodeString BrowserExecutableFolder = {read=FBrowserExecutableFolder, write=FBrowserExecutableFolder};
	__property System::UnicodeString UserDataFolder = {read=FUserDataFolder, write=FUserDataFolder};
	__property bool CanGoBack = {read=GetCanGoBack, nodefault};
	__property bool CanGoForward = {read=GetCanGoForward, nodefault};
	__property bool ContainsFullScreenElement = {read=GetContainsFullScreenElement, nodefault};
	__property System::UnicodeString DocumentTitle = {read=GetDocumentTitle};
	__property HRESULT LastErrorCode = {read=FLastErrorCode, nodefault};
	__property System::UnicodeString LocationURL = {read=GetLocationURL};
	__property double SizeRatio = {read=FSizeRatio, write=SetSizeRatio};
	__property bool WebViewCreated = {read=GetWebViewCreated, nodefault};
	__property double ZoomFactor = {read=GetZoomFactor, write=SetZoomFactor};
	__property bool BuiltInErrorPageEnabled = {read=GetBuiltInErrorPageEnabled, write=SetBuiltInErrorPageEnabled, nodefault};
	__property bool DefaultContextMenusEnabled = {read=GetDefaultContextMenusEnabled, write=SetDefaultContextMenusEnabled, nodefault};
	__property bool DefaultScriptDialogsEnabled = {read=GetDefaultScriptDialogsEnabled, write=SetDefaultScriptDialogsEnabled, nodefault};
	__property bool DevToolsEnabled = {read=GetDevToolsEnabled, write=SetDevToolsEnabled, nodefault};
	__property bool ScriptEnabled = {read=GetScriptEnabled, write=SetScriptEnabled, nodefault};
	__property bool StatusBarEnabled = {read=GetStatusBarEnabled, write=SetStatusBarEnabled, nodefault};
	__property bool WebMessageEnabled = {read=GetWebMessageEnabled, write=SetWebMessageEnabled, nodefault};
	__property bool ZoomControlEnabled = {read=GetZoomControlEnabled, write=SetZoomControlEnabled, nodefault};
	__property TWebViewStatusEvent OnCapturePreviewCompleted = {read=FOnCapturePreviewCompleted, write=FOnCapturePreviewCompleted};
	__property TContainsFullScreenElementChangedEvent OnContainsFullScreenElementChanged = {read=FOnContainsFullScreenElementChanged, write=FOnContainsFullScreenElementChanged};
	__property TContentLoadingEvent OnContentLoading = {read=FOnContentLoading, write=FOnContentLoading};
	__property TWebViewStatusEvent OnCreateWebViewCompleted = {read=FOnCreateWebViewCompleted, write=FOnCreateWebViewCompleted};
	__property TDevToolsProtocolEventReceivedEvent OnDevToolsProtocolEventReceived = {read=FOnDevToolsProtocolEventReceived, write=FOnDevToolsProtocolEventReceived};
	__property TDocumentTitleChangedEvent OnDocumentTitleChanged = {read=FOnDocumentTitleChanged, write=FOnDocumentTitleChanged};
	__property TExecuteScriptEvent OnExecuteScript = {read=FOnExecuteScript, write=FOnExecuteScript};
	__property TNavigationStartingEvent OnFrameNavigationStarting = {read=FOnFrameNavigationStarting, write=FOnFrameNavigationStarting};
	__property TNavigationCompletedEvent OnFrameNavigationCompleted = {read=FOnFrameNavigationCompleted, write=FOnFrameNavigationCompleted};
	__property THistoryChangedEvent OnHistoryChanged = {read=FOnHistoryChanged, write=FOnHistoryChanged};
	__property TNavigationStartingEvent OnNavigationStarting = {read=FOnNavigationStarting, write=FOnNavigationStarting};
	__property TNavigationCompletedEvent OnNavigationCompleted = {read=FOnNavigationCompleted, write=FOnNavigationCompleted};
	__property TNewWindowRequestedEvent OnNewWindowRequested = {read=FOnNewWindowRequested, write=FOnNewWindowRequested};
	__property TPermissionRequestedEvent OnPermissionRequested = {read=FOnPermissionRequested, write=FOnPermissionRequested};
	__property TProcessFailedEvent OnProcessFailed = {read=FOnProcessFailed, write=FOnProcessFailed};
	__property TScriptDialogOpeningEvent OnScriptDialogOpening = {read=FOnScriptDialogOpening, write=FOnScriptDialogOpening};
	__property TSourceChangedEvent OnSourceChanged = {read=FOnSourceChanged, write=FOnSourceChanged};
	__property TWebMessageReceivedEvent OnWebMessageReceived = {read=FOnWebMessageReceived, write=FOnWebMessageReceived};
	__property TWebResourceRequestedEvent OnWebResourceRequested = {read=FOnWebResourceRequested, write=FOnWebResourceRequested};
	__property System::Classes::TNotifyEvent OnWindowCloseRequested = {read=FOnWindowCloseRequested, write=FOnWindowCloseRequested};
	__property TZoomFactorChangedEvent OnZoomFactorChanged = {read=FOnZoomFactorChanged, write=FOnZoomFactorChanged};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomEdgeBrowser(HWND ParentWindow) : Vcl::Controls::TWinControl(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TEdgeBrowser : public TCustomEdgeBrowser
{
	typedef TCustomEdgeBrowser inherited;
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property TabOrder = {default=-1};
	__property TabStop = {default=0};
	__property OnEnter;
	__property OnExit;
	__property BrowserExecutableFolder = {default=0};
	__property UserDataFolder = {default=0};
	__property OnCapturePreviewCompleted;
	__property OnContainsFullScreenElementChanged;
	__property OnContentLoading;
	__property OnCreateWebViewCompleted;
	__property OnDevToolsProtocolEventReceived;
	__property OnDocumentTitleChanged;
	__property OnExecuteScript;
	__property OnFrameNavigationStarting;
	__property OnFrameNavigationCompleted;
	__property OnHistoryChanged;
	__property OnNavigationStarting;
	__property OnNavigationCompleted;
	__property OnNewWindowRequested;
	__property OnPermissionRequested;
	__property OnProcessFailed;
	__property OnScriptDialogOpening;
	__property OnSourceChanged;
	__property OnWebMessageReceived;
	__property OnWebResourceRequested;
	__property OnWindowCloseRequested;
	__property OnZoomFactorChanged;
public:
	/* TCustomEdgeBrowser.Create */ inline __fastcall virtual TEdgeBrowser(System::Classes::TComponent* AOwner) : TCustomEdgeBrowser(AOwner) { }
	/* TCustomEdgeBrowser.Destroy */ inline __fastcall virtual ~TEdgeBrowser() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TEdgeBrowser(HWND ParentWindow) : TCustomEdgeBrowser(ParentWindow) { }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EEdgeError : public System::Win::Comobj::EOleSysError
{
	typedef System::Win::Comobj::EOleSysError inherited;
	
public:
	__fastcall EEdgeError(const System::UnicodeString Message, HRESULT ErrorCode);
	__fastcall EEdgeError(System::PResStringRec ResStringRec, HRESULT ErrorCode);
public:
	/* Exception.CreateFmt */ inline __fastcall EEdgeError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Win::Comobj::EOleSysError(Msg, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EEdgeError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Win::Comobj::EOleSysError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EEdgeError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Win::Comobj::EOleSysError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EEdgeError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Win::Comobj::EOleSysError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EEdgeError(NativeUInt Ident, int AHelpContext)/* overload */ : System::Win::Comobj::EOleSysError(Ident, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EEdgeError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Win::Comobj::EOleSysError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EEdgeError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Win::Comobj::EOleSysError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EEdgeError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE HRESULT __stdcall CreateCoreWebView2EnvironmentWithOptions(System::WideChar * BrowserExecutableFolder, System::WideChar * UserDataFolder, const Winapi::Webview2::_di_ICoreWebView2EnvironmentOptions EnvironmentOptions, const Winapi::Webview2::_di_ICoreWebView2CreateCoreWebView2EnvironmentCompletedHandler Environment_created_handler);
extern DELPHI_PACKAGE HRESULT __stdcall CreateCoreWebView2Environment(const Winapi::Webview2::_di_ICoreWebView2CreateCoreWebView2EnvironmentCompletedHandler Environment_created_handler);
extern DELPHI_PACKAGE HRESULT __stdcall GetCoreWebView2BrowserVersionString(System::WideChar * BrowserExecutableFolder, System::WideChar * &VersionInfo);
extern DELPHI_PACKAGE HRESULT __stdcall CompareBrowserVersions(System::WideChar * Version1, System::WideChar * Version2, int &AResult);
}	/* namespace Edge */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_EDGE)
using namespace Vcl::Edge;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_EdgeHPP
