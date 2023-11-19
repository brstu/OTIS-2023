// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'PersonalityFileTraitsAPI.pas' rev: 35.00 (Windows)

#ifndef PersonalityfiletraitsapiHPP
#define PersonalityfiletraitsapiHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <ToolsAPI.hpp>

//-- user supplied -----------------------------------------------------------

namespace Personalityfiletraitsapi
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IOTAStatementCompletionTrait;
typedef System::DelphiInterface<IOTAStatementCompletionTrait> _di_IOTAStatementCompletionTrait;
__interface DELPHIINTERFACE IOTAMethodNavigateTrait;
typedef System::DelphiInterface<IOTAMethodNavigateTrait> _di_IOTAMethodNavigateTrait;
//-- type declarations -------------------------------------------------------
__interface  INTERFACE_UUID("{5FB37E42-3BE3-4AF8-AEE5-C3F500BF9145}") IOTAStatementCompletionTrait  : public System::IInterface 
{
	virtual bool __fastcall Complete(const Toolsapi::_di_IOTAEditView AEditView, const Toolsapi::TOTAEditPos &EdPos) = 0 ;
};

__interface  INTERFACE_UUID("{1CC81B01-A530-4600-98F9-E0672E1F99FD}") IOTAMethodNavigateTrait  : public System::IInterface 
{
	virtual bool __fastcall Navigate(const Toolsapi::_di_IOTAEditView AEditView, Toolsapi::TOTANavigateType NavigateType, bool ClassLock) = 0 ;
};

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Personalityfiletraitsapi */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_PERSONALITYFILETRAITSAPI)
using namespace Personalityfiletraitsapi;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// PersonalityfiletraitsapiHPP
