// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DockForm.pas' rev: 35.00 (Windows)

#ifndef DockformHPP
#define DockformHPP

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
#include <System.Actions.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Dialogs.hpp>
#include <DeskForm.hpp>
#include <IDEMessages.hpp>
#include <System.IniFiles.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.Menus.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dockform
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TDockableForm;
class DELPHICLASS TBlendForm;
class DELPHICLASS TIDEDragDockObject;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TIDEDockType : unsigned char { dtJoin, dtTab };

class PASCALIMPLEMENTATION TDockableForm : public Deskform::TDesktopForm
{
	typedef Deskform::TDesktopForm inherited;
	
__published:
	Vcl::Actnlist::TActionList* DockActionList;
	Vcl::Actnlist::TAction* DockableCmd;
	Vcl::Actnlist::TAction* StayOnTopCmd;
	Vcl::Actnlist::TAction* ZoomWindowCmd;
	Vcl::Actnlist::TAction* CloseUndockedWindowCmd;
	Vcl::Actnlist::TAction* LocalMenuCmd;
	HIDESBASE void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall FormGetSiteInfo(System::TObject* Sender, Vcl::Controls::TControl* DockClient, System::Types::TRect &InfluenceRect, const System::Types::TPoint &MousePos, bool &CanDock);
	void __fastcall DockableCmdExecute(System::TObject* Sender);
	void __fastcall DockableCmdUpdate(System::TObject* Sender);
	void __fastcall StayOnTopCmdExecute(System::TObject* Sender);
	void __fastcall StayOnTopCmdUpdate(System::TObject* Sender);
	void __fastcall ZoomWindowCmdExecute(System::TObject* Sender);
	void __fastcall CloseUndockedWindowCmdExecute(System::TObject* Sender);
	void __fastcall LocalMenuCmdExecute(System::TObject* Sender);
	
private:
	TIDEDockType FIDEDockType;
	Vcl::Controls::TAlign FDockEdge;
	bool FAboutToDestroy;
	bool FVisibleOnUndock;
	HIDESBASE MESSAGE void __fastcall CMDockClient(Vcl::Controls::TCMDockClient &Message);
	HIDESBASE MESSAGE void __fastcall WMMouseActivate(Winapi::Messages::TWMMouseActivate &Message);
	void __fastcall SetStayOnTop(const bool Value);
	
protected:
	bool FDockable;
	virtual bool __fastcall CreateDockParent(Vcl::Controls::TCMDockClient &Message);
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	DYNAMIC void __fastcall DockOver(Vcl::Controls::TDragDockObject* Source, int X, int Y, System::Uitypes::TDragState State, bool &Accept);
	DYNAMIC void __fastcall DoStartDock(Vcl::Controls::TDragObject* &DragObject);
	DYNAMIC void __fastcall DoEndDock(System::TObject* Target, int X, int Y);
	virtual void __fastcall SetDockable(const bool Value);
	virtual void __fastcall SetParent(Vcl::Controls::TWinControl* AParent);
	
public:
	__fastcall virtual TDockableForm(System::Classes::TComponent* AOwner);
	virtual void __fastcall ForceShow();
	void __fastcall GetTabDockRect(System::Types::TRect &ARect);
	bool __fastcall ToggleDockable();
	virtual void __fastcall SaveWindowState(System::Inifiles::TCustomIniFile* Desktop, bool isProject);
	virtual void __fastcall LoadWindowState(System::Inifiles::TCustomIniFile* Desktop);
	__property bool AboutToDestroy = {read=FAboutToDestroy, write=FAboutToDestroy, nodefault};
	__property bool Dockable = {read=FDockable, write=SetDockable, nodefault};
	__property bool VisibleOnUndock = {read=FVisibleOnUndock, write=FVisibleOnUndock, nodefault};
	__property TIDEDockType IDEDockType = {read=FIDEDockType, write=FIDEDockType, nodefault};
	__fastcall virtual ~TDockableForm();
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TDockableForm(System::Classes::TComponent* AOwner, int Dummy) : Deskform::TDesktopForm(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TDockableForm(HWND ParentWindow) : Deskform::TDesktopForm(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TBlendForm : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
protected:
	HIDESBASE MESSAGE void __fastcall WMNCHitTest(Winapi::Messages::TWMNCHitTest &Message);
public:
	/* TCustomForm.Create */ inline __fastcall virtual TBlendForm(System::Classes::TComponent* AOwner) : Vcl::Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TBlendForm(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TBlendForm() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TBlendForm(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TIDEDragDockObject : public Vcl::Controls::TDragDockObjectEx
{
	typedef Vcl::Controls::TDragDockObjectEx inherited;
	
private:
	TBlendForm* FBlendForm;
	
protected:
	virtual void __fastcall DrawDragDockImage();
	virtual void __fastcall EraseDragDockImage();
	virtual bool __fastcall GetEraseWhenMoving();
	
public:
	__fastcall virtual TIDEDragDockObject(Vcl::Controls::TControl* AControl);
	__fastcall virtual ~TIDEDragDockObject();
};


//-- var, const, procedure ---------------------------------------------------
static const System::Word CM_MANUALDPICHANGED = System::Word(0xb00);
extern DELPHI_PACKAGE void __fastcall PumpDockingMessages();
}	/* namespace Dockform */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DOCKFORM)
using namespace Dockform;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DockformHPP
