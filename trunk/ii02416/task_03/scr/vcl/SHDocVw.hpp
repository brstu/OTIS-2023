// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'SHDocVw.pas' rev: 35.00 (Windows)

#ifndef ShdocvwHPP
#define ShdocvwHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <System.Variants.hpp>
#include <System.Win.StdVCL.hpp>
#include <System.Generics.Collections.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.OleCtrls.hpp>
#include <Vcl.OleServer.hpp>
#include <Winapi.ActiveX.hpp>
#include <Winapi.Messages.hpp>
#include <Winapi.Mshtmhst.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Edge.hpp>
#include <Winapi.WebView2.hpp>
#include <System.SysUtils.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Menus.hpp>

//-- user supplied -----------------------------------------------------------

namespace Shdocvw
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IWebBrowser;
typedef System::DelphiInterface<IWebBrowser> _di_IWebBrowser;
__interface DELPHIINTERFACE IWebBrowser2;
typedef System::DelphiInterface<IWebBrowser2> _di_IWebBrowser2;
__interface DELPHIINTERFACE IShellWindows;
typedef System::DelphiInterface<IShellWindows> _di_IShellWindows;
__interface DELPHIINTERFACE IShellUIHelper6;
typedef System::DelphiInterface<IShellUIHelper6> _di_IShellUIHelper6;
__interface DELPHIINTERFACE IShellNameSpace;
typedef System::DelphiInterface<IShellNameSpace> _di_IShellNameSpace;
__interface DELPHIINTERFACE IScriptErrorList;
typedef System::DelphiInterface<IScriptErrorList> _di_IScriptErrorList;
__dispinterface IWebBrowserDisp;
typedef System::DelphiInterface<IWebBrowserDisp> _di_IWebBrowserDisp;
__dispinterface DWebBrowserEvents;
typedef System::DelphiInterface<DWebBrowserEvents> _di_DWebBrowserEvents;
__interface DELPHIINTERFACE IWebBrowserApp;
typedef System::DelphiInterface<IWebBrowserApp> _di_IWebBrowserApp;
__dispinterface IWebBrowserAppDisp;
typedef System::DelphiInterface<IWebBrowserAppDisp> _di_IWebBrowserAppDisp;
__dispinterface IWebBrowser2Disp;
typedef System::DelphiInterface<IWebBrowser2Disp> _di_IWebBrowser2Disp;
__dispinterface DWebBrowserEvents2;
typedef System::DelphiInterface<DWebBrowserEvents2> _di_DWebBrowserEvents2;
__dispinterface DShellWindowsEvents;
typedef System::DelphiInterface<DShellWindowsEvents> _di_DShellWindowsEvents;
__dispinterface IShellWindowsDisp;
typedef System::DelphiInterface<IShellWindowsDisp> _di_IShellWindowsDisp;
__interface DELPHIINTERFACE IShellUIHelper;
typedef System::DelphiInterface<IShellUIHelper> _di_IShellUIHelper;
__dispinterface IShellUIHelperDisp;
typedef System::DelphiInterface<IShellUIHelperDisp> _di_IShellUIHelperDisp;
__interface DELPHIINTERFACE IShellUIHelper2;
typedef System::DelphiInterface<IShellUIHelper2> _di_IShellUIHelper2;
__dispinterface IShellUIHelper2Disp;
typedef System::DelphiInterface<IShellUIHelper2Disp> _di_IShellUIHelper2Disp;
__interface DELPHIINTERFACE IShellUIHelper3;
typedef System::DelphiInterface<IShellUIHelper3> _di_IShellUIHelper3;
__dispinterface IShellUIHelper3Disp;
typedef System::DelphiInterface<IShellUIHelper3Disp> _di_IShellUIHelper3Disp;
__interface DELPHIINTERFACE IShellUIHelper4;
typedef System::DelphiInterface<IShellUIHelper4> _di_IShellUIHelper4;
__dispinterface IShellUIHelper4Disp;
typedef System::DelphiInterface<IShellUIHelper4Disp> _di_IShellUIHelper4Disp;
__interface DELPHIINTERFACE IShellUIHelper5;
typedef System::DelphiInterface<IShellUIHelper5> _di_IShellUIHelper5;
__dispinterface IShellUIHelper5Disp;
typedef System::DelphiInterface<IShellUIHelper5Disp> _di_IShellUIHelper5Disp;
__dispinterface IShellUIHelper6Disp;
typedef System::DelphiInterface<IShellUIHelper6Disp> _di_IShellUIHelper6Disp;
__dispinterface DShellNameSpaceEvents;
typedef System::DelphiInterface<DShellNameSpaceEvents> _di_DShellNameSpaceEvents;
__interface DELPHIINTERFACE IShellFavoritesNameSpace;
typedef System::DelphiInterface<IShellFavoritesNameSpace> _di_IShellFavoritesNameSpace;
__dispinterface IShellFavoritesNameSpaceDisp;
typedef System::DelphiInterface<IShellFavoritesNameSpaceDisp> _di_IShellFavoritesNameSpaceDisp;
__dispinterface IShellNameSpaceDisp;
typedef System::DelphiInterface<IShellNameSpaceDisp> _di_IShellNameSpaceDisp;
__dispinterface IScriptErrorListDisp;
typedef System::DelphiInterface<IScriptErrorListDisp> _di_IScriptErrorListDisp;
class DELPHICLASS TWebBrowser;
struct TWebBrowserHelper /* Helper for class 'TWebBrowser*' */;
class DELPHICLASS CoInternetExplorer;
class DELPHICLASS TInternetExplorer;
class DELPHICLASS CoInternetExplorerMedium;
class DELPHICLASS TInternetExplorerMedium;
class DELPHICLASS CoShellBrowserWindow;
class DELPHICLASS CoShellWindows;
class DELPHICLASS TShellWindows;
class DELPHICLASS CoShellUIHelper;
class DELPHICLASS TShellUIHelper;
class DELPHICLASS CoShellNameSpace;
class DELPHICLASS TShellNameSpace;
class DELPHICLASS CoCScriptErrorList;
//-- type declarations -------------------------------------------------------
typedef Winapi::Activex::TOleEnum BrowserNavConstants;

typedef Winapi::Activex::TOleEnum RefreshConstants;

typedef Winapi::Activex::TOleEnum CommandStateChangeConstants;

typedef Winapi::Activex::TOleEnum OLECMDID;

typedef Winapi::Activex::TOleEnum OLECMDF;

typedef Winapi::Activex::TOleEnum OLECMDEXECOPT;

typedef Winapi::Activex::TOleEnum tagREADYSTATE;

typedef Winapi::Activex::TOleEnum SecureLockIconConstants;

typedef Winapi::Activex::TOleEnum NewProcessCauseConstants;

typedef Winapi::Activex::TOleEnum ShellWindowTypeConstants;

typedef Winapi::Activex::TOleEnum ShellWindowFindWindowOptions;

typedef _di_IWebBrowser WebBrowser_V1;

typedef _di_IWebBrowser2 WebBrowser;

typedef _di_IWebBrowser2 InternetExplorer;

typedef _di_IWebBrowser2 InternetExplorerMedium;

typedef _di_IWebBrowser2 ShellBrowserWindow;

typedef _di_IShellWindows ShellWindows;

typedef _di_IShellUIHelper6 ShellUIHelper;

typedef _di_IShellNameSpace ShellNameSpace;

typedef _di_IScriptErrorList CScriptErrorList;

typedef System::OleVariant *POleVariant1;

