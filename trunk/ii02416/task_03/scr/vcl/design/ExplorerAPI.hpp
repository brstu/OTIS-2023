// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ExplorerAPI.pas' rev: 35.00 (Windows)

#ifndef ExplorerapiHPP
#define ExplorerapiHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <ToolsAPI.hpp>
#include <System.Classes.hpp>

//-- user supplied -----------------------------------------------------------
DEFINE_GUID(IID_IOTAExplorerLocalMenu, 0xF116708D,0x95F7,0x463D,0xA1,0x12,0x3C,0x7D,0x15,0xF9,0x78,0xD1);
DEFINE_GUID(IID_IOTAExplorerMenuItemCreatorNotifier, 0x18AD7EB7,0x1216,0x41B2,0xA1,0x22,0x4E,0xB2,0x9D,0x98,0x86,0xF3);
DEFINE_GUID(IID_IOTAExplorer, 0xB6EB677B,0x0623,0x4AC2,0xB3,0xD5,0x30,0x37,0xE3,0xC7,0x8C,0xD7);
DEFINE_GUID(IID_IOTAExplorerServices, 0x232405C9,0x4C2B,0x4E2B,0xAB,0xB3,0x00,0xB3,0x71,0x34,0x07,0x65);

namespace Explorerapi
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IOTAExplorerLocalMenu;
typedef System::DelphiInterface<IOTAExplorerLocalMenu> _di_IOTAExplorerLocalMenu;
__interface DELPHIINTERFACE IOTAExplorerMenuItemCreatorNotifier;
typedef System::DelphiInterface<IOTAExplorerMenuItemCreatorNotifier> _di_IOTAExplorerMenuItemCreatorNotifier;
__interface DELPHIINTERFACE IOTAExplorer;
typedef System::DelphiInterface<IOTAExplorer> _di_IOTAExplorer;
__interface DELPHIINTERFACE IOTAExplorerServices;
typedef System::DelphiInterface<IOTAExplorerServices> _di_IOTAExplorerServices;
//-- type declarations -------------------------------------------------------
__interface  INTERFACE_UUID("{F116708D-95F7-463D-A112-3C7D15F978D1}") IOTAExplorerLocalMenu  : public Toolsapi::IOTALocalMenu 
{
	virtual void __fastcall Execute(const System::Classes::_di_IInterfaceList MenuContextList) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{18AD7EB7-1216-41B2-A122-4EB29D9886F3}") IOTAExplorerMenuItemCreatorNotifier  : public Toolsapi::IOTANotifier 
{
	virtual void __fastcall AddMenu(System::Classes::TStrings* const IdentList, const System::Classes::_di_IInterfaceList ExplorerMenuList) = 0 ;
};

__interface  INTERFACE_UUID("{B6EB677B-0623-4AC2-B3D5-3037E3C78CD7}") IOTAExplorer  : public System::IInterface 
{
	virtual System::UnicodeString __fastcall GetCaption() = 0 ;
	virtual void __fastcall SetCaption(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall Show() = 0 ;
	__property System::UnicodeString Caption = {read=GetCaption, write=SetCaption};
};

__interface  INTERFACE_UUID("{232405C9-4C2B-4E2B-ABB3-00B371340765}") IOTAExplorerServices  : public System::IInterface 
{
	virtual _di_IOTAExplorer __fastcall CreateExplorer(const System::UnicodeString Caption, const System::UnicodeString Identifier, const _di_IOTAExplorerMenuItemCreatorNotifier ExplorerMenuItem = _di_IOTAExplorerMenuItemCreatorNotifier()) = 0 ;
};

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Explorerapi */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_EXPLORERAPI)
using namespace Explorerapi;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// ExplorerapiHPP
