// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.AxCtrls.pas' rev: 35.00 (Windows)

#ifndef Vcl_AxctrlsHPP
#define Vcl_AxctrlsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Variants.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <Winapi.ActiveX.hpp>
#include <System.Win.ComObj.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <System.Win.StdVCL.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Menus.hpp>

//-- user supplied -----------------------------------------------------------

#include <objsafe.h>
#include <ocidl.h>


namespace Vcl
{
namespace Axctrls
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TOleStream;
__dispinterface IAmbientDispatch;
typedef System::DelphiInterface<IAmbientDispatch> _di_IAmbientDispatch;
class DELPHICLASS TActiveXControl;
class DELPHICLASS TActiveXControlFactory;
class DELPHICLASS TActiveFormControl;
class DELPHICLASS TActiveForm;
class DELPHICLASS TActiveFormFactory;
class DELPHICLASS TPropertyPage;
class DELPHICLASS TPropertyPageImpl;
class DELPHICLASS TActiveXPropertyPage;
class DELPHICLASS TActiveXPropertyPageFactory;
class DELPHICLASS TCustomAdapter;
class DELPHICLASS TAdapterNotifier;
__interface DELPHIINTERFACE IFontAccess;
typedef System::DelphiInterface<IFontAccess> _di_IFontAccess;
class DELPHICLASS TFontAdapter;
__interface DELPHIINTERFACE IPictureAccess;
typedef System::DelphiInterface<IPictureAccess> _di_IPictureAccess;
class DELPHICLASS TPictureAdapter;
class DELPHICLASS TOleGraphic;
class DELPHICLASS TStringsAdapter;
class DELPHICLASS TReflectorWindow;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TOleStream : public System::Classes::TStream
{
	typedef System::Classes::TStream inherited;
	
private:
	_di_IStream FStream;
	
protected:
	_di_IStream __fastcall GetIStream();
	
public:
	__fastcall TOleStream(const _di_IStream Stream);
	__fastcall virtual ~TOleStream();
	virtual int __fastcall Read(void *Buffer, int Count)/* overload */;
	virtual int __fastcall Write(const void *Buffer, int Count)/* overload */;
	virtual int __fastcall Seek(int Offset, System::Word Origin)/* overload */;
	/* Hoisted overloads: */
	
public:
#ifndef _WIN64
	inline int __fastcall  Read(System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Read(Buffer, Offset, Count); }
	inline int __fastcall  Read(System::DynamicArray<System::Byte> &Buffer, int Count){ return System::Classes::TStream::Read(Buffer, Count); }
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Write(Buffer, Offset, Count); }
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Count){ return System::Classes::TStream::Write(Buffer, Count); }
#else /* _WIN64 */
	inline int __fastcall  Read(System::TArray__1<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Read(Buffer, Offset, Count); }
	inline int __fastcall  Read(System::TArray__1<System::Byte> &Buffer, int Count){ return System::Classes::TStream::Read(Buffer, Count); }
	inline int __fastcall  Write(const System::TArray__1<System::Byte> Buffer, int Offset, int Count){ return System::Classes::TStream::Write(Buffer, Offset, Count); }
	inline int __fastcall  Write(const System::TArray__1<System::Byte> Buffer, int Count){ return System::Classes::TStream::Write(Buffer, Count); }
#endif /* _WIN64 */
	inline __int64 __fastcall  Seek(const __int64 Offset, System::Classes::TSeekOrigin Origin){ return System::Classes::TStream::Seek(Offset, Origin); }
	inline __int64 __fastcall  Seek(const __int64 Offset, System::Word Origin){ return System::Classes::TStream::Seek(Offset, Origin); }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef void __fastcall (__closure *TDefinePropertyPage)(const GUID &GUID);

__dispinterface  INTERFACE_UUID("{00020400-0000-0000-C000-000000000046}") IAmbientDispatch  : public IDispatch 
{
	
};

