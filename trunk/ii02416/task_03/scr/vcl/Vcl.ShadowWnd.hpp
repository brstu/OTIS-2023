// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.ShadowWnd.pas' rev: 35.00 (Windows)

#ifndef Vcl_ShadowwndHPP
#define Vcl_ShadowwndHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Graphics.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Shadowwnd
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TShadowWindow;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TControlSide : unsigned char { csRight, csBottom };

class PASCALIMPLEMENTATION TShadowWindow : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
private:
	Vcl::Controls::TControl* FControl;
	Vcl::Graphics::TBitmap* FDesktop;
	TControlSide FSide;
	unsigned FRGB;
	System::Word H;
	System::Word L;
	System::Word S;
	int FCachedFade;
	unsigned FCachedclr;
	System::Word FCachedHue;
	System::Word FCachedSat;
	System::Word FCachedLum;
	void __fastcall SetControl(Vcl::Controls::TControl* const Value);
	
protected:
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall Paint();
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Message);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	
public:
	__fastcall virtual TShadowWindow(System::Classes::TComponent* AOwner);
	__fastcall virtual TShadowWindow(System::Classes::TComponent* AOwner, TControlSide ControlSide);
	__fastcall virtual ~TShadowWindow();
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	__property Vcl::Controls::TControl* Control = {read=FControl, write=SetControl};
	__property TControlSide Side = {read=FSide, write=FSide, nodefault};
public:
	/* TWinControl.CreateParented */ inline __fastcall TShadowWindow(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Shadowwnd */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_SHADOWWND)
using namespace Vcl::Shadowwnd;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_ShadowwndHPP
