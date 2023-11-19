// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ActnEdit.pas' rev: 35.00 (Windows)

#ifndef ActneditHPP
#define ActneditHPP

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
#include <System.ImageList.hpp>
#include <System.Actions.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <DesignWindows.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <ActionEditors.hpp>
#include <Vcl.StdActns.hpp>
#include <DesignIntf.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ToolWin.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.ImgList.hpp>
#include <ToolWnds.hpp>
#include <Vcl.ActnPopup.hpp>
#include <NewStdAc.hpp>
#include <Vcl.PlatformDefaultStyleActnCtrls.hpp>
#include <Vcl.VirtualImageList.hpp>
#include <IDEImageResources.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Actnedit
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TActionListDesigner;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TActionListDesigner : public Toolwnds::TToolbarDesignWindow
{
	typedef Toolwnds::TToolbarDesignWindow inherited;
	
__published:
	Vcl::Menus::TMenuItem* MoveUp1;
	Vcl::Menus::TMenuItem* MoveDown1;
	Vcl::Menus::TMenuItem* SelectAllItem;
	Vcl::Menus::TMenuItem* N2;
	Vcl::Menus::TMenuItem* CutItem;
	Vcl::Menus::TMenuItem* CopyItem;
	Vcl::Menus::TMenuItem* PasteItem;
	Vcl::Menus::TMenuItem* DeleteItem;
	Vcl::Actnlist::TAction* NewAction;
	Vcl::Actnlist::TAction* RemoveAction;
	Vcl::Actnlist::TAction* MoveUp;
	Vcl::Actnlist::TAction* MoveDown;
	Vcl::Actnlist::TAction* SelectAllAction;
	Vcl::Virtualimagelist::TVirtualImageList* ImageList1;
	Vcl::Menus::TMenuItem* AddCommon1;
	Vcl::Menus::TPopupMenu* NewActionsPopup;
	Vcl::Extctrls::TPanel* CategoryPanel;
	Vcl::Extctrls::TPanel* Panel3;
	Vcl::Stdctrls::TLabel* Label1;
	Vcl::Extctrls::TPanel* ActionPanel;
	Vcl::Comctrls::TListView* ListView1;
	Vcl::Extctrls::TPanel* Panel4;
	Vcl::Stdctrls::TLabel* Label2;
	Vcl::Menus::TMenuItem* NewAction1;
	Vcl::Actnlist::TAction* NewStdAction;
	Vcl::Menus::TMenuItem* NewStandardAction1;
	Vcl::Stdactns::TEditCopy* EditCopy1;
	Vcl::Stdactns::TEditCut* EditCut1;
	Vcl::Stdactns::TEditPaste* EditPaste1;
	Vcl::Actnlist::TAction* DescriptionsAction;
	Vcl::Menus::TMenuItem* PanelDescriptions1;
	Vcl::Extctrls::TSplitter* Splitter2;
	Vcl::Comctrls::TToolButton* ToolButton1;
	Vcl::Comctrls::TToolButton* ToolButton2;
	Vcl::Comctrls::TToolButton* ToolButton5;
	Vcl::Comctrls::TToolButton* ToolButton3;
	Vcl::Comctrls::TToolButton* ToolButton4;
	Vcl::Menus::TMenuItem* N3;
	Vcl::Actnlist::TAction* NewCommonAction;
	Vcl::Actnlist::TAction* HideAll;
	Vcl::Actnlist::TAction* ShowAll;
	Vcl::Actnlist::TAction* EnableAll;
	Vcl::Actnlist::TAction* DisableAll;
	Vcl::Controls::TControlAction* AllActions;
	Vcl::Menus::TMenuItem* Hideall1;
	Vcl::Menus::TMenuItem* Showall1;
	Vcl::Menus::TMenuItem* Disableall1;
	Vcl::Menus::TMenuItem* Enableall1;
	Vcl::Menus::TMenuItem* AllActions1;
	Vcl::Menus::TMenuItem* N4;
	void __fastcall NewActionExecute(System::TObject* Sender);
	void __fastcall NewActionUpdate(System::TObject* Sender);
	void __fastcall DeleteClick(System::TObject* Sender);
	void __fastcall FormKeyPress(System::TObject* Sender, System::WideChar &Key);
	void __fastcall FormKeyDown(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall FormClose(System::TObject* Sender, System::Uitypes::TCloseAction &Action);
	void __fastcall MoveUpClick(System::TObject* Sender);
	void __fastcall ListView1DragOver(System::TObject* Sender, System::TObject* Source, int X, int Y, System::Uitypes::TDragState State, bool &Accept);
	void __fastcall ListView1DragDrop(System::TObject* Sender, System::TObject* Source, int X, int Y);
	void __fastcall MoveDownClick(System::TObject* Sender);
	HIDESBASE void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall FormDestroy(System::TObject* Sender);
	void __fastcall FormResize(System::TObject* Sender);
	void __fastcall ListView1Change(System::TObject* Sender, Vcl::Comctrls::TListItem* Item, Vcl::Comctrls::TItemChange Change);
	void __fastcall SelectAllItemClick(System::TObject* Sender);
	void __fastcall PasteItemClick(System::TObject* Sender);
	void __fastcall CopyItemClick(System::TObject* Sender);
	void __fastcall CutItemClick(System::TObject* Sender);
	void __fastcall SelectedUpdate(System::TObject* Sender);
	void __fastcall TreeViewCatClick(System::TObject* Sender, Vcl::Comctrls::TTreeNode* Node);
	void __fastcall NewStdActionExecute(System::TObject* Sender);
	void __fastcall ListView1KeyPress(System::TObject* Sender, System::WideChar &Key);
	void __fastcall ListView1KeyDown(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall SelectAllActionUpdate(System::TObject* Sender);
	void __fastcall NewActionsPopupPopup(System::TObject* Sender);
	void __fastcall DescriptionsActionExecute(System::TObject* Sender);
	void __fastcall DescriptionsActionUpdate(System::TObject* Sender);
	void __fastcall ListView1StartDrag(System::TObject* Sender, Vcl::Controls::TDragObject* &DragObject);
	void __fastcall ListView1EndDrag(System::TObject* Sender, System::TObject* Target, int X, int Y);
	void __fastcall ListView1DblClick(System::TObject* Sender);
	void __fastcall NewCommonActionExecute(System::TObject* Sender);
	void __fastcall MoveUpUpdate(System::TObject* Sender);
	void __fastcall MoveDownUpdate(System::TObject* Sender);
	void __fastcall ListView1Resize(System::TObject* Sender);
	void __fastcall NewCommonActionUpdate(System::TObject* Sender);
	void __fastcall HideAllExecute(System::TObject* Sender);
	void __fastcall ShowAllExecute(System::TObject* Sender);
	void __fastcall EnableAllExecute(System::TObject* Sender);
	void __fastcall DisableAllExecute(System::TObject* Sender);
	void __fastcall AllActionsUpdate(System::TObject* Sender);
	void __fastcall TreeViewCatMouseDown(System::TObject* Sender, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall PopupMenu1Popup(System::TObject* Sender);
	void __fastcall FormShow(System::TObject* Sender);
	HIDESBASE void __fastcall FormAfterMonitorDpiChanged(System::TObject* Sender, int OldDPI, int NewDPI);
	
private:
	System::UnicodeString FActionListClassName;
	System::UnicodeString FCategory;
	Newstdac::TCategoryKind FCategoryKind;
	System::Actions::TContainedActionClass FCommonActionClass;
	System::Classes::TList* FItemIDList;
	int FStateLock;
	bool FSelectionError;
	System::Classes::TList* FFixups;
	int FUpdateCount;
	Vcl::Controls::TDragObject* FDragObject;
	System::TObject* FImageListListener;
	Vcl::Imglist::TCustomImageList* FInternalImageList;
	int FIndexOfForm;
	System::UnicodeString FFrameworkType;
	Actioneditors::TIDEActionsClass FIDEActions;
	System::Actions::TContainedActionList* FActions;
	bool FLoaded;
	System::UnicodeString FSectionName;
	System::Classes::TStringList* FActionClasses;
	bool FExpandedLoad;
	System::Classes::TStringList* FExpandeds;
	Newstdac::TTreeViewCat* FTreeCat;
	System::UnicodeString __fastcall GetRegKey();
	MESSAGE void __fastcall AMDeferUpdate(void *Msg);
	void __fastcall Copy();
	void __fastcall Cut();
	void __fastcall Paste();
	HIDESBASE void __fastcall Remove();
	void __fastcall SelectAll(bool DoUpdate = true);
	void __fastcall SelectNone(bool DoUpdate = true);
	int __fastcall GetActionIndex(int ListIndex);
	bool __fastcall GetDescriptionsVisible();
	void __fastcall SetDescriptionsVisible(bool Value);
	void __fastcall UpdateDescription(bool Visible);
	void __fastcall SetCommonActionClass(System::Actions::TContainedActionClass Value);
	void __fastcall UpdateCaption();
	HIDESBASE void __fastcall ComponentRead(System::Classes::TComponent* Component);
	HIDESBASE void __fastcall ReaderSetName(System::Classes::TReader* Reader, System::Classes::TComponent* Component, System::UnicodeString &Name);
	void __fastcall ReaderSetName2(System::Classes::TReader* Reader, System::Classes::TComponent* Component, System::UnicodeString &Name);
	void __fastcall LoadFromClipboard(System::Classes::TComponent* AOwner, System::Classes::TComponent* AParent, System::Classes::TList* Components);
	void __fastcall ReadStream(System::Classes::TStream* Stream, System::Classes::TComponent* AOwner, System::Classes::TComponent* AParent, System::Classes::TList* Components);
	void __fastcall NotifyActionListChange();
	void __fastcall LoadFromReg();
	void __fastcall SaveToReg();
	void __fastcall SetActions(System::Actions::TContainedActionList* const Value);
	void __fastcall UpdateFramework();
	void __fastcall AddAction(const System::UnicodeString Category, System::Classes::TBasicActionClass ActionClass, void * Info);
	void __fastcall FindComponentClassProc(System::Classes::TReader* Reader, const System::UnicodeString ClassName, System::Classes::TComponentClass &ComponentClass);
	void __fastcall EnumActionsProc(const System::UnicodeString Category, System::Classes::TBasicActionClass ActionClass, void * Info);
	bool __fastcall UpdateActionCat(Vcl::Actnlist::TAction* Action, System::UnicodeString Caption, System::Actions::_di_TEnumActionListRef Proc);
	void __fastcall UpdateActionsCat();
	void __fastcall UpdateTreeView();
	void __fastcall UpdateActionList();
	void __fastcall UpdateImageList();
	
protected:
	bool __fastcall ActionVisible(System::Actions::TContainedAction* Action);
	bool __fastcall EnumCat(System::Actions::_di_TEnumActionListRef Proc);
	void __fastcall BeginUpdate();
	virtual void __fastcall BuildNewActions();
	void __fastcall EndUpdate();
	void __fastcall FocusAction(System::Actions::TContainedAction* Action);
	int __fastcall IndexOfAction(System::Actions::TContainedAction* Action);
	DYNAMIC void __fastcall Activated();
	void __fastcall DoNewAction(const System::UnicodeString Category, System::Actions::TContainedAction* Action);
	void __fastcall Clear();
	void __fastcall LockState();
	virtual System::UnicodeString __fastcall UniqueName(System::Classes::TComponent* Component);
	void __fastcall UnlockState();
	__property int StateLock = {read=FStateLock, nodefault};
	DYNAMIC void __fastcall DoShow();
	
public:
	__property System::Actions::TContainedActionList* Actions = {read=FActions, write=SetActions};
	__fastcall virtual TActionListDesigner(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TActionListDesigner();
	virtual void __fastcall ImageListChanged(System::TObject* Sender);
	virtual void __fastcall ItemDeleted(const Designintf::_di_IDesigner ADesigner, System::Classes::TPersistent* AItem);
	virtual bool __fastcall EditAction(Designintf::TEditAction Action);
	virtual void __fastcall DesignerClosed(const Designintf::_di_IDesigner ADesigner, bool AGoingDormant);
	virtual void __fastcall ItemsModified(const Designintf::_di_IDesigner ADesigner);
	virtual Designintf::TEditState __fastcall GetEditState();
	void __fastcall GetSelection();
	HIDESBASE void __fastcall SetSelection();
	void __fastcall UpdateView(bool UpdateTree = true);
	__property System::Actions::TContainedActionClass CommonActionClass = {read=FCommonActionClass, write=SetCommonActionClass};
	__property bool DescriptionsVisible = {read=GetDescriptionsVisible, write=SetDescriptionsVisible, nodefault};
	__property System::UnicodeString FrameworkType = {read=FFrameworkType};
	__property Actioneditors::TIDEActionsClass IDEActions = {read=FIDEActions};
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TActionListDesigner(System::Classes::TComponent* AOwner, int Dummy) : Toolwnds::TToolbarDesignWindow(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TActionListDesigner(HWND ParentWindow) : Toolwnds::TToolbarDesignWindow(ParentWindow) { }
	
};


typedef System::TMetaClass* TActionListDesignerClass;

//-- var, const, procedure ---------------------------------------------------
static const System::Word AM_DeferUpdate = System::Word(0x464);
extern DELPHI_PACKAGE System::StaticArray<Newstdac::TCategoryKind, 3> CategoryKinds;
extern DELPHI_PACKAGE TActionListDesigner* __fastcall ShowActionListDesignerClass(const Designintf::_di_IDesigner ADesigner, TActionListDesignerClass DesignerClass, System::Actions::TContainedActionList* AActions);
extern DELPHI_PACKAGE void __fastcall ShowActionListDesigner(const Designintf::_di_IDesigner ADesigner, System::Actions::TContainedActionList* AActions);
}	/* namespace Actnedit */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ACTNEDIT)
using namespace Actnedit;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// ActneditHPP
