// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.ActnMenus.pas' rev: 35.00 (Windows)

#ifndef Vcl_ActnmenusHPP
#define Vcl_ActnmenusHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.Classes.hpp>
#include <System.Contnrs.hpp>
#include <System.Actions.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Themes.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.ToolWin.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.StdActns.hpp>
#include <Vcl.ActnMan.hpp>
#include <Vcl.ActnCtrls.hpp>
#include <Vcl.ShadowWnd.hpp>
#include <System.UITypes.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Actnmenus
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TMenuStack;
class DELPHICLASS TActionBarStyleEx;
class DELPHICLASS TCustomActionMenuBar;
class DELPHICLASS TCustomMenuExpandBtn;
class DELPHICLASS TCustomActionPopupMenu;
class DELPHICLASS TCustomizeActionToolBar;
class DELPHICLASS TCustomizeActionLink;
class DELPHICLASS TCustomizeActionClientItem;
class DELPHICLASS TCustomMDIMenuButton;
class DELPHICLASS TCustomActionMainMenuBar;
class DELPHICLASS TActionMainMenuBar;
class DELPHICLASS TCustomMenuItem;
class DELPHICLASS TCustomMenuButton;
class DELPHICLASS TCustomAddRemoveItem;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TMenuStack : public System::Contnrs::TStack
{
	typedef System::Contnrs::TStack inherited;
	
private:
	TCustomActionMenuBar* FMenu;
	TCustomActionMenuBar* __fastcall GetBars(const int Index);
	
protected:
	__property TCustomActionMenuBar* Bars[const int Index] = {read=GetBars};
	
public:
	__fastcall TMenuStack(TCustomActionMenuBar* AMenu);
	HIDESBASE void __fastcall Push(TCustomActionMenuBar* Container);
	HIDESBASE TCustomActionMenuBar* __fastcall Pop();
	HIDESBASE TCustomActionMenuBar* __fastcall Peek();
	__property List;
public:
	/* TOrderedList.Destroy */ inline __fastcall virtual ~TMenuStack() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TCustomPopupClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TCustomPopupClass);
