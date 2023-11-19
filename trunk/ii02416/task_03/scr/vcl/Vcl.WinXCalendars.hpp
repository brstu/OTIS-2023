// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.WinXCalendars.pas' rev: 35.00 (Windows)

#ifndef Vcl_WinxcalendarsHPP
#define Vcl_WinxcalendarsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Graphics.hpp>
#include <System.Classes.hpp>
#include <System.Generics.Collections.hpp>
#include <Vcl.Themes.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <System.SysUtils.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Menus.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Winxcalendars
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE ICalendarViewController;
typedef System::DelphiInterface<ICalendarViewController> _di_ICalendarViewController;
class DELPHICLASS TBaseCalendarAnimation;
class DELPHICLASS TSlideCalendarAnimation;
class DELPHICLASS TZoomCalendarAnimation;
class DELPHICLASS TCalendarViewController;
class DELPHICLASS TDrawParams;
class DELPHICLASS TDrawViewInfoParams;
class DELPHICLASS TCalendarViewInfoBase;
class DELPHICLASS TCustomCalendarHeaderItem;
class DELPHICLASS TCalendarHeaderText;
class DELPHICLASS TCalendarHeaderNavigatorButton;
class DELPHICLASS TCalendarDaysOfWeekViewInfo;
class DELPHICLASS TCalendarHeaderInfo;
class DELPHICLASS TCellItemViewInfo;
class DELPHICLASS TCellDayInfo;
class DELPHICLASS TCellMonthInfo;
class DELPHICLASS TCellYearInfo;
class DELPHICLASS TCalendarNavigationButtons;
class DELPHICLASS THeaderViewInfo;
class DELPHICLASS TCalendarCellItemsViewInfo;
class DELPHICLASS TCalendarCellItemsMonthlyViewInfo;
class DELPHICLASS TCalendarCellItemsYearlyViewInfo;
class DELPHICLASS TCalendarCellItemsDecadeViewInfo;
class DELPHICLASS TCalendarViewViewInfoBase;
class DELPHICLASS TCalendarViewMonthlyViewInfo;
class DELPHICLASS TCalendarViewYearlyViewInfo;
class DELPHICLASS TCalendarViewDecadeViewInfo;
class DELPHICLASS TCalendarViewDrawer;
class DELPHICLASS TCalendarViewDrawerNative;
class DELPHICLASS TCalendarViewDrawerStyled;
class DELPHICLASS TCustomCalendarView;
class DELPHICLASS TCalendarView;
class DELPHICLASS TPopupCalendarView;
class DELPHICLASS TCustomCalendarPicker;
class DELPHICLASS TCalendarPicker;
//-- type declarations -------------------------------------------------------
enum class DECLSPEC_DENUM TSelectionMode : unsigned char { smNone, smSingle, smMultiple };

enum class DECLSPEC_DENUM TDisplayMode : unsigned char { dmMonth, dmYear, dmDecade };

enum class DECLSPEC_DENUM TDateNavigatorButtonOrientation : unsigned char { nboNone, nboNext, nboPrev };

enum class DECLSPEC_DENUM TDaysOfWeek : unsigned char { dwSunday, dwMonday, dwTuesday, dwWednesday, dwThursday, dwFriday, dwSaturday };

enum DECLSPEC_DENUM Vcl_Winxcalendars__1 : unsigned char { vpToday, vpHighlighted, vpSelected, vpCurrent, vpFocused, vpHighlightToday, vpFirstOfGroup };

typedef System::Set<Vcl_Winxcalendars__1, Vcl_Winxcalendars__1::vpToday, Vcl_Winxcalendars__1::vpFirstOfGroup> TViewInfoProperties;

typedef System::Int8 TItemsInRow;

typedef void __fastcall (__closure *TChangeViewEvent)(System::TObject* Sender, TDisplayMode OldMode, TDisplayMode NewMode);

typedef void __fastcall (__closure *TDrawEvent)(System::TObject* Sender, TDrawParams* DrawParams, System::UnicodeString &Text);

typedef void __fastcall (__closure *TDrawNavigationEvent)(System::TObject* Sender, TDrawParams* DrawParams, TDateNavigatorButtonOrientation Orientation);

typedef void __fastcall (__closure *TDrawDayOfWeekEvent)(System::TObject* Sender, TDrawParams* DrawParams, int DayNumber, System::UnicodeString &Text);

typedef void __fastcall (__closure *TDrawViewInfoEvent)(System::TObject* Sender, TDrawViewInfoParams* DrawParams, TCellItemViewInfo* CalendarViewViewInfo);

__interface  INTERFACE_UUID("{8392BA23-E395-44F9-974E-6194078CDC44}") ICalendarViewController  : public System::IInterface 
{
	virtual void __fastcall AnimateNavigation(Vcl::Graphics::TBitmap* AImage, bool AForward) = 0 ;
	virtual void __fastcall AnimateViewChange(Vcl::Graphics::TBitmap* APrevImage, Vcl::Graphics::TBitmap* ANewImage, const System::Types::TRect &ASourceRect, const System::Types::TRect &ADestRect, bool AZoomOut) = 0 ;
	virtual bool __fastcall CanSetDisplayDate(System::TDate ADate) = 0 ;
	virtual void __fastcall ClickOnDate(System::TDate ADate) = 0 ;
	virtual System::Uitypes::TColor __fastcall GetBorderColor() = 0 ;
	virtual int __fastcall GetBorderSize() = 0 ;
	virtual System::Uitypes::TColor __fastcall GetColor() = 0 ;
	virtual int __fastcall GetCurrentPPI() = 0 ;
	virtual TDisplayMode __fastcall GetDisplayMode() = 0 ;
	virtual TCalendarViewDrawer* __fastcall GetDrawer() = 0 ;
	virtual bool __fastcall GetEnabled() = 0 ;
	virtual TDaysOfWeek __fastcall GetFirstDayOfWeek() = 0 ;
	virtual Vcl::Graphics::TFont* __fastcall GetFont() = 0 ;
	virtual bool __fastcall GetHighlightToday() = 0 ;
	virtual TItemsInRow __fastcall GetNumberOfWeeksInView() = 0 ;
	virtual TDrawViewInfoEvent __fastcall GetOnDrawDayItem() = 0 ;
	virtual TDrawViewInfoEvent __fastcall GetOnDrawMonthItem() = 0 ;
	virtual TDrawViewInfoEvent __fastcall GetOnDrawYearItem() = 0 ;
	virtual System::TObject* __fastcall GetOwner() = 0 ;
	virtual bool __fastcall GetShowDayOfWeek() = 0 ;
	virtual bool __fastcall IsDateSelected(const System::TDate ADate) = 0 ;
	virtual System::TDate __fastcall LimitDate(const System::TDate ADate) = 0 ;
	virtual void __fastcall Navigate(bool AForward) = 0 ;
	virtual void __fastcall SetDisplayDate(const System::TDate Value) = 0 ;
	virtual void __fastcall SetDisplayMode(const TDisplayMode Value) = 0 ;
	virtual void __fastcall SetFocusedDate(const System::TDate ADate) = 0 ;
	virtual void __fastcall ClearFocusedItems() = 0 ;
	virtual int __fastcall GetLastFocusedItem() = 0 ;
	virtual void __fastcall SetLastFocusedItem(const int Value) = 0 ;
	__property System::Uitypes::TColor BorderColor = {read=GetBorderColor};
	__property int BorderSize = {read=GetBorderSize};
	__property System::Uitypes::TColor Color = {read=GetColor};
	__property int CurrentPPI = {read=GetCurrentPPI};
	__property TDisplayMode DisplayMode = {read=GetDisplayMode, write=SetDisplayMode};
	__property TCalendarViewDrawer* Drawer = {read=GetDrawer};
	__property bool Enabled = {read=GetEnabled};
	__property TDaysOfWeek FirstDayOfWeek = {read=GetFirstDayOfWeek};
	__property Vcl::Graphics::TFont* Font = {read=GetFont};
	__property bool HighlightToday = {read=GetHighlightToday};
	__property int LastFocusedItem = {read=GetLastFocusedItem, write=SetLastFocusedItem};
	__property TItemsInRow NumberOfWeeksInView = {read=GetNumberOfWeeksInView};
	__property System::TObject* Owner = {read=GetOwner};
	__property bool ShowDayOfWeek = {read=GetShowDayOfWeek};
	__property TDrawViewInfoEvent OnDrawDayItem = {read=GetOnDrawDayItem};
	__property TDrawViewInfoEvent OnDrawMonthItem = {read=GetOnDrawMonthItem};
	__property TDrawViewInfoEvent OnDrawYearItem = {read=GetOnDrawYearItem};
};

class PASCALIMPLEMENTATION TBaseCalendarAnimation : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	unsigned FDuration;
	unsigned FInterval;
	bool FIsStarted;
	System::Classes::TNotifyEvent FOnFinished;
	System::Classes::TNotifyEvent FOnStarted;
	Vcl::Extctrls::TTimer* FTimer;
	unsigned FWhenStarted;
	void __fastcall SetDuration(const unsigned Value);
	void __fastcall SetInterval(const unsigned Value);
	void __fastcall TimerTick(System::TObject* Sender);
	
protected:
	virtual void __fastcall Animate(unsigned ACurrent) = 0 ;
	virtual void __fastcall DoPrepare() = 0 ;
	
