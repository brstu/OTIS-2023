// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.DBActns.pas' rev: 35.00 (Windows)

#ifndef Vcl_DbactnsHPP
#define Vcl_DbactnsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <Data.DB.hpp>
#include <Vcl.ActnList.hpp>
#include <System.Actions.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Dbactns
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TDataSetAction;
class DELPHICLASS TDataSetFirst;
class DELPHICLASS TDataSetPrior;
class DELPHICLASS TDataSetNext;
class DELPHICLASS TDataSetLast;
class DELPHICLASS TDataSetInsert;
class DELPHICLASS TDataSetDelete;
class DELPHICLASS TDataSetEdit;
class DELPHICLASS TDataSetPost;
class DELPHICLASS TDataSetCancel;
class DELPHICLASS TDataSetRefresh;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TDataSetAction : public Vcl::Actnlist::TAction
{
	typedef Vcl::Actnlist::TAction inherited;
	
private:
	Data::Db::TDataSource* FDataSource;
	void __fastcall SetDataSource(Data::Db::TDataSource* Value);
	
protected:
	virtual Data::Db::TDataSet* __fastcall GetDataSet(System::TObject* Target);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	
public:
	virtual bool __fastcall HandlesTarget(System::TObject* Target);
	__property Data::Db::TDataSource* DataSource = {read=FDataSource, write=SetDataSource};
public:
	/* TAction.Create */ inline __fastcall virtual TDataSetAction(System::Classes::TComponent* AOwner) : Vcl::Actnlist::TAction(AOwner) { }
	
public:
	/* TCustomAction.Destroy */ inline __fastcall virtual ~TDataSetAction() { }
	
};


class PASCALIMPLEMENTATION TDataSetFirst : public TDataSetAction
{
	typedef TDataSetAction inherited;
	
public:
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	virtual void __fastcall UpdateTarget(System::TObject* Target);
	
__published:
	__property DataSource;
public:
	/* TAction.Create */ inline __fastcall virtual TDataSetFirst(System::Classes::TComponent* AOwner) : TDataSetAction(AOwner) { }
	
public:
	/* TCustomAction.Destroy */ inline __fastcall virtual ~TDataSetFirst() { }
	
};


class PASCALIMPLEMENTATION TDataSetPrior : public TDataSetAction
{
	typedef TDataSetAction inherited;
	
public:
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	virtual void __fastcall UpdateTarget(System::TObject* Target);
	
__published:
	__property DataSource;
public:
	/* TAction.Create */ inline __fastcall virtual TDataSetPrior(System::Classes::TComponent* AOwner) : TDataSetAction(AOwner) { }
	
public:
	/* TCustomAction.Destroy */ inline __fastcall virtual ~TDataSetPrior() { }
	
};


class PASCALIMPLEMENTATION TDataSetNext : public TDataSetAction
{
	typedef TDataSetAction inherited;
	
public:
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	virtual void __fastcall UpdateTarget(System::TObject* Target);
	
__published:
	__property DataSource;
public:
	/* TAction.Create */ inline __fastcall virtual TDataSetNext(System::Classes::TComponent* AOwner) : TDataSetAction(AOwner) { }
	
public:
	/* TCustomAction.Destroy */ inline __fastcall virtual ~TDataSetNext() { }
	
};


class PASCALIMPLEMENTATION TDataSetLast : public TDataSetAction
{
	typedef TDataSetAction inherited;
	
public:
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	virtual void __fastcall UpdateTarget(System::TObject* Target);
	
__published:
	__property DataSource;
public:
	/* TAction.Create */ inline __fastcall virtual TDataSetLast(System::Classes::TComponent* AOwner) : TDataSetAction(AOwner) { }
	
public:
	/* TCustomAction.Destroy */ inline __fastcall virtual ~TDataSetLast() { }
	
};


class PASCALIMPLEMENTATION TDataSetInsert : public TDataSetAction
{
	typedef TDataSetAction inherited;
	
public:
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	virtual void __fastcall UpdateTarget(System::TObject* Target);
	
__published:
	__property DataSource;
public:
	/* TAction.Create */ inline __fastcall virtual TDataSetInsert(System::Classes::TComponent* AOwner) : TDataSetAction(AOwner) { }
	
public:
	/* TCustomAction.Destroy */ inline __fastcall virtual ~TDataSetInsert() { }
	
};


class PASCALIMPLEMENTATION TDataSetDelete : public TDataSetAction
{
	typedef TDataSetAction inherited;
	
public:
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	virtual void __fastcall UpdateTarget(System::TObject* Target);
	
__published:
	__property DataSource;
public:
	/* TAction.Create */ inline __fastcall virtual TDataSetDelete(System::Classes::TComponent* AOwner) : TDataSetAction(AOwner) { }
	
public:
	/* TCustomAction.Destroy */ inline __fastcall virtual ~TDataSetDelete() { }
	
};


class PASCALIMPLEMENTATION TDataSetEdit : public TDataSetAction
{
	typedef TDataSetAction inherited;
	
public:
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	virtual void __fastcall UpdateTarget(System::TObject* Target);
	
__published:
	__property DataSource;
public:
	/* TAction.Create */ inline __fastcall virtual TDataSetEdit(System::Classes::TComponent* AOwner) : TDataSetAction(AOwner) { }
	
public:
	/* TCustomAction.Destroy */ inline __fastcall virtual ~TDataSetEdit() { }
	
};


class PASCALIMPLEMENTATION TDataSetPost : public TDataSetAction
{
	typedef TDataSetAction inherited;
	
public:
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	virtual void __fastcall UpdateTarget(System::TObject* Target);
	
__published:
	__property DataSource;
public:
	/* TAction.Create */ inline __fastcall virtual TDataSetPost(System::Classes::TComponent* AOwner) : TDataSetAction(AOwner) { }
	
public:
	/* TCustomAction.Destroy */ inline __fastcall virtual ~TDataSetPost() { }
	
};


class PASCALIMPLEMENTATION TDataSetCancel : public TDataSetAction
{
	typedef TDataSetAction inherited;
	
public:
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	virtual void __fastcall UpdateTarget(System::TObject* Target);
	
__published:
	__property DataSource;
public:
	/* TAction.Create */ inline __fastcall virtual TDataSetCancel(System::Classes::TComponent* AOwner) : TDataSetAction(AOwner) { }
	
public:
	/* TCustomAction.Destroy */ inline __fastcall virtual ~TDataSetCancel() { }
	
};


class PASCALIMPLEMENTATION TDataSetRefresh : public TDataSetAction
{
	typedef TDataSetAction inherited;
	
public:
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	virtual void __fastcall UpdateTarget(System::TObject* Target);
	
__published:
	__property DataSource;
public:
	/* TAction.Create */ inline __fastcall virtual TDataSetRefresh(System::Classes::TComponent* AOwner) : TDataSetAction(AOwner) { }
	
public:
	/* TCustomAction.Destroy */ inline __fastcall virtual ~TDataSetRefresh() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Dbactns */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_DBACTNS)
using namespace Vcl::Dbactns;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_DbactnsHPP
