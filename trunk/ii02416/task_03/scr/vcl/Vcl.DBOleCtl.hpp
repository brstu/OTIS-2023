// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.DBOleCtl.pas' rev: 35.00 (Windows)

#ifndef Vcl_DbolectlHPP
#define Vcl_DbolectlHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Variants.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.OleCtrls.hpp>
#include <Data.DB.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Winapi.ActiveX.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Dbolectl
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TDataBindItem;
class DELPHICLASS TDataBindings;
class DELPHICLASS TDBOleControl;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TDataBindItem : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	TDataBindings* FOwner;
	Vcl::Dbctrls::TFieldDataLink* FDataLink;
	int FDispId;
	void __fastcall DataChange(System::TObject* Sender);
	System::UnicodeString __fastcall GetDataField();
	void __fastcall SetDataField(const System::UnicodeString Value);
	void __fastcall SetDispID(int Value);
	void __fastcall UpdateData(System::TObject* Sender);
	
public:
	__fastcall virtual TDataBindItem(System::Classes::TCollection* Collection);
	__fastcall virtual ~TDataBindItem();
	
__published:
	__property System::UnicodeString DataField = {read=GetDataField, write=SetDataField};
	__property int DispID = {read=FDispId, write=SetDispID, nodefault};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TDataBindings : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	TDataBindItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	TDBOleControl* FDBOleControl;
	HIDESBASE TDataBindItem* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TDataBindItem* Value);
	
public:
	__fastcall TDataBindings(TDBOleControl* DBOleControl);
	HIDESBASE TDataBindItem* __fastcall Add();
	virtual void __fastcall Update(System::Classes::TCollectionItem* Item);
	TDataBindItem* __fastcall GetItemByDispID(int ADispID);
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	__property TDataBindItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TDataBindings() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TDBOleControl : public Vcl::Olectrls::TOleControl
{
	typedef Vcl::Olectrls::TOleControl inherited;
	
private:
	TDataBindings* FDataBindings;
	bool FDataChanging;
	Data::Db::TDataSource* FDataSource;
	void __fastcall SetDataSource(Data::Db::TDataSource* Value);
	
protected:
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual HRESULT __stdcall OnChanged(int dispid);
	virtual HRESULT __stdcall OnRequestEdit(int dispid);
	
public:
	__fastcall virtual TDBOleControl(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TDBOleControl();
	
__published:
	__property Data::Db::TDataSource* DataSource = {read=FDataSource, write=SetDataSource};
	__property TDataBindings* DataBindings = {read=FDataBindings, write=FDataBindings};
public:
	/* TWinControl.CreateParented */ inline __fastcall TDBOleControl(HWND ParentWindow) : Vcl::Olectrls::TOleControl(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Dbolectl */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_DBOLECTL)
using namespace Vcl::Dbolectl;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_DbolectlHPP
