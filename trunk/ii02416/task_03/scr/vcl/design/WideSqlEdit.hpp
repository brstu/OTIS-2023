// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'WideSqlEdit.pas' rev: 35.00 (Windows)

#ifndef WidesqleditHPP
#define WidesqleditHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Vcl.Forms.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <SqlEdit.hpp>
#include <System.WideStrings.hpp>
#include <System.Classes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Widesqledit
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TWideSQLEditForm;
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TGetTableNamesProcW)(System::Widestrings::TWideStrings* List, bool SystemTables);

typedef void __fastcall (__closure *TGetTableNamesForSchemaProcW)(System::Widestrings::TWideStrings* List, System::WideString SchemaName, bool SystemTables);

typedef void __fastcall (__closure *TGetFieldNamesProcW)(const System::WideString TableName, System::Widestrings::TWideStrings* List);

typedef void __fastcall (__closure *TGetFieldNamesForSchemaProcW)(const System::WideString TableName, System::WideString SchemaName, System::Widestrings::TWideStrings* List);

typedef bool __fastcall (__closure *TRequiresQuoteCharProcW)(const System::WideString Name);

class PASCALIMPLEMENTATION TWideSQLEditForm : public Sqledit::TSQLEditForm
{
	typedef Sqledit::TSQLEditForm inherited;
	
__published:
	HIDESBASE void __fastcall FormShow(System::TObject* Sender);
	HIDESBASE void __fastcall HelpButtonClick(System::TObject* Sender);
	HIDESBASE void __fastcall TableFieldsSplitterCanResize(System::TObject* Sender, int &NewSize, bool &Accept);
	HIDESBASE void __fastcall MetaInfoSQLSplitterCanResize(System::TObject* Sender, int &NewSize, bool &Accept);
	HIDESBASE void __fastcall MetaInfoSQLSplitterMoved(System::TObject* Sender);
	HIDESBASE void __fastcall TableListClick(System::TObject* Sender);
	HIDESBASE void __fastcall AddTableButtonClick(System::TObject* Sender);
	HIDESBASE void __fastcall AddFieldButtonClick(System::TObject* Sender);
	HIDESBASE void __fastcall SQLMemoExit(System::TObject* Sender);
	HIDESBASE void __fastcall FormDestroy(System::TObject* Sender);
	HIDESBASE void __fastcall SQLMemoEnter(System::TObject* Sender);
	HIDESBASE void __fastcall FormUpdateActionUpdate(System::TObject* Sender);
	
private:
	int CharHeight;
	System::WideString FQuoteChar;
	Vcl::Controls::TControlCanvas* SQLCanvas;
	HIDESBASE void __fastcall InsertText(System::WideString Text, bool AddComma = true);
	HIDESBASE void __fastcall DrawCaretPosIndicator();
	
protected:
	System::WideString FStartTable;
	System::WideString FSchemaName;
	TRequiresQuoteCharProcW NameRequiresQuoteCharW;
	TGetTableNamesForSchemaProcW GetTableNamesForSchemaW;
	TGetTableNamesProcW GetTableNamesW;
	TGetFieldNamesProcW GetFieldNamesW;
	TGetFieldNamesForSchemaProcW GetFieldNamesForSchemaW;
	HIDESBASE void __fastcall PopulateTableList();
	HIDESBASE void __fastcall PopulateFieldList();
	__property System::WideString QuoteChar = {read=FQuoteChar, write=FQuoteChar};
	__property System::WideString StartTable = {read=FStartTable, write=FStartTable};
public:
	/* TCustomForm.Create */ inline __fastcall virtual TWideSQLEditForm(System::Classes::TComponent* AOwner) : Sqledit::TSQLEditForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TWideSQLEditForm(System::Classes::TComponent* AOwner, int Dummy) : Sqledit::TSQLEditForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TWideSQLEditForm() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TWideSQLEditForm(HWND ParentWindow) : Sqledit::TSQLEditForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE bool __fastcall EditSQL(System::WideString &SQL, TGetTableNamesForSchemaProcW AGetTableNamesForSchema, TGetFieldNamesProcW AGetFieldNames, System::WideString AStartTblName = System::WideString(), System::WideString AQuoteChar = System::WideString(), TRequiresQuoteCharProcW ANeedsQuoteCharFunc = 0x0, System::WideString SchemaName = System::WideString())/* overload */;
extern DELPHI_PACKAGE bool __fastcall EditSQL(System::WideString &SQL, TGetTableNamesProcW AGetTableNames, TGetFieldNamesProcW AGetFieldNames, System::WideString AStartTblName = System::WideString(), System::WideString AQuoteChar = System::WideString(), TRequiresQuoteCharProcW ANeedsQuoteCharFunc = 0x0)/* overload */;
extern DELPHI_PACKAGE bool __fastcall EditSQL(System::Widestrings::TWideStrings* SQL, TGetTableNamesProcW AGetTableNames, TGetFieldNamesProcW AGetFieldNames, System::WideString AStartTblName = System::WideString(), System::WideString AQuoteChar = System::WideString(), TRequiresQuoteCharProcW ANeedsQuoteCharFunc = 0x0)/* overload */;
extern DELPHI_PACKAGE bool __fastcall EditSQLSchema(System::WideString &SQL, TGetTableNamesForSchemaProcW AGetTableNamesForSchema, TGetFieldNamesForSchemaProcW AGetFieldNamesForSchema, System::WideString AStartTblName = System::WideString(), System::WideString AQuoteChar = System::WideString(), TRequiresQuoteCharProcW ANeedsQuoteCharFunc = 0x0, System::WideString SchemaName = System::WideString())/* overload */;
extern DELPHI_PACKAGE bool __fastcall DefaultReqQuoteChar(System::WideString Name);
}	/* namespace Widesqledit */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WIDESQLEDIT)
using namespace Widesqledit;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WidesqleditHPP
