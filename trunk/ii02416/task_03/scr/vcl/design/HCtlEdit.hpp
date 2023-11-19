// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'HCtlEdit.pas' rev: 35.00 (Windows)

#ifndef HctleditHPP
#define HctleditHPP

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
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Hctledit
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS THeaderControlEditor;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION THeaderControlEditor : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
__published:
	Vcl::Stdctrls::TGroupBox* GroupBox1;
	Vcl::Stdctrls::TListBox* SectionList;
	Vcl::Stdctrls::TButton* NewButton;
	Vcl::Stdctrls::TButton* DeleteButton;
	Vcl::Stdctrls::TGroupBox* GroupBox2;
	Vcl::Stdctrls::TEdit* SectionText;
	Vcl::Stdctrls::TEdit* SectionWidth;
	Vcl::Stdctrls::TEdit* SectionMinWidth;
	Vcl::Stdctrls::TEdit* SectionMaxWidth;
	Vcl::Stdctrls::TComboBox* SectionStyle;
	Vcl::Stdctrls::TComboBox* SectionAlignment;
	Vcl::Stdctrls::TCheckBox* SectionAllowClick;
	Vcl::Stdctrls::TButton* OkButton;
	Vcl::Stdctrls::TButton* CancelButton;
	Vcl::Stdctrls::TButton* ApplyButton;
	Vcl::Stdctrls::TButton* HelpButton;
	Vcl::Stdctrls::TLabel* Label1;
	Vcl::Stdctrls::TLabel* Label2;
	Vcl::Stdctrls::TLabel* Label3;
	Vcl::Stdctrls::TLabel* Label4;
	Vcl::Stdctrls::TLabel* Label5;
	void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall SectionListClick(System::TObject* Sender);
	void __fastcall NewButtonClick(System::TObject* Sender);
	void __fastcall DeleteButtonClick(System::TObject* Sender);
	void __fastcall SectionListMouseDown(System::TObject* Sender, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall SectionListDragOver(System::TObject* Sender, System::TObject* Source, int X, int Y, System::Uitypes::TDragState State, bool &Accept);
	void __fastcall SectionListDragDrop(System::TObject* Sender, System::TObject* Source, int X, int Y);
	void __fastcall SectionControlExit(System::TObject* Sender);
	void __fastcall SectionEditChange(System::TObject* Sender);
	void __fastcall SectionComboChange(System::TObject* Sender);
	void __fastcall OkButtonClick(System::TObject* Sender);
	void __fastcall CancelButtonClick(System::TObject* Sender);
	void __fastcall ApplyButtonClick(System::TObject* Sender);
	void __fastcall HelpButtonClick(System::TObject* Sender);
	
private:
	Vcl::Comctrls::THeaderControl* HeaderControl;
	Vcl::Comctrls::THeaderSections* TargetSections;
	int FocusIndex;
	bool UpdatingControls;
	bool Modified;
	void __fastcall UpdateControls();
	void __fastcall UpdateSection();
	void __fastcall UpdateSectionList();
public:
	/* TCustomForm.Create */ inline __fastcall virtual THeaderControlEditor(System::Classes::TComponent* AOwner) : Vcl::Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual THeaderControlEditor(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~THeaderControlEditor() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall THeaderControlEditor(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE bool __fastcall EditHeaderSections(Vcl::Comctrls::THeaderSections* HeaderSections);
}	/* namespace Hctledit */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_HCTLEDIT)
using namespace Hctledit;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// HctleditHPP
