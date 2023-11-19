// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.PlatformDefaultStyleActnCtrls.pas' rev: 35.00 (Windows)

#ifndef Vcl_PlatformdefaultstyleactnctrlsHPP
#define Vcl_PlatformdefaultstyleactnctrlsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Vcl.ActnMan.hpp>
#include <Vcl.ActnMenus.hpp>
#include <Vcl.ActnCtrls.hpp>

//-- user supplied -----------------------------------------------------------

/* automatically link to platformstyleactnctrls.obj so that the property editors are registered */
#pragma link "Vcl.PlatformDefaultStyleActnCtrls"


namespace Vcl
{
namespace Platformdefaultstyleactnctrls
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TPlatformDefaultStyleActionBars;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TPlatformDefaultStyleActionBars : public Vcl::Actnmenus::TActionBarStyleEx
{
	typedef Vcl::Actnmenus::TActionBarStyleEx inherited;
	
public:
	virtual Vcl::Actnman::TCustomColorMapClass __fastcall GetColorMapClass(Vcl::Actnman::TCustomActionBar* ActionBar);
	virtual Vcl::Actnman::TCustomActionControlClass __fastcall GetControlClass(Vcl::Actnman::TCustomActionBar* ActionBar, Vcl::Actnman::TActionClientItem* AnItem);
	virtual Vcl::Actnmenus::TCustomPopupClass __fastcall GetPopupClass(Vcl::Actnman::TCustomActionBar* ActionBar);
	virtual Vcl::Actnmenus::TCustomAddRemoveItemClass __fastcall GetAddRemoveItemClass(Vcl::Actnman::TCustomActionBar* ActionBar);
	virtual System::UnicodeString __fastcall GetStyleName();
	virtual Vcl::Actnctrls::TCustomToolScrollBtnClass __fastcall GetScrollBtnClass(Vcl::Actnman::TCustomActionBar* ActionBar);
public:
	/* TObject.Create */ inline __fastcall TPlatformDefaultStyleActionBars() : Vcl::Actnmenus::TActionBarStyleEx() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TPlatformDefaultStyleActionBars() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE TPlatformDefaultStyleActionBars* PlatformDefaultStyle;
}	/* namespace Platformdefaultstyleactnctrls */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_PLATFORMDEFAULTSTYLEACTNCTRLS)
using namespace Vcl::Platformdefaultstyleactnctrls;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_PlatformdefaultstyleactnctrlsHPP
