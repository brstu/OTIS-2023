// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'PasSym.pas' rev: 35.00 (Windows)

#ifndef PassymHPP
#define PassymHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Symbols.hpp>

//-- user supplied -----------------------------------------------------------

namespace Passym
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TPascalSymbol;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TPascalSymbol : public Symbols::TBaseSymbol
{
	typedef Symbols::TBaseSymbol inherited;
	
public:
	char Token;
	__fastcall TPascalSymbol(System::ShortString &AIdent, char AToken);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TPascalSymbol() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const char tkLiteral = '\x03';
static const char tkSymbol = '\x04';
static const char tkArray = '\x05';
static const char tkOf = '\x06';
static const char tkProcedure = '\x07';
static const char tkFunction = '\x08';
static const char tkPrivate = '\x09';
static const char tkProtected = '\x0a';
static const char tkPublic = '\x0b';
static const char tkPublished = '\x0c';
static const char tkEnd = '\x0d';
static const char tkVar = '\x0e';
static const char tkConst = '\x0f';
static const char tkString = '\x10';
static const char tkFile = '\x11';
static const char tkComment = '\x12';
static const char tkStrConst = '\x13';
static const char tkBegin = '\x14';
static const char tkConstructor = '\x15';
static const char tkDestructor = '\x16';
static const char tkType = '\x17';
static const char tkInitialization = '\x18';
static const char tkRecord = '\x19';
static const char tkThreadVar = '\x1a';
static const char tkCase = '\x1b';
static const char tkTry = '\x1c';
static const char tkInherited = '\x1d';
static const char tkImplementation = '\x1e';
static const char tkClass = '\x1f';
static const char tkProperty = '\x20';
static const char tkAutomated = '\x21';
static const char tkSet = '\x22';
static const char tkInterface = '\x80';
static const char tkUses = '\x81';
static const char tkObject = '\x82';
static const char tkDispinterface = '\x83';
static const char tkPacked = '\x84';
static const char tkResourceString = '\x85';
static const char tkDotDot = '\x86';
static const char tkAsm = '\x87';
static const char tkLabel = '\x88';
static const char tkExports = '\x89';
static const char tkIn = '\x8a';
static const char tkFinalization = '\x8b';
static const char tkFor = '\x8c';
static const char tkOperator = '\x8d';
static const char tkRepeat = '\x8e';
static const char tkUntil = '\x8f';
static const char tkLineComment = '\x90';
static const char tkXMLComment = '\x91';
static const char tkProgramBegin = '\x92';
extern DELPHI_PACKAGE Symbols::TSymbolTable* PascalSymbols;
extern DELPHI_PACKAGE bool __fastcall IsReservedWord(const System::ShortString &Ident)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsReservedWord(const System::UnicodeString Ident)/* overload */;
}	/* namespace Passym */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_PASSYM)
using namespace Passym;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// PassymHPP
