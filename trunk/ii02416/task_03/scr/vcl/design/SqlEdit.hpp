// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'SqlEdit.pas' rev: 35.00 (Windows)

#ifndef SqleditHPP
#define SqleditHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <Winapi.ActiveX.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.Forms.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ActnList.hpp>

//-- user supplied -----------------------------------------------------------

namespace Sqledit
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TPopulateThread;
class DELPHICLASS TSQLEditForm;
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TExecuteEvent)();

class PASCALIMPLEMENTATION TPopulateThread : public System::Classes::TThread
{
	typedef System::Classes::TThread inherited;
	
private:
	TExecuteEvent FExecuteEvent;
	
public:
	__fastcall TPopulateThread(TExecuteEvent ExecuteEvent);
	virtual void __fastcall Execute();
public:
	/* TThread.Destroy */ inline __fastcall virtual ~TPopulateThread() { }
	
};


typedef void __fastcall (__closure *TGetTableNamesProc)(System::Classes::TStrings* List, bool SystemTables);

typedef void __fastcall (__closure *TGetTableNamesForSchemaProc)(System::Classes::TStrings* List, System::UnicodeString SchemaName, bool SystemTables);

typedef void __fastcall (__closure *TGetFieldNamesProc)(const System::UnicodeString TableName, System::Classes::TStrings* List);

typedef void __fastcall (__closure *TGetFieldNamesForSchemaProc)(const System::UnicodeString TableName, System::UnicodeString SchemaName, System::Classes::TStrings* List);

typedef bool __fastcall (__closure *TRequiresQuoteCharProc)(const System::UnicodeString Name);

class PASCALIMPLEMENTATION TSQLEditForm : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
__published:
	Vcl::Extctrls::TPanel* MainPanel;
	Vcl::Extctrls::TSplitter* MetaInfoSQLSplitter;
	Vcl::Extctrls::TPanel* ButtonPanel;
	Vcl::Extctrls::TImage* Image1;
	Vcl::Stdctrls::TButton* OkButton;
	Vcl::Stdctrls::TButton* CancelButton;
	Vcl::Stdctrls::TButton* HelpButton;
	Vcl::Extctrls::TPanel* MetaInfoPanel;
	Vcl::Extctrls::TSplitter* TableFieldsSplitter;
	Vcl::Extctrls::TPanel* TableListPanel;
	Vcl::Extctrls::TPanel* FieldsPanel;
	Vcl::Stdctrls::TLabel* FieldListLabel;
	Vcl::Stdctrls::TListBox* FieldList;
	Vcl::Stdctrls::TButton* AddFieldButton;
	Vcl::Actnlist::TActionList* ActionList1;
	Vcl::Actnlist::TAction* FormUpdateAction;
	Vcl::Extctrls::TPanel* SqlPanel;
	Vcl::Stdctrls::TMemo* SQLMemo;
	Vcl::Extctrls::TPanel* SqlLabelPanel;
	Vcl::Stdctrls::TLabel* SQLLabel;
	Vcl::Extctrls::TPanel* TablePanel;
	Vcl::Stdctrls::TListBox* TableList;
	Vcl::Stdctrls::TButton* AddTableButton;
	Vcl::Extctrls::TPanel* TableLabelPanel;
	Vcl::Stdctrls::TLabel* TableListLabel;
	void __fastcall FormShow(System::TObject* Sender);
	void __fastcall HelpButtonClick(System::TObject* Sender);
	void __fastcall TableFieldsSplitterCanResize(System::TObject* Sender, int &NewSize, bool &Accept);
	void __fastcall MetaInfoSQLSplitterCanResize(System::TObject* Sender, int &NewSize, bool &Accept);
	void __fastcall MetaInfoSQLSplitterMoved(System::TObject* Sender);
	void __fastcall TableListClick(System::TObject* Sender);
	void __fastcall AddTableButtonClick(System::TObject* Sender);
	void __fastcall AddFieldButtonClick(System::TObject* Sender);
	void __fastcall SQLMemoExit(System::TObject* Sender);
	void __fastcall FormDestroy(System::TObject* Sender);
	void __fastcall SQLMemoEnter(System::TObject* Sender);
	void __fastcall FormUpdateActionUpdate(System::TObject* Sender);
	
