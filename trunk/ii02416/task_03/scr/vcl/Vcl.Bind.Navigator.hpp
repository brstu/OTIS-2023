// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.Bind.Navigator.pas' rev: 35.00 (Windows)

#ifndef Vcl_Bind_NavigatorHPP
#define Vcl_Bind_NavigatorHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Data.Bind.Components.hpp>
#include <System.Classes.hpp>
#include <Data.Bind.Controls.hpp>
#include <System.Generics.Collections.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ActnList.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Menus.hpp>
#include <System.Actions.hpp>

//-- user supplied -----------------------------------------------------------
#pragma link "Vcl.Bind.Navigator"

namespace Vcl
{
namespace Bind
{
namespace Navigator
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TCustomBindNavigator;
class DELPHICLASS TBindNavigator;
class DELPHICLASS TBindNavigateAction;
class DELPHICLASS TBindNavigateFirst;
class DELPHICLASS TBindNavigatePrior;
class DELPHICLASS TBindNavigateNext;
class DELPHICLASS TBindNavigateLast;
class DELPHICLASS TBindNavigateInsert;
class DELPHICLASS TBindNavigateDelete;
class DELPHICLASS TBindNavigateEdit;
class DELPHICLASS TBindNavigatePost;
class DELPHICLASS TBindNavigateCancel;
class DELPHICLASS TBindNavigateRefresh;
class DELPHICLASS TBindNavigateApplyUpdates;
class DELPHICLASS TBindNavigateCancelUpdates;
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TNavigateButtonEvent)(System::TObject* Sender, Data::Bind::Controls::TNavigateButton Button);

enum DECLSPEC_DENUM TNavigatorOrientation : unsigned char { orHorizontal, orVertical };

class PASCALIMPLEMENTATION TCustomBindNavigator : public Vcl::Buttons::TBaseNavigator
{
	typedef Vcl::Buttons::TBaseNavigator inherited;
	
private:
	Data::Bind::Controls::TBindNavigatorController* FController;
	TNavigateButtonEvent FBeforeAction;
	TNavigateButtonEvent FOnNavClick;
	System::Classes::TStrings* FHints;
	System::Classes::TStrings* FDefHints;
	Data::Bind::Controls::TNavigateButtons FVisibleButtons;
	void __fastcall OnActiveChanged(System::TObject* Sender);
	void __fastcall OnDataChanged(System::TObject* Sender);
	void __fastcall OnEditingChanged(System::TObject* Sender);
	Data::Bind::Components::TBaseLinkingBindSource* __fastcall GetDataSource();
	void __fastcall SetDataSource(Data::Bind::Components::TBaseLinkingBindSource* Value);
	HIDESBASE void __fastcall SetVisible(const Data::Bind::Controls::TNavigateButtons Value);
	System::Classes::TStrings* __fastcall GetHints();
	void __fastcall SetHints(System::Classes::TStrings* Value);
	HIDESBASE Vcl::Buttons::TNavButton* __fastcall GetButton(Data::Bind::Controls::TNavigateButton Index);
	void __fastcall HintsChanged(System::TObject* Sender);
	TNavigatorOrientation __fastcall GetOrientation();
	void __fastcall SetOrientation(const TNavigatorOrientation Value);
	
protected:
	void __fastcall InitHints();
	__property Vcl::Buttons::TNavButton* Buttons[Data::Bind::Controls::TNavigateButton Index] = {read=GetButton};
	virtual void __fastcall EnabledChanged();
	void __fastcall ActiveChanged();
	void __fastcall DataChanged();
	void __fastcall EditingChanged();
	virtual void __fastcall BtnClick(Data::Bind::Controls::TNavigateButton Index);
	virtual void __fastcall Loaded();
	virtual void __fastcall BtnIDClick(int Index);
	
public:
	__fastcall virtual TCustomBindNavigator(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomBindNavigator();
	__property Data::Bind::Controls::TNavigateButtons VisibleButtons = {read=FVisibleButtons, write=SetVisible, default=1023};
	__property Data::Bind::Components::TBaseLinkingBindSource* DataSource = {read=GetDataSource, write=SetDataSource};
	__property System::Classes::TStrings* Hints = {read=GetHints, write=SetHints};
	__property TNavigateButtonEvent BeforeAction = {read=FBeforeAction, write=FBeforeAction};
	__property TNavigateButtonEvent OnClick = {read=FOnNavClick, write=FOnNavClick};
	__property TNavigatorOrientation Orientation = {read=GetOrientation, write=SetOrientation, nodefault};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomBindNavigator(HWND ParentWindow) : Vcl::Buttons::TBaseNavigator(ParentWindow) { }
	
private:
	void *__IBindNavigator;	// Data::Bind::Components::IBindNavigator 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {50307CDD-63CD-4538-A211-D605C3811A0B}
	operator Data::Bind::Components::_di_IBindNavigator()
	{
		Data::Bind::Components::_di_IBindNavigator intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Data::Bind::Components::IBindNavigator*(void) { return (Data::Bind::Components::IBindNavigator*)&__IBindNavigator; }
	#endif
	
};


class PASCALIMPLEMENTATION TBindNavigator : public TCustomBindNavigator
{
	typedef TCustomBindNavigator inherited;
	
__published:
	__property DataSource;
	__property VisibleButtons = {default=1023};
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property Constraints;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Flat = {default=0};
	__property Ctl3D;
	__property Hints;
	__property Orientation;
	__property ParentCtl3D = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ConfirmDelete = {default=1};
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=0};
	__property Visible = {default=1};
	__property BeforeAction;
	__property OnClick;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnResize;
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TCustomBindNavigator.Create */ inline __fastcall virtual TBindNavigator(System::Classes::TComponent* AOwner) : TCustomBindNavigator(AOwner) { }
	/* TCustomBindNavigator.Destroy */ inline __fastcall virtual ~TBindNavigator() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TBindNavigator(HWND ParentWindow) : TCustomBindNavigator(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TBindNavigateAction : public Vcl::Actnlist::TAction
{
	typedef Vcl::Actnlist::TAction inherited;
	
private:
	Data::Bind::Controls::TBindNavigatorController* FController;
	Data::Bind::Controls::TNavigateButton FButton;
	Data::Bind::Components::TBaseLinkingBindSource* __fastcall GetDataSource();
	void __fastcall SetDataSource(Data::Bind::Components::TBaseLinkingBindSource* Value);
	bool __fastcall InvokeController(System::TObject* Target, System::DelphiInterface<System::Sysutils::TProc__1<Data::Bind::Controls::TBindNavigatorController*> > AProc);
	
protected:
	__property Data::Bind::Controls::TBindNavigatorController* Controller = {read=FController};
	
public:
	__fastcall virtual TBindNavigateAction(System::Classes::TComponent* AComponent)/* overload */;
	__fastcall TBindNavigateAction(System::Classes::TComponent* AComponent, Data::Bind::Controls::TNavigateButton AButton)/* overload */;
	__fastcall virtual ~TBindNavigateAction();
	virtual bool __fastcall HandlesTarget(System::TObject* Target);
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	virtual void __fastcall UpdateTarget(System::TObject* Target);
	
__published:
	__property Data::Bind::Components::TBaseLinkingBindSource* DataSource = {read=GetDataSource, write=SetDataSource};
};


class PASCALIMPLEMENTATION TBindNavigateFirst : public TBindNavigateAction
{
	typedef TBindNavigateAction inherited;
	
public:
	__fastcall virtual TBindNavigateFirst(System::Classes::TComponent* AComponent)/* overload */;
public:
	/* TBindNavigateAction.Create */ inline __fastcall TBindNavigateFirst(System::Classes::TComponent* AComponent, Data::Bind::Controls::TNavigateButton AButton)/* overload */ : TBindNavigateAction(AComponent, AButton) { }
	/* TBindNavigateAction.Destroy */ inline __fastcall virtual ~TBindNavigateFirst() { }
	
};


class PASCALIMPLEMENTATION TBindNavigatePrior : public TBindNavigateAction
{
	typedef TBindNavigateAction inherited;
	
public:
	__fastcall virtual TBindNavigatePrior(System::Classes::TComponent* AComponent)/* overload */;
public:
	/* TBindNavigateAction.Create */ inline __fastcall TBindNavigatePrior(System::Classes::TComponent* AComponent, Data::Bind::Controls::TNavigateButton AButton)/* overload */ : TBindNavigateAction(AComponent, AButton) { }
	/* TBindNavigateAction.Destroy */ inline __fastcall virtual ~TBindNavigatePrior() { }
	
};


class PASCALIMPLEMENTATION TBindNavigateNext : public TBindNavigateAction
{
	typedef TBindNavigateAction inherited;
	
public:
	__fastcall virtual TBindNavigateNext(System::Classes::TComponent* AComponent)/* overload */;
public:
	/* TBindNavigateAction.Create */ inline __fastcall TBindNavigateNext(System::Classes::TComponent* AComponent, Data::Bind::Controls::TNavigateButton AButton)/* overload */ : TBindNavigateAction(AComponent, AButton) { }
	/* TBindNavigateAction.Destroy */ inline __fastcall virtual ~TBindNavigateNext() { }
	
};


class PASCALIMPLEMENTATION TBindNavigateLast : public TBindNavigateAction
{
	typedef TBindNavigateAction inherited;
	
public:
	__fastcall virtual TBindNavigateLast(System::Classes::TComponent* AComponent)/* overload */;
public:
	/* TBindNavigateAction.Create */ inline __fastcall TBindNavigateLast(System::Classes::TComponent* AComponent, Data::Bind::Controls::TNavigateButton AButton)/* overload */ : TBindNavigateAction(AComponent, AButton) { }
	/* TBindNavigateAction.Destroy */ inline __fastcall virtual ~TBindNavigateLast() { }
	
};


class PASCALIMPLEMENTATION TBindNavigateInsert : public TBindNavigateAction
{
	typedef TBindNavigateAction inherited;
	
public:
	__fastcall virtual TBindNavigateInsert(System::Classes::TComponent* AComponent)/* overload */;
public:
	/* TBindNavigateAction.Create */ inline __fastcall TBindNavigateInsert(System::Classes::TComponent* AComponent, Data::Bind::Controls::TNavigateButton AButton)/* overload */ : TBindNavigateAction(AComponent, AButton) { }
	/* TBindNavigateAction.Destroy */ inline __fastcall virtual ~TBindNavigateInsert() { }
	
};


class PASCALIMPLEMENTATION TBindNavigateDelete : public TBindNavigateAction
{
	typedef TBindNavigateAction inherited;
	
private:
	bool FConfirmDelete;
	
public:
	__fastcall virtual TBindNavigateDelete(System::Classes::TComponent* AComponent)/* overload */;
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	
__published:
	__property bool ConfirmDelete = {read=FConfirmDelete, write=FConfirmDelete, default=1};
public:
	/* TBindNavigateAction.Create */ inline __fastcall TBindNavigateDelete(System::Classes::TComponent* AComponent, Data::Bind::Controls::TNavigateButton AButton)/* overload */ : TBindNavigateAction(AComponent, AButton) { }
	/* TBindNavigateAction.Destroy */ inline __fastcall virtual ~TBindNavigateDelete() { }
	
};


class PASCALIMPLEMENTATION TBindNavigateEdit : public TBindNavigateAction
{
	typedef TBindNavigateAction inherited;
	
public:
	__fastcall virtual TBindNavigateEdit(System::Classes::TComponent* AComponent)/* overload */;
public:
	/* TBindNavigateAction.Create */ inline __fastcall TBindNavigateEdit(System::Classes::TComponent* AComponent, Data::Bind::Controls::TNavigateButton AButton)/* overload */ : TBindNavigateAction(AComponent, AButton) { }
	/* TBindNavigateAction.Destroy */ inline __fastcall virtual ~TBindNavigateEdit() { }
	
};


class PASCALIMPLEMENTATION TBindNavigatePost : public TBindNavigateAction
{
	typedef TBindNavigateAction inherited;
	
public:
	__fastcall virtual TBindNavigatePost(System::Classes::TComponent* AComponent)/* overload */;
public:
	/* TBindNavigateAction.Create */ inline __fastcall TBindNavigatePost(System::Classes::TComponent* AComponent, Data::Bind::Controls::TNavigateButton AButton)/* overload */ : TBindNavigateAction(AComponent, AButton) { }
	/* TBindNavigateAction.Destroy */ inline __fastcall virtual ~TBindNavigatePost() { }
	
};


class PASCALIMPLEMENTATION TBindNavigateCancel : public TBindNavigateAction
{
	typedef TBindNavigateAction inherited;
	
public:
	__fastcall virtual TBindNavigateCancel(System::Classes::TComponent* AComponent)/* overload */;
public:
	/* TBindNavigateAction.Create */ inline __fastcall TBindNavigateCancel(System::Classes::TComponent* AComponent, Data::Bind::Controls::TNavigateButton AButton)/* overload */ : TBindNavigateAction(AComponent, AButton) { }
	/* TBindNavigateAction.Destroy */ inline __fastcall virtual ~TBindNavigateCancel() { }
	
};


class PASCALIMPLEMENTATION TBindNavigateRefresh : public TBindNavigateAction
{
	typedef TBindNavigateAction inherited;
	
public:
	__fastcall virtual TBindNavigateRefresh(System::Classes::TComponent* AComponent)/* overload */;
public:
	/* TBindNavigateAction.Create */ inline __fastcall TBindNavigateRefresh(System::Classes::TComponent* AComponent, Data::Bind::Controls::TNavigateButton AButton)/* overload */ : TBindNavigateAction(AComponent, AButton) { }
	/* TBindNavigateAction.Destroy */ inline __fastcall virtual ~TBindNavigateRefresh() { }
	
};


class PASCALIMPLEMENTATION TBindNavigateApplyUpdates : public TBindNavigateAction
{
	typedef TBindNavigateAction inherited;
	
public:
	__fastcall virtual TBindNavigateApplyUpdates(System::Classes::TComponent* AComponent)/* overload */;
public:
	/* TBindNavigateAction.Create */ inline __fastcall TBindNavigateApplyUpdates(System::Classes::TComponent* AComponent, Data::Bind::Controls::TNavigateButton AButton)/* overload */ : TBindNavigateAction(AComponent, AButton) { }
	/* TBindNavigateAction.Destroy */ inline __fastcall virtual ~TBindNavigateApplyUpdates() { }
	
};


class PASCALIMPLEMENTATION TBindNavigateCancelUpdates : public TBindNavigateAction
{
	typedef TBindNavigateAction inherited;
	
public:
	__fastcall virtual TBindNavigateCancelUpdates(System::Classes::TComponent* AComponent)/* overload */;
public:
	/* TBindNavigateAction.Create */ inline __fastcall TBindNavigateCancelUpdates(System::Classes::TComponent* AComponent, Data::Bind::Controls::TNavigateButton AButton)/* overload */ : TBindNavigateAction(AComponent, AButton) { }
	/* TBindNavigateAction.Destroy */ inline __fastcall virtual ~TBindNavigateCancelUpdates() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Navigator */
}	/* namespace Bind */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_BIND_NAVIGATOR)
using namespace Vcl::Bind::Navigator;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_BIND)
using namespace Vcl::Bind;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_Bind_NavigatorHPP
