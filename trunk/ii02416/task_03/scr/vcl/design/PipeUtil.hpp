// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'PipeUtil.pas' rev: 35.00 (Windows)

#ifndef PipeutilHPP
#define PipeutilHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Pipeutil
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TPipe;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TPipe : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	void *Buffer;
	System::Classes::TMemoryStream* Stream;
	NativeUInt fRead;
	NativeUInt fWrite;
	
public:
	__property NativeUInt Read = {read=fRead, nodefault};
	__property NativeUInt Write = {read=fWrite, nodefault};
	__fastcall TPipe();
	__fastcall virtual ~TPipe();
	void __fastcall GetList(System::Classes::TStrings* S);
	void __fastcall PartialRead();
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Pipeutil */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_PIPEUTIL)
using namespace Pipeutil;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// PipeutilHPP
