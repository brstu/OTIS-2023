// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'IDEDockPanel.pas' rev: 35.00 (Windows)

#ifndef IdedockpanelHPP
#define IdedockpanelHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Messages.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.ToolWin.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <System.IniFiles.hpp>
#include <DeskForm.hpp>
#include <Vcl.CaptionedDockTree.hpp>
#include <PercentageDockTree.hpp>

//-- user supplied -----------------------------------------------------------

namespace Idedockpanel
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TEditorDockPanel;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TEditorDockPanel : public Vcl::Extctrls::TPanel
{
	typedef Vcl::Extctrls::TPanel inherited;
	
private:
	Vcl::Extctrls::TSplitter* FSplitter;
	Vcl::Controls::TControl* FNextControl;
	bool FResizeSuspended;
	Vcl::Captioneddocktree::TDockCaptionOrientation FDockCaptionOrientation;
	MESSAGE void __fastcall CMDockNotification(Vcl::Controls::TCMDockNotification &Message);
	HIDESBASE MESSAGE void __fastcall CMUnDockClient(Vcl::Controls::TCMUnDockClient &Message);
	int __fastcall VisibleClientCount();
	void __fastcall SetNextControl(Vcl::Controls::TControl* Value);
	void __fastcall SetResizeSuspended(const bool Value);
	void __fastcall SetSplitter(Vcl::Extctrls::TSplitter* Value);
	void __fastcall SetDockCaptionOrientation(const Vcl::Captioneddocktree::TDockCaptionOrientation Value);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Message);
	
protected:
	DYNAMIC void __fastcall DockOver(Vcl::Controls::TDragDockObject* Source, int X, int Y, System::Uitypes::TDragState State, bool &Accept);
	DYNAMIC bool __fastcall DoUnDock(Vcl::Controls::TWinControl* NewTarget, Vcl::Controls::TControl* Client);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	DYNAMIC void __fastcall ReloadDockedControl(const System::UnicodeString AControlName, Vcl::Controls::TControl* &AControl);
	DYNAMIC Vcl::Controls::_di_IDockManager __fastcall CreateDockManager();
	
public:
	__fastcall virtual TEditorDockPanel(System::Classes::TComponent* AOwner);
	void __fastcall AdjustPosition();
	DYNAMIC void __fastcall DockDrop(Vcl::Controls::TDragDockObject* Source, int X, int Y);
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	__property bool ResizeSuspended = {read=FResizeSuspended, write=SetResizeSuspended, nodefault};
	void __fastcall LoadState(System::Inifiles::TCustomIniFile* const Desktop, const System::UnicodeString SizeSection, const System::UnicodeString ClientSection, const System::UnicodeString DataSection, Deskform::TDesktopForm* DesktopForm);
	void __fastcall SaveState(System::Inifiles::TCustomIniFile* const Desktop, const bool IsProject, const System::UnicodeString SizeSection, const System::UnicodeString ClientSection, const System::UnicodeString DataSection, Deskform::TDesktopForm* DesktopForm);
	
__published:
	__property Vcl::Captioneddocktree::TDockCaptionOrientation DockCaptionOrientation = {read=FDockCaptionOrientation, write=SetDockCaptionOrientation, nodefault};
	__property Vcl::Controls::TControl* NextControl = {read=FNextControl, write=SetNextControl};
	__property Vcl::Extctrls::TSplitter* Splitter = {read=FSplitter, write=SetSplitter};
public:
	/* TCustomControl.Destroy */ inline __fastcall virtual ~TEditorDockPanel() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TEditorDockPanel(HWND ParentWindow) : Vcl::Extctrls::TPanel(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE void __fastcall ResetDockSite(Vcl::Controls::TWinControl* Control);
}	/* namespace Idedockpanel */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IDEDOCKPANEL)
using namespace Idedockpanel;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IdedockpanelHPP
