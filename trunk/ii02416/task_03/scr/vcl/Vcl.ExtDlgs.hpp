// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.ExtDlgs.pas' rev: 35.00 (Windows)

#ifndef Vcl_ExtdlgsHPP
#define Vcl_ExtdlgsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Messages.hpp>
#include <Winapi.Windows.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.Consts.hpp>

//-- user supplied -----------------------------------------------------------
// Alias records for C++ code that cannot compile in STRICT mode yet.
#if defined(_VCL_ALIAS_RECORDS)
#if !defined(STRICT)
  #pragma alias "@Vcl@Extdlgs@TOpenPictureDialog@Execute$qqrpv"="@Vcl@Extdlgs@TOpenPictureDialog@Execute$qqrp6HWND__"
  #pragma alias "@Vcl@Extdlgs@TSavePictureDialog@Execute$qqrpv"="@Vcl@Extdlgs@TSavePictureDialog@Execute$qqrp6HWND__"
  #pragma alias "@Vcl@Extdlgs@TOpenTextFileDialog@Execute$qqrpv"="@Vcl@Extdlgs@TOpenTextFileDialog@Execute$qqrp6HWND__"
  #pragma alias "@Vcl@Extdlgs@TSaveTextFileDialog@Execute$qqrpv"="@Vcl@Extdlgs@TSaveTextFileDialog@Execute$qqrp6HWND__"
#endif
#endif

namespace Vcl
{
namespace Extdlgs
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TOpenPictureDialog;
class DELPHICLASS TSavePictureDialog;
class DELPHICLASS TOpenTextFileDialog;
class DELPHICLASS TSaveTextFileDialog;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TOpenPictureDialog : public Vcl::Dialogs::TOpenDialog
{
	typedef Vcl::Dialogs::TOpenDialog inherited;
	
private:
	Vcl::Extctrls::TPanel* FPicturePanel;
	Vcl::Stdctrls::TLabel* FPictureLabel;
	Vcl::Buttons::TSpeedButton* FPreviewButton;
	Vcl::Extctrls::TPanel* FPaintPanel;
	Vcl::Extctrls::TImage* FImageCtrl;
	System::UnicodeString FSavedFilename;
	bool __fastcall IsFilterStored();
	void __fastcall PreviewKeyPress(System::TObject* Sender, System::WideChar &Key);
	
protected:
	virtual void __fastcall PreviewClick(System::TObject* Sender);
	DYNAMIC void __fastcall DoClose();
	DYNAMIC void __fastcall DoSelectionChange();
	DYNAMIC void __fastcall DoShow();
	__property Vcl::Extctrls::TImage* ImageCtrl = {read=FImageCtrl};
	__property Vcl::Stdctrls::TLabel* PictureLabel = {read=FPictureLabel};
	
__published:
	__property Filter = {stored=IsFilterStored, default=0};
	
public:
	__fastcall virtual TOpenPictureDialog(System::Classes::TComponent* AOwner);
	virtual bool __fastcall Execute(HWND ParentWnd)/* overload */;
public:
	/* TOpenDialog.Destroy */ inline __fastcall virtual ~TOpenPictureDialog() { }
	
	/* Hoisted overloads: */
	
public:
	inline bool __fastcall  Execute(){ return Vcl::Dialogs::TCommonDialog::Execute(); }
	
};


class PASCALIMPLEMENTATION TSavePictureDialog : public TOpenPictureDialog
{
	typedef TOpenPictureDialog inherited;
	
public:
	virtual bool __fastcall Execute()/* overload */;
	virtual bool __fastcall Execute(HWND ParentWnd)/* overload */;
public:
	/* TOpenPictureDialog.Create */ inline __fastcall virtual TSavePictureDialog(System::Classes::TComponent* AOwner) : TOpenPictureDialog(AOwner) { }
	
public:
	/* TOpenDialog.Destroy */ inline __fastcall virtual ~TSavePictureDialog() { }
	
};


class PASCALIMPLEMENTATION TOpenTextFileDialog : public Vcl::Dialogs::TOpenDialog
{
	typedef Vcl::Dialogs::TOpenDialog inherited;
	
private:
	Vcl::Stdctrls::TComboBox* FComboBox;
	System::Classes::TStrings* FEncodings;
	int FEncodingIndex;
	Vcl::Stdctrls::TLabel* FLabel;
	Vcl::Extctrls::TPanel* FPanel;
	bool FShowEncodingList;
	bool __fastcall IsEncodingStored();
	System::Types::TRect __fastcall GetDlgItemRect(int Item);
	void __fastcall SetEncodings(System::Classes::TStrings* const Value);
	MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	void __fastcall SetEncodingIndex(int Value);
	void __fastcall SetShowEncodingList(const bool Value);
	
protected:
	DYNAMIC void __fastcall DoClose();
	DYNAMIC void __fastcall DoShow();
	
public:
	__fastcall virtual TOpenTextFileDialog(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TOpenTextFileDialog();
	virtual bool __fastcall Execute(HWND ParentWnd)/* overload */;
	
__published:
	__property System::Classes::TStrings* Encodings = {read=FEncodings, write=SetEncodings, stored=IsEncodingStored};
	__property int EncodingIndex = {read=FEncodingIndex, write=SetEncodingIndex, default=0};
	__property bool ShowEncodingList = {read=FShowEncodingList, write=SetShowEncodingList, default=1};
	/* Hoisted overloads: */
	
public:
	inline bool __fastcall  Execute(){ return Vcl::Dialogs::TCommonDialog::Execute(); }
	
};


class PASCALIMPLEMENTATION TSaveTextFileDialog : public TOpenTextFileDialog
{
	typedef TOpenTextFileDialog inherited;
	
public:
	virtual bool __fastcall Execute()/* overload */;
	virtual bool __fastcall Execute(HWND ParentWnd)/* overload */;
public:
	/* TOpenTextFileDialog.Create */ inline __fastcall virtual TSaveTextFileDialog(System::Classes::TComponent* AOwner) : TOpenTextFileDialog(AOwner) { }
	/* TOpenTextFileDialog.Destroy */ inline __fastcall virtual ~TSaveTextFileDialog() { }
	
};


typedef System::StaticArray<System::UnicodeString, 6> Vcl_Extdlgs__5;

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE Vcl_Extdlgs__5 DefaultEncodingNames;
extern DELPHI_PACKAGE System::Sysutils::TEncoding* __fastcall StandardEncodingFromName(const System::UnicodeString Name);
}	/* namespace Extdlgs */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_EXTDLGS)
using namespace Vcl::Extdlgs;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_ExtdlgsHPP
