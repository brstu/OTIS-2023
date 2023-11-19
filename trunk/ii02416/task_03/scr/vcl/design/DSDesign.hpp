// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSDesign.pas' rev: 35.00 (Windows)

#ifndef DsdesignHPP
#define DsdesignHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.SysUtils.hpp>
#include <Winapi.Messages.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Data.DB.hpp>
#include <Vcl.DBCtrls.hpp>
#include <DesignIntf.hpp>
#include <DesignEditors.hpp>
#include <DsnDBCst.hpp>
#include <DesignWindows.hpp>
#include <Vcl.Menus.hpp>
#include <DrpCtrls.hpp>
#include <Vcl.ActnPopup.hpp>
#include <Vcl.PlatformDefaultStyleActnCtrls.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dsdesign
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TFieldsEditor;
class DELPHICLASS TDSDesigner;
//-- type declarations -------------------------------------------------------
typedef bool __fastcall (__closure *TSelectionProc)(Data::Db::TField* Field);

typedef System::TMetaClass* TDSDesignerClass;

class PASCALIMPLEMENTATION TFieldsEditor : public Designwindows::TDesignWindow
{
	typedef Designwindows::TDesignWindow inherited;
	
__published:
	Vcl::Extctrls::TPanel* Panel1;
	Data::Db::TDataSource* DataSource;
	Vcl::Actnpopup::TPopupActionBar* LocalMenu;
	Vcl::Menus::TMenuItem* AddItem;
	Vcl::Menus::TMenuItem* NewItem;
	Vcl::Menus::TMenuItem* N1;
	Vcl::Menus::TMenuItem* CutItem;
	Vcl::Menus::TMenuItem* CopyItem;
	Vcl::Menus::TMenuItem* PasteItem;
	Vcl::Menus::TMenuItem* DeleteItem;
	Vcl::Menus::TMenuItem* SelectAllItem;
	Vcl::Stdctrls::TListBox* FieldListBox;
	Vcl::Dbctrls::TDBNavigator* DBNavigator;
	Vcl::Menus::TMenuItem* Addallfields1;
	Vcl::Stdctrls::TListBox* AggListBox;
	Vcl::Extctrls::TSplitter* Splitter1;
	void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall FormDestroy(System::TObject* Sender);
	void __fastcall AddItemClick(System::TObject* Sender);
	void __fastcall DeleteItemClick(System::TObject* Sender);
	void __fastcall FieldListBoxDragOver(System::TObject* Sender, System::TObject* Source, int X, int Y, System::Uitypes::TDragState State, bool &Accept);
	void __fastcall FieldListBoxDragDrop(System::TObject* Sender, System::TObject* Source, int X, int Y);
	void __fastcall AListBoxKeyDown(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall NewItemClick(System::TObject* Sender);
	void __fastcall SelectTable(System::TObject* Sender);
	void __fastcall AListBoxClick(System::TObject* Sender);
	void __fastcall AListBoxKeyPress(System::TObject* Sender, System::WideChar &Key);
	void __fastcall ClearAllClick(System::TObject* Sender);
	void __fastcall FieldListBoxStartDrag(System::TObject* Sender, Vcl::Controls::TDragObject* &DragObject);
	void __fastcall SelectAllItemClick(System::TObject* Sender);
	void __fastcall CutItemClick(System::TObject* Sender);
	void __fastcall CopyItemClick(System::TObject* Sender);
	void __fastcall PasteItemClick(System::TObject* Sender);
	void __fastcall LocalMenuPopup(System::TObject* Sender);
	void __fastcall AddAllFields(System::TObject* Sender);
	
private:
	TDSDesignerClass FDSDesignerClass;
	Vcl::Controls::TDragObject* FDragObject;
	TDSDesigner* FDSDesigner;
	Data::Db::TDataSet* FDataset;
	int FFocusRectItem;
	int FMinWidth;
	int FMinHeight;
	bool FFieldListUpdated;
	int FUpdateCount;
	void __fastcall AddFields(bool All);
	void __fastcall BeginUpdate();
	void __fastcall Copy();
	Data::Db::TField* __fastcall CreateFields(Vcl::Stdctrls::TListBox* FieldsList);
	void __fastcall Cut();
	void __fastcall Endupdate();
	void __fastcall MoveFields(int MoveOffset);
	void __fastcall Paste();
	void __fastcall RemoveFields(Vcl::Stdctrls::TListBox* Listbox);
	void __fastcall SelectAll();
	void __fastcall RestoreSelection(Vcl::Stdctrls::TListBox* List, System::Classes::TStringList* &Selection, int ItemIndex, int TopIndex, bool RestoreUpdate);
	void __fastcall SaveSelection(Vcl::Stdctrls::TListBox* List, System::Classes::TStringList* &Selection, int &ItemIndex, int &TopIndex, bool NoUpdate);
	void __fastcall SetDataset(Data::Db::TDataSet* Value);
	void __fastcall UpdateDisplay();
	void __fastcall UpdateCaption();
	void __fastcall UpdateFieldList();
	void __fastcall UpdateSelection();
	HIDESBASE MESSAGE void __fastcall WMGetMinMaxInfo(Winapi::Messages::TWMGetMinMaxInfo &Message);
	Vcl::Stdctrls::TListBox* __fastcall GetActiveListbox();
	
protected:
	DYNAMIC void __fastcall Activated();
	void __fastcall CheckFieldDelete();
	void __fastcall CheckFieldAdd();
	virtual System::UnicodeString __fastcall UniqueName(System::Classes::TComponent* Component);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	
public:
	__fastcall virtual ~TFieldsEditor();
	virtual void __fastcall ItemDeleted(const Designintf::_di_IDesigner ADesigner, System::Classes::TPersistent* AItem);
	virtual Designintf::TEditState __fastcall GetEditState();
	virtual bool __fastcall EditAction(Designintf::TEditAction Action);
	bool __fastcall ForEachSelection(TSelectionProc Proc);
	virtual void __fastcall ItemsModified(const Designintf::_di_IDesigner Designer);
	virtual void __fastcall SelectionChanged(const Designintf::_di_IDesigner ADesigner, const Designintf::_di_IDesignerSelections ASelection);
	Data::Db::TField* __fastcall DoNewField();
	Data::Db::TField* __fastcall DoNewLookupField(const System::UnicodeString ADataSet, const System::UnicodeString AKey, const System::UnicodeString ALookup, const System::UnicodeString AResult, const System::UnicodeString AType, System::Word ASize);
	Data::Db::TField* __fastcall DoAddFields(bool All);
	__property Data::Db::TDataSet* Dataset = {read=FDataset, write=SetDataset};
	__property TDSDesignerClass DSDesignerClass = {read=FDSDesignerClass, write=FDSDesignerClass};
	__property TDSDesigner* DSDesigner = {read=FDSDesigner};
public:
	/* TDesignWindow.Create */ inline __fastcall virtual TFieldsEditor(System::Classes::TComponent* AOwner) : Designwindows::TDesignWindow(AOwner) { }
	
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TFieldsEditor(System::Classes::TComponent* AOwner, int Dummy) : Designwindows::TDesignWindow(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TFieldsEditor(HWND ParentWindow) : Designwindows::TDesignWindow(ParentWindow) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TDSDesigner : public Data::Db::TDataSetDesigner
{
	typedef Data::Db::TDataSetDesigner inherited;
	
private:
	TFieldsEditor* FFieldsEditor;
	
public:
	__fastcall virtual ~TDSDesigner();
	virtual void __fastcall DataEvent(Data::Db::TDataEvent Event, NativeInt Info);
	virtual void __fastcall BeginCreateFields();
	virtual void __fastcall BeginUpdateFieldDefs();
	virtual Data::Db::TField* __fastcall DoCreateField(const System::WideString FieldName, System::UnicodeString Origin);
	virtual void __fastcall EndCreateFields();
	virtual void __fastcall EndUpdateFieldDefs();
	virtual System::UnicodeString __fastcall GetControlClass(Data::Db::TField* Field);
	virtual void __fastcall InitializeMenu(Vcl::Menus::TPopupMenu* Menu);
	virtual bool __fastcall SupportsAggregates();
	virtual bool __fastcall SupportsInternalCalc();
	virtual void __fastcall UpdateMenus(Vcl::Menus::TPopupMenu* Menu, Designintf::TEditState EditState);
	__property TFieldsEditor* FieldsEditor = {read=FFieldsEditor};
public:
	/* TDataSetDesigner.Create */ inline __fastcall virtual TDSDesigner(Data::Db::TDataSet* DataSet) : Data::Db::TDataSetDesigner(DataSet) { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE int DesignerCount;
extern DELPHI_PACKAGE void __fastcall ShowFieldsEditor(Designintf::_di_IDesigner Designer, Data::Db::TDataSet* ADataset, TDSDesignerClass DesignerClass);
extern DELPHI_PACKAGE TFieldsEditor* __fastcall CreateFieldsEditor(Designintf::_di_IDesigner Designer, Data::Db::TDataSet* ADataset, TDSDesignerClass DesignerClass, bool &Shared);
extern DELPHI_PACKAGE System::UnicodeString __fastcall CreateUniqueName(Data::Db::TDataSet* Dataset, const System::UnicodeString FieldName, Data::Db::TFieldClass FieldClass, System::Classes::TComponent* Component);
}	/* namespace Dsdesign */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DSDESIGN)
using namespace Dsdesign;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsdesignHPP
