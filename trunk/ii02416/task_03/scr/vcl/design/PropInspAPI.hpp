// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'PropInspAPI.pas' rev: 35.00 (Windows)

#ifndef PropinspapiHPP
#define PropinspapiHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <DesignIntf.hpp>
#include <ToolsAPI.hpp>
#include <System.IniFiles.hpp>

//-- user supplied -----------------------------------------------------------

namespace Propinspapi
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IPropInspSaveState;
typedef System::DelphiInterface<IPropInspSaveState> _di_IPropInspSaveState;
__interface DELPHIINTERFACE IPropListBoxSelection;
typedef System::DelphiInterface<IPropListBoxSelection> _di_IPropListBoxSelection;
__interface DELPHIINTERFACE IOTAPropInspPages;
typedef System::DelphiInterface<IOTAPropInspPages> _di_IOTAPropInspPages;
__interface DELPHIINTERFACE IOTAPropInspInstanceList;
typedef System::DelphiInterface<IOTAPropInspInstanceList> _di_IOTAPropInspInstanceList;
__interface DELPHIINTERFACE IOTAWidePropInspInstanceList;
typedef System::DelphiInterface<IOTAWidePropInspInstanceList> _di_IOTAWidePropInspInstanceList;
__interface DELPHIINTERFACE IOTAPropInspCategories;
typedef System::DelphiInterface<IOTAPropInspCategories> _di_IOTAPropInspCategories;
__interface DELPHIINTERFACE IOTAPropInspHotCommands;
typedef System::DelphiInterface<IOTAPropInspHotCommands> _di_IOTAPropInspHotCommands;
__interface DELPHIINTERFACE IOTAPropInspSelection;
typedef System::DelphiInterface<IOTAPropInspSelection> _di_IOTAPropInspSelection;
__interface DELPHIINTERFACE IOTASelectionNotifier;
typedef System::DelphiInterface<IOTASelectionNotifier> _di_IOTASelectionNotifier;
__interface DELPHIINTERFACE IOTASelectionNotifier160;
typedef System::DelphiInterface<IOTASelectionNotifier160> _di_IOTASelectionNotifier160;
__interface DELPHIINTERFACE IOTAPropInspServices100;
typedef System::DelphiInterface<IOTAPropInspServices100> _di_IOTAPropInspServices100;
__interface DELPHIINTERFACE INTAPropInspServices;
typedef System::DelphiInterface<INTAPropInspServices> _di_INTAPropInspServices;
__interface DELPHIINTERFACE IOTAPropInspServices160;
typedef System::DelphiInterface<IOTAPropInspServices160> _di_IOTAPropInspServices160;
__interface DELPHIINTERFACE IOTAPropInspServices;
typedef System::DelphiInterface<IOTAPropInspServices> _di_IOTAPropInspServices;
//-- type declarations -------------------------------------------------------
__interface  INTERFACE_UUID("{B4EB42CD-7616-409F-99ED-C38B40953E02}") IPropInspSaveState  : public System::IInterface 
{
	virtual void __fastcall SaveWindowState(System::Inifiles::TCustomIniFile* Desktop, bool isProject) = 0 ;
	virtual void __fastcall LoadWindowState(System::Inifiles::TCustomIniFile* Desktop) = 0 ;
};

enum DECLSPEC_DENUM TInspArrangeMode : unsigned char { iamByCategory, iamByName };

__interface  INTERFACE_UUID("{2C6EC290-6159-4D66-8C45-06EFA815106A}") IPropListBoxSelection  : public System::IInterface 
{
	virtual int __fastcall GetCount() = 0 ;
	virtual Designintf::_di_IProperty __fastcall GetCurrentSubItem() = 0 ;
	virtual Designintf::_di_IProperty __fastcall GetSubItem(const int Index) = 0 ;
	virtual int __fastcall GetSubItemCount() = 0 ;
	virtual Designintf::_di_IProperty __fastcall GetItem(const int Index) = 0 ;
	virtual void __fastcall SetCurrentSubItem(const Designintf::_di_IProperty Value) = 0 ;
	__property Designintf::_di_IProperty Items[const int Index] = {read=GetItem};
	__property int Count = {read=GetCount};
	__property Designintf::_di_IProperty CurrentSubItem = {read=GetCurrentSubItem, write=SetCurrentSubItem};
	__property int SubItemCount = {read=GetSubItemCount};
	__property Designintf::_di_IProperty SubItems[const int Index] = {read=GetSubItem};
};

