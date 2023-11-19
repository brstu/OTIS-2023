// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DsnDb.pas' rev: 35.00 (Windows)

#ifndef DsndbHPP
#define DsndbHPP

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
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Dialogs.hpp>
#include <DesignIntf.hpp>
#include <DesignMenus.hpp>
#include <System.TypInfo.hpp>
#include <Data.DB.hpp>
#include <DSDesign.hpp>
#include <DSDefine.hpp>
#include <TreeIntf.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dsndb
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TFieldsSprig;
class DELPHICLASS TFieldSprig;
class DELPHICLASS TDataSetSprig;
class DELPHICLASS TDataSourceSprig;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TFieldsSprig : public Treeintf::TAbstractCollectionSprig
{
	typedef Treeintf::TAbstractCollectionSprig inherited;
	
private:
	Data::Db::TDataSet* FDataSet;
	void __fastcall HandleFieldsEditor(System::TObject* Sender);
	void __fastcall DoAddAllFields();
	void __fastcall DoAddFields();
	void __fastcall DoNewField();
	Dsdesign::TDSDesignerClass __fastcall GetDSDesignerClass();
	
protected:
	virtual System::UnicodeString __fastcall GetAddType(int Index);
	
public:
	virtual Treeintf::TSprigDeleteStyle __fastcall DeleteStyle();
	virtual bool __fastcall CustomDelete();
	virtual System::UnicodeString __fastcall UniqueName();
	virtual System::UnicodeString __fastcall Caption();
	virtual void __fastcall FigureParent();
	virtual bool __fastcall SortByIndex();
	virtual void __fastcall PrepareMenu(const Designmenus::_di_IMenuItems AItems);
	virtual void __fastcall AddType(int Index);
	virtual int __fastcall AddTypeCount();
	__property Data::Db::TDataSet* DataSet = {read=FDataSet, write=FDataSet};
public:
	/* TAbstractCollectionSprig.Create */ inline __fastcall virtual TFieldsSprig(System::Classes::TPersistent* AItem)/* overload */ : Treeintf::TAbstractCollectionSprig(AItem) { }
	
public:
	/* TSprig.Destroy */ inline __fastcall virtual ~TFieldsSprig() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TFieldSprig : public Treeintf::TComponentSprig
{
	typedef Treeintf::TComponentSprig inherited;
	
protected:
	virtual System::UnicodeString __fastcall GetAddType(int Index);
	
public:
	virtual void __fastcall FigureParent();
	virtual int __fastcall ItemIndex();
	virtual void __fastcall PrepareMenu(const Designmenus::_di_IMenuItems AItems);
	virtual System::UnicodeString __fastcall Caption();
	virtual bool __fastcall DragOverTo(Treeintf::TSprig* AParent);
	virtual bool __fastcall DragDropTo(Treeintf::TSprig* AParent);
	virtual void __fastcall AddType(int Index);
	virtual int __fastcall AddTypeCount();
public:
	/* TComponentSprig.Create */ inline __fastcall virtual TFieldSprig(System::Classes::TPersistent* AItem)/* overload */ : Treeintf::TComponentSprig(AItem) { }
	/* TComponentSprig.Create */ inline __fastcall TFieldSprig(System::Classes::TPersistent* AItem, Treeintf::TSprig* AOwner)/* overload */ : Treeintf::TComponentSprig(AItem, AOwner) { }
	
public:
	/* TSprig.Destroy */ inline __fastcall virtual ~TFieldSprig() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDataSetSprig : public Treeintf::TComponentSprig
{
	typedef Treeintf::TComponentSprig inherited;
	
public:
	virtual Dsdesign::TDSDesignerClass __fastcall GetDSDesignerClass();
	virtual void __fastcall FigureChildren();
public:
	/* TComponentSprig.Create */ inline __fastcall virtual TDataSetSprig(System::Classes::TPersistent* AItem)/* overload */ : Treeintf::TComponentSprig(AItem) { }
	/* TComponentSprig.Create */ inline __fastcall TDataSetSprig(System::Classes::TPersistent* AItem, Treeintf::TSprig* AOwner)/* overload */ : Treeintf::TComponentSprig(AItem, AOwner) { }
	
public:
	/* TSprig.Destroy */ inline __fastcall virtual ~TDataSetSprig() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDataSourceSprig : public Treeintf::TComponentSprig
{
	typedef Treeintf::TComponentSprig inherited;
	
public:
	__classmethod virtual System::UnicodeString __fastcall ParentProperty();
public:
	/* TComponentSprig.Create */ inline __fastcall virtual TDataSourceSprig(System::Classes::TPersistent* AItem)/* overload */ : Treeintf::TComponentSprig(AItem) { }
	/* TComponentSprig.Create */ inline __fastcall TDataSourceSprig(System::Classes::TPersistent* AItem, Treeintf::TSprig* AOwner)/* overload */ : Treeintf::TComponentSprig(AItem, AOwner) { }
	
public:
	/* TSprig.Destroy */ inline __fastcall virtual ~TDataSourceSprig() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::ResourceString _SNoMasterFields;
#define Dsndb_SNoMasterFields System::LoadResourceString(&Dsndb::_SNoMasterFields)
extern DELPHI_PACKAGE System::ResourceString _SParamsFields;
#define Dsndb_SParamsFields System::LoadResourceString(&Dsndb::_SParamsFields)
extern DELPHI_PACKAGE System::UnicodeString __fastcall SprigDataSetFieldsName(Data::Db::TDataSet* ADataSet);
}	/* namespace Dsndb */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DSNDB)
using namespace Dsndb;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsndbHPP
