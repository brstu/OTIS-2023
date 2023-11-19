// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSProjectLocationWizardPage.pas' rev: 35.00 (Windows)

#ifndef DsprojectlocationwizardpageHPP
#define DsprojectlocationwizardpageHPP

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
#include <Vcl.ActnList.hpp>
#include <Vcl.StdActns.hpp>
#include <Vcl.StdCtrls.hpp>
#include <ExpertsUIWizard.hpp>
#include <System.Actions.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dsprojectlocationwizardpage
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TDSProjectLocationWizardFrame;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TDSProjectLocationWizardFrame : public Vcl::Forms::TFrame
{
	typedef Vcl::Forms::TFrame inherited;
	
__published:
	Vcl::Stdctrls::TLabel* Label1;
	Vcl::Stdctrls::TEdit* LocationEdit;
	Vcl::Stdctrls::TButton* BrowseBtn;
	Vcl::Actnlist::TActionList* ActionList1;
	Vcl::Stdactns::TBrowseForFolder* BrowseForFolder1;
	void __fastcall BrowseForFolder1Accept(System::TObject* Sender);
	void __fastcall BrowseForFolder1BeforeExecute(System::TObject* Sender);
	
private:
	Expertsuiwizard::TCustomExpertsFrameWizardPage* FPage;
	void __fastcall LocationEditChange(System::TObject* Sender);
	System::UnicodeString __fastcall LocationEditText();
	int __fastcall GetLeftMargin();
	void __fastcall SetLeftMargin(const int Value);
	bool __fastcall ValidateFields();
	System::UnicodeString __fastcall GetProjectLocation();
	
protected:
	bool __fastcall ExpertsFrameValidatePage(Expertsuiwizard::TCustomExpertsWizardPage* ASender, bool &AHandled);
	void __fastcall ExpertsFrameUpdateInfo(Expertsuiwizard::TCustomExpertsWizardPage* ASender, bool &AHandled);
	void __fastcall ExpertsFrameCreated(Expertsuiwizard::TCustomExpertsFrameWizardPage* APage);
	void __fastcall ExpertsFrameEnterPage(Expertsuiwizard::TCustomExpertsFrameWizardPage* APage);
	__property int LeftMargin = {read=GetLeftMargin, write=SetLeftMargin, nodefault};
	
public:
	__property System::UnicodeString ProjectLocation = {read=GetProjectLocation};
public:
	/* TCustomFrame.Create */ inline __fastcall virtual TDSProjectLocationWizardFrame(System::Classes::TComponent* AOwner) : Vcl::Forms::TFrame(AOwner) { }
	
public:
	/* TScrollingWinControl.Destroy */ inline __fastcall virtual ~TDSProjectLocationWizardFrame() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TDSProjectLocationWizardFrame(HWND ParentWindow) : Vcl::Forms::TFrame(ParentWindow) { }
	
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
}	/* namespace Dsprojectlocationwizardpage */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DSPROJECTLOCATIONWIZARDPAGE)
using namespace Dsprojectlocationwizardpage;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsprojectlocationwizardpageHPP
