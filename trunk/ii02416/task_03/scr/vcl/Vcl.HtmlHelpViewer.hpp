// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.HtmlHelpViewer.pas' rev: 35.00 (Windows)

#ifndef Vcl_HtmlhelpviewerHPP
#define Vcl_HtmlhelpviewerHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Htmlhelpviewer
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IHtmlHelpTester;
typedef System::DelphiInterface<IHtmlHelpTester> _di_IHtmlHelpTester;
//-- type declarations -------------------------------------------------------
__interface  INTERFACE_UUID("{82DF78E6-B675-4F5D-8A5B-F9BEEDDC14F6}") IHtmlHelpTester  : public System::IInterface 
{
	virtual bool __fastcall CanShowALink(const System::UnicodeString ALink, const System::UnicodeString FileName) = 0 ;
	virtual bool __fastcall CanShowTopic(const System::UnicodeString Topic, const System::UnicodeString FileName) = 0 ;
	virtual bool __fastcall CanShowContext(const System::Classes::THelpContext Context, const System::UnicodeString FileName) = 0 ;
	virtual System::Classes::TStringList* __fastcall GetHelpStrings(const System::UnicodeString ALink) = 0 ;
	virtual System::UnicodeString __fastcall GetHelpPath() = 0 ;
	virtual System::UnicodeString __fastcall GetDefaultHelpFile() = 0 ;
	virtual bool __fastcall ConvertWinHelp(System::Word &Command, NativeUInt &Data) = 0 ;
};

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE _di_IHtmlHelpTester HtmlHelpTester;
extern DELPHI_PACKAGE System::UnicodeString ViewerName;
}	/* namespace Htmlhelpviewer */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_HTMLHELPVIEWER)
using namespace Vcl::Htmlhelpviewer;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_HtmlhelpviewerHPP
