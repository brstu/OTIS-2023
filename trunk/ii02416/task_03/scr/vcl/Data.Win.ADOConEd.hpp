// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Data.Win.ADOConEd.pas' rev: 35.00 (Windows)

#ifndef Data_Win_AdoconedHPP
#define Data_Win_AdoconedHPP

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
#include <Vcl.Buttons.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>

//-- user supplied -----------------------------------------------------------

namespace Data
{
namespace Win
{
namespace Adoconed
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TConnEditForm;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TConnEditForm : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
__published:
	Vcl::Stdctrls::TButton* OkButton;
	Vcl::Stdctrls::TButton* CancelButton;
	Vcl::Stdctrls::TButton* HelpButton;
	Vcl::Stdctrls::TGroupBox* SourceofConnection;
	Vcl::Stdctrls::TRadioButton* UseDataLinkFile;
	Vcl::Stdctrls::TRadioButton* UseConnectionString;
	Vcl::Stdctrls::TComboBox* DataLinkFile;
	Vcl::Stdctrls::TButton* Browse;
	Vcl::Stdctrls::TEdit* ConnectionString;
	Vcl::Stdctrls::TButton* Build;
	void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall HelpButtonClick(System::TObject* Sender);
	void __fastcall BuildClick(System::TObject* Sender);
	void __fastcall BrowseClick(System::TObject* Sender);
	void __fastcall SourceButtonClick(System::TObject* Sender);
	
public:
	System::WideString __fastcall Edit(System::WideString ConnStr);
public:
	/* TCustomForm.Create */ inline __fastcall virtual TConnEditForm(System::Classes::TComponent* AOwner) : Vcl::Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TConnEditForm(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TConnEditForm() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TConnEditForm(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE bool __fastcall EditConnectionString(System::Classes::TComponent* Component);
}	/* namespace Adoconed */
}	/* namespace Win */
}	/* namespace Data */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DATA_WIN_ADOCONED)
using namespace Data::Win::Adoconed;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DATA_WIN)
using namespace Data::Win;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DATA)
using namespace Data;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Data_Win_AdoconedHPP
