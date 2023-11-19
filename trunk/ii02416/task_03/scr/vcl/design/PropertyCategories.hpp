// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'PropertyCategories.pas' rev: 35.00 (Windows)

#ifndef PropertycategoriesHPP
#define PropertycategoriesHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.TypInfo.hpp>
#include <System.Classes.hpp>
#include <System.Masks.hpp>
#include <System.Contnrs.hpp>
#include <DesignIntf.hpp>
#include <DesignEditors.hpp>

//-- user supplied -----------------------------------------------------------

namespace Propertycategories
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TPropertyFilter;
class DELPHICLASS TComponentPropertyFilter;
class DELPHICLASS TPropertyCategory;
class DELPHICLASS TPropertyCategoryList;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TPropertyFilter : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Masks::TMask* FMask;
	int FGroup;
	
public:
	__fastcall TPropertyFilter(const System::UnicodeString APropertyName, int AGroup);
	__fastcall virtual ~TPropertyFilter();
	virtual bool __fastcall Match(const System::UnicodeString APropertyName, const Designintf::_di_IDesignObject DesignObject, const Designintf::_di_IProperty AProperty = Designintf::_di_IProperty())/* overload */;
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TComponentPropertyFilter : public TPropertyFilter
{
	typedef TPropertyFilter inherited;
	
private:
	System::TClass FComponentClass;
	System::Typinfo::TTypeInfo *FPropertyType;
	
public:
	__fastcall TComponentPropertyFilter(const System::UnicodeString APropertyName, System::TClass AComponentClass, System::Typinfo::PTypeInfo APropertyType);
	virtual bool __fastcall Match(const System::UnicodeString APropertyName, const Designintf::_di_IDesignObject DesignObject, const Designintf::_di_IProperty AProperty = Designintf::_di_IProperty())/* overload */;
	HIDESBASE bool __fastcall Match(const System::UnicodeString APropertyName, System::TClass AComponentClass, System::Typinfo::PTypeInfo APropertyType)/* overload */;
	__property System::TClass ComponentClass = {read=FComponentClass};
	__property System::Typinfo::PTypeInfo PropertyType = {read=FPropertyType};
public:
	/* TPropertyFilter.Destroy */ inline __fastcall virtual ~TComponentPropertyFilter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPropertyCategory : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Contnrs::TObjectList* FList;
	int FMatchCount;
	Designeditors::TPropertyEditor* FEditor;
	bool FEnabled;
	int FGroup;
	System::UnicodeString FName;
	bool FVisible;
	
protected:
	TPropertyFilter* __fastcall GetFilter(int Index);
	
public:
	__fastcall TPropertyCategory(const System::UnicodeString AName);
	__fastcall virtual ~TPropertyCategory();
	TPropertyFilter* __fastcall Add(TPropertyFilter* AFilter);
	void __fastcall Remove(TPropertyFilter* AFilter);
	int __fastcall Count();
	bool __fastcall Match(const System::UnicodeString APropertyName, const Designintf::_di_IDesignObject DesignObject, const Designintf::_di_IProperty AProperty = Designintf::_di_IProperty())/* overload */;
	bool __fastcall Match(const System::UnicodeString APropertyName, System::TClass AComponentClass, System::Typinfo::PTypeInfo APropertyType)/* overload */;
	void __fastcall ClearMatches();
	void __fastcall FreeEditorGroup(int AGroup);
	__property TPropertyFilter* Filters[int Index] = {read=GetFilter};
	__property int MatchCount = {read=FMatchCount, nodefault};
	__property bool Visible = {read=FVisible, write=FVisible, nodefault};
	__property Designeditors::TPropertyEditor* Editor = {read=FEditor, write=FEditor};
	__property System::UnicodeString Name = {read=FName};
};

#pragma pack(pop)

typedef System::TMetaClass* TPropertyCategoryClass;

enum DECLSPEC_DENUM TPropertyCategoryVisibleMode : unsigned char { pcvAll, pcvToggle, pcvNone, pcvNotListed, pcvOnlyListed };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPropertyCategoryList : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	TPropertyCategory* operator[](int Index) { return this->Categories[Index]; }
	
private:
	System::Contnrs::TObjectList* FList;
	TPropertyCategory* FMiscCategory;
	System::Classes::TStringList* FHiddenCategories;
	
protected:
	TPropertyCategory* __fastcall GetCategory(int Index);
	
public:
	__fastcall TPropertyCategoryList();
	__fastcall virtual ~TPropertyCategoryList();
	TPropertyCategory* __fastcall FindCategory(const System::UnicodeString ACategoryName);
	int __fastcall IndexOf(const System::UnicodeString ACategoryName);
	void __fastcall ClearMatches();
	void __fastcall FreeEditorGroup(int AGroup);
	TPropertyCategory* __fastcall MiscCategory();
	int __fastcall Count();
	bool __fastcall Match(const System::UnicodeString APropertyName, const Designintf::_di_IDesignObject DesignObject, const Designintf::_di_IProperty AProperty = Designintf::_di_IProperty())/* overload */;
	bool __fastcall Match(const System::UnicodeString APropertyName, System::TClass AComponentClass, System::Typinfo::PTypeInfo APropertyType = (System::Typinfo::PTypeInfo)(0x0))/* overload */;
	bool __fastcall ChangeVisibility(TPropertyCategoryVisibleMode AMode)/* overload */;
	bool __fastcall ChangeVisibility(TPropertyCategoryVisibleMode AMode, const System::UnicodeString *ANames, const int ANames_High)/* overload */;
	__property TPropertyCategory* Categories[int Index] = {read=GetCategory/*, default*/};
	void __fastcall LoadHiddenCategories();
	void __fastcall SaveHiddenCategories();
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::UnicodeString __fastcall (*GetHiddenCategoriesProc)();
extern DELPHI_PACKAGE void __fastcall (*SetHiddenCategoriesProc)(const System::UnicodeString Value);
extern DELPHI_PACKAGE bool __fastcall IsPropertyInCategory(const System::UnicodeString Category, System::TClass ComponentClass, const System::UnicodeString PropertyName)/* overload */;
extern DELPHI_PACKAGE bool __fastcall IsPropertyInCategory(const System::UnicodeString Category, const System::UnicodeString ClassName, const System::UnicodeString PropertyName)/* overload */;
extern DELPHI_PACKAGE TPropertyCategoryList* __fastcall PropertyCategoryList();
}	/* namespace Propertycategories */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_PROPERTYCATEGORIES)
using namespace Propertycategories;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// PropertycategoriesHPP
