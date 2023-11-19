// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSPortsWizardPage.pas' rev: 35.00 (Windows)

#ifndef DsportswizardpageHPP
#define DsportswizardpageHPP

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
#include <DSPortFrame.hpp>
#include <System.Generics.Collections.hpp>
#include <Vcl.AppEvnts.hpp>
#include <ExpertsUIWizard.hpp>
#include <System.Generics.Defaults.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dsportswizardpage
{
//-- forward type declarations -----------------------------------------------
struct TDSPortDescription;
class DELPHICLASS TDSPortsWizardFrame;
__interface DELPHIINTERFACE IDSPortsWizardPage;
typedef System::DelphiInterface<IDSPortsWizardPage> _di_IDSPortsWizardPage;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TDSAvailablePort : unsigned char { portNone, portHTTP, portHTTPS, portTCPIP };

typedef System::Set<TDSAvailablePort, TDSAvailablePort::portNone, TDSAvailablePort::portTCPIP> TDSAvailablePorts;

struct DECLSPEC_DRECORD TDSPortDescription
{
public:
	TDSAvailablePort Port;
	System::UnicodeString PortLabel;
	int DefaultValue;
};


typedef System::DynamicArray<TDSPortDescription> TDSPortDescriptions;

class PASCALIMPLEMENTATION TDSPortsWizardFrame : public Vcl::Forms::TFrame
{
	typedef Vcl::Forms::TFrame inherited;
	
__published:
	Vcl::Appevnts::TApplicationEvents* ApplicationEvents1;
	void __fastcall ApplicationEvents1Idle(System::TObject* Sender, bool &Done);
	
private:
	TDSAvailablePort FFocusedPort;
	System::Generics::Collections::TDictionary__2<TDSAvailablePort,Dsportframe::TDSPortFram*>* FPortFrames;
	System::Generics::Collections::TDictionary__2<TDSAvailablePort,TDSPortDescription>* FPortDescriptionsDictionary;
	System::Classes::TNotifyEvent FOnFocusedPortChange;
	int FLeftMargin;
	Expertsuiwizard::TCustomExpertsFrameWizardPage* FPage;
	int __fastcall GetPort(TDSAvailablePort I);
	void __fastcall SetPortDescriptions(const TDSPortDescriptions Value);
	void __fastcall ShowPortPages();
	void __fastcall SetPort(TDSAvailablePort I, const int Value);
	void __fastcall SetFocusedPort(const TDSAvailablePort Value);
	void __fastcall SetLeftMargin(const int Value);
	
protected:
	bool __fastcall ExpertsFrameValidatePage(Expertsuiwizard::TCustomExpertsWizardPage* ASender, bool &AHandled);
	void __fastcall ExpertsFrameUpdateInfo(Expertsuiwizard::TCustomExpertsWizardPage* ASender, bool &AHandled);
	void __fastcall ExpertsFrameCreated(Expertsuiwizard::TCustomExpertsFrameWizardPage* APage);
	void __fastcall ExpertsFrameEnterPage(Expertsuiwizard::TCustomExpertsFrameWizardPage* APage);
	System::UnicodeString __fastcall GetWizardInfo();
	bool __fastcall ValidateFields();
	__property int LeftMargin = {read=FLeftMargin, write=SetLeftMargin, nodefault};
	
public:
	__property TDSPortDescriptions PortDescriptions = {write=SetPortDescriptions};
	__fastcall virtual TDSPortsWizardFrame(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TDSPortsWizardFrame();
	__property int Ports[TDSAvailablePort I] = {read=GetPort, write=SetPort};
	__property TDSAvailablePort FocusedPort = {read=FFocusedPort, write=SetFocusedPort, nodefault};
	__property System::Classes::TNotifyEvent OnFocusedPortChange = {read=FOnFocusedPortChange, write=FOnFocusedPortChange};
public:
	/* TWinControl.CreateParented */ inline __fastcall TDSPortsWizardFrame(HWND ParentWindow) : Vcl::Forms::TFrame(ParentWindow) { }
	
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


__interface  INTERFACE_UUID("{2149E34E-3931-4EBF-9A09-B7E7D59D0E96}") IDSPortsWizardPage  : public Wizardapi::IWizardPage 
{
	virtual TDSPortsWizardFrame* __fastcall GetFrame() = 0 ;
	virtual void __fastcall SetPortDescriptions(const TDSPortDescriptions Value) = 0 ;
	__property TDSPortsWizardFrame* Frame = {read=GetFrame};
	__property TDSPortDescriptions PortDescriptions = {write=SetPortDescriptions};
};

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Dsportswizardpage */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DSPORTSWIZARDPAGE)
using namespace Dsportswizardpage;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsportswizardpageHPP
