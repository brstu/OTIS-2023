// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSRESTExpertsCreators.pas' rev: 35.00 (Windows)

#ifndef DsrestexpertscreatorsHPP
#define DsrestexpertscreatorsHPP

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
#include <DSServerWebBrokerExpertsCreators.hpp>
#include <ExpertsTemplates.hpp>
#include <ExpertsProject.hpp>
#include <ExpertsModules.hpp>
#include <InetExpertsCreators.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dsrestexpertscreators
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TDSRESTExpertsCreatorsModule;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TDSRESTExpertsCreatorsModule : public Dsserverwebbrokerexpertscreators::TDSServerWebBrokerExpertsCreatorsModule
{
	typedef Dsserverwebbrokerexpertscreators::TDSServerWebBrokerExpertsCreatorsModule inherited;
	
private:
	void __fastcall AddScriptFiles(const System::UnicodeString APersonality, bool IncludeOptional);
	
protected:
	virtual void __fastcall CreateModules(const System::UnicodeString APersonality);
	virtual void __fastcall UpdateProperties();
public:
	/* TInetExpertsCreatorsModule.Create */ inline __fastcall virtual TDSRESTExpertsCreatorsModule(System::Classes::TComponent* AOwner) : Dsserverwebbrokerexpertscreators::TDSServerWebBrokerExpertsCreatorsModule(AOwner) { }
	
public:
	/* TDataModule.CreateNew */ inline __fastcall virtual TDSRESTExpertsCreatorsModule(System::Classes::TComponent* AOwner, int Dummy) : Dsserverwebbrokerexpertscreators::TDSServerWebBrokerExpertsCreatorsModule(AOwner, Dummy) { }
	/* TDataModule.Destroy */ inline __fastcall virtual ~TDSRESTExpertsCreatorsModule() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Dsrestexpertscreators */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DSRESTEXPERTSCREATORS)
using namespace Dsrestexpertscreators;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsrestexpertscreatorsHPP
