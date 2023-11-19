// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'IDECreators.pas' rev: 35.00 (Windows)

#ifndef IdecreatorsHPP
#define IdecreatorsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <ToolsAPI.hpp>

//-- user supplied -----------------------------------------------------------

namespace Idecreators
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IOptionsInitializer;
typedef System::DelphiInterface<IOptionsInitializer> _di_IOptionsInitializer;
__interface DELPHIINTERFACE IString;
typedef System::DelphiInterface<IString> _di_IString;
__interface DELPHIINTERFACE IFile;
typedef System::DelphiInterface<IFile> _di_IFile;
__interface DELPHIINTERFACE IFileAge;
typedef System::DelphiInterface<IFileAge> _di_IFileAge;
__interface DELPHIINTERFACE IFileFormat;
typedef System::DelphiInterface<IFileFormat> _di_IFileFormat;
__interface DELPHIINTERFACE ISourceCreator;
typedef System::DelphiInterface<ISourceCreator> _di_ISourceCreator;
__interface DELPHIINTERFACE ISourceCreatorWithDirectory;
typedef System::DelphiInterface<ISourceCreatorWithDirectory> _di_ISourceCreatorWithDirectory;
__interface DELPHIINTERFACE IExtendedSourceCreator;
typedef System::DelphiInterface<IExtendedSourceCreator> _di_IExtendedSourceCreator;
__interface DELPHIINTERFACE IDesignerGetter;
typedef System::DelphiInterface<IDesignerGetter> _di_IDesignerGetter;
__interface DELPHIINTERFACE IModuleCreator;
typedef System::DelphiInterface<IModuleCreator> _di_IModuleCreator;
__interface DELPHIINTERFACE IDsnModuleCreator;
typedef System::DelphiInterface<IDsnModuleCreator> _di_IDsnModuleCreator;
__interface DELPHIINTERFACE IDesignViewCreator;
typedef System::DelphiInterface<IDesignViewCreator> _di_IDesignViewCreator;
__interface DELPHIINTERFACE IToolSourceCreator;
typedef System::DelphiInterface<IToolSourceCreator> _di_IToolSourceCreator;
__interface DELPHIINTERFACE IToolModuleCreator;
typedef System::DelphiInterface<IToolModuleCreator> _di_IToolModuleCreator;
__interface DELPHIINTERFACE IAdditionalFilesCreator;
typedef System::DelphiInterface<IAdditionalFilesCreator> _di_IAdditionalFilesCreator;
__interface DELPHIINTERFACE IDesignerViewsCreator;
typedef System::DelphiInterface<IDesignerViewsCreator> _di_IDesignerViewsCreator;
//-- type declarations -------------------------------------------------------
__interface  INTERFACE_UUID("{19F75701-D44F-11D1-931D-00C04FB17A5E}") IOptionsInitializer  : public System::IInterface 
{
	
};

__interface  INTERFACE_UUID("{19EF6D9F-DB6F-11D0-9EDB-00A02457621F}") IString  : public System::IInterface 
{
	virtual System::UnicodeString __fastcall GetString() = 0 ;
};

__interface  INTERFACE_UUID("{19EF6DA0-DB6F-11D0-9EDB-00A02457621F}") IFile  : public System::IInterface 
{
	virtual System::UnicodeString __stdcall GetName() = 0 ;
	virtual int __stdcall GetSize() = 0 ;
	virtual int __stdcall Read(void *Buffer, int ALength) = 0 ;
	virtual void __stdcall Reset() = 0 ;
};

__interface  INTERFACE_UUID("{8BBB4581-F3E3-11D0-976C-0020AFF4D227}") IFileAge  : public IFile 
{
	virtual System::TDateTime __stdcall GetFileAge() = 0 ;
	virtual void __stdcall SetFileAge(const System::TDateTime Age) = 0 ;
	virtual int __stdcall GetDosFileAge() = 0 ;
	virtual void __stdcall SetDosFileAge(int Age) = 0 ;
	__property System::TDateTime FileAge = {read=GetFileAge, write=SetFileAge};
	__property int DosFileAge = {read=GetDosFileAge, write=SetDosFileAge};
};

__interface  INTERFACE_UUID("{47099B77-D998-4D2C-8EFE-6D1948AFDF41}") IFileFormat  : public IFile 
{
	virtual Toolsapi::_di_IOTAFileFilter __fastcall GetFileFilter() = 0 ;
	__property Toolsapi::_di_IOTAFileFilter FileFilter = {read=GetFileFilter};
};

__interface  INTERFACE_UUID("{19EF6DA3-DB6F-11D0-9EDB-00A02457621F}") ISourceCreator  : public System::IInterface 
{
	virtual bool __fastcall GetExisting() = 0 ;
	virtual _di_IFile __fastcall GetSource() = 0 ;
	virtual System::UnicodeString __fastcall GetLanguage() = 0 ;
	virtual bool __fastcall GetShowSource() = 0 ;
	virtual bool __fastcall GetIncludeInProject() = 0 ;
};

__interface  INTERFACE_UUID("{B42C4EC6-02FA-404E-B4F5-3EB9EEDA491A}") ISourceCreatorWithDirectory  : public System::IInterface 
{
	virtual System::UnicodeString __fastcall GetSaveDirectory() = 0 ;
	__property System::UnicodeString SaveDirectory = {read=GetSaveDirectory};
};

