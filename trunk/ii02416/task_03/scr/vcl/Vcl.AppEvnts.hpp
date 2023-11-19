// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.AppEvnts.pas' rev: 35.00 (Windows)

#ifndef Vcl_AppevntsHPP
#define Vcl_AppevntsHPP

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
#include <Vcl.Forms.hpp>
#include <Vcl.Controls.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Appevnts
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TCustomApplicationEvents;
class DELPHICLASS TApplicationEvents;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TCustomApplicationEvents : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	System::Classes::TActionEvent FOnActionExecute;
	System::Classes::TActionEvent FOnActionUpdate;
	Vcl::Forms::TExceptionEvent FOnException;
	Vcl::Forms::TMessageEvent FOnMessage;
	Vcl::Forms::THelpEvent FOnHelp;
	System::Classes::TNotifyEvent FOnHint;
	Vcl::Forms::TIdleEvent FOnIdle;
	System::Classes::TNotifyEvent FOnDeactivate;
	System::Classes::TNotifyEvent FOnActivate;
	System::Classes::TNotifyEvent FOnMinimize;
	System::Classes::TNotifyEvent FOnRestore;
	Vcl::Forms::TShortCutEvent FOnShortCut;
	Vcl::Forms::TShowHintEvent FOnShowHint;
	Vcl::Forms::TSettingChangeEvent FOnSettingChange;
	System::Classes::TNotifyEvent FOnModalBegin;
	System::Classes::TNotifyEvent FOnModalEnd;
	Vcl::Forms::TRemoteSessionChangedEvent FOnRemoteSessionChanged;
	void __fastcall DoActionExecute(System::Classes::TBasicAction* Action, bool &Handled);
	void __fastcall DoActionUpdate(System::Classes::TBasicAction* Action, bool &Handled);
	void __fastcall DoActivate(System::TObject* Sender);
	void __fastcall DoDeactivate(System::TObject* Sender);
	void __fastcall DoException(System::TObject* Sender, System::Sysutils::Exception* E);
	void __fastcall DoIdle(System::TObject* Sender, bool &Done);
	bool __fastcall DoHelp(System::Word Command, NativeInt Data, bool &CallHelp);
	void __fastcall DoHint(System::TObject* Sender);
	void __fastcall DoMessage(tagMSG &Msg, bool &Handled);
	void __fastcall DoMinimize(System::TObject* Sender);
	void __fastcall DoRestore(System::TObject* Sender);
	void __fastcall DoShowHint(System::UnicodeString &HintStr, bool &CanShow, Vcl::Controls::THintInfo &HintInfo);
	void __fastcall DoShortcut(Winapi::Messages::TWMKey &Msg, bool &Handled);
	void __fastcall DoSettingChange(System::TObject* Sender, int Flag, const System::UnicodeString Section, int &Result);
	void __fastcall DoModalBegin(System::TObject* Sender);
	void __fastcall DoModalEnd(System::TObject* Sender);
	void __fastcall DoRemoteSessionChanged(System::TObject* Sender, void *InRemoteSession);
	
protected:
	__property System::Classes::TActionEvent OnActionExecute = {read=FOnActionExecute, write=FOnActionExecute};
	__property System::Classes::TActionEvent OnActionUpdate = {read=FOnActionUpdate, write=FOnActionUpdate};
	__property System::Classes::TNotifyEvent OnActivate = {read=FOnActivate, write=FOnActivate};
	__property System::Classes::TNotifyEvent OnDeactivate = {read=FOnDeactivate, write=FOnDeactivate};
	__property Vcl::Forms::TExceptionEvent OnException = {read=FOnException, write=FOnException};
	__property Vcl::Forms::TIdleEvent OnIdle = {read=FOnIdle, write=FOnIdle};
	__property Vcl::Forms::THelpEvent OnHelp = {read=FOnHelp, write=FOnHelp};
	__property System::Classes::TNotifyEvent OnHint = {read=FOnHint, write=FOnHint};
	__property Vcl::Forms::TMessageEvent OnMessage = {read=FOnMessage, write=FOnMessage};
	__property System::Classes::TNotifyEvent OnMinimize = {read=FOnMinimize, write=FOnMinimize};
	__property System::Classes::TNotifyEvent OnRestore = {read=FOnRestore, write=FOnRestore};
	__property Vcl::Forms::TShowHintEvent OnShowHint = {read=FOnShowHint, write=FOnShowHint};
	__property Vcl::Forms::TShortCutEvent OnShortCut = {read=FOnShortCut, write=FOnShortCut};
	__property Vcl::Forms::TSettingChangeEvent OnSettingChange = {read=FOnSettingChange, write=FOnSettingChange};
	__property System::Classes::TNotifyEvent OnModalBegin = {read=FOnModalBegin, write=FOnModalBegin};
	__property System::Classes::TNotifyEvent OnModalEnd = {read=FOnModalEnd, write=FOnModalEnd};
	__property Vcl::Forms::TRemoteSessionChangedEvent OnRemoteSessionChanged = {read=FOnRemoteSessionChanged, write=FOnRemoteSessionChanged};
	
public:
	__fastcall virtual TCustomApplicationEvents(System::Classes::TComponent* AOwner);
	void __fastcall Activate();
	void __fastcall CancelDispatch();
public:
	/* TComponent.Destroy */ inline __fastcall virtual ~TCustomApplicationEvents() { }
	
};


class PASCALIMPLEMENTATION TApplicationEvents : public TCustomApplicationEvents
{
	typedef TCustomApplicationEvents inherited;
	
__published:
	__property OnActionExecute;
	__property OnActionUpdate;
	__property OnActivate;
	__property OnDeactivate;
	__property OnException;
	__property OnIdle;
	__property OnHelp;
	__property OnHint;
	__property OnMessage;
	__property OnMinimize;
	__property OnModalBegin;
	__property OnModalEnd;
	__property OnRemoteSessionChanged;
	__property OnRestore;
	__property OnSettingChange;
	__property OnShowHint;
	__property OnShortCut;
public:
	/* TCustomApplicationEvents.Create */ inline __fastcall virtual TApplicationEvents(System::Classes::TComponent* AOwner) : TCustomApplicationEvents(AOwner) { }
	
public:
	/* TComponent.Destroy */ inline __fastcall virtual ~TApplicationEvents() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Appevnts */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_APPEVNTS)
using namespace Vcl::Appevnts;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_AppevntsHPP
