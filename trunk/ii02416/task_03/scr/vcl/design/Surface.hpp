// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Surface.pas' rev: 35.00 (Windows)

#ifndef SurfaceHPP
#define SurfaceHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Messages.hpp>
#include <System.Types.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Winapi.Windows.hpp>
#include <Vcl.Controls.hpp>
#include <DesignIntf.hpp>
#include <Designer.hpp>
#include <ComponentDesigner.hpp>
#include <LibHelp.hpp>

//-- user supplied -----------------------------------------------------------

namespace Surface
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TDesignSurface;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TDesignSurface : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	Designer::_di_IDesignSurfaceListener FListener;
	System::Classes::TComponent* FRoot;
	Designer::_di_IItem FRootItem;
	Designer::_di_IItem FContainerItem;
	Designer::_di_IGrabHandles FGrabHandles;
	Designintf::_di_IDesigner FDesigner;
	Componentdesigner::_di_ISurfaceHost FHost;
	System::Classes::TList* FContainers;
	System::Types::TPoint FGridSize;
	bool FDisplayGrid;
	bool FShowCaptions;
	bool FShowNonVisualComponents;
	bool FInitializing;
	Designer::_di_IGuidelinePainter FGuidelinePainter;
	void __fastcall SetHost(const Componentdesigner::_di_ISurfaceHost Value);
	
protected:
	virtual Designer::_di_IItem __fastcall ItemFor(System::Classes::TPersistent* AInstance) = 0 ;
	virtual void __fastcall MoveContainersFront() = 0 ;
	virtual void __fastcall ResyncContainers() = 0 ;
	virtual void __fastcall Update() = 0 ;
	virtual void __fastcall InstanceInserted(System::Classes::TPersistent* AInstance);
	virtual void __fastcall InstanceRemoved(System::Classes::TPersistent* AInstance);
	virtual System::Classes::TShiftState __fastcall GetShiftState() = 0 ;
	virtual void __fastcall FlipContainers() = 0 ;
	virtual void __fastcall SetOptions(const Componentdesigner::TDesignSurfaceOptions &Value) = 0 ;
	void __fastcall SetInitializing(bool Value);
	void __fastcall AddListener(const Designer::_di_IDesignSurfaceListener Listener);
	virtual Designer::_di_IDragBoxes __fastcall BeginDragging(const Designer::_di_IItem Parent, const System::Types::TPoint &Anchor) = 0 ;
	virtual void __fastcall Close();
	Designer::_di_IItem __fastcall CreateItem(const Designer::_di_IItem Parent, const System::Types::TRect &Rect, bool ScaleRect);
	virtual System::Types::TPoint __fastcall CursorPosition() = 0 ;
	virtual void __fastcall DeleteSelection();
	virtual System::Types::TPoint __fastcall DesignerToGlobal(const System::Types::TPoint &Point) = 0 ;
	void __fastcall DestroyItem(const Designer::_di_IItem Item);
	virtual Designer::_di_IItem __fastcall FindNextItem(const Designer::_di_IItem Item, bool GoForward) = 0 ;
	virtual void __fastcall Focus() = 0 ;
	Designer::_di_IGrabHandles __fastcall GetGrabHandles();
	Designer::_di_IGuidelinePainter __fastcall GetGuidelinePainter();
	Designer::_di_IItem __fastcall GetItems(int Index);
	int __fastcall GetItemsCount();
	virtual System::Types::TPoint __fastcall GetOffset() = 0 ;
	Designer::_di_IItem __fastcall GetRoot();
	Designer::_di_IItem __fastcall GetContainerItem();
	virtual System::Types::TPoint __fastcall GlobalToDesigner(const System::Types::TPoint &Point) = 0 ;
	bool __fastcall GridSnapDisabled();
	void __fastcall RemoveListener(const Designer::_di_IDesignSurfaceListener Listener);
	virtual void __fastcall UpdateSelection() = 0 ;
	void __fastcall ValidateModification();
	virtual void __fastcall Modified();
	virtual bool __fastcall ItemInSelections(const Designer::_di_ISelections ASelections, const Designer::_di_IItem AItem);
	virtual void __fastcall Notification(System::Classes::TPersistent* Instance, System::Classes::TOperation Operation) = 0 ;
	void __fastcall CanInsertComponent(System::Classes::TComponent* AComponent);
	void __fastcall AlignToGrid(System::TObject* Sender);
	void __fastcall AppAlignDialog(System::TObject* Sender);
	void __fastcall AppCreationOrderDialog(System::TObject* Sender);
	void __fastcall AppFlipChildrenAll(System::TObject* Sender);
	void __fastcall AppFlipChildrenSelected(System::TObject* Sender);
	void __fastcall AppSaveTemplateDialog(System::TObject* Sender);
	void __fastcall AppScaleDialog(System::TObject* Sender);
	void __fastcall AppSizeDialog(System::TObject* Sender);
	void __fastcall AppTabOrderDialog(System::TObject* Sender);
	void __fastcall AppShowNonVisualComponents(System::TObject* Sender);
	void __fastcall AppTextDFM(System::TObject* Sender);
	void __fastcall AppConvertToMetropolisUI(System::TObject* Sender);
	void __fastcall AppViewAsText(System::TObject* Sender);
	System::Classes::TComponent* __fastcall GetDesignRoot();
	bool __fastcall GetIsControl();
	void __fastcall RevertComponent(System::TObject* Sender);
	void __fastcall SelectionVerb(System::TObject* Sender);
	void __fastcall SetIsControl(bool Value);
	virtual Designer::_di_IItem __fastcall ItemAt(const int X, const int Y) = 0 ;
	virtual void __fastcall ValidateRename(System::Classes::TComponent* AComponent, const System::UnicodeString CurName, const System::UnicodeString NewName) = 0 ;
	System::UnicodeString __fastcall UniqueName(const System::UnicodeString BaseName);
	bool __fastcall IsView();
	__property bool Initializing = {read=FInitializing, nodefault};
	
