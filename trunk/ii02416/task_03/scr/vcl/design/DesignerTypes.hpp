// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DesignerTypes.pas' rev: 35.00 (Windows)

#ifndef DesignertypesHPP
#define DesignertypesHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>

//-- user supplied -----------------------------------------------------------

namespace Designertypes
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TShowState : unsigned char { ssNormal, ssMinimized, ssMaximized };

enum DECLSPEC_DENUM Designertypes__1 : unsigned char { dsVisible, dsIconic, dsZoomed };

typedef System::Set<Designertypes__1, Designertypes__1::dsVisible, Designertypes__1::dsZoomed> TDesignerState;

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Designertypes */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DESIGNERTYPES)
using namespace Designertypes;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DesignertypesHPP
