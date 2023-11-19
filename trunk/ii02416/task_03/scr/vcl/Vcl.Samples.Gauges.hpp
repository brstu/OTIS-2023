// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.Samples.Gauges.pas' rev: 35.00 (Windows)

#ifndef Vcl_Samples_GaugesHPP
#define Vcl_Samples_GaugesHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.StdCtrls.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Menus.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Samples
{
namespace Gauges
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TGauge;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TGaugeKind : unsigned char { gkText, gkHorizontalBar, gkVerticalBar, gkPie, gkNeedle };

class PASCALIMPLEMENTATION TGauge : public Vcl::Controls::TGraphicControl
{
	typedef Vcl::Controls::TGraphicControl inherited;
	
private:
	int FMinValue;
	int FMaxValue;
	int FCurValue;
	TGaugeKind FKind;
	bool FShowText;
	Vcl::Forms::TFormBorderStyle FBorderStyle;
	System::Uitypes::TColor FForeColor;
	System::Uitypes::TColor FBackColor;
	void __fastcall PaintBackground(Vcl::Graphics::TBitmap* AnImage);
	void __fastcall PaintAsText(Vcl::Graphics::TBitmap* AnImage, const System::Types::TRect &PaintRect);
	void __fastcall PaintAsNothing(Vcl::Graphics::TBitmap* AnImage, const System::Types::TRect &PaintRect);
	void __fastcall PaintAsBar(Vcl::Graphics::TBitmap* AnImage, const System::Types::TRect &PaintRect);
	void __fastcall PaintAsPie(Vcl::Graphics::TBitmap* AnImage, const System::Types::TRect &PaintRect);
	void __fastcall PaintAsNeedle(Vcl::Graphics::TBitmap* AnImage, const System::Types::TRect &PaintRect);
	void __fastcall SetGaugeKind(TGaugeKind Value);
	void __fastcall SetShowText(bool Value);
	void __fastcall SetBorderStyle(Vcl::Forms::TBorderStyle Value);
	void __fastcall SetForeColor(System::Uitypes::TColor Value);
	void __fastcall SetBackColor(System::Uitypes::TColor Value);
	void __fastcall SetMinValue(int Value);
	void __fastcall SetMaxValue(int Value);
	void __fastcall SetProgress(int Value);
	int __fastcall GetPercentDone();
	
protected:
	virtual void __fastcall Paint();
	
public:
	__fastcall virtual TGauge(System::Classes::TComponent* AOwner);
	void __fastcall AddProgress(int Value);
	__property int PercentDone = {read=GetPercentDone, nodefault};
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property System::Uitypes::TColor BackColor = {read=FBackColor, write=SetBackColor, default=16777215};
	__property Vcl::Forms::TBorderStyle BorderStyle = {read=FBorderStyle, write=SetBorderStyle, default=1};
	__property Color = {default=-16777211};
	__property Constraints;
	__property Enabled = {default=1};
	__property System::Uitypes::TColor ForeColor = {read=FForeColor, write=SetForeColor, default=0};
	__property Font;
	__property TGaugeKind Kind = {read=FKind, write=SetGaugeKind, default=1};
	__property int MinValue = {read=FMinValue, write=SetMinValue, default=0};
	__property int MaxValue = {read=FMaxValue, write=SetMaxValue, default=100};
	__property ParentColor = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property int Progress = {read=FCurValue, write=SetProgress, nodefault};
	__property ShowHint;
	__property bool ShowText = {read=FShowText, write=SetShowText, default=1};
	__property Visible = {default=1};
public:
	/* TGraphicControl.Destroy */ inline __fastcall virtual ~TGauge() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Gauges */
}	/* namespace Samples */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_SAMPLES_GAUGES)
using namespace Vcl::Samples::Gauges;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_SAMPLES)
using namespace Vcl::Samples;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_Samples_GaugesHPP
