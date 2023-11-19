// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSDefine.pas' rev: 35.00 (Windows)

#ifndef DsdefineHPP
#define DsdefineHPP

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
#include <Vcl.Buttons.hpp>
#include <Data.DB.hpp>
#include <DesignIntf.hpp>
#include <System.WideStrings.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dsdefine
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TDefineField;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TDefineField : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
__published:
	Vcl::Stdctrls::TButton* OkBtn;
	Vcl::Stdctrls::TButton* CancelBtn;
	Vcl::Stdctrls::TButton* HelpBtn;
	Vcl::Stdctrls::TGroupBox* FieldGroup;
	Vcl::Stdctrls::TLabel* ComponentNameLabel;
	Vcl::Stdctrls::TLabel* FieldNameLabel;
	Vcl::Stdctrls::TEdit* ComponentNameEdit;
	Vcl::Stdctrls::TEdit* FieldNameEdit;
	Vcl::Stdctrls::TComboBox* FieldTypeList;
	Vcl::Stdctrls::TLabel* SizeEditLabel;
	Vcl::Stdctrls::TEdit* SizeEdit;
	Vcl::Extctrls::TRadioGroup* FieldKind;
	Vcl::Stdctrls::TGroupBox* LookupGroup;
	Vcl::Stdctrls::TComboBox* DatasetList;
	Vcl::Stdctrls::TLabel* DatasetLabel;
	Vcl::Stdctrls::TComboBox* KeyFieldsList;
	Vcl::Stdctrls::TComboBox* LookupKeysList;
	Vcl::Stdctrls::TComboBox* ResultFieldList;
	Vcl::Stdctrls::TLabel* KeyFieldsLabel;
	Vcl::Stdctrls::TLabel* LookupKeysLabel;
	Vcl::Stdctrls::TLabel* ResultFieldLabel;
	Vcl::Stdctrls::TLabel* FieldTypeLabel;
	Vcl::Extctrls::TPanel* pnMain;
	Vcl::Extctrls::TPanel* pnBottom;
	void __fastcall FieldNameEditChange(System::TObject* Sender);
	void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall OkBtnClick(System::TObject* Sender);
	void __fastcall DatasetListDropDown(System::TObject* Sender);
	void __fastcall LookupKeysListDropDown(System::TObject* Sender);
	void __fastcall KeyFieldsListDropDown(System::TObject* Sender);
	void __fastcall ResultFieldListDropDown(System::TObject* Sender);
	void __fastcall FieldKindClick(System::TObject* Sender);
	void __fastcall DatasetListChange(System::TObject* Sender);
	void __fastcall HelpBtnClick(System::TObject* Sender);
	void __fastcall FieldTypeListChange(System::TObject* Sender);
	
private:
	Data::Db::TDataSet* FDataset;
	Designintf::_di_IDesigner FDesigner;
	Data::Db::TDataSetDesigner* FDSDesigner;
	Data::Db::TField* FField;
	bool __fastcall GetCalculated();
	System::UnicodeString __fastcall GetComponentName();
	Data::Db::TFieldClass __fastcall GetFieldClass();
	System::UnicodeString __fastcall GetFieldName();
	bool __fastcall GetLookup();
	Data::Db::TDataSet* __fastcall GetLookupDataset();
	System::UnicodeString __fastcall GetKeyFields();
	System::UnicodeString __fastcall GetLookupKeyFields();
	System::UnicodeString __fastcall GetLookupResultField();
	void __fastcall GetLookupFields(System::Classes::TStrings* Items);
	int __fastcall GetSize();
	void __fastcall SetCalculated(bool Value);
	void __fastcall SetComponentName(const System::UnicodeString Value);
	void __fastcall SetDataset(Data::Db::TDataSet* Value);
	void __fastcall SetFieldClass(Data::Db::TFieldClass Value);
	void __fastcall SetFieldName(const System::UnicodeString Value);
	void __fastcall SetLookup(bool Value);
	void __fastcall SetSize(int Value);
	void __fastcall UpdateLookupControls();
	
public:
	void __fastcall ConfigureForLookupOnly(const System::UnicodeString ADataSet, const System::UnicodeString AKey, const System::UnicodeString ALookup, const System::UnicodeString AResult, const System::UnicodeString AType, System::Word ASize);
	__property bool Calculated = {read=GetCalculated, write=SetCalculated, nodefault};
	__property bool Lookup = {read=GetLookup, write=SetLookup, nodefault};
	__property System::UnicodeString ComponentName = {read=GetComponentName, write=SetComponentName};
	__property Data::Db::TFieldClass FieldClass = {read=GetFieldClass, write=SetFieldClass};
	__property System::UnicodeString FieldName = {read=GetFieldName, write=SetFieldName};
	__property Data::Db::TField* Field = {read=FField};
	__property int Size = {read=GetSize, write=SetSize, nodefault};
	__property Data::Db::TDataSet* LookupDataset = {read=GetLookupDataset};
	__property System::UnicodeString KeyFields = {read=GetKeyFields};
	__property System::UnicodeString LookupKeyFields = {read=GetLookupKeyFields};
	__property System::UnicodeString LookupResultField = {read=GetLookupResultField};
	__property Data::Db::TDataSet* Dataset = {read=FDataset, write=SetDataset};
	__property Designintf::_di_IDesigner Designer = {read=FDesigner, write=FDesigner};
	__property Data::Db::TDataSetDesigner* DSDesigner = {read=FDSDesigner, write=FDSDesigner};
public:
	/* TCustomForm.Create */ inline __fastcall virtual TDefineField(System::Classes::TComponent* AOwner) : Vcl::Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TDefineField(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TDefineField() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TDefineField(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE TDefineField* DefineField;
extern DELPHI_PACKAGE System::UnicodeString __fastcall ClassNameNoT(Data::Db::TFieldClass FieldClass);
}	/* namespace Dsdefine */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DSDEFINE)
using namespace Dsdefine;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsdefineHPP
