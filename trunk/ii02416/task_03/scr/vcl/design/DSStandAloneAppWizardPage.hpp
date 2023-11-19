// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSStandAloneAppWizardPage.pas' rev: 35.00 (Windows)

#ifndef DsstandaloneappwizardpageHPP
#define DsstandaloneappwizardpageHPP

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
#include <WizardAPI.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.AppEvnts.hpp>
#include <InetWiz.hpp>
#include <DSServerFeatures.hpp>
#include <ExpertsUIWizard.hpp>
#include <FrameExtendedNextUnit.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dsstandaloneappwizardpage
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TDSStandAloneAppWizardFrame;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TDSStandAloneAppWizardFrame : public Frameextendednextunit::TFrameExtendedNext
{
	typedef Frameextendednextunit::TFrameExtendedNext inherited;
	
__published:
	Vcl::Stdctrls::TRadioButton* rbFormsApp;
	Vcl::Stdctrls::TRadioButton* rbConsoleApp;
	Vcl::Stdctrls::TRadioButton* rbServiceApp;
	void __fastcall OnRadioClick(System::TObject* Sender);
	
private:
	Expertsuiwizard::TCustomExpertsFrameWizardPage* FPage;
	System::UnicodeString __fastcall GetWizardInfo();
	Dsserverfeatures::TDSServerProjectType __fastcall GetProjectType();
	void __fastcall SetProjectType(Dsserverfeatures::TDSServerProjectType AProjectType);
	int __fastcall GetLeftMargin();
	void __fastcall SetLeftMargin(const int Value);
	__property int LeftMargin = {read=GetLeftMargin, write=SetLeftMargin, nodefault};
	
protected:
	bool __fastcall ExpertsFrameValidatePage(Expertsuiwizard::TCustomExpertsWizardPage* ASender, bool &AHandled);
	void __fastcall ExpertsFrameUpdateInfo(Expertsuiwizard::TCustomExpertsWizardPage* ASender, bool &AHandled);
	void __fastcall ExpertsFrameCreated(Expertsuiwizard::TCustomExpertsFrameWizardPage* APage);
	void __fastcall ExpertsFrameEnterPage(Expertsuiwizard::TCustomExpertsFrameWizardPage* APage);
	
public:
	__classmethod Dsserverfeatures::TDSServerProjectType __fastcall GetDefaultApplicationType();
	__property Dsserverfeatures::TDSServerProjectType ProjectType = {read=GetProjectType, write=SetProjectType, nodefault};
public:
	/* TFrameExtendedNext.Destroy */ inline __fastcall virtual ~TDSStandAloneAppWizardFrame() { }
	
public:
	/* TCustomFrame.Create */ inline __fastcall virtual TDSStandAloneAppWizardFrame(System::Classes::TComponent* AOwner) : Frameextendednextunit::TFrameExtendedNext(AOwner) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TDSStandAloneAppWizardFrame(HWND ParentWindow) : Frameextendednextunit::TFrameExtendedNext(ParentWindow) { }
	
private:
	void *__IExpertsWizardPageFrame;	// Expertsuiwizard::IExpertsWizardPageFrame 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {4D51725C-97D6-43BF-A820-7C02B778B677}
	operator Expertsuiwizard::_di_IExpertsWizardPageFrame()
	{
		Expertsuiwizard::_di_IExpertsWizardPageFrame intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Expertsuiwizard::IExpertsWizardPageFrame*(void) { return (Expertsuiwizard::IExpertsWizardPageFrame*)&__IExpertsWizardPageFrame; }
	#endif
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Dsstandaloneappwizardpage */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DSSTANDALONEAPPWIZARDPAGE)
using namespace Dsstandaloneappwizardpage;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsstandaloneappwizardpageHPP
