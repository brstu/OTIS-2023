// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ActionEditors.pas' rev: 35.00 (Windows)

#ifndef ActioneditorsHPP
#define ActioneditorsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Types.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <System.Actions.hpp>
#include <System.Generics.Collections.hpp>
#include <DesignIntf.hpp>
#include <DesignEditors.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.VirtualImageList.hpp>
#include <Winapi.Messages.hpp>
#include <System.Generics.Defaults.hpp>

//-- user supplied -----------------------------------------------------------

namespace Actioneditors
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TIDEActions;
class DELPHICLASS TActionListView;
class DELPHICLASS TActionProperty;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TIDEActions : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__classmethod virtual void __fastcall AssignAction(System::Classes::TBasicAction* Source, System::Classes::TBasicAction* Destination);
	__classmethod virtual System::TObject* __fastcall CreateImageLink(const System::Classes::TNotifyEvent OnChanged);
	__classmethod virtual Vcl::Imglist::TCustomImageList* __fastcall CreateImageList(System::Actions::TContainedActionList* ActionList);
	__classmethod virtual System::Actions::TContainedActionClass __fastcall DefaultActionClass();
	__classmethod virtual System::Actions::TContainedActionClass __fastcall BaseActionClass();
	__classmethod virtual System::Actions::TContainedActionListClass __fastcall BaseActionListClass();
	__classmethod virtual void __fastcall CopyImageIfAvailable(System::Actions::TContainedAction* const NewAction, System::Actions::TContainedActionList* const ActionList);
	__classmethod virtual void __fastcall RegisterImageLink(System::Actions::TContainedActionList* const ActionList, System::TObject* const ImageLink);
	__classmethod virtual void __fastcall UnregisterImageLink(System::Actions::TContainedActionList* const ActionList, System::TObject* const ImageLink);
public:
	/* TObject.Create */ inline __fastcall TIDEActions() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TIDEActions() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TIDEActionsClass;

typedef void __fastcall (__closure *TNewActionEvent)(System::TObject* Sender, const System::UnicodeString Category, System::Actions::TContainedActionClass ActionClass, System::Actions::TContainedActionList* ActionList);

typedef void __fastcall (__closure *TSelectActionEvent)(System::TObject* Sender, System::Actions::TContainedAction* Action);

class PASCALIMPLEMENTATION TActionListView : public Vcl::Comctrls::TCustomListView
{
	typedef Vcl::Comctrls::TCustomListView inherited;
	
private:
	static const System::Int8 FDefItemHeight = System::Int8(0x14);
	
