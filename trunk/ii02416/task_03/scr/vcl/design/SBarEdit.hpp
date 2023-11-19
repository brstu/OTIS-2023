// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'SBarEdit.pas' rev: 35.00 (Windows)

#ifndef SbareditHPP
#define SbareditHPP

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

namespace Sbaredit
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TStatusBarEditor;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TStatusBarEditor : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
__published:
	Vcl::Stdctrls::TGroupBox* GroupBox1;
	Vcl::Stdctrls::TListBox* PanelList;
	Vcl::Stdctrls::TButton* NewButton;
	Vcl::Stdctrls::TButton* DeleteButton;
	Vcl::Stdctrls::TGroupBox* GroupBox2;
	Vcl::Stdctrls::TEdit* PanelText;
	Vcl::Stdctrls::TEdit* PanelWidth;
	Vcl::Stdctrls::TComboBox* PanelStyle;
	Vcl::Stdctrls::TComboBox* PanelBevel;
	Vcl::Stdctrls::TComboBox* PanelAlignment;
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
	void __fastcall PanelListClick(System::TObject* Sender);
	void __fastcall NewButtonClick(System::TObject* Sender);
	void __fastcall DeleteButtonClick(System::TObject* Sender);
	void __fastcall PanelListMouseDown(System::TObject* Sender, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall PanelListDragOver(System::TObject* Sender, System::TObject* Source, int X, int Y, System::Uitypes::TDragState State, bool &Accept);
	void __fastcall PanelListDragDrop(System::TObject* Sender, System::TObject* Source, int X, int Y);
	void __fastcall PanelControlExit(System::TObject* Sender);
	void __fastcall PanelEditChange(System::TObject* Sender);
	void __fastcall PanelComboChange(System::TObject* Sender);
	void __fastcall OkButtonClick(System::TObject* Sender);
	void __fastcall CancelButtonClick(System::TObject* Sender);
	void __fastcall ApplyButtonClick(System::TObject* Sender);
	void __fastcall HelpButtonClick(System::TObject* Sender);
	
private:
	Vcl::Comctrls::TStatusBar* StatusBar;
	Vcl::Comctrls::TStatusPanels* TargetPanels;
	int FocusIndex;
	bool UpdatingControls;
	bool Modified;
	void __fastcall UpdateControls();
	void __fastcall UpdatePanel();
	void __fastcall UpdatePanelList();
public:
	/* TCustomForm.Create */ inline __fastcall virtual TStatusBarEditor(System::Classes::TComponent* AOwner) : Vcl::Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TStatusBarEditor(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TStatusBarEditor() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TStatusBarEditor(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE bool __fastcall EditStatusPanels(Vcl::Comctrls::TStatusPanels* StatusPanels);
}	/* namespace Sbaredit */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SBAREDIT)
using namespace Sbaredit;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SbareditHPP