__interface  INTERFACE_UUID("{2ADAB809-86EE-4725-9681-4582BC2CF17B}") IExtendedSourceCreator  : public System::IInterface 
{
	virtual System::UnicodeString __fastcall GetFileSystem() = 0 ;
	virtual bool __fastcall GetUnNamed() = 0 ;
	__property System::UnicodeString FileSystem = {read=GetFileSystem};
	__property bool Unnamed = {read=GetUnNamed};
};

__interface  INTERFACE_UUID("{3C8D9287-FB9E-D511-940E-00B0D022514F}") IDesignerGetter  : public System::IInterface 
{
	virtual System::UnicodeString __fastcall GetDesignerType() = 0 ;
	virtual void __fastcall SetDesignerType(System::UnicodeString ADesignerType) = 0 ;
	__property System::UnicodeString DesignerType = {read=GetDesignerType, write=SetDesignerType};
};

__interface  INTERFACE_UUID("{19EF6DA1-DB6F-11D0-9EDB-00A02457621F}") IModuleCreator  : public ISourceCreator 
{
	virtual System::UnicodeString __fastcall GetAncestorName() = 0 ;
	virtual _di_IFile __fastcall GetInterfaceSource() = 0 ;
	virtual _di_IFile __fastcall GetForm() = 0 ;
	virtual System::UnicodeString __fastcall GetFormName() = 0 ;
	HIDESBASE virtual bool __fastcall GetIncludeInProject() = 0 ;
	virtual void __fastcall GetClasses(System::Classes::TStrings* Classes) = 0 ;
	virtual void __fastcall GetUnits(System::Classes::TStrings* Units) = 0 ;
	virtual System::UnicodeString __fastcall GetLicenseString() = 0 ;
	virtual bool __fastcall GetShowForm() = 0 ;
};

__interface  INTERFACE_UUID("{6AC3AC2B-EDED-11D2-AAD2-00C04FB16FBC}") IDsnModuleCreator  : public IModuleCreator 
{
	virtual _di_IFile __fastcall GetDesignerData() = 0 ;
};

__interface  INTERFACE_UUID("{5C58FB30-C75B-4F86-80C5-FDA7B97E4AB9}") IDesignViewCreator  : public System::IInterface 
{
	virtual int __fastcall GetViewCount() = 0 ;
	virtual System::UnicodeString __fastcall GetViewIdentifier(int Index) = 0 ;
	virtual _di_IFile __fastcall GetViewStream(int Index) = 0 ;
	__property int ViewCount = {read=GetViewCount};
	__property System::UnicodeString ViewIdentifiers[int Index] = {read=GetViewIdentifier};
	__property _di_IFile ViewStream[int Index] = {read=GetViewStream};
};

__interface  INTERFACE_UUID("{07A67B02-BAC3-4462-8D24-1ADB17B10E2A}") IToolSourceCreator  : public System::IInterface 
{
	virtual System::UnicodeString __fastcall GetFileSystem() = 0 ;
	virtual bool __fastcall GetUnNamed() = 0 ;
	__property System::UnicodeString FileSystem = {read=GetFileSystem};
	__property bool Unnamed = {read=GetUnNamed};
};

__interface  INTERFACE_UUID("{E432A19F-4FB3-11D1-AA73-00C04FB16FB3}") IToolModuleCreator  : public IModuleCreator 
{
	virtual void __fastcall FormCreated(const System::_di_IInterface Form) = 0 ;
	virtual System::UnicodeString __fastcall GetFileSystem() = 0 ;
	virtual bool __fastcall GetUnNamed() = 0 ;
	__property System::UnicodeString FileSystem = {read=GetFileSystem};
	__property bool Unnamed = {read=GetUnNamed};
};

__interface  INTERFACE_UUID("{BACD144F-1AC5-11D4-A455-00C04F6BB853}") IAdditionalFilesCreator  : public System::IInterface 
{
	virtual int __fastcall GetAdditionalFileCount() = 0 ;
	virtual _di_IFile __fastcall GetAdditionalFile(int I) = 0 ;
};

__interface  INTERFACE_UUID("{94C43129-91AF-4F8A-93BF-96D2414A2E77}") IDesignerViewsCreator  : public System::IInterface 
{
	virtual bool __fastcall GetIsSparse() = 0 ;
	virtual int __fastcall GetViewCount() = 0 ;
	virtual System::UnicodeString __fastcall GetViewIdentifier(int I) = 0 ;
	virtual _di_IFile __fastcall GetViewStream(int I) = 0 ;
	__property bool IsSparse = {read=GetIsSparse};
	__property int ViewCount = {read=GetViewCount};
	__property System::UnicodeString ViewIdentifiers[int Index] = {read=GetViewIdentifier};
	__property _di_IFile ViewStreams[int Index] = {read=GetViewStream};
};

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::UnicodeString __fastcall FileToString(const _di_IFile AFile);
extern DELPHI_PACKAGE System::DynamicArray<System::Byte> __fastcall FileToBytes(const _di_IFile AFile);
}	/* namespace Idecreators */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IDECREATORS)
using namespace Idecreators;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IdecreatorsHPP
