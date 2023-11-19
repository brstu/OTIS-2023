// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.WindowsStore.pas' rev: 35.00 (Windows)

#ifndef Vcl_WindowsstoreHPP
#define Vcl_WindowsstoreHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Winapi.WindowsStore.hpp>
#include <Winapi.CommonTypes.hpp>
#include <Vcl.Controls.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Windowsstore
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TWindowsStore;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TWindowsStore : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	Winapi::Windowsstore::TWindowsStoreCore* FWindowsStore;
	Winapi::Windowsstore::TAppLicense* __fastcall GetAppLicense();
	Winapi::Windowsstore::TAppProducts* __fastcall GetAppProducts();
	Winapi::Commontypes::_di_IStoreProduct __fastcall GetStoreProductForCurrentApp();
	Winapi::Windowsstore::TAppProducts* __fastcall GetUserCollection();
	
public:
	__fastcall virtual TWindowsStore(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TWindowsStore();
	Winapi::Commontypes::StorePurchaseStatus __fastcall PurchaseProduct(Winapi::Commontypes::_di_IStoreProduct AStoreProduct);
	Winapi::Commontypes::_di_IStoreConsumableResult __fastcall ReportConsumableFulfillment(const System::UnicodeString AProductStoreId, const unsigned AQuantity, const GUID &ATrackingId);
	Winapi::Commontypes::_di_IStoreConsumableResult __fastcall ReportUnmanagedConsumableFulfillment(const System::UnicodeString AProductStoreId, const GUID &ATrackingId);
	Winapi::Commontypes::_di_IStoreConsumableResult __fastcall GetConsumableBalanceRemaining(const Winapi::Commontypes::_di_IStoreProduct AStoreProduct);
	void __fastcall RefreshInfo();
	bool __fastcall UserHasBought(const System::UnicodeString AInAppOfferToken);
	__property Winapi::Windowsstore::TAppLicense* AppLicense = {read=GetAppLicense};
	__property Winapi::Windowsstore::TAppProducts* AppProducts = {read=GetAppProducts};
	__property Winapi::Windowsstore::TAppProducts* UserCollection = {read=GetUserCollection};
	__property Winapi::Commontypes::_di_IStoreProduct StoreProductForCurrentApp = {read=GetStoreProductForCurrentApp};
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Windowsstore */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_WINDOWSSTORE)
using namespace Vcl::Windowsstore;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_WindowsstoreHPP
