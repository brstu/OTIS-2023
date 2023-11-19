// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DesignMenus.pas' rev: 35.00 (Windows)

#ifndef DesignmenusHPP
#define DesignmenusHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Types.hpp>
#include <System.Classes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Designmenus
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IMenuItems;
typedef System::DelphiInterface<IMenuItems> _di_IMenuItems;
__interface DELPHIINTERFACE IMenu;
typedef System::DelphiInterface<IMenu> _di_IMenu;
__interface DELPHIINTERFACE IMainMenu;
typedef System::DelphiInterface<IMainMenu> _di_IMainMenu;
__interface DELPHIINTERFACE IPopupMenu;
typedef System::DelphiInterface<IPopupMenu> _di_IPopupMenu;
__interface DELPHIINTERFACE IMenuItem;
typedef System::DelphiInterface<IMenuItem> _di_IMenuItem;
__interface DELPHIINTERFACE IMenuItem2;
typedef System::DelphiInterface<IMenuItem2> _di_IMenuItem2;
__interface DELPHIINTERFACE IDesignLocalMenu140;
typedef System::DelphiInterface<IDesignLocalMenu140> _di_IDesignLocalMenu140;
__interface DELPHIINTERFACE IDesignLocalMenu;
typedef System::DelphiInterface<IDesignLocalMenu> _di_IDesignLocalMenu;
//-- type declarations -------------------------------------------------------
__interface  INTERFACE_UUID("{C9CC6C38-C96A-4514-8D6F-1D121727BFAF}") IMenuItems  : public System::IInterface 
{
	virtual _di_IMenuItem __fastcall GetItem(int Index) = 0 ;
	virtual bool __fastcall SameAs(const System::_di_IInterface AItem) = 0 ;
	virtual _di_IMenuItem __fastcall Find(const System::WideString ACaption) = 0 ;
	virtual _di_IMenuItem __fastcall FindByName(const System::UnicodeString AName) = 0 ;
	virtual int __fastcall Count() = 0 ;
	__property _di_IMenuItem Items[int Index] = {read=GetItem};
	virtual void __fastcall Clear() = 0 ;
	virtual _di_IMenuItem __fastcall AddItem(const System::WideString ACaption, System::Classes::TShortCut AShortCut, bool AChecked, bool AEnabled, System::Classes::TNotifyEvent AOnClick = 0x0, System::Classes::THelpContext hCtx = (System::Classes::THelpContext)(0x0), const System::UnicodeString AName = System::UnicodeString()) = 0 /* overload */;
	virtual _di_IMenuItem __fastcall AddItem(System::Classes::TBasicAction* AAction, const System::UnicodeString AName = System::UnicodeString()) = 0 /* overload */;
	virtual _di_IMenuItem __fastcall InsertItem(const System::WideString ACaption, System::Classes::TShortCut AShortCut, bool AChecked, bool AEnabled, System::Classes::TNotifyEvent AOnClick = 0x0, System::Classes::THelpContext hCtx = (System::Classes::THelpContext)(0x0), const System::UnicodeString AName = System::UnicodeString()) = 0 /* overload */;
	virtual _di_IMenuItem __fastcall InsertItem(int Index, const System::WideString ACaption, System::Classes::TShortCut AShortCut, bool AChecked, bool AEnabled, System::Classes::TNotifyEvent AOnClick = 0x0, System::Classes::THelpContext hCtx = (System::Classes::THelpContext)(0x0), const System::UnicodeString AName = System::UnicodeString()) = 0 /* overload */;
	virtual _di_IMenuItem __fastcall InsertItem(System::Classes::TBasicAction* AAction, const System::UnicodeString AName = System::UnicodeString()) = 0 /* overload */;
	virtual _di_IMenuItem __fastcall InsertItem(int Index, System::Classes::TBasicAction* AAction, const System::UnicodeString AName = System::UnicodeString()) = 0 /* overload */;
	virtual _di_IMenuItem __fastcall AddLine(const System::UnicodeString AName = System::UnicodeString()) = 0 ;
	virtual _di_IMenuItem __fastcall InsertLine(const System::UnicodeString AName = System::UnicodeString()) = 0 /* overload */;
	virtual _di_IMenuItem __fastcall InsertLine(int Index, const System::UnicodeString AName = System::UnicodeString()) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{0993FAE4-17E2-4EB7-81DF-26634D7F9E16}") IMenu  : public System::IInterface 
{
	virtual _di_IMenuItems __fastcall Items() = 0 ;
};

__interface  INTERFACE_UUID("{5D137DC1-73F4-48CB-8351-E14A369AE924}") IMainMenu  : public IMenu 
{
	
};

__interface  INTERFACE_UUID("{E2E9ED8C-4D54-482B-AC62-23F1CEBFE414}") IPopupMenu  : public IMenu 
{
	virtual void __fastcall Popup(int X, int Y) = 0 ;
	virtual System::Classes::TComponent* __fastcall PopupComponent() = 0 ;
};

__interface  INTERFACE_UUID("{DAF029E1-9592-4B07-A450-A10056A2B9B5}") IMenuItem  : public IMenuItems 
{
	virtual System::WideString __fastcall GetCaption() = 0 ;
	virtual void __fastcall SetCaption(const System::WideString ACaption) = 0 ;
	virtual bool __fastcall GetChecked() = 0 ;
	virtual void __fastcall SetChecked(bool AChecked) = 0 ;
	virtual bool __fastcall GetEnabled() = 0 ;
	virtual void __fastcall SetEnabled(bool AEnabled) = 0 ;
	virtual System::Byte __fastcall GetGroupIndex() = 0 ;
	virtual void __fastcall SetGroupIndex(System::Byte AGroupIndex) = 0 ;
	virtual System::Classes::THelpContext __fastcall GetHelpContext() = 0 ;
	virtual void __fastcall SetHelpContext(System::Classes::THelpContext AHelpContext) = 0 ;
	virtual System::UnicodeString __fastcall GetHint() = 0 ;
	virtual void __fastcall SetHint(const System::UnicodeString AHint) = 0 ;
	virtual bool __fastcall GetRadioItem() = 0 ;
	virtual void __fastcall SetRadioItem(bool ARadioItem) = 0 ;
	virtual System::Classes::TShortCut __fastcall GetShortCut() = 0 ;
	virtual void __fastcall SetShortCut(System::Classes::TShortCut AShortCut) = 0 ;
	virtual int __fastcall GetTag() = 0 ;
	virtual void __fastcall SetTag(int AValue) = 0 ;
	virtual bool __fastcall GetVisible() = 0 ;
	virtual void __fastcall SetVisible(bool AVisible) = 0 ;
	virtual System::Classes::TComponentName __fastcall Name() = 0 ;
	virtual int __fastcall MenuIndex() = 0 ;
	virtual _di_IMenuItem __fastcall Parent() = 0 ;
	virtual bool __fastcall HasParent() = 0 ;
	virtual bool __fastcall IsLine() = 0 ;
	__property System::WideString Caption = {read=GetCaption, write=SetCaption};
	__property bool Checked = {read=GetChecked, write=SetChecked};
	__property bool Enabled = {read=GetEnabled, write=SetEnabled};
	__property System::Byte GroupIndex = {read=GetGroupIndex, write=SetGroupIndex};
	__property System::Classes::THelpContext HelpContext = {read=GetHelpContext, write=SetHelpContext};
	__property System::UnicodeString Hint = {read=GetHint, write=SetHint};
	__property bool RadioItem = {read=GetRadioItem, write=SetRadioItem};
	__property System::Classes::TShortCut ShortCut = {read=GetShortCut, write=SetShortCut};
	__property int Tag = {read=GetTag, write=SetTag};
	__property bool Visible = {read=GetVisible, write=SetVisible};
};

__interface  INTERFACE_UUID("{6F462D74-C6F5-473C-AFE1-42564CC71B9F}") IMenuItem2  : public IMenuItem 
{
	virtual void __fastcall Click() = 0 ;
};

enum DECLSPEC_DENUM TLocalMenuType : unsigned char { lmBase, lmModule, lmSelection, lmComponent };

typedef System::Set<TLocalMenuType, TLocalMenuType::lmBase, TLocalMenuType::lmComponent> TLocalMenuTypes;

__interface  INTERFACE_UUID("{70ED1A8D-6275-4BC8-813C-F6D9066FD6BB}") IDesignLocalMenu140  : public System::IInterface 
{
	virtual _di_IPopupMenu __fastcall BuildLocalMenu(TLocalMenuTypes Allow = (TLocalMenuTypes() << TLocalMenuType::lmBase << TLocalMenuType::lmModule << TLocalMenuType::lmSelection << TLocalMenuType::lmComponent )) = 0 /* overload */;
	virtual void __fastcall InvokeLocalMenu(int X, int Y) = 0 ;
};

__interface  INTERFACE_UUID("{22A561B0-21FF-43F7-BF53-C23C6028ABD1}") IDesignLocalMenu  : public IDesignLocalMenu140 
{
	HIDESBASE virtual _di_IPopupMenu __fastcall BuildLocalMenu(const System::_di_IInterface Selections, TLocalMenuTypes Allow = (TLocalMenuTypes() << TLocalMenuType::lmBase << TLocalMenuType::lmModule << TLocalMenuType::lmSelection << TLocalMenuType::lmComponent )) = 0 /* overload */;
};

//-- var, const, procedure ---------------------------------------------------
#define CNoLocalMenus System::Set<System::Byte>()
#define CAllLocalMenus (System::Set<TLocalMenuType, TLocalMenuType::lmBase, TLocalMenuType::lmComponent>() << TLocalMenuType::lmBase << TLocalMenuType::lmModule << TLocalMenuType::lmSelection << TLocalMenuType::lmComponent )
extern DELPHI_PACKAGE System::StaticArray<TLocalMenuTypes, 2> CLocalMenusIf;
}	/* namespace Designmenus */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DESIGNMENUS)
using namespace Designmenus;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DesignmenusHPP
