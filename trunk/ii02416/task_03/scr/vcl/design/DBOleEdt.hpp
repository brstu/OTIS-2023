// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBOleEdt.pas' rev: 35.00 (Windows)

#ifndef DboleedtHPP
#define DboleedtHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <System.TypInfo.hpp>
#include <DesignIntf.hpp>
#include <DesignEditors.hpp>
#include <Vcl.DBOleCtl.hpp>
#include <OCXReg.hpp>
#include <LibHelp.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dboleedt
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TDataBindForm;
class DELPHICLASS TDataBindEditor;
class DELPHICLASS TDataBindProperty;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TDataBindForm : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
__published:
	Vcl::Extctrls::TPanel* Panel1;
	Vcl::Stdctrls::TButton* OkBtn;
	Vcl::Stdctrls::TButton* CancelBtn;
	Vcl::Stdctrls::TButton* HelpBtn;
	Vcl::Stdctrls::TLabel* Label1;
	Vcl::Stdctrls::TLabel* Label2;
	Vcl::Stdctrls::TListBox* PropNameLB;
	Vcl::Stdctrls::TListBox* FieldNameLB;
	Vcl::Stdctrls::TButton* BindBtn;
	Vcl::Stdctrls::TLabel* Label3;
	Vcl::Stdctrls::TListBox* BoundLB;
	Vcl::Stdctrls::TButton* DeleteBtn;
	Vcl::Stdctrls::TButton* ClearBtn;
	void __fastcall BindBtnClick(System::TObject* Sender);
	void __fastcall ClearBtnClick(System::TObject* Sender);
	void __fastcall DeleteBtnClick(System::TObject* Sender);
	void __fastcall FormDestroy(System::TObject* Sender);
	void __fastcall PropNameLBDblClick(System::TObject* Sender);
	void __fastcall FieldNameLBClick(System::TObject* Sender);
	void __fastcall HelpBtnClick(System::TObject* Sender);
	void __fastcall FormCreate(System::TObject* Sender);
	
private:
	Vcl::Dbolectl::TDBOleControl* FDbCtl;
	void __fastcall ClearBoundList();
	void __fastcall FillDialog();
	void __fastcall EnableButtons();
	
public:
	bool __fastcall DoEditControl(Vcl::Dbolectl::TDBOleControl* DbCtl);
public:
	/* TCustomForm.Create */ inline __fastcall virtual TDataBindForm(System::Classes::TComponent* AOwner) : Vcl::Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TDataBindForm(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TDataBindForm() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TDataBindForm(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TDataBindEditor : public Ocxreg::TOleControlEditor
{
	typedef Ocxreg::TOleControlEditor inherited;
	
private:
	int FVerbID;
	
protected:
	virtual void __fastcall DoVerb(int Verb);
	
public:
	virtual int __fastcall GetVerbCount();
public:
	/* TOleControlEditor.Create */ inline __fastcall virtual TDataBindEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : Ocxreg::TOleControlEditor(AComponent, ADesigner) { }
	/* TOleControlEditor.Destroy */ inline __fastcall virtual ~TDataBindEditor() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDataBindProperty : public Designeditors::TClassProperty
{
	typedef Designeditors::TClassProperty inherited;
	
public:
	virtual void __fastcall Edit();
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes();
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TDataBindProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TClassProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TDataBindProperty() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Dboleedt */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DBOLEEDT)
using namespace Dboleedt;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DboleedtHPP
