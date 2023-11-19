// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'StFilSys.pas' rev: 35.00 (Windows)

#ifndef StfilsysHPP
#define StfilsysHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.ActiveX.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <IStreams.hpp>
#include <System.TypInfo.hpp>
#include <ToolsAPI.hpp>
#include <System.WideStrings.hpp>

//-- user supplied -----------------------------------------------------------

namespace Stfilsys
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TOTANotifier;
class DELPHICLASS TOTAModuleNotifier;
class DELPHICLASS TOTAFormNotifier;
class DELPHICLASS TActiveTStringsProperty;
class DELPHICLASS TStringsStream;
class DELPHICLASS TStringsFileSystem;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TOTANotifier : public Toolsapi::TNotifierObject
{
	typedef Toolsapi::TNotifierObject inherited;
	
protected:
	TActiveTStringsProperty* FOwner;
	HIDESBASE void __fastcall Destroyed();
	
public:
	__fastcall TOTANotifier(TActiveTStringsProperty* AOwner);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TOTANotifier() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TOTAModuleNotifier : public TOTANotifier
{
	typedef TOTANotifier inherited;
	
protected:
	HIDESBASE void __fastcall Modified();
	bool __fastcall CheckOverwrite();
	void __fastcall ModuleRenamed(const System::UnicodeString NewName);
public:
	/* TOTANotifier.Create */ inline __fastcall TOTAModuleNotifier(TActiveTStringsProperty* AOwner) : TOTANotifier(AOwner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TOTAModuleNotifier() { }
	
private:
	void *__IOTAModuleNotifier;	// Toolsapi::IOTAModuleNotifier 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {F17A7BCE-E07D-11D1-AB0B-00C04FB16FB3}
	operator Toolsapi::_di_IOTAModuleNotifier()
	{
		Toolsapi::_di_IOTAModuleNotifier intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::IOTAModuleNotifier*(void) { return (Toolsapi::IOTAModuleNotifier*)&__IOTAModuleNotifier; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {F17A7BCF-E07D-11D1-AB0B-00C04FB16FB3}
	operator Toolsapi::_di_IOTANotifier()
	{
		Toolsapi::_di_IOTANotifier intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::IOTANotifier*(void) { return (Toolsapi::IOTANotifier*)&__IOTAModuleNotifier; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TOTAFormNotifier : public TOTANotifier
{
	typedef TOTANotifier inherited;
	
protected:
	void __fastcall FormActivated();
	void __fastcall FormSaving();
	void __fastcall ComponentRenamed(void * ComponentHandle, const System::UnicodeString OldName, const System::UnicodeString NewName);
public:
	/* TOTANotifier.Create */ inline __fastcall TOTAFormNotifier(TActiveTStringsProperty* AOwner) : TOTANotifier(AOwner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TOTAFormNotifier() { }
	
private:
	void *__IOTAFormNotifier;	// Toolsapi::IOTAFormNotifier 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {0E3B9D7C-E119-11D1-AB0C-00C04FB16FB3}
	operator Toolsapi::_di_IOTAFormNotifier()
	{
		Toolsapi::_di_IOTAFormNotifier intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::IOTAFormNotifier*(void) { return (Toolsapi::IOTAFormNotifier*)&__IOTAFormNotifier; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {F17A7BCF-E07D-11D1-AB0B-00C04FB16FB3}
	operator Toolsapi::_di_IOTANotifier()
	{
		Toolsapi::_di_IOTANotifier intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::IOTANotifier*(void) { return (Toolsapi::IOTANotifier*)&__IOTAFormNotifier; }
	#endif
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TActiveTStringsProperty : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	System::Classes::TComponent* FComponent;
	System::UnicodeString FPropertyName;
	Toolsapi::_di_IOTAModule FModule;
	Toolsapi::_di_IOTAFormEditor FFormEditor;
	Toolsapi::_di_IOTAModuleNotifier FModuleNotifier;
	Toolsapi::_di_IOTAFormNotifier FFormModuleNotifier;
	int FIndex;
	int FModuleNotifierIndex;
	int FFormNotifierIndex;
	int FDiskAge;
	void __fastcall SetModule(const Toolsapi::_di_IOTAModule Value);
	void __fastcall SetComponent(System::Classes::TComponent* Value);
	
protected:
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	
public:
	__fastcall TActiveTStringsProperty(System::Classes::TComponent* AOwner, System::Classes::TComponent* AComponent, const System::UnicodeString APropertyName);
	__fastcall virtual ~TActiveTStringsProperty();
	void __fastcall RenameComponent(const System::UnicodeString OldName, const System::UnicodeString NewName);
	__property Toolsapi::_di_IOTAModule Module = {read=FModule, write=SetModule};
	__property System::Classes::TComponent* Component = {read=FComponent, write=SetComponent};
	__property System::UnicodeString PropertyName = {read=FPropertyName, write=FPropertyName};
	__property int DiskAge = {read=FDiskAge, write=FDiskAge, nodefault};
public:
	/* TComponent.Create */ inline __fastcall virtual TActiveTStringsProperty(System::Classes::TComponent* AOwner) : System::Classes::TComponent(AOwner) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TStringsStream : public Istreams::TIMemoryStream
{
	typedef Istreams::TIMemoryStream inherited;
	
private:
	System::Classes::TComponent* FComponent;
	System::TObject* FStringsProperty;
	TActiveTStringsProperty* FActiveTStringsProperty;
	bool FModified;
	
protected:
	__fastcall TStringsStream(TActiveTStringsProperty* ActiveTStringsProperty, System::Classes::TComponent* AComponent, const System::UnicodeString APropName, int Mode);
	
private:
	void __fastcall SetDesignerModified();
	
public:
	__fastcall virtual ~TStringsStream();
	virtual HRESULT __stdcall Write(void * pv, unsigned cb, System::PFixedUInt pcbWritten);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TStringsFileSystem : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	System::Classes::TStringList* FActiveTStringsProperties;
	
public:
	__fastcall TStringsFileSystem();
	__fastcall virtual ~TStringsFileSystem();
	TActiveTStringsProperty* __fastcall GetTStringsProperty(const System::UnicodeString IDent, System::Classes::TComponent* AComponent, const System::UnicodeString APropertyName);
	_di_IStream __fastcall GetFileStream(const System::UnicodeString FileName, int Mode);
	int __fastcall FileAge(const System::UnicodeString FileName);
	bool __fastcall RenameFile(const System::UnicodeString OldName, const System::UnicodeString NewName);
	bool __fastcall IsReadonly(const System::UnicodeString FileName);
	bool __fastcall IsFileBased();
	bool __fastcall DeleteFile(const System::UnicodeString FileName);
	bool __fastcall FileExists(const System::UnicodeString FileName);
	System::UnicodeString __fastcall GetTempFileName(const System::UnicodeString FileName);
	System::UnicodeString __fastcall GetBackupFileName(const System::UnicodeString FileName);
	System::UnicodeString __fastcall GetIDString();
private:
	void *__IOTAFileSystem;	// Toolsapi::IOTAFileSystem 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {A9D1389D-F4B0-11D1-AB22-00C04FB16FB3}
	operator Toolsapi::_di_IOTAFileSystem()
	{
		Toolsapi::_di_IOTAFileSystem intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::IOTAFileSystem*(void) { return (Toolsapi::IOTAFileSystem*)&__IOTAFileSystem; }
	#endif
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
#define sTStringsFileSystem L"Delphi.TStringsFileSystem"
extern DELPHI_PACKAGE TStringsFileSystem* StringsFileSystem;
extern DELPHI_PACKAGE System::_di_IInterface StringsFileSystemCounter;
extern DELPHI_PACKAGE int StringsFileSystemIndex;
extern DELPHI_PACKAGE void __fastcall Register();
extern DELPHI_PACKAGE void __fastcall Unregister();
}	/* namespace Stfilsys */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_STFILSYS)
using namespace Stfilsys;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// StfilsysHPP
