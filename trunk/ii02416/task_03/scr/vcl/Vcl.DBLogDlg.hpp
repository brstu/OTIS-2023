// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.DBLogDlg.pas' rev: 35.00 (Windows)

#ifndef Vcl_DblogdlgHPP
#define Vcl_DblogdlgHPP

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

//-- user supplied -----------------------------------------------------------
#pragma link "Vcl.DBLogDlg"

namespace Vcl
{
namespace Dblogdlg
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TLoginDialog;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TLoginDialog : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
__published:
	Vcl::Extctrls::TPanel* Panel;
	Vcl::Extctrls::TBevel* Bevel;
	Vcl::Stdctrls::TLabel* DatabaseName;
	Vcl::Stdctrls::TButton* OKButton;
	Vcl::Stdctrls::TButton* CancelButton;
	Vcl::Extctrls::TPanel* Panel1;
	Vcl::Stdctrls::TLabel* Label1;
	Vcl::Stdctrls::TLabel* Label2;
	Vcl::Stdctrls::TLabel* Label3;
	Vcl::Stdctrls::TEdit* Password;
	Vcl::Stdctrls::TEdit* UserName;
	void __fastcall FormShow(System::TObject* Sender);
public:
	/* TCustomForm.Create */ inline __fastcall virtual TLoginDialog(System::Classes::TComponent* AOwner) : Vcl::Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TLoginDialog(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TLoginDialog() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TLoginDialog(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE bool __fastcall LoginDialog(const System::UnicodeString ADatabaseName, System::UnicodeString &AUserName, System::UnicodeString &APassword);
extern DELPHI_PACKAGE bool __fastcall LoginDialogEx(const System::UnicodeString ADatabaseName, System::UnicodeString &AUserName, System::UnicodeString &APassword, bool NameReadOnly);
extern DELPHI_PACKAGE bool __fastcall RemoteLoginDialog(System::UnicodeString &AUserName, System::UnicodeString &APassword);
extern DELPHI_PACKAGE void __fastcall SetCursorType(const int CurIndex);
}	/* namespace Dblogdlg */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_DBLOGDLG)
using namespace Vcl::Dblogdlg;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_DblogdlgHPP
