﻿// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.IdAntiFreeze.pas' rev: 35.00 (Windows)

#ifndef Vcl_IdantifreezeHPP
#define Vcl_IdantifreezeHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <IdAntiFreezeBase.hpp>
#include <IdBaseComponent.hpp>

//-- user supplied -----------------------------------------------------------
#pragma link "Vcl.IdAntiFreeze"

namespace Vcl
{
namespace Idantifreeze
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TIdAntiFreeze;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TIdAntiFreeze : public Idantifreezebase::TIdAntiFreezeBase
{
	typedef Idantifreezebase::TIdAntiFreezeBase inherited;
	
public:
	virtual void __fastcall Process();
public:
	/* TIdAntiFreezeBase.Destroy */ inline __fastcall virtual ~TIdAntiFreeze() { }
	
public:
	/* TIdBaseComponent.Create */ inline __fastcall TIdAntiFreeze(System::Classes::TComponent* AOwner)/* overload */ : Idantifreezebase::TIdAntiFreezeBase(AOwner) { }
	
public:
	/* TIdInitializerComponent.Create */ inline __fastcall TIdAntiFreeze()/* overload */ : Idantifreezebase::TIdAntiFreezeBase() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Idantifreeze */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_IDANTIFREEZE)
using namespace Vcl::Idantifreeze;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_IdantifreezeHPP