__interface  INTERFACE_UUID("{A8CFD9BF-7A6C-4F99-879E-ADBA5C8FEC08}") IOTAPropInspPages  : public Toolsapi::IOTAStrings 
{
	virtual int __fastcall GetPageIndex() = 0 ;
	virtual void __fastcall SetPageIndex(const int Value) = 0 ;
	__property int PageIndex = {read=GetPageIndex, write=SetPageIndex};
};

__interface  INTERFACE_UUID("{394C9D2B-0925-460B-8678-1B1547AEC1A1}") IOTAPropInspInstanceList  : public Toolsapi::IOTAStrings 
{
	virtual System::UnicodeString __fastcall GetActiveName() = 0 ;
	virtual System::UnicodeString __fastcall GetActiveValue() = 0 ;
	virtual System::UnicodeString __fastcall GetHint() = 0 ;
	virtual int __fastcall GetItemIndex() = 0 ;
	virtual void __fastcall SetItemIndex(const int Value) = 0 ;
	__property System::UnicodeString ActiveName = {read=GetActiveName};
	__property System::UnicodeString ActiveValue = {read=GetActiveValue};
	__property System::UnicodeString Hint = {read=GetHint};
	__property int ItemIndex = {read=GetItemIndex, write=SetItemIndex};
};

__interface  INTERFACE_UUID("{561F40D1-38D0-4F4B-8AD2-F0582E4E2AD3}") IOTAWidePropInspInstanceList  : public System::IInterface 
{
	virtual System::WideString __fastcall GetWideActiveName() = 0 ;
	virtual System::WideString __fastcall GetWideActiveValue() = 0 ;
	virtual System::WideString __fastcall GetWideHint() = 0 ;
	virtual System::WideString __fastcall GetWideItem(const int Index) = 0 ;
	virtual void __fastcall SetWideItem(const int Index, const System::WideString Value) = 0 ;
	__property System::WideString WideActiveName = {read=GetWideActiveName};
	__property System::WideString WideActiveValue = {read=GetWideActiveValue};
	__property System::WideString WideHint = {read=GetWideHint};
	__property System::WideString WideItems[const int Index] = {read=GetWideItem, write=SetWideItem};
};

__interface  INTERFACE_UUID("{75F38883-A97D-4687-BD14-E14D6685D9B3}") IOTAPropInspCategories  : public Toolsapi::IOTAStrings 
{
	virtual void __fastcall ViewAll() = 0 ;
	virtual void __fastcall ToggleAll() = 0 ;
	virtual void __fastcall ViewNone() = 0 ;
};

__interface  INTERFACE_UUID("{550D14EA-78AC-4936-AC06-E084F10C1EE7}") IOTAPropInspHotCommands  : public Toolsapi::IOTAStrings 
{
	virtual void __fastcall CommandClicked(int Index) = 0 ;
	virtual bool __fastcall CommandEnabled(int Index) = 0 ;
};