	System::Actions::TContainedActionList* FActionList;
	Designintf::_di_IDesigner FDesigner;
	Vcl::Virtualimagelist::TVirtualImageList* FImageList;
	Vcl::Menus::TPopupMenu* FNewActnPopupMenu;
	Vcl::Menus::TPopupMenu* FNewStdActnPopupMenu;
	System::Classes::TStrings* FStdActionList;
	System::Classes::TStrings* FTempStringList;
	TIDEActionsClass FIDEActions;
	System::UnicodeString FFrameworkType;
	TNewActionEvent FOnNewAction;
	TSelectActionEvent FOnSelectAction;
	System::UnicodeString FMsg;
	void __fastcall AddStdAction(const System::UnicodeString Category, System::Classes::TBasicActionClass ActionClass, void * Info);
	void __fastcall AddTempString(const System::UnicodeString S);
	Vcl::Menus::TMenuItem* __fastcall CreateMenuItem(const System::UnicodeString Caption, System::Classes::TNotifyEvent Event, void * CustomData);
	void __fastcall DoNewActionClick(System::TObject* Sender);
	void __fastcall DoNewStdActionClick(System::TObject* Sender);
	void __fastcall RebuildListView();
	void __fastcall RebuildPopupMenus();
	void __fastcall SetDesigner(const Designintf::_di_IDesigner Value);
	void __fastcall ShowPopupMenu(Vcl::Comctrls::TListItem* Item, Vcl::Menus::TPopupMenu* PopupMenu);
	void __fastcall DoShowMsg(System::TObject* Sender);
	MESSAGE void __fastcall CNMeasureItem(Winapi::Messages::TWMMeasureItem &Message);
	void __fastcall UpdateFont();
	Vcl::Controls::TWinControl* __fastcall GetControlForDPI();
	
protected:
	DYNAMIC void __fastcall Resize();
	virtual void __fastcall CreateWnd();
	virtual bool __fastcall CustomDrawItem(Vcl::Comctrls::TListItem* Item, Vcl::Comctrls::TCustomDrawState State, Vcl::Comctrls::TCustomDrawStage Stage);
	virtual bool __fastcall IsCustomDrawn(Vcl::Comctrls::TCustomDrawTarget Target, Vcl::Comctrls::TCustomDrawStage Stage);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	
public:
	__fastcall virtual TActionListView(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TActionListView();
	DYNAMIC void __fastcall Click();
	__property Designintf::_di_IDesigner Designer = {read=FDesigner, write=SetDesigner};
	__property TNewActionEvent OnNewAction = {read=FOnNewAction, write=FOnNewAction};
	__property TSelectActionEvent OnSelectAction = {read=FOnSelectAction, write=FOnSelectAction};
public:
	/* TWinControl.CreateParented */ inline __fastcall TActionListView(HWND ParentWindow) : Vcl::Comctrls::TCustomListView(ParentWindow) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TActionProperty : public Designeditors::TComponentProperty
{
	typedef Designeditors::TComponentProperty inherited;
	
	
private:
	#pragma pack(push,8)
	struct DECLSPEC_DRECORD TRegisteredAction
	{
	public:
		System::UnicodeString Category;
		System::Classes::TBasicActionClass ActionClass;
	};
	#pragma pack(pop)
	
	
	
private:
	TActionListView* FActionListView;
	Designintf::_di_IPropertyHost FHost;
	System::Generics::Collections::TList__1<TRegisteredAction>* FRegisteredActionList;
	void __fastcall CreateNewAction(System::TObject* Sender, const System::UnicodeString Category, System::Actions::TContainedActionClass ActionClass, System::Actions::TContainedActionList* ActionList);
	void __fastcall SelectAction(System::TObject* Sender, System::Actions::TContainedAction* Action);
	void __fastcall AddAction(const System::UnicodeString Category, System::Classes::TBasicActionClass ActionClass, void * Info);
	
public:
	__fastcall virtual ~TActionProperty();
	HIDESBASE void __fastcall Edit(const Designintf::_di_IPropertyHost Host, bool DblClick)/* overload */;
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes();
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TActionProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TComponentProperty(ADesigner, APropCount) { }
	
private:
	void *__IProperty80;	// Designintf::IProperty80 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {A02577DB-D5E5-4374-A8AB-4B2F83177878}
	operator Designintf::_di_IProperty80()
	{
		Designintf::_di_IProperty80 intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Designintf::IProperty80*(void) { return (Designintf::IProperty80*)&__IProperty80; }
	#endif
	
};

#pragma pack(pop)

typedef void __fastcall (*TNotifyActionListChange)();

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE TIDEActionsClass vOldIDEActions;
extern DELPHI_PACKAGE TNotifyActionListChange NotifyActionListChange;
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetFrameworkType();
extern DELPHI_PACKAGE void __fastcall RegisterActionsInFramework(const System::UnicodeString FrameworkType, const TIDEActionsClass AIDEActions);
extern DELPHI_PACKAGE void __fastcall UnregisterActionsInFramework(const System::UnicodeString FrameworkType);
extern DELPHI_PACKAGE TIDEActionsClass __fastcall GetIDEActions(const System::UnicodeString FrameworkType)/* overload */;
extern DELPHI_PACKAGE TIDEActionsClass __fastcall GetIDEActions(System::Actions::TContainedActionList* const ActionList, System::UnicodeString &FrameworkType)/* overload */;
extern DELPHI_PACKAGE int __fastcall GetIDEActionsList(System::Classes::TStringList* List);
extern DELPHI_PACKAGE void __fastcall RegActions(const System::UnicodeString ACategory, System::Classes::TBasicActionClass const *AClasses, const int AClasses_High, System::Classes::TComponentClass AResource);
extern DELPHI_PACKAGE void __fastcall UnRegActions(System::Classes::TBasicActionClass const *Classes, const int Classes_High);
extern DELPHI_PACKAGE void __fastcall EnumActions(System::Actions::TEnumActionProc Proc, void * Info, const System::UnicodeString FrameworkType);
extern DELPHI_PACKAGE System::Classes::TBasicAction* __fastcall CreateAction(System::Classes::TComponent* AOwner, System::Classes::TBasicActionClass ActionClass, const System::UnicodeString FrameworkType);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetNewActionName(System::Classes::TBasicAction* const Action, const System::UnicodeString FrameworkType);
}	/* namespace Actioneditors */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ACTIONEDITORS)
using namespace Actioneditors;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// ActioneditorsHPP
