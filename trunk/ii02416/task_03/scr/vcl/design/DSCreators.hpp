// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSCreators.pas' rev: 35.00 (Windows)

#ifndef DscreatorsHPP
#define DscreatorsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Dialogs.hpp>
#include <DesignIntf.hpp>
#include <DesignEditors.hpp>
#include <DMForm.hpp>
#include <Vcl.Consts.hpp>
#include <IStreams.hpp>
#include <ToolsAPI.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dscreators
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TCreator;
class DELPHICLASS TModuleCreator;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TCreator : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
protected:
	bool __fastcall GetExisting();
	System::UnicodeString __fastcall GetFileSystem();
	Toolsapi::_di_IOTAModule __fastcall GetOwner();
	bool __fastcall GetUnnamed();
public:
	/* TObject.Create */ inline __fastcall TCreator() : System::TInterfacedObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TCreator() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TModuleCreator : public TCreator
{
	typedef TCreator inherited;
	
private:
	bool FHaveNames;
	System::UnicodeString FFormName;
	System::UnicodeString FImplFileName;
	void __fastcall GetNewModuleAndClassName(/* out */ System::UnicodeString &AFormName, /* out */ System::UnicodeString &AImplFileName);
	
protected:
	System::UnicodeString __fastcall GetCreatorType();
	HIDESBASE Toolsapi::_di_IOTAModule __fastcall GetOwner();
	System::UnicodeString __fastcall GetAncestorName();
	System::UnicodeString __fastcall GetImplFileName();
	System::UnicodeString __fastcall GetIntfFileName();
	System::UnicodeString __fastcall GetFormName();
	bool __fastcall GetMainForm();
	bool __fastcall GetShowForm();
	bool __fastcall GetShowSource();
	Toolsapi::_di_IOTAFile __fastcall NewFormFile(const System::UnicodeString FormIdent, const System::UnicodeString AncestorIdent);
	Toolsapi::_di_IOTAFile __fastcall NewImplSource(const System::UnicodeString ModuleIdent, const System::UnicodeString FormIdent, const System::UnicodeString AncestorIdent);
	Toolsapi::_di_IOTAFile __fastcall NewIntfSource(const System::UnicodeString ModuleIdent, const System::UnicodeString FormIdent, const System::UnicodeString AncestorIdent);
	void __fastcall FormCreated(const Toolsapi::_di_IOTAFormEditor FormEditor);
	virtual System::UnicodeString __fastcall GetModuleAndClassNamePrefix();
public:
	/* TObject.Create */ inline __fastcall TModuleCreator() : TCreator() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TModuleCreator() { }
	
private:
	void *__IOTAModuleCreator;	// Toolsapi::IOTAModuleCreator 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {6EDB9B9A-F57A-11D1-AB23-00C04FB16FB3}
	operator Toolsapi::_di_IOTAModuleCreator()
	{
		Toolsapi::_di_IOTAModuleCreator intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::IOTAModuleCreator*(void) { return (Toolsapi::IOTAModuleCreator*)&__IOTAModuleCreator; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {6EDB9B9E-F57A-11D1-AB23-00C04FB16FB3}
	operator Toolsapi::_di_IOTACreator()
	{
		Toolsapi::_di_IOTACreator intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::IOTACreator*(void) { return (Toolsapi::IOTACreator*)&__IOTAModuleCreator; }
	#endif
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Dscreators */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DSCREATORS)
using namespace Dscreators;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DscreatorsHPP
