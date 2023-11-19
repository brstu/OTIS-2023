// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.BaseImageCollection.pas' rev: 35.00 (Windows)

#ifndef Vcl_BaseimagecollectionHPP
#define Vcl_BaseimagecollectionHPP

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
#include <Vcl.Graphics.hpp>
#include <System.Messaging.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Baseimagecollection
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TCustomImageCollection;
class DELPHICLASS TImageCollectionChangedMessage;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TCustomImageCollection : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	System::Classes::TNotifyEvent FOnChange;
	
protected:
	virtual int __fastcall GetCount();
	virtual void __fastcall DoChange();
	
public:
	void __fastcall Change();
	virtual bool __fastcall IsIndexAvailable(int AIndex);
	virtual System::UnicodeString __fastcall GetNameByIndex(int AIndex);
	virtual System::UnicodeString __fastcall GetDescriptionByIndex(int AIndex);
	virtual int __fastcall GetIndexByName(const System::UnicodeString AName);
	virtual Vcl::Graphics::TBitmap* __fastcall GetBitmap(int AIndex, int AWidth, int AHeight)/* overload */;
	virtual void __fastcall Draw(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, int AIndex, bool AProportional = false)/* overload */;
	__property int Count = {read=GetCount, nodefault};
	
__published:
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
public:
	/* TComponent.Create */ inline __fastcall virtual TCustomImageCollection(System::Classes::TComponent* AOwner) : System::Classes::TComponent(AOwner) { }
	/* TComponent.Destroy */ inline __fastcall virtual ~TCustomImageCollection() { }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TImageCollectionChangedMessage : public System::Messaging::TMessageBase
{
	typedef System::Messaging::TMessageBase inherited;
	
private:
	TCustomImageCollection* FCollection;
	int FIndex;
	System::UnicodeString FName;
	System::UnicodeString FDescription;
	
public:
	__property TCustomImageCollection* Collection = {read=FCollection};
	__property int Index = {read=FIndex, nodefault};
	__property System::UnicodeString Name = {read=FName};
	__property System::UnicodeString Description = {read=FDescription};
	__fastcall TImageCollectionChangedMessage(TCustomImageCollection* ACollection, int AIndex, const System::UnicodeString AName, const System::UnicodeString ADescription);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TImageCollectionChangedMessage() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::UnicodeString __fastcall ExtractImageCollectionName(const System::UnicodeString S);
extern DELPHI_PACKAGE System::UnicodeString __fastcall ExtractImageCollectionCategory(const System::UnicodeString S);
}	/* namespace Baseimagecollection */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_BASEIMAGECOLLECTION)
using namespace Vcl::Baseimagecollection;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_BaseimagecollectionHPP