private:
	int CharHeight;
	System::UnicodeString FQuoteChar;
	Vcl::Controls::TControlCanvas* SQLCanvas;
	void __fastcall InsertText(System::UnicodeString Text, bool AddComma = true);
	void __fastcall DrawCaretPosIndicator();
	
protected:
	TPopulateThread* FPopulateThread;
	System::UnicodeString FStartTable;
	System::UnicodeString FSchemaName;
	TRequiresQuoteCharProc NameRequiresQuoteChar;
	TGetTableNamesForSchemaProc GetTableNamesForSchema;
	TGetTableNamesProc GetTableNames;
	TGetFieldNamesProc GetFieldNames;
	TGetFieldNamesForSchemaProc GetFieldNamesForSchema;
	void __fastcall PopulateTableList();
	void __fastcall PopulateFieldList();
	virtual bool __fastcall TerminatePopulateThread();
	virtual Vcl::Controls::TWinControl* __fastcall GetSQLMemoControl();
	System::UnicodeString __fastcall GetSQLText();
	void __fastcall SetSQLText(const System::UnicodeString Value);
	__property System::UnicodeString SQLText = {read=GetSQLText, write=SetSQLText};
	__property System::UnicodeString QuoteChar = {read=FQuoteChar, write=FQuoteChar};
	__property System::UnicodeString StartTable = {read=FStartTable, write=FStartTable};
public:
	/* TCustomForm.Create */ inline __fastcall virtual TSQLEditForm(System::Classes::TComponent* AOwner) : Vcl::Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TSQLEditForm(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TSQLEditForm() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TSQLEditForm(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE bool __fastcall EditSQL(System::UnicodeString &SQL, TGetTableNamesForSchemaProc AGetTableNamesForSchema, TGetFieldNamesProc AGetFieldNames, System::UnicodeString AStartTblName = System::UnicodeString(), System::UnicodeString AQuoteChar = System::UnicodeString(), TRequiresQuoteCharProc ANeedsQuoteCharFunc = 0x0, System::UnicodeString SchemaName = System::UnicodeString())/* overload */;
extern DELPHI_PACKAGE bool __fastcall EditSQL(System::UnicodeString &SQL, TGetTableNamesProc AGetTableNames, TGetFieldNamesProc AGetFieldNames, System::UnicodeString AStartTblName = System::UnicodeString(), System::UnicodeString AQuoteChar = System::UnicodeString(), TRequiresQuoteCharProc ANeedsQuoteCharFunc = 0x0)/* overload */;
extern DELPHI_PACKAGE bool __fastcall EditSQL(System::Classes::TStrings* SQL, TGetTableNamesProc AGetTableNames, TGetFieldNamesProc AGetFieldNames, System::UnicodeString AStartTblName = System::UnicodeString(), System::UnicodeString AQuoteChar = System::UnicodeString(), TRequiresQuoteCharProc ANeedsQuoteCharFunc = 0x0)/* overload */;
extern DELPHI_PACKAGE bool __fastcall EditSQLSchema(System::UnicodeString &SQL, TGetTableNamesForSchemaProc AGetTableNamesForSchema, TGetFieldNamesForSchemaProc AGetFieldNamesForSchema, System::UnicodeString AStartTblName = System::UnicodeString(), System::UnicodeString AQuoteChar = System::UnicodeString(), TRequiresQuoteCharProc ANeedsQuoteCharFunc = 0x0, System::UnicodeString SchemaName = System::UnicodeString())/* overload */;
extern DELPHI_PACKAGE bool __fastcall DefaultReqQuoteChar(System::UnicodeString Name);
}	/* namespace Sqledit */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SQLEDIT)
using namespace Sqledit;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SqleditHPP
