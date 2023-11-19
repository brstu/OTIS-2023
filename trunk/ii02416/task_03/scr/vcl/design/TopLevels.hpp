// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'TopLevels.pas' rev: 35.00 (Windows)

#ifndef ToplevelsHPP
#define ToplevelsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Toplevels
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE ITopLevelsHandler;
typedef System::DelphiInterface<ITopLevelsHandler> _di_ITopLevelsHandler;
//-- type declarations -------------------------------------------------------
typedef System::DynamicArray<System::Classes::TComponent*> TComponentList;

__interface  INTERFACE_UUID("{D1408A82-59DE-4780-A017-72E025C1507F}") ITopLevelsHandler  : public System::IInterface 
{
	virtual System::Classes::TComponent* __fastcall ComponentFromHandle(unsigned Window) = 0 ;
	virtual bool __fastcall Activate(System::Classes::TComponent* Component) = 0 ;
	virtual System::UnicodeString __fastcall GetCaptionOf(System::Classes::TComponent* Component) = 0 ;
	virtual bool __fastcall IsDesignerRoot(System::Classes::TComponent* Component) = 0 ;
};

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::Classes::TComponent* __fastcall ComponentFromWindow(unsigned Handle);
extern DELPHI_PACKAGE System::Classes::TComponent* __fastcall TopLevelComponent(System::Classes::TComponent* Ignoring = (System::Classes::TComponent*)(0x0));
extern DELPHI_PACKAGE TComponentList __fastcall TopLevelComponents();
extern DELPHI_PACKAGE void __fastcall ActivateTopLevelComponent(System::Classes::TComponent* Component);
extern DELPHI_PACKAGE System::UnicodeString __fastcall CaptionFromComponent(System::Classes::TComponent* Component);
extern DELPHI_PACKAGE bool __fastcall IsComponentDesigner(System::Classes::TComponent* Component);
extern DELPHI_PACKAGE void __fastcall RegisterHandler(const _di_ITopLevelsHandler Handler);
extern DELPHI_PACKAGE void __fastcall UnregisterHandler(const _di_ITopLevelsHandler Handler);
}	/* namespace Toplevels */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_TOPLEVELS)
using namespace Toplevels;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// ToplevelsHPP
