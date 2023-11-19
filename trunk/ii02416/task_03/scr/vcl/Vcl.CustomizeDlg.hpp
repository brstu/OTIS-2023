// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.CustomizeDlg.pas' rev: 35.00 (Windows)

#ifndef Vcl_CustomizedlgHPP
#define Vcl_CustomizedlgHPP

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
#include <System.Variants.hpp>
#include <System.Classes.hpp>
#include <System.Actions.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.CheckLst.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ActnMan.hpp>
#include <Vcl.ActnCtrls.hpp>
#include <Vcl.ActnMenus.hpp>
#include <System.ImageList.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Customizedlg
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TCustomizeFrm;
class DELPHICLASS TCustomizeDlg;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TCustomizeFrm : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
__published:
	Vcl::Stdctrls::TButton* CloseBtn;
	Vcl::Comctrls::TPageControl* Tabs;
	Vcl::Comctrls::TTabSheet* ToolbarsTab;
	Vcl::Comctrls::TTabSheet* ActionsTab;
	Vcl::Comctrls::TTabSheet* OptionsTab;
	Vcl::Stdctrls::TLabel* ToolbarsLbl;
	Vcl::Checklst::TCheckListBox* ActionBarList;
	Vcl::Stdctrls::TButton* ResetBtn;
	Vcl::Menus::TPopupMenu* CloseMenu;
	Vcl::Menus::TMenuItem* CloseItem;
	Vcl::Stdctrls::TLabel* PersonalizeLbl;
	Vcl::Extctrls::TBevel* OptionsBevel2;
	Vcl::Stdctrls::TCheckBox* RecentlyUsedChk;
	Vcl::Stdctrls::TButton* ResetUsageBtn;
	Vcl::Stdctrls::TCheckBox* LargeIconsChk;
	Vcl::Stdctrls::TCheckBox* ShowTipsChk;
	Vcl::Stdctrls::TCheckBox* ShortCutTipsChk;
	Vcl::Extctrls::TBevel* OptionsBevel1;
	Vcl::Stdctrls::TLabel* OtherLbl;
	Vcl::Controls::TImageList* ActionImages;
	Vcl::Stdctrls::TLabel* Label1;
	Vcl::Stdctrls::TComboBox* MenuAnimationStyles;
	Vcl::Stdctrls::TLabel* InfoLbl;
	Vcl::Stdctrls::TGroupBox* DescGroupBox;
	Vcl::Stdctrls::TLabel* HintLbl;
	Vcl::Stdctrls::TLabel* ActionsCatLbl;
	Vcl::Stdctrls::TListBox* CatList;
	Vcl::Stdctrls::TListBox* ActionsList;
	Vcl::Stdctrls::TLabel* ActionsActionsLbl;
	Vcl::Actnlist::TActionList* ActionList1;
	Vcl::Actnlist::TAction* ResetActn;
	Vcl::Actnlist::TAction* CloseActn;
	Vcl::Actnlist::TAction* ResetUsageDataActn;
	Vcl::Actnlist::TAction* RecentlyUsedActn;
	Vcl::Actnlist::TAction* FullMenusActn;
	Vcl::Actnlist::TAction* ShowHintsActn;
	Vcl::Actnlist::TAction* ShowShortCutsInTipsActn;
	Vcl::Extctrls::TPanel* ListPanel;
	Vcl::Extctrls::TPanel* ComboPanel;
	Vcl::Stdctrls::TComboBox* ListCombo;
	Vcl::Actnlist::TAction* ApplyToAllActn;
	Vcl::Stdctrls::TGroupBox* CaptionOptionsGrp;
	Vcl::Stdctrls::TCheckBox* ApplyToAllChk;
	Vcl::Stdctrls::TLabel* Label4;
	Vcl::Actnlist::TAction* LargeIconsActn;
	Vcl::Stdctrls::TComboBox* CaptionOptionsCombo;
	Vcl::Stdctrls::TLabel* Label2;
	Vcl::Stdctrls::TButton* SeparatorBtn;
	void __fastcall CatListClick(System::TObject* Sender);
	void __fastcall ActionsListStartDrag(System::TObject* Sender, Vcl::Controls::TDragObject* &DragObject);
	void __fastcall ActionsListDrawItem(Vcl::Controls::TWinControl* Control, int Index, const System::Types::TRect &Rect, Winapi::Windows::TOwnerDrawState State);
	void __fastcall FormClose(System::TObject* Sender, System::Uitypes::TCloseAction &Action);
	void __fastcall CloseBtnClick(System::TObject* Sender);
	void __fastcall CatListStartDrag(System::TObject* Sender, Vcl::Controls::TDragObject* &DragObject);
	void __fastcall ActionBarListClickCheck(System::TObject* Sender);
	void __fastcall ActionsListMeasureItem(Vcl::Controls::TWinControl* Control, int Index, int &Height);
	void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall ActionsListClick(System::TObject* Sender);
	void __fastcall MenuAnimationStylesChange(System::TObject* Sender);
	void __fastcall ResetActnUpdate(System::TObject* Sender);
	void __fastcall ResetActnExecute(System::TObject* Sender);
	void __fastcall ResetUsageDataActnExecute(System::TObject* Sender);
	void __fastcall RecentlyUsedActnExecute(System::TObject* Sender);
	void __fastcall ShowHintsActnExecute(System::TObject* Sender);
	void __fastcall ShowHintsActnUpdate(System::TObject* Sender);
	void __fastcall ShowShortCutsInTipsActnExecute(System::TObject* Sender);
	void __fastcall RecentlyUsedActnUpdate(System::TObject* Sender);
	void __fastcall ActionBarListClick(System::TObject* Sender);
	void __fastcall ActionsListData(Vcl::Controls::TWinControl* Control, int Index, System::UnicodeString &Data);
	void __fastcall LargeIconsActnExecute(System::TObject* Sender);
	void __fastcall ListComboSelect(System::TObject* Sender);
	void __fastcall CaptionOptionsComboChange(System::TObject* Sender);
	void __fastcall FormResize(System::TObject* Sender);
	void __fastcall LargeIconsActnUpdate(System::TObject* Sender);
	void __fastcall SeparatorBtnStartDrag(System::TObject* Sender, Vcl::Controls::TDragObject* &DragObject);
	void __fastcall ApplyToAllActnUpdate(System::TObject* Sender);
	
