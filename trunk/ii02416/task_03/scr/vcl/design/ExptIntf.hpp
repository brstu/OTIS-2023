// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ExptIntf.pas' rev: 35.00 (Windows)

#ifndef ExptintfHPP
#define ExptintfHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#if !defined(_NO_DEPRECATED_UNIT_MSG)
#pragma message("Unit 'ExptIntf' is deprecated")
#endif
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <VirtIntf.hpp>
#include <ToolIntf.hpp>

//-- user supplied -----------------------------------------------------------

namespace Exptintf
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TIExpert;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TExpertStyle : unsigned char { esStandard, esForm, esProject, esAddIn };

enum DECLSPEC_DENUM Exptintf__1 : unsigned char { esEnabled, esChecked };

typedef System::Set<Exptintf__1, Exptintf__1::esEnabled, Exptintf__1::esChecked> TExpertState;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIExpert : public Virtintf::TInterface
{
	typedef Virtintf::TInterface inherited;
	
public:
	virtual System::UnicodeString __stdcall GetName() = 0 ;
	virtual System::UnicodeString __stdcall GetAuthor() = 0 ;
	virtual System::UnicodeString __stdcall GetComment() = 0 ;
	virtual System::UnicodeString __stdcall GetPage() = 0 ;
	virtual HICON __stdcall GetGlyph() = 0 ;
	virtual TExpertStyle __stdcall GetStyle() = 0 ;
	virtual TExpertState __stdcall GetState() = 0 ;
	virtual System::UnicodeString __stdcall GetIDString() = 0 ;
	virtual System::UnicodeString __stdcall GetMenuText() = 0 ;
	virtual void __stdcall Execute() = 0 ;
public:
	/* TInterface.Create */ inline __fastcall TIExpert() : Virtintf::TInterface() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TIExpert() { }
	
};

#pragma pack(pop)

typedef bool __fastcall (*TExpertRegisterProc)(TIExpert* Expert);

typedef void __fastcall (*TExpertTerminateProc)();

typedef bool __stdcall (*TExpertInitProc)(Toolintf::TIToolServices* ToolServices, TExpertRegisterProc RegisterProc, TExpertTerminateProc &Terminate);

//-- var, const, procedure ---------------------------------------------------
#define isExperts L"Experts"
#define ExpertEntryPoint L"INITEXPERT0017"
static const System::Int8 ValidExpertVersion = System::Int8(0x3);
extern DELPHI_PACKAGE TExpertRegisterProc LibraryExpertProc;
extern DELPHI_PACKAGE Toolintf::TIToolServices* ToolServices;
extern DELPHI_PACKAGE void __fastcall RegisterLibraryExpert(TIExpert* Expert);
}	/* namespace Exptintf */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_EXPTINTF)
using namespace Exptintf;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// ExptintfHPP
