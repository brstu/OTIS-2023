// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.Direct2D.pas' rev: 35.00 (Windows)

#ifndef Vcl_Direct2dHPP
#define Vcl_Direct2dHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Vcl.Controls.hpp>
#include <Winapi.D2D1.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <System.SysUtils.hpp>
#include <System.Generics.Collections.hpp>
#include <System.UITypes.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Direct2d
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS EDirect2DException;
class DELPHICLASS TDirect2DGraphicsObject;
class DELPHICLASS TDirect2DBrush;
class DELPHICLASS TDirect2DPen;
class DELPHICLASS TDirect2DFont;
class DELPHICLASS TDirect2DCanvas;
class DELPHICLASS TD2DScaledGraphicDrawer;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EDirect2DException : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EDirect2DException(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EDirect2DException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EDirect2DException(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EDirect2DException(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EDirect2DException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EDirect2DException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EDirect2DException(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EDirect2DException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EDirect2DException(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EDirect2DException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EDirect2DException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EDirect2DException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EDirect2DException() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TDirect2DGraphicsObject : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	System::Classes::TNotifyEvent FOnChange;
	TDirect2DCanvas* FOwner;
	
protected:
	DYNAMIC void __fastcall Changed();
	DYNAMIC void __fastcall ReleaseHandle();
	
public:
	__fastcall TDirect2DGraphicsObject(TDirect2DCanvas* AOwner);
	__fastcall virtual ~TDirect2DGraphicsObject();
	__property TDirect2DCanvas* Owner = {read=FOwner};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
};


class PASCALIMPLEMENTATION TDirect2DBrush : public TDirect2DGraphicsObject
{
	typedef TDirect2DGraphicsObject inherited;
	
private:
	Vcl::Graphics::TBitmap* FBitmap;
	Winapi::D2d1::_di_ID2D1Brush FBrush;
	System::Uitypes::TColor FColor;
	Vcl::Graphics::TBrushStyle FStyle;
	Vcl::Graphics::TBitmap* __fastcall GetBitmap();
	void __fastcall SetBitmap(Vcl::Graphics::TBitmap* const Value);
	void __fastcall BitmapChanged(System::TObject* Sender);
	
protected:
	System::Uitypes::TColor __fastcall GetColor();
	Winapi::D2d1::_di_ID2D1Brush __fastcall GetHandle();
	Vcl::Graphics::TBrushStyle __fastcall GetStyle();
	void __fastcall SetColor(const System::Uitypes::TColor Value);
	void __fastcall SetHandle(const Winapi::D2d1::_di_ID2D1Brush Value);
	void __fastcall SetStyle(const Vcl::Graphics::TBrushStyle Value);
	DYNAMIC void __fastcall ReleaseHandle();
	
public:
	__fastcall TDirect2DBrush(TDirect2DCanvas* Owner);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__fastcall virtual ~TDirect2DBrush();
	
__published:
	__property Vcl::Graphics::TBitmap* Bitmap = {read=GetBitmap, write=SetBitmap};
	__property System::Uitypes::TColor Color = {read=GetColor, write=SetColor, nodefault};
	__property Vcl::Graphics::TBrushStyle Style = {read=GetStyle, write=SetStyle, nodefault};
	__property Winapi::D2d1::_di_ID2D1Brush Handle = {read=GetHandle, write=SetHandle};
};


class PASCALIMPLEMENTATION TDirect2DPen : public TDirect2DGraphicsObject
{
	typedef TDirect2DGraphicsObject inherited;
	
private:
	TDirect2DBrush* FBrush;
	Winapi::D2d1::_di_ID2D1StrokeStyle FStrokeStyle;
	Vcl::Graphics::TPenStyle FStyle;
	int FWidth;
	
protected:
	TDirect2DBrush* __fastcall GetBrush();
	System::Uitypes::TColor __fastcall GetColor();
	Vcl::Graphics::TPenStyle __fastcall GetStyle();
	void __fastcall SetBrush(TDirect2DBrush* const Value);
	void __fastcall SetColor(System::Uitypes::TColor Color);
	void __fastcall SetStyle(const Vcl::Graphics::TPenStyle Value);
	DYNAMIC void __fastcall ReleaseHandle();
	
public:
	__fastcall TDirect2DPen(TDirect2DCanvas* Owner);
	__fastcall virtual ~TDirect2DPen();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property TDirect2DBrush* Brush = {read=GetBrush, write=SetBrush};
	__property System::Uitypes::TColor Color = {read=GetColor, write=SetColor, default=0};
	__property Winapi::D2d1::_di_ID2D1StrokeStyle StrokeStyle = {read=FStrokeStyle};
	__property Vcl::Graphics::TPenStyle Style = {read=GetStyle, write=SetStyle, default=0};
	__property int Width = {read=FWidth, write=FWidth, default=1};
};


class PASCALIMPLEMENTATION TDirect2DFont : public TDirect2DGraphicsObject
{
	typedef TDirect2DGraphicsObject inherited;
	
private:
	TDirect2DBrush* FBrush;
	int FHeight;
	System::Uitypes::TFontName FName;
	int FOrientation;
	System::Uitypes::TFontPitch FPitch;
	System::Uitypes::TFontStyles FStyle;
	int FPixelsPerInch;
	
protected:
	TDirect2DBrush* __fastcall GetBrush();
	System::Uitypes::TColor __fastcall GetColor();
	Winapi::D2d1::_di_IDWriteTextFormat __fastcall GetHandle();
	int __fastcall GetHeight();
	int __fastcall GetSize();
	void __fastcall SetHeight(const int Value);
	void __fastcall SetSize(const int Value);
	void __fastcall SetBrush(TDirect2DBrush* const Value);
	void __fastcall SetColor(const System::Uitypes::TColor Value);
	DYNAMIC void __fastcall ReleaseHandle();
	
public:
	__fastcall TDirect2DFont(TDirect2DCanvas* AOwner);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__fastcall virtual ~TDirect2DFont();
	__property Winapi::D2d1::_di_IDWriteTextFormat Handle = {read=GetHandle};
	
__published:
	__property System::Uitypes::TColor Color = {read=GetColor, write=SetColor, nodefault};
	__property TDirect2DBrush* Brush = {read=GetBrush, write=SetBrush};
	__property int PixelsPerInch = {read=FPixelsPerInch, write=FPixelsPerInch, nodefault};
	__property int Height = {read=GetHeight, write=SetHeight, nodefault};
	__property System::Uitypes::TFontName Name = {read=FName, write=FName};
	__property int Orientation = {read=FOrientation, write=FOrientation, default=0};
	__property System::Uitypes::TFontPitch Pitch = {read=FPitch, write=FPitch, default=0};
	__property int Size = {read=GetSize, write=SetSize, nodefault};
	__property System::Uitypes::TFontStyles Style = {read=FStyle, write=FStyle, nodefault};
};


class PASCALIMPLEMENTATION TDirect2DCanvas : public Vcl::Graphics::TCustomCanvas
{
	typedef Vcl::Graphics::TCustomCanvas inherited;
	
private:
	static System::Sysutils::TUncertainState FSupported;
	static D2D1_DRAW_TEXT_OPTIONS FDefaultDrawTextOption;
	
private:
	TDirect2DPen* FPen;
	TDirect2DFont* FFont;
	TDirect2DBrush* FBrush;
	System::Generics::Collections::TList__1<TDirect2DGraphicsObject*>* FD2DObjects;
	D2D1_DRAW_TEXT_OPTIONS FDrawTextOption;
	HDC FDC;
	HWND FHwnd;
	System::Types::TRect FSubRect;
	Winapi::D2d1::_di_ID2D1RenderTarget FRenderTarget;
	System::Types::TPoint FPenPos;
	void __fastcall InitResources();
	
private:
	// __classmethod void __fastcall Create@();
	
protected:
	TDirect2DBrush* __fastcall GetBrush();
	TDirect2DFont* __fastcall GetFont();
	TDirect2DPen* __fastcall GetPen();
	virtual System::Types::TPoint __fastcall GetPenPos();
	Winapi::D2d1::_di_ID2D1RenderTarget __fastcall GetRenderTarget();
	void __fastcall SetBrush(TDirect2DBrush* const Value);
	void __fastcall SetFont(TDirect2DFont* const Value);
	void __fastcall SetPen(TDirect2DPen* const Value);
	virtual void __fastcall SetPenPos(const System::Types::TPoint &Value);
	virtual Vcl::Graphics::TCanvasOrientation __fastcall GetCanvasOrientation();
	virtual System::Types::TRect __fastcall GetClipRect();
	virtual System::Uitypes::TColor __fastcall GetPixel(int X, int Y);
	virtual void __fastcall SetPixel(int X, int Y, System::Uitypes::TColor Value);
	void __fastcall Notification(TDirect2DGraphicsObject* AD2DObject, System::Classes::TOperation Operation);
	virtual void __fastcall RequiredState(Vcl::Graphics::TCanvasState ReqState);
	void __fastcall CreateRenderTarget();
	
public:
	__classmethod bool __fastcall Supported();
	__fastcall TDirect2DCanvas(HDC DC, const System::Types::TRect &SubRect)/* overload */;
	__fastcall TDirect2DCanvas(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &SubRect)/* overload */;
	__fastcall TDirect2DCanvas(HWND Handle)/* overload */;
	__fastcall virtual ~TDirect2DCanvas();
	Winapi::D2d1::_di_ID2D1Brush __fastcall CreateBrush(System::Uitypes::TColor Color)/* overload */;
	Winapi::D2d1::_di_ID2D1Brush __fastcall CreateBrush(Vcl::Graphics::TBitmap* Bitmap)/* overload */;
	Winapi::D2d1::_di_ID2D1Brush __fastcall CreateBrush(System::Uitypes::TColor *Colors, const int Colors_High, const D2D_POINT_2F &StartPoint, const D2D_POINT_2F &EndPoint)/* overload */;
	Winapi::D2d1::_di_ID2D1Brush __fastcall CreateBrush(System::Uitypes::TColor *Colors, const int Colors_High, const D2D_POINT_2F &Center, const D2D_POINT_2F &Offset, float RadiusX, float RadiusY)/* overload */;
	Winapi::D2d1::_di_ID2D1Bitmap __fastcall CreateBitmap(Vcl::Graphics::TBitmap* Bitmap);
	void __fastcall BeginDraw();
	void __fastcall EndDraw();
	void __fastcall DrawEllipse(const D2D1_ELLIPSE &Ellipse);
	void __fastcall DrawGeometry(Winapi::D2d1::_di_ID2D1Geometry Geometry);
	void __fastcall DrawLine(const D2D_POINT_2F &Point0, const D2D_POINT_2F &Point1);
	void __fastcall DrawRectangle(const D2D_RECT_F &Rect);
	void __fastcall DrawRoundedRectangle(const D2D1_ROUNDED_RECT &RoundedRect);
	void __fastcall FillEllipse(const D2D1_ELLIPSE &Ellipse);
	void __fastcall FillGeometry(Winapi::D2d1::_di_ID2D1Geometry Geometry);
	void __fastcall FillRectangle(const D2D_RECT_F &Rect);
	void __fastcall FillRoundedRectangle(const D2D1_ROUNDED_RECT &roundedRect);
	virtual void __fastcall Arc(int X1, int Y1, int X2, int Y2, int X3, int Y3, int X4, int Y4);
	virtual void __fastcall ArcTo(int X1, int Y1, int X2, int Y2, int X3, int Y3, int X4, int Y4);
	virtual void __fastcall AngleArc(int X, int Y, unsigned Radius, float StartAngle, float SweepAngle);
	virtual void __fastcall Chord(int X1, int Y1, int X2, int Y2, int X3, int Y3, int X4, int Y4);
	virtual void __fastcall FillRect(const System::Types::TRect &Rect);
	virtual void __fastcall FrameRect(const System::Types::TRect &Rect);
	virtual void __fastcall Ellipse(int X1, int Y1, int X2, int Y2)/* overload */;
	virtual void __fastcall Rectangle(int X1, int Y1, int X2, int Y2)/* overload */;
	virtual void __fastcall RoundRect(int X1, int Y1, int X2, int Y2, int X3, int Y3)/* overload */;
	virtual void __fastcall Draw(int X, int Y, Vcl::Graphics::TGraphic* Graphic)/* overload */;
	virtual void __fastcall Draw(int X, int Y, Vcl::Graphics::TGraphic* Graphic, System::Byte Opacity)/* overload */;
	virtual void __fastcall StretchDraw(const System::Types::TRect &Rect, Vcl::Graphics::TGraphic* Graphic)/* overload */;
	HIDESBASE void __fastcall StretchDraw(const System::Types::TRect &Rect, Vcl::Graphics::TGraphic* Graphic, System::Byte Opacity)/* overload */;
	virtual void __fastcall Pie(int X1, int Y1, int X2, int Y2, int X3, int Y3, int X4, int Y4);
	virtual void __fastcall PolyBezier(const System::Types::TPoint *Points, const int Points_High);
	virtual void __fastcall Polygon(const System::Types::TPoint *Points, const int Points_High);
	virtual void __fastcall Polyline(const System::Types::TPoint *Points, const int Points_High);
	virtual void __fastcall LineTo(int X, int Y);
	virtual void __fastcall MoveTo(int X, int Y);
	virtual void __fastcall PolyBezierTo(const System::Types::TPoint *Points, const int Points_High);
	virtual void __fastcall Refresh();
	virtual System::Types::TSize __fastcall TextExtent(const System::UnicodeString Text);
	virtual void __fastcall TextOut(int X, int Y, const System::UnicodeString Text);
	virtual void __fastcall TextRect(System::Types::TRect &Rect, System::UnicodeString &Text, Vcl::Graphics::TTextFormat TextFormat = Vcl::Graphics::TTextFormat() )/* overload */;
	virtual void __fastcall TextRect(const System::Types::TRect &Rect, int X, int Y, const System::UnicodeString Text)/* overload */;
	virtual void __fastcall BrushCopy(const System::Types::TRect &Dest, Vcl::Graphics::TBitmap* Bitmap, const System::Types::TRect &Source, System::Uitypes::TColor Color);
	virtual void __fastcall DrawFocusRect(const System::Types::TRect &Rect);
	virtual void __fastcall FloodFill(int X, int Y, System::Uitypes::TColor Color, Vcl::Graphics::TFillStyle FillStyle);
	__property Winapi::D2d1::_di_ID2D1RenderTarget RenderTarget = {read=GetRenderTarget};
	__property D2D1_DRAW_TEXT_OPTIONS DrawTextOption = {read=FDrawTextOption, write=FDrawTextOption, nodefault};
	__property TDirect2DBrush* Brush = {read=GetBrush, write=SetBrush};
	__property TDirect2DPen* Pen = {read=GetPen, write=SetPen};
	__property TDirect2DFont* Font = {read=GetFont, write=SetFont};
	
private:
	// __classmethod void __fastcall Destroy@();
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  Ellipse(const System::Types::TRect &Rect){ Vcl::Graphics::TCustomCanvas::Ellipse(Rect); }
	inline void __fastcall  Rectangle(const System::Types::TRect &Rect){ Vcl::Graphics::TCustomCanvas::Rectangle(Rect); }
	inline void __fastcall  RoundRect(const System::Types::TRect &Rect, int CX, int CY){ Vcl::Graphics::TCustomCanvas::RoundRect(Rect, CX, CY); }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TD2DScaledGraphicDrawer : public Vcl::Graphics::TScaledGraphicDrawer
{
	typedef Vcl::Graphics::TScaledGraphicDrawer inherited;
	
private:
	Vcl::Graphics::TWICImage* FScaledWICBuffer;
	Vcl::Graphics::TBitmap* FScaledBuffer;
	
protected:
	virtual bool __fastcall GetInitialized();
	
public:
	__fastcall virtual ~TD2DScaledGraphicDrawer();
	virtual void __fastcall Initialize();
	virtual void __fastcall Draw(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect)/* overload */;
public:
	/* TScaledGraphicDrawer.Create */ inline __fastcall virtual TD2DScaledGraphicDrawer(Vcl::Graphics::TGraphic* AGraphic, bool AInitialize) : Vcl::Graphics::TScaledGraphicDrawer(AGraphic, AInitialize) { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE Winapi::D2d1::_di_ID2D1Factory __fastcall D2DFactory(D2D1_FACTORY_TYPE factoryType = (D2D1_FACTORY_TYPE)(0x0), Winapi::D2d1::PD2D1FactoryOptions factoryOptions = (Winapi::D2d1::PD2D1FactoryOptions)(0x0));
extern DELPHI_PACKAGE Winapi::D2d1::_di_IDWriteFactory __fastcall DWriteFactory(DWRITE_FACTORY_TYPE factoryType = (DWRITE_FACTORY_TYPE)(0x0));
extern DELPHI_PACKAGE D3DCOLORVALUE __fastcall D2D1ColorF(const System::Uitypes::TColor AColor)/* overload */;
extern DELPHI_PACKAGE D3DCOLORVALUE __fastcall D2D1ColorF(const System::Uitypes::TColor AColor, float Alpha)/* overload */;
}	/* namespace Direct2d */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_DIRECT2D)
using namespace Vcl::Direct2d;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_Direct2dHPP