private:
	Vcl::Actnman::TActionBarItem* FScratchBar;
	Vcl::Actnman::TCustomActionManager* FActionManager;
	Vcl::Actnlist::TCustomActionList* FActiveActionList;
	void __fastcall SetActionManager(Vcl::Actnman::TCustomActionManager* const Value);
	void __fastcall SetupListCombo();
	
protected:
	System::UnicodeString __fastcall AddAction(System::Actions::TContainedAction* AnAction);
	bool __fastcall IsDupShortCut(System::Classes::TShortCut AShortCut, System::Actions::TContainedAction* &Action);
	virtual void __fastcall ClearCatList();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	void __fastcall FindActionBars();
	void __fastcall SetActiveActionList(Vcl::Actnlist::TCustomActionList* const Value);
	virtual void __fastcall UpdateDialog();
	HIDESBASE MESSAGE void __fastcall CMVisiblechanged(Winapi::Messages::TMessage &Message);
	
public:
	__property Vcl::Actnman::TCustomActionManager* ActionManager = {read=FActionManager, write=SetActionManager};
	__property Vcl::Actnlist::TCustomActionList* ActiveActionList = {read=FActiveActionList, write=SetActiveActionList};
public:
	/* TCustomForm.Create */ inline __fastcall virtual TCustomizeFrm(System::Classes::TComponent* AOwner) : Vcl::Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TCustomizeFrm(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TCustomizeFrm() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomizeFrm(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TCustomizeDlg : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	TCustomizeFrm* FCustomizeFrm;
	bool FStayOnTop;
	System::Classes::TNotifyEvent FOnClose;
	System::Classes::TNotifyEvent FOnShow;
	Vcl::Actnman::TCustomActionManager* FActionManager;
	void __fastcall SetStayOnTop(const bool Value);
	void __fastcall SetActionManager(Vcl::Actnman::TCustomActionManager* const Value);
	
protected:
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall SetupDlg();
	
public:
	void __fastcall Show();
	__property TCustomizeFrm* CustomizeForm = {read=FCustomizeFrm};
	
__published:
	__property Vcl::Actnman::TCustomActionManager* ActionManager = {read=FActionManager, write=SetActionManager};
	__property bool StayOnTop = {read=FStayOnTop, write=SetStayOnTop, nodefault};
	__property System::Classes::TNotifyEvent OnClose = {read=FOnClose, write=FOnClose};
	__property System::Classes::TNotifyEvent OnShow = {read=FOnShow, write=FOnShow};
public:
	/* TComponent.Create */ inline __fastcall virtual TCustomizeDlg(System::Classes::TComponent* AOwner) : System::Classes::TComponent(AOwner) { }
	/* TComponent.Destroy */ inline __fastcall virtual ~TCustomizeDlg() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Customizedlg */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_CUSTOMIZEDLG)
using namespace Vcl::Customizedlg;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_CustomizedlgHPP
