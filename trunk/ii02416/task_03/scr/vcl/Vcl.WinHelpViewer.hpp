// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.WinHelpViewer.pas' rev: 35.00 (Windows)

#ifndef Vcl_WinhelpviewerHPP
#define Vcl_WinhelpviewerHPP

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
namespace Winhelpviewer
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IWinHelpTester;
typedef System::DelphiInterface<IWinHelpTester> _di_IWinHelpTester;
//-- type declarations -------------------------------------------------------
__interface  INTERFACE_UUID("{B0FC9354-5F0E-11D3-A3B9-00C04F79AD3A}") IWinHelpTester  : public System::IInterface 
{
	virtual bool __fastcall CanShowALink(const System::UnicodeString ALink, const System::UnicodeString FileName) = 0 ;
	virtual bool __fastcall CanShowTopic(const System::UnicodeString Topic, const System::UnicodeString FileName) = 0 ;
	virtual bool __fastcall CanShowContext(const System::Classes::THelpContext Context, const System::UnicodeString FileName) = 0 ;
	virtual System::Classes::TStringList* __fastcall GetHelpStrings(const System::UnicodeString ALink) = 0 ;
	virtual System::UnicodeString __fastcall GetHelpPath() = 0 ;
	virtual System::UnicodeString __fastcall GetDefaultHelpFile() = 0 ;
};

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE _di_IWinHelpTester WinHelpTester;
extern DELPHI_PACKAGE System::UnicodeString ViewerName;
}	/* namespace Winhelpviewer */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_WINHELPVIEWER)
using namespace Vcl::Winhelpviewer;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_WinhelpviewerHPP
