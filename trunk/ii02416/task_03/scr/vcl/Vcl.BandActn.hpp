// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.BandActn.pas' rev: 35.00 (Windows)

#ifndef Vcl_BandactnHPP
#define Vcl_BandactnHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Vcl.Graphics.hpp>
#include <System.Classes.hpp>
#include <Winapi.Messages.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.ActnMan.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.CustomizeDlg.hpp>
#include <System.Actions.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Bandactn
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TCustomizeActionBars;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TCustomizeActionBars : public Vcl::Actnlist::TAction
{
	typedef Vcl::Actnlist::TAction inherited;
	
private:
	Vcl::Customizedlg::TCustomizeDlg* FCustomizeDlg;
	Vcl::Actnman::TCustomActionManager* FActionManager;
	
public:
	__fastcall virtual TCustomizeActionBars(System::Classes::TComponent* AOwner);
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	virtual bool __fastcall HandlesTarget(System::TObject* Target);
	
__published:
	__property Vcl::Actnman::TCustomActionManager* ActionManager = {read=FActionManager, write=FActionManager};
	__property Vcl::Customizedlg::TCustomizeDlg* CustomizeDlg = {read=FCustomizeDlg};
public:
	/* TCustomAction.Destroy */ inline __fastcall virtual ~TCustomizeActionBars() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Bandactn */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_BANDACTN)
using namespace Vcl::Bandactn;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_BandactnHPP
