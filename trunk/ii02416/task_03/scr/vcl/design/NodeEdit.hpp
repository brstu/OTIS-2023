// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'NodeEdit.pas' rev: 35.00 (Windows)

#ifndef NodeeditHPP
#define NodeeditHPP

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
#include <Vcl.Consts.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Nodeedit
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TTreeViewItems;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TTreeViewItems : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
__published:
	Vcl::Stdctrls::TGroupBox* GroupBox1;
	Vcl::Stdctrls::TGroupBox* PropGroupBox;
	Vcl::Stdctrls::TButton* New;
	Vcl::Stdctrls::TButton* Delete;
	Vcl::Stdctrls::TLabel* Label1;
	Vcl::Stdctrls::TLabel* Label2;
	Vcl::Stdctrls::TLabel* Label3;
	Vcl::Comctrls::TTreeView* TreeView;
	Vcl::Stdctrls::TButton* NewSub;
	Vcl::Stdctrls::TEdit* TextEdit;
	Vcl::Stdctrls::TEdit* Image;
	Vcl::Stdctrls::TEdit* StateImage;
	Vcl::Stdctrls::TButton* OkButton;
	Vcl::Stdctrls::TButton* Cancel;
	Vcl::Stdctrls::TButton* Apply;
	Vcl::Stdctrls::TButton* Help;
	Vcl::Stdctrls::TEdit* SelectedIndex;
	Vcl::Stdctrls::TLabel* Label4;
	Vcl::Stdctrls::TButton* Load;
	Vcl::Dialogs::TOpenDialog* OpenDialog1;
	Vcl::Stdctrls::TEdit* ExpandedIndex;
	Vcl::Stdctrls::TLabel* Label5;
	Vcl::Stdctrls::TCheckBox* cbEnabled;
	Vcl::Extctrls::TPanel* pnMain;
	Vcl::Extctrls::TPanel* pnBottom;
	void __fastcall NewClick(System::TObject* Sender);
	void __fastcall NewSubClick(System::TObject* Sender);
	void __fastcall DeleteClick(System::TObject* Sender);
	void __fastcall ValueChange(System::TObject* Sender);
	void __fastcall TextEditExit(System::TObject* Sender);
	void __fastcall ImageExit(System::TObject* Sender);
	void __fastcall StateImageExit(System::TObject* Sender);
	void __fastcall ApplyClick(System::TObject* Sender);
	void __fastcall TreeViewChange(System::TObject* Sender, Vcl::Comctrls::TTreeNode* Node);
	void __fastcall TreeViewChanging(System::TObject* Sender, Vcl::Comctrls::TTreeNode* Node, bool &AllowChange);
	void __fastcall SelectedIndexExit(System::TObject* Sender);
	void __fastcall LoadClick(System::TObject* Sender);
	void __fastcall TreeViewDragOver(System::TObject* Sender, System::TObject* Source, int X, int Y, System::Uitypes::TDragState State, bool &Accept);
	void __fastcall TreeViewDragDrop(System::TObject* Sender, System::TObject* Source, int X, int Y);
	void __fastcall TreeViewEdited(System::TObject* Sender, Vcl::Comctrls::TTreeNode* Node, System::UnicodeString &S);
	void __fastcall HelpClick(System::TObject* Sender);
	void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall FormDestroy(System::TObject* Sender);
	void __fastcall ExpandedIndexExit(System::TObject* Sender);
	void __fastcall EnabledChanged(System::TObject* Sender);
	
private:
	Vcl::Comctrls::TTreeNodes* FItems;
	bool FDropping;
	void __fastcall FlushControls();
	void __fastcall SetItem(Vcl::Comctrls::TTreeNode* Value);
	void __fastcall SetStates();
	
public:
	__property Vcl::Comctrls::TTreeNodes* Items = {read=FItems};
public:
	/* TCustomForm.Create */ inline __fastcall virtual TTreeViewItems(System::Classes::TComponent* AOwner) : Vcl::Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TTreeViewItems(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TTreeViewItems() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TTreeViewItems(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE bool __fastcall EditTreeViewItems(Vcl::Comctrls::TTreeNodes* AItems);
}	/* namespace Nodeedit */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_NODEEDIT)
using namespace Nodeedit;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// NodeeditHPP
