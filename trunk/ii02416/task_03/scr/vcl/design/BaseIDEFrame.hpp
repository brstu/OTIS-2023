// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'BaseIDEFrame.pas' rev: 35.00 (Windows)

#ifndef BaseideframeHPP
#define BaseideframeHPP

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
#include <System.Variants.hpp>
#include <System.Classes.hpp>
#include <Vcl.Forms.hpp>
#include <DesignIntf.hpp>
#include <System.IniFiles.hpp>
#include <Vcl.Controls.hpp>

//-- user supplied -----------------------------------------------------------

namespace Baseideframe
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TBaseFrame;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TBaseFrame : public Vcl::Forms::TFrame
{
	typedef Vcl::Forms::TFrame inherited;
	
private:
	System::UnicodeString FDeskSection;
	bool FLoadedFromDesktop;
	void __fastcall MainFormMadeVisible(System::TObject* Sender);
	
protected:
	DYNAMIC void __fastcall DoMainFormShown();
	
public:
	__fastcall virtual TBaseFrame(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TBaseFrame();
	virtual bool __fastcall EditAction(Designintf::TEditAction Action);
	virtual Designintf::TEditState __fastcall GetEditState();
	virtual void __fastcall SaveWindowState(System::Inifiles::TCustomIniFile* Desktop, bool isProject);
	virtual void __fastcall LoadWindowState(System::Inifiles::TCustomIniFile* Desktop);
	__property System::UnicodeString DeskSection = {read=FDeskSection, write=FDeskSection};
	__property bool LoadedFromDesktop = {read=FLoadedFromDesktop, nodefault};
public:
	/* TWinControl.CreateParented */ inline __fastcall TBaseFrame(HWND ParentWindow) : Vcl::Forms::TFrame(ParentWindow) { }
	
private:
	void *__IEditHandler;	// Designintf::IEditHandler 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {7ED7BF2D-E349-11D3-AB4A-00C04FB17A72}
	operator Designintf::_di_IEditHandler()
	{
		Designintf::_di_IEditHandler intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Designintf::IEditHandler*(void) { return (Designintf::IEditHandler*)&__IEditHandler; }
	#endif
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Baseideframe */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_BASEIDEFRAME)
using namespace Baseideframe;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// BaseideframeHPP
