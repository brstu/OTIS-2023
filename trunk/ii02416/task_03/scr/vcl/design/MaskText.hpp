// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'MaskText.pas' rev: 35.00 (Windows)

#ifndef MasktextHPP
#define MasktextHPP

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
#include <Vcl.Buttons.hpp>
#include <DesignIntf.hpp>
#include <DesignEditors.hpp>
#include <Vcl.Mask.hpp>

//-- user supplied -----------------------------------------------------------

namespace Masktext
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TMaskTextProperty;
class DELPHICLASS TMaskTextForm;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TMaskTextProperty : public Designeditors::TStringProperty
{
	typedef Designeditors::TStringProperty inherited;
	
public:
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes();
	virtual void __fastcall Edit();
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TMaskTextProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TStringProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TMaskTextProperty() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TMaskTextForm : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
__published:
	Vcl::Stdctrls::TLabel* Label3;
	Vcl::Mask::TMaskEdit* TestEdit;
	Vcl::Stdctrls::TLabel* Label1;
	Vcl::Stdctrls::TLabel* EditMask;
	Vcl::Stdctrls::TButton* OKButton;
	Vcl::Stdctrls::TButton* CancelButton;
	Vcl::Stdctrls::TButton* HelpButton;
	void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall HelpButtonClick(System::TObject* Sender);
public:
	/* TCustomForm.Create */ inline __fastcall virtual TMaskTextForm(System::Classes::TComponent* AOwner) : Vcl::Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TMaskTextForm(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TMaskTextForm() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TMaskTextForm(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE TMaskTextForm* MaskTextForm;
extern DELPHI_PACKAGE bool __fastcall EditMaskText(const System::UnicodeString Mask, System::UnicodeString &MaskText);
}	/* namespace Masktext */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_MASKTEXT)
using namespace Masktext;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// MasktextHPP
