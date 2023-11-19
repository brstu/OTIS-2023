// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSRESTExpertsUI.pas' rev: 35.00 (Windows)

#ifndef DsrestexpertsuiHPP
#define DsrestexpertsuiHPP

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
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Dialogs.hpp>
#include <DSServerWebBrokerExpertsUI.hpp>
#include <ExpertsUIWizard.hpp>
#include <DSProjectLocationWizardPage.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dsrestexpertsui
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TDSRESTExpertsUIModule;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TDSRESTExpertsUIModule : public Dsserverwebbrokerexpertsui::TDSServerWebBrokerExpertsUIModule
{
	typedef Dsserverwebbrokerexpertsui::TDSServerWebBrokerExpertsUIModule inherited;
	
__published:
	HIDESBASE void __fastcall DataModuleCreate(System::TObject* Sender);
	HIDESBASE void __fastcall WebServerProjectWizardLoadImage(Expertsuiwizard::TCustomExpertsWizard* Sender, Vcl::Graphics::TBitmap* &AImage);
	
protected:
	virtual void __fastcall SetDefaults();
	
public:
	HIDESBASE System::UnicodeString __fastcall GetFrameWorkType();
public:
	/* TDataModule.Create */ inline __fastcall virtual TDSRESTExpertsUIModule(System::Classes::TComponent* AOwner) : Dsserverwebbrokerexpertsui::TDSServerWebBrokerExpertsUIModule(AOwner) { }
	/* TDataModule.CreateNew */ inline __fastcall virtual TDSRESTExpertsUIModule(System::Classes::TComponent* AOwner, int Dummy) : Dsserverwebbrokerexpertsui::TDSServerWebBrokerExpertsUIModule(AOwner, Dummy) { }
	/* TDataModule.Destroy */ inline __fastcall virtual ~TDSRESTExpertsUIModule() { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE TDSRESTExpertsUIModule* DSRESTExpertsUIModule;
}	/* namespace Dsrestexpertsui */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DSRESTEXPERTSUI)
using namespace Dsrestexpertsui;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsrestexpertsuiHPP
