// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.Imaging.jpeg.pas' rev: 35.00 (Windows)

#ifndef Vcl_Imaging_JpegHPP
#define Vcl_Imaging_JpegHPP

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
#include <Vcl.Graphics.hpp>

//-- user supplied -----------------------------------------------------------

#ifdef USEPACKAGES
 #pragma link "vclimg.bpi"
#else
 #pragma comment(lib, "vclimg")
#endif
#pragma link "Vcl.Imaging.jpeg"

namespace Vcl
{
namespace Imaging
{
namespace Jpeg
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TJPEGData;
class DELPHICLASS TJPEGImage;
struct TJPEGDefaults;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TJPEGData : public Vcl::Graphics::TSharedImage
{
	typedef Vcl::Graphics::TSharedImage inherited;
	
private:
	System::Classes::TCustomMemoryStream* FData;
	int FHeight;
	int FWidth;
	bool FGrayscale;
	
protected:
	virtual void __fastcall FreeHandle();
	
public:
	__fastcall virtual ~TJPEGData();
public:
	/* TObject.Create */ inline __fastcall TJPEGData() : Vcl::Graphics::TSharedImage() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef System::Int8 TJPEGQualityRange;

enum DECLSPEC_DENUM TJPEGPerformance : unsigned int { jpBestQuality, jpBestSpeed };

enum DECLSPEC_DENUM TJPEGScale : unsigned int { jsFullSize, jsHalf, jsQuarter, jsEighth };

enum DECLSPEC_DENUM TJPEGPixelFormat : unsigned int { jf24Bit, jf8Bit };

class PASCALIMPLEMENTATION TJPEGImage : public Vcl::Graphics::TGraphic
{
	typedef Vcl::Graphics::TGraphic inherited;
	
private:
	TJPEGData* FImage;
	Vcl::Graphics::TBitmap* FBitmap;
	int FScaledWidth;
	int FScaledHeight;
	HPALETTE FTempPal;
	bool FSmoothing;
	bool FGrayScale;
	TJPEGPixelFormat FPixelFormat;
	TJPEGQualityRange FQuality;
	bool FProgressiveDisplay;
	bool FProgressiveEncoding;
	TJPEGPerformance FPerformance;
	TJPEGScale FScale;
	bool FNeedRecalc;
	void __fastcall CalcOutputDimensions();
	Vcl::Graphics::TBitmap* __fastcall GetBitmap();
	Vcl::Graphics::TCanvas* __fastcall GetCanvas();
	bool __fastcall GetGrayscale();
	void __fastcall SetGrayscale(bool Value);
	void __fastcall SetPerformance(TJPEGPerformance Value);
	void __fastcall SetPixelFormat(TJPEGPixelFormat Value);
	void __fastcall SetScale(TJPEGScale Value);
	void __fastcall SetSmoothing(bool Value);
	
protected:
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	virtual void __fastcall Changed(System::TObject* Sender);
	virtual void __fastcall Draw(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &Rect);
	virtual bool __fastcall Equals(Vcl::Graphics::TGraphic* Graphic)/* overload */;
	void __fastcall FreeBitmap();
	virtual bool __fastcall GetEmpty();
	virtual int __fastcall GetHeight();
	virtual HPALETTE __fastcall GetPalette();
	virtual int __fastcall GetWidth();
	void __fastcall NewBitmap();
	void __fastcall NewImage();
	virtual void __fastcall ReadData(System::Classes::TStream* Stream);
	void __fastcall ReadStream(int Size, System::Classes::TStream* Stream);
	virtual void __fastcall SetHeight(int Value);
	virtual void __fastcall SetPalette(HPALETTE Value);
	virtual void __fastcall SetWidth(int Value);
	virtual void __fastcall WriteData(System::Classes::TStream* Stream);
	__property Vcl::Graphics::TBitmap* Bitmap = {read=GetBitmap};
	
public:
	__fastcall virtual TJPEGImage()/* overload */;
	__fastcall virtual ~TJPEGImage();
	void __fastcall Compress();
	void __fastcall DIBNeeded();
	void __fastcall JPEGNeeded();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__classmethod virtual bool __fastcall CanLoadFromStream(System::Classes::TStream* Stream);
	virtual void __fastcall LoadFromStream(System::Classes::TStream* Stream);
	virtual void __fastcall SaveToStream(System::Classes::TStream* Stream);
	virtual void __fastcall LoadFromClipboardFormat(System::Word AFormat, NativeUInt AData, HPALETTE APalette);
	virtual void __fastcall SaveToClipboardFormat(System::Word &AFormat, NativeUInt &AData, HPALETTE &APalette);
	__property bool Grayscale = {read=GetGrayscale, write=SetGrayscale, nodefault};
	__property bool ProgressiveEncoding = {read=FProgressiveEncoding, write=FProgressiveEncoding, nodefault};
	__property TJPEGQualityRange CompressionQuality = {read=FQuality, write=FQuality, nodefault};
	__property TJPEGPixelFormat PixelFormat = {read=FPixelFormat, write=SetPixelFormat, nodefault};
	__property bool ProgressiveDisplay = {read=FProgressiveDisplay, write=FProgressiveDisplay, nodefault};
	__property TJPEGPerformance Performance = {read=FPerformance, write=SetPerformance, nodefault};
	__property TJPEGScale Scale = {read=FScale, write=SetScale, nodefault};
	__property bool Smoothing = {read=FSmoothing, write=SetSmoothing, nodefault};
	__property Vcl::Graphics::TCanvas* Canvas = {read=GetCanvas};
	/* Hoisted overloads: */
	
public:
	inline bool __fastcall  Equals(System::TObject* Obj){ return Vcl::Graphics::TGraphic::Equals(Obj); }
	
};


struct DECLSPEC_DRECORD TJPEGDefaults
{
public:
	TJPEGQualityRange CompressionQuality;
	bool Grayscale;
	TJPEGPerformance Performance;
	TJPEGPixelFormat PixelFormat;
	bool ProgressiveDisplay;
	bool ProgressiveEncoding;
	TJPEGScale Scale;
	bool Smoothing;
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE TJPEGDefaults JPEGDefaults;
}	/* namespace Jpeg */
}	/* namespace Imaging */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_IMAGING_JPEG)
using namespace Vcl::Imaging::Jpeg;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_IMAGING)
using namespace Vcl::Imaging;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_Imaging_JpegHPP
