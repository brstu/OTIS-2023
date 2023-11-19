// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ColEdit.pas' rev: 35.00 (Windows)

#ifndef ColeditHPP
#define ColeditHPP

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
#include <Vcl.Dialogs.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.ComCtrls.hpp>
#include <LibHelp.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Coledit
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TColInfo;
class DELPHICLASS TListViewColumns;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TColInfo : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Classes::TList* FOwner;
	System::UnicodeString FCaption;
	int FWidth;
	int FIndex;
	System::Classes::TAlignment FAlignment;
	Vcl::Comctrls::TWidth FWidthType;
	int __fastcall GetIndex();
	
public:
	__fastcall TColInfo(System::Classes::TList* AOwner, Vcl::Comctrls::TListColumn* Column);
	__fastcall virtual ~TColInfo();
	__property int Index = {read=GetIndex, nodefault};
	__property System::Classes::TList* Owner = {read=FOwner};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TListViewColumns : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
__published:
	Vcl::Stdctrls::TGroupBox* ColumnGroupBox;
	Vcl::Stdctrls::TGroupBox* PropGroupBox;
	Vcl::Stdctrls::TListBox* ColumnListBox;
	Vcl::Stdctrls::TButton* New;
	Vcl::Stdctrls::TButton* Delete;
	Vcl::Stdctrls::TButton* Ok;
	Vcl::Stdctrls::TButton* Cancel;
	Vcl::Stdctrls::TButton* Apply;
	Vcl::Stdctrls::TButton* Help;
	Vcl::Stdctrls::TLabel* Label1;
	Vcl::Stdctrls::TLabel* Label4;
	Vcl::Stdctrls::TEdit* TextEdit;
	Vcl::Stdctrls::TComboBox* AlignmentEdit;
	Vcl::Stdctrls::TGroupBox* GroupBox1;
	Vcl::Stdctrls::TEdit* WidthEdit;
	Vcl::Stdctrls::TRadioButton* HWidthBtn;
	Vcl::Stdctrls::TRadioButton* IWidthBtn;
	Vcl::Stdctrls::TRadioButton* WidthBtn;
	void __fastcall ValueChanged(System::TObject* Sender);
	void __fastcall DeleteClick(System::TObject* Sender);
	void __fastcall TextEditExit(System::TObject* Sender);
	void __fastcall IndexEditExit(System::TObject* Sender);
	void __fastcall WidthEditExit(System::TObject* Sender);
	void __fastcall ColumnListBoxClick(System::TObject* Sender);
	void __fastcall NewClick(System::TObject* Sender);
	void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall ApplyClick(System::TObject* Sender);
	void __fastcall AlignmentEditExit(System::TObject* Sender);
	void __fastcall FormDestroy(System::TObject* Sender);
	void __fastcall ColumnListBoxDragOver(System::TObject* Sender, System::TObject* Source, int X, int Y, System::Uitypes::TDragState State, bool &Accept);
	void __fastcall ColumnListBoxDragDrop(System::TObject* Sender, System::TObject* Source, int X, int Y);
	void __fastcall ColumnListBoxStartDrag(System::TObject* Sender, Vcl::Controls::TDragObject* &DragObject);
	void __fastcall ColumnListBoxEndDrag(System::TObject* Sender, System::TObject* Target, int X, int Y);
	void __fastcall ColumnListBoxMouseDown(System::TObject* Sender, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall HWidthBtnClick(System::TObject* Sender);
	void __fastcall HelpClick(System::TObject* Sender);
	
private:
	System::Classes::TList* FInfoList;
	System::UnicodeString FDefaultText;
	int FDragIndex;
	Vcl::Comctrls::TListColumns* FColumns;
	void __fastcall FlushControls();
	void __fastcall GetItem(Vcl::Comctrls::TListColumn* Value);
	TColInfo* __fastcall GetColInfo(int Index);
	System::UnicodeString __fastcall ListBoxText(TColInfo* Value);
	void __fastcall SetItem(TColInfo* Value);
	void __fastcall SetListBoxText(int Index, const System::UnicodeString S);
	void __fastcall SetStates();
	
public:
	__property TColInfo* ColItems[int Index] = {read=GetColInfo};
	__property Vcl::Comctrls::TListColumns* Columns = {read=FColumns};
	__property System::UnicodeString DefaultText = {read=FDefaultText};
	__property System::Classes::TList* InfoList = {read=FInfoList};
public:
	/* TCustomForm.Create */ inline __fastcall virtual TListViewColumns(System::Classes::TComponent* AOwner) : Vcl::Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TListViewColumns(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TListViewColumns() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TListViewColumns(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE bool __fastcall EditListViewColumns(Vcl::Comctrls::TListColumns* AColumns);
}	/* namespace Coledit */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_COLEDIT)
using namespace Coledit;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// ColeditHPP
