// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ToolUtils.pas' rev: 35.00 (Windows)

#ifndef ToolutilsHPP
#define ToolutilsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <DesignIntf.hpp>

//-- user supplied -----------------------------------------------------------

namespace Toolutils
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TOTAClass;
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TIUnknownEvent)(System::_di_IInterface Unk, System::_di_IInterface UnkParam);

#pragma pack(push,4)
class PASCALIMPLEMENTATION TOTAClass : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
protected:
	System::Classes::_di_IInterfaceList FNotifyList;
	void __fastcall NotifyDestroyed(System::_di_IInterface Unk, System::_di_IInterface UnkParam);
	System::TObject* __fastcall GetInstance();
	
public:
	__fastcall TOTAClass();
	virtual void __fastcall BeforeDestruction();
	__property System::Classes::_di_IInterfaceList NotifyList = {read=FNotifyList};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TOTAClass() { }
	
private:
	void *__IImplementation;	// Designintf::IImplementation 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {F9D448F2-50BC-11D1-9FB5-0020AF3D82DA}
	operator Designintf::_di_IImplementation()
	{
		Designintf::_di_IImplementation intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Designintf::IImplementation*(void) { return (Designintf::IImplementation*)&__IImplementation; }
	#endif
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE int __fastcall AddToList(const System::Classes::_di_IInterfaceList List, System::_di_IInterface Item);
extern DELPHI_PACKAGE void __fastcall ForEach(const System::Classes::_di_IInterfaceList List, TIUnknownEvent Event, const System::_di_IInterface UnkParam);
extern DELPHI_PACKAGE bool __fastcall PlatformMatch(System::UnicodeString ProfilePlatform, System::UnicodeString ProjectPlatform);
extern DELPHI_PACKAGE void __fastcall DecryptDeviceArtWork(System::Classes::TStream* const InStream, System::Classes::TStream* const OutStream);
}	/* namespace Toolutils */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_TOOLUTILS)
using namespace Toolutils;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// ToolutilsHPP
