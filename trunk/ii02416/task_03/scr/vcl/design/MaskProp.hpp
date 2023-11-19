// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'MaskProp.pas' rev: 35.00 (Windows)

#ifndef MaskpropHPP
#define MaskpropHPP

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
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Buttons.hpp>
#include <DesignIntf.hpp>
#include <DesignEditors.hpp>
#include <Vcl.Mask.hpp>
#include <System.MaskUtils.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.Dialogs.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Maskprop
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TMaskProperty;
class DELPHICLASS TMaskForm;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TMaskProperty : public Designeditors::TStringProperty
{
	typedef Designeditors::TStringProperty inherited;
	
public:
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes();
	virtual void __fastcall Edit();
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TMaskProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TStringProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TMaskProperty() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TMaskForm : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
__published:
	Vcl::Stdctrls::TEdit* InputMask;
	Vcl::Stdctrls::TLabel* Label1;
	Vcl::Stdctrls::TListBox* ListBox1;
	Vcl::Stdctrls::TLabel* Label2;
	Vcl::Stdctrls::TLabel* Label3;
	Vcl::Mask::TMaskEdit* TestEdit;
	Vcl::Stdctrls::TLabel* Label4;
	Vcl::Stdctrls::TEdit* Blanks;
	Vcl::Stdctrls::TCheckBox* SaveMaskCheck;
	Vcl::Stdctrls::TButton* Masks;
	Vcl::Dialogs::TOpenDialog* OpenDialog1;
	Vcl::Stdctrls::TButton* OKButton;
	Vcl::Stdctrls::TButton* CancelButton;
	Vcl::Stdctrls::TButton* HelpButton;
	Vcl::Extctrls::TPanel* pnBottom;
	Vcl::Extctrls::TPanel* pnMain;
	void __fastcall BlanksChange(System::TObject* Sender);
	void __fastcall InputMaskChange(System::TObject* Sender);
	void __fastcall ListDrawItem(Vcl::Controls::TWinControl* Control, int Index, const System::Types::TRect &Rect, Winapi::Windows::TOwnerDrawState State);
	void __fastcall ListBoxSelect(System::TObject* Sender);
	void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall MasksClick(System::TObject* Sender);
	void __fastcall HelpButtonClick(System::TObject* Sender);
	
private:
	bool FInEditChange;
	System::UnicodeString __fastcall AddBlanks(System::UnicodeString Value);
	void __fastcall LoadMaskList(const System::UnicodeString FileName);
	
protected:
	System::UnicodeString __fastcall GetListMaskValue(int Index);
	System::UnicodeString __fastcall GetMaskValue(const System::UnicodeString Value);
	virtual void __fastcall Loaded();
public:
	/* TCustomForm.Create */ inline __fastcall virtual TMaskForm(System::Classes::TComponent* AOwner) : Vcl::Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TMaskForm(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TMaskForm() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TMaskForm(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE TMaskForm* MaskForm;
extern DELPHI_PACKAGE bool __fastcall EditInputMask(System::UnicodeString &InputMask, const System::UnicodeString InitialDir);
}	/* namespace Maskprop */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_MASKPROP)
using namespace Maskprop;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// MaskpropHPP
