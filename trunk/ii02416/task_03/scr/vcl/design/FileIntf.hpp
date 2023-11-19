// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FileIntf.pas' rev: 35.00 (Windows)

#ifndef FileintfHPP
#define FileintfHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#if !defined(_NO_DEPRECATED_UNIT_MSG)
#pragma message("Unit 'FileIntf' is deprecated")
#endif
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.ActiveX.hpp>
#include <System.SysUtils.hpp>
#include <VirtIntf.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fileintf
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TIVirtualFileSystem;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TIVirtualFileSystem : public Virtintf::TInterface
{
	typedef Virtintf::TInterface inherited;
	
public:
	virtual _di_IStream __stdcall GetFileStream(const System::Sysutils::TFileName FileName, int Mode) = 0 ;
	virtual int __stdcall FileAge(const System::Sysutils::TFileName FileName) = 0 ;
	virtual bool __stdcall RenameFile(const System::Sysutils::TFileName OldName, const System::Sysutils::TFileName NewName) = 0 ;
	virtual bool __stdcall IsReadonly(const System::Sysutils::TFileName FileName) = 0 ;
	virtual bool __stdcall IsFileBased() = 0 ;
	virtual bool __stdcall DeleteFile(const System::Sysutils::TFileName FileName) = 0 ;
	virtual bool __stdcall FileExists(const System::Sysutils::TFileName FileName) = 0 ;
	virtual System::Sysutils::TFileName __stdcall GetTempFileName(const System::Sysutils::TFileName FileName) = 0 ;
	virtual System::Sysutils::TFileName __stdcall GetBackupFileName(const System::Sysutils::TFileName FileName) = 0 ;
	virtual System::UnicodeString __stdcall GetIDString() = 0 ;
public:
	/* TInterface.Create */ inline __fastcall TIVirtualFileSystem() : Virtintf::TInterface() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TIVirtualFileSystem() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Fileintf */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FILEINTF)
using namespace Fileintf;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// FileintfHPP
