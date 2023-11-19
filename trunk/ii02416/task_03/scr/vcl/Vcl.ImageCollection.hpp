// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.ImageCollection.pas' rev: 35.00 (Windows)

#ifndef Vcl_ImagecollectionHPP
#define Vcl_ImagecollectionHPP

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
#include <System.Messaging.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Winapi.Wincodec.hpp>
#include <Vcl.BaseImageCollection.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Imagecollection
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TImageCollectionSourceItem;
class DELPHICLASS TImageCollectionItemSources;
class DELPHICLASS TImageCollectionItem;
class DELPHICLASS TImageCollectionItems;
class DELPHICLASS TImageCollection;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TImageCollectionSourceItem : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	Vcl::Graphics::TWICImage* FImage;
	void __fastcall SetImage(Vcl::Graphics::TWICImage* Value);
	TImageCollectionItem* __fastcall GetImageCollectionItem();
	
public:
	__fastcall virtual TImageCollectionSourceItem(System::Classes::TCollection* Collection);
	__fastcall virtual ~TImageCollectionSourceItem();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall Update();
	
__published:
	__property Vcl::Graphics::TWICImage* Image = {read=FImage, write=SetImage};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TImageCollectionItemSources : public System::Classes::TOwnedCollection
{
	typedef System::Classes::TOwnedCollection inherited;
	
public:
	TImageCollectionSourceItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	HIDESBASE TImageCollectionSourceItem* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TImageCollectionSourceItem* Value);
	
public:
	HIDESBASE TImageCollectionSourceItem* __fastcall Add();
	__property TImageCollectionSourceItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
public:
	/* TOwnedCollection.Create */ inline __fastcall TImageCollectionItemSources(System::Classes::TPersistent* AOwner, System::Classes::TCollectionItemClass ItemClass) : System::Classes::TOwnedCollection(AOwner, ItemClass) { }
	
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TImageCollectionItemSources() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TImageCollectionItem : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	System::UnicodeString FName;
	TImageCollectionItemSources* FSourceImages;
	void *FData;
	System::UnicodeString FDescription;
	void __fastcall SetName(const System::UnicodeString Value);
	void __fastcall SetDescription(const System::UnicodeString Value);
	void __fastcall SetSourceImages(TImageCollectionItemSources* const Value);
	
public:
	__fastcall virtual TImageCollectionItem(System::Classes::TCollection* Collection);
	__fastcall virtual ~TImageCollectionItem();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	bool __fastcall CheckSources();
	__property void * Data = {read=FData, write=FData};
	void __fastcall Change();
	
__published:
	__property System::UnicodeString Name = {read=FName, write=SetName};
	__property System::UnicodeString Description = {read=FDescription, write=SetDescription};
	__property TImageCollectionItemSources* SourceImages = {read=FSourceImages, write=SetSourceImages};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TImageCollectionItems : public System::Classes::TOwnedCollection
{
	typedef System::Classes::TOwnedCollection inherited;
	
public:
	TImageCollectionItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	HIDESBASE TImageCollectionItem* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TImageCollectionItem* Value);
	
public:
	HIDESBASE TImageCollectionItem* __fastcall Add();
	__property TImageCollectionItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
public:
	/* TOwnedCollection.Create */ inline __fastcall TImageCollectionItems(System::Classes::TPersistent* AOwner, System::Classes::TCollectionItemClass ItemClass) : System::Classes::TOwnedCollection(AOwner, ItemClass) { }
	
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TImageCollectionItems() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TImageCollectionInterpolationMode : unsigned char { icIMModeHighQualityCubic, icIMFant, icIMLinear, icIMCubic, icIMModeNearestNeighbor };

typedef void __fastcall (__closure *TImageCollectionOnGetBitmapEvent)(Vcl::Graphics::TWICImage* ASourceImage, int AWidth, int AHeight, /* out */ Vcl::Graphics::TBitmap* &ABitmap);

