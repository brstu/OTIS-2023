// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'CppSym.pas' rev: 35.00 (Windows)

#ifndef CppsymHPP
#define CppsymHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Symbols.hpp>

//-- user supplied -----------------------------------------------------------

namespace Cppsym
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TCppSymbol;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TCppSymbol : public Symbols::TBaseSymbol
{
	typedef Symbols::TBaseSymbol inherited;
	
public:
	char Token;
	__fastcall TCppSymbol(System::ShortString &AIdent, char AToken);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TCppSymbol() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const char tkLiteral = '\x03';
static const char tkSymbol = '\x04';
static const char tkComment = '\x05';
static const char tkStrConst = '\x06';
static const char tkPrivate = '\x07';
static const char tkProtected = '\x08';
static const char tkPublic = '\x09';
static const char tkPublished = '\x0a';
static const char tkAutomated = '\x0b';
extern DELPHI_PACKAGE Symbols::TSymbolTable* CppSymbols;
extern DELPHI_PACKAGE bool __fastcall IsReservedWord(const System::ShortString &Ident)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsReservedWord(const System::UnicodeString Ident)/* overload */;
}	/* namespace Cppsym */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CPPSYM)
using namespace Cppsym;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CppsymHPP
