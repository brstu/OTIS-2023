// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.Imaging.GIFImg.pas' rev: 35.00 (Windows)

#ifndef Vcl_Imaging_GifimgHPP
#define Vcl_Imaging_GifimgHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <Winapi.Windows.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <System.Classes.hpp>
#include <System.UITypes.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

#ifdef USEPACKAGES
 #pragma link "vclimg.bpi"
#else
 #ifndef _WIN64
  #pragma comment(lib, "vclimg")
 #else
  #pragma link "vclimg.a"
 #endif
#endif
/* automatically link to gifimg.obj so that the property editors are registered */
#pragma link "Vcl.Imaging.GIFImg"


namespace Vcl
{
namespace Imaging
{
namespace Gifimg
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS GIFException;
class DELPHICLASS TGIFItem;
class DELPHICLASS TGIFList;
struct TGIFColor;
struct TUsageCount;
class DELPHICLASS TGIFColorMap;
struct TLogicalScreenDescriptor;
class DELPHICLASS TGIFHeader;
class DELPHICLASS TGIFExtension;
class DELPHICLASS TGIFExtensionList;
struct TImageDescriptor;
class DELPHICLASS TGIFFrame;
class DELPHICLASS TGIFTrailer;
struct TGIFGCERec;
class DELPHICLASS TGIFGraphicControlExtension;
struct TGIFPlainTextExtensionRec;
class DELPHICLASS TGIFTextExtension;
class DELPHICLASS TGIFCommentExtension;
struct TGIFApplicationRec;
class DELPHICLASS TGIFApplicationExtension;
class DELPHICLASS TGIFBlock;
class DELPHICLASS TGIFUnknownAppExtension;
class DELPHICLASS TGIFAppExtNSLoop;
class DELPHICLASS TGIFImageList;
class DELPHICLASS TGIFImage;
class DELPHICLASS TCustomGIFRenderer;
class DELPHICLASS TGIFRenderer;
class DELPHICLASS TColorLookup;
class DELPHICLASS TFastColorLookup;
class DELPHICLASS TSlowColorLookup;
class DELPHICLASS TNetscapeColorLookup;
class DELPHICLASS TGrayWindowsLookup;
class DELPHICLASS TGrayScaleLookup;
class DELPHICLASS TMonochromeLookup;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TGIFVersion : unsigned char { gvUnknown, gv87a, gv89a };

typedef System::StaticArray<char, 3> TGIFVersionRec;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION GIFException : public Vcl::Graphics::EInvalidGraphic
{
	typedef Vcl::Graphics::EInvalidGraphic inherited;
	
public:
	/* Exception.Create */ inline __fastcall GIFException(const System::UnicodeString Msg) : Vcl::Graphics::EInvalidGraphic(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall GIFException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : Vcl::Graphics::EInvalidGraphic(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall GIFException(NativeUInt Ident)/* overload */ : Vcl::Graphics::EInvalidGraphic(Ident) { }
	/* Exception.CreateRes */ inline __fastcall GIFException(System::PResStringRec ResStringRec)/* overload */ : Vcl::Graphics::EInvalidGraphic(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall GIFException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : Vcl::Graphics::EInvalidGraphic(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall GIFException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : Vcl::Graphics::EInvalidGraphic(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall GIFException(const System::UnicodeString Msg, int AHelpContext) : Vcl::Graphics::EInvalidGraphic(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall GIFException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Vcl::Graphics::EInvalidGraphic(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall GIFException(NativeUInt Ident, int AHelpContext)/* overload */ : Vcl::Graphics::EInvalidGraphic(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall GIFException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Vcl::Graphics::EInvalidGraphic(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall GIFException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Vcl::Graphics::EInvalidGraphic(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall GIFException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Vcl::Graphics::EInvalidGraphic(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~GIFException() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TGIFSeverity : unsigned char { gsInfo, gsWarning, gsError };

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TGIFItem : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TGIFImage* FImage;
	
protected:
	virtual TGIFVersion __fastcall GetVersion();
	
protected:
	void __fastcall Warning(TGIFSeverity Severity, const System::UnicodeString Msg);
	
public:
	__fastcall virtual TGIFItem(TGIFImage* AImage);
	virtual void __fastcall SaveToStream(System::Classes::TStream* Stream) = 0 ;
	virtual void __fastcall LoadFromStream(System::Classes::TStream* Stream) = 0 ;
	void __fastcall SaveToFile(const System::UnicodeString Filename);
	void __fastcall LoadFromFile(const System::UnicodeString Filename);
	__property TGIFVersion Version = {read=GetVersion, nodefault};
	__property TGIFImage* Image = {read=FImage};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TGIFItem() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TGIFList : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
public:
	TGIFItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	System::Classes::TList* FItems;
	
protected:
	TGIFItem* __fastcall GetItem(int Index);
	void __fastcall SetItem(int Index, TGIFItem* Item);
	int __fastcall GetCount();
	virtual void __fastcall Warning(TGIFSeverity Severity, System::UnicodeString Message);
	virtual TGIFImage* __fastcall GetImage() = 0 ;
	
public:
	__fastcall TGIFList();
	__fastcall virtual ~TGIFList();
	int __fastcall Add(TGIFItem* Item);
	void __fastcall Clear();
	void __fastcall Delete(int Index);
	void __fastcall Exchange(int Index1, int Index2);
	TGIFItem* __fastcall First();
	int __fastcall IndexOf(TGIFItem* Item);
	void __fastcall Insert(int Index, TGIFItem* Item);
	TGIFItem* __fastcall Last();
	void __fastcall Move(int CurIndex, int NewIndex);
	int __fastcall Remove(TGIFItem* Item);
	virtual void __fastcall SaveToStream(System::Classes::TStream* Stream);
	virtual void __fastcall LoadFromStream(System::Classes::TStream* Stream) = 0 ;
	__property TGIFItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
	__property int Count = {read=GetCount, nodefault};
	__property System::Classes::TList* List = {read=FItems};
	__property TGIFImage* Image = {read=GetImage};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

struct DECLSPEC_DRECORD TGIFColor
{
public:
	System::Byte Red;
	System::Byte Green;
	System::Byte Blue;
};


typedef System::DynamicArray<TGIFColor> TColorMap;

struct DECLSPEC_DRECORD TUsageCount
{
public:
	int Count;
	int Index;
};


typedef System::StaticArray<TUsageCount, 256> TColormapHistogram;

typedef System::StaticArray<System::Byte, 256> TColormapReverse;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TGIFColorMap : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
public:
	System::Uitypes::TColor operator[](int Index) { return this->Colors[Index]; }
	
private:
	TColorMap FColorMap;
	int FCount;
	bool FOptimized;
	
protected:
	System::Uitypes::TColor __fastcall GetColor(int Index);
	void __fastcall SetColor(int Index, System::Uitypes::TColor Value);
	int __fastcall GetBitsPerPixel();
	bool __fastcall DoOptimize();
	void __fastcall SetCapacity(int Size);
	virtual void __fastcall Warning(TGIFSeverity Severity, const System::UnicodeString Msg) = 0 ;
	virtual void __fastcall BuildHistogram(TColormapHistogram &Histogram) = 0 ;
	virtual void __fastcall MapImages(TColormapReverse &Map) = 0 ;
	
public:
	__fastcall TGIFColorMap();
	__fastcall virtual ~TGIFColorMap();
	__classmethod TGIFColor __fastcall Color2RGB(System::Uitypes::TColor Color);
	__classmethod System::Uitypes::TColor __fastcall RGB2Color(TGIFColor Color);
	void __fastcall SaveToStream(System::Classes::TStream* Stream);
	void __fastcall LoadFromStream(System::Classes::TStream* Stream, int ACount);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	int __fastcall IndexOf(System::Uitypes::TColor Color);
	int __fastcall Add(System::Uitypes::TColor Color);
	int __fastcall AddUnique(System::Uitypes::TColor Color);
	void __fastcall Delete(int Index);
	void __fastcall Clear();
	virtual bool __fastcall Optimize() = 0 ;
	virtual void __fastcall Changed() = 0 ;
	void __fastcall ImportPalette(HPALETTE Palette);
	void __fastcall ImportColorTable(void * Pal, int ACount);
	void __fastcall ImportDIBColors(HDC Handle);
	void __fastcall ImportColorMap(const TColorMap Map, int ACount);
	HPALETTE __fastcall ExportPalette();
	__property System::Uitypes::TColor Colors[int Index] = {read=GetColor, write=SetColor/*, default*/};
	__property TColorMap Data = {read=FColorMap};
	__property int Count = {read=FCount, nodefault};
	__property bool Optimized = {read=FOptimized, write=FOptimized, nodefault};
	__property int BitsPerPixel = {read=GetBitsPerPixel, nodefault};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#pragma pack(push,1)
struct DECLSPEC_DRECORD TLogicalScreenDescriptor
{
public:
	System::Word ScreenWidth;
	System::Word ScreenHeight;
	System::Byte PackedFields;
	System::Byte BackgroundColorIndex;
	System::Byte AspectRatio;
};
#pragma pack(pop)


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TGIFHeader : public TGIFItem
{
	typedef TGIFItem inherited;
	
private:
	TLogicalScreenDescriptor FLogicalScreenDescriptor;
	TGIFColorMap* FColorMap;
	
protected:
	virtual TGIFVersion __fastcall GetVersion();
	System::Uitypes::TColor __fastcall GetBackgroundColor();
	void __fastcall SetBackgroundColor(System::Uitypes::TColor Color);
	void __fastcall SetBackgroundColorIndex(System::Byte Index);
	int __fastcall GetBitsPerPixel();
	int __fastcall GetColorResolution();
	
public:
	__fastcall virtual TGIFHeader(TGIFImage* GIFImage);
	__fastcall virtual ~TGIFHeader();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual void __fastcall SaveToStream(System::Classes::TStream* Stream);
	virtual void __fastcall LoadFromStream(System::Classes::TStream* Stream);
	void __fastcall Clear();
	void __fastcall Prepare();
	__property TGIFVersion Version = {read=GetVersion, nodefault};
	__property System::Word Width = {read=FLogicalScreenDescriptor.ScreenWidth, write=FLogicalScreenDescriptor.ScreenWidth, nodefault};
	__property System::Word Height = {read=FLogicalScreenDescriptor.ScreenHeight, write=FLogicalScreenDescriptor.ScreenHeight, nodefault};
	__property System::Byte BackgroundColorIndex = {read=FLogicalScreenDescriptor.BackgroundColorIndex, write=SetBackgroundColorIndex, nodefault};
	__property System::Uitypes::TColor BackgroundColor = {read=GetBackgroundColor, write=SetBackgroundColor, nodefault};
	__property System::Byte AspectRatio = {read=FLogicalScreenDescriptor.AspectRatio, write=FLogicalScreenDescriptor.AspectRatio, nodefault};
	__property TGIFColorMap* ColorMap = {read=FColorMap};
	__property int BitsPerPixel = {read=GetBitsPerPixel, nodefault};
	__property int ColorResolution = {read=GetColorResolution, nodefault};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef System::Byte TGIFExtensionType;

#ifndef _WIN64
typedef System::TMetaClass* TGIFExtensionClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TGIFExtensionClass);
#endif /* _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TGIFExtension : public TGIFItem
{
	typedef TGIFItem inherited;
	
private:
	TGIFFrame* FFrame;
	
protected:
	virtual System::Byte __fastcall GetExtensionType() = 0 ;
	virtual TGIFVersion __fastcall GetVersion();
	System::Byte __fastcall DoReadFromStream(System::Classes::TStream* Stream);
	
public:
	__fastcall virtual TGIFExtension(TGIFFrame* AFrame);
	__fastcall virtual ~TGIFExtension();
	__classmethod void __fastcall RegisterExtension(System::Byte elabel, TGIFExtensionClass eClass);
	__classmethod TGIFExtensionClass __fastcall FindExtension(System::Classes::TStream* Stream);
	__classmethod virtual TGIFExtensionClass __fastcall FindSubExtension(System::Classes::TStream* Stream);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual void __fastcall SaveToStream(System::Classes::TStream* Stream);
	virtual void __fastcall LoadFromStream(System::Classes::TStream* Stream);
	__property System::Byte ExtensionType = {read=GetExtensionType, nodefault};
	__property TGIFFrame* Frame = {read=FFrame};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TGIFExtensionList : public TGIFList
{
	typedef TGIFList inherited;
	
public:
	TGIFExtension* operator[](int Index) { return this->Extensions[Index]; }
	
private:
	TGIFFrame* FFrame;
	
protected:
	TGIFExtension* __fastcall GetExtension(int Index);
	void __fastcall SetExtension(int Index, TGIFExtension* Extension);
	virtual TGIFImage* __fastcall GetImage();
	
public:
	__fastcall TGIFExtensionList(TGIFFrame* AFrame);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual void __fastcall LoadFromStream(System::Classes::TStream* Stream);
	__property TGIFExtension* Extensions[int Index] = {read=GetExtension, write=SetExtension/*, default*/};
	__property TGIFFrame* Frame = {read=FFrame};
public:
	/* TGIFList.Destroy */ inline __fastcall virtual ~TGIFExtensionList() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#pragma pack(push,1)
struct DECLSPEC_DRECORD TImageDescriptor
{
public:
	System::Byte Separator;
	System::Word Left;
	System::Word Top;
	System::Word Width;
	System::Word Height;
	System::Byte PackedFields;
};
#pragma pack(pop)


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TGIFFrame : public TGIFItem
{
	typedef TGIFItem inherited;
	
private:
	Vcl::Graphics::TBitmap* FBitmap;
	HBITMAP FMask;
	bool FNeedMask;
	HPALETTE FLocalPalette;
	System::Byte *FData;
	int FDataSize;
	TGIFColorMap* FColorMap;
	TImageDescriptor FImageDescriptor;
	TGIFExtensionList* FExtensions;
	TGIFGraphicControlExtension* FGCE;
	
private:
	bool __fastcall GetTransparent();
	
protected:
	void __fastcall Prepare();
	void __fastcall Compress(System::Classes::TStream* Stream);
	void __fastcall Decompress(System::Classes::TStream* Stream);
	virtual TGIFVersion __fastcall GetVersion();
	bool __fastcall GetInterlaced();
	void __fastcall SetInterlaced(bool Value);
	int __fastcall GetColorResolution();
	int __fastcall GetBitsPerPixel();
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	Vcl::Graphics::TBitmap* __fastcall DoGetBitmap();
	Vcl::Graphics::TBitmap* __fastcall DoGetDitherBitmap();
	Vcl::Graphics::TBitmap* __fastcall GetBitmap();
	void __fastcall SetBitmap(Vcl::Graphics::TBitmap* Value);
	void __fastcall FreeMask();
	void __fastcall FreePalette();
	bool __fastcall GetEmpty();
	HPALETTE __fastcall GetPalette();
	void __fastcall SetPalette(HPALETTE Value);
	TGIFColorMap* __fastcall GetActiveColorMap();
	System::Types::TRect __fastcall GetBoundsRect();
	void __fastcall SetBoundsRect(const System::Types::TRect &Value);
	void __fastcall DoSetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	System::Types::TRect __fastcall GetClientRect();
	System::Byte __fastcall GetPixel(int x, int y);
	void __fastcall SetPixel(int x, int y, const System::Byte Value);
	void * __fastcall GetScanline(int y);
	void __fastcall SetHeight(const System::Word Value);
	void __fastcall SetLeft(const System::Word Value);
	void __fastcall SetTop(const System::Word Value);
	void __fastcall SetWidth(const System::Word Value);
	void __fastcall NewBitmap();
	void __fastcall FreeBitmap();
	void __fastcall NewImage();
	void __fastcall ClearImage();
	void __fastcall FreeImage();
	void __fastcall NeedImage();
	bool __fastcall HasMask();
	bool __fastcall GetHasBitmap();
	void __fastcall SetHasBitmap(bool Value);
	
protected:
	__property TGIFGraphicControlExtension* GCE = {read=FGCE, write=FGCE};
	
public:
	__fastcall virtual TGIFFrame(TGIFImage* GIFImage);
	__fastcall virtual ~TGIFFrame();
	void __fastcall Clear();
	void __fastcall Dormant();
	virtual void __fastcall SaveToStream(System::Classes::TStream* Stream);
	virtual void __fastcall LoadFromStream(System::Classes::TStream* Stream);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall Draw(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &Rect, bool DoTransparent, bool DoTile);
	void __fastcall StretchDraw(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &Rect, bool DoTransparent, bool DoTile);
	void __fastcall Crop();
	void __fastcall Merge(TGIFFrame* Previous);
	System::Types::TRect __fastcall ScaleRect(const System::Types::TRect &DestRect);
	__property bool HasBitmap = {read=GetHasBitmap, write=SetHasBitmap, nodefault};
	__property System::Word Left = {read=FImageDescriptor.Left, write=SetLeft, nodefault};
	__property System::Word Top = {read=FImageDescriptor.Top, write=SetTop, nodefault};
	__property System::Word Width = {read=FImageDescriptor.Width, write=SetWidth, nodefault};
	__property System::Word Height = {read=FImageDescriptor.Height, write=SetHeight, nodefault};
	__property System::Types::TRect BoundsRect = {read=GetBoundsRect, write=SetBoundsRect};
	__property System::Types::TRect ClientRect = {read=GetClientRect};
	__property bool Interlaced = {read=GetInterlaced, write=SetInterlaced, nodefault};
	__property TGIFColorMap* ColorMap = {read=FColorMap};
	__property TGIFColorMap* ActiveColorMap = {read=GetActiveColorMap};
	__property System::PByte Data = {read=FData};
	__property int DataSize = {read=FDataSize, nodefault};
	__property TGIFExtensionList* Extensions = {read=FExtensions};
	__property TGIFVersion Version = {read=GetVersion, nodefault};
	__property int ColorResolution = {read=GetColorResolution, nodefault};
	__property int BitsPerPixel = {read=GetBitsPerPixel, nodefault};
	__property Vcl::Graphics::TBitmap* Bitmap = {read=GetBitmap, write=SetBitmap};
#ifndef _WIN64
	__property HBITMAP Mask = {read=FMask, nodefault};
	__property HPALETTE Palette = {read=GetPalette, write=SetPalette, nodefault};
#else /* _WIN64 */
	__property HBITMAP Mask = {read=FMask};
	__property HPALETTE Palette = {read=GetPalette, write=SetPalette};
#endif /* _WIN64 */
	__property bool Empty = {read=GetEmpty, nodefault};
	__property bool Transparent = {read=GetTransparent, nodefault};
	__property TGIFGraphicControlExtension* GraphicControlExtension = {read=FGCE};
	__property System::Byte Pixels[int x][int y] = {read=GetPixel, write=SetPixel};
	__property void * Scanline[int y] = {read=GetScanline};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TGIFTrailer : public TGIFItem
{
	typedef TGIFItem inherited;
	
__published:
	virtual void __fastcall SaveToStream(System::Classes::TStream* Stream);
	virtual void __fastcall LoadFromStream(System::Classes::TStream* Stream);
public:
	/* TGIFItem.Create */ inline __fastcall virtual TGIFTrailer(TGIFImage* AImage) : TGIFItem(AImage) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TGIFTrailer() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

struct DECLSPEC_DRECORD TGIFGCERec
{
public:
	System::Byte BlockSize;
	System::Byte PackedFields;
	System::Word DelayTime;
	System::Byte TransparentColorIndex;
	System::Byte Terminator;
};


enum DECLSPEC_DENUM TDisposalMethod : unsigned char { dmNone, dmNoDisposal, dmBackground, dmPrevious };

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TGIFGraphicControlExtension : public TGIFExtension
{
	typedef TGIFExtension inherited;
	
private:
	TGIFGCERec FGCExtension;
	
protected:
	virtual System::Byte __fastcall GetExtensionType();
	bool __fastcall GetTransparent();
	void __fastcall SetTransparent(bool Value);
	System::Uitypes::TColor __fastcall GetTransparentColor();
	void __fastcall SetTransparentColor(System::Uitypes::TColor Color);
	System::Byte __fastcall GetTransparentColorIndex();
	void __fastcall SetTransparentColorIndex(System::Byte Value);
	System::Word __fastcall GetDelay();
	void __fastcall SetDelay(System::Word Value);
	bool __fastcall GetUserInput();
	void __fastcall SetUserInput(bool Value);
	TDisposalMethod __fastcall GetDisposal();
	void __fastcall SetDisposal(TDisposalMethod Value);
	
public:
	__fastcall virtual TGIFGraphicControlExtension(TGIFFrame* AFrame);
	__fastcall virtual ~TGIFGraphicControlExtension();
	virtual void __fastcall SaveToStream(System::Classes::TStream* Stream);
	virtual void __fastcall LoadFromStream(System::Classes::TStream* Stream);
	__property System::Word Delay = {read=GetDelay, write=SetDelay, nodefault};
	__property bool Transparent = {read=GetTransparent, write=SetTransparent, nodefault};
	__property System::Byte TransparentColorIndex = {read=GetTransparentColorIndex, write=SetTransparentColorIndex, nodefault};
	__property System::Uitypes::TColor TransparentColor = {read=GetTransparentColor, write=SetTransparentColor, nodefault};
	__property bool UserInput = {read=GetUserInput, write=SetUserInput, nodefault};
	__property TDisposalMethod Disposal = {read=GetDisposal, write=SetDisposal, nodefault};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#pragma pack(push,1)
struct DECLSPEC_DRECORD TGIFPlainTextExtensionRec
{
public:
	System::Byte BlockSize;
	System::Word Left;
	System::Word Top;
	System::Word Width;
	System::Word Height;
	System::Byte CellWidth;
	System::Byte CellHeight;
	System::Byte TextFGColorIndex;
	System::Byte TextBGColorIndex;
};
#pragma pack(pop)


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TGIFTextExtension : public TGIFExtension
{
	typedef TGIFExtension inherited;
	
private:
	System::Classes::TStrings* FText;
	TGIFPlainTextExtensionRec FPlainTextExtension;
	
protected:
	virtual System::Byte __fastcall GetExtensionType();
	System::Uitypes::TColor __fastcall GetForegroundColor();
	void __fastcall SetForegroundColor(System::Uitypes::TColor Color);
	System::Uitypes::TColor __fastcall GetBackgroundColor();
	void __fastcall SetBackgroundColor(System::Uitypes::TColor Color);
	void __fastcall SetText(System::Classes::TStrings* const Value);
	
public:
	__fastcall virtual TGIFTextExtension(TGIFFrame* ASubImage);
	__fastcall virtual ~TGIFTextExtension();
	virtual void __fastcall SaveToStream(System::Classes::TStream* Stream);
	virtual void __fastcall LoadFromStream(System::Classes::TStream* Stream);
	__property System::Word Left = {read=FPlainTextExtension.Left, write=FPlainTextExtension.Left, nodefault};
	__property System::Word Top = {read=FPlainTextExtension.Top, write=FPlainTextExtension.Top, nodefault};
	__property System::Word GridWidth = {read=FPlainTextExtension.Width, write=FPlainTextExtension.Width, nodefault};
	__property System::Word GridHeight = {read=FPlainTextExtension.Height, write=FPlainTextExtension.Height, nodefault};
	__property System::Byte CharWidth = {read=FPlainTextExtension.CellWidth, write=FPlainTextExtension.CellWidth, nodefault};
	__property System::Byte CharHeight = {read=FPlainTextExtension.CellHeight, write=FPlainTextExtension.CellHeight, nodefault};
	__property System::Byte ForegroundColorIndex = {read=FPlainTextExtension.TextFGColorIndex, write=FPlainTextExtension.TextFGColorIndex, nodefault};
	__property System::Uitypes::TColor ForegroundColor = {read=GetForegroundColor, nodefault};
	__property System::Byte BackgroundColorIndex = {read=FPlainTextExtension.TextBGColorIndex, write=FPlainTextExtension.TextBGColorIndex, nodefault};
	__property System::Uitypes::TColor BackgroundColor = {read=GetBackgroundColor, nodefault};
	__property System::Classes::TStrings* Text = {read=FText, write=SetText};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TGIFCommentExtension : public TGIFExtension
{
	typedef TGIFExtension inherited;
	
private:
	System::Classes::TStrings* FText;
	
protected:
	virtual System::Byte __fastcall GetExtensionType();
	void __fastcall SetText(System::Classes::TStrings* const Value);
	
public:
	__fastcall virtual TGIFCommentExtension(TGIFFrame* AFrame);
	__fastcall virtual ~TGIFCommentExtension();
	virtual void __fastcall SaveToStream(System::Classes::TStream* Stream);
	virtual void __fastcall LoadFromStream(System::Classes::TStream* Stream);
	__property System::Classes::TStrings* Text = {read=FText, write=SetText};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef System::StaticArray<char, 8> TGIFIdentifierCode;

typedef System::StaticArray<char, 3> TGIFAuthenticationCode;

struct DECLSPEC_DRECORD TGIFApplicationRec
{
public:
	TGIFIdentifierCode Identifier;
	TGIFAuthenticationCode Authentication;
};


#ifndef _WIN64
typedef System::TMetaClass* TGIFAppExtensionClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TGIFAppExtensionClass);
#endif /* _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TGIFApplicationExtension : public TGIFExtension
{
	typedef TGIFExtension inherited;
	
private:
	TGIFApplicationRec FIdent;
	System::UnicodeString __fastcall GetAuthentication();
	System::UnicodeString __fastcall GetIdentifier();
	
protected:
	virtual System::Byte __fastcall GetExtensionType();
	void __fastcall SetAuthentication(const System::UnicodeString Value);
	void __fastcall SetIdentifier(const System::UnicodeString Value);
	virtual void __fastcall SaveData(System::Classes::TStream* Stream) = 0 ;
	virtual void __fastcall LoadData(System::Classes::TStream* Stream) = 0 ;
	
public:
	__fastcall virtual TGIFApplicationExtension(TGIFFrame* ASubImage)/* overload */;
	__fastcall TGIFApplicationExtension(TGIFFrame* ASubImage, const TGIFApplicationRec &Ident)/* overload */;
	__fastcall virtual ~TGIFApplicationExtension();
	virtual void __fastcall SaveToStream(System::Classes::TStream* Stream);
	virtual void __fastcall LoadFromStream(System::Classes::TStream* Stream);
	__classmethod void __fastcall RegisterExtension(const TGIFApplicationRec &eIdent, TGIFAppExtensionClass eClass);
	__classmethod virtual TGIFExtensionClass __fastcall FindSubExtension(System::Classes::TStream* Stream);
	__property System::UnicodeString Identifier = {read=GetIdentifier, write=SetIdentifier};
	__property System::UnicodeString Authentication = {read=GetAuthentication, write=SetAuthentication};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TGIFBlock : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Byte FSize;
	void *FData;
	
public:
	__fastcall TGIFBlock(int ASize);
	__fastcall virtual ~TGIFBlock();
	void __fastcall SaveToStream(System::Classes::TStream* Stream);
	void __fastcall LoadFromStream(System::Classes::TStream* Stream);
	__property System::Byte Size = {read=FSize, nodefault};
	__property void * Data = {read=FData};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TGIFUnknownAppExtension : public TGIFApplicationExtension
{
	typedef TGIFApplicationExtension inherited;
	
private:
	System::Classes::TList* FBlocks;
	
protected:
	virtual void __fastcall SaveData(System::Classes::TStream* Stream);
	virtual void __fastcall LoadData(System::Classes::TStream* Stream);
	
public:
	__fastcall virtual TGIFUnknownAppExtension(TGIFFrame* ASubImage)/* overload */;
	__fastcall virtual ~TGIFUnknownAppExtension();
	__property System::Classes::TList* Blocks = {read=FBlocks};
public:
	/* TGIFApplicationExtension.Create */ inline __fastcall TGIFUnknownAppExtension(TGIFFrame* ASubImage, const TGIFApplicationRec &Ident)/* overload */ : TGIFApplicationExtension(ASubImage, Ident) { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TGIFAppExtNSLoop : public TGIFApplicationExtension
{
	typedef TGIFApplicationExtension inherited;
	
private:
	System::Word FLoops;
	unsigned FBufferSize;
	
protected:
	virtual void __fastcall SaveData(System::Classes::TStream* Stream);
	virtual void __fastcall LoadData(System::Classes::TStream* Stream);
	
public:
	__fastcall virtual TGIFAppExtNSLoop(TGIFFrame* AFrame)/* overload */;
	__property System::Word Loops = {read=FLoops, write=FLoops, nodefault};
	__property unsigned BufferSize = {read=FBufferSize, write=FBufferSize, nodefault};
public:
	/* TGIFApplicationExtension.Create */ inline __fastcall TGIFAppExtNSLoop(TGIFFrame* ASubImage, const TGIFApplicationRec &Ident)/* overload */ : TGIFApplicationExtension(ASubImage, Ident) { }
	/* TGIFApplicationExtension.Destroy */ inline __fastcall virtual ~TGIFAppExtNSLoop() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TGIFImageList : public TGIFList
{
	typedef TGIFList inherited;
	
public:
	TGIFFrame* operator[](int Index) { return this->Frames[Index]; }
	
private:
	TGIFImage* FImage;
	
protected:
	TGIFFrame* __fastcall GetFrame(int Index);
	void __fastcall SetFrame(int Index, TGIFFrame* AFrame);
	virtual TGIFImage* __fastcall GetImage();
	
public:
	__fastcall TGIFImageList(TGIFImage* AImage);
	virtual void __fastcall LoadFromStream(System::Classes::TStream* Stream);
	virtual void __fastcall SaveToStream(System::Classes::TStream* Stream);
	__property TGIFFrame* Frames[int Index] = {read=GetFrame, write=SetFrame/*, default*/};
public:
	/* TGIFList.Destroy */ inline __fastcall virtual ~TGIFImageList() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TColorReduction : unsigned char { rmNone, rmWindows20, rmWindows256, rmWindowsGray, rmMonochrome, rmGrayScale, rmNetscape, rmQuantize, rmQuantizeWindows, rmPalette };

enum DECLSPEC_DENUM TDitherMode : unsigned char { dmNearest, dmFloydSteinberg, dmStucki, dmSierra, dmJaJuNI, dmSteveArche, dmBurkes };

enum DECLSPEC_DENUM TGIFOptimizeOption : unsigned char { ooCrop, ooMerge, ooCleanup, ooColorMap };

typedef System::Set<TGIFOptimizeOption, TGIFOptimizeOption::ooCrop, TGIFOptimizeOption::ooColorMap> TGIFOptimizeOptions;

enum DECLSPEC_DENUM TGIFAnimationLoop : unsigned char { glDisabled, glEnabled, glContinously };

enum DECLSPEC_DENUM TGIFDithering : unsigned char { gdDisabled, gdEnabled, gdAuto };

typedef void __fastcall (__closure *TGIFWarning)(System::TObject* Sender, TGIFSeverity Severity, const System::UnicodeString Msg);

class PASCALIMPLEMENTATION TGIFImage : public Vcl::Graphics::TGraphic
{
	typedef Vcl::Graphics::TGraphic inherited;
	
private:
	bool FAnimate;
	TGIFAnimationLoop FAnimateLoop;
	TGIFDithering FDithering;
	bool IsDrawing;
	bool IsInsideGetPalette;
	TGIFImageList* FImages;
	TGIFHeader* FHeader;
	HPALETTE FGlobalPalette;
	TColorReduction FColorReduction;
	int FReductionBits;
	TGIFWarning FOnWarning;
	Vcl::Graphics::TBitmap* FBitmap;
	int FAnimationSpeed;
	System::Uitypes::TColor FDrawBackgroundColor;
	System::Classes::TNotifyEvent FOnStartPaint;
	System::Classes::TNotifyEvent FOnPaint;
	System::Classes::TNotifyEvent FOnAfterPaint;
	System::Classes::TNotifyEvent FOnLoop;
	System::Classes::TNotifyEvent FOnEndPaint;
	TCustomGIFRenderer* FRenderer;
	TDitherMode FDitherMode;
	int FDrawSuspendCount;
	bool FSuspendedAnimation;
	
protected:
	virtual int __fastcall GetHeight();
	virtual void __fastcall SetHeight(int Value);
	virtual int __fastcall GetWidth();
	virtual void __fastcall SetWidth(int Value);
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	virtual void __fastcall Draw(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &Rect);
	virtual bool __fastcall Equals(Vcl::Graphics::TGraphic* Graphic)/* overload */;
	virtual HPALETTE __fastcall GetPalette();
	virtual void __fastcall SetPalette(HPALETTE Value);
	virtual bool __fastcall GetEmpty();
	virtual void __fastcall WriteData(System::Classes::TStream* Stream);
	bool __fastcall GetIsTransparent();
	TGIFVersion __fastcall GetVersion();
	int __fastcall GetColorResolution();
	int __fastcall GetBitsPerPixel();
	System::Byte __fastcall GetBackgroundColorIndex();
	void __fastcall SetBackgroundColorIndex(const System::Byte Value);
	System::Uitypes::TColor __fastcall GetBackgroundColor();
	void __fastcall SetBackgroundColor(const System::Uitypes::TColor Value);
	System::Byte __fastcall GetAspectRatio();
	void __fastcall SetAspectRatio(const System::Byte Value);
	void __fastcall SetAnimationSpeed(int Value);
	void __fastcall SetReductionBits(int Value);
	void __fastcall NewImage();
	Vcl::Graphics::TBitmap* __fastcall GetBitmap();
	Vcl::Graphics::TBitmap* __fastcall NewBitmap();
	void __fastcall FreePalette();
	void __fastcall FreeBitmap();
	TGIFColorMap* __fastcall GetColorMap();
	bool __fastcall GetDoDither();
	void __fastcall InternalClear();
	void __fastcall SetAnimate(const bool Value);
	void __fastcall SetAnimateLoop(const TGIFAnimationLoop Value);
	void __fastcall SetDithering(const TGIFDithering Value);
	virtual void __fastcall SetTransparent(bool Value);
	virtual TCustomGIFRenderer* __fastcall CreateRenderer();
	
public:
	__fastcall virtual TGIFImage()/* overload */;
	__fastcall virtual ~TGIFImage();
	void __fastcall Dormant();
	virtual void __fastcall SaveToStream(System::Classes::TStream* Stream);
	__classmethod virtual bool __fastcall CanLoadFromStream(System::Classes::TStream* Stream);
	virtual void __fastcall LoadFromStream(System::Classes::TStream* Stream);
	TGIFFrame* __fastcall Add(System::Classes::TPersistent* Source);
	void __fastcall Pack();
	void __fastcall OptimizeColorMap();
	void __fastcall Optimize(TGIFOptimizeOptions Options, TColorReduction ColorReduction = (TColorReduction)(0x0), TDitherMode DitherMode = (TDitherMode)(0x0), int ReductionBits = 0x8);
	void __fastcall Clear();
	virtual void __fastcall Warning(System::TObject* Sender, TGIFSeverity Severity, const System::UnicodeString Msg);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual void __fastcall LoadFromClipboardFormat(System::Word AFormat, NativeUInt AData, HPALETTE APalette);
	virtual void __fastcall SaveToClipboardFormat(System::Word &AFormat, NativeUInt &AData, HPALETTE &APalette);
	System::Uitypes::TColor __fastcall EffectiveBackgroundColor();
	void __fastcall StopDraw();
	void __fastcall SuspendDraw();
	void __fastcall ResumeDraw();
	__property TGIFColorMap* GlobalColorMap = {read=GetColorMap};
	__property TGIFVersion Version = {read=GetVersion, nodefault};
	__property TGIFImageList* Images = {read=FImages};
	__property int ColorResolution = {read=GetColorResolution, nodefault};
	__property int BitsPerPixel = {read=GetBitsPerPixel, nodefault};
	__property System::Byte BackgroundColorIndex = {read=GetBackgroundColorIndex, write=SetBackgroundColorIndex, nodefault};
	__property System::Uitypes::TColor BackgroundColor = {read=GetBackgroundColor, write=SetBackgroundColor, nodefault};
	__property System::Byte AspectRatio = {read=GetAspectRatio, write=SetAspectRatio, nodefault};
	__property bool IsTransparent = {read=GetIsTransparent, nodefault};
	__property System::Uitypes::TColor DrawBackgroundColor = {read=FDrawBackgroundColor, write=FDrawBackgroundColor, nodefault};
	__property TColorReduction ColorReduction = {read=FColorReduction, write=FColorReduction, nodefault};
	__property int ReductionBits = {read=FReductionBits, write=SetReductionBits, nodefault};
	__property TDitherMode DitherMode = {read=FDitherMode, write=FDitherMode, nodefault};
	__property int AnimationSpeed = {read=FAnimationSpeed, write=SetAnimationSpeed, nodefault};
	__property Vcl::Graphics::TBitmap* Bitmap = {read=GetBitmap};
	__property TGIFWarning OnWarning = {read=FOnWarning, write=FOnWarning};
	__property System::Classes::TNotifyEvent OnStartPaint = {read=FOnStartPaint, write=FOnStartPaint};
	__property System::Classes::TNotifyEvent OnPaint = {read=FOnPaint, write=FOnPaint};
	__property System::Classes::TNotifyEvent OnAfterPaint = {read=FOnAfterPaint, write=FOnAfterPaint};
	__property System::Classes::TNotifyEvent OnLoop = {read=FOnLoop, write=FOnLoop};
	__property System::Classes::TNotifyEvent OnEndPaint = {read=FOnEndPaint, write=FOnEndPaint};
	__property bool Animate = {read=FAnimate, write=SetAnimate, nodefault};
	__property TGIFAnimationLoop AnimateLoop = {read=FAnimateLoop, write=SetAnimateLoop, nodefault};
	__property TGIFDithering Dithering = {read=FDithering, write=SetDithering, nodefault};
	__property bool ShouldDither = {read=GetDoDither, nodefault};
	/* Hoisted overloads: */
	
public:
	inline bool __fastcall  Equals(System::TObject* Obj){ return Vcl::Graphics::TGraphic::Equals(Obj); }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCustomGIFRenderer : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	bool FTransparent;
	bool FAnimate;
	TGIFImage* FImage;
	Vcl::Graphics::TCanvas* FCanvas;
	System::Types::TRect FDestRect;
	System::Uitypes::TColor FBackgroundColor;
	int FSpeed;
	TGIFFrame* FFrame;
	int FFrameIndex;
	bool FChanged;
	int FLoopMax;
	int FLoopCount;
	bool FAnimating;
	
protected:
	virtual void __fastcall SetAnimate(const bool Value);
	virtual void __fastcall SetBackgroundColor(const System::Uitypes::TColor Value);
	virtual void __fastcall SetSpeed(const int Value);
	virtual void __fastcall SetTransparent(const bool Value);
	virtual void __fastcall InternalSetFrameIndex(int Value);
	virtual void __fastcall SetFrameIndex(int Value);
	virtual Vcl::Graphics::TBitmap* __fastcall GetBitmap() = 0 ;
	virtual void __fastcall Changed();
	virtual void __fastcall CheckChange();
	virtual void __fastcall Reset();
	virtual void __fastcall Loop();
	virtual void __fastcall DoNextFrame();
	void __fastcall SetLoopMax(int Value);
	virtual void __fastcall Initialize();
	__property bool HasChanged = {read=FChanged, nodefault};
	
public:
	__fastcall virtual TCustomGIFRenderer(TGIFImage* AImage);
	virtual void __fastcall Draw(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &Rect);
	virtual void __fastcall NextFrame();
	virtual void __fastcall StartAnimation();
	virtual void __fastcall StopAnimation();
	virtual void __fastcall HaltAnimation();
	__property int Speed = {read=FSpeed, write=SetSpeed, nodefault};
	__property bool Transparent = {read=FTransparent, write=SetTransparent, nodefault};
	__property System::Uitypes::TColor BackgroundColor = {read=FBackgroundColor, write=SetBackgroundColor, nodefault};
	__property bool Animate = {read=FAnimate, write=SetAnimate, nodefault};
	__property int FrameIndex = {read=FFrameIndex, write=SetFrameIndex, nodefault};
	__property TGIFImage* Image = {read=FImage};
	__property Vcl::Graphics::TCanvas* TargetCanvas = {read=FCanvas};
	__property System::Types::TRect TargetRect = {read=FDestRect};
	__property TGIFFrame* Frame = {read=FFrame};
	__property int LoopMax = {read=FLoopMax, nodefault};
	__property int LoopCount = {read=FLoopCount, nodefault};
	__property bool Animating = {read=FAnimating, nodefault};
	__property Vcl::Graphics::TBitmap* Bitmap = {read=GetBitmap};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TCustomGIFRenderer() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TGIFRenderer : public TCustomGIFRenderer
{
	typedef TCustomGIFRenderer inherited;
	
private:
	Vcl::Graphics::TBitmap* FBackground;
	TDisposalMethod FDisposal;
	TDisposalMethod FPrevDisposal;
	TGIFFrame* FPrevFrame;
	Vcl::Graphics::TBitmap* FPreviousBuffer;
	Vcl::Graphics::TBitmap* FBuffer;
	int FFrameDelay;
	bool FNeedRender;
	Vcl::Extctrls::TTimer* FAnimationTimer;
	bool FNeedTimer;
	
protected:
	void __fastcall UndoPreviousFrame();
	void __fastcall RenderFrame();
	void __fastcall Clear();
	virtual void __fastcall Reset();
	virtual void __fastcall DoNextFrame();
	virtual void __fastcall Loop();
	virtual void __fastcall Changed();
	virtual Vcl::Graphics::TBitmap* __fastcall GetBitmap();
	virtual void __fastcall Initialize();
	void __fastcall StopAnimationTimer();
	void __fastcall StartAnimationTimer(int Delay);
	void __fastcall AnimationTimerEvent(System::TObject* Sender);
	__property Vcl::Graphics::TBitmap* PreviousBuffer = {read=FPreviousBuffer};
	__property Vcl::Graphics::TBitmap* Buffer = {read=FBuffer};
	
public:
	__fastcall virtual TGIFRenderer(TGIFImage* AImage);
	__fastcall virtual ~TGIFRenderer();
	virtual void __fastcall Draw(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &Rect);
	virtual void __fastcall StartAnimation();
	virtual void __fastcall StopAnimation();
	virtual void __fastcall HaltAnimation();
	__property Vcl::Graphics::TBitmap* Background = {read=FBackground};
	__property int FrameDelay = {read=FFrameDelay, nodefault};
	__property TDisposalMethod Disposal = {read=FDisposal, nodefault};
	__property TDisposalMethod PrevDisposal = {read=FPrevDisposal, nodefault};
	__property TGIFFrame* PrevFrame = {read=FPrevFrame};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TColorLookup : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int FColors;
	
protected:
	void __fastcall SetColors(int Value);
	
public:
	__fastcall virtual TColorLookup(HPALETTE Palette);
	virtual System::Byte __fastcall Lookup(System::Byte Red, System::Byte Green, System::Byte Blue, System::Byte &R, System::Byte &G, System::Byte &B) = 0 ;
	__property int Colors = {read=FColors, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TColorLookup() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TColorLookupClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TColorLookupClass);
#endif /* _WIN64 */

typedef System::StaticArray<tagRGBQUAD, 256> TRGBQuadArray;

typedef TRGBQuadArray *PRGBQuadArray;

typedef System::StaticArray<tagRGBTRIPLE, 1> BGRArray;

typedef BGRArray *PBGRArray;

typedef System::StaticArray<tagPALETTEENTRY, 256> PalArray;

typedef PalArray *PPalArray;

typedef System::StaticArray<short, 65536> TInverseLookup;

typedef TInverseLookup *PInverseLookup;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFastColorLookup : public TColorLookup
{
	typedef TColorLookup inherited;
	
private:
	PalArray *FPaletteEntries;
	TInverseLookup *FInverseLookup;
	
public:
	__fastcall virtual TFastColorLookup(HPALETTE Palette);
	__fastcall virtual ~TFastColorLookup();
	virtual System::Byte __fastcall Lookup(System::Byte Red, System::Byte Green, System::Byte Blue, System::Byte &R, System::Byte &G, System::Byte &B);
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TSlowColorLookup : public TColorLookup
{
	typedef TColorLookup inherited;
	
private:
	PalArray *FPaletteEntries;
	HPALETTE FPalette;
	
public:
	__fastcall virtual TSlowColorLookup(HPALETTE Palette);
	__fastcall virtual ~TSlowColorLookup();
	virtual System::Byte __fastcall Lookup(System::Byte Red, System::Byte Green, System::Byte Blue, System::Byte &R, System::Byte &G, System::Byte &B);
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TNetscapeColorLookup : public TColorLookup
{
	typedef TColorLookup inherited;
	
public:
	__fastcall virtual TNetscapeColorLookup(HPALETTE Palette);
	virtual System::Byte __fastcall Lookup(System::Byte Red, System::Byte Green, System::Byte Blue, System::Byte &R, System::Byte &G, System::Byte &B);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TNetscapeColorLookup() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TGrayWindowsLookup : public TSlowColorLookup
{
	typedef TSlowColorLookup inherited;
	
public:
	__fastcall virtual TGrayWindowsLookup(HPALETTE Palette);
	virtual System::Byte __fastcall Lookup(System::Byte Red, System::Byte Green, System::Byte Blue, System::Byte &R, System::Byte &G, System::Byte &B);
public:
	/* TSlowColorLookup.Destroy */ inline __fastcall virtual ~TGrayWindowsLookup() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TGrayScaleLookup : public TColorLookup
{
	typedef TColorLookup inherited;
	
public:
	__fastcall virtual TGrayScaleLookup(HPALETTE Palette);
	virtual System::Byte __fastcall Lookup(System::Byte Red, System::Byte Green, System::Byte Blue, System::Byte &R, System::Byte &G, System::Byte &B);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TGrayScaleLookup() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TMonochromeLookup : public TColorLookup
{
	typedef TColorLookup inherited;
	
public:
	__fastcall virtual TMonochromeLookup(HPALETTE Palette);
	virtual System::Byte __fastcall Lookup(System::Byte Red, System::Byte Green, System::Byte Blue, System::Byte &R, System::Byte &G, System::Byte &B);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TMonochromeLookup() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

//-- var, const, procedure ---------------------------------------------------
static const System::Word GIFVersion = System::Word(0x300);
static const System::Int8 GIFVersionMajor = System::Int8(0x3);
static const System::Int8 GIFVersionMinor = System::Int8(0x0);
static const System::Int8 GIFVersionRelease = System::Int8(0x7);
static const System::Word GIFMaxColors = System::Word(0x100);
extern DELPHI_PACKAGE System::StaticArray<System::StaticArray<char, 3>, 2> GIFVersions;
extern DELPHI_PACKAGE TColorLookupClass TGenericColorMapper;
extern DELPHI_PACKAGE System::Word CF_GIF;
extern DELPHI_PACKAGE bool GIFImageDefaultTransparent;
extern DELPHI_PACKAGE bool GIFImageDefaultAnimate;
extern DELPHI_PACKAGE TGIFAnimationLoop GIFImageDefaultAnimationLoop;
extern DELPHI_PACKAGE TGIFDithering GIFImageDefaultDithering;
extern DELPHI_PACKAGE TColorReduction GIFImageDefaultColorReduction;
extern DELPHI_PACKAGE int GIFImageDefaultColorReductionBits;
extern DELPHI_PACKAGE TDitherMode GIFImageDefaultDitherMode;
extern DELPHI_PACKAGE int GIFImageDefaultAnimationSpeed;
extern DELPHI_PACKAGE bool DoAutoDither;
extern DELPHI_PACKAGE bool PaletteDevice;
extern DELPHI_PACKAGE bool GIFImageRenderOnLoad;
extern DELPHI_PACKAGE bool GIFImageOptimizeOnStream;
extern DELPHI_PACKAGE int BitmapAllocationThreshold;
extern DELPHI_PACKAGE int GIFDelayExp;
extern DELPHI_PACKAGE int GIFDefaultDelay;
extern DELPHI_PACKAGE int GIFMinimumDelay;
extern DELPHI_PACKAGE int GIFMaximumDelay;
extern DELPHI_PACKAGE int GIFFileBufferSize;
extern DELPHI_PACKAGE System::Uitypes::TColor GIFDefaultTransparentColor;
extern DELPHI_PACKAGE bool GIFClearOnLoop;
#ifndef _WIN64
extern DELPHI_PACKAGE void __fastcall Register();
extern DELPHI_PACKAGE HPALETTE __fastcall WebPalette();
#else /* _WIN64 */
extern DELPHI_PACKAGE void __fastcall Register(void);
extern DELPHI_PACKAGE HPALETTE __fastcall WebPalette(void);
#endif /* _WIN64 */
extern DELPHI_PACKAGE void __fastcall InternalGetDIBSizes(HBITMAP Bitmap, int &InfoHeaderSize, int &ImageSize, Vcl::Graphics::TPixelFormat PixelFormat);
extern DELPHI_PACKAGE bool __fastcall InternalGetDIB(HBITMAP Bitmap, HPALETTE Palette, void *BitmapInfo, void *Bits, Vcl::Graphics::TPixelFormat PixelFormat);
extern DELPHI_PACKAGE HPALETTE __fastcall CreateOptimizedPaletteFromManyBitmaps(System::Classes::TList* Bitmaps, int Colors, int ColorBits, bool Windows);
extern DELPHI_PACKAGE Vcl::Graphics::TBitmap* __fastcall ReduceColors(Vcl::Graphics::TBitmap* Bitmap, TColorReduction ColorReduction, TDitherMode DitherMode, int ReductionBits, HPALETTE CustomPalette);
}	/* namespace Gifimg */
}	/* namespace Imaging */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_IMAGING_GIFIMG)
using namespace Vcl::Imaging::Gifimg;
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
#endif	// Vcl_Imaging_GifimgHPP