typedef void __fastcall (__closure *TImageCollectionOnDrawEvent)(Vcl::Graphics::TWICImage* ASourceImage, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, bool AProportional/* = false*/);

class PASCALIMPLEMENTATION TImageCollection : public Vcl::Baseimagecollection::TCustomImageCollection
{
	typedef Vcl::Baseimagecollection::TCustomImageCollection inherited;
	
private:
	TImageCollectionItems* FImages;
	TImageCollectionInterpolationMode FInterpolationMode;
	TImageCollectionOnGetBitmapEvent FOnGetBitmap;
	TImageCollectionOnDrawEvent FOnDraw;
	void __fastcall SetImages(TImageCollectionItems* Value);
	void __fastcall SetInterpolationMode(TImageCollectionInterpolationMode Value);
	
protected:
	TImageCollectionSourceItem* __fastcall CreateSourceItem(System::UnicodeString AName);
	virtual int __fastcall GetCount();
	int __fastcall GetSourceImageIndex(int AIndex, int AWidth, int AHeight);
	Vcl::Graphics::TWICImage* __fastcall GetSourceImageByIndex(int AIndex, int ASourceIndex);
	void __fastcall DoDraw(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, int AIndex, bool AProportional);
	Vcl::Graphics::TWICImage* __fastcall GetScaledImage(Vcl::Graphics::TWICImage* ASourceImage, int ANewWidth, int ANewHeight);
	
public:
	__fastcall virtual TImageCollection(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TImageCollection();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual bool __fastcall IsIndexAvailable(int AIndex);
	virtual int __fastcall GetIndexByName(const System::UnicodeString AName);
	virtual System::UnicodeString __fastcall GetNameByIndex(int AIndex);
	virtual System::UnicodeString __fastcall GetDescriptionByIndex(int AIndex);
	Vcl::Graphics::TWICImage* __fastcall GetSourceImage(int AIndex, int AWidth, int AHeight);
	virtual Vcl::Graphics::TBitmap* __fastcall GetBitmap(int AIndex, int AWidth, int AHeight)/* overload */;
	HIDESBASE Vcl::Graphics::TBitmap* __fastcall GetBitmap(const System::UnicodeString AName, int AWidth, int AHeight, bool AEnabled = true)/* overload */;
	void __fastcall DrawSource(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, int AIndex, int ASourceIndex, bool AProportional = false);
	virtual void __fastcall Draw(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, int AIndex, bool AProportional = false)/* overload */;
	HIDESBASE void __fastcall Draw(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, const System::UnicodeString AName, bool AProportional = false)/* overload */;
	void __fastcall Add(System::UnicodeString AName, const System::UnicodeString AFileName)/* overload */;
	void __fastcall Add(System::UnicodeString AName, System::Classes::TStream* Stream)/* overload */;
	void __fastcall Add(System::UnicodeString AName, NativeUInt AInstance, const System::UnicodeString AResourceName)/* overload */;
	void __fastcall Add(System::UnicodeString AName, NativeUInt AInstance, const System::UnicodeString AResourceName, System::UnicodeString *ASuffixes, const int ASuffixes_High)/* overload */;
	void __fastcall Delete(int AIndex)/* overload */;
	void __fastcall Delete(const System::UnicodeString AName)/* overload */;
	void __fastcall Delete(const System::UnicodeString ACategory, int AStartIndex, int AEndIndex)/* overload */;
	
__published:
	__property TImageCollectionItems* Images = {read=FImages, write=SetImages};
	__property TImageCollectionInterpolationMode InterpolationMode = {read=FInterpolationMode, write=SetInterpolationMode, default=0};
	__property TImageCollectionOnDrawEvent OnDraw = {read=FOnDraw, write=FOnDraw};
	__property TImageCollectionOnGetBitmapEvent OnGetBitmap = {read=FOnGetBitmap, write=FOnGetBitmap};
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Imagecollection */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_IMAGECOLLECTION)
using namespace Vcl::Imagecollection;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_ImagecollectionHPP