#endif /* _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TCustomAddRemoveItemClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TCustomAddRemoveItemClass);
#endif /* _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TActionBarStyleEx : public Vcl::Actnman::TActionBarStyle
{
	typedef Vcl::Actnman::TActionBarStyle inherited;
	
public:
	virtual TCustomPopupClass __fastcall GetPopupClass(Vcl::Actnman::TCustomActionBar* ActionBar) = 0 ;
	virtual TCustomAddRemoveItemClass __fastcall GetAddRemoveItemClass(Vcl::Actnman::TCustomActionBar* ActionBar) = 0 ;
	virtual Vcl::Actnctrls::TCustomToolScrollBtnClass __fastcall GetScrollBtnClass(Vcl::Actnman::TCustomActionBar* ActionBar) = 0 ;
public:
	/* TObject.Create */ inline __fastcall TActionBarStyleEx() : Vcl::Actnman::TActionBarStyle() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TActionBarStyleEx() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TAnimationStyle : unsigned char { asNone, asDefault, asUnFold, asSlide, asFade };

typedef void __fastcall (__closure *TMenuPopupEvent)(System::TObject* Sender, Vcl::Actnman::TCustomActionControl* Item);

typedef void __fastcall (__closure *TGetPopupClassEvent)(System::TObject* Sender, TCustomPopupClass &PopupClass);

typedef void __fastcall (__closure *TExitMenuEvent)(TCustomActionMenuBar* Sender, bool Cancelled);

class PASCALIMPLEMENTATION TCustomActionMenuBar : public Vcl::Actnctrls::TCustomActionDockBar
{
	typedef Vcl::Actnctrls::TCustomActionDockBar inherited;
	
private:
	Vcl::Extctrls::TTimer* FActionIdleTimer;
	bool FAnimatePopups;
	TAnimationStyle FAnimationStyle;
	Vcl::Actnman::TCustomActionControl* FDelayItem;
	Vcl::Actnman::TCustomActionControl* FDragItem;
	bool FExpandable;
	bool FExpanded;
	bool FInMenuLoop;
	bool FItemKeyed;
	Vcl::Controls::TControl* FMouseControl;
	Vcl::Forms::TCustomForm* FParentForm;
	TCustomActionMenuBar* FParentMenu;
	Vcl::Actnman::TCustomActionControl* FParentControl;
	TMenuPopupEvent FOnPopup;
	int FExpandDelay;
	TCustomActionMenuBar* FRootMenu;
	bool FDefaultFont;
	TGetPopupClassEvent FOnGetPopupClass;
	int FAnimateDuration;
	System::Classes::TNotifyEvent FOnEnterMenuLoop;
	TExitMenuEvent FOnExitMenuLoop;
	bool FUseSystemFont;
	bool FAutoFocus;
	void __fastcall ActionIdleTimerProc(System::TObject* Sender);
	HIDESBASE MESSAGE void __fastcall WMKeyDown(Winapi::Messages::TWMKey &Message);
	MESSAGE void __fastcall CMEnterMenuLoop(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMFontchanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMItemClicked(Vcl::Actnman::TCMItemMsg &Message);
	HIDESBASE MESSAGE void __fastcall WMMouseActivate(Winapi::Messages::TWMMouseActivate &Message);
	HIDESBASE MESSAGE void __fastcall WMSysKeyDown(Winapi::Messages::TWMKey &Message);
	void __fastcall SetParentMenu(TCustomActionMenuBar* const Value);
	MESSAGE void __fastcall CMItemKeyed(Vcl::Actnman::TCMItemMsg &Message);
	void __fastcall SetAnimateDuration(const int Value);
	void __fastcall DoActionIdle();
	void __fastcall SetMouseControl(Vcl::Controls::TControl* const Value);
	void __fastcall SetUseSystemFont(const bool Value);
	
protected:
	TCustomActionPopupMenu* FCachedMenu;
	bool FCancelMenu;
	TCustomActionMenuBar* FChildMenu;
	Vcl::Extctrls::TTimer* FExpandTimer;
	System::Types::TPoint FMousePos;
	TMenuStack* FPopupStack;
	Vcl::Extctrls::TTimer* FPopupTimer;
	Vcl::Actnman::TActionClientItem* FSelectedItem;
	bool FResizing;
	void __fastcall Animate(bool Show = true);
	void __fastcall Idle(const tagMSG &Msg);
	void __fastcall ClearSubMenus();
	void __fastcall CleanupStack();
	virtual TCustomActionPopupMenu* __fastcall CreatePopup(TCustomActionMenuBar* AOwner, Vcl::Actnman::TCustomActionControl* Item);
	Vcl::Controls::TControl* __fastcall DoMouseIdle _DEPRECATED_ATTRIBUTE0 ();
	void __fastcall DoItemSelected(Vcl::Actnman::TCustomActionControl* AnItem);
	DYNAMIC TCustomPopupClass __fastcall DoGetPopupClass();
	virtual Vcl::Actnman::TActionClientItem* __fastcall DoItemClicked(Vcl::Actnman::TCustomActionControl* AnItem);
	virtual Vcl::Actnman::TActionClientItem* __fastcall DoSplitItemClicked(Vcl::Actnman::TCustomActionControl* AnItem);
	virtual Vcl::Actnman::TActionClientItem* __fastcall DoItemKeyed(Vcl::Actnman::TCustomActionControl* AnItem);
	void __fastcall DoMenuDelay(System::TObject* Sender);
	virtual void __fastcall DoneMenuLoop();
	virtual void __fastcall DoPopup(Vcl::Actnman::TCustomActionControl* Item);
	virtual void __fastcall ExecAction(System::Actions::TContainedAction* Action);
	virtual void __fastcall Expand(bool Full);
	void __fastcall ExpandTimer(System::TObject* Sender);
	void __fastcall GetDefaultSounds _DEPRECATED_ATTRIBUTE0 ();
	virtual bool __fastcall GetDesignMode();
	virtual TCustomPopupClass __fastcall GetPopupClass();
	Vcl::Actnman::TCustomActionControl* __fastcall GetMouseHoverItem(const tagMSG &Msg);
	Vcl::Actnman::TActionClientItem* __fastcall GetSelected();
	virtual void __fastcall InitMenuLoop();
	bool __fastcall IsDesignMsg(tagMSG &Msg);
	virtual void __fastcall Loaded();
	DYNAMIC System::Uitypes::TMouseActivate __fastcall MouseActivate(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y, int HitTest);
	virtual TCustomActionPopupMenu* __fastcall NewPopup();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual Vcl::Actnman::TActionClientItem* __fastcall ProcessMenuLoop();
	bool __fastcall ProcessMessage(tagMSG &Msg);
	void __fastcall ProcessMessages();
	virtual void __fastcall ProcessMouseMsg(tagMSG &Msg);
	virtual void __fastcall ScaleControlsForDpi(int NewPPI);
	void __fastcall SelectItem(Vcl::Actnman::TCustomActionControl* AnItem);
	DYNAMIC void __fastcall Select(const bool Forward);
	virtual void __fastcall SetDesignMode(const bool Value);
	virtual void __fastcall SetParent(Vcl::Controls::TWinControl* AParent);
	virtual void __fastcall SetPersistentHotKeys(const bool Value);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	__property int AnimateDuration = {read=FAnimateDuration, write=SetAnimateDuration, nodefault};
	__property Vcl::Actnman::TCustomActionControl* DelayItem = {read=FDelayItem, write=FDelayItem};
	__property bool Expandable = {read=FExpandable, write=FExpandable, nodefault};
	__property bool Expanded = {read=FExpanded, write=FExpanded, nodefault};
	__property Vcl::Controls::TControl* MouseControl = {read=FMouseControl, write=SetMouseControl};
	__property TCustomActionMenuBar* ParentMenu = {read=FParentMenu, write=SetParentMenu};
	__property Vcl::Actnman::TActionClientItem* Selected = {read=GetSelected};
	
public:
	__fastcall virtual TCustomActionMenuBar(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomActionMenuBar();
	virtual Vcl::Actnman::TCustomActionControl* __fastcall CreateControl(Vcl::Actnman::TActionClientItem* AnItem);
	virtual void __fastcall CloseMenu();
	virtual void __fastcall RecreateControls();
	virtual Vcl::Actnman::TActionBarStyle* __fastcall Style();
	virtual void __fastcall TrackMenu();
	virtual int __fastcall GetDevicePPI();
	__property TAnimationStyle AnimationStyle = {read=FAnimationStyle, write=FAnimationStyle, nodefault};
	__property bool AutoFocus = {read=FAutoFocus, write=FAutoFocus, nodefault};
	__property int ExpandDelay = {read=FExpandDelay, write=FExpandDelay, nodefault};
	__property bool InMenuLoop = {read=FInMenuLoop, write=FInMenuLoop, nodefault};
	__property Vcl::Actnman::TCustomActionControl* ParentControl = {read=FParentControl, write=FParentControl};
	__property TMenuStack* PopupStack = {read=FPopupStack};
	__property bool Resizing = {read=FResizing, nodefault};
	__property TCustomActionMenuBar* RootMenu = {read=FRootMenu, write=FRootMenu};
	__property bool UseSystemFont = {read=FUseSystemFont, write=SetUseSystemFont, nodefault};
	__property System::Classes::TNotifyEvent OnEnterMenuLoop = {read=FOnEnterMenuLoop, write=FOnEnterMenuLoop};
	__property TExitMenuEvent OnExitMenuLoop = {read=FOnExitMenuLoop, write=FOnExitMenuLoop};
	__property TGetPopupClassEvent OnGetPopupClass = {read=FOnGetPopupClass, write=FOnGetPopupClass};
	__property TMenuPopupEvent OnPopup = {read=FOnPopup, write=FOnPopup};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomActionMenuBar(HWND ParentWindow) : Vcl::Actnctrls::TCustomActionDockBar(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TCustomMenuExpandBtn : public Vcl::Actnctrls::TCustomUtilityButton
{
	typedef Vcl::Actnctrls::TCustomUtilityButton inherited;
	
private:
	TCustomActionMenuBar* __fastcall GetMenu();
	
protected:
	virtual void __fastcall DrawBackground(System::Types::TRect &PaintRect);
	virtual void __fastcall DrawFrame(const System::Types::TRect &ARect, bool Down);
	DYNAMIC void __fastcall DragOver(System::TObject* Source, int X, int Y, System::Uitypes::TDragState State, bool &Accept);
	__property TCustomActionMenuBar* Menu = {read=GetMenu};
	
public:
	__fastcall virtual TCustomMenuExpandBtn(System::Classes::TComponent* AOwner);
public:
	/* TCustomUtilityButton.Destroy */ inline __fastcall virtual ~TCustomMenuExpandBtn() { }
	
};


#ifndef _WIN64
typedef System::TMetaClass* TCustomMenuExpandBtnClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TCustomMenuExpandBtnClass);
#endif /* _WIN64 */

class PASCALIMPLEMENTATION TCustomActionPopupMenu : public TCustomActionMenuBar
{
	typedef TCustomActionMenuBar inherited;
	
private:
	Vcl::Shadowwnd::TShadowWindow* FBShadow;
	TCustomMenuExpandBtn* FExpandBtn;
	Vcl::Shadowwnd::TShadowWindow* FRShadow;
	bool FShadow;
	void __fastcall SetShadow(const bool Value);
	
protected:
	virtual void __fastcall AddEdges(TCustomMenuItem* AnItem);
	virtual void __fastcall DrawBackground();
	virtual bool __fastcall CanAutoSize(int &NewWidth, int &NewHeight);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMVisibleChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMNCPaint(Winapi::Messages::TWMNCPaint &Message);
	virtual void __fastcall CreateControls();
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall DisplayShadow();
	virtual void __fastcall ExecAction(System::Actions::TContainedAction* Action);
	void __fastcall ExpandClick(System::TObject* Sender);
	virtual System::Types::TRect __fastcall GetClientRect();
	virtual TCustomMenuExpandBtnClass __fastcall GetExpandBtnClass();
	virtual void __fastcall HideShadow();
	virtual TCustomActionPopupMenu* __fastcall NewPopup();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall PositionPopup(Vcl::Actnman::TCustomActionBar* AnOwner, Vcl::Actnman::TCustomActionControl* ParentItem);
	virtual void __fastcall SetColorMap(Vcl::Actnman::TCustomActionBarColorMap* const Value);
	void __fastcall SetupExpandBtn();
	virtual void __fastcall SetOrientation(const Vcl::Actnman::TBarOrientation Value);
	HIDESBASE MESSAGE void __fastcall WMKeyDown(Winapi::Messages::TWMKey &Message);
	MESSAGE void __fastcall WMPrint(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMPrintClient(Winapi::Messages::TWMPrint &Message);
	DYNAMIC Vcl::Actnman::TBarOrientations __fastcall ValidOrientations();
	DYNAMIC void __fastcall VisibleChanging();
	virtual void __fastcall AdjustFont();
	
public:
	__fastcall virtual TCustomActionPopupMenu(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomActionPopupMenu();
	DYNAMIC bool __fastcall DesignWndProc(Winapi::Messages::TMessage &Message);
	virtual Vcl::Actnman::TCustomActionControl* __fastcall CreateControl(Vcl::Actnman::TActionClientItem* AnItem);
	virtual void __fastcall CloseMenu();
	virtual void __fastcall Expand(bool Full);
	void __fastcall Popup(int X, int Y);
	virtual int __fastcall GetDevicePPI();
	virtual Vcl::Themes::TCustomStyleServices* __fastcall StyleServices();
	__property TCustomMenuExpandBtn* ExpandBtn = {read=FExpandBtn, write=FExpandBtn};
	__property bool Shadow = {read=FShadow, write=SetShadow, nodefault};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomActionPopupMenu(HWND ParentWindow) : TCustomActionMenuBar(ParentWindow) { }
	
};


#ifndef _WIN64
typedef System::TMetaClass* TCustomizeActionToolBarClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TCustomizeActionToolBarClass);
#endif /* _WIN64 */

class PASCALIMPLEMENTATION TCustomizeActionToolBar : public TCustomActionPopupMenu
{
	typedef TCustomActionPopupMenu inherited;
	
private:
	Vcl::Actnman::TActionClientItem* FAddlItem;
	Vcl::Actnlist::TCustomAction* FResetAction;
	Vcl::Actnman::TActionClientItem* FResetItem;
	MESSAGE void __fastcall CMItemSelected(Vcl::Actnman::TCMItemMsg &Message);
	
protected:
	Vcl::Actnctrls::TCustomActionToolBar* FActionBar;
	virtual bool __fastcall CanAutoSize(int &NewWidth, int &NewHeight);
	virtual void __fastcall Clear();
	virtual void __fastcall DoAddCustomizeItems(Vcl::Actnman::TActionClient* const AnActionClient);
	virtual Vcl::Actnman::TActionClientItem* __fastcall DoItemClicked(Vcl::Actnman::TCustomActionControl* AnItem);
	virtual TCustomAddRemoveItemClass __fastcall GetAddRemoveItemClass();
	virtual Vcl::Actnman::TCustomActionControl* __fastcall GetActionControl(const int Index);
	virtual void __fastcall GetSubMenuControlClass(Vcl::Actnman::TCustomActionBar* Sender, Vcl::Actnman::TActionClient* AnItem, Vcl::Actnman::TCustomActionControlClass &ControlClass);
	virtual TCustomActionPopupMenu* __fastcall NewPopup();
	virtual void __fastcall SetActionClient(Vcl::Actnman::TActionClient* const Value);
	__property Vcl::Actnman::TActionClientItem* AddlItem = {read=FAddlItem};
	
public:
	__fastcall virtual TCustomizeActionToolBar(System::Classes::TComponent* AOwner);
	virtual int __fastcall ItemCount();
	__fastcall virtual ~TCustomizeActionToolBar();
	__property Vcl::Actnman::TActionClientItem* AdditionalItem = {read=FAddlItem};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomizeActionToolBar(HWND ParentWindow) : TCustomActionPopupMenu(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TCustomizeActionLink : public Vcl::Actnman::TActionClientLink
{
	typedef Vcl::Actnman::TActionClientLink inherited;
	
protected:
	virtual void __fastcall SetEnabled(bool Value);
public:
	/* TBasicActionLink.Create */ inline __fastcall virtual TCustomizeActionLink(System::TObject* AClient) : Vcl::Actnman::TActionClientLink(AClient) { }
	/* TBasicActionLink.Destroy */ inline __fastcall virtual ~TCustomizeActionLink() { }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCustomizeActionClientItem : public Vcl::Actnman::TActionClientItem
{
	typedef Vcl::Actnman::TActionClientItem inherited;
	
protected:
	DYNAMIC Vcl::Actnman::TActionClientLinkClass __fastcall GetActionLinkClass();
public:
	/* TActionClientItem.Create */ inline __fastcall virtual TCustomizeActionClientItem(System::Classes::TCollection* Collection) : Vcl::Actnman::TActionClientItem(Collection) { }
	/* TActionClientItem.Destroy */ inline __fastcall virtual ~TCustomizeActionClientItem() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TMDIButtonStyle : unsigned char { mbMinimize, mbRestore, mbClose };

class PASCALIMPLEMENTATION TCustomMDIMenuButton : public Vcl::Buttons::TSpeedButton
{
	typedef Vcl::Buttons::TSpeedButton inherited;
	
private:
	TMDIButtonStyle FButtonStyle;
	
protected:
	virtual void __fastcall Paint();
	
public:
	__property TMDIButtonStyle ButtonStyle = {read=FButtonStyle, write=FButtonStyle, nodefault};
public:
	/* TCustomSpeedButton.Create */ inline __fastcall virtual TCustomMDIMenuButton(System::Classes::TComponent* AOwner) : Vcl::Buttons::TSpeedButton(AOwner) { }
	/* TCustomSpeedButton.Destroy */ inline __fastcall virtual ~TCustomMDIMenuButton() { }
	
};


class PASCALIMPLEMENTATION TCustomActionMainMenuBar : public TCustomActionMenuBar
{
	typedef TCustomActionMenuBar inherited;
	
private:
	Vcl::Actnlist::TActionList* FMDIActions;
	bool FMDIActivate;
	bool FInActive;
	bool FShadows;
	System::UnicodeString FWindowMenu;
	TCustomMDIMenuButton* FMinimizeBtn;
	TCustomMDIMenuButton* FRestoreBtn;
	TCustomMDIMenuButton* FCloseBtn;
	Vcl::Actnman::TActionClientItem* FMDISeparator;
	void __fastcall SetInActive(const bool Value);
	HIDESBASE MESSAGE void __fastcall CMEnabledchanged(Winapi::Messages::TMessage &Message);
	void __fastcall SetWindowMenu(const System::UnicodeString Value);
	void __fastcall SetShadows(const bool Value);
	
protected:
	Vcl::Actnman::TActionClientItem* FWindowMenuItem;
	virtual void __fastcall Clear();
	virtual void __fastcall CreateControls();
	virtual void __fastcall CustomAlignPosition(Vcl::Controls::TControl* Control, int &NewLeft, int &NewTop, int &NewWidth, int &NewHeight, System::Types::TRect &AlignRect, const Vcl::Controls::TAlignInfo &AlignInfo);
	virtual void __fastcall DoneMenuLoop();
	void __fastcall GetActiveMDIChild();
	void __fastcall MDIChildMaximized(Vcl::Forms::TCustomForm* ChildForm);
	void __fastcall MDIChildRestored();
	virtual TCustomActionPopupMenu* __fastcall NewPopup();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall ProcessMouseMsg(tagMSG &Msg);
	void __fastcall RefreshMDIMenu();
	virtual void __fastcall SetDesignMode(const bool Value);
	void __fastcall SetupWindowMenu();
	HIDESBASE MESSAGE void __fastcall CMWininichange(Winapi::Messages::TWMWinIniChange &Message);
	HIDESBASE MESSAGE void __fastcall WMKeyDown(Winapi::Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall WMNCHitTest(Winapi::Messages::TWMNCHitTest &Message);
	HIDESBASE MESSAGE void __fastcall WMSysCommand(Winapi::Messages::TWMSysCommand &Message);
	HIDESBASE MESSAGE void __fastcall WMSysKeyDown(Winapi::Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall WMSysKeyUp(Winapi::Messages::TWMKey &Message);
	bool __fastcall MainWndHook(Winapi::Messages::TMessage &Message);
	virtual void __fastcall DrawBackground();
	DYNAMIC void __fastcall ChangeScale(int M, int D, bool isDpiChange)/* overload */;
	
public:
	__fastcall virtual TCustomActionMainMenuBar(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomActionMainMenuBar();
	virtual Vcl::Actnman::TCustomActionControl* __fastcall CreateControl(Vcl::Actnman::TActionClientItem* AnItem);
	DYNAMIC bool __fastcall CanFocus();
	virtual void __fastcall CloseMenu();
	DYNAMIC bool __fastcall DesignWndProc(Winapi::Messages::TMessage &Message);
	virtual void __fastcall TrackMenu();
	__property bool Inactive = {read=FInActive, write=SetInActive, nodefault};
	__property PersistentHotKeys;
	__property bool Shadows = {read=FShadows, write=SetShadows, default=1};
	__property System::UnicodeString WindowMenu = {read=FWindowMenu, write=SetWindowMenu};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomActionMainMenuBar(HWND ParentWindow) : TCustomActionMenuBar(ParentWindow) { }
	
	/* Hoisted overloads: */
	
protected:
	DYNAMIC inline void __fastcall  ChangeScale(int M, int D){ Vcl::Controls::TControl::ChangeScale(M, D); }
	
};


class PASCALIMPLEMENTATION TActionMainMenuBar : public TCustomActionMainMenuBar
{
	typedef TCustomActionMainMenuBar inherited;
	
public:
	__property Canvas;
	
__published:
	__property UseSystemFont = {default=1};
	__property ActionManager;
	__property Align = {default=1};
	__property AllowHiding = {default=0};
	__property Anchors = {default=3};
	__property AnimateDuration = {default=150};
	__property AnimationStyle = {default=1};
	__property AutoFocus = {default=1};
	__property BiDiMode = {default=0};
	__property Caption = {default=0};
	__property Color = {default=-16777201};
	__property ColorMap;
	__property Constraints;
	__property DragCursor = {default=-12};
	__property DragKind = {default=1};
	__property DragMode = {default=0};
	__property EdgeBorders = {default=0};
	__property EdgeInner = {default=1};
	__property EdgeOuter = {default=2};
	__property Enabled = {default=1};
	__property ExpandDelay = {default=4000};
	__property Font;
	__property HorzMargin = {default=1};
	__property ParentBiDiMode = {default=1};
	__property ParentBackground = {default=0};
	__property ParentColor = {default=0};
	__property ParentFont = {default=0};
	__property ParentShowHint = {default=1};
	__property PersistentHotKeys = {default=0};
	__property Shadows = {default=1};
	__property ShowHint;
	__property StyleName = {default=0};
	__property Spacing;
	__property Touch;
	__property VertMargin = {default=1};
	__property Visible = {default=1};
	__property WindowMenu = {default=0};
	__property OnAlignInsertBefore;
	__property OnAlignPosition;
	__property OnCanResize;
	__property OnClick;
	__property OnControlCreated;
	__property OnConstrainedResize;
	__property OnContextPopup;
	__property OnDockDrop;
	__property OnDockOver;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnEnterMenuLoop;
	__property OnExit;
	__property OnExitMenuLoop;
	__property OnGesture;
	__property OnGetControlClass;
	__property OnGetPopupClass;
	__property OnGetSiteInfo;
	__property OnMouseActivate;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnPaint;
	__property OnPopup;
	__property OnResize;
	__property OnStartDock;
	__property OnStartDrag;
	__property OnUnDock;
public:
	/* TCustomActionMainMenuBar.Create */ inline __fastcall virtual TActionMainMenuBar(System::Classes::TComponent* AOwner) : TCustomActionMainMenuBar(AOwner) { }
	/* TCustomActionMainMenuBar.Destroy */ inline __fastcall virtual ~TActionMainMenuBar() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TActionMainMenuBar(HWND ParentWindow) : TCustomActionMainMenuBar(ParentWindow) { }
	
};


typedef System::Set<Vcl::Toolwin::TEdgeBorder, Vcl::Toolwin::TEdgeBorder::ebLeft, Vcl::Toolwin::TEdgeBorder::ebBottom> TMenuEdges;

class PASCALIMPLEMENTATION TCustomMenuItem : public Vcl::Actnman::TCustomActionControl
{
	typedef Vcl::Actnman::TCustomActionControl inherited;
	
private:
	TMenuEdges FEdges;
	TCustomActionMenuBar* FMenu;
	bool FMouseSelected;
	System::Types::TRect FShortCutBounds;
	int FCYMenu;
	void __fastcall SetEdges(const TMenuEdges Value);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMTextchanged(Winapi::Messages::TMessage &Message);
	
protected:
	System::UnicodeString FNoPrefix;
	virtual void __fastcall CalcLayout();
	virtual void __fastcall DoDragDrop(System::TObject* DragObject, int X, int Y);
	virtual void __fastcall DrawEdge(TMenuEdges Edges);
	virtual void __fastcall DrawSubMenuGlyph();
	virtual void __fastcall DrawShadowedText(const System::Types::TRect &Rect, unsigned Flags, System::UnicodeString Text, System::Uitypes::TColor TextColor, System::Uitypes::TColor ShadowColor);
	virtual void __fastcall DrawText(System::Types::TRect &ARect, unsigned &Flags, System::UnicodeString Text);
	virtual void __fastcall DrawUnusedEdges();
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall Paint();
	virtual void __fastcall PositionChanged();
	virtual void __fastcall SetSelected(bool Value);
	DYNAMIC void __fastcall DragOver(System::TObject* Source, int X, int Y, System::Uitypes::TDragState State, bool &Accept);
	__property TCustomActionMenuBar* Menu = {read=FMenu};
	__property bool MouseSelected = {read=FMouseSelected, nodefault};
	__property System::Types::TRect ShortCutBounds = {read=FShortCutBounds, write=FShortCutBounds};
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	
public:
	__fastcall virtual TCustomMenuItem(System::Classes::TComponent* AOwner);
	virtual void __fastcall CalcBounds();
	DYNAMIC void __fastcall Click();
	__fastcall virtual ~TCustomMenuItem();
	virtual void __fastcall Keyed();
	DYNAMIC void __fastcall DragDrop(System::TObject* Source, int X, int Y);
	virtual int __fastcall GetDevicePPI();
	virtual Vcl::Themes::TCustomStyleServices* __fastcall StyleSerives();
	__property TMenuEdges Edges = {read=FEdges, write=SetEdges, nodefault};
};


class PASCALIMPLEMENTATION TCustomMenuButton : public Vcl::Actnctrls::TCustomButtonControl
{
	typedef Vcl::Actnctrls::TCustomButtonControl inherited;
	
private:
	bool FCloseMenu;
	bool FDoClick;
	TCustomActionMenuBar* __fastcall GetMenu();
	HIDESBASE MESSAGE void __fastcall CMDialogChar(Winapi::Messages::TWMKey &Message);
	
protected:
	DYNAMIC void __fastcall BeginAutoDrag();
	virtual void __fastcall DoDragDrop(System::TObject* DragObject, int X, int Y);
	DYNAMIC void __fastcall DragOver(System::TObject* Source, int X, int Y, System::Uitypes::TDragState State, bool &Accept);
	virtual void __fastcall DrawText(System::Types::TRect &ARect, unsigned &Flags, System::UnicodeString Text);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Winapi::Messages::TMessage &Message);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall Paint();
	__property TCustomActionMenuBar* Menu = {read=GetMenu};
	
public:
	__fastcall virtual TCustomMenuButton(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomMenuButton();
	DYNAMIC void __fastcall Click();
	virtual void __fastcall Keyed();
};


class PASCALIMPLEMENTATION TCustomAddRemoveItem : public TCustomMenuItem
{
	typedef TCustomMenuItem inherited;
	
protected:
	bool __fastcall IsActionVisible();
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall SetEnabled(bool Value);
	
public:
	virtual void __fastcall CalcBounds();
public:
	/* TCustomMenuItem.Create */ inline __fastcall virtual TCustomAddRemoveItem(System::Classes::TComponent* AOwner) : TCustomMenuItem(AOwner) { }
	/* TCustomMenuItem.Destroy */ inline __fastcall virtual ~TCustomAddRemoveItem() { }
	
};


#ifndef _WIN64
typedef System::TMetaClass* TMenuItemControlClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TMenuItemControlClass);
#endif /* _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TAddRemoveItemClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TAddRemoveItemClass);
#endif /* _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TMenuButtonControlClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TMenuButtonControlClass);
#endif /* _WIN64 */

typedef void __fastcall (*TUpdateActnMenusProc)(void);

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE TMenuItemControlClass MenuItemControlClass _DEPRECATED_ATTRIBUTE0 ;
extern DELPHI_PACKAGE TAddRemoveItemClass MenuAddRemoveItemClass _DEPRECATED_ATTRIBUTE0 ;
extern DELPHI_PACKAGE TMenuButtonControlClass MenuButtonControlClass _DEPRECATED_ATTRIBUTE0 ;
extern DELPHI_PACKAGE TCustomPopupClass MenuPopupClass _DEPRECATED_ATTRIBUTE0 ;
extern DELPHI_PACKAGE TCustomizeActionToolBarClass MenuCustomizePopupClass _DEPRECATED_ATTRIBUTE0 ;
extern DELPHI_PACKAGE TUpdateActnMenusProc UpdateActnMenusProc;
extern DELPHI_PACKAGE bool EnableWMGETOBJECT;
extern DELPHI_PACKAGE void __fastcall RegisterActnBarStyle(TActionBarStyleEx* AStyle);
extern DELPHI_PACKAGE void __fastcall UnRegisterActnBarStyle(TActionBarStyleEx* AStyle);
}	/* namespace Actnmenus */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_ACTNMENUS)
using namespace Vcl::Actnmenus;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_ActnmenusHPP
