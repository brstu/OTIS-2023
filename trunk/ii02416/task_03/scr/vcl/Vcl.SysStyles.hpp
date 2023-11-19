// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.SysStyles.pas' rev: 35.00 (Windows)

#ifndef Vcl_SysstylesHPP
#define Vcl_SysstylesHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.Types.hpp>
#include <System.SysUtils.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <Winapi.UxTheme.hpp>
#include <Vcl.Themes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.GraphUtil.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Menus.hpp>
#include <System.Math.hpp>
#include <Winapi.CommCtrl.hpp>
#include <Winapi.RichEdit.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Sysstyles
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TSysPopupStyleHook;
class DELPHICLASS TSysScrollingStyleHook;
class DELPHICLASS TSysDialogStyleHook;
class DELPHICLASS TSysScrollBarStyleHook;
class DELPHICLASS TSysButtonStyleHook;
class DELPHICLASS TSysEditStyleHook;
class DELPHICLASS TSysComboBoxStyleHook;
class DELPHICLASS TSysListBoxStyleHook;
class DELPHICLASS TSysStaticStyleHook;
class DELPHICLASS TSysListViewStyleHook;
class DELPHICLASS TSysTreeViewStyleHook;
class DELPHICLASS TSysTabControlStyleHook;
class DELPHICLASS TSysRichEditStyleHook;
class DELPHICLASS TSysReBarStyleHook;
class DELPHICLASS TSysStatusBarStyleHook;
class DELPHICLASS TSysTrackBarStyleHook;
class DELPHICLASS TSysToolbarStyleHook;
class DELPHICLASS TSysProgressBarStyleHook;
class DELPHICLASS TSysUpDownStyleHook;
class DELPHICLASS TSysLinkStyleHook;
class DELPHICLASS TSysTooltipsStyleHook;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM Vcl_Sysstyles__1 : unsigned char { isHot, isDisabled, isChecked, isDefault };

typedef System::Set<Vcl_Sysstyles__1, Vcl_Sysstyles__1::isHot, Vcl_Sysstyles__1::isDefault> TSysPopupItemState;

enum DECLSPEC_DENUM TSysPopupItemStyle : unsigned char { isNormal, isSep, isDropDown };

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TSysPopupStyleHook : public Vcl::Themes::TSysStyleHook
{
	typedef Vcl::Themes::TSysStyleHook inherited;
	
	
private:
	class DELPHICLASS TSysPopupItem;
	class PASCALIMPLEMENTATION TSysPopupItem : public System::TObject
	{
		typedef System::TObject inherited;
		
	private:
		int FIndex;
		Vcl::Menus::TMenuItem* FVCLMenuItem;
		HMENU FMenu;
		HWND FHandle;
		Vcl::Themes::TSysControl* FSysParent;
		System::Types::TRect __fastcall GetItemRect();
		bool __fastcall IsItemDisabled();
		bool __fastcall IsItemContainsSubMenu();
		bool __fastcall IsItemSeparator();
		bool __fastcall isItemChecked();
		bool __fastcall isItemDefault();
		System::UnicodeString __fastcall GetItemText();
		Vcl::Menus::TMenuItem* __fastcall GetVCLParentMenuItem();
		HBITMAP __fastcall GetItemBitmap();
		bool __fastcall IsItemRadioCheck();
		
	public:
		__fastcall virtual TSysPopupItem(Vcl::Themes::TSysControl* SysParent, int Index, HMENU Menu);
		__fastcall virtual ~TSysPopupItem();
		__property System::Types::TRect ItemRect = {read=GetItemRect};
		__property bool Disabled = {read=IsItemDisabled, nodefault};
		__property bool Separator = {read=IsItemSeparator, nodefault};
		__property bool HasSubMenu = {read=IsItemContainsSubMenu, nodefault};
		__property bool Checked = {read=isItemChecked, nodefault};
		__property bool RadioCheck = {read=IsItemRadioCheck, nodefault};
		__property bool DefaultItem = {read=isItemDefault, nodefault};
		__property System::UnicodeString Text = {read=GetItemText};
		__property Vcl::Menus::TMenuItem* VCLMenuItem = {read=FVCLMenuItem};
#ifndef _WIN64
		__property HBITMAP Bitmap = {read=GetItemBitmap, nodefault};
#else /* _WIN64 */
		__property HBITMAP Bitmap = {read=GetItemBitmap};
#endif /* _WIN64 */
	};
	
	
	
private:
	bool FItemsPainted;
	bool FMouseDown;
	bool FMouseTracking;
	bool FParentSubItemPainted;
	int FPreviousHotItemIndex;
	int FKeyIndex;
	TSysPopupItem* FSysPopupItem;
	int FCount;
	HMENU FMenu;
	bool FIsDWMEnabled;
	HMENU __fastcall GetMenuFromHandle(HWND AHandle);
	int __fastcall GetItemsCount();
	MESSAGE void __fastcall MNSELECTITEM(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMPRINT(Winapi::Messages::TMessage &Message);
	TSysPopupItem* __fastcall GetSysPopupItem(int Index);
	bool __fastcall GetRightToLeft();
	
protected:
	virtual void __fastcall EraseItem(Vcl::Graphics::TCanvas* Canvas, int Index, const System::Types::TRect &ItemRect);
	void __fastcall DoDrawItem(Vcl::Graphics::TCanvas* Canvas, int Index);
	virtual void __fastcall DrawItem(Vcl::Graphics::TCanvas* Canvas, int Index, const System::Types::TRect &ItemRect, System::UnicodeString ItemText, TSysPopupItemState State, TSysPopupItemStyle Style);
	virtual void __fastcall PaintBackground(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	virtual void __fastcall UpdateColors();
	
public:
	__fastcall virtual TSysPopupStyleHook(NativeUInt AHandle);
	__fastcall virtual ~TSysPopupStyleHook();
#ifndef _WIN64
	__property HMENU Menu = {read=FMenu, nodefault};
#else /* _WIN64 */
	__property HMENU Menu = {read=FMenu};
#endif /* _WIN64 */
	__property TSysPopupItem* Items[int Index] = {read=GetSysPopupItem};
	__property int Count = {read=FCount, nodefault};
	__property bool RightToLeft = {read=GetRightToLeft, nodefault};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TSysScrollingType : unsigned char { skNone, skTracking, skLineUp, skLineDown, skLineLeft, skLineRight, skPageUp, skPageDown, skPageLeft, skPageRight };

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TSysScrollingStyleHook : public Vcl::Themes::TMouseTrackSysControlStyleHook
{
	typedef Vcl::Themes::TMouseTrackSysControlStyleHook inherited;
	
private:
	int FTimerMode;
	bool FVertScrollBar;
	bool FHorzScrollBar;
	System::Types::TPoint FPrevPoint;
	int FPrevPos;
	int FDownDis;
	System::Types::TPoint FDownPoint;
	int FTrackingPos;
	System::Types::TRect FTrackingRect;
	bool FTracking;
	TSysScrollingType FScrollingType;
	Vcl::Forms::TScrollBarKind FScrollKind;
	Vcl::Themes::TThemedScrollBar FBtnUpDetail;
	Vcl::Themes::TThemedScrollBar FBtnDownDetail;
	Vcl::Themes::TThemedScrollBar FVertBtnSliderDetail;
	Vcl::Themes::TThemedScrollBar FBtnLeftDetail;
	Vcl::Themes::TThemedScrollBar FBtnRightDetail;
	Vcl::Themes::TThemedScrollBar FHorzBtnSliderDetail;
	bool FNCMouseDown;
	bool FAllowScrolling;
	int FLstPos;
	System::Types::TSize __fastcall GetDefaultScrollBarSize();
	MESSAGE void __fastcall WMNCHitTest(Winapi::Messages::TWMNCHitTest &Message);
	MESSAGE void __fastcall WMNCCalcSize(Winapi::Messages::TWMNCCalcSize &Message);
	MESSAGE void __fastcall WMNCLButtonDown(Winapi::Messages::TWMNCHitMessage &Message);
	MESSAGE void __fastcall WMNCLButtonUp(Winapi::Messages::TWMNCHitMessage &Message);
	MESSAGE void __fastcall CMSCROLLTRACKING(Winapi::Messages::TMessage &Message);
	System::Types::TRect __fastcall GetVertScrollRect();
	System::Types::TRect __fastcall GetVertUpRect();
	System::Types::TRect __fastcall GetVertDownRect();
	System::Types::TRect __fastcall GetVertSliderRect();
	int __fastcall GetVertSliderPos();
	int __fastcall GetVertThumbSize();
	System::Types::TRect __fastcall GetVertTrackRect();
	tagSCROLLINFO __fastcall GetVertScrollInfo();
	int __fastcall GetVertThumbPosFromPos(const int Pos);
	int __fastcall GetVertScrollPosFromPoint(const System::Types::TPoint &P);
	int __fastcall GetHorzThumbPosFromPos(const int Pos);
	int __fastcall GetHorzScrollPosFromPoint(const System::Types::TPoint &P);
	int __fastcall GetHorzSliderPos();
	int __fastcall GetHorzThumbSize();
	System::Types::TRect __fastcall GetHorzLeftRect();
	tagSCROLLINFO __fastcall GetHorzScrollInfo();
	System::Types::TRect __fastcall GetHorzSliderRect();
	System::Types::TRect __fastcall GetHorzTrackRect();
	System::Types::TRect __fastcall GetHorzRightRect();
	System::Types::TRect __fastcall GetHorzScrollRect();
	bool __fastcall IsLeftScrollBar();
	bool __fastcall IsHorzScrollDisabled();
	bool __fastcall IsVertScrollDisabled();
	
protected:
	__property int LstPos = {read=FLstPos, write=FLstPos, nodefault};
	__property bool AllowScrolling = {read=FAllowScrolling, write=FAllowScrolling, nodefault};
	System::Types::TPoint __fastcall NormalizePoint(const System::Types::TPoint &P);
	virtual void __fastcall Scroll(const Vcl::Forms::TScrollBarKind Kind, const TSysScrollingType ScrollType, int Pos, int Delta);
	void __fastcall DoScroll(const Vcl::Forms::TScrollBarKind Kind, const TSysScrollingType ScrollType, int Pos, int Delta);
	virtual void __fastcall DrawHorzScroll(HDC DC);
	virtual void __fastcall DrawVertScroll(HDC DC);
	virtual void __fastcall DrawSmallRect(HDC DC, const System::Types::TRect &SmallRect);
	virtual void __fastcall MouseEnter();
	virtual void __fastcall MouseLeave();
	void __fastcall StartSliderTrackTimer();
	virtual void __fastcall StopTrackTimer();
	void __fastcall StartPageTrackTimer();
	void __fastcall StartLineTrackTimer();
	void __fastcall DoPageTrackTimer();
	void __fastcall DoSliderTrackTimer();
	void __fastcall DoLineTrackTimer();
	void __fastcall InitScrollState();
	virtual void __fastcall PaintNC(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	
public:
	__fastcall virtual TSysScrollingStyleHook(NativeUInt AHandle);
	__fastcall virtual ~TSysScrollingStyleHook();
	__property System::Types::TRect VertScrollRect = {read=GetVertScrollRect};
	__property System::Types::TRect VertUpRect = {read=GetVertUpRect};
	__property System::Types::TRect VertDownRect = {read=GetVertDownRect};
	__property System::Types::TRect VertSliderRect = {read=GetVertSliderRect};
	__property System::Types::TRect VertTrackRect = {read=GetVertTrackRect};
	__property tagSCROLLINFO VertScrollInfo = {read=GetVertScrollInfo};
	__property System::Types::TRect HorzScrollRect = {read=GetHorzScrollRect};
	__property System::Types::TRect HorzLeftRect = {read=GetHorzLeftRect};
	__property System::Types::TRect HorzRightRect = {read=GetHorzRightRect};
	__property System::Types::TRect HorzSliderRect = {read=GetHorzSliderRect};
	__property System::Types::TRect HorzTrackRect = {read=GetHorzTrackRect};
	__property tagSCROLLINFO HorzScrollInfo = {read=GetHorzScrollInfo};
	__property System::Types::TSize BtnSize = {read=GetDefaultScrollBarSize};
	__property bool Tracking = {read=FTracking, nodefault};
	__property System::Types::TRect TrackingRect = {read=FTrackingRect};
	__property int TrackingPos = {read=FTrackingPos, nodefault};
	__property bool LeftScrollBar = {read=IsLeftScrollBar, nodefault};
	__property bool VertScrollDisabled = {read=IsVertScrollDisabled, nodefault};
	__property bool HorzScrollDisabled = {read=IsHorzScrollDisabled, nodefault};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TSysDialogStyleHook : public TSysScrollingStyleHook
{
	typedef TSysScrollingStyleHook inherited;
	
private:
	bool FFrameActive;
	int FPressedButton;
	int FHotButton;
	Vcl::Graphics::TIcon* FIcon;
	HICON FIconHandle;
	System::Types::TRect FCaptionRect;
	System::Types::TRect FSysMenuButtonRect;
	HRGN FRegion;
	int FWidth;
	int FHeight;
	bool FSysCloseButtonDisabled;
	int FCaptionHeight;
	int FPPI;
	System::Types::TRect FCloseButtonRect;
	System::Types::TRect FMinButtonRect;
	System::Types::TRect FMaxButtonRect;
	System::Types::TRect FHelpButtonRect;
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMNCHitTest(Winapi::Messages::TWMNCHitTest &Message);
	HIDESBASE MESSAGE void __fastcall WMNCLButtonDown(Winapi::Messages::TWMNCHitMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMNCLButtonUp(Winapi::Messages::TWMNCHitMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMNCMouseMove(Winapi::Messages::TWMNCHitMessage &Message);
	MESSAGE void __fastcall WMNCACTIVATE(Winapi::Messages::TWMNCActivate &Message);
	HIDESBASE MESSAGE void __fastcall WMNCCalcSize(Winapi::Messages::TWMNCCalcSize &Message);
	MESSAGE void __fastcall WMSIZE(Winapi::Messages::TWMSize &Message);
	MESSAGE void __fastcall WMSetText(Winapi::Messages::TMessage &Message);
	System::Types::TRect __fastcall GetCaptionRect();
	Vcl::Forms::TFormBorderStyle __fastcall GetBorderStyle();
	System::Uitypes::TBorderIcons __fastcall GetBorderIcons();
	System::Types::TRect __fastcall GetCloseButtonRect();
	System::Types::TRect __fastcall GetMaxButtonRect();
	System::Types::TRect __fastcall GetMinButtonRect();
	System::Types::TRect __fastcall GetHelpButtonRect();
	System::Types::TRect __fastcall GetSysMenuButtonRect();
	System::Uitypes::TWindowState __fastcall GetWindowState();
	bool __fastcall UseSmallBorder();
	HRGN __fastcall GetRegion();
	Vcl::Graphics::TIcon* __fastcall GetIcon();
	Vcl::Graphics::TIcon* __fastcall GetIconFast();
	HIDESBASE System::Types::TPoint __fastcall NormalizePoint(const System::Types::TPoint &P);
	int __fastcall GetHitTest(const System::Types::TPoint &P);
	bool __fastcall IsSysCloseButtonDisabled();
	HMENU __fastcall GetSysMenu();
	bool __fastcall GetUpdateRegion();
	
protected:
	virtual void __fastcall DrawBorder(Vcl::Graphics::TCanvas* Canvas);
	virtual System::Types::TRect __fastcall GetBorderSize();
	virtual void __fastcall PaintBackground(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall Paint(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall PaintNC(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	virtual void __fastcall MouseLeave();
	virtual void __fastcall Close();
	virtual void __fastcall Help();
	virtual void __fastcall Maximize();
	virtual void __fastcall Minimize();
	virtual void __fastcall Restore();
	__property int PressedButton = {read=FPressedButton, write=FPressedButton, nodefault};
	__property int HotButton = {read=FHotButton, write=FHotButton, nodefault};
	
public:
	__fastcall virtual TSysDialogStyleHook(NativeUInt AHandle);
	__fastcall virtual ~TSysDialogStyleHook();
	__property System::Types::TRect CaptionRect = {read=GetCaptionRect};
	__property bool UpdateRegion = {read=GetUpdateRegion, nodefault};
	__property Vcl::Forms::TFormBorderStyle BorderStyle = {read=GetBorderStyle, nodefault};
	__property System::Types::TRect BorderSize = {read=GetBorderSize};
	__property System::Uitypes::TBorderIcons BorderIcons = {read=GetBorderIcons, nodefault};
	__property System::Uitypes::TWindowState WindowState = {read=GetWindowState, nodefault};
	__property System::Types::TRect CloseButtonRect = {read=GetCloseButtonRect};
	__property System::Types::TRect MaxButtonRect = {read=GetMaxButtonRect};
	__property System::Types::TRect MinButtonRect = {read=GetMinButtonRect};
	__property System::Types::TRect HelpButtonRect = {read=GetHelpButtonRect};
	__property System::Types::TRect SysMenuButtonRect = {read=GetSysMenuButtonRect};
	__property Vcl::Graphics::TIcon* Icon = {read=GetIconFast};
#ifndef _WIN64
	__property HMENU SysMenu = {read=GetSysMenu, nodefault};
#else /* _WIN64 */
	__property HMENU SysMenu = {read=GetSysMenu};
#endif /* _WIN64 */
	__property bool SysCloseButtonDisabled = {read=FSysCloseButtonDisabled, nodefault};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TSysScrollBarStyleHook : public Vcl::Themes::TSysStyleHook
{
	typedef Vcl::Themes::TSysStyleHook inherited;
	
protected:
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	
public:
	__fastcall virtual TSysScrollBarStyleHook(NativeUInt AHandle);
public:
	/* TSysStyleHook.Destroy */ inline __fastcall virtual ~TSysScrollBarStyleHook() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TSysCheckBoxState : unsigned char { cbUnchecked, cbChecked, cbGrayed };

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TSysButtonStyleHook : public Vcl::Themes::TMouseTrackSysControlStyleHook
{
	typedef Vcl::Themes::TMouseTrackSysControlStyleHook inherited;
	
private:
	System::Types::TRect __fastcall GetCaptionRect(Vcl::Graphics::TCanvas* Canvas);
	System::Types::TRect __fastcall GetBoxRect();
	bool __fastcall IsCheckBox();
	bool __fastcall IsRadioButton();
	bool __fastcall IsGroupBox();
	bool __fastcall IsPushButton();
	bool __fastcall IsSplitButton();
	bool __fastcall IsCommandButton();
	bool __fastcall GetShowText();
	TSysCheckBoxState __fastcall GetCheckBoxState();
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMNCPaint(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TMessage &Message);
	bool __fastcall IsOwnerDraw();
	
protected:
	virtual void __fastcall DrawCheckBoxText(HDC DC, System::UnicodeString Text, const Vcl::Themes::TThemedElementDetails &LDetails, const System::Types::TRect &R);
	virtual void __fastcall PaintButton(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall PaintCheckBox(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall PaintRadioButton(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall PaintGroupBox(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall MouseEnter();
	virtual void __fastcall MouseLeave();
	virtual void __fastcall Paint(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall PaintNC(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall PaintBackground(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	virtual void __fastcall UpdateColors();
	
public:
	__fastcall virtual TSysButtonStyleHook(NativeUInt AHandle);
	__property bool CheckBox = {read=IsCheckBox, nodefault};
	__property bool CommandButton = {read=IsCommandButton, nodefault};
	__property bool RadioButton = {read=IsRadioButton, nodefault};
	__property bool GroupBox = {read=IsGroupBox, nodefault};
	__property bool PushButton = {read=IsPushButton, nodefault};
	__property bool SplitButton = {read=IsSplitButton, nodefault};
	__property TSysCheckBoxState CheckBoxState = {read=GetCheckBoxState, nodefault};
	__property bool ShowText = {read=GetShowText, nodefault};
	__property bool OwnerDraw = {read=IsOwnerDraw, nodefault};
public:
	/* TMouseTrackSysControlStyleHook.Destroy */ inline __fastcall virtual ~TSysButtonStyleHook() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TSysEditStyleHook : public Vcl::Themes::TMouseTrackSysControlStyleHook
{
	typedef Vcl::Themes::TMouseTrackSysControlStyleHook inherited;
	
private:
	MESSAGE void __fastcall WMNCCalcSize(Winapi::Messages::TWMNCCalcSize &Message);
	
protected:
	virtual void __fastcall PaintNC(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	virtual void __fastcall UpdateColors();
	virtual void __fastcall MouseEnter();
	virtual void __fastcall MouseLeave();
	virtual System::Types::TRect __fastcall GetBorderSize();
	
public:
	__fastcall virtual TSysEditStyleHook(NativeUInt AHandle);
public:
	/* TMouseTrackSysControlStyleHook.Destroy */ inline __fastcall virtual ~TSysEditStyleHook() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TSysComboBoxStyle : unsigned char { csSysDropDown, csSysSimple, csSysDropDownList, csSysOwnerDrawFixed, csSysOwnerDrawVariable };

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TSysComboBoxStyleHook : public Vcl::Themes::TMouseTrackSysControlStyleHook
{
	typedef Vcl::Themes::TMouseTrackSysControlStyleHook inherited;
	
private:
	bool FMouseOnButton;
	HWND FListHandle;
	HWND FEditHandle;
	bool NeedsDefaultPaint;
	bool __fastcall IsDroppedDown();
	System::Types::TRect __fastcall GetButtonRect();
	TSysComboBoxStyle __fastcall Style();
	MESSAGE void __fastcall WMCommand(Winapi::Messages::TWMCommand &Message);
	MESSAGE void __fastcall CNCommand(Winapi::Messages::TWMCommand &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMMouseMove(Winapi::Messages::TWMMouse &Message);
	MESSAGE void __fastcall CNDrawItem(Winapi::Messages::TWMDrawItem &Message);
	MESSAGE void __fastcall WMDrawItem(Winapi::Messages::TWMDrawItem &Message);
	MESSAGE void __fastcall WMParentNotify(Winapi::Messages::TMessage &Message);
	
protected:
	virtual void __fastcall UpdateColors();
	virtual bool __fastcall IsChildHandle(HWND AHandle);
	virtual void __fastcall DrawItem(Vcl::Graphics::TCanvas* Canvas, const unsigned Index, const System::Types::TRect &R, const bool Selected);
#ifndef _WIN64
	__property HWND ListHandle = {read=FListHandle, nodefault};
#else /* _WIN64 */
	__property HWND ListHandle = {read=FListHandle};
#endif /* _WIN64 */
	virtual void __fastcall MouseEnter();
	virtual void __fastcall MouseLeave();
	HIDESBASE virtual void __fastcall PaintBorder(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	__property System::Types::TRect ButtonRect = {read=GetButtonRect};
	__property bool MouseOnButton = {read=FMouseOnButton, write=FMouseOnButton, nodefault};
	__property bool DroppedDown = {read=IsDroppedDown, nodefault};
	
public:
	__fastcall virtual TSysComboBoxStyleHook(NativeUInt AHandle);
public:
	/* TMouseTrackSysControlStyleHook.Destroy */ inline __fastcall virtual ~TSysComboBoxStyleHook() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TSysListBoxStyleHook : public TSysScrollingStyleHook
{
	typedef TSysScrollingStyleHook inherited;
	
protected:
	virtual System::Types::TRect __fastcall GetBorderSize();
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	virtual void __fastcall UpdateColors();
	virtual void __fastcall PaintBackground(Vcl::Graphics::TCanvas* Canvas);
	HIDESBASE MESSAGE void __fastcall WMNCCalcSize(Winapi::Messages::TWMNCCalcSize &Message);
	MESSAGE void __fastcall WMPrint(Winapi::Messages::TMessage &Message);
	virtual void __fastcall PaintNC(Vcl::Graphics::TCanvas* Canvas);
	
public:
	__fastcall virtual TSysListBoxStyleHook(NativeUInt AHandle);
public:
	/* TSysScrollingStyleHook.Destroy */ inline __fastcall virtual ~TSysListBoxStyleHook() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TSysStaticStyleHook : public Vcl::Themes::TSysStyleHook
{
	typedef Vcl::Themes::TSysStyleHook inherited;
	
private:
	bool __fastcall GetIsText();
	Vcl::Graphics::TTextFormat __fastcall GetTextFormat();
	bool __fastcall GetIsFrameOrLine();
	
protected:
	virtual void __fastcall Paint(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall PaintNC(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall UpdateColors();
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	
public:
	__fastcall virtual TSysStaticStyleHook(NativeUInt AHandle);
	__property bool IsText = {read=GetIsText, nodefault};
	__property bool IsFrameOrLine = {read=GetIsFrameOrLine, nodefault};
	__property Vcl::Graphics::TTextFormat TextFormat = {read=GetTextFormat, nodefault};
public:
	/* TSysStyleHook.Destroy */ inline __fastcall virtual ~TSysStaticStyleHook() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TSysListViewStyleHook : public TSysScrollingStyleHook
{
	typedef TSysScrollingStyleHook inherited;
	
	
private:
	class DELPHICLASS TSysHeaderStyleHook;
	class PASCALIMPLEMENTATION TSysHeaderStyleHook : public Vcl::Themes::TMouseTrackSysControlStyleHook
	{
		typedef Vcl::Themes::TMouseTrackSysControlStyleHook inherited;
		
		
	private:
		class DELPHICLASS TSysSection;
		class PASCALIMPLEMENTATION TSysSection : public System::TObject
		{
			typedef System::TObject inherited;
			
		private:
			int FIndex;
			int FColumnIndex;
			int FImageIndex;
			NativeUInt FImageListHandle;
			System::UnicodeString FText;
			System::Types::TRect FSectionRect;
			NativeUInt FHeaderHandle;
			bool FHasSplitButton;
			Vcl::Graphics::TTextFormat FTextFormat;
			bool FBitmapOnRight;
			bool FShowImage;
			System::Types::TRect FDropDownRect;
			
		protected:
			void __fastcall DoGetSectionInfo();
			
		public:
			__fastcall virtual TSysSection(Vcl::Themes::TSysControl* SysParent, int Index);
			__fastcall virtual ~TSysSection();
			__property System::UnicodeString Text = {read=FText};
#ifndef _WIN64
			__property NativeUInt ImageListHandle = {read=FImageListHandle, nodefault};
#else /* _WIN64 */
			__property NativeUInt ImageListHandle = {read=FImageListHandle};
#endif /* _WIN64 */
			__property int ImageIndex = {read=FImageIndex, nodefault};
			__property System::Types::TRect SectionRect = {read=FSectionRect};
			__property int ColumnIndex = {read=FColumnIndex, nodefault};
			__property bool ShowImage = {read=FShowImage, nodefault};
			__property bool BitmapOnRight = {read=FBitmapOnRight, nodefault};
			__property Vcl::Graphics::TTextFormat TextFormat = {read=FTextFormat, nodefault};
			__property bool HasSplitButton = {read=FHasSplitButton, nodefault};
			__property System::Types::TRect DropDownRect = {read=FDropDownRect};
		};
		
		
		
	private:
		int FPressedSection;
		bool FMouseDown;
		TSysSection* FSysSection;
		TSysListViewStyleHook* FListViewStyleHook;
		int __fastcall GetButtonsCount();
		TSysSection* __fastcall GetItem(int Index);
		
	protected:
		virtual void __fastcall MouseLeave();
		virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
		virtual void __fastcall Paint(Vcl::Graphics::TCanvas* Canvas);
		virtual void __fastcall PaintBackground(Vcl::Graphics::TCanvas* Canvas);
		
	public:
		__fastcall virtual TSysHeaderStyleHook(NativeUInt AHandle);
		__fastcall virtual ~TSysHeaderStyleHook();
		__property int ButtonsCount = {read=GetButtonsCount, nodefault};
		__property TSysSection* Items[int Index] = {read=GetItem};
	};
	
	
	
private:
	NativeUInt FHeaderHandle;
	TSysHeaderStyleHook* FHeaderStyleHook;
	
protected:
	virtual void __fastcall Scroll(const Vcl::Forms::TScrollBarKind Kind, const TSysScrollingType ScrollType, int Pos, int Delta);
	virtual void __fastcall UpdateColors();
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	virtual void __fastcall PaintBackground(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall Paint(Vcl::Graphics::TCanvas* Canvas);
	
public:
	void __fastcall SetSelectedColumn(int iCol);
	__fastcall virtual TSysListViewStyleHook(NativeUInt AHandle);
	__fastcall virtual ~TSysListViewStyleHook();
#ifndef _WIN64
	__property NativeUInt HeaderHandle = {read=FHeaderHandle, write=FHeaderHandle, nodefault};
#else /* _WIN64 */
	__property NativeUInt HeaderHandle = {read=FHeaderHandle, write=FHeaderHandle};
#endif /* _WIN64 */
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TSysTreeViewStyleHook : public TSysScrollingStyleHook
{
	typedef TSysScrollingStyleHook inherited;
	
protected:
	virtual void __fastcall Scroll(const Vcl::Forms::TScrollBarKind Kind, const TSysScrollingType ScrollType, int Pos, int Delta);
	virtual void __fastcall UpdateColors();
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	virtual void __fastcall StopTrackTimer();
	
public:
	__fastcall virtual TSysTreeViewStyleHook(NativeUInt AHandle);
public:
	/* TSysScrollingStyleHook.Destroy */ inline __fastcall virtual ~TSysTreeViewStyleHook() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TSysTabPosition : unsigned char { tpSysTop, tpSysBottom, tpSysLeft, tpSysRight };

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TSysTabControlStyleHook : public Vcl::Themes::TMouseTrackSysControlStyleHook
{
	typedef Vcl::Themes::TMouseTrackSysControlStyleHook inherited;
	
private:
	int FHotTabIndex;
	System::Types::TRect __fastcall GetDisplayRect();
	int __fastcall GetTabCount();
	int __fastcall GetTabIndex();
	Vcl::Imglist::TCustomImageList* __fastcall GetImages();
	System::Types::TRect __fastcall GetTabRect(int Index);
	TSysTabPosition __fastcall GetTabPosition();
	System::UnicodeString __fastcall GetTabs(int Index);
	void __fastcall AngleTextOut(Vcl::Graphics::TCanvas* Canvas, const int Angle, const int X, const int Y, const System::UnicodeString Text);
	
protected:
	void __fastcall DrawTab(Vcl::Graphics::TCanvas* Canvas, const int Index);
	virtual void __fastcall PaintBackground(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall Paint(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall PaintNC(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	
public:
	__fastcall virtual TSysTabControlStyleHook(NativeUInt AHandle);
	__property System::Types::TRect DisplayRect = {read=GetDisplayRect};
	__property int TabCount = {read=GetTabCount, nodefault};
	__property int TabIndex = {read=GetTabIndex, nodefault};
	__property Vcl::Imglist::TCustomImageList* Images = {read=GetImages};
	__property System::Types::TRect TabRect[int Index] = {read=GetTabRect};
	__property TSysTabPosition TabPosition = {read=GetTabPosition, nodefault};
	__property System::UnicodeString Tabs[int Index] = {read=GetTabs};
public:
	/* TMouseTrackSysControlStyleHook.Destroy */ inline __fastcall virtual ~TSysTabControlStyleHook() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TSysRichEditStyleHook : public TSysScrollingStyleHook
{
	typedef TSysScrollingStyleHook inherited;
	
private:
	MESSAGE void __fastcall EMSetBkgndColor(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall EMSetCharFormat(Winapi::Messages::TMessage &Message);
	System::Uitypes::TColor FBackColor;
	
protected:
	virtual void __fastcall UpdateColors();
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	virtual System::Types::TRect __fastcall GetBorderSize();
	
public:
	__property System::Uitypes::TColor BackColor = {read=FBackColor, write=FBackColor, nodefault};
	__fastcall virtual TSysRichEditStyleHook(NativeUInt AHandle);
public:
	/* TSysScrollingStyleHook.Destroy */ inline __fastcall virtual ~TSysRichEditStyleHook() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM Vcl_Sysstyles__81 : unsigned char { bsEnabled, bsPressed, bsChecked, bsHidden };

typedef System::Set<Vcl_Sysstyles__81, Vcl_Sysstyles__81::bsEnabled, Vcl_Sysstyles__81::bsHidden> TSysToolbarButtonState;

enum DECLSPEC_DENUM Vcl_Sysstyles__91 : unsigned char { bsBtn, bsSep, bsCheck, bsGroup, bsCheckGroup, bsDropDown };

typedef System::Set<Vcl_Sysstyles__91, Vcl_Sysstyles__91::bsBtn, Vcl_Sysstyles__91::bsDropDown> TSysToolbarButtonStyle;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TSysReBarStyleHook : public Vcl::Themes::TSysStyleHook
{
	typedef Vcl::Themes::TSysStyleHook inherited;
	
private:
	System::UnicodeString __fastcall GetBandText(const int Index);
	System::Types::TRect __fastcall GetBandRect(const int Index);
	System::Types::TRect __fastcall GetBandBorder(const int Index);
	int __fastcall GetBandCount();
	
protected:
	virtual void __fastcall PaintBackground(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall Paint(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall PaintNC(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	
public:
	__fastcall virtual TSysReBarStyleHook(NativeUInt AHandle);
public:
	/* TSysStyleHook.Destroy */ inline __fastcall virtual ~TSysReBarStyleHook() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TSysStatusBarStyleHook : public Vcl::Themes::TSysStyleHook
{
	typedef Vcl::Themes::TSysStyleHook inherited;
	
protected:
	virtual void __fastcall Paint(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	
public:
	__fastcall virtual TSysStatusBarStyleHook(NativeUInt AHandle);
public:
	/* TSysStyleHook.Destroy */ inline __fastcall virtual ~TSysStatusBarStyleHook() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TSysTrackBarStyleHook : public Vcl::Themes::TSysStyleHook
{
	typedef Vcl::Themes::TSysStyleHook inherited;
	
private:
	bool FMouseOnThumb;
	bool FThumbPressed;
	
protected:
	virtual void __fastcall Paint(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall PaintBackground(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	
public:
	__fastcall virtual TSysTrackBarStyleHook(NativeUInt AHandle);
public:
	/* TSysStyleHook.Destroy */ inline __fastcall virtual ~TSysTrackBarStyleHook() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TSysToolbarStyleHook : public Vcl::Themes::TMouseTrackSysControlStyleHook
{
	typedef Vcl::Themes::TMouseTrackSysControlStyleHook inherited;
	
	
private:
	class DELPHICLASS TSysToolbarButton;
	class PASCALIMPLEMENTATION TSysToolbarButton : public System::TObject
	{
		typedef System::TObject inherited;
		
	private:
		Vcl::Themes::TSysControl* FParent;
		int FIndex;
		System::UnicodeString FText;
		int FImageIndex;
		TSysToolbarButtonState FState;
		TSysToolbarButtonStyle FStyle;
		int __fastcall GetCurrentPPI();
		System::Types::TRect __fastcall GetItemRect();
		void __fastcall DoGetItemInfo();
		int __fastcall GetDropDownWidth();
		
	public:
		__fastcall virtual TSysToolbarButton(Vcl::Themes::TSysControl* SysParent, int Index);
		__fastcall virtual ~TSysToolbarButton();
		__property System::Types::TRect ItemRect = {read=GetItemRect};
		__property Vcl::Themes::TSysControl* Parent = {read=FParent};
		__property int CurrentPPI = {read=GetCurrentPPI, nodefault};
		__property System::UnicodeString Text = {read=FText};
		__property int ImageIndex = {read=FImageIndex, nodefault};
		__property TSysToolbarButtonState State = {read=FState, nodefault};
		__property TSysToolbarButtonStyle Style = {read=FStyle, nodefault};
		__property int DropDownWidth = {read=GetDropDownWidth, nodefault};
	};
	
	
	
private:
	Vcl::Controls::TImageList* FImages;
	Vcl::Controls::TImageList* FDisabledImages;
	TSysToolbarButton* FSysToolbarButton;
	bool FButtonsPainted;
	TSysToolbarButton* __fastcall GetItem(int Index);
	int __fastcall GetCount();
	bool __fastcall IsToolbarTransparent();
	bool __fastcall IsToolbarFlat();
	bool __fastcall GetShowText();
	bool __fastcall IsToolbarList();
	bool __fastcall IsToolbarWrapable();
	
protected:
	void __fastcall ApplyImageList();
	virtual void __fastcall PaintBackground(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall Paint(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall PaintNC(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	
public:
	__fastcall virtual TSysToolbarStyleHook(NativeUInt AHandle);
	__fastcall virtual ~TSysToolbarStyleHook();
	__property TSysToolbarButton* Items[int index] = {read=GetItem};
	__property int Count = {read=GetCount, nodefault};
	__property bool Flat = {read=IsToolbarFlat, nodefault};
	__property bool Transparent = {read=IsToolbarTransparent, nodefault};
	__property bool ShowText = {read=GetShowText, nodefault};
	__property bool List = {read=IsToolbarList, nodefault};
	__property bool Wrapable = {read=IsToolbarWrapable, nodefault};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TSysProgressBarOrientation : unsigned char { pbSysHorizontal, pbSysVertical };

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TSysProgressBarStyleHook : public Vcl::Themes::TSysStyleHook
{
	typedef Vcl::Themes::TSysStyleHook inherited;
	
private:
	int FStep;
	TSysProgressBarOrientation FOrientation;
	bool FMarquee;
	void __fastcall TimerAction();
	System::Types::TRect __fastcall GetBarRect();
	int __fastcall GetBorderWidth();
	int __fastcall GetMax();
	int __fastcall GetMin();
	TSysProgressBarOrientation __fastcall GetOrientation();
	float __fastcall GetPercent();
	int __fastcall GetPosition();
	MESSAGE void __fastcall WMNCCalcSize(Winapi::Messages::TWMNCCalcSize &Message);
	
protected:
	virtual void __fastcall PaintBackground(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall PaintBar(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall PaintFrame(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall Paint(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	__property System::Types::TRect BarRect = {read=GetBarRect};
	__property int BorderWidth = {read=GetBorderWidth, nodefault};
	__property int Max = {read=GetMax, nodefault};
	__property int Min = {read=GetMin, nodefault};
	__property TSysProgressBarOrientation Orientation = {read=GetOrientation, nodefault};
	__property int Position = {read=GetPosition, nodefault};
	
public:
	__fastcall virtual TSysProgressBarStyleHook(NativeUInt AHandle);
	__fastcall virtual ~TSysProgressBarStyleHook();
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TSysUDOrientation : unsigned char { udSysHorizontal, udSysVertical };

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TSysUpDownStyleHook : public Vcl::Themes::TMouseTrackSysControlStyleHook
{
	typedef Vcl::Themes::TMouseTrackSysControlStyleHook inherited;
	
private:
	bool FLeftPressed;
	bool FRightPressed;
	bool FMouseOnLeft;
	bool FMouseOnRight;
	TSysUDOrientation __fastcall GetOrientation();
	MESSAGE void __fastcall WMLButtonDblClk(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonDown(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonUp(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMMouseMove(Winapi::Messages::TWMMouse &Message);
	
protected:
	virtual void __fastcall Paint(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall MouseLeave();
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	
public:
	__fastcall virtual TSysUpDownStyleHook(NativeUInt AHandle);
public:
	/* TMouseTrackSysControlStyleHook.Destroy */ inline __fastcall virtual ~TSysUpDownStyleHook() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TSysLinkStyleHook : public TSysStaticStyleHook
{
	typedef TSysStaticStyleHook inherited;
	
private:
	MESSAGE void __fastcall WMNCCalcSize(Winapi::Messages::TWMNCCalcSize &Message);
	
protected:
	virtual void __fastcall PaintNC(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall Paint(Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	
public:
	__fastcall virtual TSysLinkStyleHook(NativeUInt AHandle);
public:
	/* TSysStyleHook.Destroy */ inline __fastcall virtual ~TSysLinkStyleHook() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TSysTooltipsStyleHook : public Vcl::Themes::TSysStyleHook
{
	typedef Vcl::Themes::TSysStyleHook inherited;
	
private:
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TMessage &Message);
	
protected:
	virtual void __fastcall Paint(Vcl::Graphics::TCanvas* Canvas);
	void __fastcall PaintHint(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &TextRect);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	
public:
	__fastcall virtual TSysTooltipsStyleHook(NativeUInt AHandle);
public:
	/* TSysStyleHook.Destroy */ inline __fastcall virtual ~TSysTooltipsStyleHook() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

//-- var, const, procedure ---------------------------------------------------
static const System::Word MN_SETHMENU = System::Word(0x1e0);
static const System::Word MN_SIZEWINDOW = System::Word(0x1e2);
static const System::Word MN_OPENHIERARCHY = System::Word(0x1e3);
static const System::Word MN_CLOSEHIERARCHY = System::Word(0x1e4);
static const System::Word MN_SELECTITEM = System::Word(0x1e5);
static const System::Word MN_CANCELMENUS = System::Word(0x1e6);
static const System::Word MN_SELECTFIRSTVALIDITEM = System::Word(0x1e7);
static const System::Word MN_GETPPOPUPMENU = System::Word(0x1ea);
static const System::Word MN_FINDMENUWINDOWFROMPOINT = System::Word(0x1eb);
static const System::Word MN_SHOWPOPUPWINDOW = System::Word(0x1ec);
static const System::Word MN_BUTTONDOWN = System::Word(0x1ed);
static const System::Word MN_MOUSEMOVE = System::Word(0x1ee);
static const System::Word MN_BUTTONUP = System::Word(0x1ef);
static const System::Word MN_SETTIMERTOOPENHIERARCHY = System::Word(0x1f0);
static const System::Word MN_DBLCLK = System::Word(0x1f1);
static const System::WideChar MARLETT_RESTORE_CHAR = (System::WideChar)(0x32);
static const System::WideChar MARLETT_MINIMIZE_CHAR = (System::WideChar)(0x30);
static const System::WideChar MARLETT_CLOSE_CHAR = (System::WideChar)(0x72);
static const System::WideChar MARLETT_MAXIMIZE_CHAR = (System::WideChar)(0x31);
extern DELPHI_PACKAGE HICON __fastcall BmpToIcon(HBITMAP hBmp);
extern DELPHI_PACKAGE tagBITMAP __fastcall GetBmpInfo(HBITMAP hBmp);
extern DELPHI_PACKAGE int __fastcall GetBitmapHeight(HBITMAP hBmp);
extern DELPHI_PACKAGE int __fastcall GetBitmapWidth(HBITMAP hBmp);
extern DELPHI_PACKAGE System::Types::TRect __fastcall RectVCenter(System::Types::TRect &R, const System::Types::TRect &Bounds);
extern DELPHI_PACKAGE void __fastcall RotateBitmap(Vcl::Graphics::TBitmap* Bmp, float Rads, bool AdjustSize, System::Uitypes::TColor BkColor = (System::Uitypes::TColor)(0x1fffffff));
}	/* namespace Sysstyles */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_SYSSTYLES)
using namespace Vcl::Sysstyles;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_SysstylesHPP
