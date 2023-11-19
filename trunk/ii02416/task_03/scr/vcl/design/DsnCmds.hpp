// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DsnCmds.pas' rev: 35.00 (Windows)

#ifndef DsncmdsHPP
#define DsncmdsHPP

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
#include <Vcl.Menus.hpp>
#include <Vcl.ActnList.hpp>
#include <System.Actions.hpp>
#include <System.ImageList.hpp>
#include <Vcl.VirtualImageList.hpp>
#include <IDEImageResources.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dsncmds
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TDsnCommands;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TDsnCommands : public System::Classes::TDataModule
{
	typedef System::Classes::TDataModule inherited;
	
__published:
	Vcl::Actnlist::TActionList* ActionList1;
	Vcl::Menus::TPopupMenu* PopupMenu1;
	Vcl::Actnlist::TAction* ViewExplorerView;
	Vcl::Menus::TMenuItem* ViewExplorerView1;
	Vcl::Virtualimagelist::TVirtualImageList* ImageList1;
public:
	/* TDataModule.Create */ inline __fastcall virtual TDsnCommands(System::Classes::TComponent* AOwner) : System::Classes::TDataModule(AOwner) { }
	/* TDataModule.CreateNew */ inline __fastcall virtual TDsnCommands(System::Classes::TComponent* AOwner, int Dummy) : System::Classes::TDataModule(AOwner, Dummy) { }
	/* TDataModule.Destroy */ inline __fastcall virtual ~TDsnCommands() { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE TDsnCommands* DsnCommands;
}	/* namespace Dsncmds */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DSNCMDS)
using namespace Dsncmds;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsncmdsHPP
