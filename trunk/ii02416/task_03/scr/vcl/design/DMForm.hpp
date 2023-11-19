// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DMForm.pas' rev: 35.00 (Windows)

#ifndef DmformHPP
#define DmformHPP

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
#include <Vcl.ComCtrls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <DesignIntf.hpp>
#include <DesignEditors.hpp>
#include <ComponentDesigner.hpp>
#include <VCLEditors.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dmform
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TDataModuleForm;
class DELPHICLASS TDataModuleCustomModule;
class DELPHICLASS TDataModuleSelectionEditor;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TDataModuleForm : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
__published:
	void __fastcall FormResize(System::TObject* Sender);
	void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall FormDestroy(System::TObject* Sender);
	
private:
	Vcl::Forms::TScrollBox* ComponentContainer;
	System::Classes::TComponent* FDataModule;
	Designintf::_di_IDesigner FDesigner;
	void __fastcall UpdateDesigner();
	HIDESBASE MESSAGE void __fastcall WMMove(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMDpiChanged(Winapi::Messages::TWMDpi &Message);
	Vcl::Forms::TScrollBox* __fastcall GetContainer();
	int __fastcall GetRoot();
	void __fastcall FocusContainer();
	void __fastcall IDEThemeChanged(System::TObject* Sender);
	void __fastcall UpdateControlSettings();
	
protected:
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	
public:
	__fastcall TDataModuleForm(System::Classes::TComponent* const ADataModule, const Designintf::_di_IDesigner ADesigner);
	__fastcall virtual ~TDataModuleForm();
	void __fastcall ItemDeleted(const Designintf::_di_IDesigner ADesigner, System::Classes::TPersistent* AItem);
	void __fastcall ItemInserted(const Designintf::_di_IDesigner ADesigner, System::Classes::TPersistent* AItem);
	void __fastcall ItemsModified(const Designintf::_di_IDesigner ADesigner);
	void __fastcall SelectionChanged(const Designintf::_di_IDesigner ADesigner, const Designintf::_di_IDesignerSelections ASelection);
	void __fastcall DesignerOpened(const Designintf::_di_IDesigner Designer, bool AResurrecting);
	void __fastcall DesignerClosed(const Designintf::_di_IDesigner Designer, bool AGoingDormant);
	__property Vcl::Forms::TScrollBox* Container = {read=GetContainer};
	__property System::Classes::TComponent* DataModule = {read=FDataModule};
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	virtual void __fastcall ScaleForPPI(int NewPPI);
	
__automated:
	__property int Root = {read=GetRoot};
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TDataModuleForm(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TForm(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TDataModuleForm(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
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
class PASCALIMPLEMENTATION TDataModuleCustomModule : public Designeditors::TCustomModule
{
	typedef Designeditors::TCustomModule inherited;
	
protected:
	virtual System::Classes::TPersistentClass __fastcall GetFinderClass();
	
public:
	virtual bool __fastcall ValidateComponentClass(System::Classes::TComponentClass ComponentClass);
	__classmethod virtual System::Classes::TComponentClass __fastcall DesignClass();
	
protected:
	void __fastcall CreateDesignerForm(const Designintf::_di_IDesigner Designer, System::Classes::TComponent* Root, /* out */ Vcl::Forms::TCustomForm* &DesignForm, /* out */ Vcl::Controls::TWinControl* &ComponentContainer)/* overload */;
	void __fastcall CreateDesignerForm(const Designintf::_di_IDesigner Designer, System::Classes::TComponent* Root, /* out */ Designintf::_di_IHostForm &DesignForm, /* out */ Vcl::Controls::TWinControl* &ComponentContainer)/* overload */;
public:
	/* TCustomModule.Create */ inline __fastcall virtual TDataModuleCustomModule(System::Classes::TComponent* ARoot, const Designintf::_di_IDesigner ADesigner) : Designeditors::TCustomModule(ARoot, ADesigner) { }
	/* TCustomModule.Destroy */ inline __fastcall virtual ~TDataModuleCustomModule() { }
	
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

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDataModuleSelectionEditor : public Designeditors::TSelectionEditor
{
	typedef Designeditors::TSelectionEditor inherited;
	
protected:
	void __fastcall FilterProperties(const Designintf::_di_IDesignerSelections ASelection, const System::Classes::_di_IInterfaceList ASelectionProperties);
public:
	/* TSelectionEditor.Create */ inline __fastcall virtual TDataModuleSelectionEditor(const Designintf::_di_IDesigner ADesigner) : Designeditors::TSelectionEditor(ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDataModuleSelectionEditor() { }
	
private:
	void *__ISelectionPropertyFilter;	// Designintf::ISelectionPropertyFilter 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {0B424EF6-2F2F-41AB-A082-831292FA91A5}
	operator Designintf::_di_ISelectionPropertyFilter()
	{
		Designintf::_di_ISelectionPropertyFilter intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Designintf::ISelectionPropertyFilter*(void) { return (Designintf::ISelectionPropertyFilter*)&__ISelectionPropertyFilter; }
	#endif
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE void __fastcall (*CreateDesignerFormProc)(Designeditors::TCustomModule* CustomModule, const Designintf::_di_IDesigner Designer, System::Classes::TComponent* Root, /* out */ Designintf::_di_IHostForm &DesignForm, /* out */ Vcl::Controls::TWinControl* &ComponentContainer);
extern DELPHI_PACKAGE System::ResourceString _sControlInDataModule;
#define Dmform_sControlInDataModule System::LoadResourceString(&Dmform::_sControlInDataModule)
}	/* namespace Dmform */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DMFORM)
using namespace Dmform;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DmformHPP
