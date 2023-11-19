// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DesignWindows.pas' rev: 35.00 (Windows)

#ifndef DesignwindowsHPP
#define DesignwindowsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Messages.hpp>
#include <System.Win.Registry.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <DesignIntf.hpp>
#include <ComponentDesigner.hpp>

//-- user supplied -----------------------------------------------------------

namespace Designwindows
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TDesignWindow;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TDesignWindow : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
private:
	Designintf::_di_IDesignerSelections FSelection;
	System::Classes::TComponent* FOwner;
	Designintf::_di_IDesigner FDesigner;
	Componentdesigner::_di_IComponentDesigner FComponentDesigner;
	bool FActive;
	void __fastcall ComponentRead(System::Classes::TComponent* Component);
	void __fastcall ReaderSetName(System::Classes::TReader* Reader, System::Classes::TComponent* Component, System::UnicodeString &Name);
	HIDESBASE MESSAGE void __fastcall WMActivate(Winapi::Messages::TWMActivate &Msg);
	HIDESBASE void __fastcall SetDesigner(const Designintf::_di_IDesigner Value);
	
protected:
	DYNAMIC void __fastcall Activated();
	void __fastcall ActivateInspector(System::WideChar Ch);
	bool __fastcall ClipboardComponents();
	void __fastcall CopyComponents(System::Classes::TComponent* Root, const Designintf::_di_IDesignerSelections Components);
	void __fastcall PasteComponents(System::Classes::TComponent* AOwner, System::Classes::TComponent* AParent, const Designintf::_di_IDesignerSelections Components);
	void __fastcall SetSelection(const Designintf::_di_IDesignerSelections Components);
	virtual System::UnicodeString __fastcall UniqueName(System::Classes::TComponent* Component);
	
public:
	__fastcall virtual TDesignWindow(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TDesignWindow();
	virtual Designintf::TEditState __fastcall GetEditState();
	virtual bool __fastcall EditAction(Designintf::TEditAction Action);
	virtual void __fastcall ItemDeleted(const Designintf::_di_IDesigner ADesigner, System::Classes::TPersistent* Item);
	virtual void __fastcall ItemInserted(const Designintf::_di_IDesigner ADesigner, System::Classes::TPersistent* Item);
	virtual void __fastcall SelectionChanged(const Designintf::_di_IDesigner ADesigner, const Designintf::_di_IDesignerSelections ASelection);
	virtual void __fastcall DesignerOpened(const Designintf::_di_IDesigner Designer, bool AResurrecting);
	virtual void __fastcall DesignerClosed(const Designintf::_di_IDesigner Designer, bool AGoingDormant);
	virtual void __fastcall ItemsModified(const Designintf::_di_IDesigner Designer);
	virtual void __fastcall WindowHide();
	virtual void __fastcall WindowShow();
	__property bool Active = {read=FActive, nodefault};
	__property Designintf::_di_IDesigner Designer = {read=FDesigner, write=SetDesigner};
	__property Componentdesigner::_di_IComponentDesigner ComponentDesigner = {read=FComponentDesigner};
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TDesignWindow(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TForm(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TDesignWindow(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
private:
	void *__IActivatable;	// Designintf::IActivatable 
	void *__IEditHandler;	// Designintf::IEditHandler 
	void *__IDesignWindow;	// Designintf::IDesignWindow 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {F00AA4BD-3459-43E9-ACB2-97DBD1663AFF}
	operator Designintf::_di_IActivatable()
	{
		Designintf::_di_IActivatable intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Designintf::IActivatable*(void) { return (Designintf::IActivatable*)&__IActivatable; }
	#endif
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
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {E8C9F739-5601-4ADD-9D95-594132D4CEFD}
	operator Designintf::_di_IDesignNotification()
	{
		Designintf::_di_IDesignNotification intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Designintf::IDesignNotification*(void) { return (Designintf::IDesignNotification*)&__IDesignWindow; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {7ED7BF2E-E349-11D3-AB4A-00C04FB17A72}
	operator Designintf::_di_IDesignWindow()
	{
		Designintf::_di_IDesignWindow intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Designintf::IDesignWindow*(void) { return (Designintf::IDesignWindow*)&__IDesignWindow; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00000000-0000-0000-C000-000000000046}
	operator System::_di_IInterface()
	{
		System::_di_IInterface intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator System::IInterface*(void) { return (System::IInterface*)&__IActivatable; }
	#endif
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE void __fastcall LoadFormPos(System::Win::Registry::TRegIniFile* const Reg, const System::UnicodeString SectionName, Vcl::Forms::TCustomForm* const Form);
extern DELPHI_PACKAGE void __fastcall SaveFormPos(System::Win::Registry::TRegIniFile* const Reg, const System::UnicodeString SectionName, Vcl::Forms::TCustomForm* const Form);
}	/* namespace Designwindows */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DESIGNWINDOWS)
using namespace Designwindows;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DesignwindowsHPP
