// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.VirtualImageList.pas' rev: 35.00 (Windows)

#ifndef Vcl_VirtualimagelistHPP
#define Vcl_VirtualimagelistHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <System.Messaging.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.BaseImageCollection.hpp>
#include <System.UITypes.hpp>
#include <System.ImageList.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Virtualimagelist
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TVirtualImageListItem;
class DELPHICLASS TVirtualImageListItems;
class DELPHICLASS TVirtualImageList;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TVirtualImageListItem : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	System::UnicodeString FName;
	System::UnicodeString FDescription;
	int FCollectionIndex;
	System::UnicodeString FCollectionName;
	bool FDisabled;
	Vcl::Graphics::TBitmap* FDisabledBitmap;
	void __fastcall SetDisabled(bool AValue);
	void __fastcall SetCollectionIndex(int AValue);
	void __fastcall SetCollectionName(const System::UnicodeString AValue);
	void __fastcall SetName(const System::UnicodeString AValue);
	void __fastcall SetDescription(const System::UnicodeString AValue);
	TVirtualImageList* __fastcall GetImageList();
	Vcl::Graphics::TBitmap* __fastcall GetDisabledBitmap();
	
protected:
	bool __fastcall CheckCollectionItem();
	void __fastcall UpdateDisabledBitmap();
	__property TVirtualImageList* ImageList = {read=GetImageList};
	__property Vcl::Graphics::TBitmap* DisabledBitmap = {read=GetDisabledBitmap};
	
public:
	__fastcall virtual TVirtualImageListItem(System::Classes::TCollection* Collection);
	__fastcall virtual ~TVirtualImageListItem();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall Update();
	
__published:
	__property int CollectionIndex = {read=FCollectionIndex, write=SetCollectionIndex, default=-1};
	__property System::UnicodeString CollectionName = {read=FCollectionName, write=SetCollectionName};
	__property bool Disabled = {read=FDisabled, write=SetDisabled, default=0};
	__property System::UnicodeString Name = {read=FName, write=SetName};
	__property System::UnicodeString Description = {read=FDescription, write=SetDescription};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TVirtualImageListItems : public System::Classes::TOwnedCollection
{
	typedef System::Classes::TOwnedCollection inherited;
	
public:
	TVirtualImageListItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	HIDESBASE TVirtualImageListItem* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TVirtualImageListItem* Value);
	
protected:
	TVirtualImageList* __fastcall GetImageList();
	__property TVirtualImageList* ImageList = {read=GetImageList};
	
public:
	HIDESBASE TVirtualImageListItem* __fastcall Add();
	HIDESBASE TVirtualImageListItem* __fastcall Insert(int Index);
	int __fastcall Merge(TVirtualImageListItems* AVirtualImageListItems);
	HIDESBASE void __fastcall Delete(int Index);
	__property TVirtualImageListItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
public:
	/* TOwnedCollection.Create */ inline __fastcall TVirtualImageListItems(System::Classes::TPersistent* AOwner, System::Classes::TCollectionItemClass ItemClass) : System::Classes::TOwnedCollection(AOwner, ItemClass) { }
	
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TVirtualImageListItems() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TImageListAutoFillMode : unsigned char { afmNormal, afmDisabled };

