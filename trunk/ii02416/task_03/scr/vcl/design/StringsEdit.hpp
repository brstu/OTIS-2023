// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'StringsEdit.pas' rev: 35.00 (Windows)

#ifndef StringseditHPP
#define StringseditHPP

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
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ActnPopup.hpp>
#include <Vcl.PlatformDefaultStyleActnCtrls.hpp>

//-- user supplied -----------------------------------------------------------

namespace Stringsedit
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TStringsEditDlg;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TStringsEditDlg : public Stredit::TStrEditDlg
{
	typedef Stredit::TStrEditDlg inherited;
	
__published:
	Vcl::Stdctrls::TGroupBox* GroupBox1;
	Vcl::Stdctrls::TLabel* LineCount;
	Vcl::Comctrls::TRichEdit* Memo;
	void __fastcall Memo1KeyDown(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall UpdateStatus(System::TObject* Sender);
	HIDESBASE void __fastcall FormCreate(System::TObject* Sender);
	HIDESBASE void __fastcall FormAfterMonitorDpiChanged(System::TObject* Sender, int OldDPI, int NewDPI);
	
private:
	System::UnicodeString SingleLine;
	System::UnicodeString MultipleLines;
	
protected:
	virtual System::Classes::TStrings* __fastcall GetLines();
	virtual void __fastcall SetLines(System::Classes::TStrings* const Value);
	virtual Vcl::Controls::TWinControl* __fastcall GetLinesControl();
public:
	/* TCustomForm.Create */ inline __fastcall virtual TStringsEditDlg(System::Classes::TComponent* AOwner) : Stredit::TStrEditDlg(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TStringsEditDlg(System::Classes::TComponent* AOwner, int Dummy) : Stredit::TStrEditDlg(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TStringsEditDlg() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TStringsEditDlg(HWND ParentWindow) : Stredit::TStrEditDlg(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Stringsedit */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_STRINGSEDIT)
using namespace Stringsedit;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// StringseditHPP
