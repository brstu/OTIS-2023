// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSSource.pas' rev: 35.00 (Windows)

#ifndef DssourceHPP
#define DssourceHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dssource
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TSourceIndex : unsigned char { stDSServerModuleTemplate, stDSServerModuleTemplateIntf };

enum DECLSPEC_DENUM TSourceFlag : unsigned char { sfDummyFlag };

typedef System::Set<TSourceFlag, TSourceFlag::sfDummyFlag, TSourceFlag::sfDummyFlag> TSourceFlags;

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetSourceFromTemplate(const System::UnicodeString APersonality, TSourceIndex SourceIndex, System::Classes::TStrings* Props, TSourceFlags Flags = TSourceFlags() );
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetSourceFromTemplateFile(const System::UnicodeString FileName, System::Classes::TStrings* Props = (System::Classes::TStrings*)(0x0), TSourceFlags Flags = TSourceFlags() );
extern DELPHI_PACKAGE System::Sysutils::TEncoding* __fastcall GetTemplateFileEncoding(const System::UnicodeString FileName);
}	/* namespace Dssource */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DSSOURCE)
using namespace Dssource;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DssourceHPP
