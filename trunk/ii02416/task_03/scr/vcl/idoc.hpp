// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'idoc.pas' rev: 35.00 (Windows)

#ifndef IdocHPP
#define IdocHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.ActiveX.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.OleCtrls.hpp>
#include <System.Win.StdVCL.hpp>
#include <MSHTML.hpp>

//-- user supplied -----------------------------------------------------------

namespace Idoc
{
//-- forward type declarations -----------------------------------------------
struct _DOCHOSTUIINFO;
__interface DELPHIINTERFACE IDocHostShowUI;
typedef System::DelphiInterface<IDocHostShowUI> _di_IDocHostShowUI;
__interface DELPHIINTERFACE IDocHostUIHandler;
typedef System::DelphiInterface<IDocHostUIHandler> _di_IDocHostUIHandler;
__interface DELPHIINTERFACE IDocHostUIHandler2;
typedef System::DelphiInterface<IDocHostUIHandler2> _di_IDocHostUIHandler2;
__interface DELPHIINTERFACE IAsyncManager;
typedef System::DelphiInterface<IAsyncManager> _di_IAsyncManager;
//-- type declarations -------------------------------------------------------
typedef Mshtml::_RemotableHandle *wireHWND;

struct DECLSPEC_DRECORD _DOCHOSTUIINFO
{
public:
	unsigned cbSize;
	unsigned dwFlags;
	unsigned dwDoubleClick;
	System::WideChar *pchHostCss;
	System::WideChar *pchHostNS;
};


__interface  INTERFACE_UUID("{C4D244B0-D43E-11CF-893B-00AA00BDCE1A}") IDocHostShowUI  : public System::IInterface 
{
	virtual HRESULT __stdcall ShowMessage(NativeUInt hwnd, System::WideChar * lpstrText, System::WideChar * lpstrCaption, int dwType, System::WideChar * lpstrHelpFile, int dwHelpContext, NativeInt &plResult) = 0 ;
	virtual HRESULT __stdcall ShowHelp(NativeUInt hwnd, System::WideChar * pszHelpFile, unsigned uCommand, int dwData, System::Types::TPoint ptMouse, _di_IDispatch &pDispachObjectHit) = 0 ;
};

__interface  INTERFACE_UUID("{BD3F23C0-D43E-11CF-893B-00AA00BDCE1A}") IDocHostUIHandler  : public System::IInterface 
{
	virtual HRESULT __stdcall ShowContextMenu(unsigned dwID, Mshtml::PtagPOINT ppt, const System::_di_IInterface pcmdtReserved, const _di_IDispatch pdispReserved) = 0 ;
	virtual HRESULT __stdcall GetHostInfo(_DOCHOSTUIINFO &pInfo) = 0 ;
	virtual HRESULT __stdcall ShowUI(unsigned dwID, const _di_IOleInPlaceActiveObject pActiveObject, const _di_IOleCommandTarget pCommandTarget, const _di_IOleInPlaceFrame pFrame, const _di_IOleInPlaceUIWindow pDoc) = 0 ;
	virtual HRESULT __stdcall HideUI() = 0 ;
	virtual HRESULT __stdcall UpdateUI() = 0 ;
	virtual HRESULT __stdcall EnableModeless(int fEnable) = 0 ;
	virtual HRESULT __stdcall OnDocWindowActivate(int fActivate) = 0 ;
	virtual HRESULT __stdcall OnFrameWindowActivate(int fActivate) = 0 ;
	virtual HRESULT __stdcall ResizeBorder(System::Types::TRect &prcBorder, const _di_IOleInPlaceUIWindow pUIWindow, int fRameWindow) = 0 ;
	virtual HRESULT __stdcall TranslateAccelerator(tagMSG &lpmsg, GUID &pguidCmdGroup, unsigned nCmdID) = 0 ;
	virtual HRESULT __stdcall GetOptionKeyPath(/* out */ System::WideChar * &pchKey, unsigned dw) = 0 ;
	virtual HRESULT __stdcall GetDropTarget(const _di_IDropTarget pDropTarget, /* out */ _di_IDropTarget &ppDropTarget) = 0 ;
	virtual HRESULT __stdcall GetExternal(/* out */ _di_IDispatch &ppDispatch) = 0 ;
	virtual HRESULT __stdcall TranslateUrl(unsigned dwTranslate, System::WideChar * pchURLIn, /* out */ System::WideChar * &ppchURLOut) = 0 ;
	virtual HRESULT __stdcall FilterDataObject(const _di_IDataObject pDO, /* out */ _di_IDataObject &ppDORet) = 0 ;
};

__interface  INTERFACE_UUID("{3050F6D0-98B5-11CF-BB82-00AA00BDCE0B}") IDocHostUIHandler2  : public IDocHostUIHandler 
{
	virtual HRESULT __stdcall GetOverrideKeyPath(/* out */ System::WideChar * &pchKey, unsigned dw) = 0 ;
};

__interface  INTERFACE_UUID("{0000002A-0000-0000-C000-000000000046}") IAsyncManager  : public System::IInterface 
{
	virtual HRESULT __stdcall CompleteCall(HRESULT Result_) = 0 ;
	virtual HRESULT __stdcall GetCallContext(GUID &riid, /* out */ void * &pInterface) = 0 ;
	virtual HRESULT __stdcall GetState(/* out */ unsigned &pulStateFlags) = 0 ;
};

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE GUID LIBID_TESTIDLLib;
extern DELPHI_PACKAGE GUID IID_IDocHostShowUI;
extern DELPHI_PACKAGE GUID IID_IDocHostUIHandler;
extern DELPHI_PACKAGE GUID IID_IOleWindow;
extern DELPHI_PACKAGE GUID IID_IOleInPlaceActiveObject;
extern DELPHI_PACKAGE GUID IID_IOleInPlaceUIWindow;
extern DELPHI_PACKAGE GUID IID_IOleCommandTarget;
extern DELPHI_PACKAGE GUID IID_IOleInPlaceFrame;
extern DELPHI_PACKAGE GUID IID_IDropTarget;
extern DELPHI_PACKAGE GUID IID_IDataObject;
extern DELPHI_PACKAGE GUID IID_IEnumFORMATETC;
extern DELPHI_PACKAGE GUID IID_IAdviseSink;
extern DELPHI_PACKAGE GUID IID_IAsyncManager;
extern DELPHI_PACKAGE GUID IID_IPersist;
extern DELPHI_PACKAGE GUID IID_IPersistStream;
extern DELPHI_PACKAGE GUID IID_IMoniker;
extern DELPHI_PACKAGE GUID IID_ISequentialStream;
extern DELPHI_PACKAGE GUID IID_IStream;
extern DELPHI_PACKAGE GUID IID_IBindCtx;
extern DELPHI_PACKAGE GUID IID_IRunningObjectTable;
extern DELPHI_PACKAGE GUID IID_IEnumMoniker;
extern DELPHI_PACKAGE GUID IID_IEnumString;
extern DELPHI_PACKAGE GUID IID_IEnumSTATDATA;
extern DELPHI_PACKAGE GUID CLASS_FakeCoClass;
}	/* namespace Idoc */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IDOC)
using namespace Idoc;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IdocHPP
