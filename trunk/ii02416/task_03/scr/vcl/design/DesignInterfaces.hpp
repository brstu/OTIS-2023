// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DesignInterfaces.pas' rev: 35.00 (Windows)

#ifndef DesigninterfacesHPP
#define DesigninterfacesHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>

//-- user supplied -----------------------------------------------------------

namespace Designinterfaces
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IWindowsSurface;
typedef System::DelphiInterface<IWindowsSurface> _di_IWindowsSurface;
//-- type declarations -------------------------------------------------------
__interface  INTERFACE_UUID("{49BBA2ED-BE5C-49A2-9F7C-C69CE49B5F06}") IWindowsSurface  : public System::IInterface 
{
	virtual NativeUInt __fastcall GetHandle() = 0 ;
	__property NativeUInt Handle = {read=GetHandle};
};

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Designinterfaces */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DESIGNINTERFACES)
using namespace Designinterfaces;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DesigninterfacesHPP
