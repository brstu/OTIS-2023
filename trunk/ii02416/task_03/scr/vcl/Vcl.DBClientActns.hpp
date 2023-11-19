// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.DBClientActns.pas' rev: 35.00 (Windows)

#ifndef Vcl_DbclientactnsHPP
#define Vcl_DbclientactnsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <Vcl.ActnList.hpp>
#include <Data.DB.hpp>
#include <Vcl.DBActns.hpp>
#include <Datasnap.DBClient.hpp>
#include <System.Actions.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Dbclientactns
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TReconcileActionLink;
class DELPHICLASS TClientDataSetApply;
class DELPHICLASS TClientDataSetRevert;
class DELPHICLASS TClientDataSetUndo;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TReconcileActionLink : public Data::Db::TDataLink
{
	typedef Data::Db::TDataLink inherited;
	
private:
	TClientDataSetApply* FApplyAction;
	
protected:
	virtual void __fastcall DataEvent(Data::Db::TDataEvent Event, NativeInt Info);
	
public:
	__property TClientDataSetApply* ApplyAction = {read=FApplyAction, write=FApplyAction};
public:
	/* TDataLink.Create */ inline __fastcall TReconcileActionLink() : Data::Db::TDataLink() { }
	/* TDataLink.Destroy */ inline __fastcall virtual ~TReconcileActionLink() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TClientDataSetApply : public Vcl::Dbactns::TDataSetAction
{
	typedef Vcl::Dbactns::TDataSetAction inherited;
	
private:
	TReconcileActionLink* FReconcileActnLink;
	int FMaxErrors;
	bool FDisplayErrorDlg;
	void __fastcall SetDisplayErrorDlg(const bool Value);
	
protected:
	void __fastcall DoReconcileError(const Datasnap::Dbclient::TReconcileInfo &ReconcileInfo);
	
public:
	__fastcall virtual TClientDataSetApply(System::Classes::TComponent* Owner);
	__fastcall virtual ~TClientDataSetApply();
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	virtual void __fastcall UpdateTarget(System::TObject* Target);
	
__published:
	__property DataSource;
	__property int MaxErrors = {read=FMaxErrors, write=FMaxErrors, default=0};
	__property bool DisplayErrorDlg = {read=FDisplayErrorDlg, write=SetDisplayErrorDlg, nodefault};
};


class PASCALIMPLEMENTATION TClientDataSetRevert : public Vcl::Dbactns::TDataSetAction
{
	typedef Vcl::Dbactns::TDataSetAction inherited;
	
public:
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	virtual void __fastcall UpdateTarget(System::TObject* Target);
	
__published:
	__property DataSource;
public:
	/* TAction.Create */ inline __fastcall virtual TClientDataSetRevert(System::Classes::TComponent* AOwner) : Vcl::Dbactns::TDataSetAction(AOwner) { }
	
public:
	/* TCustomAction.Destroy */ inline __fastcall virtual ~TClientDataSetRevert() { }
	
};


class PASCALIMPLEMENTATION TClientDataSetUndo : public Vcl::Dbactns::TDataSetAction
{
	typedef Vcl::Dbactns::TDataSetAction inherited;
	
private:
	bool FFollowChange;
	
public:
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	virtual void __fastcall UpdateTarget(System::TObject* Target);
	
__published:
	__property DataSource;
	__property bool FollowChange = {read=FFollowChange, write=FFollowChange, nodefault};
public:
	/* TAction.Create */ inline __fastcall virtual TClientDataSetUndo(System::Classes::TComponent* AOwner) : Vcl::Dbactns::TDataSetAction(AOwner) { }
	
public:
	/* TCustomAction.Destroy */ inline __fastcall virtual ~TClientDataSetUndo() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Dbclientactns */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_DBCLIENTACTNS)
using namespace Vcl::Dbclientactns;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_DbclientactnsHPP
