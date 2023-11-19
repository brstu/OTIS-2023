// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FIRecov.pas' rev: 35.00 (Windows)

#ifndef FirecovHPP
#define FirecovHPP

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
#include <ComponentDesigner.hpp>

//-- user supplied -----------------------------------------------------------

namespace Firecov
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TRecoverFormInheritence;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TRecoverFormInheritence : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
__published:
	Vcl::Stdctrls::TLabel* MessageLbl;
	Vcl::Stdctrls::TGroupBox* GroupBox1;
	Vcl::Stdctrls::TRadioButton* RenamedCheck;
	Vcl::Stdctrls::TRadioButton* DeletedCheck;
	Vcl::Stdctrls::TComboBox* RenameText;
	Vcl::Stdctrls::TButton* OKBtn;
	Vcl::Stdctrls::TButton* CancelBtn;
	Vcl::Stdctrls::TRadioButton* CreateCheck;
	void __fastcall OptionsChanged(System::TObject* Sender);
	
public:
	void __fastcall Setup(const System::UnicodeString FormName, const System::UnicodeString AncestorFormName, const System::UnicodeString ComponentName, const System::UnicodeString Names, bool RecoveringFrame);
public:
	/* TCustomForm.Create */ inline __fastcall virtual TRecoverFormInheritence(System::Classes::TComponent* AOwner) : Vcl::Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TRecoverFormInheritence(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TRecoverFormInheritence() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TRecoverFormInheritence(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE Componentdesigner::TRecoveryResult __fastcall FormInheritenceRecovery(const System::UnicodeString FormName, const System::UnicodeString AncestorFormName, System::UnicodeString &ComponentName, const System::UnicodeString Names, bool RecoveringFrame);
}	/* namespace Firecov */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FIRECOV)
using namespace Firecov;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// FirecovHPP
