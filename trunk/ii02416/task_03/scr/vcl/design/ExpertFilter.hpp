// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ExpertFilter.pas' rev: 35.00 (Windows)

#ifndef ExpertfilterHPP
#define ExpertfilterHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.Types.hpp>
#include <Winapi.Windows.hpp>

//-- user supplied -----------------------------------------------------------

namespace Expertfilter
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE ICollectionProperty;
typedef System::DelphiInterface<ICollectionProperty> _di_ICollectionProperty;
class DELPHICLASS CoCollectionProperty;
__interface DELPHIINTERFACE IPropertyValues;
typedef System::DelphiInterface<IPropertyValues> _di_IPropertyValues;
class DELPHICLASS CoPropertyValues;
__interface DELPHIINTERFACE ILineProvider;
typedef System::DelphiInterface<ILineProvider> _di_ILineProvider;
__interface DELPHIINTERFACE IExpertFilter;
typedef System::DelphiInterface<IExpertFilter> _di_IExpertFilter;
class DELPHICLASS CoExpertFilter;
__interface DELPHIINTERFACE ICppCreatorsAccessService;
typedef System::DelphiInterface<ICppCreatorsAccessService> _di_ICppCreatorsAccessService;
class DELPHICLASS CoResourceProvider;
//-- type declarations -------------------------------------------------------
__interface  INTERFACE_UUID("{4EB343E9-CA18-461C-9BA6-FE5581CE499F}") ICollectionProperty  : public System::IInterface 
{
	virtual void __fastcall AddItem(const _di_IPropertyValues PropertyValues) = 0 ;
	virtual _di_IPropertyValues __fastcall GetItem(int Index) = 0 ;
	virtual int __fastcall GetItemCount() = 0 ;
	virtual _di_IPropertyValues __fastcall GetCurrentItem() = 0 ;
	__property int ItemCount = {read=GetItemCount};
	__property _di_IPropertyValues CurItem = {read=GetCurrentItem};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION CoCollectionProperty : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__classmethod _di_ICollectionProperty __fastcall Create();
public:
	/* TObject.Create */ inline __fastcall CoCollectionProperty() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~CoCollectionProperty() { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{7FF4D587-67A9-4A0D-8153-80A3FA0FEC09}") IPropertyValues  : public System::IInterface 
{
	virtual void __fastcall SetProperty(const System::UnicodeString key, const System::Variant &value) = 0 ;
	virtual void __fastcall SetCollectionProperty(const System::UnicodeString key, const _di_ICollectionProperty Coll) = 0 ;
	virtual int __fastcall GetPropertyCount() = 0 ;
	virtual System::Variant __fastcall GetProperty(int index) = 0 /* overload */;
	virtual System::Variant __fastcall GetProperty(const System::UnicodeString key) = 0 /* overload */;
	virtual System::UnicodeString __fastcall GetPropertyKey(int index) = 0 ;
	virtual void __fastcall ClearProperties() = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION CoPropertyValues : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__classmethod _di_IPropertyValues __fastcall Create();
public:
	/* TObject.Create */ inline __fastcall CoPropertyValues() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~CoPropertyValues() { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{2B3EDD36-AA9E-4B9A-8D34-94EDCB928085}") ILineProvider  : public System::IInterface 
{
	virtual bool __fastcall HasMore() = 0 ;
	virtual System::UnicodeString __fastcall NextLine() = 0 ;
	virtual int __fastcall LineNumber() = 0 ;
	virtual bool __fastcall ReStart() = 0 ;
	virtual void __fastcall Cleanup() = 0 ;
	virtual bool __fastcall IsOutputOn() = 0 ;
};

__interface  INTERFACE_UUID("{9D2EBDCA-241A-46C2-820A-6425BD2BE786}") IExpertFilter  : public IPropertyValues 
{
	virtual System::UnicodeString __fastcall Filter(const System::UnicodeString TemplateFile, System::UnicodeString TemplateLoc = System::UnicodeString()) = 0 /* overload */;
	virtual System::UnicodeString __fastcall Filter(const _di_ILineProvider LineProvider) = 0 /* overload */;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION CoExpertFilter : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__classmethod _di_IExpertFilter __fastcall Create();
public:
	/* TObject.Create */ inline __fastcall CoExpertFilter() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~CoExpertFilter() { }
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{BB24B512-8BFB-4106-B527-3A8BF9FA10FC}") ICppCreatorsAccessService  : public System::IInterface 
{
	virtual System::_di_IInterface __fastcall GetVCLAppCppProjectCreator(System::_di_IInterface ProjectCreator, bool ConsoleApp, System::UnicodeString incPath = System::UnicodeString(), System::UnicodeString defines = System::UnicodeString(), System::UnicodeString libPath = System::UnicodeString()) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION CoResourceProvider : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__classmethod _di_ILineProvider __fastcall Create(NativeUInt Resource, const System::UnicodeString ResourceName);
public:
	/* TObject.Create */ inline __fastcall CoResourceProvider() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~CoResourceProvider() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::ResourceString _sExpFilterError;
#define Expertfilter_sExpFilterError System::LoadResourceString(&Expertfilter::_sExpFilterError)
extern DELPHI_PACKAGE System::ResourceString _sInvalidTagEncountered;
#define Expertfilter_sInvalidTagEncountered System::LoadResourceString(&Expertfilter::_sInvalidTagEncountered)
extern DELPHI_PACKAGE System::ResourceString _sMissingCloseTag;
#define Expertfilter_sMissingCloseTag System::LoadResourceString(&Expertfilter::_sMissingCloseTag)
extern DELPHI_PACKAGE System::ResourceString _sExpectingOpenParen;
#define Expertfilter_sExpectingOpenParen System::LoadResourceString(&Expertfilter::_sExpectingOpenParen)
extern DELPHI_PACKAGE System::ResourceString _sExpectingCloseParen;
#define Expertfilter_sExpectingCloseParen System::LoadResourceString(&Expertfilter::_sExpectingCloseParen)
extern DELPHI_PACKAGE System::ResourceString _sPopEmptyStack;
#define Expertfilter_sPopEmptyStack System::LoadResourceString(&Expertfilter::_sPopEmptyStack)
extern DELPHI_PACKAGE System::ResourceString _sTopEmptyStack;
#define Expertfilter_sTopEmptyStack System::LoadResourceString(&Expertfilter::_sTopEmptyStack)
extern DELPHI_PACKAGE System::ResourceString _sUnsupportedPropType;
#define Expertfilter_sUnsupportedPropType System::LoadResourceString(&Expertfilter::_sUnsupportedPropType)
extern DELPHI_PACKAGE System::ResourceString _sInvalidTokensInTag;
#define Expertfilter_sInvalidTokensInTag System::LoadResourceString(&Expertfilter::_sInvalidTokensInTag)
extern DELPHI_PACKAGE System::ResourceString _sTemplateFileNotFound;
#define Expertfilter_sTemplateFileNotFound System::LoadResourceString(&Expertfilter::_sTemplateFileNotFound)
extern DELPHI_PACKAGE System::ResourceString _sMalformedForEachTag;
#define Expertfilter_sMalformedForEachTag System::LoadResourceString(&Expertfilter::_sMalformedForEachTag)
extern DELPHI_PACKAGE System::ResourceString _sInvalidForEachProp;
#define Expertfilter_sInvalidForEachProp System::LoadResourceString(&Expertfilter::_sInvalidForEachProp)
extern DELPHI_PACKAGE System::ResourceString _sEndMissesForEachTag;
#define Expertfilter_sEndMissesForEachTag System::LoadResourceString(&Expertfilter::_sEndMissesForEachTag)
extern DELPHI_PACKAGE System::ResourceString _sCollectionTagAsValue;
#define Expertfilter_sCollectionTagAsValue System::LoadResourceString(&Expertfilter::_sCollectionTagAsValue)
}	/* namespace Expertfilter */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_EXPERTFILTER)
using namespace Expertfilter;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// ExpertfilterHPP
