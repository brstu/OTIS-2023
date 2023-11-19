// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.ActnColorMaps.pas' rev: 35.00 (Windows)

#ifndef Vcl_ActncolormapsHPP
#define Vcl_ActncolormapsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.ActnMan.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Actncolormaps
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TStandardColorMap;
class DELPHICLASS TXPColorMap;
class DELPHICLASS TTwilightColorMap;
class DELPHICLASS TThemedColorMap;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TStandardColorMap : public Vcl::Actnman::TCustomActionBarColorMap
{
	typedef Vcl::Actnman::TCustomActionBarColorMap inherited;
	
protected:
	virtual void __fastcall SetColor(const System::Uitypes::TColor Value);
	
public:
	virtual void __fastcall UpdateColors();
	
__published:
	__property HighlightColor;
	__property UnusedColor;
	__property BtnFrameColor = {default=-16777201};
	__property BtnSelectedColor = {default=-16777201};
	__property BtnSelectedFont = {default=-16777208};
	__property Color = {default=-16777201};
	__property DisabledFontColor = {default=-16777199};
	__property DisabledFontShadow = {default=-16777196};
	__property FontColor = {default=-16777208};
	__property HotColor = {default=536870912};
	__property HotFontColor = {default=536870912};
	__property MenuColor = {default=-16777201};
	__property FrameTopLeftInner = {default=-16777196};
	__property FrameTopLeftOuter = {default=-16777194};
	__property FrameBottomRightInner = {default=-16777200};
	__property FrameBottomRightOuter = {default=-16777195};
	__property DisabledColor = {default=536870912};
	__property SelectedColor = {default=-16777187};
	__property SelectedFontColor = {default=-16777202};
	__property ShadowColor = {default=-16777200};
	__property OnColorChange;
public:
	/* TCustomActionBarColorMap.Create */ inline __fastcall virtual TStandardColorMap(System::Classes::TComponent* AOwner) : Vcl::Actnman::TCustomActionBarColorMap(AOwner) { }
	/* TCustomActionBarColorMap.Destroy */ inline __fastcall virtual ~TStandardColorMap() { }
	
};


class PASCALIMPLEMENTATION TXPColorMap : public Vcl::Actnman::TCustomActionBarColorMap
{
	typedef Vcl::Actnman::TCustomActionBarColorMap inherited;
	
public:
	virtual void __fastcall UpdateColors();
	
__published:
	__property ShadowColor = {default=-16777195};
	__property Color = {default=-16777201};
	__property DisabledColor = {default=8421504};
	__property DisabledFontColor = {default=-16777199};
	__property DisabledFontShadow = {default=-16777196};
	__property FontColor = {default=-16777208};
	__property HighlightColor;
	__property HotColor = {default=536870912};
	__property HotFontColor = {default=536870912};
	__property MenuColor = {default=-16777211};
	__property FrameTopLeftInner = {default=16777215};
	__property FrameTopLeftOuter = {default=8029834};
	__property FrameBottomRightInner = {default=16777215};
	__property FrameBottomRightOuter = {default=8029834};
	__property BtnFrameColor = {default=13003057};
	__property BtnSelectedColor = {default=16777215};
	__property BtnSelectedFont = {default=-16777208};
	__property SelectedColor = {default=15717318};
	__property SelectedFontColor = {default=0};
	__property UnusedColor;
	__property OnColorChange;
public:
	/* TCustomActionBarColorMap.Create */ inline __fastcall virtual TXPColorMap(System::Classes::TComponent* AOwner) : Vcl::Actnman::TCustomActionBarColorMap(AOwner) { }
	/* TCustomActionBarColorMap.Destroy */ inline __fastcall virtual ~TXPColorMap() { }
	
};


class PASCALIMPLEMENTATION TTwilightColorMap : public Vcl::Actnman::TCustomActionBarColorMap
{
	typedef Vcl::Actnman::TCustomActionBarColorMap inherited;
	
public:
	virtual void __fastcall UpdateColors();
	
__published:
	__property Color = {default=0};
	__property DisabledFontColor = {default=-16777199};
	__property DisabledFontShadow = {default=0};
	__property FontColor = {default=16777215};
	__property HighlightColor;
	__property HotColor = {default=536870912};
	__property HotFontColor = {default=16777215};
	__property FrameTopLeftInner = {default=0};
	__property FrameTopLeftOuter = {default=-16777195};
	__property FrameBottomRightInner = {default=0};
	__property FrameBottomRightOuter = {default=-16777195};
	__property BtnFrameColor = {default=-16777195};
	__property BtnSelectedColor = {default=-16777195};
	__property BtnSelectedFont = {default=0};
	__property MenuColor = {default=0};
	__property DisabledColor = {default=536870912};
	__property SelectedColor = {default=-16777195};
	__property SelectedFontColor = {default=0};
	__property ShadowColor = {default=0};
	__property UnusedColor = {default=0};
	__property OnColorChange;
public:
	/* TCustomActionBarColorMap.Create */ inline __fastcall virtual TTwilightColorMap(System::Classes::TComponent* AOwner) : Vcl::Actnman::TCustomActionBarColorMap(AOwner) { }
	/* TCustomActionBarColorMap.Destroy */ inline __fastcall virtual ~TTwilightColorMap() { }
	
};


class PASCALIMPLEMENTATION TThemedColorMap : public Vcl::Actnman::TCustomActionBarColorMap
{
	typedef Vcl::Actnman::TCustomActionBarColorMap inherited;
	
public:
	virtual void __fastcall UpdateColors();
	
__published:
	__property ShadowColor = {default=-16777195};
	__property Color = {default=-16777186};
	__property DisabledColor = {default=8421504};
	__property DisabledFontColor = {default=-16777199};
	__property DisabledFontShadow = {default=16578548};
	__property FontColor = {default=0};
	__property HighlightColor;
	__property HotColor = {default=536870912};
	__property HotFontColor = {default=536870912};
	__property MenuColor = {default=-16777212};
	__property FrameTopLeftInner = {default=16578548};
	__property FrameTopLeftOuter = {default=6579300};
	__property FrameBottomRightInner = {default=16578548};
	__property FrameBottomRightOuter = {default=6579300};
	__property BtnFrameColor = {default=6579300};
	__property BtnSelectedColor = {default=-16777187};
	__property BtnSelectedFont = {default=-16777208};
	__property SelectedColor = {default=-16777187};
	__property SelectedFontColor = {default=0};
	__property UnusedColor;
	__property OnColorChange;
public:
	/* TCustomActionBarColorMap.Create */ inline __fastcall virtual TThemedColorMap(System::Classes::TComponent* AOwner) : Vcl::Actnman::TCustomActionBarColorMap(AOwner) { }
	/* TCustomActionBarColorMap.Destroy */ inline __fastcall virtual ~TThemedColorMap() { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const int cXPFrameOuter = int(0x7a868a);
static const int cXPBtnFrameColor = int(0xc66931);
static const int cXPSelectedColor = int(0xefd3c6);
}	/* namespace Actncolormaps */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_ACTNCOLORMAPS)
using namespace Vcl::Actncolormaps;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_ActncolormapsHPP
