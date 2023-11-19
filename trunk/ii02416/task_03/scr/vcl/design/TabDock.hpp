// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'TabDock.pas' rev: 35.00 (Windows)

#ifndef TabdockHPP
#define TabdockHPP

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
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <BaseDock.hpp>
#include <Vcl.Menus.hpp>
#include <DockForm.hpp>
#include <IDEMessages.hpp>
#include <System.IniFiles.hpp>
#include <DeskForm.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.Tabs.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.ActnPopup.hpp>
#include <System.Contnrs.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.PlatformDefaultStyleActnCtrls.hpp>
#include <System.Actions.hpp>
#include <System.ImageList.hpp>
#include <Vcl.VirtualImageList.hpp>
#include <Vcl.BaseImageCollection.hpp>
#include <Vcl.ImageCollection.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Tabdock
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TTabDockInfo;
class DELPHICLASS TTabDockHostForm;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TTabDockInfo : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int FTabIndex;
	int FImageIndex;
	Vcl::Controls::TControl* FDockClient;
	Vcl::Extctrls::TPanel* FPageControl;
	Vcl::Tabs::TTabSet* FTabSet;
	Vcl::Extctrls::TPanel* FTabSheet;
	System::Contnrs::TObjectList* FOwner;
	TTabDockHostForm* FForm;
	int FOriginalIndex;
	void __fastcall SetTabIndex(const int Value);
	void __fastcall RemoveImageIndex();
	
