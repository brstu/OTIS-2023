// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Symbols.pas' rev: 35.00 (Windows)

#ifndef SymbolsHPP
#define SymbolsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>

//-- user supplied -----------------------------------------------------------

namespace Symbols
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TBaseSymbol;
class DELPHICLASS TSymbolList;
class DELPHICLASS TSymbolTable;
class DELPHICLASS TTableIterator;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TBaseSymbol : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TBaseSymbol* Next;
	System::ShortString FShortIdent;
	System::UnicodeString FIdent;
	System::UnicodeString __fastcall GetIdent();
	void __fastcall SetShortIdent(const System::ShortString &Value);
	void __fastcall SetIdent(const System::UnicodeString Value);
	
public:
	__fastcall TBaseSymbol(const System::ShortString &AIdent)/* overload */;
	__fastcall TBaseSymbol(const System::AnsiString AIdent)/* overload */;
	__fastcall TBaseSymbol(const System::UnicodeString AIdent)/* overload */;
	__property System::ShortString ShortIdent = {read=FShortIdent, write=SetShortIdent};
	__property System::UnicodeString Ident = {read=GetIdent, write=SetIdent};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TBaseSymbol() { }
	
};

#pragma pack(pop)

typedef bool __fastcall (__closure *TCompareSymbol)(const System::ShortString &Ident);

typedef bool __fastcall (*TCompareSymbols)(const System::ShortString &Ident1, const System::ShortString &Ident2);

enum DECLSPEC_DENUM TSymbolTableKind : unsigned char { stInsensitive, stCaseSensitive };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSymbolList : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	typedef System::DynamicArray<TBaseSymbol*> _TSymbolList__1;
	
	
private:
	TBaseSymbol* __fastcall GetSymbol(int Index);
	
private:
	_TSymbolList__1 FList;
	int FCount;
	
public:
	__fastcall TSymbolList();
	__fastcall virtual ~TSymbolList();
	void __fastcall Clear();
	void __fastcall Add(TBaseSymbol* Sym);
	__property int Count = {read=FCount, nodefault};
	__property TBaseSymbol* Symbols[int Index] = {read=GetSymbol};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSymbolTable : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int FCount;
	System::StaticArray<TBaseSymbol*, 32> FSymbolList;
	TCompareSymbols FCompare;
	
public:
	__fastcall TSymbolTable(TSymbolTableKind SymbolTableKind);
	__fastcall virtual ~TSymbolTable();
	void __fastcall Clear();
	bool __fastcall Contains(TBaseSymbol* Symbol);
	void __fastcall Delete(TBaseSymbol* Symbol);
	bool __fastcall Empty();
	void __fastcall Insert(TBaseSymbol* Symbol);
	TBaseSymbol* __fastcall Find(const System::ShortString &Ident)/* overload */;
	TBaseSymbol* __fastcall Find(const System::UnicodeString Ident)/* overload */;
	TBaseSymbol* __fastcall FindIndex(int SymbolIndex, const System::ShortString &Ident)/* overload */;
	TBaseSymbol* __fastcall FindIndex(int SymbolIndex, const System::UnicodeString Ident)/* overload */;
	TBaseSymbol* __fastcall FindNext(TBaseSymbol* Symbol);
	TBaseSymbol* __fastcall FindSymbol(int SymbolIndex, TCompareSymbol Compare);
	__property int Count = {read=FCount, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TTableIterator : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	TBaseSymbol* operator[](int Index) { return this->Symbols[Index]; }
	
private:
	int FLocation;
	int FIndex;
	TBaseSymbol* FSymbol;
	int FCount;
	TSymbolTable* FTable;
	TBaseSymbol* __fastcall GetSymbol(int Index);
	
public:
	__fastcall TTableIterator(TSymbolTable* Table);
	__property int Count = {read=FCount, nodefault};
	__property TBaseSymbol* Symbols[int Index] = {read=GetSymbol/*, default*/};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TTableIterator() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE int __fastcall SymbolIndex(const System::ShortString &Ident)/* overload */;
extern DELPHI_PACKAGE int __fastcall SymbolIndex(const System::UnicodeString Ident)/* overload */;
extern DELPHI_PACKAGE int __fastcall SymbolIndex(const System::AnsiString Ident)/* overload */;
}	/* namespace Symbols */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYMBOLS)
using namespace Symbols;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SymbolsHPP
