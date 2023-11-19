// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ToolsAPI.WelcomePage.pas' rev: 35.00 (Windows)

#ifndef Toolsapi_WelcomepageHPP
#define Toolsapi_WelcomepageHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <System.Types.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.ImageCollection.hpp>
#include <Vcl.Graphics.hpp>

//-- user supplied -----------------------------------------------------------
DEFINE_GUID(IID_INTAWelcomePageNotifier280,0xCD8AA3EB,0xAB59,0x47C2,0x92,0x64,0xA6,0x14,0x73,0x69,0xB9,0xA6);
DEFINE_GUID(IID_INTAWelcomePageNotifier,0x1007377B,0x1266,0x47D5,0xAB,0xEA,0xAC,0xDE,0x94,0x2C,0xD6,0xE9);
DEFINE_GUID(IID_INTAWelcomePagePluginNotifier280,0xB157D07D,0x3332,0x41E6,0x85,0xA9,0x5E,0x01,0x21,0x0F,0x38,0x56);
DEFINE_GUID(IID_INTAWelcomePagePluginNotifier,0x38B3EA34,0xD832,0x48D0,0xAF,0x84,0x74,0x49,0xEB,0x28,0xD2,0x21);
DEFINE_GUID(IID_INTAWelcomePageModelItemData,0x7800EF34,0xDBFC,0x487E,0x87,0x9C,0x9E,0xFC,0xB6,0xEA,0x42,0xB1);
DEFINE_GUID(IID_INTAWelcomePageModelAdjustedItemData280,0xB28DD62B,0x2FF8,0x4D28,0x88,0xB0,0x7E,0x8A,0x04,0xD1,0xFF,0x33);
DEFINE_GUID(IID_INTAWelcomePageModelAdjustedItemData,0x7DA748EA,0x7E34,0x4D58,0x80,0xDF,0x48,0x07,0xE5,0x76,0x3B,0xAD);
DEFINE_GUID(IID_INTAWelcomePageModelItemStateData,0x5F3B4229,0x0E29,0x4867,0x9B,0x6C,0x56,0x8B,0x63,0x72,0x09,0xC4);
DEFINE_GUID(IID_INTAWelcomePageModelItemAdditionalData, 0x6BC68517,0xA109,0x4D1D,0xA5,0xA9,0xB6,0x5F,0x46,0x39,0x45,0xFF);
DEFINE_GUID(IID_INTAWelcomePagePluginModel,0x75357ABC,0xF773,0x498C,0x99,0x70,0xCC,0x63,0x57,0x71,0xE6,0xDA);
DEFINE_GUID(IID_INTAWelcomePagePluginOnlineModel,0xDE75BB76,0xA656,0x4C76,0x9C,0xD0,0xBD,0x02,0xCC,0xB6,0x36,0x95);
DEFINE_GUID(IID_INTAWelcomePagePlugin,0x60AB2EA1,0x9521,0x4A7C,0xBE,0x7F,0x12,0x53,0x08,0xAF,0x20,0xE5);
DEFINE_GUID(IID_INTAWelcomePageDataPlugin,0xA4E90C8F,0x9AA0,0x481E,0xB4,0x02,0x36,0x32,0x9B,0x38,0xF8,0xBC);
DEFINE_GUID(IID_INTAWelcomePageDataPluginControlState,0xCD335CEE,0xA7E9,0x4E2B,0xB0,0xCC,0xA6,0x26,0xEA,0xED,0xE8,0xCB);
DEFINE_GUID(IID_INTAWelcomePageCaptionFrame,0x2E6BCE6D,0x60BB,0x42C5,0xB2,0x4A,0x30,0xC4,0x09,0x76,0xF2,0x02);
DEFINE_GUID(IID_INTAWelcomePageDataPluginListView,0x6213F973,0xE077,0x4647,0x9E,0x4E,0xD1,0x06,0x66,0xC3,0x0B,0x26);
DEFINE_GUID(IID_INTAWelcomePageContentPluginCreator,0x1E2E6E47,0xB4C5,0x49A6,0x80,0x18,0x93,0x8B,0x5C,0xC1,0xED,0xFE);
DEFINE_GUID(IID_INTAWelcomePageControlPluginCreator ,0xED9D44C5,0x0131,0x4C7C,0xB0,0xEE,0x19,0x20,0x91,0x12,0xA1,0xAE);
DEFINE_GUID(IID_INTAWelcomePagePluginService280,0xAABD143E,0x44EB,0x4070,0x83,0x4B,0xD0,0x00,0x2E,0x12,0xEE,0x01);
DEFINE_GUID(IID_INTAWelcomePagePluginService,0xCFDFE3BD,0xB3BA,0x4D27,0xBE,0xC0,0x81,0x30,0xE4,0xA7,0x87,0x4B);
DEFINE_GUID(IID_INTAWelcomePageSettings280,0xD5935926,0x8F43,0x4F49,0x9E,0xDB,0x27,0xF4,0x92,0x13,0x52,0x54);
DEFINE_GUID(IID_INTAWelcomePageSettings,0xB10CD61C,0x4137,0x430F,0xA6,0x67,0xFA,0xCA,0x16,0x5B,0xE8,0x16);
DEFINE_GUID(IID_INTAWelcomePageBackgroundService280,0x7AA097E9,0x5932,0x4224,0xA9,0x96,0x4F,0x27,0x17,0x79,0xB0,0xFB);
DEFINE_GUID(IID_INTAWelcomePageBackgroundService,0x996AC521,0x40D2,0x4FA4,0x94,0xA8,0xE9,0xF2,0xEB,0x16,0x19,0x9D);

