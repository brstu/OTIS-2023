// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'WCtlForm.pas' rev: 35.00 (Windows)

#ifndef WctlformHPP
#define WctlformHPP

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
#include <System.Classes.hpp>
#include <System.Types.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <DesignIntf.hpp>
#include <DesignEditors.hpp>
#include <VCLEditors.hpp>
#include <ComponentDesigner.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Wctlform
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TWinControlForm;
class DELPHICLASS TWinControlCustomModule;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TWinControlForm : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
__published:
	Vcl::Extctrls::TShape* WidthHandle;
	Vcl::Extctrls::TShape* SizeHandle;
	Vcl::Extctrls::TShape* HeightHandle;
	void __fastcall FormResize(System::TObject* Sender);
	void __fastcall SizerMouseDown(System::TObject* Sender, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall SizerMouseMove(System::TObject* Sender, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall SizerMouseUp(System::TObject* Sender, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	
private:
	Vcl::Controls::TWinControl* FControl;
	bool Sizing;
	System::StaticArray<Vcl::Extctrls::TShape*, 3> Sizers;
	int DragTag;
	System::Types::TPoint StartPoint;
	System::Types::TPoint StartSize;
	Designintf::_di_IDesigner FDesigner;
	void __fastcall UpdateSizers();
	void __fastcall DragStart(int Tag, int X, int Y);
	void __fastcall DragMove(int X, int Y);
	void __fastcall DragEnd();
	void __fastcall FocusContainer();
	
protected:
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall AlignControls(Vcl::Controls::TControl* AControl, System::Types::TRect &Rect);
	
public:
	__fastcall TWinControlForm(const Designintf::_di_IDesigner ADesigner, bool ASizing);
	__fastcall virtual ~TWinControlForm();
	virtual void __fastcall AfterConstruction();
	void __fastcall Initialize(Vcl::Controls::TWinControl* AControl, bool ASizing);
	void __fastcall Modified();
	void __fastcall ItemDeleted(const Designintf::_di_IDesigner ADesigner, System::Classes::TPersistent* AItem);
	void __fastcall ItemInserted(const Designintf::_di_IDesigner ADesigner, System::Classes::TPersistent* AItem);
	void __fastcall ItemsModified(const Designintf::_di_IDesigner Designer);
	void __fastcall SelectionChanged(const Designintf::_di_IDesigner ADesigner, const Designintf::_di_IDesignerSelections ASelection);
	void __fastcall DesignerOpened(const Designintf::_di_IDesigner Designer, bool AResurrecting);
	void __fastcall DesignerClosed(const Designintf::_di_IDesigner Designer, bool AGoingDormant);
	__property Vcl::Controls::TWinControl* Control = {read=FControl};
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TWinControlForm(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TForm(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TWinControlForm(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
private:
	void *__IInternalComponentContainerParent;	// Componentdesigner::IInternalComponentContainerParent 
	void *__IDesignNotification;	// Designintf::IDesignNotification 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {58315D64-EC35-4F06-9D0C-F2FB74D26AB6}
	operator Componentdesigner::_di_IInternalComponentContainerParent()
	{
		Componentdesigner::_di_IInternalComponentContainerParent intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Componentdesigner::IInternalComponentContainerParent*(void) { return (Componentdesigner::IInternalComponentContainerParent*)&__IInternalComponentContainerParent; }
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
	operator Designintf::IDesignNotification*(void) { return (Designintf::IDesignNotification*)&__IDesignNotification; }
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
	operator System::IInterface*(void) { return (System::IInterface*)&__IInternalComponentContainerParent; }
	#endif
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TWinControlCustomModule : public Designeditors::TCustomModule
{
	typedef Designeditors::TCustomModule inherited;
	
protected:
	void __fastcall CreateDesignerForm(const Designintf::_di_IDesigner Designer, System::Classes::TComponent* Root, /* out */ Vcl::Forms::TCustomForm* &DesignForm, /* out */ Vcl::Controls::TWinControl* &ComponentContainer)/* overload */;
	void __fastcall CreateDesignerForm(const Designintf::_di_IDesigner Designer, System::Classes::TComponent* Root, /* out */ Designintf::_di_IHostForm &DesignForm, /* out */ Vcl::Controls::TWinControl* &ComponentContainer)/* overload */;
public:
	/* TCustomModule.Create */ inline __fastcall virtual TWinControlCustomModule(System::Classes::TComponent* ARoot, const Designintf::_di_IDesigner ADesigner) : Designeditors::TCustomModule(ARoot, ADesigner) { }
	/* TCustomModule.Destroy */ inline __fastcall virtual ~TWinControlCustomModule() { }
	
private:
	void *__ICustomDesignForm80;	// Vcleditors::ICustomDesignForm80 
	void *__ICustomDesignForm;	// Vcleditors::ICustomDesignForm 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {525A1DF8-5EF3-4B98-8EE3-4567910A7EA1}
	operator Vcleditors::_di_ICustomDesignForm80()
	{
		Vcleditors::_di_ICustomDesignForm80 intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Vcleditors::ICustomDesignForm80*(void) { return (Vcleditors::ICustomDesignForm80*)&__ICustomDesignForm80; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {787195AF-C234-49DC-881B-221B69C0137A}
	operator Vcleditors::_di_ICustomDesignForm()
	{
		Vcleditors::_di_ICustomDesignForm intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Vcleditors::ICustomDesignForm*(void) { return (Vcleditors::ICustomDesignForm*)&__ICustomDesignForm; }
	#endif
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE void __fastcall (*CreateDesignerFormProc)(Designeditors::TCustomModule* CustomModule, const Designintf::_di_IDesigner Designer, System::Classes::TComponent* Root, /* out */ Designintf::_di_IHostForm &DesignForm, /* out */ Vcl::Controls::TWinControl* &ComponentContainer);
}	/* namespace Wctlform */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WCTLFORM)
using namespace Wctlform;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WctlformHPP