public:
	__fastcall virtual ~TDesignSurface();
	__property Designer::_di_IDesignSurfaceListener Listener = {read=FListener, write=FListener};
	__property System::Classes::TComponent* Root = {read=FRoot, write=FRoot};
	__property Designer::_di_IItem RootItem = {read=FRootItem, write=FRootItem};
	__property Designer::_di_IItem ContainerItem = {read=FContainerItem, write=FContainerItem};
	__property Designer::_di_IGrabHandles GrabHandles = {read=GetGrabHandles, write=FGrabHandles};
	__property Designer::_di_IGuidelinePainter GuidelinePainter = {read=GetGuidelinePainter, write=FGuidelinePainter};
	__property Designintf::_di_IDesigner Designer = {read=FDesigner, write=FDesigner};
	__property Componentdesigner::_di_ISurfaceHost Host = {read=FHost, write=SetHost};
	__property System::Classes::TList* Containers = {read=FContainers, write=FContainers};
	__property System::Types::TPoint GridSize = {read=FGridSize, write=FGridSize};
	__property bool DisplayGrid = {read=FDisplayGrid, write=FDisplayGrid, nodefault};
	__property bool ShowCaptions = {read=FShowCaptions, write=FShowCaptions, nodefault};
	__property bool ShowNonVisualComponents = {read=FShowNonVisualComponents, write=FShowNonVisualComponents, nodefault};
public:
	/* TObject.Create */ inline __fastcall TDesignSurface() : System::TInterfacedObject() { }
	
private:
	void *__IDesignerNotify;	// System::Classes::IDesignerNotify 
	void *__IDesignSurface;	// Designer::IDesignSurface 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {93F3FCBC-968E-45A9-9641-609E8FB3AC60}
	operator Designintf::_di_IDesigner() { return Designer; }
	#else
	operator Designintf::IDesigner*(void) { return (Designintf::IDesigner*)Designer; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {B971E807-E3A6-11D1-AAB1-00C04FB16FBC}
	operator System::Classes::_di_IDesignerNotify()
	{
		System::Classes::_di_IDesignerNotify intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator System::Classes::IDesignerNotify*(void) { return (System::Classes::IDesignerNotify*)&__IDesignerNotify; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {37C644AA-6B33-4D7E-B18A-53D57E48010F}
	operator Designer::_di_IDesignSurface()
	{
		Designer::_di_IDesignSurface intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Designer::IDesignSurface*(void) { return (Designer::IDesignSurface*)&__IDesignSurface; }
	#endif
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Surface */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SURFACE)
using namespace Surface;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SurfaceHPP
