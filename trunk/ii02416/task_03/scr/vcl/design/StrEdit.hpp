// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'StrEdit.pas' rev: 35.00 (Windows)

#ifndef StreditHPP
#define StreditHPP

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
#include <Vcl.Buttons.hpp>
#include <Vcl.Dialogs.hpp>
#include <DesignEditors.hpp>
#include <DesignIntf.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.ActnPopup.hpp>
#include <System.WideStrings.hpp>
#include <Vcl.PlatformDefaultStyleActnCtrls.hpp>

//-- user supplied -----------------------------------------------------------

namespace Stredit
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TStrEditDlg;
class DELPHICLASS TStringListProperty;
class DELPHICLASS TValueListProperty;
class DELPHICLASS TWideStringListProperty;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TStrEditDlg : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
__published:
	Vcl::Dialogs::TOpenDialog* OpenDialog;
	Vcl::Dialogs::TSaveDialog* SaveDialog;
	Vcl::Actnpopup::TPopupActionBar* StringEditorMenu;
	Vcl::Menus::TMenuItem* LoadItem;
	Vcl::Menus::TMenuItem* SaveItem;
	Vcl::Menus::TMenuItem* CodeEditorItem;
	Vcl::Stdctrls::TButton* CodeWndBtn;
	Vcl::Stdctrls::TButton* OKButton;
	Vcl::Stdctrls::TButton* CancelButton;
	Vcl::Stdctrls::TButton* HelpButton;
	Vcl::Extctrls::TPanel* PanelBottom;
	void __fastcall FileOpen(System::TObject* Sender);
	void __fastcall FileSave(System::TObject* Sender);
	void __fastcall HelpButtonClick(System::TObject* Sender);
	void __fastcall CodeWndBtnClick(System::TObject* Sender);
	void __fastcall FormDestroy(System::TObject* Sender);
	void __fastcall FormShow(System::TObject* Sender);
	void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall FormAfterMonitorDpiChanged(System::TObject* Sender, int OldDPI, int NewDPI);
	
private:
	bool FUpdatingPos;
	
protected:
	bool FModified;
	virtual System::Classes::TStrings* __fastcall GetLines() = 0 ;
	virtual void __fastcall SetLines(System::Classes::TStrings* const Value) = 0 ;
	virtual Vcl::Controls::TWinControl* __fastcall GetLinesControl() = 0 ;
	
public:
	__property System::Classes::TStrings* Lines = {read=GetLines, write=SetLines};
public:
	/* TCustomForm.Create */ inline __fastcall virtual TStrEditDlg(System::Classes::TComponent* AOwner) : Vcl::Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TStrEditDlg(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TStrEditDlg() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TStrEditDlg(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TStringListProperty : public Designeditors::TClassProperty
{
	typedef Designeditors::TClassProperty inherited;
	
protected:
	virtual TStrEditDlg* __fastcall EditDialog();
	virtual System::Classes::TStrings* __fastcall GetStrings();
	virtual void __fastcall SetStrings(System::Classes::TStrings* const Value);
	
public:
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes();
	virtual void __fastcall Edit();
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TStringListProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TClassProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TStringListProperty() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TValueListProperty : public TStringListProperty
{
	typedef TStringListProperty inherited;
	
protected:
	virtual TStrEditDlg* __fastcall EditDialog();
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TValueListProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : TStringListProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TValueListProperty() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TWideStringListProperty : public TStringListProperty
{
	typedef TStringListProperty inherited;
	
private:
	System::Classes::TStrings* FStrings;
	
protected:
	virtual System::Classes::TStrings* __fastcall GetStrings();
	virtual void __fastcall SetStrings(System::Classes::TStrings* const Value);
	
public:
	__fastcall virtual ~TWideStringListProperty();
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TWideStringListProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : TStringListProperty(ADesigner, APropCount) { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Stredit */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_STREDIT)
using namespace Stredit;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// StreditHPP