namespace Toolsapi
{
namespace Welcomepage
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS EWelcomePageException;
__interface DELPHIINTERFACE INTAWelcomePageNotifier280;
typedef System::DelphiInterface<INTAWelcomePageNotifier280> _di_INTAWelcomePageNotifier280;
__interface DELPHIINTERFACE INTAWelcomePageNotifier;
typedef System::DelphiInterface<INTAWelcomePageNotifier> _di_INTAWelcomePageNotifier;
__interface DELPHIINTERFACE INTAWelcomePagePluginNotifier280;
typedef System::DelphiInterface<INTAWelcomePagePluginNotifier280> _di_INTAWelcomePagePluginNotifier280;
__interface DELPHIINTERFACE INTAWelcomePagePluginNotifier;
typedef System::DelphiInterface<INTAWelcomePagePluginNotifier> _di_INTAWelcomePagePluginNotifier;
__interface DELPHIINTERFACE INTAWelcomePageModelItemData;
typedef System::DelphiInterface<INTAWelcomePageModelItemData> _di_INTAWelcomePageModelItemData;
__interface DELPHIINTERFACE INTAWelcomePageModelAdjustedItemData280;
typedef System::DelphiInterface<INTAWelcomePageModelAdjustedItemData280> _di_INTAWelcomePageModelAdjustedItemData280;
__interface DELPHIINTERFACE INTAWelcomePageModelAdjustedItemData;
typedef System::DelphiInterface<INTAWelcomePageModelAdjustedItemData> _di_INTAWelcomePageModelAdjustedItemData;
__interface DELPHIINTERFACE INTAWelcomePageModelItemStateData;
typedef System::DelphiInterface<INTAWelcomePageModelItemStateData> _di_INTAWelcomePageModelItemStateData;
__interface DELPHIINTERFACE INTAWelcomePageModelItemAdditionalData;
typedef System::DelphiInterface<INTAWelcomePageModelItemAdditionalData> _di_INTAWelcomePageModelItemAdditionalData;
__interface DELPHIINTERFACE INTAWelcomePagePluginModel;
typedef System::DelphiInterface<INTAWelcomePagePluginModel> _di_INTAWelcomePagePluginModel;
__interface DELPHIINTERFACE INTAWelcomePagePluginOnlineModel;
typedef System::DelphiInterface<INTAWelcomePagePluginOnlineModel> _di_INTAWelcomePagePluginOnlineModel;
__interface DELPHIINTERFACE INTAWelcomePagePlugin;
typedef System::DelphiInterface<INTAWelcomePagePlugin> _di_INTAWelcomePagePlugin;
__interface DELPHIINTERFACE INTAWelcomePageDataPlugin;
typedef System::DelphiInterface<INTAWelcomePageDataPlugin> _di_INTAWelcomePageDataPlugin;
__interface DELPHIINTERFACE INTAWelcomePageDataPluginControlState;
typedef System::DelphiInterface<INTAWelcomePageDataPluginControlState> _di_INTAWelcomePageDataPluginControlState;
__interface DELPHIINTERFACE INTAWelcomePageCaptionFrame;
typedef System::DelphiInterface<INTAWelcomePageCaptionFrame> _di_INTAWelcomePageCaptionFrame;
__interface DELPHIINTERFACE INTAWelcomePageDataPluginListView;
typedef System::DelphiInterface<INTAWelcomePageDataPluginListView> _di_INTAWelcomePageDataPluginListView;
__interface DELPHIINTERFACE INTAWelcomePageContentPluginCreator;
typedef System::DelphiInterface<INTAWelcomePageContentPluginCreator> _di_INTAWelcomePageContentPluginCreator;
__interface DELPHIINTERFACE INTAWelcomePageControlPluginCreator;
typedef System::DelphiInterface<INTAWelcomePageControlPluginCreator> _di_INTAWelcomePageControlPluginCreator;
__interface DELPHIINTERFACE INTAWelcomePagePluginService280;
typedef System::DelphiInterface<INTAWelcomePagePluginService280> _di_INTAWelcomePagePluginService280;
__interface DELPHIINTERFACE INTAWelcomePagePluginService;
typedef System::DelphiInterface<INTAWelcomePagePluginService> _di_INTAWelcomePagePluginService;
__interface DELPHIINTERFACE INTAWelcomePageSettings280;
typedef System::DelphiInterface<INTAWelcomePageSettings280> _di_INTAWelcomePageSettings280;
__interface DELPHIINTERFACE INTAWelcomePageSettings;
typedef System::DelphiInterface<INTAWelcomePageSettings> _di_INTAWelcomePageSettings;
__interface DELPHIINTERFACE INTAWelcomePageBackgroundService280;
typedef System::DelphiInterface<INTAWelcomePageBackgroundService280> _di_INTAWelcomePageBackgroundService280;
__interface DELPHIINTERFACE INTAWelcomePageBackgroundService;
typedef System::DelphiInterface<INTAWelcomePageBackgroundService> _di_INTAWelcomePageBackgroundService;
class DELPHICLASS TWelcomePageMetrics;
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TOnPluginItemClickEvent)(System::TObject* Sender, int ItemIndex);