__interface  INTERFACE_UUID("{EAB22AC1-30C1-11CF-A7EB-0000C05BAE0B}") IWebBrowser  : public IDispatch 
{
	virtual HRESULT __safecall GoBack() = 0 ;
	virtual HRESULT __safecall GoForward() = 0 ;
	virtual HRESULT __safecall GoHome() = 0 ;
	virtual HRESULT __safecall GoSearch() = 0 ;
	virtual HRESULT __safecall Navigate(const System::WideString URL, const System::OleVariant &Flags, const System::OleVariant &TargetFrameName, const System::OleVariant &PostData, const System::OleVariant &Headers) = 0 ;
	virtual HRESULT __safecall Refresh() = 0 ;
	virtual HRESULT __safecall Refresh2(const System::OleVariant &Level) = 0 ;
	virtual HRESULT __safecall Stop() = 0 ;
	virtual HRESULT __safecall Get_Application(_di_IDispatch &__Get_Application_result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IDispatch &__Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_Container(_di_IDispatch &__Get_Container_result) = 0 ;
	virtual HRESULT __safecall Get_Document(_di_IDispatch &__Get_Document_result) = 0 ;
	virtual HRESULT __safecall Get_TopLevelContainer(System::WordBool &__Get_TopLevelContainer_result) = 0 ;
	virtual HRESULT __safecall Get_type_(System::WideString &__Get_type__result) = 0 ;
	virtual HRESULT __safecall Get_Left(int &__Get_Left_result) = 0 ;
	virtual HRESULT __safecall Set_Left(int pl) = 0 ;
	virtual HRESULT __safecall Get_Top(int &__Get_Top_result) = 0 ;
	virtual HRESULT __safecall Set_Top(int pl) = 0 ;
	virtual HRESULT __safecall Get_Width(int &__Get_Width_result) = 0 ;
	virtual HRESULT __safecall Set_Width(int pl) = 0 ;
	virtual HRESULT __safecall Get_Height(int &__Get_Height_result) = 0 ;
	virtual HRESULT __safecall Set_Height(int pl) = 0 ;
	virtual HRESULT __safecall Get_LocationName(System::WideString &__Get_LocationName_result) = 0 ;
	virtual HRESULT __safecall Get_LocationURL(System::WideString &__Get_LocationURL_result) = 0 ;
	virtual HRESULT __safecall Get_Busy(System::WordBool &__Get_Busy_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Application() { _di_IDispatch __r; HRESULT __hr = Get_Application(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property _di_IDispatch Application = {read=_scw_Get_Application};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Parent() { _di_IDispatch __r; HRESULT __hr = Get_Parent(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property _di_IDispatch Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Container() { _di_IDispatch __r; HRESULT __hr = Get_Container(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property _di_IDispatch Container = {read=_scw_Get_Container};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_Document() { _di_IDispatch __r; HRESULT __hr = Get_Document(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property _di_IDispatch Document = {read=_scw_Get_Document};
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::WordBool _scw_Get_TopLevelContainer() { System::WordBool __r; HRESULT __hr = Get_TopLevelContainer(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property System::WordBool TopLevelContainer = {read=_scw_Get_TopLevelContainer};
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::WideString _scw_Get_type_() { System::WideString __r; HRESULT __hr = Get_type_(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property System::WideString type_ = {read=_scw_Get_type_};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Left() { int __r; HRESULT __hr = Get_Left(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property int Left = {read=_scw_Get_Left, write=Set_Left};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Top() { int __r; HRESULT __hr = Get_Top(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property int Top = {read=_scw_Get_Top, write=Set_Top};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Width() { int __r; HRESULT __hr = Get_Width(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property int Width = {read=_scw_Get_Width, write=Set_Width};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Height() { int __r; HRESULT __hr = Get_Height(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property int Height = {read=_scw_Get_Height, write=Set_Height};
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::WideString _scw_Get_LocationName() { System::WideString __r; HRESULT __hr = Get_LocationName(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property System::WideString LocationName = {read=_scw_Get_LocationName};
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::WideString _scw_Get_LocationURL() { System::WideString __r; HRESULT __hr = Get_LocationURL(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property System::WideString LocationURL = {read=_scw_Get_LocationURL};
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::WordBool _scw_Get_Busy() { System::WordBool __r; HRESULT __hr = Get_Busy(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property System::WordBool Busy = {read=_scw_Get_Busy};
};

__dispinterface  INTERFACE_UUID("{EAB22AC1-30C1-11CF-A7EB-0000C05BAE0B}") IWebBrowserDisp  : public IDispatch 
{
	
};

__dispinterface  INTERFACE_UUID("{EAB22AC2-30C1-11CF-A7EB-0000C05BAE0B}") DWebBrowserEvents  : public IDispatch 
{
	
};

__interface  INTERFACE_UUID("{0002DF05-0000-0000-C000-000000000046}") IWebBrowserApp  : public IWebBrowser 
{
	virtual HRESULT __safecall Quit() = 0 ;
	virtual HRESULT __safecall ClientToWindow(int &pcx, int &pcy) = 0 ;
	virtual HRESULT __safecall PutProperty(const System::WideString Property_, System::OleVariant vtValue) = 0 ;
	virtual HRESULT __safecall GetProperty(const System::WideString Property_, System::OleVariant &__GetProperty_result) = 0 ;
	virtual HRESULT __safecall Get_Name(System::WideString &__Get_Name_result) = 0 ;
	virtual HRESULT __safecall Get_HWND(HWND &__Get_HWND_result) = 0 ;
	virtual HRESULT __safecall Get_FullName(System::WideString &__Get_FullName_result) = 0 ;
	virtual HRESULT __safecall Get_Path(System::WideString &__Get_Path_result) = 0 ;
	virtual HRESULT __safecall Get_Visible(System::WordBool &__Get_Visible_result) = 0 ;
	virtual HRESULT __safecall Set_Visible(System::WordBool pBool) = 0 ;
	virtual HRESULT __safecall Get_StatusBar(System::WordBool &__Get_StatusBar_result) = 0 ;
	virtual HRESULT __safecall Set_StatusBar(System::WordBool pBool) = 0 ;
	virtual HRESULT __safecall Get_StatusText(System::WideString &__Get_StatusText_result) = 0 ;
	virtual HRESULT __safecall Set_StatusText(const System::WideString StatusText) = 0 ;
	virtual HRESULT __safecall Get_ToolBar(int &__Get_ToolBar_result) = 0 ;
	virtual HRESULT __safecall Set_ToolBar(int Value) = 0 ;
	virtual HRESULT __safecall Get_MenuBar(System::WordBool &__Get_MenuBar_result) = 0 ;
	virtual HRESULT __safecall Set_MenuBar(System::WordBool Value) = 0 ;
	virtual HRESULT __safecall Get_FullScreen(System::WordBool &__Get_FullScreen_result) = 0 ;
	virtual HRESULT __safecall Set_FullScreen(System::WordBool pbFullScreen) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::WideString _scw_Get_Name() { System::WideString __r; HRESULT __hr = Get_Name(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property System::WideString Name = {read=_scw_Get_Name};
	#pragma option push -w-inl
	/* safecall wrapper */ inline HWND _scw_Get_HWND() { HWND __r; HRESULT __hr = Get_HWND(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property HWND HWnd = {read=_scw_Get_HWND};
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::WideString _scw_Get_FullName() { System::WideString __r; HRESULT __hr = Get_FullName(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property System::WideString FullName = {read=_scw_Get_FullName};
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::WideString _scw_Get_Path() { System::WideString __r; HRESULT __hr = Get_Path(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property System::WideString Path = {read=_scw_Get_Path};
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::WordBool _scw_Get_Visible() { System::WordBool __r; HRESULT __hr = Get_Visible(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property System::WordBool Visible = {read=_scw_Get_Visible, write=Set_Visible};
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::WordBool _scw_Get_StatusBar() { System::WordBool __r; HRESULT __hr = Get_StatusBar(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property System::WordBool StatusBar = {read=_scw_Get_StatusBar, write=Set_StatusBar};
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::WideString _scw_Get_StatusText() { System::WideString __r; HRESULT __hr = Get_StatusText(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property System::WideString StatusText = {read=_scw_Get_StatusText, write=Set_StatusText};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_ToolBar() { int __r; HRESULT __hr = Get_ToolBar(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property int ToolBar = {read=_scw_Get_ToolBar, write=Set_ToolBar};
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::WordBool _scw_Get_MenuBar() { System::WordBool __r; HRESULT __hr = Get_MenuBar(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property System::WordBool MenuBar = {read=_scw_Get_MenuBar, write=Set_MenuBar};
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::WordBool _scw_Get_FullScreen() { System::WordBool __r; HRESULT __hr = Get_FullScreen(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property System::WordBool FullScreen = {read=_scw_Get_FullScreen, write=Set_FullScreen};
};

__dispinterface  INTERFACE_UUID("{0002DF05-0000-0000-C000-000000000046}") IWebBrowserAppDisp  : public IDispatch 
{
	
};

__interface  INTERFACE_UUID("{D30C1661-CDAF-11D0-8A3E-00C04FC9E26E}") IWebBrowser2  : public IWebBrowserApp 
{
	virtual HRESULT __safecall Navigate2(const System::OleVariant &URL, const System::OleVariant &Flags, const System::OleVariant &TargetFrameName, const System::OleVariant &PostData, const System::OleVariant &Headers) = 0 ;
	virtual HRESULT __safecall QueryStatusWB(Winapi::Activex::TOleEnum cmdID, Winapi::Activex::TOleEnum &__QueryStatusWB_result) = 0 ;
	virtual HRESULT __safecall ExecWB(Winapi::Activex::TOleEnum cmdID, Winapi::Activex::TOleEnum cmdexecopt, const System::OleVariant &pvaIn, System::OleVariant &pvaOut) = 0 ;
	virtual HRESULT __safecall ShowBrowserBar(const System::OleVariant &pvaClsid, const System::OleVariant &pvarShow, const System::OleVariant &pvarSize) = 0 ;
	virtual HRESULT __safecall Get_ReadyState(Winapi::Activex::TOleEnum &__Get_ReadyState_result) = 0 ;
	virtual HRESULT __safecall Get_Offline(System::WordBool &__Get_Offline_result) = 0 ;
	virtual HRESULT __safecall Set_Offline(System::WordBool pbOffline) = 0 ;
	virtual HRESULT __safecall Get_Silent(System::WordBool &__Get_Silent_result) = 0 ;
	virtual HRESULT __safecall Set_Silent(System::WordBool pbSilent) = 0 ;
	virtual HRESULT __safecall Get_RegisterAsBrowser(System::WordBool &__Get_RegisterAsBrowser_result) = 0 ;
	virtual HRESULT __safecall Set_RegisterAsBrowser(System::WordBool pbRegister) = 0 ;
	virtual HRESULT __safecall Get_RegisterAsDropTarget(System::WordBool &__Get_RegisterAsDropTarget_result) = 0 ;
	virtual HRESULT __safecall Set_RegisterAsDropTarget(System::WordBool pbRegister) = 0 ;
	virtual HRESULT __safecall Get_TheaterMode(System::WordBool &__Get_TheaterMode_result) = 0 ;
	virtual HRESULT __safecall Set_TheaterMode(System::WordBool pbRegister) = 0 ;
	virtual HRESULT __safecall Get_AddressBar(System::WordBool &__Get_AddressBar_result) = 0 ;
	virtual HRESULT __safecall Set_AddressBar(System::WordBool Value) = 0 ;
	virtual HRESULT __safecall Get_Resizable(System::WordBool &__Get_Resizable_result) = 0 ;
	virtual HRESULT __safecall Set_Resizable(System::WordBool Value) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline Winapi::Activex::TOleEnum _scw_Get_ReadyState() { Winapi::Activex::TOleEnum __r; HRESULT __hr = Get_ReadyState(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property Winapi::Activex::TOleEnum ReadyState = {read=_scw_Get_ReadyState};
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::WordBool _scw_Get_Offline() { System::WordBool __r; HRESULT __hr = Get_Offline(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property System::WordBool Offline = {read=_scw_Get_Offline, write=Set_Offline};
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::WordBool _scw_Get_Silent() { System::WordBool __r; HRESULT __hr = Get_Silent(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property System::WordBool Silent = {read=_scw_Get_Silent, write=Set_Silent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::WordBool _scw_Get_RegisterAsBrowser() { System::WordBool __r; HRESULT __hr = Get_RegisterAsBrowser(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property System::WordBool RegisterAsBrowser = {read=_scw_Get_RegisterAsBrowser, write=Set_RegisterAsBrowser};
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::WordBool _scw_Get_RegisterAsDropTarget() { System::WordBool __r; HRESULT __hr = Get_RegisterAsDropTarget(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property System::WordBool RegisterAsDropTarget = {read=_scw_Get_RegisterAsDropTarget, write=Set_RegisterAsDropTarget};
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::WordBool _scw_Get_TheaterMode() { System::WordBool __r; HRESULT __hr = Get_TheaterMode(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property System::WordBool TheaterMode = {read=_scw_Get_TheaterMode, write=Set_TheaterMode};
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::WordBool _scw_Get_AddressBar() { System::WordBool __r; HRESULT __hr = Get_AddressBar(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property System::WordBool AddressBar = {read=_scw_Get_AddressBar, write=Set_AddressBar};
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::WordBool _scw_Get_Resizable() { System::WordBool __r; HRESULT __hr = Get_Resizable(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property System::WordBool Resizable = {read=_scw_Get_Resizable, write=Set_Resizable};
};

__dispinterface  INTERFACE_UUID("{D30C1661-CDAF-11D0-8A3E-00C04FC9E26E}") IWebBrowser2Disp  : public IDispatch 
{
	
};

__dispinterface  INTERFACE_UUID("{34A715A0-6587-11D0-924A-0020AFC7AC4D}") DWebBrowserEvents2  : public IDispatch 
{
	
};

__dispinterface  INTERFACE_UUID("{FE4106E0-399A-11D0-A48C-00A0C90A8F39}") DShellWindowsEvents  : public IDispatch 
{
	
};

__interface  INTERFACE_UUID("{85CB6900-4D95-11CF-960C-0080C7F4EE85}") IShellWindows  : public IDispatch 
{
	virtual HRESULT __safecall Get_Count(int &__Get_Count_result) = 0 ;
	virtual HRESULT __safecall Item(System::OleVariant index, _di_IDispatch &__Item_result) = 0 ;
	virtual HRESULT __safecall _NewEnum(System::_di_IInterface &___NewEnum_result) = 0 ;
	virtual HRESULT __safecall Register(const _di_IDispatch pid, int HWND, int swClass, /* out */ int &plCookie) = 0 ;
	virtual HRESULT __safecall RegisterPending(int lThreadId, const System::OleVariant &pvarloc, const System::OleVariant &pvarlocRoot, int swClass, /* out */ int &plCookie) = 0 ;
	virtual HRESULT __safecall Revoke(int lCookie) = 0 ;
	virtual HRESULT __safecall OnNavigate(int lCookie, const System::OleVariant &pvarloc) = 0 ;
	virtual HRESULT __safecall OnActivated(int lCookie, System::WordBool fActive) = 0 ;
	virtual HRESULT __safecall FindWindowSW(const System::OleVariant &pvarloc, const System::OleVariant &pvarlocRoot, int swClass, /* out */ int &pHWND, int swfwOptions, _di_IDispatch &__FindWindowSW_result) = 0 ;
	virtual HRESULT __safecall OnCreated(int lCookie, const System::_di_IInterface punk) = 0 ;
	virtual HRESULT __safecall ProcessAttachDetach(System::WordBool fAttach) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Count() { int __r; HRESULT __hr = Get_Count(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property int Count = {read=_scw_Get_Count};
};

__dispinterface  INTERFACE_UUID("{85CB6900-4D95-11CF-960C-0080C7F4EE85}") IShellWindowsDisp  : public IDispatch 
{
	
};

__interface  INTERFACE_UUID("{729FE2F8-1EA8-11D1-8F85-00C04FC2FBE1}") IShellUIHelper  : public IDispatch 
{
	virtual HRESULT __safecall ResetFirstBootMode() = 0 ;
	virtual HRESULT __safecall ResetSafeMode() = 0 ;
	virtual HRESULT __safecall RefreshOfflineDesktop() = 0 ;
	virtual HRESULT __safecall AddFavorite(const System::WideString URL, const System::OleVariant &Title) = 0 ;
	virtual HRESULT __safecall AddChannel(const System::WideString URL) = 0 ;
	virtual HRESULT __safecall AddDesktopComponent(const System::WideString URL, const System::WideString Type_, const System::OleVariant &Left, const System::OleVariant &Top, const System::OleVariant &Width, const System::OleVariant &Height) = 0 ;
	virtual HRESULT __safecall IsSubscribed(const System::WideString URL, System::WordBool &__IsSubscribed_result) = 0 ;
	virtual HRESULT __safecall NavigateAndFind(const System::WideString URL, const System::WideString strQuery, const System::OleVariant &varTargetFrame) = 0 ;
	virtual HRESULT __safecall ImportExportFavorites(System::WordBool fImport, const System::WideString strImpExpPath) = 0 ;
	virtual HRESULT __safecall AutoCompleteSaveForm(const System::OleVariant &Form) = 0 ;
	virtual HRESULT __safecall AutoScan(const System::WideString strSearch, const System::WideString strFailureUrl, const System::OleVariant &pvarTargetFrame) = 0 ;
	virtual HRESULT __safecall AutoCompleteAttach(const System::OleVariant &Reserved) = 0 ;
	virtual HRESULT __safecall ShowBrowserUI(const System::WideString bstrName, const System::OleVariant &pvarIn, System::OleVariant &__ShowBrowserUI_result) = 0 ;
};

__dispinterface  INTERFACE_UUID("{729FE2F8-1EA8-11D1-8F85-00C04FC2FBE1}") IShellUIHelperDisp  : public IDispatch 
{
	
};

__interface  INTERFACE_UUID("{A7FE6EDA-1932-4281-B881-87B31B8BC52C}") IShellUIHelper2  : public IShellUIHelper 
{
	virtual HRESULT __safecall AddSearchProvider(const System::WideString URL) = 0 ;
	virtual HRESULT __safecall RunOnceShown() = 0 ;
	virtual HRESULT __safecall SkipRunOnce() = 0 ;
	virtual HRESULT __safecall CustomizeSettings(System::WordBool fSQM, System::WordBool fPhishing, const System::WideString bstrLocale) = 0 ;
	virtual HRESULT __safecall SqmEnabled(System::WordBool &__SqmEnabled_result) = 0 ;
	virtual HRESULT __safecall PhishingEnabled(System::WordBool &__PhishingEnabled_result) = 0 ;
	virtual HRESULT __safecall BrandImageUri(System::WideString &__BrandImageUri_result) = 0 ;
	virtual HRESULT __safecall SkipTabsWelcome() = 0 ;
	virtual HRESULT __safecall DiagnoseConnection() = 0 ;
	virtual HRESULT __safecall CustomizeClearType(System::WordBool fSet) = 0 ;
	virtual HRESULT __safecall IsSearchProviderInstalled(const System::WideString URL, unsigned &__IsSearchProviderInstalled_result) = 0 ;
	virtual HRESULT __safecall IsSearchMigrated(System::WordBool &__IsSearchMigrated_result) = 0 ;
	virtual HRESULT __safecall DefaultSearchProvider(System::WideString &__DefaultSearchProvider_result) = 0 ;
	virtual HRESULT __safecall RunOnceRequiredSettingsComplete(System::WordBool fComplete) = 0 ;
	virtual HRESULT __safecall RunOnceHasShown(System::WordBool &__RunOnceHasShown_result) = 0 ;
	virtual HRESULT __safecall SearchGuideUrl(System::WideString &__SearchGuideUrl_result) = 0 ;
};

__dispinterface  INTERFACE_UUID("{A7FE6EDA-1932-4281-B881-87B31B8BC52C}") IShellUIHelper2Disp  : public IDispatch 
{
	
};

__interface  INTERFACE_UUID("{528DF2EC-D419-40BC-9B6D-DCDBF9C1B25D}") IShellUIHelper3  : public IShellUIHelper2 
{
	virtual HRESULT __safecall AddService(const System::WideString URL) = 0 ;
	virtual HRESULT __safecall IsServiceInstalled(const System::WideString URL, const System::WideString Verb, unsigned &__IsServiceInstalled_result) = 0 ;
	virtual HRESULT __safecall InPrivateFilteringEnabled(System::WordBool &__InPrivateFilteringEnabled_result) = 0 ;
	virtual HRESULT __safecall AddToFavoritesBar(const System::WideString URL, const System::WideString Title, const System::OleVariant &Type_) = 0 ;
	virtual HRESULT __safecall BuildNewTabPage() = 0 ;
	virtual HRESULT __safecall SetRecentlyClosedVisible(System::WordBool fVisible) = 0 ;
	virtual HRESULT __safecall SetActivitiesVisible(System::WordBool fVisible) = 0 ;
	virtual HRESULT __safecall ContentDiscoveryReset() = 0 ;
	virtual HRESULT __safecall IsSuggestedSitesEnabled(System::WordBool &__IsSuggestedSitesEnabled_result) = 0 ;
	virtual HRESULT __safecall EnableSuggestedSites(System::WordBool fEnable) = 0 ;
	virtual HRESULT __safecall NavigateToSuggestedSites(const System::WideString bstrRelativeUrl) = 0 ;
	virtual HRESULT __safecall ShowTabsHelp() = 0 ;
	virtual HRESULT __safecall ShowInPrivateHelp() = 0 ;
};

__dispinterface  INTERFACE_UUID("{528DF2EC-D419-40BC-9B6D-DCDBF9C1B25D}") IShellUIHelper3Disp  : public IDispatch 
{
	
};

__interface  INTERFACE_UUID("{B36E6A53-8073-499E-824C-D776330A333E}") IShellUIHelper4  : public IShellUIHelper3 
{
	virtual HRESULT __safecall msIsSiteMode(System::WordBool &__msIsSiteMode_result) = 0 ;
	virtual HRESULT __safecall msSiteModeShowThumbBar() = 0 ;
	virtual HRESULT __safecall msSiteModeAddThumbBarButton(const System::WideString bstrIconURL, const System::WideString bstrTooltip, System::OleVariant &__msSiteModeAddThumbBarButton_result) = 0 ;
	virtual HRESULT __safecall msSiteModeUpdateThumbBarButton(System::OleVariant ButtonID, System::WordBool fEnabled, System::WordBool fVisible) = 0 ;
	virtual HRESULT __safecall msSiteModeSetIconOverlay(const System::WideString IconUrl, const System::OleVariant &pvarDescription) = 0 ;
	virtual HRESULT __safecall msSiteModeClearIconOverlay() = 0 ;
	virtual HRESULT __safecall msAddSiteMode() = 0 ;
	virtual HRESULT __safecall msSiteModeCreateJumpList(const System::WideString bstrHeader) = 0 ;
	virtual HRESULT __safecall msSiteModeAddJumpListItem(const System::WideString bstrName, const System::WideString bstrActionUri, const System::WideString bstrIconUri, const System::OleVariant &pvarWindowType) = 0 ;
	virtual HRESULT __safecall msSiteModeClearJumpList() = 0 ;
	virtual HRESULT __safecall msSiteModeShowJumpList() = 0 ;
	virtual HRESULT __safecall msSiteModeAddButtonStyle(System::OleVariant uiButtonID, const System::WideString bstrIconURL, const System::WideString bstrTooltip, System::OleVariant &__msSiteModeAddButtonStyle_result) = 0 ;
	virtual HRESULT __safecall msSiteModeShowButtonStyle(System::OleVariant uiButtonID, System::OleVariant uiStyleID) = 0 ;
	virtual HRESULT __safecall msSiteModeActivate() = 0 ;
	virtual HRESULT __safecall msIsSiteModeFirstRun(System::WordBool fPreserveState, System::OleVariant &__msIsSiteModeFirstRun_result) = 0 ;
	virtual HRESULT __safecall msAddTrackingProtectionList(const System::WideString URL, const System::WideString bstrFilterName) = 0 ;
	virtual HRESULT __safecall msTrackingProtectionEnabled(System::WordBool &__msTrackingProtectionEnabled_result) = 0 ;
	virtual HRESULT __safecall msActiveXFilteringEnabled(System::WordBool &__msActiveXFilteringEnabled_result) = 0 ;
};

__dispinterface  INTERFACE_UUID("{B36E6A53-8073-499E-824C-D776330A333E}") IShellUIHelper4Disp  : public IDispatch 
{
	
};

__interface  INTERFACE_UUID("{A2A08B09-103D-4D3F-B91C-EA455CA82EFA}") IShellUIHelper5  : public IShellUIHelper4 
{
	virtual HRESULT __safecall msProvisionNetworks(const System::WideString bstrProvisioningXml, System::OleVariant &__msProvisionNetworks_result) = 0 ;
	virtual HRESULT __safecall msReportSafeUrl() = 0 ;
	virtual HRESULT __safecall msSiteModeRefreshBadge() = 0 ;
	virtual HRESULT __safecall msSiteModeClearBadge() = 0 ;
	virtual HRESULT __safecall msDiagnoseConnectionUILess() = 0 ;
	virtual HRESULT __safecall msLaunchNetworkClientHelp() = 0 ;
	virtual HRESULT __safecall msChangeDefaultBrowser(System::WordBool fChange) = 0 ;
};

__dispinterface  INTERFACE_UUID("{A2A08B09-103D-4D3F-B91C-EA455CA82EFA}") IShellUIHelper5Disp  : public IDispatch 
{
	
};

__interface  INTERFACE_UUID("{987A573E-46EE-4E89-96AB-DDF7F8FDC98C}") IShellUIHelper6  : public IShellUIHelper5 
{
	virtual HRESULT __safecall msStopPeriodicTileUpdate() = 0 ;
	virtual HRESULT __safecall msStartPeriodicTileUpdate(System::OleVariant pollingUris, System::OleVariant startTime, System::OleVariant uiUpdateRecurrence) = 0 ;
	virtual HRESULT __safecall msStartPeriodicTileUpdateBatch(System::OleVariant pollingUris, System::OleVariant startTime, System::OleVariant uiUpdateRecurrence) = 0 ;
	virtual HRESULT __safecall msClearTile() = 0 ;
	virtual HRESULT __safecall msEnableTileNotificationQueue(System::WordBool fChange) = 0 ;
	virtual HRESULT __safecall msPinnedSiteState(System::OleVariant &__msPinnedSiteState_result) = 0 ;
	virtual HRESULT __safecall msEnableTileNotificationQueueForSquare150x150(System::WordBool fChange) = 0 ;
	virtual HRESULT __safecall msEnableTileNotificationQueueForWide310x150(System::WordBool fChange) = 0 ;
	virtual HRESULT __safecall msEnableTileNotificationQueueForSquare310x310(System::WordBool fChange) = 0 ;
	virtual HRESULT __safecall msScheduledTileNotification(const System::WideString bstrNotificationXml, const System::WideString bstrNotificationId, const System::WideString bstrNotificationTag, System::OleVariant startTime, System::OleVariant expirationTime) = 0 ;
	virtual HRESULT __safecall msRemoveScheduledTileNotification(const System::WideString bstrNotificationId) = 0 ;
	virtual HRESULT __safecall msStartPeriodicBadgeUpdate(const System::WideString pollingUri, System::OleVariant startTime, System::OleVariant uiUpdateRecurrence) = 0 ;
	virtual HRESULT __safecall msStopPeriodicBadgeUpdate() = 0 ;
	virtual HRESULT __safecall msLaunchInternetOptions() = 0 ;
};

__dispinterface  INTERFACE_UUID("{987A573E-46EE-4E89-96AB-DDF7F8FDC98C}") IShellUIHelper6Disp  : public IDispatch 
{
	
};

__dispinterface  INTERFACE_UUID("{55136806-B2DE-11D1-B9F2-00A0C98BC547}") DShellNameSpaceEvents  : public IDispatch 
{
	
};

__interface  INTERFACE_UUID("{55136804-B2DE-11D1-B9F2-00A0C98BC547}") IShellFavoritesNameSpace  : public IDispatch 
{
	virtual HRESULT __safecall MoveSelectionUp() = 0 ;
	virtual HRESULT __safecall MoveSelectionDown() = 0 ;
	virtual HRESULT __safecall ResetSort() = 0 ;
	virtual HRESULT __safecall NewFolder() = 0 ;
	virtual HRESULT __safecall Synchronize() = 0 ;
	virtual HRESULT __safecall Import() = 0 ;
	virtual HRESULT __safecall Export() = 0 ;
	virtual HRESULT __safecall InvokeContextMenuCommand(const System::WideString strCommand) = 0 ;
	virtual HRESULT __safecall MoveSelectionTo() = 0 ;
	virtual HRESULT __safecall Get_SubscriptionsEnabled(System::WordBool &__Get_SubscriptionsEnabled_result) = 0 ;
	virtual HRESULT __safecall CreateSubscriptionForSelection(System::WordBool &__CreateSubscriptionForSelection_result) = 0 ;
	virtual HRESULT __safecall DeleteSubscriptionForSelection(System::WordBool &__DeleteSubscriptionForSelection_result) = 0 ;
	virtual HRESULT __safecall SetRoot(const System::WideString bstrFullPath) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::WordBool _scw_Get_SubscriptionsEnabled() { System::WordBool __r; HRESULT __hr = Get_SubscriptionsEnabled(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property System::WordBool SubscriptionsEnabled = {read=_scw_Get_SubscriptionsEnabled};
};

__dispinterface  INTERFACE_UUID("{55136804-B2DE-11D1-B9F2-00A0C98BC547}") IShellFavoritesNameSpaceDisp  : public IDispatch 
{
	
};

__interface  INTERFACE_UUID("{E572D3C9-37BE-4AE2-825D-D521763E3108}") IShellNameSpace  : public IShellFavoritesNameSpace 
{
	virtual HRESULT __safecall Get_EnumOptions(int &__Get_EnumOptions_result) = 0 ;
	virtual HRESULT __safecall Set_EnumOptions(int pgrfEnumFlags) = 0 ;
	virtual HRESULT __safecall Get_SelectedItem(_di_IDispatch &__Get_SelectedItem_result) = 0 ;
	virtual HRESULT __safecall Set_SelectedItem(const _di_IDispatch pItem) = 0 ;
	virtual HRESULT __safecall Get_Root(System::OleVariant &__Get_Root_result) = 0 ;
	virtual HRESULT __safecall Set_Root(System::OleVariant pvar) = 0 ;
	virtual HRESULT __safecall Get_Depth(int &__Get_Depth_result) = 0 ;
	virtual HRESULT __safecall Set_Depth(int piDepth) = 0 ;
	virtual HRESULT __safecall Get_Mode(unsigned &__Get_Mode_result) = 0 ;
	virtual HRESULT __safecall Set_Mode(unsigned puMode) = 0 ;
	virtual HRESULT __safecall Get_Flags(unsigned &__Get_Flags_result) = 0 ;
	virtual HRESULT __safecall Set_Flags(unsigned pdwFlags) = 0 ;
	virtual HRESULT __safecall Set_TVFlags(unsigned dwFlags) = 0 ;
	virtual HRESULT __safecall Get_TVFlags(unsigned &__Get_TVFlags_result) = 0 ;
	virtual HRESULT __safecall Get_Columns(System::WideString &__Get_Columns_result) = 0 ;
	virtual HRESULT __safecall Set_Columns(const System::WideString bstrColumns) = 0 ;
	virtual HRESULT __safecall Get_CountViewTypes(int &__Get_CountViewTypes_result) = 0 ;
	virtual HRESULT __safecall SetViewType(int iType) = 0 ;
	virtual HRESULT __safecall SelectedItems(_di_IDispatch &__SelectedItems_result) = 0 ;
	virtual HRESULT __safecall Expand(System::OleVariant var_, int iDepth) = 0 ;
	virtual HRESULT __safecall UnselectAll() = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_EnumOptions() { int __r; HRESULT __hr = Get_EnumOptions(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property int EnumOptions = {read=_scw_Get_EnumOptions, write=Set_EnumOptions};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IDispatch _scw_Get_SelectedItem() { _di_IDispatch __r; HRESULT __hr = Get_SelectedItem(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property _di_IDispatch SelectedItem = {read=_scw_Get_SelectedItem, write=Set_SelectedItem};
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::OleVariant _scw_Get_Root() { System::OleVariant __r; HRESULT __hr = Get_Root(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property System::OleVariant Root = {read=_scw_Get_Root, write=Set_Root};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Depth() { int __r; HRESULT __hr = Get_Depth(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property int Depth = {read=_scw_Get_Depth, write=Set_Depth};
	#pragma option push -w-inl
	/* safecall wrapper */ inline unsigned _scw_Get_Mode() { unsigned __r; HRESULT __hr = Get_Mode(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property unsigned Mode = {read=_scw_Get_Mode, write=Set_Mode};
	#pragma option push -w-inl
	/* safecall wrapper */ inline unsigned _scw_Get_Flags() { unsigned __r; HRESULT __hr = Get_Flags(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property unsigned Flags = {read=_scw_Get_Flags, write=Set_Flags};
	#pragma option push -w-inl
	/* safecall wrapper */ inline unsigned _scw_Get_TVFlags() { unsigned __r; HRESULT __hr = Get_TVFlags(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property unsigned TVFlags = {read=_scw_Get_TVFlags, write=Set_TVFlags};
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::WideString _scw_Get_Columns() { System::WideString __r; HRESULT __hr = Get_Columns(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property System::WideString Columns = {read=_scw_Get_Columns, write=Set_Columns};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_CountViewTypes() { int __r; HRESULT __hr = Get_CountViewTypes(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property int CountViewTypes = {read=_scw_Get_CountViewTypes};
};

__dispinterface  INTERFACE_UUID("{E572D3C9-37BE-4AE2-825D-D521763E3108}") IShellNameSpaceDisp  : public IDispatch 
{
	
};

__interface  INTERFACE_UUID("{F3470F24-15FD-11D2-BB2E-00805FF7EFCA}") IScriptErrorList  : public IDispatch 
{
	virtual HRESULT __safecall advanceError() = 0 ;
	virtual HRESULT __safecall retreatError() = 0 ;
	virtual HRESULT __safecall canAdvanceError(int &__canAdvanceError_result) = 0 ;
	virtual HRESULT __safecall canRetreatError(int &__canRetreatError_result) = 0 ;
	virtual HRESULT __safecall getErrorLine(int &__getErrorLine_result) = 0 ;
	virtual HRESULT __safecall getErrorChar(int &__getErrorChar_result) = 0 ;
	virtual HRESULT __safecall getErrorCode(int &__getErrorCode_result) = 0 ;
	virtual HRESULT __safecall getErrorMsg(System::WideString &__getErrorMsg_result) = 0 ;
	virtual HRESULT __safecall getErrorUrl(System::WideString &__getErrorUrl_result) = 0 ;
	virtual HRESULT __safecall getAlwaysShowLockState(int &__getAlwaysShowLockState_result) = 0 ;
	virtual HRESULT __safecall getDetailsPaneOpen(int &__getDetailsPaneOpen_result) = 0 ;
	virtual HRESULT __safecall setDetailsPaneOpen(int fDetailsPaneOpen) = 0 ;
	virtual HRESULT __safecall getPerErrorDisplay(int &__getPerErrorDisplay_result) = 0 ;
	virtual HRESULT __safecall setPerErrorDisplay(int fPerErrorDisplay) = 0 ;
};

__dispinterface  INTERFACE_UUID("{F3470F24-15FD-11D2-BB2E-00805FF7EFCA}") IScriptErrorListDisp  : public IDispatch 
{
	
};

typedef void __fastcall (__closure *TWebBrowserStatusTextChange)(System::TObject* ASender, const System::WideString Text);

typedef void __fastcall (__closure *TWebBrowserProgressChange)(System::TObject* ASender, int Progress, int ProgressMax);

typedef void __fastcall (__closure *TWebBrowserCommandStateChange)(System::TObject* ASender, int Command, System::WordBool Enable);

typedef void __fastcall (__closure *TWebBrowserTitleChange)(System::TObject* ASender, const System::WideString Text);

typedef void __fastcall (__closure *TWebBrowserPropertyChange)(System::TObject* ASender, const System::WideString szProperty);

typedef void __fastcall (__closure *TWebBrowserBeforeNavigate2)(System::TObject* ASender, const _di_IDispatch pDisp, const System::OleVariant &URL, const System::OleVariant &Flags, const System::OleVariant &TargetFrameName, const System::OleVariant &PostData, const System::OleVariant &Headers, System::WordBool &Cancel);

typedef void __fastcall (__closure *TWebBrowserNewWindow2)(System::TObject* ASender, _di_IDispatch &ppDisp, System::WordBool &Cancel);

typedef void __fastcall (__closure *TWebBrowserNavigateComplete2)(System::TObject* ASender, const _di_IDispatch pDisp, const System::OleVariant &URL);

typedef void __fastcall (__closure *TWebBrowserDocumentComplete)(System::TObject* ASender, const _di_IDispatch pDisp, const System::OleVariant &URL);

typedef void __fastcall (__closure *TWebBrowserOnVisible)(System::TObject* ASender, System::WordBool Visible);

typedef void __fastcall (__closure *TWebBrowserOnToolBar)(System::TObject* ASender, System::WordBool ToolBar);

typedef void __fastcall (__closure *TWebBrowserOnMenuBar)(System::TObject* ASender, System::WordBool MenuBar);

typedef void __fastcall (__closure *TWebBrowserOnStatusBar)(System::TObject* ASender, System::WordBool StatusBar);

typedef void __fastcall (__closure *TWebBrowserOnFullScreen)(System::TObject* ASender, System::WordBool FullScreen);

typedef void __fastcall (__closure *TWebBrowserOnTheaterMode)(System::TObject* ASender, System::WordBool TheaterMode);

typedef void __fastcall (__closure *TWebBrowserWindowSetResizable)(System::TObject* ASender, System::WordBool Resizable);

typedef void __fastcall (__closure *TWebBrowserWindowSetLeft)(System::TObject* ASender, int Left);

typedef void __fastcall (__closure *TWebBrowserWindowSetTop)(System::TObject* ASender, int Top);

typedef void __fastcall (__closure *TWebBrowserWindowSetWidth)(System::TObject* ASender, int Width);

typedef void __fastcall (__closure *TWebBrowserWindowSetHeight)(System::TObject* ASender, int Height);

typedef void __fastcall (__closure *TWebBrowserWindowClosing)(System::TObject* ASender, System::WordBool IsChildWindow, System::WordBool &Cancel);

typedef void __fastcall (__closure *TWebBrowserClientToHostWindow)(System::TObject* ASender, int &CX, int &CY);

typedef void __fastcall (__closure *TWebBrowserSetSecureLockIcon)(System::TObject* ASender, int SecureLockIcon);

typedef void __fastcall (__closure *TWebBrowserFileDownload)(System::TObject* ASender, System::WordBool ActiveDocument, System::WordBool &Cancel);

typedef void __fastcall (__closure *TWebBrowserNavigateError)(System::TObject* ASender, const _di_IDispatch pDisp, const System::OleVariant &URL, const System::OleVariant &Frame, const System::OleVariant &StatusCode, System::WordBool &Cancel);

typedef void __fastcall (__closure *TWebBrowserPrintTemplateInstantiation)(System::TObject* ASender, const _di_IDispatch pDisp);

typedef void __fastcall (__closure *TWebBrowserPrintTemplateTeardown)(System::TObject* ASender, const _di_IDispatch pDisp);

typedef void __fastcall (__closure *TWebBrowserUpdatePageStatus)(System::TObject* ASender, const _di_IDispatch pDisp, const System::OleVariant &nPage, const System::OleVariant &fDone);

typedef void __fastcall (__closure *TWebBrowserPrivacyImpactedStateChange)(System::TObject* ASender, System::WordBool bImpacted);

typedef void __fastcall (__closure *TWebBrowserNewWindow3)(System::TObject* ASender, _di_IDispatch &ppDisp, System::WordBool &Cancel, unsigned dwFlags, const System::WideString bstrUrlContext, const System::WideString bstrUrl);

typedef void __fastcall (__closure *TWebBrowserSetPhishingFilterStatus)(System::TObject* ASender, int PhishingFilterStatus);

typedef void __fastcall (__closure *TWebBrowserWindowStateChanged)(System::TObject* ASender, unsigned dwWindowStateFlags, unsigned dwValidFlagsMask);

typedef void __fastcall (__closure *TWebBrowserNewProcess)(System::TObject* ASender, int lCauseFlag, const _di_IDispatch pWB2, System::WordBool &Cancel);

typedef void __fastcall (__closure *TWebBrowserThirdPartyUrlBlocked)(System::TObject* ASender, const System::OleVariant &URL, unsigned dwCount);

typedef void __fastcall (__closure *TWebBrowserRedirectXDomainBlocked)(System::TObject* ASender, const _di_IDispatch pDisp, const System::OleVariant &StartURL, const System::OleVariant &RedirectURL, const System::OleVariant &Frame, const System::OleVariant &StatusCode);

typedef void __fastcall (__closure *TWebBrowserBeforeScriptExecute)(System::TObject* ASender, const _di_IDispatch pDispWindow);

typedef void __fastcall (__closure *TWebBrowserWebWorkerStarted)(System::TObject* ASender, unsigned dwUniqueID, const System::WideString bstrWorkerLabel);

typedef void __fastcall (__closure *TWebBrowserWebWorkerFinsihed)(System::TObject* ASender, unsigned dwUniqueID);

typedef void __fastcall (__closure *TWebBrowserShowScriptError)(System::TObject* ASender, const System::OleVariant &AErrorLine, const System::OleVariant &AErrorCharacter, const System::OleVariant &AErrorMessage, const System::OleVariant &AErrorCode, const System::OleVariant &AErrorUrl, System::OleVariant &AOut, bool &AHandled);

#pragma pack(push,4)
class PASCALIMPLEMENTATION TWebBrowser : public Vcl::Olectrls::TOleControl
{
	typedef Vcl::Olectrls::TOleControl inherited;
	
	
private:
	class DELPHICLASS TWinContainer;
	class PASCALIMPLEMENTATION TWinContainer : public Vcl::Controls::TWinControl
	{
		typedef Vcl::Controls::TWinControl inherited;
		
	protected:
		bool FCorner;
		HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Message);
	public:
		/* TWinControl.Create */ inline __fastcall virtual TWinContainer(System::Classes::TComponent* AOwner) : Vcl::Controls::TWinControl(AOwner) { }
		/* TWinControl.CreateParented */ inline __fastcall TWinContainer(HWND ParentWindow) : Vcl::Controls::TWinControl(ParentWindow) { }
		/* TWinControl.Destroy */ inline __fastcall virtual ~TWinContainer() { }
		
	};
	
	
	
public:
	enum DECLSPEC_DENUM TSelectedEngine : unsigned char { IEOnly, EdgeOnly, EdgeIfAvailable };
	
	enum DECLSPEC_DENUM TActiveEngine : unsigned char { None, NoneYet, IE, Edge };
	
	
private:
	int FLSM_CXHTHUMB;
	int FLSM_CYVTHUMB;
	Vcl::Stdctrls::TScrollBar* FVScrollBar;
	Vcl::Stdctrls::TScrollBar* FHScrollBar;
	TWinContainer* FVScrollBarContainer;
	TWinContainer* FHScrollBarContainer;
	TWinContainer* FScrollCornerContainer;
	Vcl::Controls::TWinControl* FScrollParent;
	HIDESBASE MESSAGE void __fastcall CMVisibleChanged(Winapi::Messages::TMessage &Message);
	void __fastcall InitStyledScrollBars();
	void __fastcall InitStyledScrollBar(TWinContainer* AScrollBar);
	bool __fastcall IsStyledScrollsAssigned();
	void __fastcall ResizeScrollBars();
	void __fastcall UpdateContainers(bool AVisibleChanged);
	void __fastcall VScrollChange(System::TObject* Sender);
	void __fastcall HScrollChange(System::TObject* Sender);
	HWND __fastcall GetIEHandle();
	void __fastcall DoDocumentComplete(System::TObject* Sender, const _di_IDispatch pDisp, const System::OleVariant &URL);
	void __fastcall DoNavigateComplete2(System::TObject* Sender, const _di_IDispatch pDisp, const System::OleVariant &URL);
	void __fastcall DoBeforeNavigate2(System::TObject* Sender, const _di_IDispatch pDisp, const System::OleVariant &URL, const System::OleVariant &Flags, const System::OleVariant &TargetFrameName, const System::OleVariant &PostData, const System::OleVariant &Headers, System::WordBool &Cancel);
	void __fastcall DoCommandStateChange(System::TObject* Sender, int Command, System::WordBool Enable);
	void __fastcall DoProgressChange(System::TObject* Sender, int Progress, int ProgressMax);
	
private:
	System::WideString FLastUrl;
	TWebBrowserStatusTextChange FOnStatusTextChange;
	TWebBrowserProgressChange FOnProgressChange;
	TWebBrowserCommandStateChange FOnCommandStateChange;
	System::Classes::TNotifyEvent FOnDownloadBegin;
	System::Classes::TNotifyEvent FOnDownloadComplete;
	TWebBrowserTitleChange FOnTitleChange;
	TWebBrowserPropertyChange FOnPropertyChange;
	TWebBrowserBeforeNavigate2 FOnBeforeNavigate2;
	TWebBrowserNewWindow2 FOnNewWindow2;
	TWebBrowserNavigateComplete2 FOnNavigateComplete2;
	TWebBrowserDocumentComplete FOnDocumentComplete;
	System::Classes::TNotifyEvent FOnQuit;
	TWebBrowserOnVisible FOnVisible;
	TWebBrowserOnToolBar FOnToolBar;
	TWebBrowserOnMenuBar FOnMenuBar;
	TWebBrowserOnStatusBar FOnStatusBar;
	TWebBrowserOnFullScreen FOnFullScreen;
	TWebBrowserOnTheaterMode FOnTheaterMode;
	TWebBrowserWindowSetResizable FOnWindowSetResizable;
	TWebBrowserWindowSetLeft FOnWindowSetLeft;
	TWebBrowserWindowSetTop FOnWindowSetTop;
	TWebBrowserWindowSetWidth FOnWindowSetWidth;
	TWebBrowserWindowSetHeight FOnWindowSetHeight;
	TWebBrowserWindowClosing FOnWindowClosing;
	TWebBrowserClientToHostWindow FOnClientToHostWindow;
	TWebBrowserSetSecureLockIcon FOnSetSecureLockIcon;
	TWebBrowserFileDownload FOnFileDownload;
	TWebBrowserNavigateError FOnNavigateError;
	TWebBrowserPrintTemplateInstantiation FOnPrintTemplateInstantiation;
	TWebBrowserPrintTemplateTeardown FOnPrintTemplateTeardown;
	TWebBrowserUpdatePageStatus FOnUpdatePageStatus;
	TWebBrowserPrivacyImpactedStateChange FOnPrivacyImpactedStateChange;
	TWebBrowserNewWindow3 FOnNewWindow3;
	TWebBrowserSetPhishingFilterStatus FOnSetPhishingFilterStatus;
	TWebBrowserWindowStateChanged FOnWindowStateChanged;
	TWebBrowserNewProcess FOnNewProcess;
	TWebBrowserThirdPartyUrlBlocked FOnThirdPartyUrlBlocked;
	TWebBrowserRedirectXDomainBlocked FOnRedirectXDomainBlocked;
	TWebBrowserBeforeScriptExecute FOnBeforeScriptExecute;
	TWebBrowserWebWorkerStarted FOnWebWorkerStarted;
	TWebBrowserWebWorkerFinsihed FOnWebWorkerFinsihed;
	TWebBrowserShowScriptError FOnShowScriptError;
	_di_IWebBrowser2 FIEIntf;
	Vcl::Edge::TEdgeBrowser* FEdge;
	bool FEdgeBusy;
	Winapi::Activex::TOleEnum FEdgeReadyState;
	TSelectedEngine FSelectedEngine;
	TActiveEngine FActiveEngine;
	HRESULT __stdcall ShowContextMenu(const unsigned dwID, const System::Types::PPoint ppt, const System::_di_IInterface pcmdtReserved, const _di_IDispatch pdispReserved);
	HRESULT __stdcall GetHostInfo(Winapi::Mshtmhst::TDocHostUIInfo &pInfo);
	HRESULT __stdcall ShowUI(const unsigned dwID, const _di_IOleInPlaceActiveObject pActiveObject, const _di_IOleCommandTarget pCommandTarget, const _di_IOleInPlaceFrame pFrame, const _di_IOleInPlaceUIWindow pDoc);
	HRESULT __stdcall HideUI();
	HRESULT __stdcall UpdateUI();
	HIDESBASE HRESULT __stdcall EnableModeless(const System::LongBool fEnable);
	HRESULT __stdcall OnDocWindowActivate(const System::LongBool fActivate);
	HRESULT __stdcall OnFrameWindowActivate(const System::LongBool fActivate);
	HRESULT __stdcall ResizeBorder(const System::Types::PRect prcBorder, const _di_IOleInPlaceUIWindow pUIWindow, const System::LongBool fRameWindow);
	HRESULT __stdcall TranslateAccelerator(const Winapi::Windows::PMsg lpMsg, const System::PGUID pguidCmdGroup, const unsigned nCmdID);
	HRESULT __stdcall GetOptionKeyPath(System::WideChar * &pchKey, const unsigned dw);
	HRESULT __stdcall GetDropTarget(const _di_IDropTarget pDropTarget, /* out */ _di_IDropTarget &ppDropTarget);
	HRESULT __stdcall GetExternal(/* out */ _di_IDispatch &ppDispatch);
	HRESULT __stdcall TranslateUrl(const unsigned dwTranslate, const System::WideChar * pchURLIn, System::WideChar * &ppchURLOut);
	HRESULT __stdcall FilterDataObject(const _di_IDataObject pDO, /* out */ _di_IDataObject &ppDORet);
	HRESULT __stdcall ShowMessage(NativeUInt hwnd, System::WideChar * lpstrText, System::WideChar * lpstrCaption, int dwType, System::WideChar * lpstrHelpFile, int dwHelpContext, NativeInt &plResult);
	HRESULT __stdcall ShowHelp(NativeUInt hwnd, System::WideChar * pszHelpFile, int uCommand, int dwData, System::Types::TPoint ptMouse, _di_IDispatch &pDispachObjectHit);
	HRESULT __stdcall QueryStatus(System::PGUID CmdGroup, unsigned cCmds, Winapi::Activex::POleCmd prgCmds, Winapi::Activex::POleCmdText CmdText);
	HRESULT __stdcall Exec(System::PGUID CmdGroup, unsigned nCmdID, unsigned nCmdexecopt, const System::OleVariant &vaIn, System::OleVariant &vaOut);
	void __fastcall WebViewCreateWebViewCompleted(Vcl::Edge::TCustomEdgeBrowser* Sender, HRESULT AResult);
	void __fastcall WebViewHistoryChanged(Vcl::Edge::TCustomEdgeBrowser* Sender);
	void __fastcall WebViewDocumentTitleChanged(Vcl::Edge::TCustomEdgeBrowser* Sender, const System::UnicodeString ADocumentTitle);
	void __fastcall WebViewNavigationStarting(Vcl::Edge::TCustomEdgeBrowser* Sender, Vcl::Edge::TNavigationStartingEventArgs* Args);
	void __fastcall WebViewNavigationCompleted(Vcl::Edge::TCustomEdgeBrowser* Sender, bool IsSuccess, Winapi::Activex::TOleEnum WebErrorStatus);
	void __fastcall WebViewNewWindowRequested(Vcl::Edge::TCustomEdgeBrowser* Sender, Vcl::Edge::TNewWindowRequestedEventArgs* Args);
	void __fastcall WebViewScriptDialogOpening(Vcl::Edge::TCustomEdgeBrowser* Sender, Vcl::Edge::TScriptDialogOpeningEventArgs* Args);
	_di_IWebBrowser2 __fastcall GetControlInterface();
	
protected:
	HIDESBASE void __fastcall CreateControl();
	virtual void __fastcall InitControlData();
	System::WordBool __fastcall Get_AddressBar();
	_di_IDispatch __fastcall Get_Application();
	System::WordBool __fastcall Get_Busy();
	_di_IDispatch __fastcall Get_Container();
	_di_IDispatch __fastcall Get_Document();
	System::WideString __fastcall Get_FullName();
	System::WordBool __fastcall Get_FullScreen();
	HWND __fastcall Get_HWND();
	System::WideString __fastcall Get_LocationName();
	System::WideString __fastcall Get_LocationURL();
	System::WordBool __fastcall Get_MenuBar();
	System::WideString __fastcall Get_Name();
	System::WordBool __fastcall Get_Offline();
	_di_IDispatch __fastcall Get_Parent();
	System::WideString __fastcall Get_Path();
	Winapi::Activex::TOleEnum __fastcall Get_ReadyState();
	System::WordBool __fastcall Get_RegisterAsBrowser();
	System::WordBool __fastcall Get_RegisterAsDropTarget();
	System::WordBool __fastcall Get_Resizable();
	System::WordBool __fastcall Get_Silent();
	System::WordBool __fastcall Get_StatusBar();
	System::WideString __fastcall Get_StatusText();
	System::WordBool __fastcall Get_TheaterMode();
	int __fastcall Get_ToolBar();
	System::WordBool __fastcall Get_TopLevelContainer();
	System::WideString __fastcall Get_Type();
	System::WordBool __fastcall Get_Visible();
	void __fastcall Set_AddressBar(System::WordBool Value);
	void __fastcall Set_FullScreen(System::WordBool Value);
	void __fastcall Set_MenuBar(System::WordBool Value);
	void __fastcall Set_Offline(System::WordBool Value);
	void __fastcall Set_RegisterAsBrowser(System::WordBool Value);
	void __fastcall Set_RegisterAsDropTarget(System::WordBool Value);
	void __fastcall Set_Resizable(System::WordBool Value);
	void __fastcall Set_Silent(System::WordBool Value);
	void __fastcall Set_StatusBar(System::WordBool Value);
	void __fastcall Set_StatusText(System::WideString Value);
	void __fastcall Set_TheaterMode(System::WordBool Value);
	void __fastcall Set_ToolBar(int Value);
	void __fastcall Set_Visible(System::WordBool Value);
	virtual void __fastcall CreateWnd();
	virtual void __fastcall DestroyWnd();
	virtual void __fastcall InvokeEvent(int DispID, tagDISPPARAMS &Params);
	virtual void __fastcall SetParent(Vcl::Controls::TWinControl* AParent);
	virtual void __fastcall Loaded();
	MESSAGE void __fastcall WMTimer(Winapi::Messages::TWMTimer &Message);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	Vcl::Edge::TEdgeBrowser* __fastcall GetEdgeInterface();
	
public:
	__fastcall virtual TWebBrowser(System::Classes::TComponent* AOwner);
	virtual void __fastcall SetFocus();
	void __fastcall GoBack();
	void __fastcall GoForward();
	void __fastcall GoHome();
	void __fastcall GoSearch();
	void __fastcall Navigate(const System::WideString URL)/* overload */;
	void __fastcall Navigate(const System::WideString URL, const System::OleVariant &Flags)/* overload */;
	void __fastcall Navigate(const System::WideString URL, const System::OleVariant &Flags, const System::OleVariant &TargetFrameName)/* overload */;
	void __fastcall Navigate(const System::WideString URL, const System::OleVariant &Flags, const System::OleVariant &TargetFrameName, const System::OleVariant &PostData)/* overload */;
	void __fastcall Navigate(const System::WideString URL, const System::OleVariant &Flags, const System::OleVariant &TargetFrameName, const System::OleVariant &PostData, const System::OleVariant &Headers)/* overload */;
	HIDESBASE void __fastcall Refresh();
	void __fastcall Refresh2()/* overload */;
	void __fastcall Refresh2(const System::OleVariant &Level)/* overload */;
	void __fastcall Stop();
	void __fastcall Quit();
	void __fastcall ClientToWindow(int &pcx, int &pcy);
	void __fastcall PutProperty(const System::WideString Property_, const System::OleVariant &vtValue);
	HIDESBASE System::OleVariant __fastcall GetProperty(const System::WideString Property_);
	void __fastcall Navigate2(const System::OleVariant &URL)/* overload */;
	void __fastcall Navigate2(const System::OleVariant &URL, const System::OleVariant &Flags)/* overload */;
	void __fastcall Navigate2(const System::OleVariant &URL, const System::OleVariant &Flags, const System::OleVariant &TargetFrameName)/* overload */;
	void __fastcall Navigate2(const System::OleVariant &URL, const System::OleVariant &Flags, const System::OleVariant &TargetFrameName, const System::OleVariant &PostData)/* overload */;
	void __fastcall Navigate2(const System::OleVariant &URL, const System::OleVariant &Flags, const System::OleVariant &TargetFrameName, const System::OleVariant &PostData, const System::OleVariant &Headers)/* overload */;
	Winapi::Activex::TOleEnum __fastcall QueryStatusWB(Winapi::Activex::TOleEnum cmdID);
	void __fastcall ExecWB(Winapi::Activex::TOleEnum cmdID, Winapi::Activex::TOleEnum cmdexecopt)/* overload */;
	void __fastcall ExecWB(Winapi::Activex::TOleEnum cmdID, Winapi::Activex::TOleEnum cmdexecopt, const System::OleVariant &pvaIn)/* overload */;
	void __fastcall ExecWB(Winapi::Activex::TOleEnum cmdID, Winapi::Activex::TOleEnum cmdexecopt, const System::OleVariant &pvaIn, System::OleVariant &pvaOut)/* overload */;
	void __fastcall ShowBrowserBar(const System::OleVariant &pvaClsid)/* overload */;
	void __fastcall ShowBrowserBar(const System::OleVariant &pvaClsid, const System::OleVariant &pvarShow)/* overload */;
	void __fastcall ShowBrowserBar(const System::OleVariant &pvaClsid, const System::OleVariant &pvarShow, const System::OleVariant &pvarSize)/* overload */;
	__property TActiveEngine ActiveEngine = {read=FActiveEngine, nodefault};
	__property _di_IWebBrowser2 ControlInterface = {read=GetControlInterface};
	__property _di_IWebBrowser2 DefaultInterface = {read=GetControlInterface};
	__property _di_IDispatch Application = {read=Get_Application};
	__property _di_IDispatch Parent = {read=Get_Parent};
	__property _di_IDispatch Container = {read=Get_Container};
	__property _di_IDispatch Document = {read=Get_Document};
	__property System::WordBool TopLevelContainer = {read=Get_TopLevelContainer, nodefault};
	__property System::WideString type_ = {read=Get_Type};
	__property System::WideString LocationName = {read=Get_LocationName};
	__property System::WideString LocationURL = {read=Get_LocationURL};
	__property System::WordBool Busy = {read=Get_Busy, nodefault};
	__property System::WideString Name = {read=Get_Name};
#ifndef _WIN64
	__property HWND HWnd = {read=Get_HWND, nodefault};
#else /* _WIN64 */
	__property HWND HWnd = {read=Get_HWND};
#endif /* _WIN64 */
	__property System::WideString FullName = {read=Get_FullName};
	__property System::WideString Path = {read=Get_Path};
	__property Winapi::Activex::TOleEnum ReadyState = {read=Get_ReadyState, nodefault};
	
__published:
	__property Anchors = {default=3};
	__property TabStop = {default=1};
	__property Align = {default=0};
	__property DragCursor = {default=-12};
	__property DragMode = {default=0};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property StyleElements = {default=7};
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnStartDrag;
	__property TSelectedEngine SelectedEngine = {read=FSelectedEngine, write=FSelectedEngine, default=0};
	__property System::WordBool Visible = {read=Get_Visible, write=Set_Visible, stored=false, nodefault};
	__property System::WordBool StatusBar = {read=Get_StatusBar, write=Set_StatusBar, stored=false, nodefault};
	__property System::WideString StatusText = {read=Get_StatusText, write=Set_StatusText, stored=false};
	__property int ToolBar = {read=Get_ToolBar, write=Set_ToolBar, stored=false, nodefault};
	__property System::WordBool MenuBar = {read=Get_MenuBar, write=Set_MenuBar, stored=false, nodefault};
	__property System::WordBool FullScreen = {read=Get_FullScreen, write=Set_FullScreen, stored=false, nodefault};
	__property System::WordBool Offline = {read=Get_Offline, write=Set_Offline, stored=false, nodefault};
	__property System::WordBool Silent = {read=Get_Silent, write=Set_Silent, stored=false, nodefault};
	__property System::WordBool RegisterAsBrowser = {read=Get_RegisterAsBrowser, write=Set_RegisterAsBrowser, stored=false, nodefault};
	__property System::WordBool RegisterAsDropTarget = {read=Get_RegisterAsDropTarget, write=Set_RegisterAsDropTarget, stored=false, nodefault};
	__property System::WordBool TheaterMode = {read=Get_TheaterMode, write=Set_TheaterMode, stored=false, nodefault};
	__property System::WordBool AddressBar = {read=Get_AddressBar, write=Set_AddressBar, stored=false, nodefault};
	__property System::WordBool Resizable = {read=Get_Resizable, write=Set_Resizable, stored=false, nodefault};
	__property TWebBrowserStatusTextChange OnStatusTextChange = {read=FOnStatusTextChange, write=FOnStatusTextChange};
	__property TWebBrowserProgressChange OnProgressChange = {read=FOnProgressChange, write=FOnProgressChange};
	__property TWebBrowserCommandStateChange OnCommandStateChange = {read=FOnCommandStateChange, write=FOnCommandStateChange};
	__property System::Classes::TNotifyEvent OnDownloadBegin = {read=FOnDownloadBegin, write=FOnDownloadBegin};
	__property System::Classes::TNotifyEvent OnDownloadComplete = {read=FOnDownloadComplete, write=FOnDownloadComplete};
	__property TWebBrowserTitleChange OnTitleChange = {read=FOnTitleChange, write=FOnTitleChange};
	__property TWebBrowserPropertyChange OnPropertyChange = {read=FOnPropertyChange, write=FOnPropertyChange};
	__property TWebBrowserBeforeNavigate2 OnBeforeNavigate2 = {read=FOnBeforeNavigate2, write=FOnBeforeNavigate2};
	__property TWebBrowserNewWindow2 OnNewWindow2 = {read=FOnNewWindow2, write=FOnNewWindow2};
	__property TWebBrowserNavigateComplete2 OnNavigateComplete2 = {read=FOnNavigateComplete2, write=FOnNavigateComplete2};
	__property TWebBrowserDocumentComplete OnDocumentComplete = {read=FOnDocumentComplete, write=FOnDocumentComplete};
	__property System::Classes::TNotifyEvent OnQuit = {read=FOnQuit, write=FOnQuit};
	__property TWebBrowserOnVisible OnVisible = {read=FOnVisible, write=FOnVisible};
	__property TWebBrowserOnToolBar OnToolBar = {read=FOnToolBar, write=FOnToolBar};
	__property TWebBrowserOnMenuBar OnMenuBar = {read=FOnMenuBar, write=FOnMenuBar};
	__property TWebBrowserOnStatusBar OnStatusBar = {read=FOnStatusBar, write=FOnStatusBar};
	__property TWebBrowserOnFullScreen OnFullScreen = {read=FOnFullScreen, write=FOnFullScreen};
	__property TWebBrowserOnTheaterMode OnTheaterMode = {read=FOnTheaterMode, write=FOnTheaterMode};
	__property TWebBrowserWindowSetResizable OnWindowSetResizable = {read=FOnWindowSetResizable, write=FOnWindowSetResizable};
	__property TWebBrowserWindowSetLeft OnWindowSetLeft = {read=FOnWindowSetLeft, write=FOnWindowSetLeft};
	__property TWebBrowserWindowSetTop OnWindowSetTop = {read=FOnWindowSetTop, write=FOnWindowSetTop};
	__property TWebBrowserWindowSetWidth OnWindowSetWidth = {read=FOnWindowSetWidth, write=FOnWindowSetWidth};
	__property TWebBrowserWindowSetHeight OnWindowSetHeight = {read=FOnWindowSetHeight, write=FOnWindowSetHeight};
	__property TWebBrowserWindowClosing OnWindowClosing = {read=FOnWindowClosing, write=FOnWindowClosing};
	__property TWebBrowserClientToHostWindow OnClientToHostWindow = {read=FOnClientToHostWindow, write=FOnClientToHostWindow};
	__property TWebBrowserSetSecureLockIcon OnSetSecureLockIcon = {read=FOnSetSecureLockIcon, write=FOnSetSecureLockIcon};
	__property TWebBrowserFileDownload OnFileDownload = {read=FOnFileDownload, write=FOnFileDownload};
	__property TWebBrowserNavigateError OnNavigateError = {read=FOnNavigateError, write=FOnNavigateError};
	__property TWebBrowserPrintTemplateInstantiation OnPrintTemplateInstantiation = {read=FOnPrintTemplateInstantiation, write=FOnPrintTemplateInstantiation};
	__property TWebBrowserPrintTemplateTeardown OnPrintTemplateTeardown = {read=FOnPrintTemplateTeardown, write=FOnPrintTemplateTeardown};
	__property TWebBrowserUpdatePageStatus OnUpdatePageStatus = {read=FOnUpdatePageStatus, write=FOnUpdatePageStatus};
	__property TWebBrowserPrivacyImpactedStateChange OnPrivacyImpactedStateChange = {read=FOnPrivacyImpactedStateChange, write=FOnPrivacyImpactedStateChange};
	__property TWebBrowserNewWindow3 OnNewWindow3 = {read=FOnNewWindow3, write=FOnNewWindow3};
	__property TWebBrowserSetPhishingFilterStatus OnSetPhishingFilterStatus = {read=FOnSetPhishingFilterStatus, write=FOnSetPhishingFilterStatus};
	__property TWebBrowserWindowStateChanged OnWindowStateChanged = {read=FOnWindowStateChanged, write=FOnWindowStateChanged};
	__property TWebBrowserNewProcess OnNewProcess = {read=FOnNewProcess, write=FOnNewProcess};
	__property TWebBrowserThirdPartyUrlBlocked OnThirdPartyUrlBlocked = {read=FOnThirdPartyUrlBlocked, write=FOnThirdPartyUrlBlocked};
	__property TWebBrowserRedirectXDomainBlocked OnRedirectXDomainBlocked = {read=FOnRedirectXDomainBlocked, write=FOnRedirectXDomainBlocked};
	__property TWebBrowserBeforeScriptExecute OnBeforeScriptExecute = {read=FOnBeforeScriptExecute, write=FOnBeforeScriptExecute};
	__property TWebBrowserWebWorkerStarted OnWebWorkerStarted = {read=FOnWebWorkerStarted, write=FOnWebWorkerStarted};
	__property TWebBrowserWebWorkerFinsihed OnWebWorkerFinsihed = {read=FOnWebWorkerFinsihed, write=FOnWebWorkerFinsihed};
	__property TWebBrowserShowScriptError OnShowScriptError = {read=FOnShowScriptError, write=FOnShowScriptError};
public:
	/* TOleControl.Destroy */ inline __fastcall virtual ~TWebBrowser() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TWebBrowser(HWND ParentWindow) : Vcl::Olectrls::TOleControl(ParentWindow) { }
	
private:
	void *__IOleCommandTarget;	// IOleCommandTarget 
	void *__IDocHostShowUI;	// IDocHostShowUI 
	void *__IDocHostUIHandler;	// IDocHostUIHandler 
	
public:
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
	// {C4D244B0-D43E-11CF-893B-00AA00BDCE1A}
	operator _di_IDocHostShowUI()
	{
		_di_IDocHostShowUI intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IDocHostShowUI*(void) { return (IDocHostShowUI*)&__IDocHostShowUI; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {BD3F23C0-D43E-11CF-893B-00AA00BDCE1A}
	operator _di_IDocHostUIHandler()
	{
		_di_IDocHostUIHandler intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IDocHostUIHandler*(void) { return (IDocHostUIHandler*)&__IDocHostUIHandler; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION CoInternetExplorer : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__classmethod _di_IWebBrowser2 __fastcall Create();
	__classmethod _di_IWebBrowser2 __fastcall CreateRemote(const System::UnicodeString MachineName);
public:
	/* TObject.Create */ inline __fastcall CoInternetExplorer() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~CoInternetExplorer() { }
	
};

#pragma pack(pop)

typedef void __fastcall (__closure *TInternetExplorerStatusTextChange)(System::TObject* ASender, const System::WideString Text);

typedef void __fastcall (__closure *TInternetExplorerProgressChange)(System::TObject* ASender, int Progress, int ProgressMax);

typedef void __fastcall (__closure *TInternetExplorerCommandStateChange)(System::TObject* ASender, int Command, System::WordBool Enable);

typedef void __fastcall (__closure *TInternetExplorerTitleChange)(System::TObject* ASender, const System::WideString Text);

typedef void __fastcall (__closure *TInternetExplorerPropertyChange)(System::TObject* ASender, const System::WideString szProperty);

typedef void __fastcall (__closure *TInternetExplorerBeforeNavigate2)(System::TObject* ASender, const _di_IDispatch pDisp, const System::OleVariant &URL, const System::OleVariant &Flags, const System::OleVariant &TargetFrameName, const System::OleVariant &PostData, const System::OleVariant &Headers, System::WordBool &Cancel);

typedef void __fastcall (__closure *TInternetExplorerNewWindow2)(System::TObject* ASender, _di_IDispatch &ppDisp, System::WordBool &Cancel);

typedef void __fastcall (__closure *TInternetExplorerNavigateComplete2)(System::TObject* ASender, const _di_IDispatch pDisp, const System::OleVariant &URL);

typedef void __fastcall (__closure *TInternetExplorerDocumentComplete)(System::TObject* ASender, const _di_IDispatch pDisp, const System::OleVariant &URL);

typedef void __fastcall (__closure *TInternetExplorerOnVisible)(System::TObject* ASender, System::WordBool Visible);

typedef void __fastcall (__closure *TInternetExplorerOnToolBar)(System::TObject* ASender, System::WordBool ToolBar);

typedef void __fastcall (__closure *TInternetExplorerOnMenuBar)(System::TObject* ASender, System::WordBool MenuBar);

typedef void __fastcall (__closure *TInternetExplorerOnStatusBar)(System::TObject* ASender, System::WordBool StatusBar);

typedef void __fastcall (__closure *TInternetExplorerOnFullScreen)(System::TObject* ASender, System::WordBool FullScreen);

typedef void __fastcall (__closure *TInternetExplorerOnTheaterMode)(System::TObject* ASender, System::WordBool TheaterMode);

typedef void __fastcall (__closure *TInternetExplorerWindowSetResizable)(System::TObject* ASender, System::WordBool Resizable);

typedef void __fastcall (__closure *TInternetExplorerWindowSetLeft)(System::TObject* ASender, int Left);

typedef void __fastcall (__closure *TInternetExplorerWindowSetTop)(System::TObject* ASender, int Top);

typedef void __fastcall (__closure *TInternetExplorerWindowSetWidth)(System::TObject* ASender, int Width);

typedef void __fastcall (__closure *TInternetExplorerWindowSetHeight)(System::TObject* ASender, int Height);

typedef void __fastcall (__closure *TInternetExplorerWindowClosing)(System::TObject* ASender, System::WordBool IsChildWindow, System::WordBool &Cancel);

typedef void __fastcall (__closure *TInternetExplorerClientToHostWindow)(System::TObject* ASender, int &CX, int &CY);

typedef void __fastcall (__closure *TInternetExplorerSetSecureLockIcon)(System::TObject* ASender, int SecureLockIcon);

typedef void __fastcall (__closure *TInternetExplorerFileDownload)(System::TObject* ASender, System::WordBool ActiveDocument, System::WordBool &Cancel);

typedef void __fastcall (__closure *TInternetExplorerNavigateError)(System::TObject* ASender, const _di_IDispatch pDisp, const System::OleVariant &URL, const System::OleVariant &Frame, const System::OleVariant &StatusCode, System::WordBool &Cancel);

typedef void __fastcall (__closure *TInternetExplorerPrintTemplateInstantiation)(System::TObject* ASender, const _di_IDispatch pDisp);

typedef void __fastcall (__closure *TInternetExplorerPrintTemplateTeardown)(System::TObject* ASender, const _di_IDispatch pDisp);

typedef void __fastcall (__closure *TInternetExplorerUpdatePageStatus)(System::TObject* ASender, const _di_IDispatch pDisp, const System::OleVariant &nPage, const System::OleVariant &fDone);

typedef void __fastcall (__closure *TInternetExplorerPrivacyImpactedStateChange)(System::TObject* ASender, System::WordBool bImpacted);

typedef void __fastcall (__closure *TInternetExplorerNewWindow3)(System::TObject* ASender, _di_IDispatch &ppDisp, System::WordBool &Cancel, unsigned dwFlags, const System::WideString bstrUrlContext, const System::WideString bstrUrl);

typedef void __fastcall (__closure *TInternetExplorerSetPhishingFilterStatus)(System::TObject* ASender, int PhishingFilterStatus);

typedef void __fastcall (__closure *TInternetExplorerWindowStateChanged)(System::TObject* ASender, unsigned dwWindowStateFlags, unsigned dwValidFlagsMask);

typedef void __fastcall (__closure *TInternetExplorerNewProcess)(System::TObject* ASender, int lCauseFlag, const _di_IDispatch pWB2, System::WordBool &Cancel);

typedef void __fastcall (__closure *TInternetExplorerThirdPartyUrlBlocked)(System::TObject* ASender, const System::OleVariant &URL, unsigned dwCount);

typedef void __fastcall (__closure *TInternetExplorerRedirectXDomainBlocked)(System::TObject* ASender, const _di_IDispatch pDisp, const System::OleVariant &StartURL, const System::OleVariant &RedirectURL, const System::OleVariant &Frame, const System::OleVariant &StatusCode);

typedef void __fastcall (__closure *TInternetExplorerBeforeScriptExecute)(System::TObject* ASender, const _di_IDispatch pDispWindow);

typedef void __fastcall (__closure *TInternetExplorerWebWorkerStarted)(System::TObject* ASender, unsigned dwUniqueID, const System::WideString bstrWorkerLabel);

typedef void __fastcall (__closure *TInternetExplorerWebWorkerFinsihed)(System::TObject* ASender, unsigned dwUniqueID);

#pragma pack(push,4)
class PASCALIMPLEMENTATION TInternetExplorer : public Vcl::Oleserver::TOleServer
{
	typedef Vcl::Oleserver::TOleServer inherited;
	
private:
	TInternetExplorerStatusTextChange FOnStatusTextChange;
	TInternetExplorerProgressChange FOnProgressChange;
	TInternetExplorerCommandStateChange FOnCommandStateChange;
	System::Classes::TNotifyEvent FOnDownloadBegin;
	System::Classes::TNotifyEvent FOnDownloadComplete;
	TInternetExplorerTitleChange FOnTitleChange;
	TInternetExplorerPropertyChange FOnPropertyChange;
	TInternetExplorerBeforeNavigate2 FOnBeforeNavigate2;
	TInternetExplorerNewWindow2 FOnNewWindow2;
	TInternetExplorerNavigateComplete2 FOnNavigateComplete2;
	TInternetExplorerDocumentComplete FOnDocumentComplete;
	System::Classes::TNotifyEvent FOnQuit;
	TInternetExplorerOnVisible FOnVisible;
	TInternetExplorerOnToolBar FOnToolBar;
	TInternetExplorerOnMenuBar FOnMenuBar;
	TInternetExplorerOnStatusBar FOnStatusBar;
	TInternetExplorerOnFullScreen FOnFullScreen;
	TInternetExplorerOnTheaterMode FOnTheaterMode;
	TInternetExplorerWindowSetResizable FOnWindowSetResizable;
	TInternetExplorerWindowSetLeft FOnWindowSetLeft;
	TInternetExplorerWindowSetTop FOnWindowSetTop;
	TInternetExplorerWindowSetWidth FOnWindowSetWidth;
	TInternetExplorerWindowSetHeight FOnWindowSetHeight;
	TInternetExplorerWindowClosing FOnWindowClosing;
	TInternetExplorerClientToHostWindow FOnClientToHostWindow;
	TInternetExplorerSetSecureLockIcon FOnSetSecureLockIcon;
	TInternetExplorerFileDownload FOnFileDownload;
	TInternetExplorerNavigateError FOnNavigateError;
	TInternetExplorerPrintTemplateInstantiation FOnPrintTemplateInstantiation;
	TInternetExplorerPrintTemplateTeardown FOnPrintTemplateTeardown;
	TInternetExplorerUpdatePageStatus FOnUpdatePageStatus;
	TInternetExplorerPrivacyImpactedStateChange FOnPrivacyImpactedStateChange;
	TInternetExplorerNewWindow3 FOnNewWindow3;
	TInternetExplorerSetPhishingFilterStatus FOnSetPhishingFilterStatus;
	TInternetExplorerWindowStateChanged FOnWindowStateChanged;
	TInternetExplorerNewProcess FOnNewProcess;
	TInternetExplorerThirdPartyUrlBlocked FOnThirdPartyUrlBlocked;
	TInternetExplorerRedirectXDomainBlocked FOnRedirectXDomainBlocked;
	TInternetExplorerBeforeScriptExecute FOnBeforeScriptExecute;
	TInternetExplorerWebWorkerStarted FOnWebWorkerStarted;
	TInternetExplorerWebWorkerFinsihed FOnWebWorkerFinsihed;
	_di_IWebBrowser2 FIntf;
	_di_IWebBrowser2 __fastcall GetDefaultInterface();
	
protected:
	virtual void __fastcall InitServerData();
	virtual void __fastcall InvokeEvent(int DispID, System::Win::Comobj::TOleVariantArray &Params);
	_di_IDispatch __fastcall Get_Application();
	_di_IDispatch __fastcall Get_Parent();
	_di_IDispatch __fastcall Get_Container();
	_di_IDispatch __fastcall Get_Document();
	System::WordBool __fastcall Get_TopLevelContainer();
	System::WideString __fastcall Get_type_();
	int __fastcall Get_Left();
	void __fastcall Set_Left(int pl);
	int __fastcall Get_Top();
	void __fastcall Set_Top(int pl);
	int __fastcall Get_Width();
	void __fastcall Set_Width(int pl);
	int __fastcall Get_Height();
	void __fastcall Set_Height(int pl);
	System::WideString __fastcall Get_LocationName();
	System::WideString __fastcall Get_LocationURL();
	System::WordBool __fastcall Get_Busy();
	System::WideString __fastcall Get_Name();
	HWND __fastcall Get_HWND();
	System::WideString __fastcall Get_FullName();
	System::WideString __fastcall Get_Path();
	System::WordBool __fastcall Get_Visible();
	void __fastcall Set_Visible(System::WordBool pBool);
	System::WordBool __fastcall Get_StatusBar();
	void __fastcall Set_StatusBar(System::WordBool pBool);
	System::WideString __fastcall Get_StatusText();
	void __fastcall Set_StatusText(const System::WideString StatusText);
	int __fastcall Get_ToolBar();
	void __fastcall Set_ToolBar(int Value);
	System::WordBool __fastcall Get_MenuBar();
	void __fastcall Set_MenuBar(System::WordBool Value);
	System::WordBool __fastcall Get_FullScreen();
	void __fastcall Set_FullScreen(System::WordBool pbFullScreen);
	Winapi::Activex::TOleEnum __fastcall Get_ReadyState();
	System::WordBool __fastcall Get_Offline();
	void __fastcall Set_Offline(System::WordBool pbOffline);
	System::WordBool __fastcall Get_Silent();
	void __fastcall Set_Silent(System::WordBool pbSilent);
	System::WordBool __fastcall Get_RegisterAsBrowser();
	void __fastcall Set_RegisterAsBrowser(System::WordBool pbRegister);
	System::WordBool __fastcall Get_RegisterAsDropTarget();
	void __fastcall Set_RegisterAsDropTarget(System::WordBool pbRegister);
	System::WordBool __fastcall Get_TheaterMode();
	void __fastcall Set_TheaterMode(System::WordBool pbRegister);
	System::WordBool __fastcall Get_AddressBar();
	void __fastcall Set_AddressBar(System::WordBool Value);
	System::WordBool __fastcall Get_Resizable();
	void __fastcall Set_Resizable(System::WordBool Value);
	
public:
	__fastcall virtual TInternetExplorer(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TInternetExplorer();
	virtual void __fastcall Connect();
	void __fastcall ConnectTo(_di_IWebBrowser2 svrIntf);
	virtual void __fastcall Disconnect();
	void __fastcall GoBack();
	void __fastcall GoForward();
	void __fastcall GoHome();
	void __fastcall GoSearch();
	void __fastcall Navigate(const System::WideString URL)/* overload */;
	void __fastcall Navigate(const System::WideString URL, const System::OleVariant &Flags)/* overload */;
	void __fastcall Navigate(const System::WideString URL, const System::OleVariant &Flags, const System::OleVariant &TargetFrameName)/* overload */;
	void __fastcall Navigate(const System::WideString URL, const System::OleVariant &Flags, const System::OleVariant &TargetFrameName, const System::OleVariant &PostData)/* overload */;
	void __fastcall Navigate(const System::WideString URL, const System::OleVariant &Flags, const System::OleVariant &TargetFrameName, const System::OleVariant &PostData, const System::OleVariant &Headers)/* overload */;
	void __fastcall Refresh();
	void __fastcall Refresh2()/* overload */;
	void __fastcall Refresh2(const System::OleVariant &Level)/* overload */;
	void __fastcall Stop();
	void __fastcall Quit();
	void __fastcall ClientToWindow(int &pcx, int &pcy);
	void __fastcall PutProperty(const System::WideString Property_, const System::OleVariant &vtValue);
	System::OleVariant __fastcall GetProperty(const System::WideString Property_);
	void __fastcall Navigate2(const System::OleVariant &URL)/* overload */;
	void __fastcall Navigate2(const System::OleVariant &URL, const System::OleVariant &Flags)/* overload */;
	void __fastcall Navigate2(const System::OleVariant &URL, const System::OleVariant &Flags, const System::OleVariant &TargetFrameName)/* overload */;
	void __fastcall Navigate2(const System::OleVariant &URL, const System::OleVariant &Flags, const System::OleVariant &TargetFrameName, const System::OleVariant &PostData)/* overload */;
	void __fastcall Navigate2(const System::OleVariant &URL, const System::OleVariant &Flags, const System::OleVariant &TargetFrameName, const System::OleVariant &PostData, const System::OleVariant &Headers)/* overload */;
	Winapi::Activex::TOleEnum __fastcall QueryStatusWB(Winapi::Activex::TOleEnum cmdID);
	void __fastcall ExecWB(Winapi::Activex::TOleEnum cmdID, Winapi::Activex::TOleEnum cmdexecopt)/* overload */;
	void __fastcall ExecWB(Winapi::Activex::TOleEnum cmdID, Winapi::Activex::TOleEnum cmdexecopt, const System::OleVariant &pvaIn)/* overload */;
	void __fastcall ExecWB(Winapi::Activex::TOleEnum cmdID, Winapi::Activex::TOleEnum cmdexecopt, const System::OleVariant &pvaIn, System::OleVariant &pvaOut)/* overload */;
	void __fastcall ShowBrowserBar(const System::OleVariant &pvaClsid)/* overload */;
	void __fastcall ShowBrowserBar(const System::OleVariant &pvaClsid, const System::OleVariant &pvarShow)/* overload */;
	void __fastcall ShowBrowserBar(const System::OleVariant &pvaClsid, const System::OleVariant &pvarShow, const System::OleVariant &pvarSize)/* overload */;
	__property _di_IWebBrowser2 DefaultInterface = {read=GetDefaultInterface};
	__property _di_IDispatch Application = {read=Get_Application};
	__property _di_IDispatch Parent = {read=Get_Parent};
	__property _di_IDispatch Container = {read=Get_Container};
	__property _di_IDispatch Document = {read=Get_Document};
	__property System::WordBool TopLevelContainer = {read=Get_TopLevelContainer, nodefault};
	__property System::WideString type_ = {read=Get_type_};
	__property System::WideString LocationName = {read=Get_LocationName};
	__property System::WideString LocationURL = {read=Get_LocationURL};
	__property System::WordBool Busy = {read=Get_Busy, nodefault};
	__property System::WideString Name = {read=Get_Name};
#ifndef _WIN64
	__property HWND HWnd = {read=Get_HWND, nodefault};
#else /* _WIN64 */
	__property HWND HWnd = {read=Get_HWND};
#endif /* _WIN64 */
	__property System::WideString FullName = {read=Get_FullName};
	__property System::WideString Path = {read=Get_Path};
	__property Winapi::Activex::TOleEnum ReadyState = {read=Get_ReadyState, nodefault};
	__property int Left = {read=Get_Left, write=Set_Left, nodefault};
	__property int Top = {read=Get_Top, write=Set_Top, nodefault};
	__property int Width = {read=Get_Width, write=Set_Width, nodefault};
	__property int Height = {read=Get_Height, write=Set_Height, nodefault};
	__property System::WordBool Visible = {read=Get_Visible, write=Set_Visible, nodefault};
	__property System::WordBool StatusBar = {read=Get_StatusBar, write=Set_StatusBar, nodefault};
	__property System::WideString StatusText = {read=Get_StatusText, write=Set_StatusText};
	__property int ToolBar = {read=Get_ToolBar, write=Set_ToolBar, nodefault};
	__property System::WordBool MenuBar = {read=Get_MenuBar, write=Set_MenuBar, nodefault};
	__property System::WordBool FullScreen = {read=Get_FullScreen, write=Set_FullScreen, nodefault};
	__property System::WordBool Offline = {read=Get_Offline, write=Set_Offline, nodefault};
	__property System::WordBool Silent = {read=Get_Silent, write=Set_Silent, nodefault};
	__property System::WordBool RegisterAsBrowser = {read=Get_RegisterAsBrowser, write=Set_RegisterAsBrowser, nodefault};
	__property System::WordBool RegisterAsDropTarget = {read=Get_RegisterAsDropTarget, write=Set_RegisterAsDropTarget, nodefault};
	__property System::WordBool TheaterMode = {read=Get_TheaterMode, write=Set_TheaterMode, nodefault};
	__property System::WordBool AddressBar = {read=Get_AddressBar, write=Set_AddressBar, nodefault};
	__property System::WordBool Resizable = {read=Get_Resizable, write=Set_Resizable, nodefault};
	
__published:
	__property TInternetExplorerStatusTextChange OnStatusTextChange = {read=FOnStatusTextChange, write=FOnStatusTextChange};
	__property TInternetExplorerProgressChange OnProgressChange = {read=FOnProgressChange, write=FOnProgressChange};
	__property TInternetExplorerCommandStateChange OnCommandStateChange = {read=FOnCommandStateChange, write=FOnCommandStateChange};
	__property System::Classes::TNotifyEvent OnDownloadBegin = {read=FOnDownloadBegin, write=FOnDownloadBegin};
	__property System::Classes::TNotifyEvent OnDownloadComplete = {read=FOnDownloadComplete, write=FOnDownloadComplete};
	__property TInternetExplorerTitleChange OnTitleChange = {read=FOnTitleChange, write=FOnTitleChange};
	__property TInternetExplorerPropertyChange OnPropertyChange = {read=FOnPropertyChange, write=FOnPropertyChange};
	__property TInternetExplorerBeforeNavigate2 OnBeforeNavigate2 = {read=FOnBeforeNavigate2, write=FOnBeforeNavigate2};
	__property TInternetExplorerNewWindow2 OnNewWindow2 = {read=FOnNewWindow2, write=FOnNewWindow2};
	__property TInternetExplorerNavigateComplete2 OnNavigateComplete2 = {read=FOnNavigateComplete2, write=FOnNavigateComplete2};
	__property TInternetExplorerDocumentComplete OnDocumentComplete = {read=FOnDocumentComplete, write=FOnDocumentComplete};
	__property System::Classes::TNotifyEvent OnQuit = {read=FOnQuit, write=FOnQuit};
	__property TInternetExplorerOnVisible OnVisible = {read=FOnVisible, write=FOnVisible};
	__property TInternetExplorerOnToolBar OnToolBar = {read=FOnToolBar, write=FOnToolBar};
	__property TInternetExplorerOnMenuBar OnMenuBar = {read=FOnMenuBar, write=FOnMenuBar};
	__property TInternetExplorerOnStatusBar OnStatusBar = {read=FOnStatusBar, write=FOnStatusBar};
	__property TInternetExplorerOnFullScreen OnFullScreen = {read=FOnFullScreen, write=FOnFullScreen};
	__property TInternetExplorerOnTheaterMode OnTheaterMode = {read=FOnTheaterMode, write=FOnTheaterMode};
	__property TInternetExplorerWindowSetResizable OnWindowSetResizable = {read=FOnWindowSetResizable, write=FOnWindowSetResizable};
	__property TInternetExplorerWindowSetLeft OnWindowSetLeft = {read=FOnWindowSetLeft, write=FOnWindowSetLeft};
	__property TInternetExplorerWindowSetTop OnWindowSetTop = {read=FOnWindowSetTop, write=FOnWindowSetTop};
	__property TInternetExplorerWindowSetWidth OnWindowSetWidth = {read=FOnWindowSetWidth, write=FOnWindowSetWidth};
	__property TInternetExplorerWindowSetHeight OnWindowSetHeight = {read=FOnWindowSetHeight, write=FOnWindowSetHeight};
	__property TInternetExplorerWindowClosing OnWindowClosing = {read=FOnWindowClosing, write=FOnWindowClosing};
	__property TInternetExplorerClientToHostWindow OnClientToHostWindow = {read=FOnClientToHostWindow, write=FOnClientToHostWindow};
	__property TInternetExplorerSetSecureLockIcon OnSetSecureLockIcon = {read=FOnSetSecureLockIcon, write=FOnSetSecureLockIcon};
	__property TInternetExplorerFileDownload OnFileDownload = {read=FOnFileDownload, write=FOnFileDownload};
	__property TInternetExplorerNavigateError OnNavigateError = {read=FOnNavigateError, write=FOnNavigateError};
	__property TInternetExplorerPrintTemplateInstantiation OnPrintTemplateInstantiation = {read=FOnPrintTemplateInstantiation, write=FOnPrintTemplateInstantiation};
	__property TInternetExplorerPrintTemplateTeardown OnPrintTemplateTeardown = {read=FOnPrintTemplateTeardown, write=FOnPrintTemplateTeardown};
	__property TInternetExplorerUpdatePageStatus OnUpdatePageStatus = {read=FOnUpdatePageStatus, write=FOnUpdatePageStatus};
	__property TInternetExplorerPrivacyImpactedStateChange OnPrivacyImpactedStateChange = {read=FOnPrivacyImpactedStateChange, write=FOnPrivacyImpactedStateChange};
	__property TInternetExplorerNewWindow3 OnNewWindow3 = {read=FOnNewWindow3, write=FOnNewWindow3};
	__property TInternetExplorerSetPhishingFilterStatus OnSetPhishingFilterStatus = {read=FOnSetPhishingFilterStatus, write=FOnSetPhishingFilterStatus};
	__property TInternetExplorerWindowStateChanged OnWindowStateChanged = {read=FOnWindowStateChanged, write=FOnWindowStateChanged};
	__property TInternetExplorerNewProcess OnNewProcess = {read=FOnNewProcess, write=FOnNewProcess};
	__property TInternetExplorerThirdPartyUrlBlocked OnThirdPartyUrlBlocked = {read=FOnThirdPartyUrlBlocked, write=FOnThirdPartyUrlBlocked};
	__property TInternetExplorerRedirectXDomainBlocked OnRedirectXDomainBlocked = {read=FOnRedirectXDomainBlocked, write=FOnRedirectXDomainBlocked};
	__property TInternetExplorerBeforeScriptExecute OnBeforeScriptExecute = {read=FOnBeforeScriptExecute, write=FOnBeforeScriptExecute};
	__property TInternetExplorerWebWorkerStarted OnWebWorkerStarted = {read=FOnWebWorkerStarted, write=FOnWebWorkerStarted};
	__property TInternetExplorerWebWorkerFinsihed OnWebWorkerFinsihed = {read=FOnWebWorkerFinsihed, write=FOnWebWorkerFinsihed};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION CoInternetExplorerMedium : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__classmethod _di_IWebBrowser2 __fastcall Create();
	__classmethod _di_IWebBrowser2 __fastcall CreateRemote(const System::UnicodeString MachineName);
public:
	/* TObject.Create */ inline __fastcall CoInternetExplorerMedium() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~CoInternetExplorerMedium() { }
	
};

#pragma pack(pop)

typedef void __fastcall (__closure *TInternetExplorerMediumStatusTextChange)(System::TObject* ASender, const System::WideString Text);

typedef void __fastcall (__closure *TInternetExplorerMediumProgressChange)(System::TObject* ASender, int Progress, int ProgressMax);

typedef void __fastcall (__closure *TInternetExplorerMediumCommandStateChange)(System::TObject* ASender, int Command, System::WordBool Enable);

typedef void __fastcall (__closure *TInternetExplorerMediumTitleChange)(System::TObject* ASender, const System::WideString Text);

typedef void __fastcall (__closure *TInternetExplorerMediumPropertyChange)(System::TObject* ASender, const System::WideString szProperty);

typedef void __fastcall (__closure *TInternetExplorerMediumBeforeNavigate2)(System::TObject* ASender, const _di_IDispatch pDisp, const System::OleVariant &URL, const System::OleVariant &Flags, const System::OleVariant &TargetFrameName, const System::OleVariant &PostData, const System::OleVariant &Headers, System::WordBool &Cancel);

typedef void __fastcall (__closure *TInternetExplorerMediumNewWindow2)(System::TObject* ASender, _di_IDispatch &ppDisp, System::WordBool &Cancel);

typedef void __fastcall (__closure *TInternetExplorerMediumNavigateComplete2)(System::TObject* ASender, const _di_IDispatch pDisp, const System::OleVariant &URL);

typedef void __fastcall (__closure *TInternetExplorerMediumDocumentComplete)(System::TObject* ASender, const _di_IDispatch pDisp, const System::OleVariant &URL);

typedef void __fastcall (__closure *TInternetExplorerMediumOnVisible)(System::TObject* ASender, System::WordBool Visible);

typedef void __fastcall (__closure *TInternetExplorerMediumOnToolBar)(System::TObject* ASender, System::WordBool ToolBar);

typedef void __fastcall (__closure *TInternetExplorerMediumOnMenuBar)(System::TObject* ASender, System::WordBool MenuBar);

typedef void __fastcall (__closure *TInternetExplorerMediumOnStatusBar)(System::TObject* ASender, System::WordBool StatusBar);

typedef void __fastcall (__closure *TInternetExplorerMediumOnFullScreen)(System::TObject* ASender, System::WordBool FullScreen);

typedef void __fastcall (__closure *TInternetExplorerMediumOnTheaterMode)(System::TObject* ASender, System::WordBool TheaterMode);

typedef void __fastcall (__closure *TInternetExplorerMediumWindowSetResizable)(System::TObject* ASender, System::WordBool Resizable);

typedef void __fastcall (__closure *TInternetExplorerMediumWindowSetLeft)(System::TObject* ASender, int Left);

typedef void __fastcall (__closure *TInternetExplorerMediumWindowSetTop)(System::TObject* ASender, int Top);

typedef void __fastcall (__closure *TInternetExplorerMediumWindowSetWidth)(System::TObject* ASender, int Width);

typedef void __fastcall (__closure *TInternetExplorerMediumWindowSetHeight)(System::TObject* ASender, int Height);

typedef void __fastcall (__closure *TInternetExplorerMediumWindowClosing)(System::TObject* ASender, System::WordBool IsChildWindow, System::WordBool &Cancel);

typedef void __fastcall (__closure *TInternetExplorerMediumClientToHostWindow)(System::TObject* ASender, int &CX, int &CY);

typedef void __fastcall (__closure *TInternetExplorerMediumSetSecureLockIcon)(System::TObject* ASender, int SecureLockIcon);

typedef void __fastcall (__closure *TInternetExplorerMediumFileDownload)(System::TObject* ASender, System::WordBool ActiveDocument, System::WordBool &Cancel);

typedef void __fastcall (__closure *TInternetExplorerMediumNavigateError)(System::TObject* ASender, const _di_IDispatch pDisp, const System::OleVariant &URL, const System::OleVariant &Frame, const System::OleVariant &StatusCode, System::WordBool &Cancel);

typedef void __fastcall (__closure *TInternetExplorerMediumPrintTemplateInstantiation)(System::TObject* ASender, const _di_IDispatch pDisp);

typedef void __fastcall (__closure *TInternetExplorerMediumPrintTemplateTeardown)(System::TObject* ASender, const _di_IDispatch pDisp);

typedef void __fastcall (__closure *TInternetExplorerMediumUpdatePageStatus)(System::TObject* ASender, const _di_IDispatch pDisp, const System::OleVariant &nPage, const System::OleVariant &fDone);

typedef void __fastcall (__closure *TInternetExplorerMediumPrivacyImpactedStateChange)(System::TObject* ASender, System::WordBool bImpacted);

typedef void __fastcall (__closure *TInternetExplorerMediumNewWindow3)(System::TObject* ASender, _di_IDispatch &ppDisp, System::WordBool &Cancel, unsigned dwFlags, const System::WideString bstrUrlContext, const System::WideString bstrUrl);

typedef void __fastcall (__closure *TInternetExplorerMediumSetPhishingFilterStatus)(System::TObject* ASender, int PhishingFilterStatus);

typedef void __fastcall (__closure *TInternetExplorerMediumWindowStateChanged)(System::TObject* ASender, unsigned dwWindowStateFlags, unsigned dwValidFlagsMask);

typedef void __fastcall (__closure *TInternetExplorerMediumNewProcess)(System::TObject* ASender, int lCauseFlag, const _di_IDispatch pWB2, System::WordBool &Cancel);

typedef void __fastcall (__closure *TInternetExplorerMediumThirdPartyUrlBlocked)(System::TObject* ASender, const System::OleVariant &URL, unsigned dwCount);

typedef void __fastcall (__closure *TInternetExplorerMediumRedirectXDomainBlocked)(System::TObject* ASender, const _di_IDispatch pDisp, const System::OleVariant &StartURL, const System::OleVariant &RedirectURL, const System::OleVariant &Frame, const System::OleVariant &StatusCode);

typedef void __fastcall (__closure *TInternetExplorerMediumBeforeScriptExecute)(System::TObject* ASender, const _di_IDispatch pDispWindow);

typedef void __fastcall (__closure *TInternetExplorerMediumWebWorkerStarted)(System::TObject* ASender, unsigned dwUniqueID, const System::WideString bstrWorkerLabel);

typedef void __fastcall (__closure *TInternetExplorerMediumWebWorkerFinsihed)(System::TObject* ASender, unsigned dwUniqueID);

#pragma pack(push,4)
class PASCALIMPLEMENTATION TInternetExplorerMedium : public Vcl::Oleserver::TOleServer
{
	typedef Vcl::Oleserver::TOleServer inherited;
	
private:
	TInternetExplorerMediumStatusTextChange FOnStatusTextChange;
	TInternetExplorerMediumProgressChange FOnProgressChange;
	TInternetExplorerMediumCommandStateChange FOnCommandStateChange;
	System::Classes::TNotifyEvent FOnDownloadBegin;
	System::Classes::TNotifyEvent FOnDownloadComplete;
	TInternetExplorerMediumTitleChange FOnTitleChange;
	TInternetExplorerMediumPropertyChange FOnPropertyChange;
	TInternetExplorerMediumBeforeNavigate2 FOnBeforeNavigate2;
	TInternetExplorerMediumNewWindow2 FOnNewWindow2;
	TInternetExplorerMediumNavigateComplete2 FOnNavigateComplete2;
	TInternetExplorerMediumDocumentComplete FOnDocumentComplete;
	System::Classes::TNotifyEvent FOnQuit;
	TInternetExplorerMediumOnVisible FOnVisible;
	TInternetExplorerMediumOnToolBar FOnToolBar;
	TInternetExplorerMediumOnMenuBar FOnMenuBar;
	TInternetExplorerMediumOnStatusBar FOnStatusBar;
	TInternetExplorerMediumOnFullScreen FOnFullScreen;
	TInternetExplorerMediumOnTheaterMode FOnTheaterMode;
	TInternetExplorerMediumWindowSetResizable FOnWindowSetResizable;
	TInternetExplorerMediumWindowSetLeft FOnWindowSetLeft;
	TInternetExplorerMediumWindowSetTop FOnWindowSetTop;
	TInternetExplorerMediumWindowSetWidth FOnWindowSetWidth;
	TInternetExplorerMediumWindowSetHeight FOnWindowSetHeight;
	TInternetExplorerMediumWindowClosing FOnWindowClosing;
	TInternetExplorerMediumClientToHostWindow FOnClientToHostWindow;
	TInternetExplorerMediumSetSecureLockIcon FOnSetSecureLockIcon;
	TInternetExplorerMediumFileDownload FOnFileDownload;
	TInternetExplorerMediumNavigateError FOnNavigateError;
	TInternetExplorerMediumPrintTemplateInstantiation FOnPrintTemplateInstantiation;
	TInternetExplorerMediumPrintTemplateTeardown FOnPrintTemplateTeardown;
	TInternetExplorerMediumUpdatePageStatus FOnUpdatePageStatus;
	TInternetExplorerMediumPrivacyImpactedStateChange FOnPrivacyImpactedStateChange;
	TInternetExplorerMediumNewWindow3 FOnNewWindow3;
	TInternetExplorerMediumSetPhishingFilterStatus FOnSetPhishingFilterStatus;
	TInternetExplorerMediumWindowStateChanged FOnWindowStateChanged;
	TInternetExplorerMediumNewProcess FOnNewProcess;
	TInternetExplorerMediumThirdPartyUrlBlocked FOnThirdPartyUrlBlocked;
	TInternetExplorerMediumRedirectXDomainBlocked FOnRedirectXDomainBlocked;
	TInternetExplorerMediumBeforeScriptExecute FOnBeforeScriptExecute;
	TInternetExplorerMediumWebWorkerStarted FOnWebWorkerStarted;
	TInternetExplorerMediumWebWorkerFinsihed FOnWebWorkerFinsihed;
	_di_IWebBrowser2 FIntf;
	_di_IWebBrowser2 __fastcall GetDefaultInterface();
	
protected:
	virtual void __fastcall InitServerData();
	virtual void __fastcall InvokeEvent(int DispID, System::Win::Comobj::TOleVariantArray &Params);
	_di_IDispatch __fastcall Get_Application();
	_di_IDispatch __fastcall Get_Parent();
	_di_IDispatch __fastcall Get_Container();
	_di_IDispatch __fastcall Get_Document();
	System::WordBool __fastcall Get_TopLevelContainer();
	System::WideString __fastcall Get_type_();
	int __fastcall Get_Left();
	void __fastcall Set_Left(int pl);
	int __fastcall Get_Top();
	void __fastcall Set_Top(int pl);
	int __fastcall Get_Width();
	void __fastcall Set_Width(int pl);
	int __fastcall Get_Height();
	void __fastcall Set_Height(int pl);
	System::WideString __fastcall Get_LocationName();
	System::WideString __fastcall Get_LocationURL();
	System::WordBool __fastcall Get_Busy();
	System::WideString __fastcall Get_Name();
	HWND __fastcall Get_HWND();
	System::WideString __fastcall Get_FullName();
	System::WideString __fastcall Get_Path();
	System::WordBool __fastcall Get_Visible();
	void __fastcall Set_Visible(System::WordBool pBool);
	System::WordBool __fastcall Get_StatusBar();
	void __fastcall Set_StatusBar(System::WordBool pBool);
	System::WideString __fastcall Get_StatusText();
	void __fastcall Set_StatusText(const System::WideString StatusText);
	int __fastcall Get_ToolBar();
	void __fastcall Set_ToolBar(int Value);
	System::WordBool __fastcall Get_MenuBar();
	void __fastcall Set_MenuBar(System::WordBool Value);
	System::WordBool __fastcall Get_FullScreen();
	void __fastcall Set_FullScreen(System::WordBool pbFullScreen);
	Winapi::Activex::TOleEnum __fastcall Get_ReadyState();
	System::WordBool __fastcall Get_Offline();
	void __fastcall Set_Offline(System::WordBool pbOffline);
	System::WordBool __fastcall Get_Silent();
	void __fastcall Set_Silent(System::WordBool pbSilent);
	System::WordBool __fastcall Get_RegisterAsBrowser();
	void __fastcall Set_RegisterAsBrowser(System::WordBool pbRegister);
	System::WordBool __fastcall Get_RegisterAsDropTarget();
	void __fastcall Set_RegisterAsDropTarget(System::WordBool pbRegister);
	System::WordBool __fastcall Get_TheaterMode();
	void __fastcall Set_TheaterMode(System::WordBool pbRegister);
	System::WordBool __fastcall Get_AddressBar();
	void __fastcall Set_AddressBar(System::WordBool Value);
	System::WordBool __fastcall Get_Resizable();
	void __fastcall Set_Resizable(System::WordBool Value);
	
public:
	__fastcall virtual TInternetExplorerMedium(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TInternetExplorerMedium();
	virtual void __fastcall Connect();
	void __fastcall ConnectTo(_di_IWebBrowser2 svrIntf);
	virtual void __fastcall Disconnect();
	void __fastcall GoBack();
	void __fastcall GoForward();
	void __fastcall GoHome();
	void __fastcall GoSearch();
	void __fastcall Navigate(const System::WideString URL)/* overload */;
	void __fastcall Navigate(const System::WideString URL, const System::OleVariant &Flags)/* overload */;
	void __fastcall Navigate(const System::WideString URL, const System::OleVariant &Flags, const System::OleVariant &TargetFrameName)/* overload */;
	void __fastcall Navigate(const System::WideString URL, const System::OleVariant &Flags, const System::OleVariant &TargetFrameName, const System::OleVariant &PostData)/* overload */;
	void __fastcall Navigate(const System::WideString URL, const System::OleVariant &Flags, const System::OleVariant &TargetFrameName, const System::OleVariant &PostData, const System::OleVariant &Headers)/* overload */;
	void __fastcall Refresh();
	void __fastcall Refresh2()/* overload */;
	void __fastcall Refresh2(const System::OleVariant &Level)/* overload */;
	void __fastcall Stop();
	void __fastcall Quit();
	void __fastcall ClientToWindow(int &pcx, int &pcy);
	void __fastcall PutProperty(const System::WideString Property_, const System::OleVariant &vtValue);
	System::OleVariant __fastcall GetProperty(const System::WideString Property_);
	void __fastcall Navigate2(const System::OleVariant &URL)/* overload */;
	void __fastcall Navigate2(const System::OleVariant &URL, const System::OleVariant &Flags)/* overload */;
	void __fastcall Navigate2(const System::OleVariant &URL, const System::OleVariant &Flags, const System::OleVariant &TargetFrameName)/* overload */;
	void __fastcall Navigate2(const System::OleVariant &URL, const System::OleVariant &Flags, const System::OleVariant &TargetFrameName, const System::OleVariant &PostData)/* overload */;
	void __fastcall Navigate2(const System::OleVariant &URL, const System::OleVariant &Flags, const System::OleVariant &TargetFrameName, const System::OleVariant &PostData, const System::OleVariant &Headers)/* overload */;
	Winapi::Activex::TOleEnum __fastcall QueryStatusWB(Winapi::Activex::TOleEnum cmdID);
	void __fastcall ExecWB(Winapi::Activex::TOleEnum cmdID, Winapi::Activex::TOleEnum cmdexecopt)/* overload */;
	void __fastcall ExecWB(Winapi::Activex::TOleEnum cmdID, Winapi::Activex::TOleEnum cmdexecopt, const System::OleVariant &pvaIn)/* overload */;
	void __fastcall ExecWB(Winapi::Activex::TOleEnum cmdID, Winapi::Activex::TOleEnum cmdexecopt, const System::OleVariant &pvaIn, System::OleVariant &pvaOut)/* overload */;
	void __fastcall ShowBrowserBar(const System::OleVariant &pvaClsid)/* overload */;
	void __fastcall ShowBrowserBar(const System::OleVariant &pvaClsid, const System::OleVariant &pvarShow)/* overload */;
	void __fastcall ShowBrowserBar(const System::OleVariant &pvaClsid, const System::OleVariant &pvarShow, const System::OleVariant &pvarSize)/* overload */;
	__property _di_IWebBrowser2 DefaultInterface = {read=GetDefaultInterface};
	__property _di_IDispatch Application = {read=Get_Application};
	__property _di_IDispatch Parent = {read=Get_Parent};
	__property _di_IDispatch Container = {read=Get_Container};
	__property _di_IDispatch Document = {read=Get_Document};
	__property System::WordBool TopLevelContainer = {read=Get_TopLevelContainer, nodefault};
	__property System::WideString type_ = {read=Get_type_};
	__property System::WideString LocationName = {read=Get_LocationName};
	__property System::WideString LocationURL = {read=Get_LocationURL};
	__property System::WordBool Busy = {read=Get_Busy, nodefault};
	__property System::WideString Name = {read=Get_Name};
#ifndef _WIN64
	__property HWND HWnd = {read=Get_HWND, nodefault};
#else /* _WIN64 */
	__property HWND HWnd = {read=Get_HWND};
#endif /* _WIN64 */
	__property System::WideString FullName = {read=Get_FullName};
	__property System::WideString Path = {read=Get_Path};
	__property Winapi::Activex::TOleEnum ReadyState = {read=Get_ReadyState, nodefault};
	__property int Left = {read=Get_Left, write=Set_Left, nodefault};
	__property int Top = {read=Get_Top, write=Set_Top, nodefault};
	__property int Width = {read=Get_Width, write=Set_Width, nodefault};
	__property int Height = {read=Get_Height, write=Set_Height, nodefault};
	__property System::WordBool Visible = {read=Get_Visible, write=Set_Visible, nodefault};
	__property System::WordBool StatusBar = {read=Get_StatusBar, write=Set_StatusBar, nodefault};
	__property System::WideString StatusText = {read=Get_StatusText, write=Set_StatusText};
	__property int ToolBar = {read=Get_ToolBar, write=Set_ToolBar, nodefault};
	__property System::WordBool MenuBar = {read=Get_MenuBar, write=Set_MenuBar, nodefault};
	__property System::WordBool FullScreen = {read=Get_FullScreen, write=Set_FullScreen, nodefault};
	__property System::WordBool Offline = {read=Get_Offline, write=Set_Offline, nodefault};
	__property System::WordBool Silent = {read=Get_Silent, write=Set_Silent, nodefault};
	__property System::WordBool RegisterAsBrowser = {read=Get_RegisterAsBrowser, write=Set_RegisterAsBrowser, nodefault};
	__property System::WordBool RegisterAsDropTarget = {read=Get_RegisterAsDropTarget, write=Set_RegisterAsDropTarget, nodefault};
	__property System::WordBool TheaterMode = {read=Get_TheaterMode, write=Set_TheaterMode, nodefault};
	__property System::WordBool AddressBar = {read=Get_AddressBar, write=Set_AddressBar, nodefault};
	__property System::WordBool Resizable = {read=Get_Resizable, write=Set_Resizable, nodefault};
	
__published:
	__property TInternetExplorerMediumStatusTextChange OnStatusTextChange = {read=FOnStatusTextChange, write=FOnStatusTextChange};
	__property TInternetExplorerMediumProgressChange OnProgressChange = {read=FOnProgressChange, write=FOnProgressChange};
	__property TInternetExplorerMediumCommandStateChange OnCommandStateChange = {read=FOnCommandStateChange, write=FOnCommandStateChange};
	__property System::Classes::TNotifyEvent OnDownloadBegin = {read=FOnDownloadBegin, write=FOnDownloadBegin};
	__property System::Classes::TNotifyEvent OnDownloadComplete = {read=FOnDownloadComplete, write=FOnDownloadComplete};
	__property TInternetExplorerMediumTitleChange OnTitleChange = {read=FOnTitleChange, write=FOnTitleChange};
	__property TInternetExplorerMediumPropertyChange OnPropertyChange = {read=FOnPropertyChange, write=FOnPropertyChange};
	__property TInternetExplorerMediumBeforeNavigate2 OnBeforeNavigate2 = {read=FOnBeforeNavigate2, write=FOnBeforeNavigate2};
	__property TInternetExplorerMediumNewWindow2 OnNewWindow2 = {read=FOnNewWindow2, write=FOnNewWindow2};
	__property TInternetExplorerMediumNavigateComplete2 OnNavigateComplete2 = {read=FOnNavigateComplete2, write=FOnNavigateComplete2};
	__property TInternetExplorerMediumDocumentComplete OnDocumentComplete = {read=FOnDocumentComplete, write=FOnDocumentComplete};
	__property System::Classes::TNotifyEvent OnQuit = {read=FOnQuit, write=FOnQuit};
	__property TInternetExplorerMediumOnVisible OnVisible = {read=FOnVisible, write=FOnVisible};
	__property TInternetExplorerMediumOnToolBar OnToolBar = {read=FOnToolBar, write=FOnToolBar};
	__property TInternetExplorerMediumOnMenuBar OnMenuBar = {read=FOnMenuBar, write=FOnMenuBar};
	__property TInternetExplorerMediumOnStatusBar OnStatusBar = {read=FOnStatusBar, write=FOnStatusBar};
	__property TInternetExplorerMediumOnFullScreen OnFullScreen = {read=FOnFullScreen, write=FOnFullScreen};
	__property TInternetExplorerMediumOnTheaterMode OnTheaterMode = {read=FOnTheaterMode, write=FOnTheaterMode};
	__property TInternetExplorerMediumWindowSetResizable OnWindowSetResizable = {read=FOnWindowSetResizable, write=FOnWindowSetResizable};
	__property TInternetExplorerMediumWindowSetLeft OnWindowSetLeft = {read=FOnWindowSetLeft, write=FOnWindowSetLeft};
	__property TInternetExplorerMediumWindowSetTop OnWindowSetTop = {read=FOnWindowSetTop, write=FOnWindowSetTop};
	__property TInternetExplorerMediumWindowSetWidth OnWindowSetWidth = {read=FOnWindowSetWidth, write=FOnWindowSetWidth};
	__property TInternetExplorerMediumWindowSetHeight OnWindowSetHeight = {read=FOnWindowSetHeight, write=FOnWindowSetHeight};
	__property TInternetExplorerMediumWindowClosing OnWindowClosing = {read=FOnWindowClosing, write=FOnWindowClosing};
	__property TInternetExplorerMediumClientToHostWindow OnClientToHostWindow = {read=FOnClientToHostWindow, write=FOnClientToHostWindow};
	__property TInternetExplorerMediumSetSecureLockIcon OnSetSecureLockIcon = {read=FOnSetSecureLockIcon, write=FOnSetSecureLockIcon};
	__property TInternetExplorerMediumFileDownload OnFileDownload = {read=FOnFileDownload, write=FOnFileDownload};
	__property TInternetExplorerMediumNavigateError OnNavigateError = {read=FOnNavigateError, write=FOnNavigateError};
	__property TInternetExplorerMediumPrintTemplateInstantiation OnPrintTemplateInstantiation = {read=FOnPrintTemplateInstantiation, write=FOnPrintTemplateInstantiation};
	__property TInternetExplorerMediumPrintTemplateTeardown OnPrintTemplateTeardown = {read=FOnPrintTemplateTeardown, write=FOnPrintTemplateTeardown};
	__property TInternetExplorerMediumUpdatePageStatus OnUpdatePageStatus = {read=FOnUpdatePageStatus, write=FOnUpdatePageStatus};
	__property TInternetExplorerMediumPrivacyImpactedStateChange OnPrivacyImpactedStateChange = {read=FOnPrivacyImpactedStateChange, write=FOnPrivacyImpactedStateChange};
	__property TInternetExplorerMediumNewWindow3 OnNewWindow3 = {read=FOnNewWindow3, write=FOnNewWindow3};
	__property TInternetExplorerMediumSetPhishingFilterStatus OnSetPhishingFilterStatus = {read=FOnSetPhishingFilterStatus, write=FOnSetPhishingFilterStatus};
	__property TInternetExplorerMediumWindowStateChanged OnWindowStateChanged = {read=FOnWindowStateChanged, write=FOnWindowStateChanged};
	__property TInternetExplorerMediumNewProcess OnNewProcess = {read=FOnNewProcess, write=FOnNewProcess};
	__property TInternetExplorerMediumThirdPartyUrlBlocked OnThirdPartyUrlBlocked = {read=FOnThirdPartyUrlBlocked, write=FOnThirdPartyUrlBlocked};
	__property TInternetExplorerMediumRedirectXDomainBlocked OnRedirectXDomainBlocked = {read=FOnRedirectXDomainBlocked, write=FOnRedirectXDomainBlocked};
	__property TInternetExplorerMediumBeforeScriptExecute OnBeforeScriptExecute = {read=FOnBeforeScriptExecute, write=FOnBeforeScriptExecute};
	__property TInternetExplorerMediumWebWorkerStarted OnWebWorkerStarted = {read=FOnWebWorkerStarted, write=FOnWebWorkerStarted};
	__property TInternetExplorerMediumWebWorkerFinsihed OnWebWorkerFinsihed = {read=FOnWebWorkerFinsihed, write=FOnWebWorkerFinsihed};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION CoShellBrowserWindow : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__classmethod _di_IWebBrowser2 __fastcall Create();
	__classmethod _di_IWebBrowser2 __fastcall CreateRemote(const System::UnicodeString MachineName);
public:
	/* TObject.Create */ inline __fastcall CoShellBrowserWindow() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~CoShellBrowserWindow() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION CoShellWindows : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__classmethod _di_IShellWindows __fastcall Create();
	__classmethod _di_IShellWindows __fastcall CreateRemote(const System::UnicodeString MachineName);
public:
	/* TObject.Create */ inline __fastcall CoShellWindows() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~CoShellWindows() { }
	
};

#pragma pack(pop)

typedef void __fastcall (__closure *TShellWindowsWindowRegistered)(System::TObject* ASender, int lCookie);

typedef void __fastcall (__closure *TShellWindowsWindowRevoked)(System::TObject* ASender, int lCookie);

#pragma pack(push,4)
class PASCALIMPLEMENTATION TShellWindows : public Vcl::Oleserver::TOleServer
{
	typedef Vcl::Oleserver::TOleServer inherited;
	
private:
	TShellWindowsWindowRegistered FOnWindowRegistered;
	TShellWindowsWindowRevoked FOnWindowRevoked;
	_di_IShellWindows FIntf;
	_di_IShellWindows __fastcall GetDefaultInterface();
	
protected:
	virtual void __fastcall InitServerData();
	virtual void __fastcall InvokeEvent(int DispID, System::Win::Comobj::TOleVariantArray &Params);
	int __fastcall Get_Count();
	
public:
	__fastcall virtual TShellWindows(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TShellWindows();
	virtual void __fastcall Connect();
	void __fastcall ConnectTo(_di_IShellWindows svrIntf);
	virtual void __fastcall Disconnect();
	_di_IDispatch __fastcall Item()/* overload */;
	_di_IDispatch __fastcall Item(const System::OleVariant &index)/* overload */;
	System::_di_IInterface __fastcall _NewEnum();
	void __fastcall Register(const _di_IDispatch pid, int HWND, int swClass, /* out */ int &plCookie);
	void __fastcall RegisterPending(int lThreadId, const System::OleVariant &pvarloc, const System::OleVariant &pvarlocRoot, int swClass, /* out */ int &plCookie);
	void __fastcall Revoke(int lCookie);
	void __fastcall OnNavigate(int lCookie, const System::OleVariant &pvarloc);
	void __fastcall OnActivated(int lCookie, System::WordBool fActive);
	_di_IDispatch __fastcall FindWindowSW(const System::OleVariant &pvarloc, const System::OleVariant &pvarlocRoot, int swClass, /* out */ int &pHWND, int swfwOptions);
	void __fastcall OnCreated(int lCookie, const System::_di_IInterface punk);
	void __fastcall ProcessAttachDetach(System::WordBool fAttach);
	__property _di_IShellWindows DefaultInterface = {read=GetDefaultInterface};
	__property int Count = {read=Get_Count, nodefault};
	
__published:
	__property TShellWindowsWindowRegistered OnWindowRegistered = {read=FOnWindowRegistered, write=FOnWindowRegistered};
	__property TShellWindowsWindowRevoked OnWindowRevoked = {read=FOnWindowRevoked, write=FOnWindowRevoked};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION CoShellUIHelper : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__classmethod _di_IShellUIHelper6 __fastcall Create();
	__classmethod _di_IShellUIHelper6 __fastcall CreateRemote(const System::UnicodeString MachineName);
public:
	/* TObject.Create */ inline __fastcall CoShellUIHelper() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~CoShellUIHelper() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TShellUIHelper : public Vcl::Oleserver::TOleServer
{
	typedef Vcl::Oleserver::TOleServer inherited;
	
private:
	_di_IShellUIHelper6 FIntf;
	_di_IShellUIHelper6 __fastcall GetDefaultInterface();
	
protected:
	virtual void __fastcall InitServerData();
	
public:
	__fastcall virtual TShellUIHelper(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TShellUIHelper();
	virtual void __fastcall Connect();
	void __fastcall ConnectTo(_di_IShellUIHelper6 svrIntf);
	virtual void __fastcall Disconnect();
	void __fastcall ResetFirstBootMode();
	void __fastcall ResetSafeMode();
	void __fastcall RefreshOfflineDesktop();
	void __fastcall AddFavorite(const System::WideString URL)/* overload */;
	void __fastcall AddFavorite(const System::WideString URL, const System::OleVariant &Title)/* overload */;
	void __fastcall AddChannel(const System::WideString URL);
	void __fastcall AddDesktopComponent(const System::WideString URL, const System::WideString Type_)/* overload */;
	void __fastcall AddDesktopComponent(const System::WideString URL, const System::WideString Type_, const System::OleVariant &Left)/* overload */;
	void __fastcall AddDesktopComponent(const System::WideString URL, const System::WideString Type_, const System::OleVariant &Left, const System::OleVariant &Top)/* overload */;
	void __fastcall AddDesktopComponent(const System::WideString URL, const System::WideString Type_, const System::OleVariant &Left, const System::OleVariant &Top, const System::OleVariant &Width)/* overload */;
	void __fastcall AddDesktopComponent(const System::WideString URL, const System::WideString Type_, const System::OleVariant &Left, const System::OleVariant &Top, const System::OleVariant &Width, const System::OleVariant &Height)/* overload */;
	System::WordBool __fastcall IsSubscribed(const System::WideString URL);
	void __fastcall NavigateAndFind(const System::WideString URL, const System::WideString strQuery, const System::OleVariant &varTargetFrame);
	void __fastcall ImportExportFavorites(System::WordBool fImport, const System::WideString strImpExpPath);
	void __fastcall AutoCompleteSaveForm()/* overload */;
	void __fastcall AutoCompleteSaveForm(const System::OleVariant &Form)/* overload */;
	void __fastcall AutoScan(const System::WideString strSearch, const System::WideString strFailureUrl)/* overload */;
	void __fastcall AutoScan(const System::WideString strSearch, const System::WideString strFailureUrl, const System::OleVariant &pvarTargetFrame)/* overload */;
	void __fastcall AutoCompleteAttach()/* overload */;
	void __fastcall AutoCompleteAttach(const System::OleVariant &Reserved)/* overload */;
	System::OleVariant __fastcall ShowBrowserUI(const System::WideString bstrName, const System::OleVariant &pvarIn);
	void __fastcall AddSearchProvider(const System::WideString URL);
	void __fastcall RunOnceShown();
	void __fastcall SkipRunOnce();
	void __fastcall CustomizeSettings(System::WordBool fSQM, System::WordBool fPhishing, const System::WideString bstrLocale);
	System::WordBool __fastcall SqmEnabled();
	System::WordBool __fastcall PhishingEnabled();
	System::WideString __fastcall BrandImageUri();
	void __fastcall SkipTabsWelcome();
	void __fastcall DiagnoseConnection();
	void __fastcall CustomizeClearType(System::WordBool fSet);
	unsigned __fastcall IsSearchProviderInstalled(const System::WideString URL);
	System::WordBool __fastcall IsSearchMigrated();
	System::WideString __fastcall DefaultSearchProvider();
	void __fastcall RunOnceRequiredSettingsComplete(System::WordBool fComplete);
	System::WordBool __fastcall RunOnceHasShown();
	System::WideString __fastcall SearchGuideUrl();
	void __fastcall AddService(const System::WideString URL);
	unsigned __fastcall IsServiceInstalled(const System::WideString URL, const System::WideString Verb);
	System::WordBool __fastcall InPrivateFilteringEnabled();
	void __fastcall AddToFavoritesBar(const System::WideString URL, const System::WideString Title)/* overload */;
	void __fastcall AddToFavoritesBar(const System::WideString URL, const System::WideString Title, const System::OleVariant &Type_)/* overload */;
	void __fastcall BuildNewTabPage();
	void __fastcall SetRecentlyClosedVisible(System::WordBool fVisible);
	void __fastcall SetActivitiesVisible(System::WordBool fVisible);
	void __fastcall ContentDiscoveryReset();
	System::WordBool __fastcall IsSuggestedSitesEnabled();
	void __fastcall EnableSuggestedSites(System::WordBool fEnable);
	void __fastcall NavigateToSuggestedSites(const System::WideString bstrRelativeUrl);
	void __fastcall ShowTabsHelp();
	void __fastcall ShowInPrivateHelp();
	System::WordBool __fastcall msIsSiteMode();
	void __fastcall msSiteModeShowThumbBar();
	System::OleVariant __fastcall msSiteModeAddThumbBarButton(const System::WideString bstrIconURL, const System::WideString bstrTooltip);
	void __fastcall msSiteModeUpdateThumbBarButton(const System::OleVariant &ButtonID, System::WordBool fEnabled, System::WordBool fVisible);
	void __fastcall msSiteModeSetIconOverlay(const System::WideString IconUrl)/* overload */;
	void __fastcall msSiteModeSetIconOverlay(const System::WideString IconUrl, const System::OleVariant &pvarDescription)/* overload */;
	void __fastcall msSiteModeClearIconOverlay();
	void __fastcall msAddSiteMode();
	void __fastcall msSiteModeCreateJumpList(const System::WideString bstrHeader);
	void __fastcall msSiteModeAddJumpListItem(const System::WideString bstrName, const System::WideString bstrActionUri, const System::WideString bstrIconUri)/* overload */;
	void __fastcall msSiteModeAddJumpListItem(const System::WideString bstrName, const System::WideString bstrActionUri, const System::WideString bstrIconUri, const System::OleVariant &pvarWindowType)/* overload */;
	void __fastcall msSiteModeClearJumpList();
	void __fastcall msSiteModeShowJumpList();
	System::OleVariant __fastcall msSiteModeAddButtonStyle(const System::OleVariant &uiButtonID, const System::WideString bstrIconURL, const System::WideString bstrTooltip);
	void __fastcall msSiteModeShowButtonStyle(const System::OleVariant &uiButtonID, const System::OleVariant &uiStyleID);
	void __fastcall msSiteModeActivate();
	System::OleVariant __fastcall msIsSiteModeFirstRun(System::WordBool fPreserveState);
	void __fastcall msAddTrackingProtectionList(const System::WideString URL, const System::WideString bstrFilterName);
	System::WordBool __fastcall msTrackingProtectionEnabled();
	System::WordBool __fastcall msActiveXFilteringEnabled();
	System::OleVariant __fastcall msProvisionNetworks(const System::WideString bstrProvisioningXml);
	void __fastcall msReportSafeUrl();
	void __fastcall msSiteModeRefreshBadge();
	void __fastcall msSiteModeClearBadge();
	void __fastcall msDiagnoseConnectionUILess();
	void __fastcall msLaunchNetworkClientHelp();
	void __fastcall msChangeDefaultBrowser(System::WordBool fChange);
	void __fastcall msStopPeriodicTileUpdate();
	void __fastcall msStartPeriodicTileUpdate(const System::OleVariant &pollingUris)/* overload */;
	void __fastcall msStartPeriodicTileUpdate(const System::OleVariant &pollingUris, const System::OleVariant &startTime)/* overload */;
	void __fastcall msStartPeriodicTileUpdate(const System::OleVariant &pollingUris, const System::OleVariant &startTime, const System::OleVariant &uiUpdateRecurrence)/* overload */;
	void __fastcall msStartPeriodicTileUpdateBatch(const System::OleVariant &pollingUris)/* overload */;
	void __fastcall msStartPeriodicTileUpdateBatch(const System::OleVariant &pollingUris, const System::OleVariant &startTime)/* overload */;
	void __fastcall msStartPeriodicTileUpdateBatch(const System::OleVariant &pollingUris, const System::OleVariant &startTime, const System::OleVariant &uiUpdateRecurrence)/* overload */;
	void __fastcall msClearTile();
	void __fastcall msEnableTileNotificationQueue(System::WordBool fChange);
	System::OleVariant __fastcall msPinnedSiteState();
	void __fastcall msEnableTileNotificationQueueForSquare150x150(System::WordBool fChange);
	void __fastcall msEnableTileNotificationQueueForWide310x150(System::WordBool fChange);
	void __fastcall msEnableTileNotificationQueueForSquare310x310(System::WordBool fChange);
	void __fastcall msScheduledTileNotification(const System::WideString bstrNotificationXml, const System::WideString bstrNotificationId, const System::WideString bstrNotificationTag)/* overload */;
	void __fastcall msScheduledTileNotification(const System::WideString bstrNotificationXml, const System::WideString bstrNotificationId, const System::WideString bstrNotificationTag, const System::OleVariant &startTime)/* overload */;
	void __fastcall msScheduledTileNotification(const System::WideString bstrNotificationXml, const System::WideString bstrNotificationId, const System::WideString bstrNotificationTag, const System::OleVariant &startTime, const System::OleVariant &expirationTime)/* overload */;
	void __fastcall msRemoveScheduledTileNotification(const System::WideString bstrNotificationId);
	void __fastcall msStartPeriodicBadgeUpdate(const System::WideString pollingUri)/* overload */;
	void __fastcall msStartPeriodicBadgeUpdate(const System::WideString pollingUri, const System::OleVariant &startTime)/* overload */;
	void __fastcall msStartPeriodicBadgeUpdate(const System::WideString pollingUri, const System::OleVariant &startTime, const System::OleVariant &uiUpdateRecurrence)/* overload */;
	void __fastcall msStopPeriodicBadgeUpdate();
	void __fastcall msLaunchInternetOptions();
	__property _di_IShellUIHelper6 DefaultInterface = {read=GetDefaultInterface};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION CoShellNameSpace : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__classmethod _di_IShellNameSpace __fastcall Create();
	__classmethod _di_IShellNameSpace __fastcall CreateRemote(const System::UnicodeString MachineName);
public:
	/* TObject.Create */ inline __fastcall CoShellNameSpace() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~CoShellNameSpace() { }
	
};

#pragma pack(pop)

typedef void __fastcall (__closure *TShellNameSpaceFavoritesSelectionChange)(System::TObject* ASender, int cItems, int hItem, const System::WideString strName, const System::WideString strUrl, int cVisits, const System::WideString strDate, int fAvailableOffline);

#pragma pack(push,4)
class PASCALIMPLEMENTATION TShellNameSpace : public Vcl::Oleserver::TOleServer
{
	typedef Vcl::Oleserver::TOleServer inherited;
	
private:
	TShellNameSpaceFavoritesSelectionChange FOnFavoritesSelectionChange;
	System::Classes::TNotifyEvent FOnSelectionChange;
	System::Classes::TNotifyEvent FOnDoubleClick;
	System::Classes::TNotifyEvent FOnInitialized;
	_di_IShellNameSpace FIntf;
	_di_IShellNameSpace __fastcall GetDefaultInterface();
	
protected:
	virtual void __fastcall InitServerData();
	virtual void __fastcall InvokeEvent(int DispID, System::Win::Comobj::TOleVariantArray &Params);
	System::WordBool __fastcall Get_SubscriptionsEnabled();
	int __fastcall Get_EnumOptions();
	void __fastcall Set_EnumOptions(int pgrfEnumFlags);
	_di_IDispatch __fastcall Get_SelectedItem();
	void __fastcall Set_SelectedItem(const _di_IDispatch pItem);
	System::OleVariant __fastcall Get_Root();
	void __fastcall Set_Root(const System::OleVariant &pvar);
	int __fastcall Get_Depth();
	void __fastcall Set_Depth(int piDepth);
	unsigned __fastcall Get_Mode();
	void __fastcall Set_Mode(unsigned puMode);
	unsigned __fastcall Get_Flags();
	void __fastcall Set_Flags(unsigned pdwFlags);
	void __fastcall Set_TVFlags(unsigned dwFlags);
	unsigned __fastcall Get_TVFlags();
	System::WideString __fastcall Get_Columns();
	void __fastcall Set_Columns(const System::WideString bstrColumns);
	int __fastcall Get_CountViewTypes();
	
public:
	__fastcall virtual TShellNameSpace(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TShellNameSpace();
	virtual void __fastcall Connect();
	void __fastcall ConnectTo(_di_IShellNameSpace svrIntf);
	virtual void __fastcall Disconnect();
	void __fastcall MoveSelectionUp();
	void __fastcall MoveSelectionDown();
	void __fastcall ResetSort();
	void __fastcall NewFolder();
	void __fastcall Synchronize();
	void __fastcall Import();
	void __fastcall Export();
	void __fastcall InvokeContextMenuCommand(const System::WideString strCommand);
	void __fastcall MoveSelectionTo();
	System::WordBool __fastcall CreateSubscriptionForSelection();
	System::WordBool __fastcall DeleteSubscriptionForSelection();
	void __fastcall SetRoot(const System::WideString bstrFullPath);
	void __fastcall SetViewType(int iType);
	_di_IDispatch __fastcall SelectedItems();
	void __fastcall Expand(const System::OleVariant &var_, int iDepth);
	void __fastcall UnselectAll();
	__property _di_IShellNameSpace DefaultInterface = {read=GetDefaultInterface};
	__property System::WordBool SubscriptionsEnabled = {read=Get_SubscriptionsEnabled, nodefault};
	__property _di_IDispatch SelectedItem = {read=Get_SelectedItem, write=Set_SelectedItem};
	__property System::OleVariant Root = {read=Get_Root, write=Set_Root};
	__property int CountViewTypes = {read=Get_CountViewTypes, nodefault};
	__property int EnumOptions = {read=Get_EnumOptions, write=Set_EnumOptions, nodefault};
	__property int Depth = {read=Get_Depth, write=Set_Depth, nodefault};
	__property unsigned Mode = {read=Get_Mode, write=Set_Mode, nodefault};
	__property unsigned Flags = {read=Get_Flags, write=Set_Flags, nodefault};
	__property unsigned TVFlags = {read=Get_TVFlags, write=Set_TVFlags, nodefault};
	__property System::WideString Columns = {read=Get_Columns, write=Set_Columns};
	
__published:
	__property TShellNameSpaceFavoritesSelectionChange OnFavoritesSelectionChange = {read=FOnFavoritesSelectionChange, write=FOnFavoritesSelectionChange};
	__property System::Classes::TNotifyEvent OnSelectionChange = {read=FOnSelectionChange, write=FOnSelectionChange};
	__property System::Classes::TNotifyEvent OnDoubleClick = {read=FOnDoubleClick, write=FOnDoubleClick};
	__property System::Classes::TNotifyEvent OnInitialized = {read=FOnInitialized, write=FOnInitialized};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION CoCScriptErrorList : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__classmethod _di_IScriptErrorList __fastcall Create();
	__classmethod _di_IScriptErrorList __fastcall CreateRemote(const System::UnicodeString MachineName);
public:
	/* TObject.Create */ inline __fastcall CoCScriptErrorList() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~CoCScriptErrorList() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 SHDocVwMajorVersion = System::Int8(0x1);
static const System::Int8 SHDocVwMinorVersion = System::Int8(0x1);
extern DELPHI_PACKAGE GUID LIBID_SHDocVw;
extern DELPHI_PACKAGE GUID IID_IWebBrowser;
extern DELPHI_PACKAGE GUID DIID_DWebBrowserEvents;
extern DELPHI_PACKAGE GUID IID_IWebBrowserApp;
extern DELPHI_PACKAGE GUID IID_IWebBrowser2;
extern DELPHI_PACKAGE GUID DIID_DWebBrowserEvents2;
extern DELPHI_PACKAGE GUID CLASS_WebBrowser_V1;
extern DELPHI_PACKAGE GUID CLASS_WebBrowser;
extern DELPHI_PACKAGE GUID CLASS_InternetExplorer;
extern DELPHI_PACKAGE GUID CLASS_InternetExplorerMedium;
extern DELPHI_PACKAGE GUID CLASS_ShellBrowserWindow;
extern DELPHI_PACKAGE GUID DIID_DShellWindowsEvents;
extern DELPHI_PACKAGE GUID IID_IShellWindows;
extern DELPHI_PACKAGE GUID CLASS_ShellWindows;
extern DELPHI_PACKAGE GUID IID_IShellUIHelper;
extern DELPHI_PACKAGE GUID IID_IShellUIHelper2;
extern DELPHI_PACKAGE GUID IID_IShellUIHelper3;
extern DELPHI_PACKAGE GUID IID_IShellUIHelper4;
extern DELPHI_PACKAGE GUID IID_IShellUIHelper5;
extern DELPHI_PACKAGE GUID IID_IShellUIHelper6;
extern DELPHI_PACKAGE GUID CLASS_ShellUIHelper;
extern DELPHI_PACKAGE GUID DIID_DShellNameSpaceEvents;
extern DELPHI_PACKAGE GUID IID_IShellFavoritesNameSpace;
extern DELPHI_PACKAGE GUID IID_IShellNameSpace;
extern DELPHI_PACKAGE GUID CLASS_ShellNameSpace;
extern DELPHI_PACKAGE GUID IID_IScriptErrorList;
extern DELPHI_PACKAGE GUID CLASS_CScriptErrorList;
static const System::Int8 navOpenInNewWindow = System::Int8(0x1);
static const System::Int8 navNoHistory = System::Int8(0x2);
static const System::Int8 navNoReadFromCache = System::Int8(0x4);
static const System::Int8 navNoWriteToCache = System::Int8(0x8);
static const System::Int8 navAllowAutosearch = System::Int8(0x10);
static const System::Int8 navBrowserBar = System::Int8(0x20);
static const System::Int8 navHyperlink = System::Int8(0x40);
static const System::Byte navEnforceRestricted = System::Byte(0x80);
static const System::Word navNewWindowsManaged = System::Word(0x100);
static const System::Word navUntrustedForDownload = System::Word(0x200);
static const System::Word navTrustedForActiveX = System::Word(0x400);
static const System::Word navOpenInNewTab = System::Word(0x800);
static const System::Word navOpenInBackgroundTab = System::Word(0x1000);
static const System::Word navKeepWordWheelText = System::Word(0x2000);
static const System::Word navVirtualTab = System::Word(0x4000);
static const System::Word navBlockRedirectsXDomain = System::Word(0x8000);
static const int navOpenNewForegroundTab = int(0x10000);
static const int navTravelLogScreenshot = int(0x20000);
static const int navDeferUnload = int(0x40000);
static const int navSpeculative = int(0x80000);
static const int navSuggestNewWindow = int(0x100000);
static const int navSuggestNewTab = int(0x200000);
static const int navReserved1 = int(0x400000);
static const System::Int8 REFRESH_NORMAL = System::Int8(0x0);
static const System::Int8 REFRESH_IFEXPIRED = System::Int8(0x1);
static const System::Int8 REFRESH_COMPLETELY = System::Int8(0x3);
static const unsigned CSC_UPDATECOMMANDS = unsigned(0xffffffff);
static const System::Int8 CSC_NAVIGATEFORWARD = System::Int8(0x1);
static const System::Int8 CSC_NAVIGATEBACK = System::Int8(0x2);
static const System::Int8 OLECMDID_OPEN = System::Int8(0x1);
static const System::Int8 OLECMDID_NEW = System::Int8(0x2);
static const System::Int8 OLECMDID_SAVE = System::Int8(0x3);
static const System::Int8 OLECMDID_SAVEAS = System::Int8(0x4);
static const System::Int8 OLECMDID_SAVECOPYAS = System::Int8(0x5);
static const System::Int8 OLECMDID_PRINT = System::Int8(0x6);
static const System::Int8 OLECMDID_PRINTPREVIEW = System::Int8(0x7);
static const System::Int8 OLECMDID_PAGESETUP = System::Int8(0x8);
static const System::Int8 OLECMDID_SPELL = System::Int8(0x9);
static const System::Int8 OLECMDID_PROPERTIES = System::Int8(0xa);
static const System::Int8 OLECMDID_CUT = System::Int8(0xb);
static const System::Int8 OLECMDID_COPY = System::Int8(0xc);
static const System::Int8 OLECMDID_PASTE = System::Int8(0xd);
static const System::Int8 OLECMDID_PASTESPECIAL = System::Int8(0xe);
static const System::Int8 OLECMDID_UNDO = System::Int8(0xf);
static const System::Int8 OLECMDID_REDO = System::Int8(0x10);
static const System::Int8 OLECMDID_SELECTALL = System::Int8(0x11);
static const System::Int8 OLECMDID_CLEARSELECTION = System::Int8(0x12);
static const System::Int8 OLECMDID_ZOOM = System::Int8(0x13);
static const System::Int8 OLECMDID_GETZOOMRANGE = System::Int8(0x14);
static const System::Int8 OLECMDID_UPDATECOMMANDS = System::Int8(0x15);
static const System::Int8 OLECMDID_REFRESH = System::Int8(0x16);
static const System::Int8 OLECMDID_STOP = System::Int8(0x17);
static const System::Int8 OLECMDID_HIDETOOLBARS = System::Int8(0x18);
static const System::Int8 OLECMDID_SETPROGRESSMAX = System::Int8(0x19);
static const System::Int8 OLECMDID_SETPROGRESSPOS = System::Int8(0x1a);
static const System::Int8 OLECMDID_SETPROGRESSTEXT = System::Int8(0x1b);
static const System::Int8 OLECMDID_SETTITLE = System::Int8(0x1c);
static const System::Int8 OLECMDID_SETDOWNLOADSTATE = System::Int8(0x1d);
static const System::Int8 OLECMDID_STOPDOWNLOAD = System::Int8(0x1e);
static const System::Int8 OLECMDID_ONTOOLBARACTIVATED = System::Int8(0x1f);
static const System::Int8 OLECMDID_FIND = System::Int8(0x20);
static const System::Int8 OLECMDID_DELETE = System::Int8(0x21);
static const System::Int8 OLECMDID_HTTPEQUIV = System::Int8(0x22);
static const System::Int8 OLECMDID_HTTPEQUIV_DONE = System::Int8(0x23);
static const System::Int8 OLECMDID_ENABLE_INTERACTION = System::Int8(0x24);
static const System::Int8 OLECMDID_ONUNLOAD = System::Int8(0x25);
static const System::Int8 OLECMDID_PROPERTYBAG2 = System::Int8(0x26);
static const System::Int8 OLECMDID_PREREFRESH = System::Int8(0x27);
static const System::Int8 OLECMDID_SHOWSCRIPTERROR = System::Int8(0x28);
static const System::Int8 OLECMDID_SHOWMESSAGE = System::Int8(0x29);
static const System::Int8 OLECMDID_SHOWFIND = System::Int8(0x2a);
static const System::Int8 OLECMDID_SHOWPAGESETUP = System::Int8(0x2b);
static const System::Int8 OLECMDID_SHOWPRINT = System::Int8(0x2c);
static const System::Int8 OLECMDID_CLOSE = System::Int8(0x2d);
static const System::Int8 OLECMDID_ALLOWUILESSSAVEAS = System::Int8(0x2e);
static const System::Int8 OLECMDID_DONTDOWNLOADCSS = System::Int8(0x2f);
static const System::Int8 OLECMDID_UPDATEPAGESTATUS = System::Int8(0x30);
static const System::Int8 OLECMDID_PRINT2 = System::Int8(0x31);
static const System::Int8 OLECMDID_PRINTPREVIEW2 = System::Int8(0x32);
static const System::Int8 OLECMDID_SETPRINTTEMPLATE = System::Int8(0x33);
static const System::Int8 OLECMDID_GETPRINTTEMPLATE = System::Int8(0x34);
static const System::Int8 OLECMDID_PAGEACTIONBLOCKED = System::Int8(0x37);
static const System::Int8 OLECMDID_PAGEACTIONUIQUERY = System::Int8(0x38);
static const System::Int8 OLECMDID_FOCUSVIEWCONTROLS = System::Int8(0x39);
static const System::Int8 OLECMDID_FOCUSVIEWCONTROLSQUERY = System::Int8(0x3a);
static const System::Int8 OLECMDID_SHOWPAGEACTIONMENU = System::Int8(0x3b);
static const System::Int8 OLECMDID_ADDTRAVELENTRY = System::Int8(0x3c);
static const System::Int8 OLECMDID_UPDATETRAVELENTRY = System::Int8(0x3d);
static const System::Int8 OLECMDID_UPDATEBACKFORWARDSTATE = System::Int8(0x3e);
static const System::Int8 OLECMDID_OPTICAL_ZOOM = System::Int8(0x3f);
static const System::Int8 OLECMDID_OPTICAL_GETZOOMRANGE = System::Int8(0x40);
static const System::Int8 OLECMDID_WINDOWSTATECHANGED = System::Int8(0x41);
static const System::Int8 OLECMDID_ACTIVEXINSTALLSCOPE = System::Int8(0x42);
static const System::Int8 OLECMDID_UPDATETRAVELENTRY_DATARECOVERY = System::Int8(0x43);
static const System::Int8 OLECMDID_SHOWTASKDLG = System::Int8(0x44);
static const System::Int8 OLECMDID_POPSTATEEVENT = System::Int8(0x45);
static const System::Int8 OLECMDID_VIEWPORT_MODE = System::Int8(0x46);
static const System::Int8 OLECMDID_LAYOUT_VIEWPORT_WIDTH = System::Int8(0x47);
static const System::Int8 OLECMDID_VISUAL_VIEWPORT_EXCLUDE_BOTTOM = System::Int8(0x48);
static const System::Int8 OLECMDID_USER_OPTICAL_ZOOM = System::Int8(0x49);
static const System::Int8 OLECMDID_PAGEAVAILABLE = System::Int8(0x4a);
static const System::Int8 OLECMDID_GETUSERSCALABLE = System::Int8(0x4b);
static const System::Int8 OLECMDID_UPDATE_CARET = System::Int8(0x4c);
static const System::Int8 OLECMDID_ENABLE_VISIBILITY = System::Int8(0x4d);
static const System::Int8 OLECMDID_MEDIA_PLAYBACK = System::Int8(0x4e);
static const System::Int8 OLECMDID_SETFAVICON = System::Int8(0x4f);
static const System::Int8 OLECMDID_SET_HOST_FULLSCREENMODE = System::Int8(0x50);
static const System::Int8 OLECMDID_EXITFULLSCREEN = System::Int8(0x51);
static const System::Int8 OLECMDID_SCROLLCOMPLETE = System::Int8(0x52);
static const System::Int8 OLECMDID_ONBEFOREUNLOAD = System::Int8(0x53);
static const System::Int8 OLECMDF_SUPPORTED = System::Int8(0x1);
static const System::Int8 OLECMDF_ENABLED = System::Int8(0x2);
static const System::Int8 OLECMDF_LATCHED = System::Int8(0x4);
static const System::Int8 OLECMDF_NINCHED = System::Int8(0x8);
static const System::Int8 OLECMDF_INVISIBLE = System::Int8(0x10);
static const System::Int8 OLECMDF_DEFHIDEONCTXTMENU = System::Int8(0x20);
static const System::Int8 OLECMDEXECOPT_DODEFAULT = System::Int8(0x0);
static const System::Int8 OLECMDEXECOPT_PROMPTUSER = System::Int8(0x1);
static const System::Int8 OLECMDEXECOPT_DONTPROMPTUSER = System::Int8(0x2);
static const System::Int8 OLECMDEXECOPT_SHOWHELP = System::Int8(0x3);
static const System::Int8 READYSTATE_UNINITIALIZED = System::Int8(0x0);
static const System::Int8 READYSTATE_LOADING = System::Int8(0x1);
static const System::Int8 READYSTATE_LOADED = System::Int8(0x2);
static const System::Int8 READYSTATE_INTERACTIVE = System::Int8(0x3);
static const System::Int8 READYSTATE_COMPLETE = System::Int8(0x4);
static const System::Int8 secureLockIconUnsecure = System::Int8(0x0);
static const System::Int8 secureLockIconMixed = System::Int8(0x1);
static const System::Int8 secureLockIconSecureUnknownBits = System::Int8(0x2);
static const System::Int8 secureLockIconSecure40Bit = System::Int8(0x3);
static const System::Int8 secureLockIconSecure56Bit = System::Int8(0x4);
static const System::Int8 secureLockIconSecureFortezza = System::Int8(0x5);
static const System::Int8 secureLockIconSecure128Bit = System::Int8(0x6);
static const System::Int8 ProtectedModeRedirect = System::Int8(0x1);
static const System::Int8 SWC_EXPLORER = System::Int8(0x0);
static const System::Int8 SWC_BROWSER = System::Int8(0x1);
static const System::Int8 SWC_3RDPARTY = System::Int8(0x2);
static const System::Int8 SWC_CALLBACK = System::Int8(0x4);
static const System::Int8 SWC_DESKTOP = System::Int8(0x8);
static const System::Int8 SWFO_NEEDDISPATCH = System::Int8(0x1);
static const System::Int8 SWFO_INCLUDEPENDING = System::Int8(0x2);
static const System::Int8 SWFO_COOKIEPASSED = System::Int8(0x4);
}	/* namespace Shdocvw */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SHDOCVW)
using namespace Shdocvw;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// ShdocvwHPP
