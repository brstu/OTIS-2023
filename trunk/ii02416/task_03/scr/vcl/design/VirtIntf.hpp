// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'VirtIntf.pas' rev: 35.00 (Windows)

#ifndef VirtintfHPP
#define VirtintfHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#if !defined(_NO_DEPRECATED_UNIT_MSG)
#pragma message("Unit 'VirtIntf' is deprecated")
#endif
#include <System.hpp>
#include <SysInit.hpp>

//-- user supplied -----------------------------------------------------------

namespace Virtintf
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TInterface;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TInterface : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int FRefCount;
	
public:
	__fastcall TInterface();
	HIDESBASE void __fastcall Free();
	virtual int __stdcall AddRef();
	virtual int __stdcall Release();
	virtual int __stdcall GetVersion();
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TInterface() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::UnicodeString __fastcall ReleaseException();
}	/* namespace Virtintf */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VIRTINTF)
using namespace Virtintf;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// VirtintfHPP
