// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'EmbeddedFormDesigner.pas' rev: 35.00 (Windows)

#ifndef EmbeddedformdesignerHPP
#define EmbeddedformdesignerHPP

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
#include <ViewSelector.hpp>
#include <System.Generics.Collections.hpp>
#include <Vcl.Dialogs.hpp>
#include <DesignIntf.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.ToolWin.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ButtonGroup.hpp>
#include <PlatformAPI.hpp>
#include <ToolsAPI.hpp>
#include <Vcl.Menus.hpp>
#include <System.ImageList.hpp>
#include <Vcl.ImgList.hpp>
#include <IDEImageResources.hpp>
#include <Vcl.VirtualImageList.hpp>
#include <Vcl.VirtualImage.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Embeddedformdesigner
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TEditorFormDesigner;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TEditorFormDesigner : public Vcl::Forms::TFrame
{
	typedef Vcl::Forms::TFrame inherited;
	
__published:
	Viewselector::TViewSelectorFrame* ViewSelector;
	Vcl::Stdctrls::TButton* BtnOpenDesigner;
	Vcl::Stdctrls::TLabel* LbOpenDesigner;
	Vcl::Virtualimagelist::TVirtualImageList* VirtualImageList1;
	Vcl::Virtualimage::TVirtualImage* VirtualImage1;
	void __fastcall FrameAlignPosition(Vcl::Controls::TWinControl* Sender, Vcl::Controls::TControl* Control, int &NewLeft, int &NewTop, int &NewWidth, int &NewHeight, System::Types::TRect &AlignRect, const Vcl::Controls::TAlignInfo &AlignInfo);
	void __fastcall BtnOpenDesignerClick(System::TObject* Sender);
	
private:
	Vcl::Controls::TWinControl* FFocusedControl;
	Designintf::_di_IDesigner FActiveDesigner;
	void __fastcall UpdateViewSelector();
	void __fastcall DoAddView(const System::UnicodeString AViewName);
	void __fastcall DoRemoveView(const System::UnicodeString ViewName);
	void __fastcall DoSelectView(const System::UnicodeString ViewName);
	void __fastcall DoRotateView();
	void __fastcall DoBackgroundView();
	void __fastcall DoCheckView(const System::UnicodeString ViewName, bool &Exists);
	void __fastcall DoSelectStyle(Platformapi::TOTAOSFamily APlatform);
	void __fastcall PackageNotification(const System::UnicodeString PackageName, Toolsapi::TPackageOp PackageOp);
	void __fastcall ItemDeleted(const Designintf::_di_IDesigner ADesigner, System::Classes::TPersistent* AItem);
	void __fastcall ItemInserted(const Designintf::_di_IDesigner ADesigner, System::Classes::TPersistent* AItem);
	void __fastcall ItemsModified(const Designintf::_di_IDesigner ADesigner);
	void __fastcall SelectionChanged(const Designintf::_di_IDesigner ADesigner, const Designintf::_di_IDesignerSelections ASelection);
	void __fastcall DesignerOpened(const Designintf::_di_IDesigner ADesigner, bool AResurrecting);
	void __fastcall DesignerClosed(const Designintf::_di_IDesigner ADesigner, bool AGoingDormant);
	void __fastcall ViewAdded(const Designintf::_di_IDesigner ADesigner, const System::UnicodeString ViewName);
	void __fastcall ViewRemoved(const Designintf::_di_IDesigner ADesigner, const System::UnicodeString ViewName);
	void __fastcall SetMultiview(const bool Value);
	bool __fastcall GetMultiview();
	void __fastcall IDEThemeChanged(System::TObject* Sender);
	void __fastcall UpdateFrame();
	
protected:
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMGetDlgCode(Winapi::Messages::TWMNoParams &Message);
	virtual void __fastcall Notification(System::Classes::TComponent* Component, System::Classes::TOperation Operation);
	void __fastcall SetFocusedControl(Vcl::Controls::TWinControl* const AControl);
	HIDESBASE MESSAGE void __fastcall CNSysKeyDown(Winapi::Messages::TWMKey &Message);
	
public:
	__property Designintf::_di_IDesigner ActiveDesigner = {read=FActiveDesigner};
	__property Vcl::Controls::TWinControl* FocusedControl = {read=FFocusedControl, write=SetFocusedControl};
	__property bool Multiview = {read=GetMultiview, write=SetMultiview, nodefault};
	void __fastcall SelectPreviewStyle(Platformapi::TOTAOSFamily APlatform);
	void __fastcall SetActiveDesigner(const Designintf::_di_IDesigner ADesigner);
	__fastcall virtual TEditorFormDesigner(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TEditorFormDesigner();
public:
	/* TWinControl.CreateParented */ inline __fastcall TEditorFormDesigner(HWND ParentWindow) : Vcl::Forms::TFrame(ParentWindow) { }
	
private:
	void *__IDesignNotificationViews;	// Designintf::IDesignNotificationViews 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {92B08B96-E8CF-4AE9-8D02-E1BEBF7DB662}
	operator Designintf::_di_IDesignNotificationViews()
	{
		Designintf::_di_IDesignNotificationViews intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Designintf::IDesignNotificationViews*(void) { return (Designintf::IDesignNotificationViews*)&__IDesignNotificationViews; }
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
	operator Designintf::IDesignNotification*(void) { return (Designintf::IDesignNotification*)&__IDesignNotificationViews; }
	#endif
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Embeddedformdesigner */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_EMBEDDEDFORMDESIGNER)
using namespace Embeddedformdesigner;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// EmbeddedformdesignerHPP