public:
	__fastcall TTabDockInfo(TTabDockHostForm* const Form, System::Contnrs::TObjectList* const Owner, Vcl::Controls::TControl* const DockClient, Vcl::Extctrls::TPanel* const PageControl, Vcl::Tabs::TTabSet* const TabSet);
	__fastcall virtual ~TTabDockInfo();
	void __fastcall SetActive();
	void __fastcall ShowClient();
	void __fastcall CreateTabSheet();
	void __fastcall CreateTab();
	void __fastcall RemoveTab();
	void __fastcall RemoveDockClient();
	void __fastcall BeginDragging();
	void __fastcall EndDragging();
	__property Vcl::Controls::TControl* DockClient = {read=FDockClient, write=FDockClient};
	__property int ImageIndex = {read=FImageIndex, write=FImageIndex, nodefault};
	__property int TabIndex = {read=FTabIndex, write=SetTabIndex, nodefault};
	__property Vcl::Extctrls::TPanel* TabSheet = {read=FTabSheet};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TTabDockHostForm : public Basedock::TBaseDockHostForm
{
	typedef Basedock::TBaseDockHostForm inherited;
	
__published:
	Vcl::Actnpopup::TPopupActionBar* TabPosPopupMenu;
	Vcl::Menus::TMenuItem* mnuTop;
	Vcl::Menus::TMenuItem* mnuLeft;
	Vcl::Menus::TMenuItem* mnuRight;
	Vcl::Menus::TMenuItem* mnuBottom;
	Vcl::Extctrls::TPanel* DockPanel;
	Vcl::Virtualimagelist::TVirtualImageList* DockImageList;
	Vcl::Tabs::TTabSet* DockTab;
	Vcl::Menus::TMenuItem* N2;
	Vcl::Menus::TMenuItem* mnuHideTab;
	Vcl::Imagecollection::TImageCollection* TabDockImageCollection;
	void __fastcall mnuTopClick(System::TObject* Sender);
	void __fastcall DockTabGetImageIndex(System::TObject* Sender, int TabIndex, int &ImageIndex);
	void __fastcall DockTabMouseDown(System::TObject* Sender, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall DockTabMouseMove(System::TObject* Sender, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall DockTabMouseUp(System::TObject* Sender, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall DockTabClick(System::TObject* Sender);
	void __fastcall mnuHideTabClick(System::TObject* Sender);
	void __fastcall TabPosPopupMenuPopup(System::TObject* Sender);
	HIDESBASE void __fastcall FormGetSiteInfo(System::TObject* Sender, Vcl::Controls::TControl* DockClient, System::Types::TRect &InfluenceRect, const System::Types::TPoint &MousePos, bool &CanDock);
	HIDESBASE void __fastcall FormEndDock(System::TObject* Sender, System::TObject* Target, int X, int Y);
	
private:
	Vcl::Extctrls::TPanel* FActivePage;
	System::Contnrs::TObjectList* FDockInfos;
	TTabDockInfo* FDownDockInfo;
	System::Types::TPoint FDownPos;
	int FItemToHide;
	TTabDockInfo* FDraggingInfo;
	int FOriginalIndex;
	HIDESBASE MESSAGE void __fastcall CMDialogChar(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMDockNotification(Vcl::Controls::TCMDockNotification &Message);
	HIDESBASE MESSAGE void __fastcall CMUnDockClient(Vcl::Controls::TCMUnDockClient &Message);
	HIDESBASE MESSAGE void __fastcall CMDockClient(Vcl::Controls::TCMDockClient &Message);
	HIDESBASE MESSAGE void __fastcall CMShowingChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMDpiChanged(Winapi::Messages::TWMDpi &Message);
	MESSAGE void __fastcall CMManualDPIChanged(Winapi::Messages::TMessage &Message);
	TTabDockInfo* __fastcall GetDockClientInfo(Vcl::Controls::TControl* const Client);
	TTabDockInfo* __fastcall GetDockClientInfoFromTab(const int Index);
	void __fastcall SetDockTabPosition(Vcl::Comctrls::TTabPosition TabPosition);
	void __fastcall IDEThemeChanged(System::TObject* Sender);
	void __fastcall UpdateControlsSettings();
	void __fastcall UpdateTabControls();
	
protected:
	virtual Vcl::Controls::TWinControlClass __fastcall GetDialogCharParentClass();
	DYNAMIC void __fastcall DockOver(Vcl::Controls::TDragDockObject* Source, int X, int Y, System::Uitypes::TDragState State, bool &Accept);
	virtual bool __fastcall DockReplaceDockClient(Vcl::Controls::TControl* Client, Vcl::Controls::TWinControl* NewDockSite, Vcl::Controls::TControl* DropControl, Vcl::Controls::TAlign ControlSide, Vcl::Controls::TControl* ReplacementClient);
	DYNAMIC void __fastcall DoAddDockClient(Vcl::Controls::TControl* Client, const System::Types::TRect &ARect);
	DYNAMIC void __fastcall DoRemoveDockClient(Vcl::Controls::TControl* Client);
	void __fastcall ChangeActivePage(Vcl::Extctrls::TPanel* Page);
	
public:
	__fastcall virtual TTabDockHostForm(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TTabDockHostForm();
	int __fastcall AddIconToImageList(Vcl::Controls::TControl* const Client);
	System::UnicodeString __fastcall GetClientCaption(Vcl::Controls::TControl* const Client);
	virtual void __fastcall LoadWindowState(System::Inifiles::TCustomIniFile* Desktop);
	virtual void __fastcall ManualDockClient(Vcl::Controls::TControl* Client, Vcl::Controls::TControl* DropControl, Vcl::Controls::TAlign ControlSide, bool Replace);
	virtual void __fastcall SaveWindowState(System::Inifiles::TCustomIniFile* Desktop, bool isProject);
	virtual void __fastcall ResetCaption();
	void __fastcall ShowDockClient(Vcl::Controls::TControl* const Control);
	
__published:
	__property Vcl::Tabs::TTabSet* Tabs = {read=DockTab};
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TTabDockHostForm(System::Classes::TComponent* AOwner, int Dummy) : Basedock::TBaseDockHostForm(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TTabDockHostForm(HWND ParentWindow) : Basedock::TBaseDockHostForm(ParentWindow) { }
	
};


typedef System::TMetaClass* TTabDockHostFormClass;

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Tabdock */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_TABDOCK)
using namespace Tabdock;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// TabdockHPP
