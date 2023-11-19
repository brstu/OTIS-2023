// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'EmbeddedDesignerForm.pas' rev: 35.00 (Windows)

#ifndef EmbeddeddesignerformHPP
#define EmbeddeddesignerformHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.SysUtils.hpp>
#include <System.Types.hpp>
#include <System.Classes.hpp>
#include <ToolsAPI.hpp>
#include <DesignIntf.hpp>
#include <EditorViewSupport.hpp>
#include <System.Contnrs.hpp>
#include <Vcl.Forms.hpp>
#include <EmbeddedFormDesigner.hpp>
#include <StructureViewAPI.hpp>
#include <Vcl.Controls.hpp>
#include <PlatformAPI.hpp>
#include <ComponentDesigner.hpp>
#include <Events.hpp>

//-- user supplied -----------------------------------------------------------

namespace Embeddeddesignerform
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IGetEditorFormDesignerWrapper;
typedef System::DelphiInterface<IGetEditorFormDesignerWrapper> _di_IGetEditorFormDesignerWrapper;
__interface DELPHIINTERFACE IInternalNotifyClosing;
typedef System::DelphiInterface<IInternalNotifyClosing> _di_IInternalNotifyClosing;
__interface DELPHIINTERFACE IViewDesignSupport;
typedef System::DelphiInterface<IViewDesignSupport> _di_IViewDesignSupport;
class DELPHICLASS TFormEditorView;
class DELPHICLASS TEditorFormDesignerWrapper;
//-- type declarations -------------------------------------------------------
__interface  INTERFACE_UUID("{D88BD34B-6353-4E1B-B861-47705189ABAF}") IGetEditorFormDesignerWrapper  : public System::IInterface 
{
	virtual TEditorFormDesignerWrapper* __fastcall GetFormWrapper() = 0 ;
	__property TEditorFormDesignerWrapper* FormWrapper = {read=GetFormWrapper};
};

__interface  INTERFACE_UUID("{755F1000-A4E3-4912-B394-51F85DE81537}") IInternalNotifyClosing  : public System::IInterface 
{
	virtual void __fastcall SetClosing(bool AClosing) = 0 ;
};