public:
	__fastcall virtual TBaseCalendarAnimation();
	__fastcall virtual ~TBaseCalendarAnimation();
	void __fastcall Finish();
	void __fastcall Start(unsigned ADuration, unsigned AInterval);
	void __fastcall StartDefault();
	__property unsigned Duration = {read=FDuration, write=SetDuration, nodefault};
	__property unsigned Interval = {read=FInterval, write=SetInterval, nodefault};
	__property bool IsStarted = {read=FIsStarted, write=FIsStarted, nodefault};
	__property unsigned WhenStarted = {read=FWhenStarted, nodefault};
	__property System::Classes::TNotifyEvent OnFinished = {read=FOnFinished, write=FOnFinished};
	__property System::Classes::TNotifyEvent OnStarted = {read=FOnStarted, write=FOnStarted};
};


enum class DECLSPEC_DENUM TSlideDirection : unsigned char { sdUp, sdDown };

class PASCALIMPLEMENTATION TSlideCalendarAnimation : public TBaseCalendarAnimation
{
	typedef TBaseCalendarAnimation inherited;
	
private:
	Vcl::Graphics::TBitmap* FAnimateBitmap;
	double FCoeff;
	Vcl::Graphics::TCanvas* FDestination;
	System::Types::TRect FDestinationRect;
	TSlideDirection FDirection;
	int FWholeMovement;
	void __fastcall SetAnimateBitmap(Vcl::Graphics::TBitmap* const Value);
	
protected:
	virtual void __fastcall Animate(unsigned ACurrent);
	virtual void __fastcall DoPrepare();
	
public:
	__fastcall virtual TSlideCalendarAnimation();
	__fastcall virtual ~TSlideCalendarAnimation();
	__property Vcl::Graphics::TBitmap* AnimateBitmap = {read=FAnimateBitmap, write=SetAnimateBitmap};
	__property Vcl::Graphics::TCanvas* Destination = {read=FDestination, write=FDestination};
	__property System::Types::TRect DestinationRect = {read=FDestinationRect, write=FDestinationRect};
	__property TSlideDirection Direction = {read=FDirection, write=FDirection, nodefault};
};


enum class DECLSPEC_DENUM TZoomMode : unsigned char { zmOut, zmIn };

class PASCALIMPLEMENTATION TZoomCalendarAnimation : public TBaseCalendarAnimation
{
	typedef TBaseCalendarAnimation inherited;
	
private:
	System::Uitypes::TColor FBackColor;
	Vcl::Graphics::TCanvas* FDestination;
	System::Types::TRect FDestinationRect;
	Vcl::Graphics::TBitmap* FNewImage;
	Vcl::Graphics::TBitmap* FPrevImage;
	System::Types::TRect FSourceRect;
	TZoomMode FZoomMode;
	void __fastcall SetNewImage(Vcl::Graphics::TBitmap* const Value);
	void __fastcall SetPrevImage(Vcl::Graphics::TBitmap* const Value);
	
protected:
	virtual void __fastcall Animate(unsigned ACurrent);
	virtual void __fastcall DoPrepare();
	
public:
	__fastcall virtual TZoomCalendarAnimation();
	__fastcall virtual ~TZoomCalendarAnimation();
	__property System::Uitypes::TColor BackColor = {read=FBackColor, write=FBackColor, nodefault};
	__property Vcl::Graphics::TCanvas* Destination = {read=FDestination, write=FDestination};
	__property System::Types::TRect DestinationRect = {read=FDestinationRect, write=FDestinationRect};
	__property Vcl::Graphics::TBitmap* NewImage = {read=FNewImage, write=SetNewImage};
	__property Vcl::Graphics::TBitmap* PrevImage = {read=FPrevImage, write=SetPrevImage};
	__property System::Types::TRect SourceRect = {read=FSourceRect, write=FSourceRect};
	__property TZoomMode ZoomMode = {read=FZoomMode, write=FZoomMode, nodefault};
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCalendarViewController : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	TBaseCalendarAnimation* FAnimation;
	TCustomCalendarView* FCalendarView;
	void __fastcall AnimateNavigation(Vcl::Graphics::TBitmap* AImage, bool AForward);
	void __fastcall AnimateViewChange(Vcl::Graphics::TBitmap* APrevImage, Vcl::Graphics::TBitmap* ANewImage, const System::Types::TRect &ASourceRect, const System::Types::TRect &ADestRect, bool AZoomOut);
	void __fastcall AnimationFinished(System::TObject* Sender);
	bool __fastcall CanSetDisplayDate(System::TDate ADate);
	System::Uitypes::TColor __fastcall GetBorderColor();
	int __fastcall GetBorderSize();
	System::Uitypes::TColor __fastcall GetColor();
	int __fastcall GetCurrentPPI();
	TDisplayMode __fastcall GetDisplayMode();
	TCalendarViewDrawer* __fastcall GetDrawer();
	bool __fastcall GetEnabled();
	TDaysOfWeek __fastcall GetFirstDayOfWeek();
	Vcl::Graphics::TFont* __fastcall GetFont();
	bool __fastcall GetHighlightToday();
	TItemsInRow __fastcall GetNumberOfWeeksInView();
	TDrawViewInfoEvent __fastcall GetOnDrawDayItem();
	TDrawViewInfoEvent __fastcall GetOnDrawMonthItem();
	TDrawViewInfoEvent __fastcall GetOnDrawYearItem();
	System::TObject* __fastcall GetOwner();
	bool __fastcall GetShowDayOfWeek();
	bool __fastcall IsDateSelected(const System::TDate ADate);
	System::TDate __fastcall LimitDate(const System::TDate ADate);
	void __fastcall Navigate(bool AForward);
	void __fastcall SetDisplayDate(const System::TDate Value);
	void __fastcall SetDisplayMode(const TDisplayMode Value);
	void __fastcall SetFocusedDate(const System::TDate ADate);
	void __fastcall ClearFocusedItems();
	int __fastcall GetLastFocusedItem();
	void __fastcall SetLastFocusedItem(const int Value);
	
public:
	__fastcall TCalendarViewController(TCustomCalendarView* ACalendarView);
	__fastcall virtual ~TCalendarViewController();
	void __fastcall ClickOnDate(System::TDate ADate);
	__property int CurrentPPI = {read=GetCurrentPPI, nodefault};
	__property TDisplayMode DisplayMode = {read=GetDisplayMode, write=SetDisplayMode, nodefault};
	__property TDaysOfWeek FirstDayOfWeek = {read=GetFirstDayOfWeek, nodefault};
	__property bool HighlightToday = {read=GetHighlightToday, nodefault};
	__property System::TObject* Owner = {read=GetOwner};
	__property TDrawViewInfoEvent OnDrawDayItem = {read=GetOnDrawDayItem};
	__property TDrawViewInfoEvent OnDrawMonthItem = {read=GetOnDrawMonthItem};
	__property TDrawViewInfoEvent OnDrawYearItem = {read=GetOnDrawYearItem};
private:
	void *__ICalendarViewController;	// ICalendarViewController 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {8392BA23-E395-44F9-974E-6194078CDC44}
	operator _di_ICalendarViewController()
	{
		_di_ICalendarViewController intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ICalendarViewController*(void) { return (ICalendarViewController*)&__ICalendarViewController; }
	#endif
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TDrawParams : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Uitypes::TColor FBkColor;
	Vcl::Graphics::TCanvas* FCanvas;
	System::Types::TRect FDrawRect;
	Vcl::Graphics::TFont* FFont;
	System::Uitypes::TColor FForegroundColor;
	bool FHandled;
	void __fastcall SetFont(Vcl::Graphics::TFont* const Value);
	
private:
	bool FFocused;
	
public:
	__fastcall TDrawParams(const System::Types::TRect &DrawRect)/* overload */;
	__fastcall virtual ~TDrawParams();
	__property System::Uitypes::TColor BkColor = {read=FBkColor, write=FBkColor, nodefault};
	__property Vcl::Graphics::TCanvas* Canvas = {read=FCanvas, write=FCanvas};
	__property bool Focused = {read=FFocused, write=FFocused, nodefault};
	__property System::Types::TRect DrawRect = {read=FDrawRect};
	__property Vcl::Graphics::TFont* Font = {read=FFont, write=SetFont};
	__property System::Uitypes::TColor ForegroundColor = {read=FForegroundColor, write=FForegroundColor, nodefault};
	__property bool Handled = {read=FHandled, write=FHandled, nodefault};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TDrawViewInfoParams : public TDrawParams
{
	typedef TDrawParams inherited;
	
private:
	System::Uitypes::TColor FBorderColor;
	int FBorderWidth;
	System::Uitypes::TColor FFocusedColor;
	int FFocusRectWidth;
	System::UnicodeString FGroupText;
	System::Uitypes::TColor FSelectionColor;
	System::UnicodeString FText;
	TViewInfoProperties FViewInfoProperties;
	
public:
	__property System::Uitypes::TColor BorderColor = {read=FBorderColor, write=FBorderColor, nodefault};
	__property int BorderWidth = {read=FBorderWidth, write=FBorderWidth, nodefault};
	__property System::Uitypes::TColor FocusedColor = {read=FFocusedColor, write=FFocusedColor, nodefault};
	__property int FocusRectWidth = {read=FFocusRectWidth, write=FFocusRectWidth, nodefault};
	__property System::UnicodeString GroupText = {read=FGroupText, write=FGroupText};
	__property System::Uitypes::TColor SelectionColor = {read=FSelectionColor, write=FSelectionColor, nodefault};
	__property System::UnicodeString Text = {read=FText, write=FText};
	__property TViewInfoProperties ViewInfoProperties = {read=FViewInfoProperties, write=FViewInfoProperties, nodefault};
public:
	/* TDrawParams.Create */ inline __fastcall TDrawViewInfoParams(const System::Types::TRect &DrawRect)/* overload */ : TDrawParams(DrawRect) { }
	/* TDrawParams.Destroy */ inline __fastcall virtual ~TDrawViewInfoParams() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TCalendarViewInfoBase : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Generics::Collections::TObjectList__1<TCalendarViewInfoBase*>* FChildren;
	bool FHighlighted;
	System::Classes::TNotifyEvent FOnDestroy;
	TCalendarViewInfoBase* FParent;
	System::Types::TPoint FPosition;
	System::Types::TSize FSize;
	bool FFocused;
	System::Types::TRect __fastcall GetGlobalRect();
	int __fastcall GetHeight();
	int __fastcall GetLeft();
	System::Types::TRect __fastcall GetLocalRect();
	System::Types::TRect __fastcall GetSizeRect();
	int __fastcall GetTop();
	int __fastcall GetWidth();
	void __fastcall SetHeight(const int Value);
	void __fastcall SetLeft(const int Value);
	void __fastcall SetTop(const int Value);
	void __fastcall SetWidth(const int Value);
	
protected:
	virtual int __fastcall GetTabOrder();
	
public:
	__fastcall TCalendarViewInfoBase();
	__fastcall virtual ~TCalendarViewInfoBase();
	template<typename T> T __fastcall AddChild(const T AChild);
	virtual void __fastcall Click(const _di_ICalendarViewController AController, bool ByMouse);
	virtual bool __fastcall ContainsPoint(const System::Types::TPoint &Point);
	virtual void __fastcall Draw(const System::Types::TPoint &APosition, Vcl::Graphics::TCanvas* ACanvas, TCalendarViewDrawer* ADrawer, const _di_ICalendarViewController AController);
	void __fastcall DrawChildren(const System::Types::TPoint &APosition, Vcl::Graphics::TCanvas* ACanvas, TCalendarViewDrawer* ADrawer, const _di_ICalendarViewController AController);
	void __fastcall DrawDefault(Vcl::Graphics::TCanvas* ACanvas, TCalendarViewDrawer* ADrawer, const _di_ICalendarViewController AController);
	void __fastcall DrawDefaultBuffered(Vcl::Graphics::TCanvas* ACanvas, TCalendarViewDrawer* ADrawer, const _di_ICalendarViewController AController);
	TCalendarViewInfoBase* __fastcall FindAtPoint(const System::Types::TPoint &Point);
	__property System::Generics::Collections::TObjectList__1<TCalendarViewInfoBase*>* Children = {read=FChildren};
	__property bool Focused = {read=FFocused, write=FFocused, nodefault};
	__property System::Types::TRect GlobalRect = {read=GetGlobalRect};
	__property int Height = {read=GetHeight, write=SetHeight, nodefault};
	__property bool Highlighted = {read=FHighlighted, write=FHighlighted, nodefault};
	__property int Left = {read=GetLeft, write=SetLeft, nodefault};
	__property System::Types::TRect LocalRect = {read=GetLocalRect};
	__property TCalendarViewInfoBase* Parent = {read=FParent};
	__property System::Types::TPoint Position = {read=FPosition, write=FPosition};
	__property System::Types::TSize Size = {read=FSize, write=FSize};
	__property System::Types::TRect SizeRect = {read=GetSizeRect};
	__property int TabOrder = {read=GetTabOrder, nodefault};
	__property int Top = {read=GetTop, write=SetTop, nodefault};
	__property int Width = {read=GetWidth, write=SetWidth, nodefault};
	__property System::Classes::TNotifyEvent OnDestroy = {read=FOnDestroy, write=FOnDestroy};
};


class PASCALIMPLEMENTATION TCustomCalendarHeaderItem : public TCalendarViewInfoBase
{
	typedef TCalendarViewInfoBase inherited;
	
private:
	TCalendarHeaderInfo* FHeaderInfo;
	
public:
	__fastcall TCustomCalendarHeaderItem(TCalendarHeaderInfo* const CalendarHeader);
	__property TCalendarHeaderInfo* HeaderInfo = {read=FHeaderInfo};
public:
	/* TCalendarViewInfoBase.Destroy */ inline __fastcall virtual ~TCustomCalendarHeaderItem() { }
	
};


class PASCALIMPLEMENTATION TCalendarHeaderText : public TCustomCalendarHeaderItem
{
	typedef TCustomCalendarHeaderItem inherited;
	
private:
	System::UnicodeString FText;
	
protected:
	virtual int __fastcall GetTabOrder();
	
public:
	void __fastcall Calculate(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TSize &ASize);
	virtual void __fastcall Click(const _di_ICalendarViewController AController, bool ByMouse);
	virtual void __fastcall Draw(const System::Types::TPoint &APosition, Vcl::Graphics::TCanvas* ACanvas, TCalendarViewDrawer* ADrawer, const _di_ICalendarViewController AController);
	__property System::UnicodeString Text = {read=FText, write=FText};
public:
	/* TCustomCalendarHeaderItem.Create */ inline __fastcall TCalendarHeaderText(TCalendarHeaderInfo* const CalendarHeader) : TCustomCalendarHeaderItem(CalendarHeader) { }
	
public:
	/* TCalendarViewInfoBase.Destroy */ inline __fastcall virtual ~TCalendarHeaderText() { }
	
};


class PASCALIMPLEMENTATION TCalendarHeaderNavigatorButton : public TCustomCalendarHeaderItem
{
	typedef TCustomCalendarHeaderItem inherited;
	
private:
	TDateNavigatorButtonOrientation FOrientation;
	int FTabOrder;
	
protected:
	virtual int __fastcall GetTabOrder();
	
public:
	__fastcall TCalendarHeaderNavigatorButton(TCalendarHeaderInfo* const CalendarHeader, const int ATabOrder);
	void __fastcall Calculate(int AHeight);
	virtual void __fastcall Click(const _di_ICalendarViewController AController, bool ByMouse);
	virtual void __fastcall Draw(const System::Types::TPoint &APosition, Vcl::Graphics::TCanvas* ACanvas, TCalendarViewDrawer* ADrawer, const _di_ICalendarViewController AController);
	__property TDateNavigatorButtonOrientation Orientation = {read=FOrientation, write=FOrientation, nodefault};
public:
	/* TCalendarViewInfoBase.Destroy */ inline __fastcall virtual ~TCalendarHeaderNavigatorButton() { }
	
};


class PASCALIMPLEMENTATION TCalendarDaysOfWeekViewInfo : public TCustomCalendarHeaderItem
{
	typedef TCustomCalendarHeaderItem inherited;
	
public:
	void __fastcall Calculate(const System::Types::TSize &ASize);
	virtual void __fastcall Draw(const System::Types::TPoint &APosition, Vcl::Graphics::TCanvas* ACanvas, TCalendarViewDrawer* ADrawer, const _di_ICalendarViewController AController);
public:
	/* TCustomCalendarHeaderItem.Create */ inline __fastcall TCalendarDaysOfWeekViewInfo(TCalendarHeaderInfo* const CalendarHeader) : TCustomCalendarHeaderItem(CalendarHeader) { }
	
public:
	/* TCalendarViewInfoBase.Destroy */ inline __fastcall virtual ~TCalendarDaysOfWeekViewInfo() { }
	
};


class PASCALIMPLEMENTATION TCalendarHeaderInfo : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	TCustomCalendarView* FCalendarView;
	Vcl::Graphics::TFont* FDaysOfWeekFont;
	TCalendarViewDrawer* FDrawer;
	Vcl::Graphics::TFont* FFont;
	System::Uitypes::TColor FFontColor;
	System::Uitypes::TColor FHighlightFontColor;
	System::Classes::TNotifyEvent FOnChange;
	TDrawDayOfWeekEvent FOnDrawDayOfWeek;
	TDrawEvent FOnDrawHeader;
	TDrawNavigationEvent FOnDrawNavigationButton;
	void __fastcall ObjectChanged(System::TObject* Senter);
	void __fastcall SetDaysOfWeekFont(Vcl::Graphics::TFont* const Value);
	void __fastcall SetFont(Vcl::Graphics::TFont* const Value);
	void __fastcall SetFontColor(const System::Uitypes::TColor Value);
	void __fastcall SetHighlightFontColor(const System::Uitypes::TColor Value);
	
private:
	void __fastcall SetOnDrawDayOfWeek(const TDrawDayOfWeekEvent Value);
	void __fastcall SetOnDrawHeader(const TDrawEvent Value);
	void __fastcall SetOnDrawNavigationButton(const TDrawNavigationEvent Value);
	
public:
	__fastcall virtual TCalendarHeaderInfo(System::Classes::TComponent* Owner);
	__fastcall virtual ~TCalendarHeaderInfo();
	void __fastcall Changed();
	void __fastcall DoOnDrawDayOfWeek(TDrawParams* DrawParams, int DayNumber, System::UnicodeString &Text);
	void __fastcall DoOnDrawHeader(TDrawParams* DrawParams, System::UnicodeString &Text);
	void __fastcall DoOnDrawNavigationButton(TDrawParams* DrawParams, TDateNavigatorButtonOrientation Orientation);
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	
__published:
	__property Vcl::Graphics::TFont* DaysOfWeekFont = {read=FDaysOfWeekFont, write=SetDaysOfWeekFont};
	__property Vcl::Graphics::TFont* Font = {read=FFont, write=SetFont};
	__property System::Uitypes::TColor FontColor = {read=FFontColor, write=SetFontColor, default=0};
	__property System::Uitypes::TColor HighlightFontColor = {read=FHighlightFontColor, write=SetHighlightFontColor, default=-16777203};
	__property TDrawDayOfWeekEvent OnDrawDayOfWeek = {read=FOnDrawDayOfWeek, write=SetOnDrawDayOfWeek};
	__property TDrawEvent OnDrawHeader = {read=FOnDrawHeader, write=SetOnDrawHeader};
	__property TDrawNavigationEvent OnDrawNavigationButton = {read=FOnDrawNavigationButton, write=SetOnDrawNavigationButton};
};


class PASCALIMPLEMENTATION TCellItemViewInfo : public TCalendarViewInfoBase
{
	typedef TCalendarViewInfoBase inherited;
	
protected:
	System::Types::TPoint FCell;
	System::TDate FDate;
	virtual System::UnicodeString __fastcall CellText() = 0 ;
	virtual System::UnicodeString __fastcall GroupText() = 0 ;
	virtual bool __fastcall ItemIsCurrent() = 0 ;
	
protected:
	void __fastcall PrepareDrawParams(TDrawViewInfoParams* ADrawParams, _di_ICalendarViewController AController);
	
public:
	__fastcall TCellItemViewInfo(const System::Types::TPoint &ACell, const System::TDate ADate);
	virtual void __fastcall DoDrawItem(TDrawViewInfoParams* ADrawParams, _di_ICalendarViewController AController) = 0 ;
	virtual void __fastcall Draw(const System::Types::TPoint &APosition, Vcl::Graphics::TCanvas* ACanvas, TCalendarViewDrawer* ADrawer, const _di_ICalendarViewController AController);
	__property System::Types::TPoint Cell = {read=FCell};
	__property System::TDate Date = {read=FDate};
public:
	/* TCalendarViewInfoBase.Destroy */ inline __fastcall virtual ~TCellItemViewInfo() { }
	
};


class PASCALIMPLEMENTATION TCellDayInfo : public TCellItemViewInfo
{
	typedef TCellItemViewInfo inherited;
	
protected:
	virtual System::UnicodeString __fastcall CellText();
	virtual System::UnicodeString __fastcall GroupText();
	virtual bool __fastcall ItemIsCurrent();
	
public:
	virtual void __fastcall Click(const _di_ICalendarViewController AController, bool ByMouse);
	virtual void __fastcall DoDrawItem(TDrawViewInfoParams* ADrawParams, _di_ICalendarViewController AController);
public:
	/* TCellItemViewInfo.Create */ inline __fastcall TCellDayInfo(const System::Types::TPoint &ACell, const System::TDate ADate) : TCellItemViewInfo(ACell, ADate) { }
	
public:
	/* TCalendarViewInfoBase.Destroy */ inline __fastcall virtual ~TCellDayInfo() { }
	
};


class PASCALIMPLEMENTATION TCellMonthInfo : public TCellItemViewInfo
{
	typedef TCellItemViewInfo inherited;
	
protected:
	virtual System::UnicodeString __fastcall CellText();
	virtual System::UnicodeString __fastcall GroupText();
	virtual bool __fastcall ItemIsCurrent();
	
public:
	virtual void __fastcall Click(const _di_ICalendarViewController AController, bool ByMouse);
	virtual void __fastcall DoDrawItem(TDrawViewInfoParams* ADrawParams, _di_ICalendarViewController AController);
public:
	/* TCellItemViewInfo.Create */ inline __fastcall TCellMonthInfo(const System::Types::TPoint &ACell, const System::TDate ADate) : TCellItemViewInfo(ACell, ADate) { }
	
public:
	/* TCalendarViewInfoBase.Destroy */ inline __fastcall virtual ~TCellMonthInfo() { }
	
};


class PASCALIMPLEMENTATION TCellYearInfo : public TCellItemViewInfo
{
	typedef TCellItemViewInfo inherited;
	
protected:
	virtual System::UnicodeString __fastcall CellText();
	virtual System::UnicodeString __fastcall GroupText();
	virtual bool __fastcall ItemIsCurrent();
	
public:
	virtual void __fastcall Click(const _di_ICalendarViewController AController, bool ByMouse);
	virtual void __fastcall DoDrawItem(TDrawViewInfoParams* ADrawParams, _di_ICalendarViewController AController);
public:
	/* TCellItemViewInfo.Create */ inline __fastcall TCellYearInfo(const System::Types::TPoint &ACell, const System::TDate ADate) : TCellItemViewInfo(ACell, ADate) { }
	
public:
	/* TCalendarViewInfoBase.Destroy */ inline __fastcall virtual ~TCellYearInfo() { }
	
};


class PASCALIMPLEMENTATION TCalendarNavigationButtons : public TCalendarViewInfoBase
{
	typedef TCalendarViewInfoBase inherited;
	
private:
	TCalendarHeaderNavigatorButton* FButtonNext;
	TCalendarHeaderNavigatorButton* FButtonPrev;
	
public:
	__fastcall TCalendarNavigationButtons(TCalendarHeaderInfo* const CalendarHeader);
	void __fastcall Calculate(const System::Types::TSize &ASize);
	__property TCalendarHeaderNavigatorButton* ButtonNext = {read=FButtonNext};
	__property TCalendarHeaderNavigatorButton* ButtonPrev = {read=FButtonPrev};
public:
	/* TCalendarViewInfoBase.Destroy */ inline __fastcall virtual ~TCalendarNavigationButtons() { }
	
};


class PASCALIMPLEMENTATION THeaderViewInfo : public TCalendarViewInfoBase
{
	typedef TCalendarViewInfoBase inherited;
	
private:
	TCalendarHeaderInfo* FHeaderInfo;
	TCalendarHeaderText* FHeaderText;
	TCalendarNavigationButtons* FNavigationButtons;
	
public:
	__fastcall THeaderViewInfo(TCalendarHeaderInfo* const AHeaderInfo);
	void __fastcall Calculate(const System::Types::TSize &ASize);
	virtual void __fastcall Draw(const System::Types::TPoint &APosition, Vcl::Graphics::TCanvas* ACanvas, TCalendarViewDrawer* ADrawer, const _di_ICalendarViewController AController);
	__property TCalendarHeaderInfo* HeaderInfo = {read=FHeaderInfo};
	__property TCalendarHeaderText* HeaderText = {read=FHeaderText};
	__property TCalendarNavigationButtons* NavigationButtons = {read=FNavigationButtons};
public:
	/* TCalendarViewInfoBase.Destroy */ inline __fastcall virtual ~THeaderViewInfo() { }
	
};


enum class DECLSPEC_DENUM TFocusDirection : unsigned char { fdUp, fdDown, fdLeft, fdRight, fdPageUp, fdPageDown };

class PASCALIMPLEMENTATION TCalendarCellItemsViewInfo : public TCalendarViewInfoBase
{
	typedef TCalendarViewInfoBase inherited;
	
private:
	System::TDate FActualDate;
	int FCellHeight;
	_di_ICalendarViewController FController;
	TDisplayMode FDisplayMode;
	System::TDate FFocusedDate;
	bool FInAnimationState;
	System::TDate FStartDate;
	int __fastcall GetCellCount();
	TCellItemViewInfo* __fastcall GetCells(int Index);
	int __fastcall GetCountInCol();
	int __fastcall GetCountInRow();
	System::Types::TPoint __fastcall GetFocusedCell();
	int __fastcall GetFocusedCellIndex();
	TCellItemViewInfo* __fastcall GetFocusedCellInfo();
	void __fastcall SetFocusedCell(const System::Types::TPoint &Value);
	void __fastcall SetFocusedCellIndex(const int Value);
	void __fastcall SetFocusedDate(const System::TDate Value);
	void __fastcall SetInAnimationState(const bool Value);
	
private:
	bool FDisplayFocused;
	
protected:
	virtual int __fastcall GetTabOrder();
	
public:
	__fastcall TCalendarCellItemsViewInfo(const _di_ICalendarViewController AController, TDisplayMode ADisplayMode);
	__fastcall virtual ~TCalendarCellItemsViewInfo();
	void __fastcall Calculate(const System::Types::TSize &ASize, TCalendarViewDrawer* ADrawer, int ARowCount);
	virtual bool __fastcall ItemIsFirstOfGroup(System::TDate ADate) = 0 ;
	virtual bool __fastcall ItemIsInCurrentRange(System::TDate ADate) = 0 ;
	__property System::TDate ActualDate = {read=FActualDate, write=FActualDate};
	__property int CellCount = {read=GetCellCount, nodefault};
	__property int CellHeight = {read=FCellHeight, nodefault};
	__property TCellItemViewInfo* Cells[int Index] = {read=GetCells};
	__property int CountInCol = {read=GetCountInCol, nodefault};
	__property int CountInRow = {read=GetCountInRow, nodefault};
	__property bool DisplayFocused = {read=FDisplayFocused, write=FDisplayFocused, nodefault};
	__property TDisplayMode DisplayMode = {read=FDisplayMode, nodefault};
	__property System::Types::TPoint FocusedCell = {read=GetFocusedCell, write=SetFocusedCell};
	__property int FocusedCellIndex = {read=GetFocusedCellIndex, write=SetFocusedCellIndex, nodefault};
	__property TCellItemViewInfo* FocusedCellInfo = {read=GetFocusedCellInfo};
	__property System::TDate FocusedDate = {read=FFocusedDate, write=SetFocusedDate};
	__property bool InAnimationState = {read=FInAnimationState, write=SetInAnimationState, nodefault};
	__property System::TDate StartDate = {read=FStartDate, write=FStartDate};
};


class PASCALIMPLEMENTATION TCalendarCellItemsMonthlyViewInfo : public TCalendarCellItemsViewInfo
{
	typedef TCalendarCellItemsViewInfo inherited;
	
public:
	virtual bool __fastcall ItemIsFirstOfGroup(System::TDate ADate);
	virtual bool __fastcall ItemIsInCurrentRange(System::TDate ADate);
public:
	/* TCalendarCellItemsViewInfo.Create */ inline __fastcall TCalendarCellItemsMonthlyViewInfo(const _di_ICalendarViewController AController, TDisplayMode ADisplayMode) : TCalendarCellItemsViewInfo(AController, ADisplayMode) { }
	/* TCalendarCellItemsViewInfo.Destroy */ inline __fastcall virtual ~TCalendarCellItemsMonthlyViewInfo() { }
	
};


class PASCALIMPLEMENTATION TCalendarCellItemsYearlyViewInfo : public TCalendarCellItemsViewInfo
{
	typedef TCalendarCellItemsViewInfo inherited;
	
public:
	virtual bool __fastcall ItemIsFirstOfGroup(System::TDate ADate);
	virtual bool __fastcall ItemIsInCurrentRange(System::TDate ADate);
public:
	/* TCalendarCellItemsViewInfo.Create */ inline __fastcall TCalendarCellItemsYearlyViewInfo(const _di_ICalendarViewController AController, TDisplayMode ADisplayMode) : TCalendarCellItemsViewInfo(AController, ADisplayMode) { }
	/* TCalendarCellItemsViewInfo.Destroy */ inline __fastcall virtual ~TCalendarCellItemsYearlyViewInfo() { }
	
};


class PASCALIMPLEMENTATION TCalendarCellItemsDecadeViewInfo : public TCalendarCellItemsViewInfo
{
	typedef TCalendarCellItemsViewInfo inherited;
	
public:
	virtual bool __fastcall ItemIsFirstOfGroup(System::TDate ADate);
	virtual bool __fastcall ItemIsInCurrentRange(System::TDate ADate);
public:
	/* TCalendarCellItemsViewInfo.Create */ inline __fastcall TCalendarCellItemsDecadeViewInfo(const _di_ICalendarViewController AController, TDisplayMode ADisplayMode) : TCalendarCellItemsViewInfo(AController, ADisplayMode) { }
	/* TCalendarCellItemsViewInfo.Destroy */ inline __fastcall virtual ~TCalendarCellItemsDecadeViewInfo() { }
	
};


class PASCALIMPLEMENTATION TCalendarViewViewInfoBase : public TCalendarViewInfoBase
{
	typedef TCalendarViewInfoBase inherited;
	
private:
	TCalendarViewInfoBase* FBody;
	_di_ICalendarViewController FController;
	THeaderViewInfo* FHeader;
	TCalendarHeaderInfo* FHeaderInfo;
	
private:
	TCalendarViewDrawer* FDrawer;
	
protected:
	TCalendarCellItemsViewInfo* FCellsInfo;
	void __fastcall AnimateAndSet(bool AForward, bool ADisableStates, System::TDate APrevStartDate, System::TDate ANewStartDate, System::TDate ANewActualDate);
	virtual int __fastcall Diff(System::TDate AStart, System::TDate AEnd) = 0 ;
	virtual System::TDate __fastcall GetActualDate();
	virtual TDisplayMode __fastcall GetDisplayMode() = 0 ;
	virtual System::TDate __fastcall GetFocusedDate();
	virtual System::UnicodeString __fastcall GetHeaderText() = 0 ;
	virtual System::TDate __fastcall GetNextDate() = 0 ;
	virtual System::TDate __fastcall GetStartDate();
	virtual void __fastcall SetActualDate(const System::TDate Value);
	virtual void __fastcall SetFocusedDate(const System::TDate Value);
	virtual void __fastcall SetStartDate(const System::TDate Value);
	
public:
	__fastcall virtual TCalendarViewViewInfoBase(TCalendarHeaderInfo* const AHeaderInfo, const _di_ICalendarViewController AController, TCalendarViewDrawer* ADrawer);
	virtual void __fastcall Calculate(const System::Types::TSize &ASize, TCalendarViewDrawer* ADrawer) = 0 ;
	virtual void __fastcall Draw(const System::Types::TPoint &APosition, Vcl::Graphics::TCanvas* ACanvas, TCalendarViewDrawer* ADrawer, const _di_ICalendarViewController AController);
	virtual void __fastcall FocusCell(TFocusDirection ADirection, _di_ICalendarViewController AController) = 0 ;
	virtual void __fastcall Navigate(bool AForward) = 0 ;
	__property System::TDate ActualDate = {read=GetActualDate, write=SetActualDate};
	__property TCalendarViewInfoBase* Body = {read=FBody};
	__property TCalendarCellItemsViewInfo* CellsInfo = {read=FCellsInfo};
	__property _di_ICalendarViewController Controller = {read=FController};
	__property TDisplayMode DisplayMode = {read=GetDisplayMode, nodefault};
	__property System::TDate FocusedDate = {read=GetFocusedDate, write=SetFocusedDate};
	__property THeaderViewInfo* Header = {read=FHeader};
	__property TCalendarHeaderInfo* HeaderInfo = {read=FHeaderInfo};
	__property System::TDate NextDate = {read=GetNextDate};
	__property System::TDate StartDate = {read=GetStartDate, write=SetStartDate};
public:
	/* TCalendarViewInfoBase.Destroy */ inline __fastcall virtual ~TCalendarViewViewInfoBase() { }
	
};


class PASCALIMPLEMENTATION TCalendarViewMonthlyViewInfo : public TCalendarViewViewInfoBase
{
	typedef TCalendarViewViewInfoBase inherited;
	
private:
	TCalendarDaysOfWeekViewInfo* FWeekDays;
	
protected:
	virtual int __fastcall Diff(System::TDate AStart, System::TDate AEnd);
	virtual TDisplayMode __fastcall GetDisplayMode();
	virtual System::UnicodeString __fastcall GetHeaderText();
	virtual System::TDate __fastcall GetNextDate();
	virtual void __fastcall SetActualDate(const System::TDate Value);
	virtual void __fastcall SetFocusedDate(const System::TDate Value);
	virtual void __fastcall SetStartDate(const System::TDate Value);
	
public:
	__fastcall virtual TCalendarViewMonthlyViewInfo(TCalendarHeaderInfo* const AHeaderInfo, const _di_ICalendarViewController AController, TCalendarViewDrawer* ADrawer);
	virtual void __fastcall Calculate(const System::Types::TSize &ASize, TCalendarViewDrawer* ADrawer);
	System::TDate __fastcall CorrectStartDate(const System::TDate Value);
	virtual void __fastcall FocusCell(TFocusDirection ADirection, _di_ICalendarViewController AController);
	virtual void __fastcall Navigate(bool AForward);
	__property TCalendarDaysOfWeekViewInfo* WeekDays = {read=FWeekDays};
public:
	/* TCalendarViewInfoBase.Destroy */ inline __fastcall virtual ~TCalendarViewMonthlyViewInfo() { }
	
};


class PASCALIMPLEMENTATION TCalendarViewYearlyViewInfo : public TCalendarViewViewInfoBase
{
	typedef TCalendarViewViewInfoBase inherited;
	
protected:
	virtual int __fastcall Diff(System::TDate AStart, System::TDate AEnd);
	virtual TDisplayMode __fastcall GetDisplayMode();
	virtual System::UnicodeString __fastcall GetHeaderText();
	virtual System::TDate __fastcall GetNextDate();
	virtual void __fastcall SetActualDate(const System::TDate Value);
	virtual void __fastcall SetStartDate(const System::TDate Value);
	
public:
	__fastcall virtual TCalendarViewYearlyViewInfo(TCalendarHeaderInfo* const AHeaderInfo, const _di_ICalendarViewController AController, TCalendarViewDrawer* ADrawer);
	virtual void __fastcall Calculate(const System::Types::TSize &ASize, TCalendarViewDrawer* ADrawer);
	System::TDate __fastcall CorrectStartDate(const System::TDate Value);
	virtual void __fastcall FocusCell(TFocusDirection ADirection, _di_ICalendarViewController AController);
	virtual void __fastcall Navigate(bool AForward);
public:
	/* TCalendarViewInfoBase.Destroy */ inline __fastcall virtual ~TCalendarViewYearlyViewInfo() { }
	
};


class PASCALIMPLEMENTATION TCalendarViewDecadeViewInfo : public TCalendarViewViewInfoBase
{
	typedef TCalendarViewViewInfoBase inherited;
	
protected:
	virtual int __fastcall Diff(System::TDate AStart, System::TDate AEnd);
	virtual TDisplayMode __fastcall GetDisplayMode();
	virtual System::UnicodeString __fastcall GetHeaderText();
	virtual System::TDate __fastcall GetNextDate();
	
public:
	__fastcall virtual TCalendarViewDecadeViewInfo(TCalendarHeaderInfo* const AHeaderInfo, const _di_ICalendarViewController AController, TCalendarViewDrawer* ADrawer);
	virtual void __fastcall Calculate(const System::Types::TSize &ASize, TCalendarViewDrawer* ADrawer);
	virtual void __fastcall FocusCell(TFocusDirection ADirection, _di_ICalendarViewController AController);
	virtual void __fastcall Navigate(bool AForward);
public:
	/* TCalendarViewInfoBase.Destroy */ inline __fastcall virtual ~TCalendarViewDecadeViewInfo() { }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCalendarViewDrawer : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	TCustomCalendarView* FCalendarView;
	System::Uitypes::TColor __fastcall MiddleColor(System::Uitypes::TColor AColor1, System::Uitypes::TColor AColor2, double Coeff = 5.000000E-01);
	
protected:
	void __fastcall DrawFocusRect(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, int AWith, int ALength, int ASkipLength);
	Vcl::Themes::TCustomStyleServices* __fastcall StyleServices();
	
public:
	__fastcall TCalendarViewDrawer(TCustomCalendarView* const ACalendarView);
	virtual void __fastcall DrawCalendarItem(TDrawViewInfoParams* ADrawParams, Vcl::Graphics::TCanvas* ACanvas, TCellItemViewInfo* AViewInfo);
	virtual void __fastcall DrawCalendarPicker(TDrawParams* ADrawParams, Vcl::Graphics::TCanvas* ACanvas, TCustomCalendarPicker* ACalendarPicker, int ABorderSize, int AIconSize) = 0 ;
	virtual void __fastcall DrawDayOfWeek(TDrawParams* ADrawParams, Vcl::Graphics::TCanvas* ACanvas, const System::UnicodeString AText);
	virtual void __fastcall DrawHeaderRect(TDrawParams* ADrawParams, Vcl::Graphics::TCanvas* Canvas);
	virtual void __fastcall DrawHeaderText(TDrawParams* ADrawParams, Vcl::Graphics::TCanvas* ACanvas, System::UnicodeString AText);
	virtual void __fastcall DrawNavigatorButtons(TDrawParams* ADrawParams, Vcl::Graphics::TCanvas* ACanvas, TDateNavigatorButtonOrientation AOrientation, int AArrowWidth);
	virtual void __fastcall PrepareCalendarBackground(System::Uitypes::TColor &AColor, bool AEnabled);
	virtual void __fastcall PrepareCalendarPickerParams(TDrawParams* ADrawParams, TCustomCalendarPicker* ACalendarPicker, bool AHot, bool APressed, bool AEnabled);
	virtual void __fastcall PrepareCellStyleParams(TDrawViewInfoParams* ADrawParams, TCellItemViewInfo* AViewInfo, bool AEnabled);
	virtual void __fastcall PrepareDaysOfWeekParams(TDrawParams* ADrawParams, bool AEnabled);
	virtual void __fastcall PrepareHeaderParams(TDrawParams* ADrawParams, TCalendarHeaderInfo* AHeader, bool AEnabled);
	virtual void __fastcall PrepareHeaderTextParams(TDrawParams* ADrawParams, TCalendarHeaderText* AHeader, bool AHighlited, bool AEnabled);
	virtual void __fastcall PrepareNavigatorButtonsParams(TDrawParams* ADrawParams, TCalendarHeaderNavigatorButton* AButton, bool AEnabled);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TCalendarViewDrawer() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCalendarViewDrawerNative : public TCalendarViewDrawer
{
	typedef TCalendarViewDrawer inherited;
	
private:
	Vcl::Graphics::TBitmap* FButtonBitmap;
	
protected:
	void __fastcall LoadImage();
	
public:
	__fastcall TCalendarViewDrawerNative(TCustomCalendarView* const ACalendarView);
	__fastcall virtual ~TCalendarViewDrawerNative();
	virtual void __fastcall DrawCalendarPicker(TDrawParams* ADrawParams, Vcl::Graphics::TCanvas* ACanvas, TCustomCalendarPicker* ACalendarPicker, int ABorderSize, int AIconSize);
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCalendarViewDrawerStyled : public TCalendarViewDrawer
{
	typedef TCalendarViewDrawer inherited;
	
protected:
	System::Uitypes::TColor __fastcall GetActiveArrowColor(bool AEnabled);
	System::Uitypes::TColor __fastcall GetActiveBorderColor();
	System::Uitypes::TColor __fastcall GetArrowColor(bool AEnabled);
	System::Uitypes::TColor __fastcall GetBackgroundColor(bool AEnabled);
	System::Uitypes::TColor __fastcall GetBorderColor();
	System::Uitypes::TColor __fastcall GetFocusFrameColor(bool AEnabled);
	System::Uitypes::TColor __fastcall GetHeaderActiveTextColor(bool AEnabled);
	System::Uitypes::TColor __fastcall GetHeaderTextColor(bool AEnabled);
	System::Uitypes::TColor __fastcall GetHotFrameColor(bool AEnabled);
	System::Uitypes::TColor __fastcall GetInActiveCellBGColor(bool AEnabled);
	System::Uitypes::TColor __fastcall GetInActiveCellTextColor(bool AEnabled);
	System::Uitypes::TColor __fastcall GetLineColor();
	System::Uitypes::TColor __fastcall GetSelectionColor(bool AEnabled);
	System::Uitypes::TColor __fastcall GetSelectionColorText(bool AEnabled);
	System::Uitypes::TColor __fastcall GetSelectionFrameColor(bool AEnabled);
	System::Uitypes::TColor __fastcall GetTextColor(bool AEnabled);
	System::Uitypes::TColor __fastcall GetWeekDayColor(bool AEnabled);
	
public:
	virtual void __fastcall DrawCalendarPicker(TDrawParams* ADrawParams, Vcl::Graphics::TCanvas* ACanvas, TCustomCalendarPicker* ACalendarPicker, int ABorderSize, int AIconSize);
	virtual void __fastcall PrepareCalendarBackground(System::Uitypes::TColor &AColor, bool AEnabled);
	virtual void __fastcall PrepareCalendarPickerParams(TDrawParams* ADrawParams, TCustomCalendarPicker* ACalendarPicker, bool AHot, bool APressed, bool AEnabled);
	virtual void __fastcall PrepareCellStyleParams(TDrawViewInfoParams* ADrawParams, TCellItemViewInfo* AViewInfo, bool AEnabled);
	virtual void __fastcall PrepareDaysOfWeekParams(TDrawParams* ADrawParams, bool AEnabled);
	virtual void __fastcall PrepareHeaderParams(TDrawParams* ADrawParams, TCalendarHeaderInfo* AHeader, bool AEnabled);
	virtual void __fastcall PrepareHeaderTextParams(TDrawParams* ADrawParams, TCalendarHeaderText* AHeader, bool AHighlited, bool AEnabled);
	virtual void __fastcall PrepareNavigatorButtonsParams(TDrawParams* ADrawParams, TCalendarHeaderNavigatorButton* AButton, bool AEnabled);
public:
	/* TCalendarViewDrawer.Create */ inline __fastcall TCalendarViewDrawerStyled(TCustomCalendarView* const ACalendarView) : TCalendarViewDrawer(ACalendarView) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TCalendarViewDrawerStyled() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TCustomCalendarView : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
private:
	System::Uitypes::TColor FBorderColor;
	int FBorderSize;
	Vcl::Forms::TFormBorderStyle FBorderStyle;
	int FChangeCounter;
	_di_ICalendarViewController FController;
	System::Uitypes::TColor FDisabledColor;
	TDisplayMode FDisplayMode;
	TCalendarViewDrawer* FDrawer;
	TDaysOfWeek FFirstDayOfWeek;
	int FFirstYear;
	System::Uitypes::TColor FFocusedColor;
	TCalendarHeaderInfo* FHeaderInfo;
	System::Uitypes::TColor FHighlightColor;
	TCalendarViewInfoBase* FLastHoverItem;
	int FLastYear;
	int FMaxYear;
	int FMinYear;
	TItemsInRow FNumberOfWeeksInView;
	System::Classes::TNotifyEvent FOnChange;
	TChangeViewEvent FOnChangeView;
	TDrawViewInfoEvent FOnDrawDayItem;
	TDrawViewInfoEvent FOnDrawMonthItem;
	TDrawViewInfoEvent FOnDrawYearItem;
	System::Generics::Collections::TList__1<System::TDate>* FSelectedDates;
	System::Uitypes::TColor FSelectionColor;
	bool FShowFirstOfGroupLabel;
	System::Uitypes::TColor FTodayColor;
	TCalendarViewViewInfoBase* FViewInfo;
	bool FWasChanged;
	void __fastcall BeginUpdate();
	HIDESBASE void __fastcall Changed();
	TCalendarViewViewInfoBase* __fastcall CreateViewInfo(TDisplayMode ADisplayMode);
	void __fastcall DoOnChange();
	void __fastcall DoOnChangeView(TDisplayMode OldMode, TDisplayMode NewMode);
	bool __fastcall DoStoreDate();
	void __fastcall EndUpdate();
	System::TDate __fastcall GetDate();
	System::TDate __fastcall GetSelectedDates(const int Index);
	int __fastcall GetSelectionCount();
	bool __fastcall GetShowDayOfWeek();
	void __fastcall HoverItemDestroyed(System::TObject* Sender);
	void __fastcall LayoutChanged();
	void __fastcall RecalculateViewInfo();
	void __fastcall RedrawItem(TCalendarViewInfoBase* AItem);
	void __fastcall SetBorderStyle(const Vcl::Forms::TBorderStyle Value);
	void __fastcall SetCurrentHoverItem(TCalendarViewInfoBase* const ANewItem);
	void __fastcall SetDate(const System::TDate Value);
	void __fastcall SetDisplayMode(const TDisplayMode Value);
	void __fastcall SetFirstDayOfWeek(const TDaysOfWeek Value);
	void __fastcall SetFirstYear(const int Value);
	void __fastcall SetHighlightToday(const bool Value);
	void __fastcall SetLastYear(const int Value);
	void __fastcall SetMaxYear(const int Value);
	void __fastcall SetMinYear(const int Value);
	void __fastcall SetSelectionMode(const TSelectionMode Value);
	void __fastcall SetShowDayOfWeek(const bool Value);
	bool __fastcall SetFocusedViewInfo(bool AForward);
	HIDESBASE MESSAGE void __fastcall WMWindowPosChanged(Winapi::Messages::TWMWindowPosMsg &Message);
	
private:
	int FLastFocusedItemIndex;
	bool __fastcall IsDateSelected(System::TDate Date);
	System::TDate __fastcall LimitDate(const System::TDate ADate);
	void __fastcall SetBorderColor(const System::Uitypes::TColor Value);
	void __fastcall SetDisabledColor(const System::Uitypes::TColor Value);
	void __fastcall SetFocusedColor(const System::Uitypes::TColor Value);
	void __fastcall ClearFocusedItems();
	TCalendarViewInfoBase* __fastcall GetFocusedItem();
	void __fastcall SetHighlightColor(const System::Uitypes::TColor Value);
	void __fastcall SetNumberOfWeeksInView(const TItemsInRow Value);
	void __fastcall SetSelectionColor(const System::Uitypes::TColor Value);
	void __fastcall SetShowFirstOfGroupLabel(const bool Value);
	void __fastcall SetTodayColor(const System::Uitypes::TColor Value);
	void __fastcall SetCellsFocused();
	
protected:
	bool FHighlightToday;
	TSelectionMode FSelectionMode;
	bool FShowDayOfWeek;
	virtual bool __fastcall TabIsCyclic();
	
protected:
	bool __fastcall CanSetDisplayDate(const System::TDate Date);
	DYNAMIC void __fastcall ChangeScale(int M, int D, bool isDpiChange)/* overload */;
	void __fastcall ClickOnDate(const System::TDate ADate);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMStyleChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CNKeyDown(Winapi::Messages::TWMKey &Message);
	virtual TCalendarViewDrawer* __fastcall CreateDrawer();
	DYNAMIC bool __fastcall DoMouseWheelDown(System::Classes::TShiftState Shift, const System::Types::TPoint &MousePos);
	DYNAMIC bool __fastcall DoMouseWheelUp(System::Classes::TShiftState Shift, const System::Types::TPoint &MousePos);
	TCalendarViewDrawer* __fastcall NeedDrawer();
	virtual void __fastcall Paint();
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Message);
	MESSAGE void __fastcall WMGetDlgCode(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonDown(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonUp(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMMouseMove(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall CMFocusChanged(Vcl::Controls::TCMFocusChanged &Message);
	__property System::Uitypes::TColor BorderColor = {read=FBorderColor, write=SetBorderColor, default=15132390};
	__property System::TDate Date = {read=GetDate, write=SetDate, stored=DoStoreDate};
	__property System::Uitypes::TColor DisabledColor = {read=FDisabledColor, write=SetDisabledColor, default=-16777201};
	__property TDisplayMode DisplayMode = {read=FDisplayMode, write=SetDisplayMode, default=0};
	__property int FirstYear = {read=FFirstYear, write=SetFirstYear, default=0};
	__property System::Uitypes::TColor FocusedColor = {read=FFocusedColor, write=SetFocusedColor, default=8421504};
	__property TCalendarHeaderInfo* HeaderInfo = {read=FHeaderInfo};
	__property System::Uitypes::TColor HighlightColor = {read=FHighlightColor, write=SetHighlightColor, default=9539985};
	__property bool HighlightToday = {read=FHighlightToday, write=SetHighlightToday, default=1};
	__property int LastYear = {read=FLastYear, write=SetLastYear, default=0};
	__property int MaxYear = {read=FMaxYear, write=SetMaxYear, default=0};
	__property int MinYear = {read=FMinYear, write=SetMinYear, default=0};
	__property System::Uitypes::TColor SelectionColor = {read=FSelectionColor, write=SetSelectionColor, default=-16777203};
	__property TSelectionMode SelectionMode = {read=FSelectionMode, write=SetSelectionMode, default=1};
	__property bool ShowDayOfWeek = {read=GetShowDayOfWeek, write=SetShowDayOfWeek, default=1};
	__property bool ShowFirstOfGroupLabel = {read=FShowFirstOfGroupLabel, write=SetShowFirstOfGroupLabel, default=0};
	__property System::Uitypes::TColor TodayColor = {read=FTodayColor, write=SetTodayColor, default=14120960};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property TChangeViewEvent OnChangeView = {read=FOnChangeView, write=FOnChangeView};
	__property TDrawViewInfoEvent OnDrawDayItem = {read=FOnDrawDayItem, write=FOnDrawDayItem};
	__property TDrawViewInfoEvent OnDrawMonthItem = {read=FOnDrawMonthItem, write=FOnDrawMonthItem};
	__property TDrawViewInfoEvent OnDrawYearItem = {read=FOnDrawYearItem, write=FOnDrawYearItem};
	
public:
	__fastcall virtual TCustomCalendarView(System::Classes::TComponent* Owner);
	__fastcall virtual ~TCustomCalendarView();
	void __fastcall AddToSelectedDates(const System::TDate *Values, const int Values_High)/* overload */;
	void __fastcall AddToSelectedDates(const System::TDate Value)/* overload */;
	void __fastcall AnimationFinished(System::TObject* Sender);
	TCalendarViewViewInfoBase* __fastcall NeedCurrentViewInfo();
	bool __fastcall RemoveFromSelectedDates(const System::TDate Value);
	void __fastcall SetDisplayDate(const System::TDate ADate);
	__property int BorderSize = {read=FBorderSize, nodefault};
	__property Vcl::Forms::TBorderStyle BorderStyle = {read=FBorderStyle, write=SetBorderStyle, default=1};
	__property TDaysOfWeek FirstDayOfWeek = {read=FFirstDayOfWeek, write=SetFirstDayOfWeek, default=0};
	__property TItemsInRow NumberOfWeeksInView = {read=FNumberOfWeeksInView, write=SetNumberOfWeeksInView, default=6};
	__property System::TDate SelectedDates[const int Index] = {read=GetSelectedDates};
	__property int SelectionCount = {read=GetSelectionCount, nodefault};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomCalendarView(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
	/* Hoisted overloads: */
	
protected:
	DYNAMIC inline void __fastcall  ChangeScale(int M, int D){ Vcl::Controls::TControl::ChangeScale(M, D); }
	
};


class PASCALIMPLEMENTATION TCalendarView : public TCustomCalendarView
{
	typedef TCustomCalendarView inherited;
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property BiDiMode;
	__property BorderColor = {default=15132390};
	__property BorderStyle = {default=1};
	__property Color = {default=16777215};
	__property Cursor = {default=0};
	__property Date = {default=0};
	__property DisabledColor = {default=-16777201};
	__property DisplayMode = {default=0};
	__property Enabled = {default=1};
	__property FirstDayOfWeek = {default=0};
	__property FirstYear = {default=0};
	__property FocusedColor = {default=8421504};
	__property Font;
	__property HeaderInfo;
	__property Height = {default=337};
	__property HighlightColor = {default=9539985};
	__property HighlightToday = {default=1};
	__property LastYear = {default=0};
	__property MaxYear = {default=0};
	__property MinYear = {default=0};
	__property NumberOfWeeksInView = {default=6};
	__property OnChange;
	__property OnChangeView;
	__property OnClick;
	__property OnDblClick;
	__property OnDrawDayItem;
	__property OnDrawMonthItem;
	__property OnDrawYearItem;
	__property ParentBiDiMode = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property SelectionColor = {default=-16777203};
	__property SelectionMode = {default=1};
	__property ShowDayOfWeek = {default=1};
	__property ShowFirstOfGroupLabel = {default=0};
	__property ShowHint;
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property TodayColor = {default=14120960};
	__property Touch;
	__property Visible = {default=1};
	__property Width = {default=294};
public:
	/* TCustomCalendarView.Create */ inline __fastcall virtual TCalendarView(System::Classes::TComponent* Owner) : TCustomCalendarView(Owner) { }
	/* TCustomCalendarView.Destroy */ inline __fastcall virtual ~TCalendarView() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TCalendarView(HWND ParentWindow) : TCustomCalendarView(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TPopupCalendarView : public TCustomCalendarView
{
	typedef TCustomCalendarView inherited;
	
private:
	HIDESBASE MESSAGE void __fastcall CMMouseActivate(Vcl::Controls::TCMMouseActivate &Message);
	
protected:
	virtual bool __fastcall TabIsCyclic();
	
protected:
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
public:
	/* TCustomCalendarView.Create */ inline __fastcall virtual TPopupCalendarView(System::Classes::TComponent* Owner) : TCustomCalendarView(Owner) { }
	/* TCustomCalendarView.Destroy */ inline __fastcall virtual ~TPopupCalendarView() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TPopupCalendarView(HWND ParentWindow) : TCustomCalendarView(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TCustomCalendarPicker : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
private:
	TPopupCalendarView* FCalendarView;
	System::TDate FDate;
	System::UnicodeString FDateFormat;
	TDisplayMode FDisplayMode;
	bool FDroppedDown;
	bool FHot;
	bool FIsEmpty;
	System::Classes::TNotifyEvent FOnChange;
	System::Classes::TNotifyEvent FOnCloseUp;
	bool FPressed;
	System::UnicodeString FTextHint;
	void __fastcall CalendarViewChange(System::TObject* Sender);
	MESSAGE void __fastcall CMCancelMode(Vcl::Controls::TCMCancelMode &Message);
	HIDESBASE MESSAGE void __fastcall CMDialogKey(Winapi::Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	void __fastcall DoOnChange();
	System::Uitypes::TColor __fastcall GetBorderColor();
	TCalendarHeaderInfo* __fastcall GetCalendarHeaderInfo();
	System::Uitypes::TColor __fastcall GetColor();
	System::TDate __fastcall GetDate();
	System::Uitypes::TColor __fastcall GetDisabledColor();
	TDaysOfWeek __fastcall GetFirstDayOfWeek();
	int __fastcall GetFirstYear();
	System::Uitypes::TColor __fastcall GetHighlightColor();
	bool __fastcall GetHighlightToday();
	bool __fastcall GetIsEmpty();
	int __fastcall GetLastYear();
	int __fastcall GetMaxYear();
	int __fastcall GetMinYear();
	TItemsInRow __fastcall GetNumberOfWeeksInView();
	TChangeViewEvent __fastcall GetOnCalendarChangeView();
	TDrawViewInfoEvent __fastcall GetOnCalendarDrawDayItem();
	TDrawViewInfoEvent __fastcall GetOnCalendarDrawMonthItem();
	TDrawViewInfoEvent __fastcall GetOnCalendarDrawYearItem();
	System::Uitypes::TColor __fastcall GetSelectionColor();
	bool __fastcall GetShowDayOfWeek();
	bool __fastcall GetShowFirstOfGroupLabel();
	System::Uitypes::TColor __fastcall GetTodayColor();
	void __fastcall SetBorderColor(const System::Uitypes::TColor Value);
	HIDESBASE void __fastcall SetColor(const System::Uitypes::TColor Value);
	void __fastcall SetDate(const System::TDate Value);
	void __fastcall SetDateFormat(const System::UnicodeString Value);
	void __fastcall SetDisabledColor(const System::Uitypes::TColor Value);
	void __fastcall SetDisplayMode(const TDisplayMode Value);
	void __fastcall SetFirstDayOfWeek(const TDaysOfWeek Value);
	void __fastcall SetFirstYear(const int Value);
	void __fastcall SetHighlightColor(const System::Uitypes::TColor Value);
	void __fastcall SetHighlightToday(const bool Value);
	void __fastcall SetIsEmpty(const bool Value);
	void __fastcall SetLastYear(const int Value);
	void __fastcall SetMaxYear(const int Value);
	void __fastcall SetMinYear(const int Value);
	void __fastcall SetNumberOfWeeksInView(const TItemsInRow Value);
	void __fastcall SetOnCalendarChangeView(const TChangeViewEvent Value);
	void __fastcall SetOnCalendarDrawDayItem(const TDrawViewInfoEvent Value);
	void __fastcall SetOnCalendarDrawMonthItem(const TDrawViewInfoEvent Value);
	void __fastcall SetOnCalendarDrawYearItem(const TDrawViewInfoEvent Value);
	void __fastcall SetSelectionColor(const System::Uitypes::TColor Value);
	void __fastcall SetShowDayOfWeek(const bool Value);
	void __fastcall SetShowFirstOfGroupLabel(const bool Value);
	void __fastcall SetTextHint(const System::UnicodeString Value);
	void __fastcall SetTodayColor(const System::Uitypes::TColor Value);
	bool __fastcall StoreDate();
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TWMKillFocus &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonDown(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonUp(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Message);
	
protected:
	DYNAMIC void __fastcall ChangeScale(int M, int D, bool isDpiChange)/* overload */;
	DYNAMIC void __fastcall Click();
	void __fastcall CloseUp(bool Accept);
	HIDESBASE MESSAGE void __fastcall CNKeyDown(Winapi::Messages::TMessage &Message);
	DYNAMIC bool __fastcall DoMouseWheelDown(System::Classes::TShiftState Shift, const System::Types::TPoint &MousePos);
	DYNAMIC bool __fastcall DoMouseWheelUp(System::Classes::TShiftState Shift, const System::Types::TPoint &MousePos);
	void __fastcall DropDown();
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall Paint();
	__property System::Uitypes::TColor BorderColor = {read=GetBorderColor, write=SetBorderColor, default=15132390};
	__property TCalendarHeaderInfo* CalendarHeaderInfo = {read=GetCalendarHeaderInfo};
	__property System::Uitypes::TColor Color = {read=GetColor, write=SetColor, default=0};
	__property System::TDate Date = {read=GetDate, write=SetDate, stored=StoreDate};
	__property System::UnicodeString DateFormat = {read=FDateFormat, write=SetDateFormat};
	__property System::Uitypes::TColor DisabledColor = {read=GetDisabledColor, write=SetDisabledColor, default=-16777201};
	__property TDisplayMode DisplayMode = {read=FDisplayMode, write=SetDisplayMode, default=0};
	__property TDaysOfWeek FirstDayOfWeek = {read=GetFirstDayOfWeek, write=SetFirstDayOfWeek, default=0};
	__property int FirstYear = {read=GetFirstYear, write=SetFirstYear, default=0};
	__property System::Uitypes::TColor HighlightColor = {read=GetHighlightColor, write=SetHighlightColor, default=9539985};
	__property bool HighlightToday = {read=GetHighlightToday, write=SetHighlightToday, default=1};
	__property bool IsEmpty = {read=GetIsEmpty, write=SetIsEmpty, default=1};
	__property int LastYear = {read=GetLastYear, write=SetLastYear, default=0};
	__property int MaxYear = {read=GetMaxYear, write=SetMaxYear, default=0};
	__property int MinYear = {read=GetMinYear, write=SetMinYear, default=0};
	__property TItemsInRow NumberOfWeeksInView = {read=GetNumberOfWeeksInView, write=SetNumberOfWeeksInView, nodefault};
	__property System::Uitypes::TColor SelectionColor = {read=GetSelectionColor, write=SetSelectionColor, default=-16777203};
	__property bool ShowDayOfWeek = {read=GetShowDayOfWeek, write=SetShowDayOfWeek, default=1};
	__property bool ShowFirstOfGroupLabel = {read=GetShowFirstOfGroupLabel, write=SetShowFirstOfGroupLabel, default=0};
	__property TabStop = {default=1};
	__property System::UnicodeString TextHint = {read=FTextHint, write=SetTextHint};
	__property System::Uitypes::TColor TodayColor = {read=GetTodayColor, write=SetTodayColor, default=14120960};
	__property Width = {default=140};
	__property TChangeViewEvent OnCalendarChangeView = {read=GetOnCalendarChangeView, write=SetOnCalendarChangeView};
	__property TDrawViewInfoEvent OnCalendarDrawDayItem = {read=GetOnCalendarDrawDayItem, write=SetOnCalendarDrawDayItem};
	__property TDrawViewInfoEvent OnCalendarDrawMonthItem = {read=GetOnCalendarDrawMonthItem, write=SetOnCalendarDrawMonthItem};
	__property TDrawViewInfoEvent OnCalendarDrawYearItem = {read=GetOnCalendarDrawYearItem, write=SetOnCalendarDrawYearItem};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property System::Classes::TNotifyEvent OnCloseUp = {read=FOnCloseUp, write=FOnCloseUp};
	
public:
	__fastcall virtual TCustomCalendarPicker(System::Classes::TComponent* Owner);
public:
	/* TCustomControl.Destroy */ inline __fastcall virtual ~TCustomCalendarPicker() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomCalendarPicker(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
	/* Hoisted overloads: */
	
protected:
	DYNAMIC inline void __fastcall  ChangeScale(int M, int D){ Vcl::Controls::TControl::ChangeScale(M, D); }
	
};


class PASCALIMPLEMENTATION TCalendarPicker : public TCustomCalendarPicker
{
	typedef TCustomCalendarPicker inherited;
	
public:
	__property DateFormat = {default=0};
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property BiDiMode;
	__property BorderColor = {default=15132390};
	__property CalendarHeaderInfo;
	__property Color = {default=0};
	__property Cursor = {default=0};
	__property Date = {default=0};
	__property DisabledColor = {default=-16777201};
	__property DisplayMode = {default=0};
	__property Enabled = {default=1};
	__property FirstDayOfWeek = {default=0};
	__property FirstYear = {default=0};
	__property Font;
	__property HighlightColor = {default=9539985};
	__property HighlightToday = {default=1};
	__property IsEmpty = {default=1};
	__property LastYear = {default=0};
	__property MaxYear = {default=0};
	__property MinYear = {default=0};
	__property OnCalendarChangeView;
	__property OnCalendarDrawDayItem;
	__property OnCalendarDrawMonthItem;
	__property OnCalendarDrawYearItem;
	__property OnChange;
	__property OnCloseUp;
	__property ParentBiDiMode = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property SelectionColor = {default=-16777203};
	__property ShowDayOfWeek = {default=1};
	__property ShowFirstOfGroupLabel = {default=0};
	__property ShowHint;
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property TextHint = {default=0};
	__property TodayColor = {default=14120960};
	__property Visible = {default=1};
	__property Width = {default=140};
public:
	/* TCustomCalendarPicker.Create */ inline __fastcall virtual TCalendarPicker(System::Classes::TComponent* Owner) : TCustomCalendarPicker(Owner) { }
	
public:
	/* TCustomControl.Destroy */ inline __fastcall virtual ~TCalendarPicker() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TCalendarPicker(HWND ParentWindow) : TCustomCalendarPicker(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const int clCalendarHighlighColor = int(0x919191);
static const int clCalendarBorderColor = int(0xe6e6e6);
static const int clCalendarTodayColor = int(0xd77800);
}	/* namespace Winxcalendars */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_WINXCALENDARS)
using namespace Vcl::Winxcalendars;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_WinxcalendarsHPP
