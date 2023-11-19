// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.ABAccessibility.pas' rev: 35.00 (Windows)

#ifndef Vcl_AbaccessibilityHPP
#define Vcl_AbaccessibilityHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <Winapi.ActiveX.hpp>
#include <Winapi.oleacc.hpp>
#include <Vcl.ActnMan.hpp>
#include <Vcl.ActnMenus.hpp>
#include <Vcl.Controls.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Abaccessibility
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TActionBarAccessibility;
class DELPHICLASS TActionMenuBarAccessibility;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TActionBarAccessibility : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	Vcl::Actnman::TActionClient* FActionClient;
	Vcl::Actnman::TActionClient* FParent;
	HRESULT __stdcall Get_accParent(/* out */ _di_IDispatch &ppdispParent);
	HRESULT __stdcall Get_accChildCount(/* out */ int &pcountChildren);
	HRESULT __stdcall Get_accChild(System::OleVariant varChild, /* out */ _di_IDispatch &ppdispChild);
	HRESULT __stdcall Get_accName(System::OleVariant varChild, /* out */ System::WideString &pszName);
	HRESULT __stdcall Get_accValue(System::OleVariant varChild, /* out */ System::WideString &pszValue);
	HRESULT __stdcall Get_accDescription(System::OleVariant varChild, /* out */ System::WideString &pszDescription);
	HRESULT __stdcall Get_accRole(System::OleVariant varChild, /* out */ System::OleVariant &pvarRole);
	HRESULT __stdcall Get_accState(System::OleVariant varChild, /* out */ System::OleVariant &pvarState);
	HRESULT __stdcall Get_accHelp(System::OleVariant varChild, /* out */ System::WideString &pszHelp);
	HRESULT __stdcall Get_accHelpTopic(/* out */ System::WideString &pszHelpFile, System::OleVariant varChild, /* out */ int &pidTopic);
	HRESULT __stdcall Get_accKeyboardShortcut(System::OleVariant varChild, /* out */ System::WideString &pszKeyboardShortcut);
	HRESULT __stdcall Get_accFocus(/* out */ System::OleVariant &pvarChild);
	HRESULT __stdcall Get_accSelection(/* out */ System::OleVariant &pvarChildren);
	HRESULT __stdcall Get_accDefaultAction(System::OleVariant varChild, /* out */ System::WideString &pszDefaultAction);
	HRESULT __stdcall accSelect(int flagsSelect, System::OleVariant varChild);
	HRESULT __stdcall accLocation(/* out */ int &pxLeft, /* out */ int &pyTop, /* out */ int &pcxWidth, /* out */ int &pcyHeight, System::OleVariant varChild);
	HRESULT __stdcall accNavigate(int navDir, System::OleVariant varStart, /* out */ System::OleVariant &pvarEndUpAt);
	HRESULT __stdcall accHitTest(int xLeft, int yTop, /* out */ System::OleVariant &pvarChild);
	HRESULT __stdcall accDoDefaultAction(System::OleVariant varChild);
	HRESULT __stdcall Set_accName(System::OleVariant varChild, const System::WideString pszName);
	HRESULT __stdcall Set_accValue(System::OleVariant varChild, const System::WideString pszValue);
	HRESULT __stdcall GetIDsOfNames(const GUID &IID, void * Names, int NameCount, int LocaleID, void * DispIDs);
	HRESULT __stdcall GetTypeInfo(int Index, int LocaleID, /* out */ void *TypeInfo);
	HRESULT __stdcall GetTypeInfoCount(/* out */ int &Count);
	HRESULT __stdcall Invoke(int DispID, const GUID &IID, int LocaleID, System::Word Flags, void *Params, void * VarResult, void * ExcepInfo, void * ArgErr);
	
public:
	__fastcall TActionBarAccessibility(Vcl::Actnman::TActionClient* Parent, Vcl::Actnman::TActionClient* ActionClient);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TActionBarAccessibility() { }
	
private:
	void *__IAccessible;	// IAccessible 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {618736E0-3C3D-11CF-810C-00AA00389B71}
	operator _di_IAccessible()
	{
		_di_IAccessible intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IAccessible*(void) { return (IAccessible*)&__IAccessible; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00020400-0000-0000-C000-000000000046}
	operator _di_IDispatch()
	{
		_di_IDispatch intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IDispatch*(void) { return (IDispatch*)&__IAccessible; }
	#endif
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TActionMenuBarAccessibility : public TActionBarAccessibility
{
	typedef TActionBarAccessibility inherited;
	
public:
	HIDESBASE HRESULT __stdcall Get_accChild(System::OleVariant varChild, /* out */ _di_IDispatch &ppdispChild);
	HIDESBASE HRESULT __stdcall Get_accState(System::OleVariant varChild, /* out */ System::OleVariant &pvarState);
	HIDESBASE HRESULT __stdcall Get_accRole(System::OleVariant varChild, /* out */ System::OleVariant &pvarRole);
	HIDESBASE HRESULT __stdcall Get_accDescription(System::OleVariant varChild, /* out */ System::WideString &pszDescription);
public:
	/* TActionBarAccessibility.Create */ inline __fastcall TActionMenuBarAccessibility(Vcl::Actnman::TActionClient* Parent, Vcl::Actnman::TActionClient* ActionClient) : TActionBarAccessibility(Parent, ActionClient) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TActionMenuBarAccessibility() { }
	
private:
	void *__IAccessible;	// IAccessible 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {618736E0-3C3D-11CF-810C-00AA00389B71}
	operator _di_IAccessible()
	{
		_di_IAccessible intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IAccessible*(void) { return (IAccessible*)&__IAccessible; }
	#endif
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Abaccessibility */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_ABACCESSIBILITY)
using namespace Vcl::Abaccessibility;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_AbaccessibilityHPP
