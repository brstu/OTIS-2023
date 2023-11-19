// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ActnDrag.pas' rev: 35.00 (Windows)

#ifndef ActndragHPP
#define ActndragHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.ActnList.hpp>

//-- user supplied -----------------------------------------------------------

namespace Actndrag
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TActionDragObject;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TActionDragObject : public Vcl::Controls::TDragControlObject
{
	typedef Vcl::Controls::TDragControlObject inherited;
	
public:
	/* TBaseDragControlObject.Create */ inline __fastcall virtual TActionDragObject(Vcl::Controls::TControl* AControl) : Vcl::Controls::TDragControlObject(AControl) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TActionDragObject() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Actndrag */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ACTNDRAG)
using namespace Actndrag;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// ActndragHPP
