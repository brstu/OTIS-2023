// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSAdd.pas' rev: 35.00 (Windows)

#ifndef DsaddHPP
#define DsaddHPP

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
#include <Vcl.Buttons.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dsadd
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TAddFields;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TAddFields : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
__published:
	Vcl::Stdctrls::TButton* OkBtn;
	Vcl::Stdctrls::TButton* CancelBtn;
	Vcl::Stdctrls::TGroupBox* GroupBox1;
	Vcl::Stdctrls::TListBox* FieldsList;
	Vcl::Stdctrls::TButton* HelpBtn;
	void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall HelpBtnClick(System::TObject* Sender);
	
public:
	void __fastcall SelectAll();
public:
	/* TCustomForm.Create */ inline __fastcall virtual TAddFields(System::Classes::TComponent* AOwner) : Vcl::Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TAddFields(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TAddFields() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TAddFields(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE TAddFields* AddFields;
}	/* namespace Dsadd */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DSADD)
using namespace Dsadd;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsaddHPP
