// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ValueEdit.pas' rev: 35.00 (Windows)

#ifndef ValueeditHPP
#define ValueeditHPP

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
#include <System.Variants.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Dialogs.hpp>
#include <StrEdit.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.ValEdit.hpp>
#include <Vcl.PlatformDefaultStyleActnCtrls.hpp>
#include <Vcl.ActnPopup.hpp>

//-- user supplied -----------------------------------------------------------

namespace Valueedit
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TValueEditDlg;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TValueEditDlg : public Stredit::TStrEditDlg
{
	typedef Stredit::TStrEditDlg inherited;
	
__published:
	Vcl::Valedit::TValueListEditor* ValueListEditor1;
	void __fastcall ValueListEditor1StringsChange(System::TObject* Sender);
	void __fastcall ValueListEditor1KeyDown(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	HIDESBASE void __fastcall FormCreate(System::TObject* Sender);
	
protected:
	virtual System::Classes::TStrings* __fastcall GetLines();
	virtual void __fastcall SetLines(System::Classes::TStrings* const Value);
	virtual Vcl::Controls::TWinControl* __fastcall GetLinesControl();
public:
	/* TCustomForm.Create */ inline __fastcall virtual TValueEditDlg(System::Classes::TComponent* AOwner) : Stredit::TStrEditDlg(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TValueEditDlg(System::Classes::TComponent* AOwner, int Dummy) : Stredit::TStrEditDlg(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TValueEditDlg() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TValueEditDlg(HWND ParentWindow) : Stredit::TStrEditDlg(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Valueedit */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VALUEEDIT)
using namespace Valueedit;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// ValueeditHPP
