// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ASPBehavior.pas' rev: 35.00 (Windows)

#ifndef AspbehaviorHPP
#define AspbehaviorHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.OleCtrls.hpp>
#include <Winapi.ActiveX.hpp>
#include <SHDocVw.hpp>
#include <MSHTML.hpp>
#include <mshtmcid.hpp>
#include <idoc.hpp>
#include <System.Contnrs.hpp>
#include <System.Variants.hpp>
#include <System.Win.ComObj.hpp>
#include <WebBrowserEx.hpp>
#include <System.Win.ComObjWrapper.hpp>
#include <WBComp.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Aspbehavior
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TASPBehaviorEvents;
class DELPHICLASS TASPBehavior;
class DELPHICLASS TShowTagsBehaviorWrapper;
class DELPHICLASS TShowTagsBehavior;
class DELPHICLASS TTagBehavior;
class DELPHICLASS TRulerBehavior;
class DELPHICLASS TMessageBehavior;
class DELPHICLASS TFocusBehavior;
class DELPHICLASS TEditFocusBehavior;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TASPBehaviorEvents : public Wbcomp::TBehaviorElementEvents
{
	typedef Wbcomp::TBehaviorElementEvents inherited;
	
protected:
	virtual HRESULT __fastcall DoInvoke(int DispID, const GUID &IID, int LocaleID, System::Word Flags, tagDISPPARAMS &dps, Winapi::Activex::PDispIDList pDispIds, void * VarResult, void * ExcepInfo, void * ArgErr);
public:
	/* TBehaviorElementEvents.Create */ inline __fastcall TASPBehaviorEvents(Wbcomp::TCustomElementBehavior* Behavior, Mshtml::_di_IHTMLElement Element) : Wbcomp::TBehaviorElementEvents(Behavior, Element) { }
	
public:
	/* TEventDispatchEx.Destroy */ inline __fastcall virtual ~TASPBehaviorEvents() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TASPBehavior : public Wbcomp::TCustomPaintedBehavior
{
	typedef Wbcomp::TCustomPaintedBehavior inherited;
	
private:
	bool FDenoteASPControl;
	Vcl::Graphics::TBitmap* FBitmap;
	
protected:
	virtual void __fastcall DoCanvasCreated();
	virtual HRESULT __fastcall DoDraw(const System::Types::TRect &BoundsRect, const System::Types::TRect &UpdateRect, const Wbcomp::TPainterDrawFlags DrawFlags, void * DrawObject);
	virtual Wbcomp::TBehaviorElementEventsClass __fastcall GetElementEventsClass();
	
public:
	virtual void __fastcall Initialize();
	__fastcall virtual ~TASPBehavior();
	__property bool DenoteASPControl = {read=FDenoteASPControl, write=FDenoteASPControl, nodefault};
public:
	/* TComObject.Create */ inline __fastcall TASPBehavior() : Wbcomp::TCustomPaintedBehavior() { }
	/* TComObject.CreateAggregated */ inline __fastcall TASPBehavior(const System::_di_IInterface Controller) : Wbcomp::TCustomPaintedBehavior(Controller) { }
	/* TComObject.CreateFromFactory */ inline __fastcall TASPBehavior(System::Win::Comobj::TComObjectFactory* Factory, const System::_di_IInterface Controller) : Wbcomp::TCustomPaintedBehavior(Factory, Controller) { }
	
};


class PASCALIMPLEMENTATION TShowTagsBehaviorWrapper : public Wbcomp::TBehaviorWrapper
{
	typedef Wbcomp::TBehaviorWrapper inherited;
	
private:
	System::Classes::TStringList* FIgnoreTags;
	System::Uitypes::TColor FTagColor;
	void __fastcall SetIgnoreTags(System::Classes::TStringList* const Value);
	
protected:
	virtual void __fastcall DoCreated(System::Win::Comobjwrapper::TWrappedComObject* const ComObj);
	virtual System::Win::Comobj::TComClass __fastcall GetComClass();
	
public:
	__fastcall virtual TShowTagsBehaviorWrapper(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TShowTagsBehaviorWrapper();
	
__published:
	__property System::Classes::TStringList* IgnoreTags = {read=FIgnoreTags, write=SetIgnoreTags};
	__property System::Uitypes::TColor TagColor = {read=FTagColor, write=FTagColor, default=8421504};
};


class PASCALIMPLEMENTATION TShowTagsBehavior : public Wbcomp::TCustomPaintedBehavior
{
	typedef Wbcomp::TCustomPaintedBehavior inherited;
	
private:
	TShowTagsBehaviorWrapper* FTagBehaviorWrapper;
	
protected:
	virtual HRESULT __fastcall DoDraw(const System::Types::TRect &BoundsRect, const System::Types::TRect &UpdateRect, const Wbcomp::TPainterDrawFlags DrawFlags, void * DrawObject);
	virtual void __fastcall DoCanvasCreated();
	
public:
	virtual void __fastcall Initialize();
	__fastcall virtual ~TShowTagsBehavior();
public:
	/* TComObject.Create */ inline __fastcall TShowTagsBehavior() : Wbcomp::TCustomPaintedBehavior() { }
	/* TComObject.CreateAggregated */ inline __fastcall TShowTagsBehavior(const System::_di_IInterface Controller) : Wbcomp::TCustomPaintedBehavior(Controller) { }
	/* TComObject.CreateFromFactory */ inline __fastcall TShowTagsBehavior(System::Win::Comobj::TComObjectFactory* Factory, const System::_di_IInterface Controller) : Wbcomp::TCustomPaintedBehavior(Factory, Controller) { }
	
};


class PASCALIMPLEMENTATION TTagBehavior : public Wbcomp::TCustomPaintedBehavior
{
	typedef Wbcomp::TCustomPaintedBehavior inherited;
	
private:
	Mshtml::_di_IHTMLElement FTag;
	void __fastcall SetTag(const Mshtml::_di_IHTMLElement Value);
	
protected:
	virtual void __fastcall DoCanvasCreated();
	virtual HRESULT __fastcall DoDraw(const System::Types::TRect &BoundsRect, const System::Types::TRect &UpdateRect, const Wbcomp::TPainterDrawFlags DrawFlags, void * DrawObject);
	virtual HRESULT __stdcall Detach();
	
public:
	__property Mshtml::_di_IHTMLElement Tag = {read=FTag, write=SetTag};
public:
	/* TCustomPaintedBehavior.Destroy */ inline __fastcall virtual ~TTagBehavior() { }
	
public:
	/* TComObject.Create */ inline __fastcall TTagBehavior() : Wbcomp::TCustomPaintedBehavior() { }
	/* TComObject.CreateAggregated */ inline __fastcall TTagBehavior(const System::_di_IInterface Controller) : Wbcomp::TCustomPaintedBehavior(Controller) { }
	/* TComObject.CreateFromFactory */ inline __fastcall TTagBehavior(System::Win::Comobj::TComObjectFactory* Factory, const System::_di_IInterface Controller) : Wbcomp::TCustomPaintedBehavior(Factory, Controller) { }
	
};


enum DECLSPEC_DENUM TRulerOption : unsigned char { roLeft, roTop, roBottom, roRight };

typedef System::Set<TRulerOption, TRulerOption::roLeft, TRulerOption::roRight> TRulerOptions;

class PASCALIMPLEMENTATION TRulerBehavior : public Wbcomp::TCustomPaintedBehavior
{
	typedef Wbcomp::TCustomPaintedBehavior inherited;
	
private:
	bool FShowLabels;
	TRulerOptions FRulerOptions;
	int FIncrement;
	System::Uitypes::TColor FLabelColor;
	System::Uitypes::TColor FTickColor;
	void __fastcall SetRulerOptions(const TRulerOptions Value);
	void __fastcall SetShowLabels(const bool Value);
	void __fastcall SetIncrement(const int Value);
	void __fastcall SetLabelColor(const System::Uitypes::TColor Value);
	void __fastcall SetTickColor(const System::Uitypes::TColor Value);
	
protected:
	virtual HRESULT __fastcall DoDraw(const System::Types::TRect &BoundsRect, const System::Types::TRect &UpdateRect, const Wbcomp::TPainterDrawFlags DrawFlags, void * DrawObject);
	virtual void __fastcall DoCanvasCreated();
	void __fastcall Refresh();
	
public:
	virtual void __fastcall Initialize();
	__property int Increment = {read=FIncrement, write=SetIncrement, nodefault};
	__property System::Uitypes::TColor LabelColor = {read=FLabelColor, write=SetLabelColor, nodefault};
	__property TRulerOptions RulerOptions = {read=FRulerOptions, write=SetRulerOptions, nodefault};
	__property bool ShowLabels = {read=FShowLabels, write=SetShowLabels, nodefault};
	__property System::Uitypes::TColor TickColor = {read=FTickColor, write=SetTickColor, nodefault};
public:
	/* TCustomPaintedBehavior.Destroy */ inline __fastcall virtual ~TRulerBehavior() { }
	
public:
	/* TComObject.Create */ inline __fastcall TRulerBehavior() : Wbcomp::TCustomPaintedBehavior() { }
	/* TComObject.CreateAggregated */ inline __fastcall TRulerBehavior(const System::_di_IInterface Controller) : Wbcomp::TCustomPaintedBehavior(Controller) { }
	/* TComObject.CreateFromFactory */ inline __fastcall TRulerBehavior(System::Win::Comobj::TComObjectFactory* Factory, const System::_di_IInterface Controller) : Wbcomp::TCustomPaintedBehavior(Factory, Controller) { }
	
};


class PASCALIMPLEMENTATION TMessageBehavior : public Wbcomp::TCustomPaintedBehavior
{
	typedef Wbcomp::TCustomPaintedBehavior inherited;
	
private:
	Vcl::Graphics::TFont* FFont;
	System::UnicodeString FMessage;
	void __fastcall SetFont(Vcl::Graphics::TFont* const Value);
	void __fastcall SetMessage(const System::UnicodeString Value);
	
protected:
	virtual HRESULT __fastcall DoDraw(const System::Types::TRect &BoundsRect, const System::Types::TRect &UpdateRect, const Wbcomp::TPainterDrawFlags DrawFlags, void * DrawObject);
	void __fastcall FontChanged(System::TObject* Sender);
	
public:
	virtual void __fastcall Initialize();
	__fastcall virtual ~TMessageBehavior();
	__property Vcl::Graphics::TFont* Font = {read=FFont, write=SetFont};
	__property System::UnicodeString Message = {read=FMessage, write=SetMessage};
public:
	/* TComObject.Create */ inline __fastcall TMessageBehavior() : Wbcomp::TCustomPaintedBehavior() { }
	/* TComObject.CreateAggregated */ inline __fastcall TMessageBehavior(const System::_di_IInterface Controller) : Wbcomp::TCustomPaintedBehavior(Controller) { }
	/* TComObject.CreateFromFactory */ inline __fastcall TMessageBehavior(System::Win::Comobj::TComObjectFactory* Factory, const System::_di_IInterface Controller) : Wbcomp::TCustomPaintedBehavior(Factory, Controller) { }
	
};


class PASCALIMPLEMENTATION TFocusBehavior : public Wbcomp::TCustomPaintedBehavior
{
	typedef Wbcomp::TCustomPaintedBehavior inherited;
	
protected:
	virtual HRESULT __fastcall DoDraw(const System::Types::TRect &BoundsRect, const System::Types::TRect &UpdateRect, const Wbcomp::TPainterDrawFlags DrawFlags, void * DrawObject);
	virtual void __fastcall DoCanvasCreated();
public:
	/* TCustomPaintedBehavior.Destroy */ inline __fastcall virtual ~TFocusBehavior() { }
	
public:
	/* TComObject.Create */ inline __fastcall TFocusBehavior() : Wbcomp::TCustomPaintedBehavior() { }
	/* TComObject.CreateAggregated */ inline __fastcall TFocusBehavior(const System::_di_IInterface Controller) : Wbcomp::TCustomPaintedBehavior(Controller) { }
	/* TComObject.CreateFromFactory */ inline __fastcall TFocusBehavior(System::Win::Comobj::TComObjectFactory* Factory, const System::_di_IInterface Controller) : Wbcomp::TCustomPaintedBehavior(Factory, Controller) { }
	
};


class PASCALIMPLEMENTATION TEditFocusBehavior : public Wbcomp::TCustomPaintedBehavior
{
	typedef Wbcomp::TCustomPaintedBehavior inherited;
	
protected:
	virtual HRESULT __fastcall DoDraw(const System::Types::TRect &BoundsRect, const System::Types::TRect &UpdateRect, const Wbcomp::TPainterDrawFlags DrawFlags, void * DrawObject);
	virtual void __fastcall DoCanvasCreated();
	virtual HRESULT __stdcall Detach();
	virtual HRESULT __stdcall GetPainterInfo(/* out */ Mshtml::_HTML_PAINTER_INFO &pInfo);
public:
	/* TCustomPaintedBehavior.Destroy */ inline __fastcall virtual ~TEditFocusBehavior() { }
	
public:
	/* TComObject.Create */ inline __fastcall TEditFocusBehavior() : Wbcomp::TCustomPaintedBehavior() { }
	/* TComObject.CreateAggregated */ inline __fastcall TEditFocusBehavior(const System::_di_IInterface Controller) : Wbcomp::TCustomPaintedBehavior(Controller) { }
	/* TComObject.CreateFromFactory */ inline __fastcall TEditFocusBehavior(System::Win::Comobj::TComObjectFactory* Factory, const System::_di_IInterface Controller) : Wbcomp::TCustomPaintedBehavior(Factory, Controller) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Aspbehavior */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ASPBEHAVIOR)
using namespace Aspbehavior;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AspbehaviorHPP
