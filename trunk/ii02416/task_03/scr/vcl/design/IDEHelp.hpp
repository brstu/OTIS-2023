// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'IDEHelp.pas' rev: 35.00 (Windows)

#ifndef IdehelpHPP
#define IdehelpHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <ToolsAPI.hpp>
#include <DesignIntf.hpp>
#include <System.Classes.hpp>
#include <System.HelpIntfs.hpp>

//-- user supplied -----------------------------------------------------------

namespace Idehelp
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IInternalHelpServices;
typedef System::DelphiInterface<IInternalHelpServices> _di_IInternalHelpServices;
__interface DELPHIINTERFACE IVclHelpTrait;
typedef System::DelphiInterface<IVclHelpTrait> _di_IVclHelpTrait;
__interface DELPHIINTERFACE IEditorHelpTrait;
typedef System::DelphiInterface<IEditorHelpTrait> _di_IEditorHelpTrait;
__interface DELPHIINTERFACE IIDEHelpServiceTrait;
typedef System::DelphiInterface<IIDEHelpServiceTrait> _di_IIDEHelpServiceTrait;
__interface DELPHIINTERFACE IIDEHelpServiceTrait2;
typedef System::DelphiInterface<IIDEHelpServiceTrait2> _di_IIDEHelpServiceTrait2;
//-- type declarations -------------------------------------------------------
__interface  INTERFACE_UUID("{F91345F9-412A-4634-A85D-FEA90A0402E2}") IInternalHelpServices  : public IDispatch 
{
	virtual HRESULT __safecall GetPersonality(System::WideString &__GetPersonality_result) = 0 ;
	virtual HRESULT __safecall ShowKeywordHelp(const System::WideString Keyword, const System::WideString Personality) = 0 ;
	virtual HRESULT __safecall UnderstandsKeyword(const System::WideString Keyword, const System::WideString Personality, bool &__UnderstandsKeyword_result) = 0 ;
	virtual HRESULT __safecall RegisterTrait(const System::WideString personality, const System::WideString filefilter, const Toolsapi::_di_IOTAHelpTrait trait) = 0 ;
	virtual HRESULT __safecall RegisterPersonalityTrait(const System::WideString personality, const Toolsapi::_di_IOTAPersonalityHelpTrait trait) = 0 ;
};

enum DECLSPEC_DENUM TPropHelpType : unsigned char { htEvent, htEnum, htProperty };

__interface  INTERFACE_UUID("{E5C7F259-B34C-4ADE-B27B-E5B7E23FB6E2}") IVclHelpTrait  : public Toolsapi::IOTAHelpTrait 
{
	virtual void __fastcall ShowPropertyHelp(System::TClass ClassType, TPropHelpType HelpType, const System::UnicodeString PMEName) = 0 /* overload */;
	virtual void __fastcall ShowPropertyHelp(Designintf::_di_IClass ClassType, TPropHelpType HelpType, const System::UnicodeString PMEName) = 0 /* overload */;
	virtual bool __fastcall ShowClassHelp(System::Classes::TPersistent* Component) = 0 ;
};

__interface  INTERFACE_UUID("{3D189A81-47F9-4961-808A-727BB9E0B3CF}") IEditorHelpTrait  : public Toolsapi::IOTAHelpTrait 
{
	virtual void __fastcall ShowEditorHelp(const System::WideString Token, const Toolsapi::_di_IOTAEditView EditView) = 0 ;
};

__interface  INTERFACE_UUID("{58CFBDD9-D6B1-46BC-BB13-E5A4E0FE6A26}") IIDEHelpServiceTrait  : public Toolsapi::IOTAHelpTrait 
{
	virtual bool __fastcall IsHelpInstalled() = 0 ;
};

__interface  INTERFACE_UUID("{BCBE380B-0868-41FC-9E3E-2FFD28C5A741}") IIDEHelpServiceTrait2  : public IIDEHelpServiceTrait 
{
	virtual bool __fastcall IsHelpInstalledSilent() = 0 ;
};

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetHelpPersonality();
extern DELPHI_PACKAGE void __fastcall SetHelpPersonality(const System::UnicodeString Value);
extern DELPHI_PACKAGE bool __fastcall IsIDEHelpInstalled(bool Silent = false);
}	/* namespace Idehelp */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IDEHELP)
using namespace Idehelp;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IdehelpHPP
