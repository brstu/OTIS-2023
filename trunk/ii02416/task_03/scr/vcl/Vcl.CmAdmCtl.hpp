// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.CmAdmCtl.pas' rev: 35.00 (Windows)

#ifndef Vcl_CmadmctlHPP
#define Vcl_CmadmctlHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.ActiveX.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.OleServer.hpp>
#include <Vcl.OleCtrls.hpp>
#include <System.Win.StdVCL.hpp>
#include <Winapi.COMAdmin.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Cmadmctl
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS CoCOMAdminCatalog;
class DELPHICLASS TCOMAdminCatalog;
class DELPHICLASS CoCOMAdminCatalogObject;
class DELPHICLASS TCOMAdminCatalogObject;
class DELPHICLASS CoCOMAdminCatalogCollection;
class DELPHICLASS TCOMAdminCatalogCollection;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION CoCOMAdminCatalog : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__classmethod Winapi::Comadmin::_di_ICOMAdminCatalog __fastcall Create();
public:
	/* TObject.Create */ inline __fastcall CoCOMAdminCatalog() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~CoCOMAdminCatalog() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TCOMAdminCatalog : public Vcl::Oleserver::TOleServer
{
	typedef Vcl::Oleserver::TOleServer inherited;
	
private:
	Winapi::Comadmin::_di_ICOMAdminCatalog FIntf;
	Winapi::Comadmin::_di_ICOMAdminCatalog __fastcall GetDefaultInterface();
	
protected:
	virtual void __fastcall InitServerData();
	
public:
	__fastcall virtual TCOMAdminCatalog(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCOMAdminCatalog();
	virtual void __fastcall Connect();
	void __fastcall ConnectTo(Winapi::Comadmin::_di_ICOMAdminCatalog svrIntf);
	virtual void __fastcall Disconnect();
	TCOMAdminCatalogCollection* __fastcall GetCollection(const System::WideString bstrCollName);
	TCOMAdminCatalogCollection* __fastcall ICOMAdminCatalog_Connect(const System::WideString bstrConnectString);
	int __fastcall Get_MajorVersion();
	int __fastcall Get_MinorVersion();
	TCOMAdminCatalogCollection* __fastcall GetCollectionByQuery(const System::WideString bstrCollName, Winapi::Activex::PSafeArray &aQuery);
	void __fastcall ImportComponent(const System::WideString bstrApplIdOrName, const System::WideString bstrCLSIDOrProgId);
	void __fastcall InstallComponent(const System::WideString bstrApplIdOrName, const System::WideString bstrDLL, const System::WideString bstrTLB, const System::WideString bstrPSDLL);
	void __fastcall ShutdownApplication(const System::WideString bstrApplIdOrName);
	void __fastcall ExportApplication(const System::WideString bstrApplIdOrName, const System::WideString bstrApplicationFile, int lOptions);
	void __fastcall InstallApplication(const System::WideString bstrApplicationFile, const System::WideString bstrDestinationDirectory, int lOptions, const System::WideString bstrUserId, const System::WideString bstrPassword, const System::WideString bstrRSN);
	void __fastcall StopRouter();
	void __fastcall RefreshRouter();
	void __fastcall StartRouter();
	void __fastcall InstallMultipleComponents(const System::WideString bstrApplIdOrName, Winapi::Activex::PSafeArray &varFileNames, Winapi::Activex::PSafeArray &varCLSIDS);
	void __fastcall GetMultipleComponentsInfo(const System::WideString bstrApplIdOrName, Winapi::Activex::PSafeArray &varFileNames, /* out */ Winapi::Activex::PSafeArray &varCLSIDS, /* out */ Winapi::Activex::PSafeArray &varClassNames, /* out */ Winapi::Activex::PSafeArray &varFileFlags, /* out */ Winapi::Activex::PSafeArray &varComponentFlags);
	void __fastcall RefreshComponents();
	void __fastcall BackupREGDB(const System::WideString bstrBackupFilePath);
	void __fastcall RestoreREGDB(const System::WideString bstrBackupFilePath);
	void __fastcall QueryApplicationFile(const System::WideString bstrApplicationFile, /* out */ System::WideString &bstrApplicationName, /* out */ System::WideString &bstrApplicationDescription, /* out */ System::WordBool &bHasUsers, /* out */ System::WordBool &bIsProxy, /* out */ Winapi::Activex::PSafeArray &varFileNames);
	void __fastcall StartApplication(const System::WideString bstrApplIdOrName);
	int __fastcall ServiceCheck(int lService);
	void __fastcall InstallMultipleEventClasses(const System::WideString bstrApplIdOrName, Winapi::Activex::PSafeArray &varFileNames, Winapi::Activex::PSafeArray &varCLSIDS);
	void __fastcall InstallEventClass(const System::WideString bstrApplIdOrName, const System::WideString bstrDLL, const System::WideString bstrTLB, const System::WideString bstrPSDLL);
	void __fastcall GetEventClassesForIID(const System::WideString bstrIID, /* out */ Winapi::Activex::PSafeArray &varCLSIDS, /* out */ Winapi::Activex::PSafeArray &varProgIDs, /* out */ Winapi::Activex::PSafeArray &varDescriptions);
	__property Winapi::Comadmin::_di_ICOMAdminCatalog DefaultInterface = {read=GetDefaultInterface};
	__property int MajorVersion = {read=Get_MajorVersion, nodefault};
	__property int MinorVersion = {read=Get_MinorVersion, nodefault};
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION CoCOMAdminCatalogObject : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__classmethod Winapi::Comadmin::_di_ICatalogObject __fastcall Create();
public:
	/* TObject.Create */ inline __fastcall CoCOMAdminCatalogObject() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~CoCOMAdminCatalogObject() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TCOMAdminCatalogObject : public Vcl::Oleserver::TOleServer
{
	typedef Vcl::Oleserver::TOleServer inherited;
	
private:
	Winapi::Comadmin::_di_ICatalogObject FIntf;
	Winapi::Comadmin::_di_ICatalogObject __fastcall GetDefaultInterface();
	
protected:
	virtual void __fastcall InitServerData();
	
public:
	__fastcall virtual TCOMAdminCatalogObject(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCOMAdminCatalogObject();
	virtual void __fastcall Connect();
	void __fastcall ConnectTo(Winapi::Comadmin::_di_ICatalogObject svrIntf);
	virtual void __fastcall Disconnect();
	System::OleVariant __fastcall Get_Value(const System::WideString bstrPropName);
	void __fastcall Set_Value(const System::WideString bstrPropName, const System::OleVariant &retval);
	System::OleVariant __fastcall Get_Key();
	System::OleVariant __fastcall Get_Name();
	System::WordBool __fastcall IsPropertyReadOnly(const System::WideString bstrPropName);
	System::WordBool __fastcall Get_Valid();
	System::WordBool __fastcall IsPropertyWriteOnly(const System::WideString bstrPropName);
	__property System::OleVariant Value[const System::WideString bstrPropName] = {read=Get_Value, write=Set_Value};
	__property Winapi::Comadmin::_di_ICatalogObject DefaultInterface = {read=GetDefaultInterface};
	__property System::OleVariant Key = {read=Get_Key};
	__property System::OleVariant Name = {read=Get_Name};
	__property System::WordBool Valid = {read=Get_Valid, nodefault};
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION CoCOMAdminCatalogCollection : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__classmethod Winapi::Comadmin::_di_ICatalogCollection __fastcall Create();
public:
	/* TObject.Create */ inline __fastcall CoCOMAdminCatalogCollection() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~CoCOMAdminCatalogCollection() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TCOMAdminCatalogCollection : public Vcl::Oleserver::TOleServer
{
	typedef Vcl::Oleserver::TOleServer inherited;
	
private:
	Winapi::Comadmin::_di_ICatalogCollection FIntf;
	Winapi::Comadmin::_di_ICatalogCollection __fastcall GetDefaultInterface();
	
protected:
	virtual void __fastcall InitServerData();
	
public:
	__fastcall virtual TCOMAdminCatalogCollection(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCOMAdminCatalogCollection();
	virtual void __fastcall Connect();
	void __fastcall ConnectTo(Winapi::Comadmin::_di_ICatalogCollection svrIntf);
	virtual void __fastcall Disconnect();
	TCOMAdminCatalogObject* __fastcall Get_Item(int lIndex);
	int __fastcall Get_Count();
	HIDESBASE void __fastcall Remove(int lIndex);
	TCOMAdminCatalogObject* __fastcall Add();
	void __fastcall Populate();
	int __fastcall SaveChanges();
	TCOMAdminCatalogCollection* __fastcall GetCollection(const System::WideString bstrCollName, const System::OleVariant &varObjectKey);
	System::OleVariant __fastcall Get_Name();
	System::WordBool __fastcall Get_AddEnabled();
	System::WordBool __fastcall Get_RemoveEnabled();
	_di_IDispatch __fastcall GetUtilInterface();
	int __fastcall Get_DataStoreMajorVersion();
	int __fastcall Get_DataStoreMinorVersion();
	void __fastcall PopulateByKey(Winapi::Activex::PSafeArray aKeys);
	void __fastcall PopulateByQuery(const System::WideString bstrQueryString, int lQueryType);
	__property Winapi::Comadmin::_di_ICatalogCollection DefaultInterface = {read=GetDefaultInterface};
	__property int Count = {read=Get_Count, nodefault};
	__property System::OleVariant Name = {read=Get_Name};
	__property System::WordBool AddEnabled = {read=Get_AddEnabled, nodefault};
	__property System::WordBool RemoveEnabled = {read=Get_RemoveEnabled, nodefault};
	__property int DataStoreMajorVersion = {read=Get_DataStoreMajorVersion, nodefault};
	__property int DataStoreMinorVersion = {read=Get_DataStoreMinorVersion, nodefault};
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Cmadmctl */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_CMADMCTL)
using namespace Vcl::Cmadmctl;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_CmadmctlHPP
