// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'PaletteAPI.pas' rev: 35.00 (Windows)

#ifndef PaletteapiHPP
#define PaletteapiHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <ToolsAPI.hpp>
#include <Vcl.Graphics.hpp>
#include <Winapi.ActiveX.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.GraphUtil.hpp>
#include <Vcl.ImageCollection.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Paletteapi
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE INTAPalettePaintIcon;
typedef System::DelphiInterface<INTAPalettePaintIcon> _di_INTAPalettePaintIcon;
__interface DELPHIINTERFACE INTAPalettePaintIcon160;
typedef System::DelphiInterface<INTAPalettePaintIcon160> _di_INTAPalettePaintIcon160;
__interface DELPHIINTERFACE INTAPalettePaintIcon280;
typedef System::DelphiInterface<INTAPalettePaintIcon280> _di_INTAPalettePaintIcon280;
__interface DELPHIINTERFACE IOTAPaletteDragAcceptor;
typedef System::DelphiInterface<IOTAPaletteDragAcceptor> _di_IOTAPaletteDragAcceptor;
__interface DELPHIINTERFACE IOTADesignerDragAcceptor;
typedef System::DelphiInterface<IOTADesignerDragAcceptor> _di_IOTADesignerDragAcceptor;
__interface DELPHIINTERFACE IOTACodeEditorDragAcceptor;
typedef System::DelphiInterface<IOTACodeEditorDragAcceptor> _di_IOTACodeEditorDragAcceptor;
__interface DELPHIINTERFACE IOTAPaletteDragDropOp;
typedef System::DelphiInterface<IOTAPaletteDragDropOp> _di_IOTAPaletteDragDropOp;
__interface DELPHIINTERFACE IOTAPaletteOleDragDropOp;
typedef System::DelphiInterface<IOTAPaletteOleDragDropOp> _di_IOTAPaletteOleDragDropOp;
__interface DELPHIINTERFACE IOTAPaletteCursor;
typedef System::DelphiInterface<IOTAPaletteCursor> _di_IOTAPaletteCursor;
__interface DELPHIINTERFACE IOTABasePaletteItem270;
typedef System::DelphiInterface<IOTABasePaletteItem270> _di_IOTABasePaletteItem270;
__interface DELPHIINTERFACE IOTABasePaletteItem280;
typedef System::DelphiInterface<IOTABasePaletteItem280> _di_IOTABasePaletteItem280;
__interface DELPHIINTERFACE IOTABasePaletteItem;
typedef System::DelphiInterface<IOTABasePaletteItem> _di_IOTABasePaletteItem;
__interface DELPHIINTERFACE IOTAGetPaletteItem;
typedef System::DelphiInterface<IOTAGetPaletteItem> _di_IOTAGetPaletteItem;
__interface DELPHIINTERFACE IOTAExecutePaletteItem;
typedef System::DelphiInterface<IOTAExecutePaletteItem> _di_IOTAExecutePaletteItem;
__interface DELPHIINTERFACE IOTAComponentPaletteItem;
typedef System::DelphiInterface<IOTAComponentPaletteItem> _di_IOTAComponentPaletteItem;
__interface DELPHIINTERFACE IOTAPaletteGroup;
typedef System::DelphiInterface<IOTAPaletteGroup> _di_IOTAPaletteGroup;
__interface DELPHIINTERFACE IOTAPaletteNotifier;
typedef System::DelphiInterface<IOTAPaletteNotifier> _di_IOTAPaletteNotifier;
struct TOTAPaletteColorItem;
struct TOTAPaletteButtonColors;
struct TOTAPaletteOptions;
__interface DELPHIINTERFACE IOTAPaletteColorScheme;
typedef System::DelphiInterface<IOTAPaletteColorScheme> _di_IOTAPaletteColorScheme;
__interface DELPHIINTERFACE IOTAPaletteServices270;
typedef System::DelphiInterface<IOTAPaletteServices270> _di_IOTAPaletteServices270;
__interface DELPHIINTERFACE IOTAPaletteServices280;
typedef System::DelphiInterface<IOTAPaletteServices280> _di_IOTAPaletteServices280;
__interface DELPHIINTERFACE IOTAPaletteServices;
typedef System::DelphiInterface<IOTAPaletteServices> _di_IOTAPaletteServices;
__interface DELPHIINTERFACE INTAPaletteContextMenu;
typedef System::DelphiInterface<INTAPaletteContextMenu> _di_INTAPaletteContextMenu;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TNTAPaintIconSize : unsigned char { pi16x16, pi24x24, pi32x32, pi48x48, pi64x64, pi128x128 };