typedef void __fastcall (__closure *TOnSetDataEvent)(const System::Classes::_di_IInterfaceList AData);

typedef void __fastcall (__closure *TOnReceiveDataEvent)(bool &Abort);

typedef void __fastcall (__closure *TOnPluginRegisteredEvent)(const System::UnicodeString PluginID);

#pragma pack(push,4)
class PASCALIMPLEMENTATION EWelcomePageException : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EWelcomePageException(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EWelcomePageException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EWelcomePageException(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EWelcomePageException(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EWelcomePageException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EWelcomePageException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EWelcomePageException(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EWelcomePageException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EWelcomePageException(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EWelcomePageException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EWelcomePageException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EWelcomePageException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EWelcomePageException() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TWelcomePageViewMode : unsigned char { vmNone, vmListShort, vmListButton, vmListDropDown, vmListFull };

__interface  INTERFACE_UUID("{CD8AA3EB-AB59-47C2-9264-A6147369B9A6}") INTAWelcomePageNotifier280  : public System::IInterface 
{
	virtual void __fastcall BeforeWelcomePageDestroy() = 0 ;
	virtual void __fastcall BeforePluginClose(const System::UnicodeString PluginID) = 0 ;
	virtual void __fastcall BeforePluginDestroy(const System::UnicodeString PluginID) = 0 ;
};

__interface  INTERFACE_UUID("{1007377B-1266-47D5-ABEA-ACDE942CD6E9}") INTAWelcomePageNotifier  : public INTAWelcomePageNotifier280 
{
	
};

__interface  INTERFACE_UUID("{B157D07D-3332-41E6-85A9-5E01210F3856}") INTAWelcomePagePluginNotifier280  : public System::IInterface 
{
	virtual void __fastcall ViewShow(Vcl::Controls::TWinControl* Sender) = 0 ;
	virtual void __fastcall ViewHide() = 0 ;
	virtual void __fastcall ViewResize(int AColumnSpan, int ARowSpan) = 0 ;
};

__interface  INTERFACE_UUID("{38B3EA34-D832-48D0-AF84-7449EB28D221}") INTAWelcomePagePluginNotifier  : public INTAWelcomePagePluginNotifier280 
{
	
};

__interface  INTERFACE_UUID("{7800EF34-DBFC-487E-879C-9EFCB6EA42B1}") INTAWelcomePageModelItemData  : public System::IInterface 
{
	virtual System::UnicodeString __fastcall GetTitle() = 0 ;
	virtual void __fastcall SetTitle(const System::UnicodeString Value) = 0 ;
	virtual System::UnicodeString __fastcall GetDescription() = 0 ;
	virtual void __fastcall SetDescription(const System::UnicodeString Value) = 0 ;
	virtual int __fastcall GetImageIndex() = 0 ;
	virtual void __fastcall SetImageIndex(const int Value) = 0 ;
	__property System::UnicodeString Title = {read=GetTitle, write=SetTitle};
	__property System::UnicodeString Description = {read=GetDescription, write=SetDescription};
	__property int ImageIndex = {read=GetImageIndex, write=SetImageIndex};
};

__interface  INTERFACE_UUID("{B28DD62B-2FF8-4D28-88B0-7E8A04D1FF33}") INTAWelcomePageModelAdjustedItemData280  : public System::IInterface 
{
	virtual System::UnicodeString __fastcall GetAdjustedDescription(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect) = 0 ;
};

__interface  INTERFACE_UUID("{7DA748EA-7E34-4D58-80DF-4807E5763BAD}") INTAWelcomePageModelAdjustedItemData  : public INTAWelcomePageModelAdjustedItemData280 
{
	
};

__interface  INTERFACE_UUID("{5F3B4229-0E29-4867-9B6C-568B637209C4}") INTAWelcomePageModelItemStateData  : public System::IInterface 
{
	virtual bool __fastcall GetEnabled() = 0 ;
	virtual void __fastcall SetEnabled(const bool Value) = 0 ;
	__property bool Enabled = {read=GetEnabled, write=SetEnabled};
};

__interface  INTERFACE_UUID("{6BC68517-A109-4D1D-A5A9-B65F463945FF}") INTAWelcomePageModelItemAdditionalData  : public System::IInterface 
{
	virtual int __fastcall GetAdditionalImageIndex() = 0 ;
	virtual void __fastcall SetAdditionalImageIndex(const int Value) = 0 ;
	__property int AdditionalImageIndex = {read=GetAdditionalImageIndex, write=SetAdditionalImageIndex};
};

__interface  INTERFACE_UUID("{75357ABC-F773-498C-9970-CC635771E6DA}") INTAWelcomePagePluginModel  : public System::IInterface 
{
	virtual System::Classes::_di_IInterfaceList __fastcall GetData() = 0 ;
	virtual System::UnicodeString __fastcall GetStatusMessage() = 0 ;
	virtual Vcl::Imagecollection::TImageCollection* __fastcall GetImageCollection() = 0 ;
	virtual bool __fastcall GetIsDataLoaded() = 0 ;
	virtual void __fastcall LoadData() = 0 ;
	virtual void __fastcall RefreshData() = 0 ;
	virtual void __fastcall StopLoading() = 0 ;
	virtual void __fastcall SetOnLoadingFinished(System::Sysutils::_di_TProc AProc) = 0 ;
	__property System::Classes::_di_IInterfaceList Data = {read=GetData};
	__property System::UnicodeString StatusMessage = {read=GetStatusMessage};
	__property Vcl::Imagecollection::TImageCollection* ImageCollection = {read=GetImageCollection};
	__property bool IsDataLoaded = {read=GetIsDataLoaded};
};

__interface  INTERFACE_UUID("{DE75BB76-A656-4C76-9CD0-BD02CCB63695}") INTAWelcomePagePluginOnlineModel  : public INTAWelcomePagePluginModel 
{
	virtual System::UnicodeString __fastcall GetServiceUrl() = 0 ;
	virtual void __fastcall SetServiceUrl(const System::UnicodeString Value) = 0 ;
	__property System::UnicodeString ServiceUrl = {read=GetServiceUrl, write=SetServiceUrl};
};

__interface  INTERFACE_UUID("{60AB2EA1-9521-4A7C-BE7F-125308AF20E5}") INTAWelcomePagePlugin  : public System::IInterface 
{
	virtual System::UnicodeString __fastcall GetPluginID() = 0 ;
	virtual System::UnicodeString __fastcall GetPluginName() = 0 ;
	virtual bool __fastcall GetPluginVisible() = 0 ;
	__property System::UnicodeString PluginID = {read=GetPluginID};
	__property System::UnicodeString PluginName = {read=GetPluginName};
	__property bool PluginVisible = {read=GetPluginVisible};
};

__interface  INTERFACE_UUID("{A4E90C8F-9AA0-481E-B402-36329B38F8BC}") INTAWelcomePageDataPlugin  : public INTAWelcomePagePlugin 
{
	virtual _di_INTAWelcomePagePluginModel __fastcall GetModel() = 0 ;
	virtual void __fastcall SetModel(const _di_INTAWelcomePagePluginModel Value) = 0 ;
	__property _di_INTAWelcomePagePluginModel Model = {read=GetModel, write=SetModel};
};

__interface  INTERFACE_UUID("{CD335CEE-A7E9-4E2B-B0CC-A626EAEDE8CB}") INTAWelcomePageDataPluginControlState  : public INTAWelcomePageDataPlugin 
{
	virtual Vcl::Controls::TControl* __fastcall GetControl() = 0 ;
	virtual void __fastcall SetControl(Vcl::Controls::TControl* const Value) = 0 ;
	__property Vcl::Controls::TControl* Control = {read=GetControl, write=SetControl};
};

__interface  INTERFACE_UUID("{2E6BCE6D-60BB-42C5-B24A-30C40976F202}") INTAWelcomePageCaptionFrame  : public INTAWelcomePageDataPlugin 
{
	virtual Vcl::Forms::TFrame* __fastcall GetCaptionFrame() = 0 ;
	virtual void __fastcall SetCaptionFrame(Vcl::Forms::TFrame* const ACaptionFrame) = 0 ;
	virtual Vcl::Forms::TFrame* __fastcall GetClientFrame() = 0 ;
	virtual void __fastcall SetClientFrame(Vcl::Forms::TFrame* const AClientFrame) = 0 ;
	__property Vcl::Forms::TFrame* CaptionFrame = {read=GetCaptionFrame, write=SetCaptionFrame};
	__property Vcl::Forms::TFrame* ClientFrame = {read=GetClientFrame, write=SetClientFrame};
};

__interface  INTERFACE_UUID("{6213F973-E077-4647-9E4E-D10666C30B26}") INTAWelcomePageDataPluginListView  : public INTAWelcomePageCaptionFrame 
{
	virtual int __fastcall GetItemHeight() = 0 ;
	virtual void __fastcall SetItemHeight(const int Value) = 0 ;
	virtual TWelcomePageViewMode __fastcall GetViewMode() = 0 ;
	virtual void __fastcall SetViewMode(const TWelcomePageViewMode Value) = 0 ;
	virtual void __fastcall SetOnItemDblClick(TOnPluginItemClickEvent AProc) = 0 ;
	virtual void __fastcall SetOnItemAdditionalClick(TOnPluginItemClickEvent AProc) = 0 ;
	virtual void __fastcall SetPopupMenu(Vcl::Menus::TPopupMenu* AMenu) = 0 ;
	__property int ItemHeight = {read=GetItemHeight, write=SetItemHeight};
	__property TWelcomePageViewMode ViewMode = {read=GetViewMode, write=SetViewMode};
};

__interface  INTERFACE_UUID("{1E2E6E47-B4C5-49A6-8018-938B5CC1EDFE}") INTAWelcomePageContentPluginCreator  : public INTAWelcomePagePlugin 
{
	virtual Vcl::Forms::TFrame* __fastcall GetView() = 0 ;
	virtual Vcl::Forms::TFrame* __fastcall CreateView() = 0 ;
	virtual void __fastcall DestroyView() = 0 ;
	virtual Vcl::Graphics::TGraphicArray __fastcall GetIcon() = 0 ;
	virtual int __fastcall GetIconIndex() = 0 ;
	virtual void __fastcall SetIconIndex(const int Value) = 0 ;
	__property Vcl::Forms::TFrame* View = {read=GetView};
	__property int IconIndex = {read=GetIconIndex, write=SetIconIndex};
};

__interface  INTERFACE_UUID("{ED9D44C5-0131-4C7C-B0EE-19209112A1AE}") INTAWelcomePageControlPluginCreator  : public INTAWelcomePagePlugin 
{
	virtual System::TInterfacedObject* __fastcall GetControlObject() = 0 ;
	virtual System::TInterfacedObject* __fastcall CreateControlPlugin(Vcl::Controls::TControl* AControl) = 0 ;
	virtual void __fastcall DestroyControlPlugin() = 0 ;
	__property System::TInterfacedObject* ControlObject = {read=GetControlObject};
};

__interface  INTERFACE_UUID("{AABD143E-44EB-4070-834B-D0002E12EE01}") INTAWelcomePagePluginService280  : public System::IInterface 
{
	
public:
	_di_INTAWelcomePagePlugin operator[](int Index) { return this->Plugins[Index]; }
	virtual int __fastcall GetPluginCount() = 0 ;
	virtual System::UnicodeString __fastcall GetPluginID(int Index) = 0 ;
	virtual _di_INTAWelcomePagePlugin __fastcall GetPluginByIndex(int Index) = 0 ;
	virtual _di_INTAWelcomePagePlugin __fastcall GetPluginByID(const System::UnicodeString ID) = 0 ;
	virtual Vcl::Forms::TFrame* __fastcall GetPluginView(const System::UnicodeString ID) = 0 ;
	virtual int __fastcall GetPluginIconIndex(const System::UnicodeString PluginID) = 0 ;
	virtual void __fastcall SetOnInitPluginsEvent(const System::Sysutils::_di_TProc AProc) = 0 ;
	virtual void __fastcall SetOnPluginRegisteredEvent(const TOnPluginRegisteredEvent AProc) = 0 ;
	virtual void __fastcall RegisterPluginCreator(const _di_INTAWelcomePagePlugin WPPluginCreator) = 0 ;
	virtual void __fastcall UnRegisterPlugin(const System::UnicodeString PluginID) = 0 ;
	virtual Vcl::Forms::TFrame* __fastcall CreatePlugin(const System::UnicodeString PluginID) = 0 /* overload */;
	virtual System::TInterfacedObject* __fastcall CreatePlugin(const System::UnicodeString PluginID, Vcl::Controls::TControl* const Control) = 0 /* overload */;
	virtual void __fastcall DestroyPlugin(const System::UnicodeString PluginID) = 0 ;
	virtual Vcl::Forms::TFrame* __fastcall CreateCaptionFrame(const System::UnicodeString APluginID, const System::UnicodeString APluginName, const _di_INTAWelcomePagePluginModel AModel) = 0 ;
	virtual Vcl::Forms::TFrame* __fastcall CreateListViewFrame(const System::UnicodeString APluginID, const System::UnicodeString APluginName, const TWelcomePageViewMode AViewMode, const _di_INTAWelcomePagePluginModel AModel) = 0 ;
	__property int PluginCount = {read=GetPluginCount};
	__property System::UnicodeString PluginID[int Index] = {read=GetPluginID};
	__property _di_INTAWelcomePagePlugin Plugins[int Index] = {read=GetPluginByIndex/*, default*/};
	__property _di_INTAWelcomePagePlugin PluginsByID[const System::UnicodeString ID] = {read=GetPluginByID};
	__property Vcl::Forms::TFrame* PluginView[const System::UnicodeString ID] = {read=GetPluginView};
};

__interface  INTERFACE_UUID("{CFDFE3BD-B3BA-4D27-BEC0-8130E4A7874B}") INTAWelcomePagePluginService  : public INTAWelcomePagePluginService280 
{
	
};

__interface  INTERFACE_UUID("{D5935926-8F43-4F49-9EDB-27F492135254}") INTAWelcomePageSettings280  : public System::IInterface 
{
	virtual bool __fastcall IsSettingExists(const System::UnicodeString Name) = 0 ;
	virtual void __fastcall SetSettingsSection(const System::UnicodeString ASection = System::UnicodeString()) = 0 ;
	virtual System::UnicodeString __fastcall GetSettingsSection() = 0 ;
	virtual void __fastcall SaveSetting(const System::UnicodeString Name, System::Classes::TStream* Value) = 0 /* overload */;
	virtual void __fastcall SaveSetting(const System::UnicodeString Name, bool Value) = 0 /* overload */;
	virtual void __fastcall SaveSetting(const System::UnicodeString Name, System::TDateTime Value) = 0 /* overload */;
	virtual void __fastcall SaveSetting(const System::UnicodeString Name, double Value) = 0 /* overload */;
	virtual void __fastcall SaveSetting(const System::UnicodeString Name, int Value) = 0 /* overload */;
	virtual void __fastcall SaveSetting(const System::UnicodeString Name, const System::UnicodeString Value, bool AFile = false) = 0 /* overload */;
	virtual void __fastcall ReadSetting(const System::UnicodeString Name, System::Classes::TStream* Value) = 0 /* overload */;
	virtual void __fastcall ReadSetting(const System::UnicodeString Name, bool &Value) = 0 /* overload */;
	virtual void __fastcall ReadSetting(const System::UnicodeString Name, System::TDateTime &Value) = 0 /* overload */;
	virtual void __fastcall ReadSetting(const System::UnicodeString Name, double &Value) = 0 /* overload */;
	virtual void __fastcall ReadSetting(const System::UnicodeString Name, int &Value) = 0 /* overload */;
	virtual void __fastcall ReadSetting(const System::UnicodeString Name, System::UnicodeString &Value) = 0 /* overload */;
	virtual void __fastcall DeleteSetting(const System::UnicodeString Name) = 0 ;
};

__interface  INTERFACE_UUID("{B10CD61C-4137-430F-A667-FACA165BE816}") INTAWelcomePageSettings  : public INTAWelcomePageSettings280 
{
	
};

__interface  INTERFACE_UUID("{7AA097E9-5932-4224-A996-4F271779B0FB}") INTAWelcomePageBackgroundService280  : public System::IInterface 
{
	virtual void __fastcall PaintBackgroundTo(Vcl::Graphics::TCanvas* ACanvas, Vcl::Controls::TControl* AControl, const System::Types::TRect &ARect, System::Uitypes::TColor AColor, System::Byte AOpacity = (System::Byte)(0xff)) = 0 /* overload */;
	virtual void __fastcall PaintBackgroundTo(Vcl::Graphics::TCanvas* ACanvas, Vcl::Controls::TControl* AControl, System::Uitypes::TColor AColor, System::Byte AOpacity = (System::Byte)(0xff)) = 0 /* overload */;
	virtual void __fastcall PaintBackgroundTo(Vcl::Graphics::TCanvas* ACanvas, Vcl::Controls::TControl* AControl, System::Byte AOpacity = (System::Byte)(0xff)) = 0 /* overload */;
	virtual System::Types::TRect __fastcall GetRelativeControlRect(Vcl::Controls::TControl* AControl) = 0 ;
	virtual System::Types::TSize __fastcall GetTextSize(const System::UnicodeString AText, Vcl::Graphics::TFont* AFont) = 0 ;
	virtual void __fastcall PaintTextTo(Vcl::Graphics::TCanvas* ACanvas, const System::UnicodeString AText, System::Types::TRect &ARect, Vcl::Graphics::TFont* AFont, Vcl::Graphics::TTextFormat ATextFormat) = 0 ;
};

__interface  INTERFACE_UUID("{996AC521-40D2-4FA4-94A8-E9F2EB16199D}") INTAWelcomePageBackgroundService  : public INTAWelcomePageBackgroundService280 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TWelcomePageMetrics : public System::TObject
{
	typedef System::TObject inherited;
	
	
public:
	#pragma pack(push,8)
	struct DECLSPEC_DRECORD ListView
	{
	public:
		static const System::Int8 SmallItemHeight = System::Int8(0x20);
		
		static const System::Int8 MediumItemHeight = System::Int8(0x38);
		
		static const System::Int8 LargeItemHeight = System::Int8(0x50);
		
	};
	#pragma pack(pop)
	
	
	#pragma pack(push,8)
	struct DECLSPEC_DRECORD Background
	{
	public:
		static const System::Int8 Opacity = System::Int8(0x40);
		
	};
	#pragma pack(pop)
	
	
	
public:
	/* TObject.Create */ inline __fastcall TWelcomePageMetrics() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TWelcomePageMetrics() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE _di_INTAWelcomePagePluginService WelcomePagePluginService;
extern DELPHI_PACKAGE _di_INTAWelcomePageSettings WelcomePageSettings;
}	/* namespace Welcomepage */
}	/* namespace Toolsapi */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_TOOLSAPI_WELCOMEPAGE)
using namespace Toolsapi::Welcomepage;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_TOOLSAPI)
using namespace Toolsapi;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Toolsapi_WelcomepageHPP
