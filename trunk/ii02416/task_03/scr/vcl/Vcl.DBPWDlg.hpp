// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.DBPWDlg.pas' rev: 35.00 (Windows)

#ifndef Vcl_DbpwdlgHPP
#define Vcl_DbpwdlgHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Data.DB.hpp>

//-- user supplied -----------------------------------------------------------
#pragma link "Vcl.DBPWDlg"

namespace Vcl
{
namespace Dbpwdlg
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TPasswordDialog;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TPasswordDialog : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
__published:
	Vcl::Stdctrls::TGroupBox* GroupBox1;
	Vcl::Stdctrls::TEdit* Edit;
	Vcl::Stdctrls::TButton* AddButton;
	Vcl::Stdctrls::TButton* RemoveButton;
	Vcl::Stdctrls::TButton* RemoveAllButton;
	Vcl::Stdctrls::TButton* OKButton;
	Vcl::Stdctrls::TButton* CancelButton;
	void __fastcall EditChange(System::TObject* Sender);
	void __fastcall AddButtonClick(System::TObject* Sender);
	void __fastcall RemoveButtonClick(System::TObject* Sender);
	void __fastcall RemoveAllButtonClick(System::TObject* Sender);
	void __fastcall OKButtonClick(System::TObject* Sender);
	
private:
	bool PasswordAdded;
	Data::Db::_di_IDBSession FSession;
public:
	/* TCustomForm.Create */ inline __fastcall virtual TPasswordDialog(System::Classes::TComponent* AOwner) : Vcl::Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TPasswordDialog(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TPasswordDialog() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TPasswordDialog(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE bool __fastcall PasswordDialog(const Data::Db::_di_IDBSession ASession);
}	/* namespace Dbpwdlg */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_DBPWDLG)
using namespace Vcl::Dbpwdlg;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_DbpwdlgHPP