__interface  INTERFACE_UUID("{D9BAD01A-99D9-4661-A470-90C7BC743DC9}") INTAPalettePaintIcon  : public System::IInterface 
{
	virtual void __fastcall Paint(Vcl::Graphics::TCanvas* const Canvas, const int X, const int Y, const TNTAPaintIconSize IconSize) = 0 ;
};

__interface  INTERFACE_UUID("{EAF90D7D-0C59-4B90-AF44-EE525719EEFC}") INTAPalettePaintIcon160  : public INTAPalettePaintIcon 
{
	HIDESBASE virtual void __fastcall Paint(Vcl::Graphics::TCanvas* const Canvas, const int X, const int Y, const TNTAPaintIconSize IconSize, bool Enabled) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{C268AB62-C01C-4205-80AC-72F92CEA90DB}") INTAPalettePaintIcon280  : public INTAPalettePaintIcon160 
{
	virtual int __fastcall LoadIconFromResource() = 0 ;
	HIDESBASE virtual void __fastcall Paint(Vcl::Graphics::TCanvas* const Canvas, const int X, const int Y, const int AHeight, bool Enabled, bool AThreadLoading) = 0 /* overload */;
};

enum DECLSPEC_DENUM TPalDragState : unsigned char { pdsDragEnter, pdsDragLeave, pdsDragMove };

__interface  INTERFACE_UUID("{44E0BDCA-EEDD-45A5-8170-A764D9E26056}") IOTAPaletteDragAcceptor  : public System::IInterface 
{
	virtual NativeUInt __fastcall GetHandle() = 0 ;
	__property NativeUInt Handle = {read=GetHandle};
};

__interface  INTERFACE_UUID("{0047B6A0-D238-4627-8EBD-9F66A57CF2F5}") IOTADesignerDragAcceptor  : public IOTAPaletteDragAcceptor 
{
	
};

__interface  INTERFACE_UUID("{7A8E3301-46A6-4226-9B8F-0BCEC7E9E801}") IOTACodeEditorDragAcceptor  : public IOTAPaletteDragAcceptor 
{
	virtual System::TObject* __fastcall GetEditorControl() = 0 ;
	__property System::TObject* EditorControl = {read=GetEditorControl};
};

__interface  INTERFACE_UUID("{A6364D92-37AB-4C39-ACA3-4CB1F8BD0C94}") IOTAPaletteDragDropOp  : public System::IInterface 
{
	virtual void __fastcall DragOver(_di_IOTAPaletteDragAcceptor Target, int X, int Y, TPalDragState State, bool &Accept) = 0 ;
	virtual void __fastcall DragDrop(_di_IOTAPaletteDragAcceptor Target, int X, int Y) = 0 ;
};

__interface  INTERFACE_UUID("{5B524357-BB75-4C8A-B88F-954075A60FFD}") IOTAPaletteOleDragDropOp  : public System::IInterface 
{
	virtual tagFORMATETC __fastcall GetFormatRec() = 0 ;
	virtual bool __fastcall QueryGetData(const tagFORMATETC &SourceFormat) = 0 ;
	virtual bool __fastcall GetData(const tagFORMATETC &SourceFormat, /* out */ tagSTGMEDIUM &Medium) = 0 ;
};

__interface  INTERFACE_UUID("{26DDEB04-1FFC-45B0-98E7-02AD8706AF70}") IOTAPaletteCursor  : public System::IInterface 
{
	virtual bool __fastcall SetCursor() = 0 ;
};

__interface  INTERFACE_UUID("{72808CFB-B7F9-4598-A3FA-310DA25B700D}") IOTABasePaletteItem270  : public System::IInterface 
{
	virtual bool __fastcall GetCanDelete() = 0 ;
	virtual bool __fastcall GetEnabled() = 0 ;
	virtual System::UnicodeString __fastcall GetHelpName() = 0 ;
	virtual System::UnicodeString __fastcall GetHintText() = 0 ;
	virtual System::UnicodeString __fastcall GetIDString() = 0 ;
	virtual System::UnicodeString __fastcall GetName() = 0 ;
	virtual bool __fastcall GetVisible() = 0 ;
	virtual void __fastcall SetEnabled(bool Value) = 0 ;
	virtual void __fastcall SetHelpName(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetName(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetVisible(const bool Value) = 0 ;
	virtual void __fastcall SetHintText(const System::UnicodeString Value) = 0 ;
	__property bool CanDelete = {read=GetCanDelete};
	__property bool Enabled = {read=GetEnabled};
	__property System::UnicodeString HelpName = {read=GetHelpName, write=SetHelpName};
	__property System::UnicodeString HintText = {read=GetHintText, write=SetHintText};
	__property System::UnicodeString IDString = {read=GetIDString};
	__property System::UnicodeString Name = {read=GetName, write=SetName};
	__property bool Visible = {read=GetVisible, write=SetVisible};
	virtual void __fastcall Execute() = 0 ;
	virtual void __fastcall Delete() = 0 ;
};

__interface  INTERFACE_UUID("{6FC107FF-449B-4D65-A163-513843770F87}") IOTABasePaletteItem280  : public IOTABasePaletteItem270 
{
	virtual int __fastcall GetImageIndex() = 0 ;
	virtual void __fastcall SetImageIndex(const int Value) = 0 ;
	__property int ImageIndex = {read=GetImageIndex, write=SetImageIndex};
};

__interface  INTERFACE_UUID("{9CAEBEBF-6BFB-4E9A-B5E7-C3146DEFA6E8}") IOTABasePaletteItem  : public IOTABasePaletteItem280 
{
	
};

__interface  INTERFACE_UUID("{ED77C99B-5994-4C8B-92BB-CB72B3BEEBD9}") IOTAGetPaletteItem  : public System::IInterface 
{
	virtual _di_IOTABasePaletteItem __fastcall GetPaletteItem() = 0 ;
};

__interface  INTERFACE_UUID("{70FAFCB8-EE3D-487F-B546-00E002AA7027}") IOTAExecutePaletteItem  : public System::IInterface 
{
	virtual void __fastcall ExecutePaletteItem(_di_IOTABasePaletteItem Item) = 0 ;
};

__interface  INTERFACE_UUID("{5A1A13FD-48B6-4A76-BB3F-374102172767}") IOTAComponentPaletteItem  : public IOTABasePaletteItem 
{
	virtual void __fastcall SetPackageName(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetClassName(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetUnitName(const System::UnicodeString Value) = 0 ;
	virtual System::UnicodeString __fastcall GetClassName() = 0 ;
	virtual System::UnicodeString __fastcall GetPackageName() = 0 ;
	virtual System::UnicodeString __fastcall GetUnitName() = 0 ;
	__property System::UnicodeString ClassName = {read=GetClassName, write=SetClassName};
	__property System::UnicodeString PackageName = {read=GetPackageName, write=SetPackageName};
	__property System::UnicodeString UnitName = {read=GetUnitName, write=SetUnitName};
};

__interface  INTERFACE_UUID("{C7593CE8-1A0B-409F-B21F-84D983593F77}") IOTAPaletteGroup  : public IOTABasePaletteItem 
{
	
public:
	_di_IOTABasePaletteItem operator[](const int Index) { return this->Items[Index]; }
	virtual int __fastcall GetCount() = 0 ;
	virtual _di_IOTABasePaletteItem __fastcall GetItem(const int Index) = 0 ;
	__property int Count = {read=GetCount};
	__property _di_IOTABasePaletteItem Items[const int Index] = {read=GetItem/*, default*/};
	virtual _di_IOTAPaletteGroup __fastcall AddGroup(const System::UnicodeString Name, const System::UnicodeString IDString) = 0 ;
	virtual int __fastcall AddItem(const _di_IOTABasePaletteItem Item) = 0 ;
	virtual void __fastcall Clear() = 0 ;
	virtual _di_IOTABasePaletteItem __fastcall FindItem(const System::UnicodeString IDString, bool Recurse) = 0 ;
	virtual _di_IOTABasePaletteItem __fastcall FindItemByName(const System::UnicodeString Name, bool Recurse) = 0 ;
	virtual _di_IOTAPaletteGroup __fastcall FindItemGroup(const System::UnicodeString IDString) = 0 ;
	virtual _di_IOTAPaletteGroup __fastcall FindItemGroupByName(const System::UnicodeString Name) = 0 ;
	virtual void __fastcall InsertItem(const int Index, const _di_IOTABasePaletteItem Item) = 0 ;
	virtual int __fastcall IndexOf(const _di_IOTABasePaletteItem Item) = 0 ;
	virtual void __fastcall Move(const int CurIndex, const int NewIndex) = 0 ;
	virtual bool __fastcall RemoveItem(const System::UnicodeString IDString, bool Recurse) = 0 ;
};

__interface  INTERFACE_UUID("{6A3D2F2D-19BD-487E-A715-F1E7FECF8791}") IOTAPaletteNotifier  : public Toolsapi::IOTANotifier 
{
	virtual void __fastcall ItemAdded(const _di_IOTAPaletteGroup Group, const _di_IOTABasePaletteItem Item) = 0 ;
	virtual void __fastcall ItemRemoved(const _di_IOTAPaletteGroup Group, const _di_IOTABasePaletteItem Item) = 0 ;
	virtual void __fastcall SelectedToolChanged(const _di_IOTABasePaletteItem Tool) = 0 ;
	virtual void __fastcall BeginUpdate() = 0 ;
	virtual void __fastcall EndUpdate() = 0 ;
};

struct DECLSPEC_DRECORD TOTAPaletteColorItem
{
public:
	System::Uitypes::TColor StartColor;
	System::Uitypes::TColor EndColor;
	System::Uitypes::TColor TextColor;
};


struct DECLSPEC_DRECORD TOTAPaletteButtonColors
{
public:
	System::Uitypes::TColor RegularColor;
	System::Uitypes::TColor SelectedColor;
	System::Uitypes::TColor HotColor;
};


struct DECLSPEC_DRECORD TOTAPaletteOptions
{
public:
	System::Uitypes::TColor BackgroundColor;
	System::Uitypes::TColor BackgroundGradientColor;
	bool BoldCaptions;
	bool CaptionOnlyBorder;
	bool UsePlusMinus;
	Vcl::Graphutil::TGradientDirection CategoryGradientDirection;
	Vcl::Graphutil::TGradientDirection BackgroundGradientDirection;
};


__interface  INTERFACE_UUID("{75D3424A-6518-4465-B940-E004D7FFBB0C}") IOTAPaletteColorScheme  : public System::IInterface 
{
	
public:
	TOTAPaletteColorItem operator[](const int Index) { return this->Colors[Index]; }
	virtual TOTAPaletteButtonColors __fastcall GetButtonColors() = 0 ;
	virtual TOTAPaletteColorItem __fastcall GetColor(const int Index) = 0 ;
	virtual int __fastcall GetCount() = 0 ;
	virtual System::UnicodeString __fastcall GetIDString() = 0 ;
	virtual System::UnicodeString __fastcall GetName() = 0 ;
	virtual TOTAPaletteOptions __fastcall GetOptions() = 0 ;
	__property TOTAPaletteButtonColors ButtonColors = {read=GetButtonColors};
	__property TOTAPaletteOptions Options = {read=GetOptions};
	__property TOTAPaletteColorItem Colors[const int Index] = {read=GetColor/*, default*/};
	__property int Count = {read=GetCount};
	__property System::UnicodeString IDString = {read=GetIDString};
	__property System::UnicodeString Name = {read=GetName};
};

__interface  INTERFACE_UUID("{DB22AF92-DFC1-40DD-B7A4-B1FE77158B74}") IOTAPaletteServices270  : public System::IInterface 
{
	virtual void __fastcall SetSelectedTool(const _di_IOTABasePaletteItem Value) = 0 ;
	virtual _di_IOTAPaletteGroup __fastcall GetBaseGroup() = 0 ;
	virtual _di_IOTABasePaletteItem __fastcall GetSelectedTool() = 0 ;
	virtual int __fastcall AddNotifier(const _di_IOTAPaletteNotifier Notifier) = 0 ;
	__property _di_IOTAPaletteGroup BaseGroup = {read=GetBaseGroup};
	virtual void __fastcall BeginUpdate() = 0 ;
	virtual void __fastcall EndUpdate() = 0 ;
	virtual void __fastcall ItemAdded(const _di_IOTAPaletteGroup Group, const _di_IOTABasePaletteItem Item) = 0 ;
	virtual void __fastcall ItemRemoved(const _di_IOTAPaletteGroup Group, const _di_IOTABasePaletteItem Item) = 0 ;
	virtual void __fastcall Modified() = 0 ;
	virtual int __fastcall RegisterDragAcceptor(const _di_IOTAPaletteDragAcceptor Acceptor) = 0 ;
	virtual void __fastcall UnRegisterDragAcceptor(const int Index) = 0 ;
	virtual System::Classes::_di_IInterfaceList __fastcall GetDragAcceptors() = 0 ;
	virtual int __fastcall RegisterColorScheme(const _di_IOTAPaletteColorScheme ColorScheme) = 0 ;
	virtual void __fastcall UnRegisterColorScheme(const int Index) = 0 ;
	virtual System::Classes::_di_IInterfaceList __fastcall GetColorSchemes() = 0 ;
	virtual void __fastcall RemoveNotifier(const int Index) = 0 ;
	__property _di_IOTABasePaletteItem SelectedTool = {read=GetSelectedTool, write=SetSelectedTool};
	virtual void __fastcall AddPaletteState(const System::UnicodeString State) = 0 ;
	virtual void __fastcall RemovePaletteState(const System::UnicodeString State) = 0 ;
	virtual void __fastcall AddPaletteDesignerState(const System::UnicodeString State) = 0 ;
	virtual bool __fastcall ContainsPaletteState(const System::UnicodeString State) = 0 ;
	virtual System::UnicodeString __fastcall GetPaletteState() = 0 ;
};

__interface  INTERFACE_UUID("{968F2C45-81D4-4B86-9AB7-F70FBEF51973}") IOTAPaletteServices280  : public IOTAPaletteServices270 
{
	virtual void __fastcall SetImageCollection(Vcl::Imagecollection::TImageCollection* const AValue) = 0 ;
	virtual Vcl::Imagecollection::TImageCollection* __fastcall GetImageCollection() = 0 ;
	__property Vcl::Imagecollection::TImageCollection* ImageCollection = {read=GetImageCollection, write=SetImageCollection};
};

__interface  INTERFACE_UUID("{6963F71C-0A3F-4598-B6F6-9574CE0E6847}") IOTAPaletteServices  : public IOTAPaletteServices280 
{
	
};

__interface  INTERFACE_UUID("{B58639BC-4332-45BF-A79E-D4977EE7E024}") INTAPaletteContextMenu  : public System::IInterface 
{
	
public:
	Vcl::Menus::TMenuItem* operator[](const int Index) { return this->ContextMenuItems[Index]; }
	virtual int __fastcall GetCount() = 0 ;
	virtual Vcl::Menus::TMenuItem* __fastcall GetContextMenuItem(const int Index) = 0 ;
	virtual void __fastcall AddContextMenuItem(Vcl::Menus::TMenuItem* const MenuItem) = 0 ;
	virtual void __fastcall RemoveContextMenuItem(Vcl::Menus::TMenuItem* const MenuItem) = 0 ;
	__property Vcl::Menus::TMenuItem* ContextMenuItems[const int Index] = {read=GetContextMenuItem/*, default*/};
	__property int Count = {read=GetCount};
};

//-- var, const, procedure ---------------------------------------------------
#define cPSCodeEditorActive L"CodeEditorActive"
#define cPSDesignerActive L"DesignerActive"
extern DELPHI_PACKAGE System::StaticArray<int, 6> cNTAPaintIconSizes;
}	/* namespace Paletteapi */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_PALETTEAPI)
using namespace Paletteapi;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// PaletteapiHPP
