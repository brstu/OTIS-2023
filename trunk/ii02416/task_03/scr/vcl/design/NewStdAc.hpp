// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'NewStdAc.pas' rev: 35.00 (Windows)

#ifndef NewstdacHPP
#define NewstdacHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <System.Actions.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Controls.hpp>
#include <System.Generics.Collections.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ActnList.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Newstdac
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TTreeNode;
class DELPHICLASS TTreeViewCat;
struct TRegAct;
class DELPHICLASS TNewStdActionDlg;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TCategoryKind : unsigned char { ckCategory, ckNone, ckAll, ckAction };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TTreeNode : public Vcl::Comctrls::TTreeNode
{
	typedef Vcl::Comctrls::TTreeNode inherited;
	
private:
	TCategoryKind FKind;
	System::UnicodeString __fastcall GetCategory();
	
public:
	__property TCategoryKind Kind = {read=FKind, write=FKind, nodefault};
	__property System::UnicodeString Category = {read=GetCategory};
public:
	/* TTreeNode.Create */ inline __fastcall virtual TTreeNode(Vcl::Comctrls::TTreeNodes* AOwner) : Vcl::Comctrls::TTreeNode(AOwner) { }
	/* TTreeNode.Destroy */ inline __fastcall virtual ~TTreeNode() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TTreeViewCat : public Vcl::Comctrls::TCustomTreeView
{
	typedef Vcl::Comctrls::TCustomTreeView inherited;
	
protected:
	virtual Vcl::Comctrls::TTreeNode* __fastcall CreateNode();
	
public:
	TTreeNode* __fastcall AddNode(Vcl::Comctrls::TTreeNode* Parent, System::UnicodeString Text, TCategoryKind Kind);
	TTreeNode* __fastcall InsertNode(Vcl::Comctrls::TTreeNode* Parent, int Index, System::UnicodeString Text, TCategoryKind Kind);
	TTreeNode* __fastcall NodeOf(System::UnicodeString Text, TCategoryKind Kind);
	void __fastcall GetExpandedList(System::Classes::TStringList* List);
	void __fastcall SetExpandedList(System::Classes::TStringList* List);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property Items;
	__property HideSelection = {default=1};
	__property ReadOnly = {default=0};
	__property MultiSelect = {default=0};
	__property RowSelect = {default=0};
	__property ShowLines = {default=1};
	__property OnChange;
	__property OnMouseDown;
public:
	/* TCustomTreeView.Create */ inline __fastcall virtual TTreeViewCat(System::Classes::TComponent* AOwner) : Vcl::Comctrls::TCustomTreeView(AOwner) { }
	/* TCustomTreeView.Destroy */ inline __fastcall virtual ~TTreeViewCat() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TTreeViewCat(HWND ParentWindow) : Vcl::Comctrls::TCustomTreeView(ParentWindow) { }
	
};


struct DECLSPEC_DRECORD TRegAct
{
public:
	System::UnicodeString Category;
	System::Classes::TBasicActionClass ActionClass;
	bool NeedFullName;
};


class PASCALIMPLEMENTATION TNewStdActionDlg : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
__published:
	Vcl::Stdctrls::TButton* HelpBtn;
	Vcl::Stdctrls::TButton* OKBtn;
	Vcl::Stdctrls::TButton* CancelBtn;
	Vcl::Actnlist::TActionList* ActionList1;
	Vcl::Actnlist::TAction* AcceptAction;
	Vcl::Stdctrls::TLabel* Label1;
	Vcl::Extctrls::TPanel* Panel1;
	void __fastcall HelpBtnClick(System::TObject* Sender);
	void __fastcall FormShow(System::TObject* Sender);
	void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall ActionListCompare(System::TObject* Sender, Vcl::Comctrls::TListItem* Item1, Vcl::Comctrls::TListItem* Item2, int Data, int &Compare);
	void __fastcall ActionListDblClick(System::TObject* Sender);
	void __fastcall AcceptActionUpdate(System::TObject* Sender);
	void __fastcall FormClose(System::TObject* Sender, System::Uitypes::TCloseAction &Action);
	
private:
	int FSortColumn;
	System::UnicodeString FFrameworkType;
	System::UnicodeString FSectionName;
	System::UnicodeString FRegKey;
	System::UnicodeString FTopItem;
	System::UnicodeString FSelItem;
	TTreeViewCat* FActionTree;
	System::Generics::Collections::TList__1<TRegAct>* FListAct;
	void __fastcall AddAction(const System::UnicodeString Category, System::Classes::TBasicActionClass ActionClass, void * Info);
	void __fastcall ReadSettings();
	void __fastcall WriteSettings();
	void __fastcall UpdateActionTree();
	void __fastcall SetFrameworkType(const System::UnicodeString Value);
	void __fastcall UpdateTreePos();
	
public:
	__fastcall virtual TNewStdActionDlg(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TNewStdActionDlg();
	__property TTreeViewCat* ActionTree = {read=FActionTree};
	__property System::UnicodeString FrameworkType = {read=FFrameworkType, write=SetFrameworkType};
	__property System::UnicodeString SectionName = {read=FSectionName, write=FSectionName};
	__property System::UnicodeString RegKey = {read=FRegKey, write=FRegKey};
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TNewStdActionDlg(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TForm(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TNewStdActionDlg(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Newstdac */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_NEWSTDAC)
using namespace Newstdac;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// NewstdacHPP
