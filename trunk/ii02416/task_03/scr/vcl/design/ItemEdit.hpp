// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ItemEdit.pas' rev: 35.00 (Windows)

#ifndef ItemeditHPP
#define ItemeditHPP

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
#include <DsnConst.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Itemedit
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TItemInfo;
class DELPHICLASS TListViewItems;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TItemInfo : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Classes::TStringList* FSubItems;
	System::Classes::TList* FSubItemImages;
	System::UnicodeString FCaption;
	int FImageIndex;
	int FStateIndex;
	int FGroupID;
	
public:
	__fastcall TItemInfo(Vcl::Comctrls::TListItem* Item);
	__fastcall virtual ~TItemInfo();
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TListViewItems : public Vcl::Forms::TForm
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
	Vcl::Stdctrls::TEdit* CaptionEdit;
	Vcl::Stdctrls::TEdit* Image;
	Vcl::Stdctrls::TEdit* StateImage;
	Vcl::Stdctrls::TButton* OkButton;
	Vcl::Stdctrls::TButton* Cancel;
	Vcl::Stdctrls::TButton* Apply;
	Vcl::Stdctrls::TButton* Button7;
	Vcl::Stdctrls::TLabel* Label4;
	Vcl::Stdctrls::TComboBox* cbGroupID;
	Vcl::Extctrls::TPanel* pnMain;
	Vcl::Extctrls::TPanel* pnBottom;
	Vcl::Extctrls::TPanel* Panel1;
	Vcl::Extctrls::TPanel* Panel2;
	void __fastcall NewClick(System::TObject* Sender);
	void __fastcall NewSubClick(System::TObject* Sender);
	void __fastcall DeleteClick(System::TObject* Sender);
	void __fastcall ValueChange(System::TObject* Sender);
	void __fastcall CaptionEditExit(System::TObject* Sender);
	void __fastcall ImageExit(System::TObject* Sender);
	void __fastcall StateImageExit(System::TObject* Sender);
	void __fastcall ApplyClick(System::TObject* Sender);
	void __fastcall TreeViewChange(System::TObject* Sender, Vcl::Comctrls::TTreeNode* Node);
	void __fastcall TreeViewChanging(System::TObject* Sender, Vcl::Comctrls::TTreeNode* Node, bool &AllowChange);
	void __fastcall TreeViewDragOver(System::TObject* Sender, System::TObject* Source, int X, int Y, System::Uitypes::TDragState State, bool &Accept);
	void __fastcall TreeViewDragDrop(System::TObject* Sender, System::TObject* Source, int X, int Y);
	void __fastcall TreeViewEdited(System::TObject* Sender, Vcl::Comctrls::TTreeNode* Node, System::UnicodeString &S);
	void __fastcall Button7Click(System::TObject* Sender);
	void __fastcall TreeViewKeyDown(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall TreeViewEditing(System::TObject* Sender, Vcl::Comctrls::TTreeNode* Node, bool &AllowEdit);
	void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall FormDestroy(System::TObject* Sender);
	void __fastcall cbGroupIDChange(System::TObject* Sender);
	
private:
	Vcl::Comctrls::TListItems* FItems;
	bool FDropping;
	void __fastcall FlushControls();
	void __fastcall GetItem(TItemInfo* ItemInfo, Vcl::Comctrls::TListItem* Value);
	void __fastcall SetItem(TItemInfo* Value);
	void __fastcall SetStates();
	void __fastcall SetSubItem(const System::UnicodeString S, int ImageIndex);
	MESSAGE void __fastcall UMTreeEdit(Winapi::Messages::TMessage &M);
	
public:
	__property Vcl::Comctrls::TListItems* Items = {read=FItems};
public:
	/* TCustomForm.Create */ inline __fastcall virtual TListViewItems(System::Classes::TComponent* AOwner) : Vcl::Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TListViewItems(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TListViewItems() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TListViewItems(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Word UM_TREEEDIT = System::Word(0x400);
extern DELPHI_PACKAGE bool __fastcall EditListViewItems(Vcl::Comctrls::TListItems* AItems);
}	/* namespace Itemedit */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ITEMEDIT)
using namespace Itemedit;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// ItemeditHPP
