// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'IDEDockTabSet.pas' rev: 35.00 (Windows)

#ifndef IdedocktabsetHPP
#define IdedocktabsetHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Vcl.Controls.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.DockTabSet.hpp>
#include <System.IniFiles.hpp>
#include <DeskForm.hpp>
#include <Vcl.Tabs.hpp>

//-- user supplied -----------------------------------------------------------

namespace Idedocktabset
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TIDEDockTabSet;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TIDEDockTabSet : public Vcl::Docktabset::TDockTabSet
{
	typedef Vcl::Docktabset::TDockTabSet inherited;
	
private:
	bool FUpdatesDisabled;
	void __fastcall RemoveDeadTabs();
	void __fastcall DoPainting();
	
protected:
	virtual void __fastcall ShowDockClientInfo(Vcl::Docktabset::TDockClientInfo* const DockClientInfo);
	virtual System::UnicodeString __fastcall GetTabName(Vcl::Controls::TControl* const Client);
	virtual bool __fastcall ShouldAutoHide(Vcl::Controls::TWinControl* const Client);
	virtual void __fastcall Paint();
	
public:
	__fastcall virtual TIDEDockTabSet(System::Classes::TComponent* AOwner);
	void __fastcall LoadState(System::Inifiles::TCustomIniFile* const Desktop, const System::UnicodeString ClientSection, Deskform::TDesktopForm* DesktopForm);
	void __fastcall SaveState(System::Inifiles::TCustomIniFile* const Desktop, const bool IsProject, const System::UnicodeString ClientSection, Deskform::TDesktopForm* DesktopForm);
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
public:
	/* TDockTabSet.Destroy */ inline __fastcall virtual ~TIDEDockTabSet() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TIDEDockTabSet(HWND ParentWindow) : Vcl::Docktabset::TDockTabSet(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Idedocktabset */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IDEDOCKTABSET)
using namespace Idedocktabset;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IdedocktabsetHPP
