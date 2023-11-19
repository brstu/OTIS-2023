// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.Touch.KeyboardTypes.pas' rev: 35.00 (Windows)

#ifndef Vcl_Touch_KeyboardtypesHPP
#define Vcl_Touch_KeyboardtypesHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Generics.Collections.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Touch
{
namespace Keyboardtypes
{
//-- forward type declarations -----------------------------------------------
struct TKeyData;
struct TKey;
struct TKeyLanguage;
struct TKeyModifier;
struct TVirtualKey;
class DELPHICLASS TVirtualKeys;
struct TKeyboardLanguage;
class DELPHICLASS TVirtualKeyLayout;
class DELPHICLASS TVirtualKeyLayouts;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TKeyState : unsigned char { ksDown, ksUp };

enum DECLSPEC_DENUM Vcl_Touch_Keyboardtypes__1 : unsigned char { msShift, msCtrl, msAlt, msDiacritic };

typedef System::Set<Vcl_Touch_Keyboardtypes__1, Vcl_Touch_Keyboardtypes__1::msShift, Vcl_Touch_Keyboardtypes__1::msDiacritic> TModifierState;

enum DECLSPEC_DENUM TKeyImage: signed char { kiOverride = -2, kiText, kiTab, kiShift, kiEnter, kiBackspace, kiUp, kiDown, kiLeft, kiRight, kiTallEnter };

enum DECLSPEC_DENUM TVirtualKeyFlag : unsigned char { kfStretch, kfToggle, kfRepeat };

typedef System::Set<TVirtualKeyFlag, TVirtualKeyFlag::kfStretch, TVirtualKeyFlag::kfRepeat> TVirtualKeyFlags;

struct DECLSPEC_DRECORD TKeyData
{
public:
	short Vk;
	short ScanCode;
	static TKeyData __fastcall Create();
};


typedef System::DynamicArray<TKeyData> TKeyDataArray;

struct DECLSPEC_DRECORD TKey
{
public:
	short Vk;
	short ScanCode;
	System::UnicodeString Caption;
	TKeyImage KeyImage;
	TKeyDataArray ComboKeys;
	static TKey __fastcall Create();
	System::UnicodeString __fastcall ToString(TModifierState State = TModifierState() );
	bool __fastcall IsDeadKey();
	__fastcall operator TKeyData();
};


struct DECLSPEC_DRECORD TKeyLanguage
{
public:
	short Vk;
	short ScanCode;
	System::UnicodeString Caption;
	TKeyImage KeyImage;
	TKeyDataArray ComboKeys;
	System::UnicodeString Language;
	static TKeyLanguage __fastcall Create();
};


typedef System::DynamicArray<TKeyLanguage> TKeyLanguages;

struct DECLSPEC_DRECORD TKeyModifier
{
public:
	short Vk;
	short ScanCode;
	System::UnicodeString Caption;
	TKeyImage KeyImage;
	System::UnicodeString ModifierName;
	TKeyLanguages Languages;
	System::Word FontSize;
	System::UnicodeString Language;
	static TKeyModifier __fastcall Create();
	__fastcall operator TKey();
};


typedef System::DynamicArray<TKeyModifier> TKeyModifiers;

struct DECLSPEC_DRECORD TVirtualKey
{
public:
	short Vk;
	short ScanCode;
	System::UnicodeString Caption;
	TKeyImage KeyImage;
	TKeyDataArray ComboKeys;
	System::Word FontSize;
	System::Word Width;
	System::Word Height;
	TVirtualKeyFlags Flags;
	System::Word LeftMargin;
	System::Word RightMargin;
	TKeyModifiers Modifiers;
	System::UnicodeString ModifierName;
	TKeyLanguages Languages;
	System::Word GroupIndex;
	System::UnicodeString PublishedName;
	static TVirtualKey __fastcall Create();
	bool __fastcall Equals(const TVirtualKey &AVirtualKey);
	__fastcall operator TKey();
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TVirtualKeys : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	TVirtualKey operator[](int Index) { return this->Items[Index]; }
	
private:
	System::Generics::Collections::TList__1<TVirtualKey>* FKeys;
	int FTopMargin;
	int FBottomMargin;
	TVirtualKey __fastcall GetItem(int Index);
	void __fastcall SetItem(int Index, const TVirtualKey &Value);
	
public:
	__fastcall TVirtualKeys();
	__fastcall virtual ~TVirtualKeys();
	void __fastcall Add(TVirtualKey &AKey);
	int __fastcall Count();
	__property TVirtualKey Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
	__property int TopMargin = {read=FTopMargin, write=FTopMargin, nodefault};
	__property int BottomMargin = {read=FBottomMargin, write=FBottomMargin, nodefault};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

struct DECLSPEC_DRECORD TKeyboardLanguage
{
public:
	System::UnicodeString Language;
	System::UnicodeString Name;
	static TKeyboardLanguage __fastcall Create();
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TVirtualKeyLayout : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	class DELPHICLASS TVirtualKeyboard;
#ifndef _WIN64
	#pragma pack(push,8)
#endif /* not _WIN64 */
	class PASCALIMPLEMENTATION TVirtualKeyboard : public System::Generics::Collections::TList__1<TVirtualKeys*>
	{
		typedef System::Generics::Collections::TList__1<TVirtualKeys*> inherited;
		
	public:
		/* {System_Generics_Collections}TList<Vcl_Touch_KeyboardTypes_TVirtualKeys>.Create */ inline __fastcall TVirtualKeyboard()/* overload */ : System::Generics::Collections::TList__1<TVirtualKeys*>() { }
		/* {System_Generics_Collections}TList<Vcl_Touch_KeyboardTypes_TVirtualKeys>.Create */ inline __fastcall TVirtualKeyboard(const System::DelphiInterface<System::Generics::Defaults::IComparer__1<TVirtualKeys*> > AComparer)/* overload */ : System::Generics::Collections::TList__1<TVirtualKeys*>(AComparer) { }
		/* {System_Generics_Collections}TList<Vcl_Touch_KeyboardTypes_TVirtualKeys>.Create */ inline __fastcall TVirtualKeyboard(System::Generics::Collections::TEnumerable__1<TVirtualKeys*>* const Collection)/* overload */ : System::Generics::Collections::TList__1<TVirtualKeys*>(Collection) { }
		/* {System_Generics_Collections}TList<Vcl_Touch_KeyboardTypes_TVirtualKeys>.Create */ inline __fastcall TVirtualKeyboard(TVirtualKeys* const *Values, const int Values_High)/* overload */ : System::Generics::Collections::TList__1<TVirtualKeys*>(Values, Values_High) { }
		/* {System_Generics_Collections}TList<Vcl_Touch_KeyboardTypes_TVirtualKeys>.Destroy */ inline __fastcall virtual ~TVirtualKeyboard() { }
		
	};
	
#ifndef _WIN64
	#pragma pack(pop)
#endif /* not _WIN64 */
	
	class DELPHICLASS TKeyboardLanguages;
#ifndef _WIN64
	#pragma pack(push,8)
#endif /* not _WIN64 */
	class PASCALIMPLEMENTATION TKeyboardLanguages : public System::Generics::Collections::TList__1<TKeyboardLanguage>
	{
		typedef System::Generics::Collections::TList__1<TKeyboardLanguage> inherited;
		
	public:
		/* {System_Generics_Collections}TList<Vcl_Touch_KeyboardTypes_TKeyboardLanguage>.Create */ inline __fastcall TKeyboardLanguages()/* overload */ : System::Generics::Collections::TList__1<TKeyboardLanguage>() { }
		/* {System_Generics_Collections}TList<Vcl_Touch_KeyboardTypes_TKeyboardLanguage>.Create */ inline __fastcall TKeyboardLanguages(const System::DelphiInterface<System::Generics::Defaults::IComparer__1<TKeyboardLanguage> > AComparer)/* overload */ : System::Generics::Collections::TList__1<TKeyboardLanguage>(AComparer) { }
		/* {System_Generics_Collections}TList<Vcl_Touch_KeyboardTypes_TKeyboardLanguage>.Create */ inline __fastcall TKeyboardLanguages(System::Generics::Collections::TEnumerable__1<TKeyboardLanguage>* const Collection)/* overload */ : System::Generics::Collections::TList__1<TKeyboardLanguage>(Collection) { }
		/* {System_Generics_Collections}TList<Vcl_Touch_KeyboardTypes_TKeyboardLanguage>.Create */ inline __fastcall TKeyboardLanguages(const TKeyboardLanguage *Values, const int Values_High)/* overload */ : System::Generics::Collections::TList__1<TKeyboardLanguage>(Values, Values_High) { }
		/* {System_Generics_Collections}TList<Vcl_Touch_KeyboardTypes_TKeyboardLanguage>.Destroy */ inline __fastcall virtual ~TKeyboardLanguages() { }
		
	};
	
#ifndef _WIN64
	#pragma pack(pop)
#endif /* not _WIN64 */
	
	
private:
	TKeyboardLanguages* FLanguages;
	System::UnicodeString FKeyboardName;
	System::UnicodeString FKeyboardType;
	int FMinHeight;
	int FWidth;
	int FMinWidth;
	int FHeight;
	int FMaxWidth;
	int FMaxHeight;
	int FRowHeight;
	TVirtualKeyboard* FKeys;
	
public:
	__fastcall TVirtualKeyLayout();
	__fastcall virtual ~TVirtualKeyLayout();
	void __fastcall LoadFromStream(System::Classes::TStream* Stream);
	void __fastcall SaveToStream(System::Classes::TStream* Stream);
	__property TKeyboardLanguages* Languages = {read=FLanguages};
	__property System::UnicodeString KeyboardName = {read=FKeyboardName, write=FKeyboardName};
	__property System::UnicodeString KeyboardType = {read=FKeyboardType, write=FKeyboardType};
	__property int Width = {read=FWidth, write=FWidth, nodefault};
	__property int Height = {read=FHeight, write=FHeight, nodefault};
	__property int MinWidth = {read=FMinWidth, write=FMinWidth, nodefault};
	__property int MinHeight = {read=FMinHeight, write=FMinHeight, nodefault};
	__property int MaxWidth = {read=FMaxWidth, write=FMaxWidth, nodefault};
	__property int MaxHeight = {read=FMaxHeight, write=FMaxHeight, nodefault};
	__property int RowHeight = {read=FRowHeight, write=FRowHeight, nodefault};
	__property TVirtualKeyboard* Keys = {read=FKeys};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TVirtualKeyLayouts : public System::Generics::Collections::TList__1<TVirtualKeyLayout*>
{
	typedef System::Generics::Collections::TList__1<TVirtualKeyLayout*> inherited;
	
public:
	__fastcall virtual ~TVirtualKeyLayouts();
public:
	/* {System_Generics_Collections}TList<Vcl_Touch_KeyboardTypes_TVirtualKeyLayout>.Create */ inline __fastcall TVirtualKeyLayouts()/* overload */ : System::Generics::Collections::TList__1<TVirtualKeyLayout*>() { }
	/* {System_Generics_Collections}TList<Vcl_Touch_KeyboardTypes_TVirtualKeyLayout>.Create */ inline __fastcall TVirtualKeyLayouts(const System::DelphiInterface<System::Generics::Defaults::IComparer__1<TVirtualKeyLayout*> > AComparer)/* overload */ : System::Generics::Collections::TList__1<TVirtualKeyLayout*>(AComparer) { }
	/* {System_Generics_Collections}TList<Vcl_Touch_KeyboardTypes_TVirtualKeyLayout>.Create */ inline __fastcall TVirtualKeyLayouts(System::Generics::Collections::TEnumerable__1<TVirtualKeyLayout*>* const Collection)/* overload */ : System::Generics::Collections::TList__1<TVirtualKeyLayout*>(Collection) { }
	/* {System_Generics_Collections}TList<Vcl_Touch_KeyboardTypes_TVirtualKeyLayout>.Create */ inline __fastcall TVirtualKeyLayouts(TVirtualKeyLayout* const *Values, const int Values_High)/* overload */ : System::Generics::Collections::TList__1<TVirtualKeyLayout*>(Values, Values_High) { }
	
};


typedef System::UnicodeString TKeyboardLayout;

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE TKeyData __fastcall VKey(int Vk, int ScanCode);
extern DELPHI_PACKAGE TKeyData __fastcall GetVirtualKey(const TKeyData Key);
extern DELPHI_PACKAGE void __fastcall StringToComboKeys(const System::UnicodeString Value, TKeyDataArray &Keys);
extern DELPHI_PACKAGE System::UnicodeString __fastcall ComboKeysToString(const TKeyDataArray Keys);
}	/* namespace Keyboardtypes */
}	/* namespace Touch */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_TOUCH_KEYBOARDTYPES)
using namespace Vcl::Touch::Keyboardtypes;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_TOUCH)
using namespace Vcl::Touch;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_Touch_KeyboardtypesHPP
