// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.DockTabSet.pas' rev: 35.00 (Windows)

#ifndef Vcl_DocktabsetHPP
#define Vcl_DocktabsetHPP

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
#include <Vcl.Tabs.hpp>
#include <Winapi.Messages.hpp>
#include <System.Types.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <System.Contnrs.hpp>
#include <Vcl.CaptionedDockTree.hpp>
#include <Vcl.Graphics.hpp>

//-- user supplied -----------------------------------------------------------
#ifndef _WIN64
#pragma link "dwmapi.lib"
#endif //_WIN64

namespace Vcl
{
namespace Docktabset
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TTabDockPanel;
class DELPHICLASS TDockClientInfo;
class DELPHICLASS TDockTabSet;
__interface DELPHIINTERFACE IAlternateDockHost;
typedef System::DelphiInterface<IAlternateDockHost> _di_IAlternateDockHost;
class DELPHICLASS TCaptionedTabDockTree;
class DELPHICLASS ETabDockException;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TTabDockPanel : public Vcl::Extctrls::TPanel
{
	typedef Vcl::Extctrls::TPanel inherited;
	
private:
	Vcl::Extctrls::TTimer* FAutoHideTimer;
	int FSplitterWidth;
	TDockClientInfo* FDockClientInfo;
	Vcl::Extctrls::TPaintBox* FDockCaption;
	Vcl::Extctrls::TPanel* FDockCaptionPanel;
	System::Types::TPoint FDownPos;
	bool FFirstErase;
	int FGrabberSize;
	bool FInAnimation;
	Vcl::Extctrls::TPanel* FSplitterPanel;
	System::Types::TRect FStartingBounds;
	Vcl::Captioneddocktree::TDockCaptionDrawer* FDockCaptionDrawer;
	unsigned FMouseDownTime;
	int FAnimateSpeed;
	Vcl::Graphics::TBitmap* FBitmapPrintChache;
	bool FIsNotXP;
	void __fastcall AutoHideTimerExec(System::TObject* Sender);
	void __fastcall PaintDockCaption(System::TObject* Sender);
	void __fastcall SplitterMouseDown(System::TObject* Sender, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall SplitterMouseMove(System::TObject* Sender, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall DockCaptionMouseUp(System::TObject* Sender, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall DockCaptionMouseDown(System::TObject* Sender, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall DockCaptionMouseMove(System::TObject* Sender, System::Classes::TShiftState Shift, int X, int Y);
	
protected:
	bool __fastcall ShouldAutoHide();
	void __fastcall BeginAnimation();
	void __fastcall EndAnimation();
	virtual System::Types::TRect __fastcall GetCaptionRect();
	HIDESBASE MESSAGE void __fastcall CMShowingChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Message);
	HIDESBASE MESSAGE void __fastcall WMNCPaint(Winapi::Messages::TWMNCPaint &Message);
	MESSAGE void __fastcall WMPrint(Winapi::Messages::TWMPrint &Message);
	HIDESBASE MESSAGE void __fastcall WMPrintClient(Winapi::Messages::TWMPrint &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Message);
	__property int SplitterWidth = {read=FSplitterWidth, write=FSplitterWidth, nodefault};
	__property TDockClientInfo* DockClientInfo = {read=FDockClientInfo};
	__property Vcl::Extctrls::TPanel* SplitterPanel = {read=FSplitterPanel};
	
public:
	__fastcall virtual TTabDockPanel(System::Classes::TComponent* AOwner, TDockClientInfo* DockClientInfo);
	__fastcall virtual ~TTabDockPanel();
	void __fastcall UpdateDockCaptionPin();
	__property int AnimateSpeed = {read=FAnimateSpeed, write=FAnimateSpeed, nodefault};
public:
	/* TWinControl.CreateParented */ inline __fastcall TTabDockPanel(HWND ParentWindow) : Vcl::Extctrls::TPanel(ParentWindow) { }
	
};


#ifndef _WIN64
typedef System::TMetaClass* TTabDockPanelClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TTabDockPanelClass);
#endif /* _WIN64 */

class PASCALIMPLEMENTATION TDockClientInfo : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	TDockTabSet* FDockTabSet;
	Vcl::Controls::TWinControl* FDockClient;
	int FTabIndex;
	int FListIndex;
	TTabDockPanel* FParentPanel;
	int FImageIndex;
	void __fastcall SetTabIndex(const int Value);
	void __fastcall AddIconToImageList();
	
protected:
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	
public:
	__fastcall TDockClientInfo(TDockTabSet* const ADockTabSet, Vcl::Controls::TWinControl* const ADockClient);
	__fastcall virtual ~TDockClientInfo();
	void __fastcall CreateTab(bool AlwaysCreate = false);
	__classmethod virtual TTabDockPanelClass __fastcall GetTabDockPanelClass();
	__property Vcl::Controls::TWinControl* DockClient = {read=FDockClient};
	__property TDockTabSet* DockTabSet = {read=FDockTabSet};
	__property int ImageIndex = {read=FImageIndex, write=FImageIndex, nodefault};
	__property int ListIndex = {read=FListIndex, nodefault};
	__property TTabDockPanel* ParentPanel = {read=FParentPanel};
	__property int TabIndex = {read=FTabIndex, write=SetTabIndex, nodefault};
};


class PASCALIMPLEMENTATION TDockTabSet : public Vcl::Tabs::TTabSet
{
	typedef Vcl::Tabs::TTabSet inherited;
	
private:
	bool FAutoSelect;
	System::Contnrs::TObjectList* FDockClients;
	TDockClientInfo* FCurrentClient;
	Vcl::Controls::TWinControl* FDestDockSite;
	Vcl::Controls::TImageList* FInternalImages;
	System::Classes::TNotifyEvent FOnTabAdded;
	System::Classes::TNotifyEvent FOnTabRemoved;
	bool FShouldFocus;
	Vcl::Extctrls::TTimer* FAutoPopTimer;
	int FAutoPopIndex;
	void __fastcall AutoPopTimerExec(System::TObject* Sender);
	System::Types::TRect __fastcall CalcDockSize(Vcl::Controls::TControl* const Client);
	MESSAGE void __fastcall CMDockNotification(Vcl::Controls::TCMDockNotification &Message);
	void __fastcall InvalidateDockSite(Vcl::Controls::TControl* const Client, const bool FocusLost);
	void __fastcall SetDestDockSite(Vcl::Controls::TWinControl* const Value);
	HIDESBASE MESSAGE void __fastcall CMDockClient(Vcl::Controls::TCMDockClient &Message);
	HIDESBASE MESSAGE void __fastcall CMUnDockClient(Vcl::Controls::TCMUnDockClient &Message);
	MESSAGE void __fastcall WMPinDockClient(Winapi::Messages::TMessage &Message);
	
protected:
	DYNAMIC void __fastcall DoAddDockClient(Vcl::Controls::TControl* Client, const System::Types::TRect &ARect);
	DYNAMIC void __fastcall DockOver(Vcl::Controls::TDragDockObject* Source, int X, int Y, System::Uitypes::TDragState State, bool &Accept);
	virtual bool __fastcall DockReplaceDockClient(Vcl::Controls::TControl* Client, Vcl::Controls::TWinControl* NewDockSite, Vcl::Controls::TControl* DropControl, Vcl::Controls::TAlign ControlSide, Vcl::Controls::TControl* ReplacementClient);
	DYNAMIC void __fastcall DoRemoveDockClient(Vcl::Controls::TControl* Client);
	TDockClientInfo* __fastcall FindDockClientInfo(Vcl::Controls::TControl* const Client);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall SetTabIndex(int Value);
	virtual void __fastcall ShowDockClientInfo(TDockClientInfo* const DockClientInfo);
	virtual int __fastcall GetImageIndex(int TabIndex);
	virtual System::UnicodeString __fastcall GetTabName(Vcl::Controls::TControl* const Client);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	virtual bool __fastcall ShouldAutoHide(Vcl::Controls::TWinControl* const Client);
	
public:
	__fastcall virtual TDockTabSet(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TDockTabSet();
	void __fastcall ShowDockClient(Vcl::Controls::TControl* const Client);
	int __fastcall IndexOfDockClient(Vcl::Controls::TControl* const Client);
	void __fastcall HideCurrentDockClient(const int AnimateSpeed = 0xc8);
	
protected:
	__property Images;
	__property OnGetImageIndex;
	
__published:
	__property bool AutoSelect = {read=FAutoSelect, write=FAutoSelect, default=0};
	__property DockSite = {default=1};
	__property DoubleBuffered;
	__property Vcl::Controls::TWinControl* DestinationDockSite = {read=FDestDockSite, write=SetDestDockSite};
	__property ParentDoubleBuffered = {default=1};
	__property OnDockDrop;
	__property OnDockOver;
	__property OnGetSiteInfo;
	__property OnStartDock;
	__property OnUnDock;
	__property System::Classes::TNotifyEvent OnTabAdded = {read=FOnTabAdded, write=FOnTabAdded};
	__property System::Classes::TNotifyEvent OnTabRemoved = {read=FOnTabRemoved, write=FOnTabRemoved};
public:
	/* TWinControl.CreateParented */ inline __fastcall TDockTabSet(HWND ParentWindow) : Vcl::Tabs::TTabSet(ParentWindow) { }
	
};


__interface  INTERFACE_UUID("{808A554D-6502-4D77-B6F7-C0749434D9B7}") IAlternateDockHost  : public System::IInterface 
{
	virtual void __fastcall SetAlternateDockHost(Vcl::Controls::TWinControl* const DockHost) = 0 ;
};

class PASCALIMPLEMENTATION TCaptionedTabDockTree : public Vcl::Captioneddocktree::TCaptionedDockTree
{
	typedef Vcl::Captioneddocktree::TCaptionedDockTree inherited;
	
private:
	Vcl::Controls::TWinControl* FAlternateDockHost;
	Vcl::Controls::TDockZone* __fastcall PinHitTest(const System::Types::TPoint &MousePos);
	
protected:
	virtual void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y, bool &Handled);
	
public:
	void __fastcall SetAlternateDockHost(Vcl::Controls::TWinControl* const DockHost);
public:
	/* TCaptionedDockTree.Create */ inline __fastcall virtual TCaptionedTabDockTree(Vcl::Controls::TWinControl* DockSite)/* overload */ : Vcl::Captioneddocktree::TCaptionedDockTree(DockSite) { }
	/* TCaptionedDockTree.Create */ inline __fastcall TCaptionedTabDockTree(Vcl::Controls::TWinControl* DockSite, Vcl::Captioneddocktree::TDockCaptionOrientation ADockCaptionOrientation)/* overload */ : Vcl::Captioneddocktree::TCaptionedDockTree(DockSite, ADockCaptionOrientation) { }
	/* TCaptionedDockTree.Destroy */ inline __fastcall virtual ~TCaptionedTabDockTree() { }
	
private:
	void *__IAlternateDockHost;	// IAlternateDockHost 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {808A554D-6502-4D77-B6F7-C0749434D9B7}
	operator _di_IAlternateDockHost()
	{
		_di_IAlternateDockHost intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IAlternateDockHost*(void) { return (IAlternateDockHost*)&__IAlternateDockHost; }
	#endif
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ETabDockException : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ETabDockException(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ETabDockException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ETabDockException(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ETabDockException(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ETabDockException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ETabDockException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ETabDockException(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ETabDockException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ETabDockException(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ETabDockException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ETabDockException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ETabDockException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ETabDockException() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

//-- var, const, procedure ---------------------------------------------------
static const System::Word WM_PINDOCKCLIENT = System::Word(0x470);
}	/* namespace Docktabset */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_DOCKTABSET)
using namespace Vcl::Docktabset;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_DocktabsetHPP
