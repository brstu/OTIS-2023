// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.IMouse.pas' rev: 35.00 (Windows)

#ifndef Vcl_ImouseHPP
#define Vcl_ImouseHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Graphics.hpp>
#include <System.Classes.hpp>
#include <Winapi.Messages.hpp>
#include <Winapi.Windows.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Imouse
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TPanningWindow;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TPanDirection : unsigned char { pdUp, pdDown, pdLeft, pdRight };

typedef System::Set<TPanDirection, TPanDirection::pdUp, TPanDirection::pdRight> TPanDirections;

enum DECLSPEC_DENUM TPanOption : unsigned char { poVertical, poHorizontal };

typedef System::Set<TPanOption, TPanOption::poVertical, TPanOption::poHorizontal> TPanOptions;

typedef void __fastcall (__closure *TUpdateEvent)(System::TObject* Sender, System::Types::TPoint &Delta, TPanDirections &CursorDirection);

class PASCALIMPLEMENTATION TPanningWindow : public Vcl::Controls::TCustomPanningWindow
{
	typedef Vcl::Controls::TCustomPanningWindow inherited;
	
private:
	Vcl::Extctrls::TTimer* FTimer;
	System::Types::TPoint FOrg;
	System::Types::TPoint FLastPos;
	TPanOptions FPanOptions;
	bool FPanning;
	Vcl::Graphics::TIcon* FImg;
	System::Uitypes::TCursor FOldCursor;
	TPanDirections FDirection;
	int FImgWidth;
	int FImgHeight;
	TUpdateEvent FOnUpdate;
	Vcl::Controls::TControl* FPanControl;
	void __fastcall DoWheelTimer(System::TObject* Sender);
	void __fastcall MakeImageRegion();
	void __fastcall UpdateCursor(System::Types::TPoint &Pt);
	int __fastcall GetPanInterval();
	void __fastcall SetPanInterval(const int Value);
	Vcl::Controls::TControl* __fastcall GetPanControl();
	
protected:
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	DYNAMIC void __fastcall DoUpdate(System::Types::TPoint &Delta, TPanDirections &CursorDirection);
	virtual TPanOptions __fastcall GetPanOptions();
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall Paint();
	virtual void __fastcall SetPanCursor(TPanDirections ADirection);
	virtual void __fastcall UpdateScroll(const System::Types::TPoint &Pt);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Msg);
	
public:
	__fastcall virtual TPanningWindow(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TPanningWindow();
	virtual bool __fastcall GetIsPanning();
	virtual bool __fastcall StartPanning(NativeUInt AHandle, Vcl::Controls::TControl* AControl);
	virtual void __fastcall StopPanning();
	__property bool IsPanning = {read=GetIsPanning, nodefault};
	__property Vcl::Controls::TControl* PanControl = {read=GetPanControl};
	__property int PanInterval = {read=GetPanInterval, write=SetPanInterval, nodefault};
	__property TPanOptions PanOptions = {read=GetPanOptions, nodefault};
	__property TUpdateEvent OnUpdate = {read=FOnUpdate, write=FOnUpdate};
public:
	/* TWinControl.CreateParented */ inline __fastcall TPanningWindow(HWND ParentWindow) : Vcl::Controls::TCustomPanningWindow(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Uitypes::TCursor crPanAll = System::Uitypes::TCursor(-50);
static const System::Uitypes::TCursor crPanDown = System::Uitypes::TCursor(-51);
static const System::Uitypes::TCursor crPanDownLeft = System::Uitypes::TCursor(-52);
static const System::Uitypes::TCursor crPanDownRight = System::Uitypes::TCursor(-53);
static const System::Uitypes::TCursor crPanLeft = System::Uitypes::TCursor(-54);
static const System::Uitypes::TCursor crPanLeftRight = System::Uitypes::TCursor(-55);
static const System::Uitypes::TCursor crPanRight = System::Uitypes::TCursor(-56);
static const System::Uitypes::TCursor crPanUp = System::Uitypes::TCursor(-57);
static const System::Uitypes::TCursor crPanUpDown = System::Uitypes::TCursor(-58);
static const System::Uitypes::TCursor crPanUpLeft = System::Uitypes::TCursor(-59);
static const System::Uitypes::TCursor crPanUpRight = System::Uitypes::TCursor(-60);
extern DELPHI_PACKAGE bool __fastcall StartPan(NativeUInt WndHandle, Vcl::Controls::TControl* AControl);
}	/* namespace Imouse */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_IMOUSE)
using namespace Vcl::Imouse;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_ImouseHPP
