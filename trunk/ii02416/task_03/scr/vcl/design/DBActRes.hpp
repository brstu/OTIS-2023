// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBActRes.pas' rev: 35.00 (Windows)

#ifndef DbactresHPP
#define DbactresHPP

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
#include <Vcl.Forms.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.StdActns.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.DBActns.hpp>
#include <System.Actions.hpp>
#include <System.ImageList.hpp>
#include <Vcl.VirtualImageList.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dbactres
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TStandardDatasetActions;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TStandardDatasetActions : public System::Classes::TDataModule
{
	typedef System::Classes::TDataModule inherited;
	
__published:
	Vcl::Actnlist::TActionList* ActionList1;
	Vcl::Virtualimagelist::TVirtualImageList* ImageList1;
	Vcl::Dbactns::TDataSetCancel* DataSetCancel1;
	Vcl::Dbactns::TDataSetDelete* DataSetDelete1;
	Vcl::Dbactns::TDataSetEdit* DataSetEdit1;
	Vcl::Dbactns::TDataSetFirst* DataSetFirst1;
	Vcl::Dbactns::TDataSetInsert* DataSetInsert1;
	Vcl::Dbactns::TDataSetLast* DataSetLast1;
	Vcl::Dbactns::TDataSetNext* DataSetNext1;
	Vcl::Dbactns::TDataSetPost* DataSetPost1;
	Vcl::Dbactns::TDataSetPrior* DataSetPrior1;
	Vcl::Dbactns::TDataSetRefresh* DataSetRefresh1;
public:
	/* TDataModule.Create */ inline __fastcall virtual TStandardDatasetActions(System::Classes::TComponent* AOwner) : System::Classes::TDataModule(AOwner) { }
	/* TDataModule.CreateNew */ inline __fastcall virtual TStandardDatasetActions(System::Classes::TComponent* AOwner, int Dummy) : System::Classes::TDataModule(AOwner, Dummy) { }
	/* TDataModule.Destroy */ inline __fastcall virtual ~TStandardDatasetActions() { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE TStandardDatasetActions* StandardDatasetActions;
}	/* namespace Dbactres */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DBACTRES)
using namespace Dbactres;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbactresHPP
