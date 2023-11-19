// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'BaseDock.pas' rev: 35.00 (Windows)

#ifndef BasedockHPP
#define BasedockHPP

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
#include <System.Types.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Dialogs.hpp>
#include <DockForm.hpp>
#include <IDEMessages.hpp>
#include <Vcl.ActnList.hpp>
#include <System.IniFiles.hpp>
#include <System.Actions.hpp>
#include <DeskForm.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Basedock
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TBaseDockHostForm;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TBaseDockHostForm : public Dockform::TDockableForm
{
	typedef Dockform::TDockableForm inherited;
	
__published:
	void __fastcall FormClose(System::TObject* Sender, System::Uitypes::TCloseAction &Action);
	
private:
	Dockform::TDockableForm* FLastFocusedClient;
	int FHostDockNumber;
	bool FDontReleaseForm;
	HIDESBASE MESSAGE void __fastcall CMDialogChar(Winapi::Messages::TWMKey &Message);
	int __fastcall GetVisibleClientCount();
	MESSAGE void __fastcall UMFinalUndock(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall UMNewClientFocused(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMActivate(Winapi::Messages::TWMActivate &Message);
	
protected:
	virtual bool __fastcall CreateDockParent(Vcl::Controls::TCMDockClient &Message);
	DYNAMIC void __fastcall DoAddDockClient(Vcl::Controls::TControl* Client, const System::Types::TRect &ARect);
	DYNAMIC void __fastcall DoRemoveDockClient(Vcl::Controls::TControl* Client);
	DYNAMIC bool __fastcall DoUnDock(Vcl::Controls::TWinControl* NewTarget, Vcl::Controls::TControl* Client);
	virtual Vcl::Controls::TWinControlClass __fastcall GetDialogCharParentClass() = 0 ;
	virtual Vcl::Controls::TWinControl* __fastcall GetDockSiteControl();
	virtual void __fastcall SetDockable(const bool Value);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation AOperation);
	
public:
	__fastcall virtual TBaseDockHostForm(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TBaseDockHostForm();
	virtual void __fastcall ManualDockClient(Vcl::Controls::TControl* Client, Vcl::Controls::TControl* DropControl, Vcl::Controls::TAlign ControlSide, bool Replace);
	virtual void __fastcall ResetCaption();
	void __fastcall ResetStayOnTop();
	__property int VisibleClientCount = {read=GetVisibleClientCount, nodefault};
	__property int HostDockNumber = {read=FHostDockNumber, write=FHostDockNumber, nodefault};
	__property bool DontReleaseForm = {read=FDontReleaseForm, write=FDontReleaseForm, nodefault};
	void __fastcall UndockAllClientsAndSelf();
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TBaseDockHostForm(System::Classes::TComponent* AOwner, int Dummy) : Dockform::TDockableForm(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TBaseDockHostForm(HWND ParentWindow) : Dockform::TDockableForm(ParentWindow) { }
	
};


typedef System::TMetaClass* TBaseDockHostFormClass;

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::Classes::TList* HostDockFormList;
}	/* namespace Basedock */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_BASEDOCK)
using namespace Basedock;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// BasedockHPP