__interface  INTERFACE_UUID("{10F24488-757E-42CC-A495-4FB267A3D45D}") IViewDesignSupport  : public System::IInterface 
{
	virtual Platformapi::TOTADeviceOrientation __fastcall GetOrientation() = 0 ;
	virtual System::UnicodeString __fastcall GetDeviceName() = 0 ;
	virtual bool __fastcall GetIsView() = 0 ;
	virtual Platformapi::TOTAOSFamily __fastcall GetOSFamily() = 0 ;
	virtual bool __fastcall GetHasFixedSize() = 0 ;
	virtual System::TObject* __fastcall GetViewBackground() = 0 ;
	virtual System::TObject* __fastcall GetViewMask() = 0 ;
	virtual void __fastcall Rotate() = 0 ;
	virtual void __fastcall ToggleBackground() = 0 ;
	virtual void __fastcall SetMasterStyle(Platformapi::TOTAOSFamily APlatform) = 0 ;
	virtual Platformapi::TOTAOSFamily __fastcall GetMasterStyle() = 0 ;
	__property Platformapi::TOTADeviceOrientation Orientation = {read=GetOrientation};
	__property Platformapi::TOTAOSFamily OSFamily = {read=GetOSFamily};
	__property System::UnicodeString DeviceName = {read=GetDeviceName};
	__property bool IsView = {read=GetIsView};
	__property Platformapi::TOTAOSFamily MasterStyle = {read=GetMasterStyle, write=SetMasterStyle};
	__property bool HasFixedSize = {read=GetHasFixedSize};
	__property System::TObject* ViewBackground = {read=GetViewBackground};
	__property System::TObject* ViewMask = {read=GetViewMask};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TFormEditorView : public Editorviewsupport::TCustomEditorView
{
	typedef Editorviewsupport::TCustomEditorView inherited;
	
	
private:
	class DELPHICLASS TContextCacheItem;
	#pragma pack(push,8)
	class PASCALIMPLEMENTATION TContextCacheItem : public System::Classes::TComponent
	{
		typedef System::Classes::TComponent inherited;
		
	private:
		System::TObject* FViewObject;
		System::_di_IInterface FCachedContext;
		int FNotifierIndex;
		void __fastcall SetViewObject(System::TObject* AViewObject);
		
	protected:
		virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
		
	public:
		__property System::TObject* ViewObject = {read=FViewObject, write=SetViewObject};
		__property System::_di_IInterface CachedContext = {read=FCachedContext, write=FCachedContext};
		__property int NotifierIndex = {read=FNotifierIndex, write=FNotifierIndex, nodefault};
	public:
		/* TComponent.Create */ inline __fastcall virtual TContextCacheItem(System::Classes::TComponent* AOwner) : System::Classes::TComponent(AOwner) { }
		/* TComponent.Destroy */ inline __fastcall virtual ~TContextCacheItem() { }
		
	};
	
	#pragma pack(pop)
	
	class DELPHICLASS TModuleNotifier;
	class PASCALIMPLEMENTATION TModuleNotifier : public Toolsapi::TNotifierObject
	{
		typedef Toolsapi::TNotifierObject inherited;
		
	private:
		TFormEditorView::TContextCacheItem* FCachedContext;
		
	protected:
		HIDESBASE void __fastcall Destroyed();
		bool __fastcall CheckOverwrite();
		void __fastcall ModuleRenamed(const System::UnicodeString NewName);
		__fastcall TModuleNotifier(TFormEditorView::TContextCacheItem* ACachedContext);
	public:
		/* TObject.Destroy */ inline __fastcall virtual ~TModuleNotifier() { }
		
private:
		void *__IOTAModuleNotifier;	// Toolsapi::IOTAModuleNotifier 
		
public:
		#if defined(MANAGED_INTERFACE_OPERATORS)
		// {F17A7BCE-E07D-11D1-AB0B-00C04FB16FB3}
		operator Toolsapi::_di_IOTAModuleNotifier()
		{
			Toolsapi::_di_IOTAModuleNotifier intf;
			this->GetInterface(intf);
			return intf;
		}
		#else
		operator Toolsapi::IOTAModuleNotifier*(void) { return (Toolsapi::IOTAModuleNotifier*)&__IOTAModuleNotifier; }
		#endif
		#if defined(MANAGED_INTERFACE_OPERATORS)
		// {F17A7BCF-E07D-11D1-AB0B-00C04FB16FB3}
		operator Toolsapi::_di_IOTANotifier()
		{
			Toolsapi::_di_IOTANotifier intf;
			this->GetInterface(intf);
			return intf;
		}
		#else
		operator Toolsapi::IOTANotifier*(void) { return (Toolsapi::IOTANotifier*)&__IOTAModuleNotifier; }
		#endif
		
	};
	
	
	
private:
	System::Contnrs::TComponentList* FCachedContexts;
	bool FClosingNotifier;
	TEditorFormDesignerWrapper* __fastcall GetContainerForm(const System::_di_IInterface AContext, System::TObject* AViewObject);
	TContextCacheItem* __fastcall GetContextCacheItem(System::TObject* AViewObject);
	void __fastcall SetCachedContext(const System::_di_IInterface AContext, System::TObject* AViewObject);
	System::_di_IInterface __fastcall GetCachedContext(System::TObject* AViewObject);
	
protected:
	HIDESBASE bool __fastcall Handles(const System::_di_IInterface AContext);
	HIDESBASE bool __fastcall GetCanCloneView();
	HIDESBASE System::UnicodeString __fastcall GetCaption();
	HIDESBASE int __fastcall GetPriority();
	System::UnicodeString __fastcall GetViewIdentifier();
	HIDESBASE void __fastcall Display(const System::_di_IInterface AContext, System::TObject* AViewObject);
	HIDESBASE Designintf::TEditState __fastcall GetEditState(const System::_di_IInterface AContext, System::TObject* AViewObject);
	HIDESBASE bool __fastcall EditAction(const System::_di_IInterface AContext, Designintf::TEditAction Action, System::TObject* AViewObject);
	virtual Vcl::Forms::TCustomFrameClass __fastcall GetFrameClass();
	void __fastcall SetViewContext(const System::_di_IInterface AContext, System::TObject* const AViewObject, System::TObject* const AViewContext);
	Structureviewapi::_di_IOTAStructureContext __fastcall GetStructureContext(const System::_di_IInterface AContext, System::TObject* AViewObject);
	System::WideString __fastcall GetStructureType(const System::_di_IInterface AContext, System::TObject* AViewObject);
	void __fastcall SetClosing(bool AClosing);
	
public:
	__fastcall TFormEditorView();
	__fastcall virtual ~TFormEditorView();
private:
	void *__IInternalNotifyClosing;	// IInternalNotifyClosing 
	void *__IOTACustomEditorSubViewStructure;	// Structureviewapi::IOTACustomEditorSubViewStructure 
	void *__INTACustomEditorSubView190;	// Toolsapi::INTACustomEditorSubView190 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {755F1000-A4E3-4912-B394-51F85DE81537}
	operator _di_IInternalNotifyClosing()
	{
		_di_IInternalNotifyClosing intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IInternalNotifyClosing*(void) { return (IInternalNotifyClosing*)&__IInternalNotifyClosing; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {E597AA89-3E34-449A-BDFC-0B3731200150}
	operator Structureviewapi::_di_IOTACustomEditorSubViewStructure()
	{
		Structureviewapi::_di_IOTACustomEditorSubViewStructure intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Structureviewapi::IOTACustomEditorSubViewStructure*(void) { return (Structureviewapi::IOTACustomEditorSubViewStructure*)&__IOTACustomEditorSubViewStructure; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {356C05A7-78C0-477F-B59A-017D1AC74B00}
	operator Toolsapi::_di_INTACustomEditorSubView190()
	{
		Toolsapi::_di_INTACustomEditorSubView190 intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::INTACustomEditorSubView190*(void) { return (Toolsapi::INTACustomEditorSubView190*)&__INTACustomEditorSubView190; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {655AA26C-5898-4DB5-B21F-4F55E9B2B407}
	operator Toolsapi::_di_INTACustomEditorSubView()
	{
		Toolsapi::_di_INTACustomEditorSubView intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::INTACustomEditorSubView*(void) { return (Toolsapi::INTACustomEditorSubView*)&__INTACustomEditorSubView190; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEditorFormDesignerWrapper : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	bool FMultiview;
	
public:
	__fastcall TEditorFormDesignerWrapper();
	__fastcall virtual ~TEditorFormDesignerWrapper();
	virtual System::UnicodeString __fastcall GetRootClassName() = 0 ;
	virtual void __fastcall DisplayDesigner(Embeddedformdesigner::TEditorFormDesigner* AEditorFormDesigner) = 0 ;
	virtual TEditorFormDesignerWrapper* __fastcall GetActiveDesignerWrapper() = 0 ;
	virtual void __fastcall HideDesigner() = 0 ;
	virtual bool __fastcall IsModule(const Toolsapi::_di_IOTAModule Module) = 0 ;
	virtual bool __fastcall IsChildView(Embeddedformdesigner::TEditorFormDesigner* AEditorFormDesigner) = 0 ;
	virtual Designintf::TEditState __fastcall GetEditState() = 0 ;
	virtual bool __fastcall EditAction(Designintf::TEditAction Action) = 0 ;
	virtual Structureviewapi::_di_IOTAStructureContext __fastcall GetStructureViewContext() = 0 ;
	static TEditorFormDesignerWrapper* __fastcall FindWrapper(const System::DelphiInterface<System::Sysutils::TFunc__2<TEditorFormDesignerWrapper*,bool> > AFunc);
	__property TEditorFormDesignerWrapper* ActiveDesignerWrapper = {read=GetActiveDesignerWrapper};
	__property bool Multiview = {read=FMultiview, nodefault};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
#define sFormViewIdentifier L"Borland.FormDesignerView"
extern DELPHI_PACKAGE Events::TEvent1__1<System::TObject*>* EvDesignerHidden;
extern DELPHI_PACKAGE void __fastcall InternalRegister();
extern DELPHI_PACKAGE void __fastcall InternalUnRegister();
}	/* namespace Embeddeddesignerform */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_EMBEDDEDDESIGNERFORM)
using namespace Embeddeddesignerform;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// EmbeddeddesignerformHPP
