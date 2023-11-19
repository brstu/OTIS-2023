// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.ShareContract.pas' rev: 35.00 (Windows)

#ifndef Vcl_SharecontractHPP
#define Vcl_SharecontractHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Win.ShareContract.hpp>
#include <System.Classes.hpp>
#include <System.Generics.Collections.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Sharecontract
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TCustomSharingContract;
class DELPHICLASS TSharingContract;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TCustomSharingContract : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	System::Win::Sharecontract::TShareContract* FShareContract;
	System::UnicodeString FPackageName;
	System::UnicodeString FContentSourceWebLink;
	System::UnicodeString FContentSourceApplicationLink;
	System::UnicodeString FImageFile;
	System::UnicodeString FIconFile;
	System::UnicodeString FWebAddress;
	System::UnicodeString FApplicationName;
	System::UnicodeString FDescription;
	System::UnicodeString FDataTitle;
	System::UnicodeString FDataText;
	System::UnicodeString FLogoFile;
	System::UnicodeString FRtfText;
	System::UnicodeString FHTML;
	System::Win::Sharecontract::TTransferDataEvent FOnTransferImage;
	System::Win::Sharecontract::TApplicationChosenEvent FOnAppChosen;
	System::Win::Sharecontract::TTransferDataEvent __fastcall GetOnTransferImage();
	void __fastcall SetOnTransferImage(const System::Win::Sharecontract::TTransferDataEvent Value);
	System::UnicodeString __fastcall GetApplicationName();
	System::UnicodeString __fastcall GetContentSourceApplicationLink();
	System::UnicodeString __fastcall GetContentSourceWebLink();
	System::UnicodeString __fastcall GetDataText();
	System::UnicodeString __fastcall GetDataTitle();
	System::UnicodeString __fastcall GetDescription();
	System::UnicodeString __fastcall GetHTML();
	System::UnicodeString __fastcall GetIconFile();
	System::UnicodeString __fastcall GetImageFile();
	System::UnicodeString __fastcall GetLogoFile();
	System::UnicodeString __fastcall GetPackageName();
	System::UnicodeString __fastcall GetRtfText();
	System::UnicodeString __fastcall GetWebAddress();
	void __fastcall SetApplicationName(const System::UnicodeString Value);
	void __fastcall SetContentSourceApplicationLink(const System::UnicodeString Value);
	void __fastcall SetContentSourceWebLink(const System::UnicodeString Value);
	void __fastcall SetDataText(const System::UnicodeString Value);
	void __fastcall SetDataTitle(const System::UnicodeString Value);
	void __fastcall SetDescription(const System::UnicodeString Value);
	void __fastcall SetHTML(const System::UnicodeString Value);
	void __fastcall SetIconFile(const System::UnicodeString Value);
	void __fastcall SetImageFile(const System::UnicodeString Value);
	void __fastcall SetLogoFile(const System::UnicodeString Value);
	void __fastcall SetPackageName(const System::UnicodeString Value);
	void __fastcall SetRtfText(const System::UnicodeString Value);
	void __fastcall SetWebAddress(const System::UnicodeString Value);
	void __fastcall CheckShareContract();
	System::Win::Sharecontract::TApplicationChosenEvent __fastcall GetOnAppChosen();
	void __fastcall SetOnAppChosen(const System::Win::Sharecontract::TApplicationChosenEvent Value);
	System::Classes::TStrings* __fastcall GetFileList();
	void __fastcall SetFileList(System::Classes::TStrings* const Value);
	
public:
	__fastcall virtual TCustomSharingContract(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomSharingContract();
	void __fastcall InitSharing();
	__property System::UnicodeString ApplicationName = {read=GetApplicationName, write=SetApplicationName};
	__property System::UnicodeString ContentSourceWebLink = {read=GetContentSourceWebLink, write=SetContentSourceWebLink};
	__property System::UnicodeString ContentSourceApplicationLink = {read=GetContentSourceApplicationLink, write=SetContentSourceApplicationLink};
	__property System::UnicodeString DataText = {read=GetDataText, write=SetDataText};
	__property System::UnicodeString DataTitle = {read=GetDataTitle, write=SetDataTitle};
	__property System::UnicodeString Description = {read=GetDescription, write=SetDescription};
	__property System::UnicodeString IconFile = {read=GetIconFile, write=SetIconFile};
	__property System::UnicodeString ImageFile = {read=GetImageFile, write=SetImageFile};
	__property System::UnicodeString LogoFile = {read=GetLogoFile, write=SetLogoFile};
	__property System::UnicodeString PackageName = {read=GetPackageName, write=SetPackageName};
	__property System::UnicodeString WebAddress = {read=GetWebAddress, write=SetWebAddress};
	__property System::UnicodeString RtfText = {read=GetRtfText, write=SetRtfText};
	__property System::UnicodeString HTML = {read=GetHTML, write=SetHTML};
	__property System::Classes::TStrings* FileList = {read=GetFileList, write=SetFileList};
	__property System::Win::Sharecontract::TTransferDataEvent OnTransferImage = {read=GetOnTransferImage, write=SetOnTransferImage};
	__property System::Win::Sharecontract::TApplicationChosenEvent OnAppChosen = {read=GetOnAppChosen, write=SetOnAppChosen};
};


class PASCALIMPLEMENTATION TSharingContract : public TCustomSharingContract
{
	typedef TCustomSharingContract inherited;
	
__published:
	__property ApplicationName = {default=0};
	__property ContentSourceWebLink = {default=0};
	__property ContentSourceApplicationLink = {default=0};
	__property DataText = {default=0};
	__property DataTitle = {default=0};
	__property Description = {default=0};
	__property IconFile = {default=0};
	__property ImageFile = {default=0};
	__property LogoFile = {default=0};
	__property PackageName = {default=0};
	__property WebAddress = {default=0};
	__property RtfText = {default=0};
	__property HTML = {default=0};
	__property FileList;
	__property OnTransferImage;
	__property OnAppChosen;
public:
	/* TCustomSharingContract.Create */ inline __fastcall virtual TSharingContract(System::Classes::TComponent* AOwner) : TCustomSharingContract(AOwner) { }
	/* TCustomSharingContract.Destroy */ inline __fastcall virtual ~TSharingContract() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Sharecontract */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_SHARECONTRACT)
using namespace Vcl::Sharecontract;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_SharecontractHPP
