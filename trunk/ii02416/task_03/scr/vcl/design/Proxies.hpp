// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Proxies.pas' rev: 35.00 (Windows)

#ifndef ProxiesHPP
#define ProxiesHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>

//-- user supplied -----------------------------------------------------------

namespace Proxies
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE void __fastcall CreateSubClass(System::TObject* Instance, const System::UnicodeString ClassName, const System::UnicodeString UnitName, System::TClass Ancestor)/* overload */;
extern DELPHI_PACKAGE void __fastcall CreateSubClass(System::TObject* Instance, const System::UnicodeString ClassName, System::TClass Ancestor)/* overload */;
extern DELPHI_PACKAGE void __fastcall ChangeToProxyClass(System::TObject* Instance, System::TClass Proxy);
extern DELPHI_PACKAGE void __fastcall DestroySubClass(System::TObject* Instance);
extern DELPHI_PACKAGE void __fastcall RenameSubClass(System::TObject* Instance, const System::UnicodeString ClassName, const System::UnicodeString UnitName = System::UnicodeString());
extern DELPHI_PACKAGE void * __fastcall CreateSubClassMethod(System::TObject* Instance, const System::UnicodeString MethodName);
extern DELPHI_PACKAGE void __fastcall RenameSubClassMethod(System::TObject* Instance, void * Method, const System::UnicodeString MethodName);
extern DELPHI_PACKAGE void __fastcall DestroySubClassMethod(System::TObject* Instance, void * Method);
extern DELPHI_PACKAGE bool __fastcall IsProxyClass(System::TClass ClassType);
}	/* namespace Proxies */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_PROXIES)
using namespace Proxies;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// ProxiesHPP