class PASCALIMPLEMENTATION TVirtualImageList : public Vcl::Imglist::TCustomImageList
{
	typedef Vcl::Imglist::TCustomImageList inherited;
	
private:
	int FDPIChangedMessageID;
	int FCollectionChangedMessageID;
	Vcl::Baseimagecollection::TCustomImageCollection* FImageCollection;
	TVirtualImageListItems* FImages;
	bool FDisabledGrayscale;
	System::Byte FDisabledOpacity;
	System::UnicodeString FDisabledSuffix;
	bool FImageListUpdating;
	bool FPreserveItems;
	bool FAutoFill;
	TImageListAutoFillMode FAutoFillMode;
	bool FImageNameAvailable;
	void __fastcall SetAutoFill(bool Value);
	void __fastcall SetAutoFillMode(TImageListAutoFillMode Value);
	void __fastcall SetPreserveItems(bool Value);
	void __fastcall SetDisabledSuffix(System::UnicodeString Value);
	bool __fastcall IsDisabledSuffixStored();
	void __fastcall SetDisabledGrayscale(bool Value);
	void __fastcall SetDisabledOpacity(System::Byte Value);
	void __fastcall SetImageCollection(Vcl::Baseimagecollection::TCustomImageCollection* Value);
	void __fastcall SetImages(TVirtualImageListItems* Value);
	void __fastcall DPIChangedMessageHandler(System::TObject* const Sender, System::Messaging::TMessageBase* const Msg);
	void __fastcall CollectionChangedMessageHandler(System::TObject* const Sender, System::Messaging::TMessageBase* const Msg);
	
protected:
	virtual void __fastcall Loaded();
	virtual void __fastcall DoChange();
	void __fastcall DoAutoFill();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual Vcl::Graphics::TBitmap* __fastcall CreateBlankBitmap();
	void __fastcall UpdateDisabledBitmaps();
	void __fastcall CreateDisabledBitmap(Vcl::Graphics::TBitmap* ABitmap);
	bool __fastcall IsImageCollectionAvailable();
	
public:
	__fastcall virtual TVirtualImageList(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TVirtualImageList();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual bool __fastcall IsImageNameAvailable();
	virtual System::Uitypes::TImageIndex __fastcall GetIndexByName(const System::Uitypes::TImageName AName);
	virtual System::Uitypes::TImageName __fastcall GetNameByIndex(System::Uitypes::TImageIndex AIndex);
	System::UnicodeString __fastcall GetDescriptionByIndex(System::Uitypes::TImageIndex AIndex);
	void __fastcall UpdateImageList();
	HIDESBASE void __fastcall Clear();
	HIDESBASE void __fastcall Delete(int AIndex)/* overload */;
	HIDESBASE void __fastcall Delete(const System::UnicodeString AName)/* overload */;
	HIDESBASE void __fastcall Delete(const System::UnicodeString ACategory, int AStartIndex, int AEndIndex)/* overload */;
	HIDESBASE void __fastcall Add(const System::UnicodeString ACategory, int AStartIndex, int AEndIndex, bool AddDisabledCopies = false)/* overload */;
	HIDESBASE void __fastcall Add(System::UnicodeString AName, int ACollectionIndex, bool AddDisabledCopy = false)/* overload */;
	HIDESBASE void __fastcall Add(System::UnicodeString AName, const System::UnicodeString ACollectionName, bool AddDisabledCopy = false)/* overload */;
	void __fastcall AddDisabled(const System::UnicodeString ACategory, int AStartIndex, int AEndIndex)/* overload */;
	void __fastcall AddDisabled(System::UnicodeString AName, int ACollectionIndex)/* overload */;
	void __fastcall AddDisabled(System::UnicodeString AName, const System::UnicodeString ACollectionName)/* overload */;
	HIDESBASE void __fastcall Insert(int AIndex, System::UnicodeString AName, int ACollectionIndex, bool AddDisabledCopy = false)/* overload */;
	HIDESBASE void __fastcall Insert(int AIndex, System::UnicodeString AName, const System::UnicodeString ACollectionName, bool AddDisabledCopy = false)/* overload */;
	void __fastcall InsertDisabled(int AIndex, System::UnicodeString AName, int ACollectionIndex)/* overload */;
	void __fastcall InsertDisabled(int AIndex, System::UnicodeString AName, const System::UnicodeString ACollectionName)/* overload */;
	HIDESBASE void __fastcall Replace(int AIndex, int ACollectionIndex)/* overload */;
	HIDESBASE void __fastcall Replace(const System::UnicodeString AName, const System::UnicodeString ACollectionName)/* overload */;
	int __fastcall Merge(TVirtualImageList* AVirtualImageList);
	virtual void __fastcall DoDraw(int Index, Vcl::Graphics::TCanvas* Canvas, int X, int Y, unsigned Style, bool Enabled = true);
	HIDESBASE void __fastcall Draw(Vcl::Graphics::TCanvas* Canvas, int X, int Y, System::UnicodeString Name, bool Enabled = true)/* overload */;
	
__published:
	__property bool AutoFill = {read=FAutoFill, write=SetAutoFill, default=0};
	__property TImageListAutoFillMode AutoFillMode = {read=FAutoFillMode, write=SetAutoFillMode, default=0};
	__property System::Byte DisabledOpacity = {read=FDisabledOpacity, write=SetDisabledOpacity, default=125};
	__property bool DisabledGrayscale = {read=FDisabledGrayscale, write=SetDisabledGrayscale, default=0};
	__property System::UnicodeString DisabledSuffix = {read=FDisabledSuffix, write=SetDisabledSuffix, stored=IsDisabledSuffixStored};
	__property TVirtualImageListItems* Images = {read=FImages, write=SetImages};
	__property Vcl::Baseimagecollection::TCustomImageCollection* ImageCollection = {read=FImageCollection, write=SetImageCollection};
	__property bool ImageNameAvailable = {read=FImageNameAvailable, write=FImageNameAvailable, default=1};
	__property bool PreserveItems = {read=FPreserveItems, write=SetPreserveItems, default=0};
	__property Scaled = {default=1};
	__property Width = {default=16};
	__property Height = {default=16};
public:
	/* TCustomImageList.CreateSize */ inline __fastcall TVirtualImageList(int AWidth, int AHeight) : Vcl::Imglist::TCustomImageList(AWidth, AHeight) { }
	
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  Draw(Vcl::Graphics::TCanvas* Canvas, int X, int Y, int Index, bool Enabled = true){ Vcl::Imglist::TCustomImageList::Draw(Canvas, X, Y, Index, Enabled); }
	inline void __fastcall  Draw(Vcl::Graphics::TCanvas* Canvas, int X, int Y, int Index, Vcl::Imglist::TDrawingStyle ADrawingStyle, Vcl::Imglist::TImageType AImageType, bool Enabled = true){ Vcl::Imglist::TCustomImageList::Draw(Canvas, X, Y, Index, ADrawingStyle, AImageType, Enabled); }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Virtualimagelist */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_VIRTUALIMAGELIST)
using namespace Vcl::Virtualimagelist;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_VirtualimagelistHPP
