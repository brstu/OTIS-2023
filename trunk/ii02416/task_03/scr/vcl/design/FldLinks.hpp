// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FldLinks.pas' rev: 35.00 (Windows)

#ifndef FldlinksHPP
#define FldlinksHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Data.DB.hpp>
#include <Vcl.Buttons.hpp>
#include <DesignIntf.hpp>
#include <DesignEditors.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fldlinks
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TFieldLinkProperty;
class DELPHICLASS TLinkFields;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TFieldLinkProperty : public Designeditors::TStringProperty
{
	typedef Designeditors::TStringProperty inherited;
	
private:
	bool FChanged;
	Data::Db::TDataSet* FDataSet;
	
protected:
	Data::Db::TDataSet* __fastcall GetDataSet();
	virtual void __fastcall GetFieldNamesForIndex(System::Classes::TStrings* List);
	virtual bool __fastcall GetIndexBased();
	virtual Data::Db::TIndexDefs* __fastcall GetIndexDefs();
	virtual System::UnicodeString __fastcall GetIndexFieldNames();
	virtual System::UnicodeString __fastcall GetIndexName();
	virtual System::UnicodeString __fastcall GetMasterFields() = 0 ;
	virtual void __fastcall SetIndexFieldNames(const System::UnicodeString Value);
	virtual void __fastcall SetIndexName(const System::UnicodeString Value);
	virtual void __fastcall SetMasterFields(const System::UnicodeString Value) = 0 ;
	
public:
	__fastcall virtual TFieldLinkProperty(Data::Db::TDataSet* ADataSet);
	void __fastcall GetIndexNames(System::Classes::TStrings* List);
	__property bool IndexBased = {read=GetIndexBased, nodefault};
	__property Data::Db::TIndexDefs* IndexDefs = {read=GetIndexDefs};
	__property System::UnicodeString IndexFieldNames = {read=GetIndexFieldNames, write=SetIndexFieldNames};
	__property System::UnicodeString IndexName = {read=GetIndexName, write=SetIndexName};
	__property System::UnicodeString MasterFields = {read=GetMasterFields, write=SetMasterFields};
	__property bool Changed = {read=FChanged, nodefault};
	virtual void __fastcall Edit();
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes();
	__property Data::Db::TDataSet* DataSet = {read=GetDataSet};
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TFieldLinkProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TStringProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TFieldLinkProperty() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TLinkFields : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
__published:
	Vcl::Stdctrls::TListBox* BindList;
	Vcl::Stdctrls::TComboBox* IndexList;
	Vcl::Stdctrls::TLabel* IndexLabel;
	Vcl::Stdctrls::TLabel* Label2;
	Vcl::Stdctrls::TButton* AddButton;
	Vcl::Stdctrls::TButton* DeleteButton;
	Vcl::Stdctrls::TButton* ClearButton;
	Vcl::Stdctrls::TButton* Button1;
	Vcl::Stdctrls::TButton* Button2;
	Vcl::Stdctrls::TButton* Help;
	Vcl::Extctrls::TPanel* pnTop;
	Vcl::Extctrls::TPanel* pnBottom;
	Vcl::Extctrls::TPanel* pnMain;
	Vcl::Extctrls::TPanel* pnLink;
	Vcl::Extctrls::TPanel* pnJoined;
	Vcl::Extctrls::TPanel* pnJoinedRight;
	Vcl::Extctrls::TPanel* pnJoinedLeft;
	Vcl::Extctrls::TPanel* pnLinkCenter;
	Vcl::Extctrls::TPanel* Panel1;
	Vcl::Extctrls::TPanel* pnLinkLeft;
	Vcl::Stdctrls::TLabel* Label30;
	Vcl::Stdctrls::TListBox* DetailList;
	Vcl::Extctrls::TPanel* pnLinkRight;
	Vcl::Stdctrls::TLabel* Label31;
	Vcl::Stdctrls::TListBox* MasterList;
	void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall BindingListClick(System::TObject* Sender);
	void __fastcall AddButtonClick(System::TObject* Sender);
	void __fastcall DeleteButtonClick(System::TObject* Sender);
	void __fastcall BindListClick(System::TObject* Sender);
	void __fastcall ClearButtonClick(System::TObject* Sender);
	void __fastcall FormDestroy(System::TObject* Sender);
	void __fastcall BitBtn1Click(System::TObject* Sender);
	void __fastcall HelpClick(System::TObject* Sender);
	void __fastcall IndexListChange(System::TObject* Sender);
	
private:
	Data::Db::TDataSet* FDataSet;
	Data::Db::TDataSet* FMasterDataSet;
	TFieldLinkProperty* FDataSetProxy;
	System::UnicodeString FFullIndexName;
	System::UnicodeString MasterFieldList;
	System::UnicodeString IndexFieldList;
	System::Classes::TStringList* OrderedDetailList;
	System::Classes::TStringList* OrderedMasterList;
	void __fastcall OrderFieldList(System::Classes::TStrings* OrderedList, System::Classes::TStrings* List);
	void __fastcall AddToBindList(const System::UnicodeString Str1, const System::UnicodeString Str2);
	void __fastcall Initialize();
	__property System::UnicodeString FullIndexName = {read=FFullIndexName};
	void __fastcall SetDataSet(Data::Db::TDataSet* Value);
	
public:
	__property Data::Db::TDataSet* DataSet = {read=FDataSet, write=SetDataSet};
	__property TFieldLinkProperty* DataSetProxy = {read=FDataSetProxy, write=FDataSetProxy};
	bool __fastcall Edit();
public:
	/* TCustomForm.Create */ inline __fastcall virtual TLinkFields(System::Classes::TComponent* AOwner) : Vcl::Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TLinkFields(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TLinkFields() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TLinkFields(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE bool __fastcall EditMasterFields(Data::Db::TDataSet* ADataSet, TFieldLinkProperty* ADataSetProxy);
}	/* namespace Fldlinks */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FLDLINKS)
using namespace Fldlinks;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// FldlinksHPP
