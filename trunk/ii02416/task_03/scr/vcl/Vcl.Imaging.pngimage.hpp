// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.Imaging.pngimage.pas' rev: 35.00 (Windows)

#ifndef Vcl_Imaging_PngimageHPP
#define Vcl_Imaging_PngimageHPP

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
#include <System.SysUtils.hpp>
#include <System.ZLib.hpp>
#include <Vcl.Imaging.pnglang.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

#ifdef USEPACKAGES
 #pragma link "vclimg.bpi"
#else
 #pragma comment(lib, "vclimg")
#endif
#pragma link "Vcl.Imaging.pngimage"

namespace Vcl
{
namespace Imaging
{
namespace Pngimage
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS EPNGOutMemory;
class DELPHICLASS EPngError;
class DELPHICLASS EPngUnexpectedEnd;
class DELPHICLASS EPngInvalidCRC;
class DELPHICLASS EPngInvalidIHDR;
class DELPHICLASS EPNGMissingMultipleIDAT;
class DELPHICLASS EPNGZLIBError;
class DELPHICLASS EPNGInvalidPalette;
class DELPHICLASS EPNGInvalidFileHeader;
class DELPHICLASS EPNGIHDRNotFirst;
class DELPHICLASS EPNGNotExists;
class DELPHICLASS EPNGSizeExceeds;
class DELPHICLASS EPNGMissingPalette;
class DELPHICLASS EPNGUnknownCriticalChunk;
class DELPHICLASS EPNGUnknownCompression;
class DELPHICLASS EPNGUnknownInterlace;
class DELPHICLASS EPNGUnknownColorType;
class DELPHICLASS EPNGNoImageData;
class DELPHICLASS EPNGCouldNotLoadResource;
class DELPHICLASS EPNGCannotChangeTransparent;
class DELPHICLASS EPNGHeaderNotPresent;
class DELPHICLASS EPNGInvalidNewSize;
class DELPHICLASS EPNGInvalidSpec;
class DELPHICLASS EPNGInvalidBitDepth;
struct TMAXBITMAPINFO;
struct TRGBPixel;
class DELPHICLASS TPNGPointerList;
class DELPHICLASS TPNGList;
class DELPHICLASS TPngImage;
class DELPHICLASS TChunk;
class DELPHICLASS TChunkIEND;
struct TIHDRData;
class DELPHICLASS TChunkIHDR;
class DELPHICLASS TChunkpHYs;
class DELPHICLASS TChunkgAMA;
struct TZStreamRec2;
class DELPHICLASS TChunkPLTE;
class DELPHICLASS TChunktRNS;
class DELPHICLASS TChunkIDAT;
class DELPHICLASS TChunktIME;
class DELPHICLASS TChunktEXt;
class DELPHICLASS TChunkzTXt;
//-- type declarations -------------------------------------------------------
typedef System::StaticArray<System::UnicodeString, 9> Vcl_Imaging_Pngimage__1;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EPNGOutMemory : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EPNGOutMemory(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EPNGOutMemory(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EPNGOutMemory(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EPNGOutMemory(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EPNGOutMemory(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EPNGOutMemory(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EPNGOutMemory(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EPNGOutMemory(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPNGOutMemory(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPNGOutMemory(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPNGOutMemory(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPNGOutMemory(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EPNGOutMemory() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EPngError : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EPngError(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EPngError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EPngError(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EPngError(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EPngError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EPngError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EPngError(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EPngError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPngError(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPngError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPngError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPngError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EPngError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EPngUnexpectedEnd : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EPngUnexpectedEnd(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EPngUnexpectedEnd(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EPngUnexpectedEnd(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EPngUnexpectedEnd(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EPngUnexpectedEnd(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EPngUnexpectedEnd(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EPngUnexpectedEnd(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EPngUnexpectedEnd(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPngUnexpectedEnd(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPngUnexpectedEnd(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPngUnexpectedEnd(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPngUnexpectedEnd(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EPngUnexpectedEnd() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EPngInvalidCRC : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EPngInvalidCRC(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EPngInvalidCRC(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EPngInvalidCRC(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EPngInvalidCRC(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EPngInvalidCRC(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EPngInvalidCRC(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EPngInvalidCRC(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EPngInvalidCRC(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPngInvalidCRC(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPngInvalidCRC(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPngInvalidCRC(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPngInvalidCRC(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EPngInvalidCRC() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EPngInvalidIHDR : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EPngInvalidIHDR(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EPngInvalidIHDR(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EPngInvalidIHDR(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EPngInvalidIHDR(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EPngInvalidIHDR(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EPngInvalidIHDR(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EPngInvalidIHDR(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EPngInvalidIHDR(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPngInvalidIHDR(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPngInvalidIHDR(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPngInvalidIHDR(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPngInvalidIHDR(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EPngInvalidIHDR() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EPNGMissingMultipleIDAT : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EPNGMissingMultipleIDAT(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EPNGMissingMultipleIDAT(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EPNGMissingMultipleIDAT(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EPNGMissingMultipleIDAT(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EPNGMissingMultipleIDAT(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EPNGMissingMultipleIDAT(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EPNGMissingMultipleIDAT(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EPNGMissingMultipleIDAT(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPNGMissingMultipleIDAT(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPNGMissingMultipleIDAT(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPNGMissingMultipleIDAT(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPNGMissingMultipleIDAT(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EPNGMissingMultipleIDAT() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EPNGZLIBError : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EPNGZLIBError(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EPNGZLIBError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EPNGZLIBError(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EPNGZLIBError(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EPNGZLIBError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EPNGZLIBError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EPNGZLIBError(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EPNGZLIBError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPNGZLIBError(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPNGZLIBError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPNGZLIBError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPNGZLIBError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EPNGZLIBError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EPNGInvalidPalette : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EPNGInvalidPalette(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EPNGInvalidPalette(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EPNGInvalidPalette(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EPNGInvalidPalette(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EPNGInvalidPalette(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EPNGInvalidPalette(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EPNGInvalidPalette(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EPNGInvalidPalette(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPNGInvalidPalette(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPNGInvalidPalette(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPNGInvalidPalette(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPNGInvalidPalette(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EPNGInvalidPalette() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EPNGInvalidFileHeader : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EPNGInvalidFileHeader(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EPNGInvalidFileHeader(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EPNGInvalidFileHeader(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EPNGInvalidFileHeader(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EPNGInvalidFileHeader(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EPNGInvalidFileHeader(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EPNGInvalidFileHeader(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EPNGInvalidFileHeader(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPNGInvalidFileHeader(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPNGInvalidFileHeader(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPNGInvalidFileHeader(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPNGInvalidFileHeader(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EPNGInvalidFileHeader() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EPNGIHDRNotFirst : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EPNGIHDRNotFirst(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EPNGIHDRNotFirst(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EPNGIHDRNotFirst(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EPNGIHDRNotFirst(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EPNGIHDRNotFirst(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EPNGIHDRNotFirst(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EPNGIHDRNotFirst(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EPNGIHDRNotFirst(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPNGIHDRNotFirst(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPNGIHDRNotFirst(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPNGIHDRNotFirst(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPNGIHDRNotFirst(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EPNGIHDRNotFirst() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EPNGNotExists : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EPNGNotExists(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EPNGNotExists(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EPNGNotExists(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EPNGNotExists(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EPNGNotExists(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EPNGNotExists(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EPNGNotExists(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EPNGNotExists(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPNGNotExists(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPNGNotExists(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPNGNotExists(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPNGNotExists(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EPNGNotExists() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EPNGSizeExceeds : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EPNGSizeExceeds(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EPNGSizeExceeds(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EPNGSizeExceeds(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EPNGSizeExceeds(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EPNGSizeExceeds(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EPNGSizeExceeds(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EPNGSizeExceeds(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EPNGSizeExceeds(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPNGSizeExceeds(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPNGSizeExceeds(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPNGSizeExceeds(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPNGSizeExceeds(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EPNGSizeExceeds() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EPNGMissingPalette : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EPNGMissingPalette(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EPNGMissingPalette(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EPNGMissingPalette(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EPNGMissingPalette(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EPNGMissingPalette(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EPNGMissingPalette(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EPNGMissingPalette(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EPNGMissingPalette(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPNGMissingPalette(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPNGMissingPalette(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPNGMissingPalette(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPNGMissingPalette(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EPNGMissingPalette() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EPNGUnknownCriticalChunk : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EPNGUnknownCriticalChunk(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EPNGUnknownCriticalChunk(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EPNGUnknownCriticalChunk(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EPNGUnknownCriticalChunk(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EPNGUnknownCriticalChunk(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EPNGUnknownCriticalChunk(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EPNGUnknownCriticalChunk(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EPNGUnknownCriticalChunk(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPNGUnknownCriticalChunk(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPNGUnknownCriticalChunk(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPNGUnknownCriticalChunk(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPNGUnknownCriticalChunk(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EPNGUnknownCriticalChunk() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EPNGUnknownCompression : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EPNGUnknownCompression(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EPNGUnknownCompression(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EPNGUnknownCompression(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EPNGUnknownCompression(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EPNGUnknownCompression(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EPNGUnknownCompression(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EPNGUnknownCompression(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EPNGUnknownCompression(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPNGUnknownCompression(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPNGUnknownCompression(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPNGUnknownCompression(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPNGUnknownCompression(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EPNGUnknownCompression() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EPNGUnknownInterlace : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EPNGUnknownInterlace(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EPNGUnknownInterlace(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EPNGUnknownInterlace(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EPNGUnknownInterlace(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EPNGUnknownInterlace(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EPNGUnknownInterlace(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EPNGUnknownInterlace(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EPNGUnknownInterlace(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPNGUnknownInterlace(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPNGUnknownInterlace(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPNGUnknownInterlace(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPNGUnknownInterlace(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EPNGUnknownInterlace() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EPNGUnknownColorType : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EPNGUnknownColorType(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EPNGUnknownColorType(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EPNGUnknownColorType(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EPNGUnknownColorType(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EPNGUnknownColorType(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EPNGUnknownColorType(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EPNGUnknownColorType(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EPNGUnknownColorType(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPNGUnknownColorType(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPNGUnknownColorType(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPNGUnknownColorType(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPNGUnknownColorType(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EPNGUnknownColorType() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EPNGNoImageData : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EPNGNoImageData(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EPNGNoImageData(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EPNGNoImageData(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EPNGNoImageData(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EPNGNoImageData(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EPNGNoImageData(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EPNGNoImageData(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EPNGNoImageData(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPNGNoImageData(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPNGNoImageData(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPNGNoImageData(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPNGNoImageData(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EPNGNoImageData() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EPNGCouldNotLoadResource : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EPNGCouldNotLoadResource(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EPNGCouldNotLoadResource(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EPNGCouldNotLoadResource(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EPNGCouldNotLoadResource(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EPNGCouldNotLoadResource(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EPNGCouldNotLoadResource(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EPNGCouldNotLoadResource(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EPNGCouldNotLoadResource(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPNGCouldNotLoadResource(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPNGCouldNotLoadResource(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPNGCouldNotLoadResource(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPNGCouldNotLoadResource(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EPNGCouldNotLoadResource() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EPNGCannotChangeTransparent : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EPNGCannotChangeTransparent(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EPNGCannotChangeTransparent(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EPNGCannotChangeTransparent(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EPNGCannotChangeTransparent(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EPNGCannotChangeTransparent(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EPNGCannotChangeTransparent(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EPNGCannotChangeTransparent(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EPNGCannotChangeTransparent(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPNGCannotChangeTransparent(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPNGCannotChangeTransparent(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPNGCannotChangeTransparent(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPNGCannotChangeTransparent(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EPNGCannotChangeTransparent() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EPNGHeaderNotPresent : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EPNGHeaderNotPresent(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EPNGHeaderNotPresent(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EPNGHeaderNotPresent(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EPNGHeaderNotPresent(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EPNGHeaderNotPresent(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EPNGHeaderNotPresent(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EPNGHeaderNotPresent(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EPNGHeaderNotPresent(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPNGHeaderNotPresent(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPNGHeaderNotPresent(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPNGHeaderNotPresent(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPNGHeaderNotPresent(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EPNGHeaderNotPresent() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EPNGInvalidNewSize : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EPNGInvalidNewSize(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EPNGInvalidNewSize(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EPNGInvalidNewSize(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EPNGInvalidNewSize(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EPNGInvalidNewSize(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EPNGInvalidNewSize(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EPNGInvalidNewSize(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EPNGInvalidNewSize(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPNGInvalidNewSize(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPNGInvalidNewSize(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPNGInvalidNewSize(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPNGInvalidNewSize(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EPNGInvalidNewSize() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EPNGInvalidSpec : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EPNGInvalidSpec(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EPNGInvalidSpec(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EPNGInvalidSpec(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EPNGInvalidSpec(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EPNGInvalidSpec(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EPNGInvalidSpec(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EPNGInvalidSpec(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EPNGInvalidSpec(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPNGInvalidSpec(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPNGInvalidSpec(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPNGInvalidSpec(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPNGInvalidSpec(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EPNGInvalidSpec() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EPNGInvalidBitDepth : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EPNGInvalidBitDepth(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EPNGInvalidBitDepth(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EPNGInvalidBitDepth(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EPNGInvalidBitDepth(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EPNGInvalidBitDepth(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EPNGInvalidBitDepth(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EPNGInvalidBitDepth(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EPNGInvalidBitDepth(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPNGInvalidBitDepth(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPNGInvalidBitDepth(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPNGInvalidBitDepth(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPNGInvalidBitDepth(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EPNGInvalidBitDepth() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef System::StaticArray<tagRGBTRIPLE, 65536> TRGBLine;

typedef TRGBLine *pRGBLine;

struct DECLSPEC_DRECORD TMAXBITMAPINFO
{
public:
	tagBITMAPINFOHEADER bmiHeader;
	System::StaticArray<tagRGBQUAD, 256> bmiColors;
};


enum DECLSPEC_DENUM TPNGTransparencyMode : unsigned char { ptmNone, ptmBit, ptmPartial };

typedef unsigned *pCardinal;

typedef TRGBPixel *pRGBPixel;

struct DECLSPEC_DRECORD TRGBPixel
{
public:
	System::Byte B;
	System::Byte G;
	System::Byte R;
};


typedef System::StaticArray<System::Byte, 65536> TByteArray;

typedef TByteArray *pByteArray;

typedef System::StaticArray<void *, 65536> TPointerArray;

typedef TPointerArray *pPointerArray;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TPNGPointerList : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TPngImage* fOwner;
	unsigned fCount;
	TPointerArray *fMemory;
	void * __fastcall GetItem(unsigned Index);
	void __fastcall SetItem(unsigned Index, const void * Value);
	
protected:
	virtual void * __fastcall Remove(void * Value);
	void __fastcall Insert(void * Value, unsigned Position);
	void __fastcall Add(void * Value);
	__property void * Item[unsigned Index] = {read=GetItem, write=SetItem};
	void __fastcall SetSize(const unsigned Size);
	__property TPngImage* Owner = {read=fOwner};
	
public:
	__property unsigned Count = {read=fCount, write=SetSize, nodefault};
	__fastcall TPNGPointerList(TPngImage* AOwner);
	__fastcall virtual ~TPNGPointerList();
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TChunkClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TChunkClass);
#endif /* _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TPNGList : public TPNGPointerList
{
	typedef TPNGPointerList inherited;
	
private:
	HIDESBASE TChunk* __fastcall GetItem(unsigned Index);
	
public:
	TChunk* __fastcall FindChunk(TChunkClass ChunkClass);
	void __fastcall RemoveChunk(TChunk* Chunk)/* overload */;
	HIDESBASE TChunk* __fastcall Add(TChunkClass ChunkClass);
	TChunk* __fastcall ItemFromClass(TChunkClass ChunkClass);
	__property TChunk* Item[unsigned Index] = {read=GetItem};
public:
	/* TPNGPointerList.Create */ inline __fastcall TPNGList(TPngImage* AOwner) : TPNGPointerList(AOwner) { }
	/* TPNGPointerList.Destroy */ inline __fastcall virtual ~TPNGList() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TInterlaceMethod : unsigned char { imNone, imAdam7 };

typedef System::Int8 TCompressionLevel;

enum DECLSPEC_DENUM TFilter : unsigned char { pfNone, pfSub, pfUp, pfAverage, pfPaeth };

typedef System::Set<TFilter, TFilter::pfNone, TFilter::pfPaeth> TFilters;

class PASCALIMPLEMENTATION TPngImage : public Vcl::Graphics::TGraphic
{
	typedef Vcl::Graphics::TGraphic inherited;
	
protected:
	System::StaticArray<System::Byte, 256> InverseGamma;
	void __fastcall InitializeGamma();
	
private:
	Vcl::Graphics::TCanvas* fCanvas;
	TFilters fFilters;
	TCompressionLevel fCompressionLevel;
	int fMaxIdatSize;
	TInterlaceMethod fInterlaceMethod;
	TPNGList* fChunkList;
	bool fCheckCRC;
	void __fastcall ClearChunks();
	bool __fastcall HeaderPresent();
	void __fastcall GetPixelInfo(unsigned &LineSize, unsigned &Offset);
	void __fastcall SetMaxIdatSize(const int Value);
	pByteArray __fastcall GetAlphaScanline(const int LineIndex);
	void * __fastcall GetScanline(const int LineIndex);
	void * __fastcall GetExtraScanline(const int LineIndex);
	TChunkpHYs* __fastcall GetPixelInformation();
	TPNGTransparencyMode __fastcall GetTransparencyMode();
	System::Uitypes::TColor __fastcall GetTransparentColor();
	void __fastcall SetTransparentColor(const System::Uitypes::TColor Value);
	System::UnicodeString __fastcall GetLibraryVersion();
	
protected:
	bool BeingCreated;
	virtual bool __fastcall GetSupportsPartialTransparency();
	virtual HPALETTE __fastcall GetPalette();
	virtual void __fastcall SetPalette(HPALETTE Value);
	void __fastcall DoSetPalette(HPALETTE Value, const bool UpdateColors);
	virtual int __fastcall GetWidth();
	virtual int __fastcall GetHeight();
	virtual void __fastcall SetWidth(int Value);
	virtual void __fastcall SetHeight(int Value);
	void __fastcall AssignPNG(TPngImage* Source);
	virtual bool __fastcall GetEmpty();
	TChunkIHDR* __fastcall GetHeader();
	void __fastcall DrawPartialTrans(HDC DC, const System::Types::TRect &Rect);
	virtual bool __fastcall GetTransparent();
	virtual System::Uitypes::TColor __fastcall GetPixels(const int X, const int Y);
	virtual void __fastcall SetPixels(const int X, const int Y, const System::Uitypes::TColor Value);
	
public:
	System::StaticArray<System::Byte, 256> GammaTable;
	void __fastcall Resize(const int CX, const int CY);
	void __fastcall CreateAlpha();
	void __fastcall RemoveTransparency();
	__property System::Uitypes::TColor TransparentColor = {read=GetTransparentColor, write=SetTransparentColor, nodefault};
	void __fastcall AddtEXt(const System::AnsiString Keyword, const System::AnsiString Text);
	void __fastcall AddzTXt(const System::AnsiString Keyword, const System::AnsiString Text);
	virtual void __fastcall SaveToClipboardFormat(System::Word &AFormat, NativeUInt &AData, HPALETTE &APalette);
	virtual void __fastcall LoadFromClipboardFormat(System::Word AFormat, NativeUInt AData, HPALETTE APalette);
	void __fastcall RaiseError(System::Sysutils::ExceptClass ExceptionClass, System::UnicodeString Text);
	__property void * Scanline[const int Index] = {read=GetScanline};
	__property void * ExtraScanline[const int Index] = {read=GetExtraScanline};
	bool __fastcall HasPixelInformation();
	__property TChunkpHYs* PixelInformation = {read=GetPixelInformation};
	__property pByteArray AlphaScanline[const int Index] = {read=GetAlphaScanline};
	void __fastcall DrawUsingPixelInformation(Vcl::Graphics::TCanvas* Canvas, const System::Types::TPoint &Point);
	__property Vcl::Graphics::TCanvas* Canvas = {read=fCanvas};
	__property TChunkIHDR* Header = {read=GetHeader};
	__property TPNGTransparencyMode TransparencyMode = {read=GetTransparencyMode, nodefault};
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	void __fastcall AssignHandle(HBITMAP Handle, bool Transparent, unsigned TransparentColor);
	virtual void __fastcall Draw(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &Rect);
	__property int Width = {read=GetWidth, nodefault};
	__property int Height = {read=GetHeight, nodefault};
	__property TInterlaceMethod InterlaceMethod = {read=fInterlaceMethod, write=fInterlaceMethod, nodefault};
	__property TFilters Filters = {read=fFilters, write=fFilters, nodefault};
	__property int MaxIdatSize = {read=fMaxIdatSize, write=SetMaxIdatSize, nodefault};
	__property bool Empty = {read=GetEmpty, nodefault};
	__property TCompressionLevel CompressionLevel = {read=fCompressionLevel, write=fCompressionLevel, nodefault};
	__property TPNGList* Chunks = {read=fChunkList};
	__fastcall virtual TPngImage()/* overload */;
	__fastcall TPngImage(unsigned ColorType, unsigned Bitdepth, int cx, int cy);
	__fastcall virtual ~TPngImage();
	__classmethod virtual bool __fastcall CanLoadFromStream(System::Classes::TStream* Stream);
	virtual void __fastcall LoadFromStream(System::Classes::TStream* Stream);
	virtual void __fastcall SaveToStream(System::Classes::TStream* Stream);
	void __fastcall LoadFromResourceName(NativeUInt Instance, const System::UnicodeString Name);
	void __fastcall LoadFromResourceID(NativeUInt Instance, int ResID);
	__property System::Uitypes::TColor Pixels[const int X][const int Y] = {read=GetPixels, write=SetPixels};
	__property System::UnicodeString Version = {read=GetLibraryVersion};
	__property bool CheckCRC = {read=fCheckCRC, write=fCheckCRC, default=1};
};


typedef TPngImage TPNGObject _DEPRECATED_ATTRIBUTE1("Use TPngImage.") ;

typedef System::StaticArray<char, 4> TChunkName;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TChunk : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	void *fData;
	unsigned fDataSize;
	TPngImage* fOwner;
	TChunkName fName;
	TChunkIHDR* __fastcall GetHeader();
	int __fastcall GetIndex();
	__classmethod virtual System::UnicodeString __fastcall GetName();
	System::AnsiString __fastcall GetChunkName();
	
public:
	__property int Index = {read=GetIndex, nodefault};
	__property TChunkIHDR* Header = {read=GetHeader};
	void __fastcall ResizeData(const unsigned NewSize);
	__property void * Data = {read=fData};
	__property unsigned DataSize = {read=fDataSize, nodefault};
	virtual void __fastcall Assign(TChunk* Source);
	__property TPngImage* Owner = {read=fOwner};
	__fastcall virtual TChunk(TPngImage* Owner);
	__fastcall virtual ~TChunk();
	__property System::AnsiString Name = {read=GetChunkName};
	virtual bool __fastcall LoadFromStream(System::Classes::TStream* Stream, const TChunkName ChunkName, int Size);
	bool __fastcall SaveData(System::Classes::TStream* Stream);
	virtual bool __fastcall SaveToStream(System::Classes::TStream* Stream);
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TChunkIEND : public TChunk
{
	typedef TChunk inherited;
	
public:
	/* TChunk.Create */ inline __fastcall virtual TChunkIEND(TPngImage* Owner) : TChunk(Owner) { }
	/* TChunk.Destroy */ inline __fastcall virtual ~TChunkIEND() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef TIHDRData *pIHDRData;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TIHDRData
{
public:
	unsigned Width;
	unsigned Height;
	System::Byte BitDepth;
	System::Byte ColorType;
	System::Byte CompressionMethod;
	System::Byte FilterMethod;
	System::Byte InterlaceMethod;
};
#pragma pack(pop)


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TChunkIHDR : public TChunk
{
	typedef TChunk inherited;
	
private:
	HBITMAP ImageHandle;
	HDC ImageDC;
	HPALETTE ImagePalette;
	bool HasPalette;
	TMAXBITMAPINFO BitmapInfo;
	void *ExtraImageData;
	void *ImageData;
	void *ImageAlpha;
	TIHDRData IHDRData;
	
protected:
	int BytesPerRow;
	HPALETTE __fastcall CreateGrayscalePalette(int Bitdepth);
	void __fastcall PaletteToDIB(HPALETTE Palette);
	void __fastcall PrepareImageData();
	void __fastcall FreeImageData();
	
public:
#ifndef _WIN64
	__property HBITMAP ImageHandleValue = {read=ImageHandle, nodefault};
#else /* _WIN64 */
	__property HBITMAP ImageHandleValue = {read=ImageHandle};
#endif /* _WIN64 */
	__property unsigned Width = {read=IHDRData.Width, write=IHDRData.Width, nodefault};
	__property unsigned Height = {read=IHDRData.Height, write=IHDRData.Height, nodefault};
	__property System::Byte BitDepth = {read=IHDRData.BitDepth, write=IHDRData.BitDepth, nodefault};
	__property System::Byte ColorType = {read=IHDRData.ColorType, write=IHDRData.ColorType, nodefault};
	__property System::Byte CompressionMethod = {read=IHDRData.CompressionMethod, write=IHDRData.CompressionMethod, nodefault};
	__property System::Byte FilterMethod = {read=IHDRData.FilterMethod, write=IHDRData.FilterMethod, nodefault};
	__property System::Byte InterlaceMethod = {read=IHDRData.InterlaceMethod, write=IHDRData.InterlaceMethod, nodefault};
	virtual bool __fastcall LoadFromStream(System::Classes::TStream* Stream, const TChunkName ChunkName, int Size);
	virtual bool __fastcall SaveToStream(System::Classes::TStream* Stream);
	__fastcall virtual TChunkIHDR(TPngImage* Owner);
	__fastcall virtual ~TChunkIHDR();
	virtual void __fastcall Assign(TChunk* Source);
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TUnitType : unsigned char { utUnknown, utMeter };

typedef TUnitType *pUnitType;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TChunkpHYs : public TChunk
{
	typedef TChunk inherited;
	
private:
	unsigned fPPUnitX;
	unsigned fPPUnitY;
	TUnitType fUnit;
	
public:
	__property unsigned PPUnitX = {read=fPPUnitX, write=fPPUnitX, nodefault};
	__property unsigned PPUnitY = {read=fPPUnitY, write=fPPUnitY, nodefault};
	__property TUnitType UnitType = {read=fUnit, write=fUnit, nodefault};
	virtual bool __fastcall LoadFromStream(System::Classes::TStream* Stream, const TChunkName ChunkName, int Size);
	virtual bool __fastcall SaveToStream(System::Classes::TStream* Stream);
	virtual void __fastcall Assign(TChunk* Source);
public:
	/* TChunk.Create */ inline __fastcall virtual TChunkpHYs(TPngImage* Owner) : TChunk(Owner) { }
	/* TChunk.Destroy */ inline __fastcall virtual ~TChunkpHYs() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TChunkgAMA : public TChunk
{
	typedef TChunk inherited;
	
private:
	unsigned __fastcall GetValue();
	void __fastcall SetValue(const unsigned Value);
	
public:
	__property unsigned Gamma = {read=GetValue, write=SetValue, nodefault};
	virtual bool __fastcall LoadFromStream(System::Classes::TStream* Stream, const TChunkName ChunkName, int Size);
	__fastcall virtual TChunkgAMA(TPngImage* Owner);
	virtual void __fastcall Assign(TChunk* Source);
public:
	/* TChunk.Destroy */ inline __fastcall virtual ~TChunkgAMA() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

struct DECLSPEC_DRECORD TZStreamRec2
{
public:
	System::Zlib::z_stream ZLIB;
	void *Data;
	System::Classes::TStream* fStream;
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TChunkPLTE : public TChunk
{
	typedef TChunk inherited;
	
protected:
	int fCount;
	
private:
	tagRGBQUAD __fastcall GetPaletteItem(System::Byte Index);
	
public:
	__property tagRGBQUAD Item[System::Byte Index] = {read=GetPaletteItem};
	__property int Count = {read=fCount, nodefault};
	virtual bool __fastcall LoadFromStream(System::Classes::TStream* Stream, const TChunkName ChunkName, int Size);
	virtual bool __fastcall SaveToStream(System::Classes::TStream* Stream);
	virtual void __fastcall Assign(TChunk* Source);
public:
	/* TChunk.Create */ inline __fastcall virtual TChunkPLTE(TPngImage* Owner) : TChunk(Owner) { }
	/* TChunk.Destroy */ inline __fastcall virtual ~TChunkPLTE() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TChunktRNS : public TChunk
{
	typedef TChunk inherited;
	
private:
	bool fBitTransparency;
	unsigned __fastcall GetTransparentColor();
	void __fastcall SetTransparentColor(const unsigned Value);
	
public:
	System::StaticArray<System::Byte, 256> PaletteValues;
	__property bool BitTransparency = {read=fBitTransparency, nodefault};
	__property unsigned TransparentColor = {read=GetTransparentColor, write=SetTransparentColor, nodefault};
	virtual bool __fastcall LoadFromStream(System::Classes::TStream* Stream, const TChunkName ChunkName, int Size);
	virtual bool __fastcall SaveToStream(System::Classes::TStream* Stream);
	virtual void __fastcall Assign(TChunk* Source);
public:
	/* TChunk.Create */ inline __fastcall virtual TChunktRNS(TPngImage* Owner) : TChunk(Owner) { }
	/* TChunk.Destroy */ inline __fastcall virtual ~TChunktRNS() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TChunkIDAT : public TChunk
{
	typedef TChunk inherited;
	
private:
	TChunkIHDR* Header;
	int ImageWidth;
	int ImageHeight;
	unsigned Row_Bytes;
	unsigned Offset;
	System::StaticArray<pByteArray, 6> Encode_Buffer;
	System::StaticArray<pByteArray, 2> Row_Buffer;
	bool RowUsed;
	int EndPos;
	void __fastcall FilterRow();
	System::Byte __fastcall FilterToEncode();
	int __fastcall IDATZlibRead(TZStreamRec2 &ZLIBStream, void * Buffer, int Count, int &EndPos, unsigned &crcfile);
	void __fastcall IDATZlibWrite(TZStreamRec2 &ZLIBStream, void * Buffer, const unsigned Length);
	void __fastcall FinishIDATZlib(TZStreamRec2 &ZLIBStream);
	void __fastcall PreparePalette();
	
protected:
	void __fastcall DecodeInterlacedAdam7(System::Classes::TStream* Stream, TZStreamRec2 &ZLIBStream, const int Size, unsigned &crcfile);
	void __fastcall DecodeNonInterlaced(System::Classes::TStream* Stream, TZStreamRec2 &ZLIBStream, const int Size, unsigned &crcfile);
	void __fastcall EncodeNonInterlaced(System::Classes::TStream* Stream, TZStreamRec2 &ZLIBStream);
	void __fastcall EncodeInterlacedAdam7(System::Classes::TStream* Stream, TZStreamRec2 &ZLIBStream);
	void __fastcall CopyNonInterlacedRGB8(System::PByte Src, System::PByte Dest, System::PByte Trans, System::PByte Extra);
	void __fastcall CopyNonInterlacedRGB16(System::PByte Src, System::PByte Dest, System::PByte Trans, System::PByte Extra);
	void __fastcall CopyNonInterlacedPalette148(System::PByte Src, System::PByte Dest, System::PByte Trans, System::PByte Extra);
	void __fastcall CopyNonInterlacedPalette2(System::PByte Src, System::PByte Dest, System::PByte Trans, System::PByte Extra);
	void __fastcall CopyNonInterlacedGray2(System::PByte Src, System::PByte Dest, System::PByte Trans, System::PByte Extra);
	void __fastcall CopyNonInterlacedGrayscale16(System::PByte Src, System::PByte Dest, System::PByte Trans, System::PByte Extra);
	void __fastcall CopyNonInterlacedRGBAlpha8(System::PByte Src, System::PByte Dest, System::PByte Trans, System::PByte Extra);
	void __fastcall CopyNonInterlacedRGBAlpha16(System::PByte Src, System::PByte Dest, System::PByte Trans, System::PByte Extra);
	void __fastcall CopyNonInterlacedGrayscaleAlpha8(System::PByte Src, System::PByte Dest, System::PByte Trans, System::PByte Extra);
	void __fastcall CopyNonInterlacedGrayscaleAlpha16(System::PByte Src, System::PByte Dest, System::PByte Trans, System::PByte Extra);
	void __fastcall CopyInterlacedRGB8(const System::Byte Pass, System::PByte Src, System::PByte Dest, System::PByte Trans, System::PByte Extra);
	void __fastcall CopyInterlacedRGB16(const System::Byte Pass, System::PByte Src, System::PByte Dest, System::PByte Trans, System::PByte Extra);
	void __fastcall CopyInterlacedPalette148(const System::Byte Pass, System::PByte Src, System::PByte Dest, System::PByte Trans, System::PByte Extra);
	void __fastcall CopyInterlacedPalette2(const System::Byte Pass, System::PByte Src, System::PByte Dest, System::PByte Trans, System::PByte Extra);
	void __fastcall CopyInterlacedGray2(const System::Byte Pass, System::PByte Src, System::PByte Dest, System::PByte Trans, System::PByte Extra);
	void __fastcall CopyInterlacedGrayscale16(const System::Byte Pass, System::PByte Src, System::PByte Dest, System::PByte Trans, System::PByte Extra);
	void __fastcall CopyInterlacedRGBAlpha8(const System::Byte Pass, System::PByte Src, System::PByte Dest, System::PByte Trans, System::PByte Extra);
	void __fastcall CopyInterlacedRGBAlpha16(const System::Byte Pass, System::PByte Src, System::PByte Dest, System::PByte Trans, System::PByte Extra);
	void __fastcall CopyInterlacedGrayscaleAlpha8(const System::Byte Pass, System::PByte Src, System::PByte Dest, System::PByte Trans, System::PByte Extra);
	void __fastcall CopyInterlacedGrayscaleAlpha16(const System::Byte Pass, System::PByte Src, System::PByte Dest, System::PByte Trans, System::PByte Extra);
	void __fastcall EncodeNonInterlacedRGB8(System::PByte Src, System::PByte Dest, System::PByte Trans);
	void __fastcall EncodeNonInterlacedRGB16(System::PByte Src, System::PByte Dest, System::PByte Trans);
	void __fastcall EncodeNonInterlacedGrayscale16(System::PByte Src, System::PByte Dest, System::PByte Trans);
	void __fastcall EncodeNonInterlacedPalette148(System::PByte Src, System::PByte Dest, System::PByte Trans);
	void __fastcall EncodeNonInterlacedRGBAlpha8(System::PByte Src, System::PByte Dest, System::PByte Trans);
	void __fastcall EncodeNonInterlacedRGBAlpha16(System::PByte Src, System::PByte Dest, System::PByte Trans);
	void __fastcall EncodeNonInterlacedGrayscaleAlpha8(System::PByte Src, System::PByte Dest, System::PByte Trans);
	void __fastcall EncodeNonInterlacedGrayscaleAlpha16(System::PByte Src, System::PByte Dest, System::PByte Trans);
	void __fastcall EncodeInterlacedRGB8(const System::Byte Pass, System::PByte Src, System::PByte Dest, System::PByte Trans);
	void __fastcall EncodeInterlacedRGB16(const System::Byte Pass, System::PByte Src, System::PByte Dest, System::PByte Trans);
	void __fastcall EncodeInterlacedPalette148(const System::Byte Pass, System::PByte Src, System::PByte Dest, System::PByte Trans);
	void __fastcall EncodeInterlacedGrayscale16(const System::Byte Pass, System::PByte Src, System::PByte Dest, System::PByte Trans);
	void __fastcall EncodeInterlacedRGBAlpha8(const System::Byte Pass, System::PByte Src, System::PByte Dest, System::PByte Trans);
	void __fastcall EncodeInterlacedRGBAlpha16(const System::Byte Pass, System::PByte Src, System::PByte Dest, System::PByte Trans);
	void __fastcall EncodeInterlacedGrayscaleAlpha8(const System::Byte Pass, System::PByte Src, System::PByte Dest, System::PByte Trans);
	void __fastcall EncodeInterlacedGrayscaleAlpha16(const System::Byte Pass, System::PByte Src, System::PByte Dest, System::PByte Trans);
	
public:
	virtual bool __fastcall LoadFromStream(System::Classes::TStream* Stream, const TChunkName ChunkName, int Size);
	virtual bool __fastcall SaveToStream(System::Classes::TStream* Stream);
public:
	/* TChunk.Create */ inline __fastcall virtual TChunkIDAT(TPngImage* Owner) : TChunk(Owner) { }
	/* TChunk.Destroy */ inline __fastcall virtual ~TChunkIDAT() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TChunktIME : public TChunk
{
	typedef TChunk inherited;
	
private:
	System::Word fYear;
	System::Byte fMonth;
	System::Byte fDay;
	System::Byte fHour;
	System::Byte fMinute;
	System::Byte fSecond;
	
public:
	__property System::Word Year = {read=fYear, write=fYear, nodefault};
	__property System::Byte Month = {read=fMonth, write=fMonth, nodefault};
	__property System::Byte Day = {read=fDay, write=fDay, nodefault};
	__property System::Byte Hour = {read=fHour, write=fHour, nodefault};
	__property System::Byte Minute = {read=fMinute, write=fMinute, nodefault};
	__property System::Byte Second = {read=fSecond, write=fSecond, nodefault};
	virtual bool __fastcall LoadFromStream(System::Classes::TStream* Stream, const TChunkName ChunkName, int Size);
	virtual bool __fastcall SaveToStream(System::Classes::TStream* Stream);
	virtual void __fastcall Assign(TChunk* Source);
public:
	/* TChunk.Create */ inline __fastcall virtual TChunktIME(TPngImage* Owner) : TChunk(Owner) { }
	/* TChunk.Destroy */ inline __fastcall virtual ~TChunktIME() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TChunktEXt : public TChunk
{
	typedef TChunk inherited;
	
private:
	System::AnsiString fKeyword;
	System::AnsiString fText;
	
public:
	__property System::AnsiString Keyword = {read=fKeyword, write=fKeyword};
	__property System::AnsiString Text = {read=fText, write=fText};
	virtual bool __fastcall LoadFromStream(System::Classes::TStream* Stream, const TChunkName ChunkName, int Size);
	virtual bool __fastcall SaveToStream(System::Classes::TStream* Stream);
	virtual void __fastcall Assign(TChunk* Source);
public:
	/* TChunk.Create */ inline __fastcall virtual TChunktEXt(TPngImage* Owner) : TChunk(Owner) { }
	/* TChunk.Destroy */ inline __fastcall virtual ~TChunktEXt() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TChunkzTXt : public TChunktEXt
{
	typedef TChunktEXt inherited;
	
public:
	virtual bool __fastcall LoadFromStream(System::Classes::TStream* Stream, const TChunkName ChunkName, int Size);
	virtual bool __fastcall SaveToStream(System::Classes::TStream* Stream);
public:
	/* TChunk.Create */ inline __fastcall virtual TChunkzTXt(TPngImage* Owner) : TChunktEXt(Owner) { }
	/* TChunk.Destroy */ inline __fastcall virtual ~TChunkzTXt() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

//-- var, const, procedure ---------------------------------------------------
#define LibraryVersion L"1.564"
extern DELPHI_PACKAGE Vcl_Imaging_Pngimage__1 ZLIBErrors;
static const System::Int8 Z_NO_FLUSH = System::Int8(0x0);
static const System::Int8 Z_FINISH = System::Int8(0x4);
static const System::Int8 Z_STREAM_END = System::Int8(0x1);
static const System::Int8 FILTER_NONE = System::Int8(0x0);
static const System::Int8 FILTER_SUB = System::Int8(0x1);
static const System::Int8 FILTER_UP = System::Int8(0x2);
static const System::Int8 FILTER_AVERAGE = System::Int8(0x3);
static const System::Int8 FILTER_PAETH = System::Int8(0x4);
static const System::Int8 COLOR_GRAYSCALE = System::Int8(0x0);
static const System::Int8 COLOR_RGB = System::Int8(0x2);
static const System::Int8 COLOR_PALETTE = System::Int8(0x3);
static const System::Int8 COLOR_GRAYSCALEALPHA = System::Int8(0x4);
static const System::Int8 COLOR_RGBALPHA = System::Int8(0x6);
extern DELPHI_PACKAGE unsigned __fastcall update_crc(unsigned crc, pByteArray buf, int len);
extern DELPHI_PACKAGE int __fastcall ByteSwap(const int a);
extern DELPHI_PACKAGE void __fastcall RegisterChunk(TChunkClass ChunkClass);
}	/* namespace Pngimage */
}	/* namespace Imaging */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_IMAGING_PNGIMAGE)
using namespace Vcl::Imaging::Pngimage;
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
#endif	// Vcl_Imaging_PngimageHPP
