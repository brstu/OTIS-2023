// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FiltEdit.pas' rev: 35.00 (Windows)

#ifndef FilteditHPP
#define FilteditHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Tabs.hpp>
#include <Vcl.Buttons.hpp>
#include <DesignIntf.hpp>
#include <DesignEditors.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>

//-- user supplied -----------------------------------------------------------

namespace Filtedit
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TFilterEditor;
class DELPHICLASS TFilterProperty;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TFilterEditor : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
__published:
	Vcl::Stdctrls::TButton* OKButton;
	Vcl::Stdctrls::TButton* CancelButton;
	Vcl::Stdctrls::TButton* HelpButton;
	Vcl::Extctrls::TPanel* pnBottom;
	Vcl::Extctrls::TPanel* pnMain;
	void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall HelpBtnClick(System::TObject* Sender);
	void __fastcall FormAfterMonitorDpiChanged(System::TObject* Sender, int OldDPI, int NewDPI);
	
private:
	void __fastcall SetFilter(System::UnicodeString Value);
	System::UnicodeString __fastcall GetFilter();
	void __fastcall UpdateGridColumns();
public:
	/* TCustomForm.Create */ inline __fastcall virtual TFilterEditor(System::Classes::TComponent* AOwner) : Vcl::Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TFilterEditor(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TFilterEditor() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TFilterEditor(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TFilterProperty : public Designeditors::TStringProperty
{
	typedef Designeditors::TStringProperty inherited;
	
public:
	virtual void __fastcall Edit();
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes();
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TFilterProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TStringProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TFilterProperty() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Filtedit */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FILTEDIT)
using namespace Filtedit;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// FilteditHPP