class PASCALIMPLEMENTATION TActiveXControl : public System::Win::Comobj::TAutoObject
{
	typedef System::Win::Comobj::TAutoObject inherited;
	
private:
	TActiveXControlFactory* FControlFactory;
	System::Win::Comobj::TConnectionPoints* FConnectionPoints;
	System::Win::Comobj::TConnectionPoint* FConnectionPoint;
	System::Win::Comobj::TConnectionPoint* FPropertySinks;
	unsigned FObjectSafetyFlags;
	_di_IOleClientSite FOleClientSite;
	_di_IOleControlSite FOleControlSite;
	_di_ISimpleFrameSite FSimpleFrameSite;
	_di_IAmbientDispatch FAmbientDispatch;
	_di_IOleInPlaceSite FOleInPlaceSite;
	_di_IOleInPlaceFrame FOleInPlaceFrame;
	_di_IOleInPlaceUIWindow FOleInPlaceUIWindow;
	_di_IOleAdviseHolder FOleAdviseHolder;
	_di_IDataAdviseHolder FDataAdviseHolder;
	_di_IAdviseSink FAdviseSink;
	int FAdviseFlags;
	Vcl::Controls::TWinControl* FControl;
	System::Classes::TWndMethod FControlWndProc;
	Vcl::Controls::TWinControl* FWinControl;
	bool FIsDirty;
	bool FInPlaceActive;
	bool FUIActive;
	bool FEventsFrozen;
	System::TInterfacedObject* FOleLinkStub;
	HRESULT __fastcall CreateAdviseHolder();
	int __fastcall GetPropertyID(const System::WideString PropertyName);
	void __fastcall RecreateWnd();
	void __fastcall ViewChanged();
	
protected:
	HRESULT __stdcall GetClassID(/* out */ GUID &classID);
	HRESULT __stdcall PersistPropBagInitNew();
	HRESULT __stdcall PersistPropBagLoad(const _di_IPropertyBag pPropBag, const _di_IErrorLog pErrorLog);
	HRESULT __stdcall PersistPropBagSave(const _di_IPropertyBag pPropBag, System::LongBool fClearDirty, System::LongBool fSaveAllProperties);
	HRESULT __stdcall IsDirty();
	HRESULT __stdcall PersistStreamLoad(const _di_IStream stm);
	HRESULT __stdcall PersistStreamSave(const _di_IStream stm, System::LongBool fClearDirty);
	HRESULT __stdcall GetSizeMax(/* out */ __int64 &cbSize);
	HRESULT __stdcall InitNew();
	HRESULT __stdcall PersistStorageInitNew(const _di_IStorage stg);
	HRESULT __stdcall PersistStorageLoad(const _di_IStorage stg);
	HRESULT __stdcall PersistStorageSave(const _di_IStorage stgSave, System::LongBool fSameAsLoad);
	HRESULT __stdcall SaveCompleted(const _di_IStorage stgNew);
	HRESULT __stdcall HandsOffStorage();
	virtual HRESULT __stdcall GetInterfaceSafetyOptions(const GUID &IID, unsigned* pdwSupportedOptions, unsigned* pdwEnabledOptions);
	virtual HRESULT __stdcall SetInterfaceSafetyOptions(const GUID &IID, unsigned dwOptionSetMask, unsigned dwEnabledOptions);
	HRESULT __stdcall SetClientSite(const _di_IOleClientSite clientSite);
	HRESULT __stdcall GetClientSite(/* out */ _di_IOleClientSite &clientSite);
	HRESULT __stdcall SetHostNames(System::WideChar * szContainerApp, System::WideChar * szContainerObj);
	HRESULT __stdcall Close(int dwSaveOption);
	HRESULT __stdcall SetMoniker(int dwWhichMoniker, const _di_IMoniker mk);
	HRESULT __stdcall GetMoniker(int dwAssign, int dwWhichMoniker, /* out */ _di_IMoniker &mk);
	HRESULT __stdcall InitFromData(const _di_IDataObject dataObject, System::LongBool fCreation, int dwReserved);
	HRESULT __stdcall GetClipboardData(int dwReserved, /* out */ _di_IDataObject &dataObject);
	HRESULT __stdcall DoVerb(int iVerb, Winapi::Windows::PMsg msg, const _di_IOleClientSite activeSite, int lindex, HWND hwndParent, const System::Types::TRect &posRect);
	HRESULT __stdcall EnumVerbs(/* out */ _di_IEnumOLEVERB &enumOleVerb);
	HRESULT __stdcall Update();
	HRESULT __stdcall IsUpToDate();
	HRESULT __stdcall GetUserClassID(/* out */ GUID &clsid);
	HRESULT __stdcall GetUserType(int dwFormOfType, /* out */ System::WideChar * &pszUserType);
#ifndef _WIN64
	HRESULT __stdcall SetExtent(int dwDrawAspect, const System::Types::TPoint &size);
#else /* _WIN64 */
	HRESULT __stdcall SetExtent(int dwDrawAspect, System::Types::PPoint size);
#endif /* _WIN64 */
	HRESULT __stdcall GetExtent(int dwDrawAspect, /* out */ System::Types::TPoint &size);
	HRESULT __stdcall Advise(const _di_IAdviseSink advSink, /* out */ int &dwConnection);
	HRESULT __stdcall Unadvise(int dwConnection);
	HRESULT __stdcall EnumAdvise(/* out */ _di_IEnumSTATDATA &enumAdvise);
	HRESULT __stdcall GetMiscStatus(int dwAspect, /* out */ int &dwStatus);
#ifndef _WIN64
	HRESULT __stdcall SetColorScheme(const tagLOGPALETTE &logpal);
#else /* _WIN64 */
	HRESULT __stdcall SetColorScheme(const tagLOGPALETTE logpal);
#endif /* _WIN64 */
	HRESULT __stdcall GetControlInfo(tagCONTROLINFO &ci);
	HRESULT __stdcall OnMnemonic(Winapi::Windows::PMsg msg);
	HRESULT __stdcall OnAmbientPropertyChange(int dispid);
	HRESULT __stdcall FreezeEvents(System::LongBool bFreeze);
	HRESULT __stdcall GetWindow(/* out */ HWND &wnd);
	HRESULT __stdcall ContextSensitiveHelp(System::LongBool fEnterMode);
	HRESULT __stdcall InPlaceDeactivate();
	HRESULT __stdcall UIDeactivate();
	HRESULT __stdcall SetObjectRects(const System::Types::TRect &rcPosRect, const System::Types::TRect &rcClipRect);
	HRESULT __stdcall ReactivateAndUndo();
	HRESULT __stdcall TranslateAccelerator(tagMSG &msg);
	HRESULT __stdcall OnFrameWindowActivate(System::LongBool fActivate);
	HRESULT __stdcall OnDocWindowActivate(System::LongBool fActivate);
	HRESULT __stdcall ResizeBorder(const System::Types::TRect &rcBorder, const _di_IOleInPlaceUIWindow uiWindow, System::LongBool fFrameWindow);
	HRESULT __stdcall EnableModeless(System::LongBool fEnable);
	HRESULT __stdcall Draw(int dwDrawAspect, int lindex, void * pvAspect, Winapi::Activex::PDVTargetDevice ptd, HDC hicTargetDev, HDC hdcDraw, System::Types::PRect prcBounds, System::Types::PRect prcWBounds, Winapi::Activex::TContinueFunc fnContinue, int dwContinue);
	HRESULT __stdcall GetColorSet(int dwDrawAspect, int lindex, void * pvAspect, Winapi::Activex::PDVTargetDevice ptd, HDC hicTargetDev, /* out */ Winapi::Windows::PLogPalette &colorSet);
	HRESULT __stdcall Freeze(int dwDrawAspect, int lindex, void * pvAspect, /* out */ int &dwFreeze);
	HRESULT __stdcall Unfreeze(int dwFreeze);
	HRESULT __stdcall SetAdvise(int aspects, int advf, const _di_IAdviseSink advSink);
	HRESULT __stdcall GetAdvise(System::PLongInt pAspects, System::PLongInt pAdvf, /* out */ _di_IAdviseSink &advSink);
	HRESULT __stdcall ViewObjectGetExtent(int dwDrawAspect, int lindex, Winapi::Activex::PDVTargetDevice ptd, /* out */ System::Types::TPoint &size);
	HRESULT __stdcall GetDisplayString(int dispid, /* out */ System::WideString &bstr);
	HRESULT __stdcall MapPropertyToPage(int dispid, /* out */ GUID &clsid);
	HRESULT __stdcall GetPredefinedStrings(int dispid, /* out */ tagCALPOLESTR &caStringsOut, /* out */ tagCADWORD &caCookiesOut);
	HRESULT __stdcall GetPredefinedValue(int dispid, int dwCookie, /* out */ System::OleVariant &varOut);
	HRESULT __stdcall GetPages(/* out */ tagCAUUID &pages);
	HRESULT __stdcall PreMessageFilter(HWND wnd, unsigned msg, NativeUInt wp, NativeInt lp, /* out */ NativeInt &res, /* out */ unsigned &Cookie);
	HRESULT __stdcall PostMessageFilter(HWND wnd, unsigned msg, NativeUInt wp, NativeInt lp, /* out */ NativeInt &res, unsigned Cookie);
	HRESULT __stdcall QuickActivate(tagQACONTAINER &qaCont, tagQACONTROL &qaCtrl);
#ifndef _WIN64
	HRESULT __stdcall SetContentExtent(const System::Types::TPoint &sizel);
#else /* _WIN64 */
	HRESULT __stdcall SetContentExtent(System::Types::PPoint sizel);
#endif /* _WIN64 */
	HRESULT __stdcall GetContentExtent(/* out */ System::Types::TPoint &sizel);
	HRESULT __stdcall GetData(const tagFORMATETC &formatetcIn, /* out */ tagSTGMEDIUM &medium);
	HRESULT __stdcall GetDataHere(const tagFORMATETC &formatetc, /* out */ tagSTGMEDIUM &medium);
	HRESULT __stdcall QueryGetData(const tagFORMATETC &formatetc);
	HRESULT __stdcall GetCanonicalFormatEtc(const tagFORMATETC &formatetc, /* out */ tagFORMATETC &formatetcOut);
	HRESULT __stdcall SetData(const tagFORMATETC &formatetc, tagSTGMEDIUM &medium, System::LongBool fRelease);
	HRESULT __stdcall EnumFormatEtc(int dwDirection, /* out */ _di_IEnumFORMATETC &enumFormatEtc);
	HRESULT __stdcall DAdvise(const tagFORMATETC &formatetc, int advf, const _di_IAdviseSink advSink, /* out */ int &dwConnection);
	HRESULT __stdcall DUnadvise(int dwConnection);
	HRESULT __stdcall EnumDAdvise(/* out */ _di_IEnumSTATDATA &enumAdvise);
	HRESULT __safecall Get_BackColor(int &__Get_BackColor_result);
	HRESULT __safecall Get_Caption(System::WideString &__Get_Caption_result);
	HRESULT __safecall Get_Enabled(System::WordBool &__Get_Enabled_result);
	HRESULT __safecall Get_Font(_di_IFontDisp &__Get_Font_result);
	HRESULT __safecall Get_ForeColor(int &__Get_ForeColor_result);
	HRESULT __safecall Get_HWnd(int &__Get_HWnd_result);
	HRESULT __safecall Get_TabStop(System::WordBool &__Get_TabStop_result);
	HRESULT __safecall Get_Text(System::WideString &__Get_Text_result);
	HRESULT __safecall Set_BackColor(int Value);
	HRESULT __safecall Set_Caption(const System::WideString Value);
	HRESULT __safecall Set_Enabled(System::WordBool Value);
	HRESULT __safecall Set_Font(const _di_IFontDisp Value);
	HRESULT __safecall Set_ForeColor(int Value);
	HRESULT __safecall Set_TabStop(System::WordBool Value);
	HRESULT __safecall Set_Text(const System::WideString Value);
	void __fastcall StdClickEvent(System::TObject* Sender);
	void __fastcall StdDblClickEvent(System::TObject* Sender);
	void __fastcall StdKeyDownEvent(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall StdKeyPressEvent(System::TObject* Sender, System::WideChar &Key);
	void __fastcall StdKeyUpEvent(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall StdMouseDownEvent(System::TObject* Sender, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall StdMouseMoveEvent(System::TObject* Sender, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall StdMouseUpEvent(System::TObject* Sender, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	HRESULT __fastcall InPlaceActivate(bool ActivateUI);
	void __fastcall ShowPropertyDialog();
	void __fastcall SetInPlaceSite(const _di_IOleInPlaceSite NewInPlaceSite);
	virtual void __fastcall DefinePropertyPages(TDefinePropertyPage DefinePropertyPage);
	virtual bool __fastcall GetPropertyString(int DispID, System::UnicodeString &S);
	virtual bool __fastcall GetPropertyStrings(int DispID, System::Classes::TStrings* Strings);
	virtual void __fastcall GetPropertyValue(int DispID, int Cookie, System::OleVariant &Value);
	virtual void __fastcall GetPropFromBag(const System::WideString PropName, int DispatchID, _di_IPropertyBag PropBag, _di_IErrorLog ErrorLog);
	virtual void __fastcall PreInitializeControl();
	virtual void __fastcall InitializeControl();
	virtual void __fastcall LoadFromStream(const _di_IStream Stream);
	virtual void __fastcall PerformVerb(int Verb);
	virtual void __fastcall PutPropInBag(const System::WideString PropName, int DispatchID, _di_IPropertyBag PropBag);
	virtual void __fastcall SaveToStream(const _di_IStream Stream);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	__property System::Win::Comobj::TConnectionPoints* ConnectionPoints = {read=FConnectionPoints};
	HRESULT __fastcall DoPropRequestEdit(int DispID);
	
public:
	__fastcall TActiveXControl();
	__fastcall TActiveXControl(const System::_di_IInterface Controller);
	__fastcall TActiveXControl(System::Win::Comobj::TComObjectFactory* Factory, const System::_di_IInterface Controller);
	__fastcall virtual ~TActiveXControl();
	virtual void __fastcall Initialize();
	virtual HRESULT __stdcall ObjQueryInterface(const GUID &IID, /* out */ void *Obj);
	void __fastcall PropChanged(const System::WideString PropertyName)/* overload */;
	void __fastcall PropChanged(int DispID)/* overload */;
	bool __fastcall PropRequestEdit(const System::WideString PropertyName)/* overload */;
	bool __fastcall PropRequestEdit(int DispID)/* overload */;
	__property _di_IOleClientSite ClientSite = {read=FOleClientSite};
	__property _di_IOleInPlaceSite InPlaceSite = {read=FOleInPlaceSite};
	__property Vcl::Controls::TWinControl* Control = {read=FControl};
	__property System::Win::Comobj::TConnectionPoint* ConnectionPoint = {read=FConnectionPoint};
private:
	void *__IViewObject2;	// IViewObject2 
	void *__IViewObject;	// IViewObject 
	void *__ISpecifyPropertyPages;	// ISpecifyPropertyPages 
	void *__ISimpleFrameSite;	// ISimpleFrameSite 
	void *__IQuickActivate;	// IQuickActivate 
	void *__IPersistStreamInit;	// IPersistStreamInit 
	void *__IPersistStorage;	// IPersistStorage 
	void *__IPersistPropertyBag;	// IPersistPropertyBag 
	void *__IPerPropertyBrowsing;	// IPerPropertyBrowsing 
	void *__IOleObject;	// IOleObject 
	void *__IOleInPlaceObject;	// IOleInPlaceObject 
	void *__IOleInPlaceActiveObject;	// IOleInPlaceActiveObject 
	void *__IOleControl;	// IOleControl 
	void *__IObjectSafety;	// IObjectSafety 
	void *__IDataObject;	// IDataObject 
	void *__IConnectionPointContainer;	// IConnectionPointContainer 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00000127-0000-0000-C000-000000000046}
	operator _di_IViewObject2()
	{
		_di_IViewObject2 intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IViewObject2*(void) { return (IViewObject2*)&__IViewObject2; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {0000010D-0000-0000-C000-000000000046}
	operator _di_IViewObject()
	{
		_di_IViewObject intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IViewObject*(void) { return (IViewObject*)&__IViewObject; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {B196B28B-BAB4-101A-B69C-00AA00341D07}
	operator _di_ISpecifyPropertyPages()
	{
		_di_ISpecifyPropertyPages intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ISpecifyPropertyPages*(void) { return (ISpecifyPropertyPages*)&__ISpecifyPropertyPages; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {742B0E01-14E6-101B-914E-00AA00300CAB}
	operator _di_ISimpleFrameSite()
	{
		_di_ISimpleFrameSite intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ISimpleFrameSite*(void) { return (ISimpleFrameSite*)&__ISimpleFrameSite; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {CF51ED10-62FE-11CF-BF86-00A0C9034836}
	operator _di_IQuickActivate()
	{
		_di_IQuickActivate intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IQuickActivate*(void) { return (IQuickActivate*)&__IQuickActivate; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {7FD52380-4E07-101B-AE2D-08002B2EC713}
	operator _di_IPersistStreamInit()
	{
		_di_IPersistStreamInit intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IPersistStreamInit*(void) { return (IPersistStreamInit*)&__IPersistStreamInit; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {0000010A-0000-0000-C000-000000000046}
	operator _di_IPersistStorage()
	{
		_di_IPersistStorage intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IPersistStorage*(void) { return (IPersistStorage*)&__IPersistStorage; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {37D84F60-42CB-11CE-8135-00AA004BB851}
	operator _di_IPersistPropertyBag()
	{
		_di_IPersistPropertyBag intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IPersistPropertyBag*(void) { return (IPersistPropertyBag*)&__IPersistPropertyBag; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {376BD3AA-3845-101B-84ED-08002B2EC713}
	operator _di_IPerPropertyBrowsing()
	{
		_di_IPerPropertyBrowsing intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IPerPropertyBrowsing*(void) { return (IPerPropertyBrowsing*)&__IPerPropertyBrowsing; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00000112-0000-0000-C000-000000000046}
	operator _di_IOleObject()
	{
		_di_IOleObject intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IOleObject*(void) { return (IOleObject*)&__IOleObject; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00000113-0000-0000-C000-000000000046}
	operator _di_IOleInPlaceObject()
	{
		_di_IOleInPlaceObject intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IOleInPlaceObject*(void) { return (IOleInPlaceObject*)&__IOleInPlaceObject; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00000117-0000-0000-C000-000000000046}
	operator _di_IOleInPlaceActiveObject()
	{
		_di_IOleInPlaceActiveObject intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IOleInPlaceActiveObject*(void) { return (IOleInPlaceActiveObject*)&__IOleInPlaceActiveObject; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {B196B288-BAB4-101A-B69C-00AA00341D07}
	operator _di_IOleControl()
	{
		_di_IOleControl intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IOleControl*(void) { return (IOleControl*)&__IOleControl; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {CB5BDC81-93C1-11CF-8F20-00805F2CD064}
	operator _di_IObjectSafety()
	{
		_di_IObjectSafety intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IObjectSafety*(void) { return (IObjectSafety*)&__IObjectSafety; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {0000010E-0000-0000-C000-000000000046}
	operator _di_IDataObject()
	{
		_di_IDataObject intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IDataObject*(void) { return (IDataObject*)&__IDataObject; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {B196B284-BAB4-101A-B69C-00AA00341D07}
	operator _di_IConnectionPointContainer()
	{
		_di_IConnectionPointContainer intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IConnectionPointContainer*(void) { return (IConnectionPointContainer*)&__IConnectionPointContainer; }
	#endif
	
};


#ifndef _WIN64
typedef System::TMetaClass* TActiveXControlClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TActiveXControlClass);
#endif /* _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TActiveXControlFactory : public System::Win::Comobj::TAutoObjectFactory
{
	typedef System::Win::Comobj::TAutoObjectFactory inherited;
	
private:
	Vcl::Controls::TWinControlClass FWinControlClass;
	int FMiscStatus;
	int FToolboxBitmapID;
	System::Classes::TStringList* FVerbs;
	System::Classes::TStringList* FLicFileStrings;
	bool FLicenseFileRead;
	
protected:
	virtual System::UnicodeString __fastcall GetLicenseFileName();
	virtual bool __fastcall HasMachineLicense();
	
public:
	__fastcall TActiveXControlFactory(System::Win::Comobj::TComServerObject* ComServer, TActiveXControlClass ActiveXControlClass, Vcl::Controls::TWinControlClass WinControlClass, const GUID &ClassID, int ToolboxBitmapID, const System::UnicodeString LicStr, int MiscStatus, System::Win::Comobj::TThreadingModel ThreadingModel);
	__fastcall virtual ~TActiveXControlFactory();
	virtual Vcl::Controls::TWinControl* __fastcall CreateControl(HWND Parent);
	void __fastcall AddVerb(int Verb, const System::UnicodeString VerbName);
	virtual void __fastcall UpdateRegistry(bool Register);
	__property int MiscStatus = {read=FMiscStatus, nodefault};
	__property int ToolboxBitmapID = {read=FToolboxBitmapID, nodefault};
	__property Vcl::Controls::TWinControlClass WinControlClass = {read=FWinControlClass};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TActiveFormControl : public TActiveXControl
{
	typedef TActiveXControl inherited;
	
protected:
	virtual void __fastcall DefinePropertyPages(TDefinePropertyPage DefinePropertyPage);
	virtual void __fastcall EventSinkChanged(const System::_di_IInterface EventSink);
	
public:
	__fastcall TActiveFormControl();
	__fastcall TActiveFormControl(const System::_di_IInterface Controller);
	__fastcall TActiveFormControl(System::Win::Comobj::TComObjectFactory* Factory, const System::_di_IInterface Controller);
	__fastcall virtual ~TActiveFormControl();
	void __fastcall FreeOnRelease();
	virtual void __fastcall InitializeControl();
	virtual HRESULT __stdcall Invoke(int DispID, const GUID &IID, int LocaleID, System::Word Flags, void *Params, void * VarResult, void * ExcepInfo, void * ArgErr);
	virtual HRESULT __stdcall ObjQueryInterface(const GUID &IID, /* out */ void *Obj);
private:
	void *__IVCLComObject;	// System::Classes::IVCLComObject 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {E07892A0-F52F-11CF-BD2F-0020AF0E5B81}
	operator System::Classes::_di_IVCLComObject()
	{
		System::Classes::_di_IVCLComObject intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator System::Classes::IVCLComObject*(void) { return (System::Classes::IVCLComObject*)&__IVCLComObject; }
	#endif
	
};


class PASCALIMPLEMENTATION TActiveForm : public Vcl::Forms::TCustomActiveForm
{
	typedef Vcl::Forms::TCustomActiveForm inherited;
	
private:
	int FSinkChangeCount;
	TActiveFormControl* FActiveFormControl;
	
protected:
	virtual void __fastcall DoDestroy();
	virtual void __fastcall DefinePropertyPages(TDefinePropertyPage DefinePropertyPage);
	virtual void __fastcall EventSinkChanged(const System::_di_IInterface EventSink);
	virtual void __fastcall Initialize();
	virtual void __fastcall InitializeControl();
	System::Win::Comobj::TConnectionPoint* __fastcall GetConnectionPoint();
	
public:
	__fastcall virtual TActiveForm(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TActiveForm();
	__property TActiveFormControl* ActiveFormControl = {read=FActiveFormControl};
	__property System::Win::Comobj::TConnectionPoint* ConnectionPoint = {read=GetConnectionPoint};
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TActiveForm(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TCustomActiveForm(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TActiveForm(HWND ParentWindow) : Vcl::Forms::TCustomActiveForm(ParentWindow) { }
	
};


#ifndef _WIN64
typedef System::TMetaClass* TActiveFormClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TActiveFormClass);
#endif /* _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TActiveFormFactory : public TActiveXControlFactory
{
	typedef TActiveXControlFactory inherited;
	
public:
	__fastcall TActiveFormFactory(System::Win::Comobj::TComServerObject* ComServer, TActiveXControlClass ActiveXControlClass, Vcl::Controls::TWinControlClass WinControlClass, const GUID &ClassID, int ToolboxBitmapID, const System::UnicodeString LicStr, int MiscStatus, System::Win::Comobj::TThreadingModel ThreadingModel);
	__fastcall virtual ~TActiveFormFactory();
	virtual System::PInterfaceEntry __fastcall GetIntfEntry(const GUID &Guid);
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TPropertyPage : public Vcl::Forms::TCustomForm
{
	typedef Vcl::Forms::TCustomForm inherited;
	
private:
	TPropertyPageImpl* FActiveXPropertyPage;
	System::OleVariant FOleObject;
	System::Classes::TInterfaceList* FOleObjects;
	HIDESBASE MESSAGE void __fastcall CMChanged(Vcl::Controls::TCMChanged &Msg);
	
public:
	__fastcall virtual TPropertyPage(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TPropertyPage();
	void __fastcall Modified();
	virtual void __fastcall UpdateObject();
	virtual void __fastcall UpdatePropertyPage();
	__property System::OleVariant OleObject = {read=FOleObject};
	__property System::Classes::TInterfaceList* OleObjects = {read=FOleObjects, write=FOleObjects};
	void __fastcall EnumCtlProps(const GUID &PropType, System::Classes::TStrings* PropNames);
	
__published:
	__property ActiveControl;
	__property AutoScroll = {default=0};
	__property Caption = {default=0};
	__property ClientHeight;
	__property ClientWidth;
	__property Ctl3D = {default=1};
	__property Color;
	__property Enabled = {default=1};
	__property Font;
	__property Height;
	__property HorzScrollBar;
	__property KeyPreview = {default=0};
	__property PixelsPerInch;
	__property ParentFont = {default=0};
	__property PopupMenu;
	__property PrintScale = {default=1};
	__property Scaled = {default=1};
	__property ShowHint;
	__property VertScrollBar;
	__property Visible = {default=0};
	__property Width;
	__property OnActivate;
	__property OnClick;
	__property OnClose;
	__property OnContextPopup;
	__property OnCreate;
	__property OnDblClick;
	__property OnDestroy;
	__property OnDeactivate;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnHide;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnPaint;
	__property OnResize;
	__property OnShow;
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TPropertyPage(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TCustomForm(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TPropertyPage(HWND ParentWindow) : Vcl::Forms::TCustomForm(ParentWindow) { }
	
};


#ifndef _WIN64
typedef System::TMetaClass* TPropertyPageClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TPropertyPageClass);
#endif /* _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TPropertyPageImpl : public System::TAggregatedObject
{
	typedef System::TAggregatedObject inherited;
	
private:
	TPropertyPage* FPropertyPage;
	_di_IPropertyPageSite FPageSite;
	bool FActive;
	bool FModified;
	void __fastcall Modified();
	
protected:
	HRESULT __stdcall SetPageSite(const _di_IPropertyPageSite pageSite);
	HRESULT __stdcall Activate(HWND hwndParent, const System::Types::TRect &rc, System::LongBool bModal);
	HRESULT __stdcall Deactivate();
	HRESULT __stdcall GetPageInfo(/* out */ tagPROPPAGEINFO &pageInfo);
	HRESULT __stdcall SetObjects(int cObjects, Winapi::Activex::PUnknownList pUnkList);
	HRESULT __stdcall Show(int nCmdShow);
	HRESULT __stdcall Move(const System::Types::TRect &rect);
	HRESULT __stdcall IsPageDirty();
	HRESULT __stdcall Apply();
	HRESULT __stdcall Help(System::WideChar * pszHelpDir);
	HRESULT __stdcall TranslateAccelerator(Winapi::Windows::PMsg msg);
	HRESULT __stdcall EditProperty(int dispid);
	
public:
	__fastcall TPropertyPageImpl(const System::_di_IInterface Controller);
	__fastcall virtual ~TPropertyPageImpl();
	virtual void __fastcall InitPropertyPage();
	__property TPropertyPage* PropertyPage = {read=FPropertyPage, write=FPropertyPage};
private:
	void *__IPropertyPage2;	// IPropertyPage2 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {01E44665-24AC-101B-84ED-08002B2EC713}
	operator _di_IPropertyPage2()
	{
		_di_IPropertyPage2 intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IPropertyPage2*(void) { return (IPropertyPage2*)&__IPropertyPage2; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {B196B28D-BAB4-101A-B69C-00AA00341D07}
	operator _di_IPropertyPage()
	{
		_di_IPropertyPage intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IPropertyPage*(void) { return (IPropertyPage*)&__IPropertyPage2; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00000000-0000-0000-C000-000000000046}
	operator System::_di_IInterface()
	{
		System::_di_IInterface intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator System::IInterface*(void) { return (System::IInterface*)&__IPropertyPage2; }
	#endif
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TActiveXPropertyPage : public System::Win::Comobj::TComObject
{
	typedef System::Win::Comobj::TComObject inherited;
	
private:
	TPropertyPageImpl* FPropertyPageImpl;
	
public:
	__fastcall virtual ~TActiveXPropertyPage();
	virtual void __fastcall Initialize();
	__property TPropertyPageImpl* PropertyPageImpl = {read=FPropertyPageImpl};
public:
	/* TComObject.Create */ inline __fastcall TActiveXPropertyPage() : System::Win::Comobj::TComObject() { }
	/* TComObject.CreateAggregated */ inline __fastcall TActiveXPropertyPage(const System::_di_IInterface Controller) : System::Win::Comobj::TComObject(Controller) { }
	/* TComObject.CreateFromFactory */ inline __fastcall TActiveXPropertyPage(System::Win::Comobj::TComObjectFactory* Factory, const System::_di_IInterface Controller) : System::Win::Comobj::TComObject(Factory, Controller) { }
	
private:
	void *__IPropertyPage2;	// IPropertyPage2 
	void *__IPropertyPage;	// IPropertyPage 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {01E44665-24AC-101B-84ED-08002B2EC713}
	operator _di_IPropertyPage2()
	{
		_di_IPropertyPage2 intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IPropertyPage2*(void) { return (IPropertyPage2*)&__IPropertyPage2; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {B196B28D-BAB4-101A-B69C-00AA00341D07}
	operator _di_IPropertyPage()
	{
		_di_IPropertyPage intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IPropertyPage*(void) { return (IPropertyPage*)&__IPropertyPage; }
	#endif
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TActiveXPropertyPageFactory : public System::Win::Comobj::TComObjectFactory
{
	typedef System::Win::Comobj::TComObjectFactory inherited;
	
public:
	__fastcall TActiveXPropertyPageFactory(System::Win::Comobj::TComServerObject* ComServer, TPropertyPageClass PropertyPageClass, const GUID &ClassID);
	virtual System::Win::Comobj::TComObject* __fastcall CreateComObject(const System::_di_IInterface Controller);
public:
	/* TComObjectFactory.Destroy */ inline __fastcall virtual ~TActiveXPropertyPageFactory() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCustomAdapter : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	System::_di_IInterface FOleObject;
	int FConnection;
	System::_di_IInterface FNotifier;
	
protected:
	bool Updating;
	virtual void __fastcall Changed();
	void __fastcall ConnectOleObject(System::_di_IInterface OleObject);
	void __fastcall ReleaseOleObject();
	virtual void __fastcall Update() = 0 ;
	
public:
	__fastcall TCustomAdapter();
	__fastcall virtual ~TCustomAdapter();
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TAdapterNotifier : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	TCustomAdapter* FAdapter;
	
protected:
	HRESULT __stdcall OnChanged(int dispid);
	HRESULT __stdcall OnRequestEdit(int dispid);
	
public:
	__fastcall TAdapterNotifier(TCustomAdapter* Adapter);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TAdapterNotifier() { }
	
private:
	void *__IPropertyNotifySink;	// IPropertyNotifySink 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {9BFBBC02-EFF1-101A-84ED-00AA00341D07}
	operator _di_IPropertyNotifySink()
	{
		_di_IPropertyNotifySink intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IPropertyNotifySink*(void) { return (IPropertyNotifySink*)&__IPropertyNotifySink; }
	#endif
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

__interface  INTERFACE_UUID("{CBA55CA0-0E57-11D0-BD2F-0020AF0E5B81}") IFontAccess  : public System::IInterface 
{
	virtual void __fastcall GetOleFont(_di_IFontDisp &OleFont) = 0 ;
	virtual void __fastcall SetOleFont(const _di_IFontDisp OleFont) = 0 ;
};

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFontAdapter : public TCustomAdapter
{
	typedef TCustomAdapter inherited;
	
private:
	Vcl::Graphics::TFont* FFont;
	
protected:
	void __fastcall GetOleFont(_di_IFontDisp &OleFont);
	void __fastcall SetOleFont(const _di_IFontDisp OleFont);
	virtual void __fastcall Changed();
	virtual void __fastcall Update();
	
public:
	__fastcall TFontAdapter(Vcl::Graphics::TFont* Font);
public:
	/* TCustomAdapter.Destroy */ inline __fastcall virtual ~TFontAdapter() { }
	
private:
	void *__IFontAccess;	// IFontAccess 
	void *__IChangeNotifier;	// Vcl::Graphics::IChangeNotifier 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {CBA55CA0-0E57-11D0-BD2F-0020AF0E5B81}
	operator _di_IFontAccess()
	{
		_di_IFontAccess intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IFontAccess*(void) { return (IFontAccess*)&__IFontAccess; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {1FB62321-44A7-11D0-9E93-0020AF3D82DA}
	operator Vcl::Graphics::_di_IChangeNotifier()
	{
		Vcl::Graphics::_di_IChangeNotifier intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Vcl::Graphics::IChangeNotifier*(void) { return (Vcl::Graphics::IChangeNotifier*)&__IChangeNotifier; }
	#endif
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

__interface  INTERFACE_UUID("{795D4D31-43D7-11D0-9E92-0020AF3D82DA}") IPictureAccess  : public System::IInterface 
{
	virtual void __fastcall GetOlePicture(_di_IPictureDisp &OlePicture) = 0 ;
	virtual void __fastcall SetOlePicture(const _di_IPictureDisp OlePicture) = 0 ;
};

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TPictureAdapter : public TCustomAdapter
{
	typedef TCustomAdapter inherited;
	
private:
	Vcl::Graphics::TPicture* FPicture;
	
protected:
	void __fastcall GetOlePicture(_di_IPictureDisp &OlePicture);
	void __fastcall SetOlePicture(const _di_IPictureDisp OlePicture);
	virtual void __fastcall Update();
	
public:
	__fastcall TPictureAdapter(Vcl::Graphics::TPicture* Picture);
public:
	/* TCustomAdapter.Destroy */ inline __fastcall virtual ~TPictureAdapter() { }
	
private:
	void *__IPictureAccess;	// IPictureAccess 
	void *__IChangeNotifier;	// Vcl::Graphics::IChangeNotifier 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {795D4D31-43D7-11D0-9E92-0020AF3D82DA}
	operator _di_IPictureAccess()
	{
		_di_IPictureAccess intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IPictureAccess*(void) { return (IPictureAccess*)&__IPictureAccess; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {1FB62321-44A7-11D0-9E93-0020AF3D82DA}
	operator Vcl::Graphics::_di_IChangeNotifier()
	{
		Vcl::Graphics::_di_IChangeNotifier intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Vcl::Graphics::IChangeNotifier*(void) { return (Vcl::Graphics::IChangeNotifier*)&__IChangeNotifier; }
	#endif
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TOleGraphic : public Vcl::Graphics::TGraphic
{
	typedef Vcl::Graphics::TGraphic inherited;
	
private:
	_di_IPicture FPicture;
	int __fastcall GetMMHeight();
	int __fastcall GetMMWidth();
	
protected:
	virtual void __fastcall Changed(System::TObject* Sender);
	virtual void __fastcall Draw(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &Rect);
	virtual bool __fastcall GetEmpty();
	virtual int __fastcall GetHeight();
	virtual HPALETTE __fastcall GetPalette();
	virtual bool __fastcall GetTransparent();
	virtual int __fastcall GetWidth();
	virtual void __fastcall SetHeight(int Value);
	virtual void __fastcall SetPalette(HPALETTE Value);
	virtual void __fastcall SetWidth(int Value);
	
public:
	__fastcall virtual TOleGraphic()/* overload */;
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual void __fastcall LoadFromFile(const System::UnicodeString Filename);
	virtual void __fastcall LoadFromStream(System::Classes::TStream* Stream);
	virtual void __fastcall SaveToStream(System::Classes::TStream* Stream);
	virtual void __fastcall LoadFromClipboardFormat(System::Word AFormat, NativeUInt AData, HPALETTE APalette);
	virtual void __fastcall SaveToClipboardFormat(System::Word &AFormat, NativeUInt &AData, HPALETTE &APalette);
	__property int MMHeight = {read=GetMMHeight, nodefault};
	__property int MMWidth = {read=GetMMWidth, nodefault};
	__property _di_IPicture Picture = {read=FPicture, write=FPicture};
public:
	/* TGraphic.Destroy */ inline __fastcall virtual ~TOleGraphic() { }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TStringsAdapter : public System::Win::Comobj::TAutoIntfObject
{
	typedef System::Win::Comobj::TAutoIntfObject inherited;
	
private:
	System::Classes::TStrings* FStrings;
	
protected:
	void __fastcall ReferenceStrings(System::Classes::TStrings* S);
	void __fastcall ReleaseStrings();
	HRESULT __safecall Get_ControlDefault(int Index, System::OleVariant &__Get_ControlDefault_result);
	HRESULT __safecall Set_ControlDefault(int Index, System::OleVariant Value);
	HRESULT __safecall Count(int &__Count_result);
	HRESULT __safecall Get_Item(int Index, System::OleVariant &__Get_Item_result);
	HRESULT __safecall Set_Item(int Index, System::OleVariant Value);
	HRESULT __safecall Remove(int Index);
	HRESULT __safecall Clear();
	HRESULT __safecall Add(System::OleVariant Item, int &__Add_result);
	HRESULT __safecall _NewEnum(System::_di_IInterface &___NewEnum_result);
	
public:
	__fastcall TStringsAdapter(System::Classes::TStrings* Strings);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TStringsAdapter() { }
	
private:
	void *__IStringsAdapter;	// System::Classes::IStringsAdapter 
	void *__IStrings;	// System::Win::Stdvcl::IStrings 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {739C2F34-52EC-11D0-9EA6-0020AF3D82DA}
	operator System::Classes::_di_IStringsAdapter()
	{
		System::Classes::_di_IStringsAdapter intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator System::Classes::IStringsAdapter*(void) { return (System::Classes::IStringsAdapter*)&__IStringsAdapter; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {EE05DFE2-5549-11D0-9EA9-0020AF3D82DA}
	operator System::Win::Stdvcl::_di_IStrings()
	{
		System::Win::Stdvcl::_di_IStrings intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator System::Win::Stdvcl::IStrings*(void) { return (System::Win::Stdvcl::IStrings*)&__IStrings; }
	#endif
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TReflectorWindow : public Vcl::Controls::TWinControl
{
	typedef Vcl::Controls::TWinControl inherited;
	
private:
	Vcl::Controls::TControl* FControl;
	bool FInSize;
	MESSAGE void __fastcall WMGetDlgCode(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Message);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	
protected:
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	
public:
	__fastcall TReflectorWindow(HWND ParentWindow, Vcl::Controls::TControl* Control);
public:
	/* TWinControl.CreateParented */ inline __fastcall TReflectorWindow(HWND ParentWindow) : Vcl::Controls::TWinControl(ParentWindow) { }
	/* TWinControl.Destroy */ inline __fastcall virtual ~TReflectorWindow() { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE GUID Class_DColorPropPage;
extern DELPHI_PACKAGE GUID Class_DFontPropPage;
extern DELPHI_PACKAGE GUID Class_DPicturePropPage;
extern DELPHI_PACKAGE GUID Class_DStringPropPage;
extern DELPHI_PACKAGE HWND __fastcall ParkingWindow(void);
extern DELPHI_PACKAGE void __fastcall EnumDispatchProperties(_di_IDispatch Dispatch, const GUID &PropType, int VTCode, System::Classes::TStrings* PropList);
extern DELPHI_PACKAGE void __fastcall GetOleFont(Vcl::Graphics::TFont* Font, _di_IFontDisp &OleFont);
extern DELPHI_PACKAGE void __fastcall SetOleFont(Vcl::Graphics::TFont* Font, _di_IFontDisp OleFont);
extern DELPHI_PACKAGE void __fastcall GetOlePicture(Vcl::Graphics::TPicture* Picture, _di_IPictureDisp &OlePicture);
extern DELPHI_PACKAGE void __fastcall SetOlePicture(Vcl::Graphics::TPicture* Picture, _di_IPictureDisp OlePicture);
extern DELPHI_PACKAGE void __fastcall GetOleStrings(System::Classes::TStrings* Strings, System::Win::Stdvcl::_di_IStrings &OleStrings);
extern DELPHI_PACKAGE void __fastcall SetOleStrings(System::Classes::TStrings* Strings, System::Win::Stdvcl::_di_IStrings OleStrings);
}	/* namespace Axctrls */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_AXCTRLS)
using namespace Vcl::Axctrls;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_AxctrlsHPP