__interface  INTERFACE_UUID("{0078EE6B-FB6D-4082-BB8A-189FD58395F6}") IOTAPropInspSelection  : public IPropListBoxSelection 
{
	virtual System::UnicodeString __fastcall GetActiveItem() = 0 ;
	virtual bool __fastcall GetExpandAll() = 0 ;
	virtual System::UnicodeString __fastcall GetExpandedItems() = 0 ;
	virtual TInspArrangeMode __fastcall GetArrangeMode() = 0 ;
	virtual bool __fastcall GetShowDescriptionPane() = 0 ;
	virtual bool __fastcall GetShowHotCommands() = 0 ;
	virtual System::UnicodeString __fastcall GetStatusText() = 0 ;
	virtual _di_IOTAPropInspCategories __fastcall GetCategories() = 0 ;
	virtual void __fastcall SetActiveItem(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetArrangeMode(const TInspArrangeMode Value) = 0 ;
	virtual void __fastcall SetExpandedItems(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall InvokeHelp(const Designintf::_di_IProperty Item) = 0 ;
	virtual bool __fastcall IsExpandable(const Designintf::_di_IProperty Item) = 0 ;
	virtual void __fastcall HandleActivation(bool Activating) = 0 ;
	__property bool ExpandAll = {read=GetExpandAll};
	__property System::UnicodeString ExpandedItems = {read=GetExpandedItems, write=SetExpandedItems};
	__property System::UnicodeString ActiveItem = {read=GetActiveItem, write=SetActiveItem};
	__property TInspArrangeMode ArrangeMode = {read=GetArrangeMode, write=SetArrangeMode};
	__property bool ShowDescriptionPane = {read=GetShowDescriptionPane};
	__property bool ShowHotCommands = {read=GetShowHotCommands};
	__property System::UnicodeString StatusText = {read=GetStatusText};
	__property _di_IOTAPropInspCategories Categories = {read=GetCategories};
};

__interface  INTERFACE_UUID("{3C2059B2-0C44-4C4C-9C9F-F325A509D9B4}") IOTASelectionNotifier  : public Toolsapi::IOTANotifier 
{
	virtual void __fastcall SelectionChanged(const _di_IOTAPropInspSelection NewSelection) = 0 ;
	virtual void __fastcall UpdateState() = 0 ;
};

__interface  INTERFACE_UUID("{157FFA94-DA86-4112-9C94-8DFAED6EAAF7}") IOTASelectionNotifier160  : public System::IInterface 
{
	virtual void __fastcall VolatileModified() = 0 ;
	virtual void __fastcall Expand() = 0 ;
};

__interface  INTERFACE_UUID("{84494824-29A8-4F78-B58D-A87A9A1333F8}") IOTAPropInspServices100  : public System::IInterface 
{
	virtual _di_IOTAPropInspSelection __fastcall GetSelection() = 0 ;
	virtual void __fastcall SetSelection(const _di_IOTAPropInspSelection Value) = 0 ;
	__property _di_IOTAPropInspSelection Selection = {read=GetSelection, write=SetSelection};
	virtual void __fastcall Modified() = 0 ;
	virtual void __fastcall UpdateState() = 0 ;
	virtual int __fastcall AddNotifier(const _di_IOTASelectionNotifier Notifier) = 0 ;
	virtual void __fastcall RemoveNotifier(const int Index) = 0 ;
	virtual void __fastcall LockSelection() = 0 ;
	virtual void __fastcall UnlockSelection() = 0 ;
};

__interface  INTERFACE_UUID("{5891E776-BAFA-4EA5-AEE6-E32F210B5326}") INTAPropInspServices  : public System::IInterface 
{
	virtual void __fastcall SelectObjects(System::Classes::TPersistent* const *Objects, const int Objects_High) = 0 ;
	virtual bool __fastcall ObjectsSelected(System::Classes::TPersistent* const *Objects, const int Objects_High) = 0 ;
};

__interface  INTERFACE_UUID("{15D694E6-E2D8-4BBA-A1D2-D8B6F8E8CCC2}") IOTAPropInspServices160  : public IOTAPropInspServices100 
{
	virtual void __fastcall VolatileModified() = 0 ;
	virtual void __fastcall Expand() = 0 ;
};

__interface  INTERFACE_UUID("{7EF7625C-42C0-434F-B538-76B12C3D8E7C}") IOTAPropInspServices  : public IOTAPropInspServices160 
{
	
};

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Propinspapi */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_PROPINSPAPI)
using namespace Propinspapi;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// PropinspapiHPP
