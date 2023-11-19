// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DeskForm.pas' rev: 35.00 (Windows)

#ifndef DeskformHPP
#define DeskformHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Types.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
#include <DesignIntf.hpp>
#include <System.IniFiles.hpp>
#include <IDEMessages.hpp>
#include <Vcl.Dialogs.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Deskform
{
//-- forward type declarations -----------------------------------------------
struct TDeskRuntimeInfo;
class DELPHICLASS TDesktopForm;
//-- type declarations -------------------------------------------------------
struct DECLSPEC_DRECORD TDeskRuntimeInfo
{
public:
	bool IsFilled;
	int Left;
	int Top;
	int Width;
	int Height;
	System::Uitypes::TWindowState WindowState;
	__fastcall TDeskRuntimeInfo(const int ALeft, const int ATop, const int AWidth, const int AHeight, const System::Uitypes::TWindowState AWindowState);
	void __fastcall Clear();
	TDeskRuntimeInfo() {}
};


class PASCALIMPLEMENTATION TDesktopForm : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
__published:
	void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall FormDestroy(System::TObject* Sender);
	void __fastcall FormEndDock(System::TObject* Sender, System::TObject* Target, int X, int Y);
	void __fastcall FormAfterMonitorDpiChanged(System::TObject* Sender, int OldDPI, int NewDPI);
	void __fastcall FormBeforeMonitorDpiChanged(System::TObject* Sender, int OldDPI, int NewDPI);
	
private:
	bool FAutoSave;
	System::UnicodeString FDeskSection;
	int FFontPointSize;
	bool FLocked;
	int FDrawingLockCount;
	bool FUnlockMessagePosted;
	bool FLoadedFromDesktop;
	bool FSaveStateNecessary;
	tagWINDOWPLACEMENT FWindowPlacement;
	bool FWindowPlacementDirty;
	static bool FForceUpdateBounds;
	void __fastcall MainFormMadeVisible(System::TObject* Sender);
	System::Uitypes::TWindowState __fastcall GetDeskWindowState(System::Inifiles::TCustomIniFile* const Desktop, const TDeskRuntimeInfo &RuntimeInfo);
	HIDESBASE MESSAGE void __fastcall CMShowingChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall IDEMUnlockDrawing(Winapi::Messages::TMessage &Message);
	
protected:
	System::Types::TRect FLastLoadedBounds;
	bool FDockingTouched;
	System::Types::TRect __fastcall GetDeskWindowScreenCoordinates(System::Inifiles::TCustomIniFile* const Desktop, const TDeskRuntimeInfo &RuntimeInfo);
	void __fastcall DesktopSizeActualToRelative(int &AWidth, int &AHeight);
	void __fastcall DesktopSizeRelativeToActual(int &AWidth, int &AHeight);
	void __fastcall DesktopPosActualToRelative(int &X, int &Y);
	void __fastcall DesktopPosRelativeToActual(int &X, int &Y);
	DYNAMIC void __fastcall DoMainFormShown();
	HIDESBASE void __fastcall LockDrawing();
	HIDESBASE void __fastcall UnlockDrawing();
	DYNAMIC void __fastcall UnlockUpdates();
	__property bool SaveStateNecessary = {read=FSaveStateNecessary, write=FSaveStateNecessary, nodefault};
	__property int FontPointSize = {read=FFontPointSize, write=FFontPointSize, nodefault};
	virtual void __fastcall ZoomWindow();
	virtual TDeskRuntimeInfo __fastcall GetDeskRuntimeInfo();
	void __fastcall RecalcFontPointSize();
	virtual void __fastcall UpdateStyleElements();
	virtual void __fastcall AdjustLastLoadedBounds();
	
public:
	__fastcall virtual TDesktopForm(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TDesktopForm();
	virtual bool __fastcall EditAction(Designintf::TEditAction Action);
	virtual Designintf::TEditState __fastcall GetEditState();
	virtual void __fastcall SaveWindowRuntimeInfo(TDeskRuntimeInfo &DeskRuntimeInfo);
	virtual void __fastcall SaveWindowState(System::Inifiles::TCustomIniFile* Desktop, bool isProject);
	virtual void __fastcall LoadWindowState(System::Inifiles::TCustomIniFile* Desktop);
	DYNAMIC void __fastcall LockUpdates();
	virtual void __fastcall Repaint();
	virtual void __fastcall Loaded();
	__property System::UnicodeString DeskSection = {read=FDeskSection, write=FDeskSection};
	__property bool AutoSave = {read=FAutoSave, write=FAutoSave, nodefault};
	__property bool LoadedFromDesktop = {read=FLoadedFromDesktop, nodefault};
	__property System::Types::TRect LastLoadedBounds = {read=FLastLoadedBounds, write=FLastLoadedBounds};
	DYNAMIC bool __fastcall ShouldAutoHide();
	virtual void __fastcall SaveDockClients(System::Inifiles::TCustomIniFile* DeskTop, const bool IsProject, const System::UnicodeString Section, Vcl::Controls::TWinControl* DockSite);
	virtual void __fastcall SaveDockStream(System::Inifiles::TCustomIniFile* DeskTop, const System::UnicodeString Section, Vcl::Controls::TWinControl* DockSite);
	virtual bool __fastcall LoadDockClients(System::Inifiles::TCustomIniFile* DeskTop, const System::UnicodeString Section, Vcl::Controls::TWinControl* DockSite);
	virtual void __fastcall LoadDockStream(System::Inifiles::TCustomIniFile* DeskTop, const System::UnicodeString Section, Vcl::Controls::TWinControl* DockSite);
	/* static */ __property bool ForceUpdateBounds = {read=FForceUpdateBounds, write=FForceUpdateBounds, nodefault};
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TDesktopForm(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TForm(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TDesktopForm(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
private:
	void *__IEditHandler;	// Designintf::IEditHandler 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {7ED7BF2D-E349-11D3-AB4A-00C04FB17A72}
	operator Designintf::_di_IEditHandler()
	{
		Designintf::_di_IEditHandler intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Designintf::IEditHandler*(void) { return (Designintf::IEditHandler*)&__IEditHandler; }
	#endif
	
};


typedef System::TMetaClass* TDesktopFormClass;

typedef void __fastcall (*TInitializeForm)(System::Classes::TComponent* Ident);

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE TInitializeForm InitializeForm;
extern DELPHI_PACKAGE void __fastcall (__closure *RegisterMenu)(Vcl::Menus::TMenu* AMenu);
extern DELPHI_PACKAGE void __fastcall (__closure *UnregisterMenu)(Vcl::Menus::TMenu* AMenu);
extern DELPHI_PACKAGE bool __fastcall (*GetDockable)(const System::UnicodeString DeskSection);
extern DELPHI_PACKAGE System::Classes::TStringList* LoadedDesktopFormInstances;
extern DELPHI_PACKAGE bool __fastcall IsIDEDrawingLocked();
extern DELPHI_PACKAGE int __fastcall IDEMessageDlg(const System::UnicodeString Msg, System::Uitypes::TMsgDlgType DlgType, System::Uitypes::TMsgDlgButtons Buttons, int HelpCtx)/* overload */;
extern DELPHI_PACKAGE int __fastcall IDEMessageDlg(const System::UnicodeString Msg, System::Uitypes::TMsgDlgType DlgType, System::Uitypes::TMsgDlgButtons Buttons, int HelpCtx, System::Uitypes::TMsgDlgBtn DefaultButton)/* overload */;
extern DELPHI_PACKAGE void __fastcall BeginDesktopUpdate(const bool SuppressRedraw = false);
extern DELPHI_PACKAGE void __fastcall EndDesktopUpdate();
extern DELPHI_PACKAGE bool __fastcall IsDesktopLocked();
extern DELPHI_PACKAGE void __fastcall LockIDEDrawing(bool UpdateCursor = true);
extern DELPHI_PACKAGE void __fastcall UnlockIDEDrawing(bool UpdateCursor = true);
extern DELPHI_PACKAGE int __fastcall DesktopActualToRelative(const int Value, const int Size);
extern DELPHI_PACKAGE int __fastcall DesktopRelativeToActual(const int Value, const int Size);
extern DELPHI_PACKAGE int __fastcall CrackWidth(const int Width, const int Default, bool PercentageSizes);
extern DELPHI_PACKAGE int __fastcall CrackHeight(const int Height, const int Default, bool PercentageSizes);
}	/* namespace Deskform */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DESKFORM)
using namespace Deskform;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DeskformHPP
