// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.WinXPickers.pas' rev: 35.00 (Windows)

#ifndef Vcl_WinxpickersHPP
#define Vcl_WinxpickersHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.Generics.Collections.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Themes.hpp>
#include <System.SysUtils.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Menus.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Winxpickers
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TPickerButton;
class DELPHICLASS TPickerColumn;
__interface DELPHIINTERFACE IDateProvider;
typedef System::DelphiInterface<IDateProvider> _di_IDateProvider;
__interface DELPHIINTERFACE ITimeProvider;
typedef System::DelphiInterface<ITimeProvider> _di_ITimeProvider;
class DELPHICLASS TDateProvider;
class DELPHICLASS TTimeProvider;
class DELPHICLASS TDateColumn;
class DELPHICLASS TPickerMonthColumn;
class DELPHICLASS TPickerDayColumn;
class DELPHICLASS TPickerYearColumn;
class DELPHICLASS TTimeColumn;
class DELPHICLASS TPickerHourColumn;
class DELPHICLASS TPickerMinuteColumn;
class DELPHICLASS TPickerSecondColumn;
class DELPHICLASS TPickerAMPMColumn;
class DELPHICLASS TPickerViewInfo;
class DELPHICLASS TPickerCellDrawInfo;
class DELPHICLASS TPickerCellDrawInfoInternal;
class DELPHICLASS TPickerButtonDrawInfo;
class DELPHICLASS TPickerOkCancelButtons;
class DELPHICLASS TPickerDrawer;
class DELPHICLASS TPickerDrawerNative;
class DELPHICLASS TPickerDrawerStyled;
class DELPHICLASS TBasePickerControl;
class DELPHICLASS TCustomDatePicker;
class DELPHICLASS TCustomTimePicker;
class DELPHICLASS TDatePicker;
class DELPHICLASS TTimePicker;
class DELPHICLASS TBasePickerAnimation;
class DELPHICLASS TPickerSlideAnimation;
class DELPHICLASS TPickerPopupControl;
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TDrawPickerCellEvent)(System::TObject* Sender, TPickerCellDrawInfo* PickerCellDrawInfo);

enum DECLSPEC_DENUM TPickerButtonState : unsigned char { pbsNone, pbsHot, pbsPressed };

enum DECLSPEC_DENUM TPickerButtonType : unsigned char { pbtNone, pbtUp, pbtDown, pbtOk, pbtCancel };

typedef System::Int8 TMinuteIncrement;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TPickerButton : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Types::TRect FBoundsRect;
	TPickerButtonType FButtonType;
	TPickerButtonState FState;
	
public:
	__property System::Types::TRect BoundsRect = {read=FBoundsRect, write=FBoundsRect};
	__property TPickerButtonType ButtonType = {read=FButtonType, write=FButtonType, nodefault};
	__property TPickerButtonState State = {read=FState, write=FState, nodefault};
public:
	/* TObject.Create */ inline __fastcall TPickerButton() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TPickerButton() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TPickerColumn : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Types::TRect FBounds;
	TPickerButton* FDownButton;
	int FDrawOffset;
	System::Types::TRect FDropDownBounds;
	TPickerButton* FUpButton;
	void __fastcall SetDrawOffset(int Value);
	
protected:
	virtual int __fastcall GetCurrentValue() = 0 ;
	virtual void __fastcall SetCurrentValue(int Value) = 0 ;
	
public:
	__fastcall virtual TPickerColumn();
	__fastcall virtual ~TPickerColumn();
	virtual int __fastcall CalcNextValue(int Value, /* out */ int &NewNextValue, int Delta);
	virtual int __fastcall GetCyclicValue(int Value);
	virtual int __fastcall GetMaxValue() = 0 ;
	virtual System::Types::TSize __fastcall GetMinSize(Vcl::Graphics::TCanvas* Canvas, Vcl::Graphics::TFont* Font);
	virtual int __fastcall GetMinValue() = 0 ;
	virtual System::UnicodeString __fastcall GetValueString(int Value);
	virtual bool __fastcall IsCyclic();
	virtual int __fastcall LimitValue(int Value);
	virtual bool __fastcall NextValue(int Value, /* out */ int &NextValue);
	virtual bool __fastcall PreviousValue(int Value, /* out */ int &PrevValue);
	__property System::Types::TRect Bounds = {read=FBounds, write=FBounds};
	__property int CurrentValue = {read=GetCurrentValue, write=SetCurrentValue, nodefault};
	__property TPickerButton* DownButton = {read=FDownButton, write=FDownButton};
	__property int DrawOffset = {read=FDrawOffset, write=SetDrawOffset, nodefault};
	__property System::Types::TRect DropDownBounds = {read=FDropDownBounds, write=FDropDownBounds};
	__property TPickerButton* UpButton = {read=FUpButton, write=FUpButton};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TPickerColumnClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TPickerColumnClass);
#endif /* _WIN64 */

__interface  INTERFACE_UUID("{DA63E195-F908-471E-84A7-471D47430EC7}") IDateProvider  : public System::IInterface 
{
	virtual System::TDate __fastcall GetDate() = 0 ;
	virtual int __fastcall GetMaxYear() = 0 ;
	virtual int __fastcall GetMinYear() = 0 ;
	virtual void __fastcall SetDate(System::TDate Value) = 0 ;
	virtual void __fastcall SetMaxYear(int Value) = 0 ;
	virtual void __fastcall SetMinYear(int Value) = 0 ;
	__property System::TDate Date = {read=GetDate, write=SetDate};
	__property int MaxYear = {read=GetMaxYear, write=SetMaxYear};
	__property int MinYear = {read=GetMinYear, write=SetMinYear};
};

__interface  INTERFACE_UUID("{F73D637B-8A48-49EF-9D5A-51B4C8E933F4}") ITimeProvider  : public System::IInterface 
{
	virtual TMinuteIncrement __fastcall GetMinutesIncrement() = 0 ;
	virtual System::TTime __fastcall GetTime() = 0 ;
	virtual bool __fastcall GetUseAmPm() = 0 ;
	virtual void __fastcall SetMinutesIncrement(TMinuteIncrement Value) = 0 ;
	virtual void __fastcall SetTime(System::TTime Value) = 0 ;
	virtual void __fastcall SetUseAmPm(bool Value) = 0 ;
	__property TMinuteIncrement MinutesIncrement = {read=GetMinutesIncrement, write=SetMinutesIncrement};
	__property System::TTime Time = {read=GetTime, write=SetTime};
	__property bool UseAmPm = {read=GetUseAmPm, write=SetUseAmPm};
};

class PASCALIMPLEMENTATION TDateProvider : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	System::TDate FDate;
	int FMaxYear;
	int FMinYear;
	System::TDate __fastcall GetDate();
	int __fastcall GetMaxYear();
	int __fastcall GetMinYear();
	void __fastcall SetDate(System::TDate Value);
	void __fastcall SetMaxYear(int Value);
	void __fastcall SetMinYear(int Value);
	
public:
	__property System::TDate Date = {read=GetDate, write=SetDate};
	__property int MaxYear = {read=GetMaxYear, write=SetMaxYear, nodefault};
	__property int MinYear = {read=GetMinYear, write=SetMinYear, nodefault};
public:
	/* TObject.Create */ inline __fastcall TDateProvider() : System::TInterfacedObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDateProvider() { }
	
private:
	void *__IDateProvider;	// IDateProvider 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {DA63E195-F908-471E-84A7-471D47430EC7}
	operator _di_IDateProvider()
	{
		_di_IDateProvider intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IDateProvider*(void) { return (IDateProvider*)&__IDateProvider; }
	#endif
	
};


class PASCALIMPLEMENTATION TTimeProvider : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	TMinuteIncrement FMinutesIncrement;
	System::TTime FTime;
	bool FUseAmPm;
	TMinuteIncrement __fastcall GetMinutesIncrement();
	System::TTime __fastcall GetTime();
	bool __fastcall GetUseAmPm();
	void __fastcall SetMinutesIncrement(TMinuteIncrement Value);
	void __fastcall SetTime(System::TTime Value);
	void __fastcall SetUseAmPm(bool Value);
	
public:
	__property TMinuteIncrement MinutesIncrement = {read=GetMinutesIncrement, write=SetMinutesIncrement, nodefault};
	__property System::TTime Time = {read=GetTime, write=SetTime};
	__property bool UseAmPm = {read=GetUseAmPm, write=SetUseAmPm, nodefault};
public:
	/* TObject.Create */ inline __fastcall TTimeProvider() : System::TInterfacedObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TTimeProvider() { }
	
private:
	void *__ITimeProvider;	// ITimeProvider 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {F73D637B-8A48-49EF-9D5A-51B4C8E933F4}
	operator _di_ITimeProvider()
	{
		_di_ITimeProvider intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ITimeProvider*(void) { return (ITimeProvider*)&__ITimeProvider; }
	#endif
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TDateColumn : public TPickerColumn
{
	typedef TPickerColumn inherited;
	
private:
	_di_IDateProvider FDateProvider;
	System::TDate __fastcall GetActualDate();
	void __fastcall SetActualDate(System::TDate Value);
	
public:
	__fastcall virtual TDateColumn(const _di_IDateProvider DateProvider);
	__property System::TDate ActualDate = {read=GetActualDate, write=SetActualDate};
	__property _di_IDateProvider DateProvider = {read=FDateProvider};
public:
	/* TPickerColumn.Destroy */ inline __fastcall virtual ~TDateColumn() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TPickerMonthColumn : public TDateColumn
{
	typedef TDateColumn inherited;
	
private:
	System::UnicodeString FMonthFormat;
	
protected:
	virtual int __fastcall GetCurrentValue();
	virtual void __fastcall SetCurrentValue(int Value);
	
public:
	virtual int __fastcall GetMaxValue();
	virtual int __fastcall GetMinValue();
	virtual System::UnicodeString __fastcall GetValueString(int Value);
	__property System::UnicodeString MonthFormat = {read=FMonthFormat, write=FMonthFormat};
public:
	/* TDateColumn.Create */ inline __fastcall virtual TPickerMonthColumn(const _di_IDateProvider DateProvider) : TDateColumn(DateProvider) { }
	
public:
	/* TPickerColumn.Destroy */ inline __fastcall virtual ~TPickerMonthColumn() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TPickerDayColumn : public TDateColumn
{
	typedef TDateColumn inherited;
	
private:
	System::UnicodeString FDaysFormat;
	
protected:
	virtual int __fastcall GetCurrentValue();
	virtual void __fastcall SetCurrentValue(int Value);
	
public:
	virtual int __fastcall GetMaxValue();
	virtual int __fastcall GetMinValue();
	virtual System::UnicodeString __fastcall GetValueString(int Value);
	__property System::UnicodeString DaysFormat = {read=FDaysFormat, write=FDaysFormat};
public:
	/* TDateColumn.Create */ inline __fastcall virtual TPickerDayColumn(const _di_IDateProvider DateProvider) : TDateColumn(DateProvider) { }
	
public:
	/* TPickerColumn.Destroy */ inline __fastcall virtual ~TPickerDayColumn() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TPickerYearColumn : public TDateColumn
{
	typedef TDateColumn inherited;
	
private:
	System::UnicodeString FYearFormat;
	
protected:
	virtual int __fastcall GetCurrentValue();
	virtual void __fastcall SetCurrentValue(int Value);
	
public:
	virtual int __fastcall GetMaxValue();
	virtual int __fastcall GetMinValue();
	virtual System::UnicodeString __fastcall GetValueString(int Value);
	virtual bool __fastcall IsCyclic();
	__property System::UnicodeString YearFormat = {read=FYearFormat, write=FYearFormat};
public:
	/* TDateColumn.Create */ inline __fastcall virtual TPickerYearColumn(const _di_IDateProvider DateProvider) : TDateColumn(DateProvider) { }
	
public:
	/* TPickerColumn.Destroy */ inline __fastcall virtual ~TPickerYearColumn() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TTimeColumn : public TPickerColumn
{
	typedef TPickerColumn inherited;
	
private:
	_di_ITimeProvider FTimeProvider;
	System::TTime __fastcall GetActualTime();
	void __fastcall SetActualTime(System::TTime Value);
	
public:
	__fastcall virtual TTimeColumn(const _di_ITimeProvider TimeProvider);
	__property System::TTime ActualTime = {read=GetActualTime, write=SetActualTime};
	__property _di_ITimeProvider TimeProvider = {read=FTimeProvider};
public:
	/* TPickerColumn.Destroy */ inline __fastcall virtual ~TTimeColumn() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TPickerHourColumn : public TTimeColumn
{
	typedef TTimeColumn inherited;
	
private:
	System::UnicodeString FHourFormat;
	void __fastcall SetHourFormat(const System::UnicodeString Value);
	
protected:
	virtual int __fastcall GetCurrentValue();
	virtual void __fastcall SetCurrentValue(int Value);
	
public:
	virtual int __fastcall GetMaxValue();
	virtual int __fastcall GetMinValue();
	virtual System::UnicodeString __fastcall GetValueString(int Value);
	__property System::UnicodeString HourFormat = {read=FHourFormat, write=SetHourFormat};
public:
	/* TTimeColumn.Create */ inline __fastcall virtual TPickerHourColumn(const _di_ITimeProvider TimeProvider) : TTimeColumn(TimeProvider) { }
	
public:
	/* TPickerColumn.Destroy */ inline __fastcall virtual ~TPickerHourColumn() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TPickerMinuteColumn : public TTimeColumn
{
	typedef TTimeColumn inherited;
	
private:
	System::UnicodeString FMinuteFormat;
	void __fastcall SetMinuteFormat(const System::UnicodeString Value);
	
protected:
	virtual int __fastcall GetCurrentValue();
	virtual void __fastcall SetCurrentValue(int Value);
	
public:
	virtual int __fastcall GetMaxValue();
	virtual int __fastcall GetMinValue();
	virtual System::UnicodeString __fastcall GetValueString(int Value);
	virtual bool __fastcall NextValue(int Value, /* out */ int &NextValue);
	virtual bool __fastcall PreviousValue(int Value, /* out */ int &PrevValue);
	__property System::UnicodeString MinuteFormat = {read=FMinuteFormat, write=SetMinuteFormat};
public:
	/* TTimeColumn.Create */ inline __fastcall virtual TPickerMinuteColumn(const _di_ITimeProvider TimeProvider) : TTimeColumn(TimeProvider) { }
	
public:
	/* TPickerColumn.Destroy */ inline __fastcall virtual ~TPickerMinuteColumn() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TPickerSecondColumn : public TTimeColumn
{
	typedef TTimeColumn inherited;
	
private:
	System::UnicodeString FSecondFormat;
	void __fastcall SetSecondFormat(const System::UnicodeString Value);
	
protected:
	virtual int __fastcall GetCurrentValue();
	virtual void __fastcall SetCurrentValue(int Value);
	
public:
	virtual int __fastcall GetMaxValue();
	virtual int __fastcall GetMinValue();
	virtual System::UnicodeString __fastcall GetValueString(int Value);
	__property System::UnicodeString SecondFormat = {read=FSecondFormat, write=SetSecondFormat};
public:
	/* TTimeColumn.Create */ inline __fastcall virtual TPickerSecondColumn(const _di_ITimeProvider TimeProvider) : TTimeColumn(TimeProvider) { }
	
public:
	/* TPickerColumn.Destroy */ inline __fastcall virtual ~TPickerSecondColumn() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TPickerAMPMColumn : public TTimeColumn
{
	typedef TTimeColumn inherited;
	
private:
	bool FAm;
	System::UnicodeString FAMPMFormat;
	void __fastcall SetAMPMFormat(const System::UnicodeString Value);
	
protected:
	virtual int __fastcall GetCurrentValue();
	virtual void __fastcall SetCurrentValue(int Value);
	
public:
	virtual int __fastcall GetMaxValue();
	virtual int __fastcall GetMinValue();
	virtual System::UnicodeString __fastcall GetValueString(int Value);
	virtual bool __fastcall IsCyclic();
	__property System::UnicodeString AMPMFormat = {read=FAMPMFormat, write=SetAMPMFormat};
public:
	/* TTimeColumn.Create */ inline __fastcall virtual TPickerAMPMColumn(const _di_ITimeProvider TimeProvider) : TTimeColumn(TimeProvider) { }
	
public:
	/* TPickerColumn.Destroy */ inline __fastcall virtual ~TPickerAMPMColumn() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TPickerViewInfo : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Uitypes::TColor FBorderColor;
	int FBorderSize;
	System::Uitypes::TColor FColor;
	int FDropDownCount;
	Vcl::Graphics::TFont* FFont;
	System::Uitypes::TColor FHighlightColor;
	int FItemHeight;
	bool FShowOkCancel;
	void __fastcall SetFont(Vcl::Graphics::TFont* Value);
	
public:
	__fastcall TPickerViewInfo();
	__fastcall virtual ~TPickerViewInfo();
	__property System::Uitypes::TColor BorderColor = {read=FBorderColor, write=FBorderColor, nodefault};
	__property int BorderSize = {read=FBorderSize, write=FBorderSize, nodefault};
	__property System::Uitypes::TColor Color = {read=FColor, write=FColor, nodefault};
	__property int DropDownCount = {read=FDropDownCount, write=FDropDownCount, nodefault};
	__property Vcl::Graphics::TFont* Font = {read=FFont, write=SetFont};
	__property System::Uitypes::TColor HighlightColor = {read=FHighlightColor, write=FHighlightColor, nodefault};
	__property int ItemHeight = {read=FItemHeight, write=FItemHeight, nodefault};
	__property bool ShowOkCancel = {read=FShowOkCancel, write=FShowOkCancel, nodefault};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TPickerCellDrawInfo : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Types::TRect FBounds;
	System::Uitypes::TColor FColor;
	Vcl::Graphics::TFont* FFont;
	System::Uitypes::TColor FHighlightColor;
	bool FHighlighted;
	System::UnicodeString FText;
	void __fastcall SetFont(Vcl::Graphics::TFont* Value);
	
public:
	__fastcall TPickerCellDrawInfo();
	__fastcall virtual ~TPickerCellDrawInfo();
	__property System::Types::TRect Bounds = {read=FBounds, write=FBounds};
	__property System::Uitypes::TColor Color = {read=FColor, write=FColor, nodefault};
	__property Vcl::Graphics::TFont* Font = {read=FFont, write=SetFont};
	__property System::Uitypes::TColor HighlightColor = {read=FHighlightColor, write=FHighlightColor, nodefault};
	__property bool Highlighted = {read=FHighlighted, write=FHighlighted, nodefault};
	__property System::UnicodeString Text = {read=FText, write=FText};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TPickerCellDrawInfoInternal : public TPickerCellDrawInfo
{
	typedef TPickerCellDrawInfo inherited;
	
private:
	System::Uitypes::TColor FBorderColor;
	int FBorderSize;
	bool FSelected;
	
public:
	__property System::Uitypes::TColor BorderColor = {read=FBorderColor, write=FBorderColor, nodefault};
	__property int BorderSize = {read=FBorderSize, write=FBorderSize, nodefault};
	__property bool Selected = {read=FSelected, write=FSelected, nodefault};
public:
	/* TPickerCellDrawInfo.Create */ inline __fastcall TPickerCellDrawInfoInternal() : TPickerCellDrawInfo() { }
	/* TPickerCellDrawInfo.Destroy */ inline __fastcall virtual ~TPickerCellDrawInfoInternal() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TPickerButtonDrawInfo : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int FBorderWidth;
	TPickerButton* FButton;
	System::Uitypes::TColor FColor;
	System::Uitypes::TColor FForegroundColor;
	int FPenWidth;
	TPickerButtonType __fastcall GetButtonType();
	
public:
	__property int BorderWidth = {read=FBorderWidth, write=FBorderWidth, nodefault};
	__property TPickerButton* Button = {read=FButton, write=FButton};
	__property TPickerButtonType ButtonType = {read=GetButtonType, nodefault};
	__property System::Uitypes::TColor Color = {read=FColor, write=FColor, nodefault};
	__property System::Uitypes::TColor ForegroundColor = {read=FForegroundColor, write=FForegroundColor, nodefault};
	__property int PenWidth = {read=FPenWidth, write=FPenWidth, nodefault};
public:
	/* TObject.Create */ inline __fastcall TPickerButtonDrawInfo() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TPickerButtonDrawInfo() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TPickerOkCancelButtons : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Types::TRect FBounds;
	TPickerButton* FCancelButton;
	TPickerButton* FOkButton;
	
public:
	__fastcall TPickerOkCancelButtons();
	__fastcall virtual ~TPickerOkCancelButtons();
	void __fastcall Calculate(const System::Types::TRect &Rect, int ItemHeight, int BorderWidth);
	__property System::Types::TRect Bounds = {read=FBounds, write=FBounds};
	__property TPickerButton* CancelButton = {read=FCancelButton, write=FCancelButton};
	__property TPickerButton* OkButton = {read=FOkButton, write=FOkButton};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TPickerDrawer : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	TBasePickerControl* FPickerControl;
	System::Uitypes::TColor __fastcall MiddleColor(System::Uitypes::TColor Color1, System::Uitypes::TColor Color2, double Coeff = 5.000000E-01);
	
protected:
	Vcl::Themes::TCustomStyleServices* __fastcall StyleServices();
	
public:
	__fastcall virtual TPickerDrawer(TBasePickerControl* Picker);
	virtual void __fastcall DrawCell(Vcl::Graphics::TCanvas* Canvas, TPickerCellDrawInfoInternal* DrawInfo);
	virtual void __fastcall DrawOkCancel(Vcl::Graphics::TCanvas* Canvas, TPickerOkCancelButtons* Buttons, TPickerButtonDrawInfo* DrawInfo, System::Uitypes::TColor BorderColor);
	virtual void __fastcall DrawPickerBorder(Vcl::Graphics::TCanvas* Canvas, int BorderWidth, TPickerColumn* PickerColumn, System::Uitypes::TColor BorderColor);
	virtual void __fastcall DrawPickerButton(Vcl::Graphics::TCanvas* Canvas, TPickerButtonDrawInfo* DrawInfo);
	virtual void __fastcall DrawPickerCell(Vcl::Graphics::TCanvas* Canvas, TPickerCellDrawInfoInternal* DrawInfo);
	void __fastcall DrawPickerColumn(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &DrawRect, System::Uitypes::TColor Color);
	void __fastcall DrawSelectedRect(Vcl::Graphics::TCanvas* Canvas, System::Types::TRect &DrawRect, int BorderWidth);
	virtual System::Uitypes::TColor __fastcall GetBorderColor(bool Hot, bool Pressed);
	virtual System::Uitypes::TColor __fastcall GetButtonColor(bool Hot, bool Pressed);
	virtual System::Uitypes::TColor __fastcall GetButtonFontColor(bool Hot, bool Pressed);
	virtual System::Uitypes::TColor __fastcall GetColor(bool Hot, bool Pressed, bool Enabled);
	virtual System::Uitypes::TColor __fastcall GetFontColor();
	virtual System::Uitypes::TColor __fastcall GetHighlightColor();
	virtual System::Uitypes::TColor __fastcall GetPopupColor();
	virtual System::Uitypes::TColor __fastcall GetSelectionColor();
	virtual System::Uitypes::TColor __fastcall GetSelectionFontColor();
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TPickerDrawer() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TPickerDrawerNative : public TPickerDrawer
{
	typedef TPickerDrawer inherited;
	
public:
	/* TPickerDrawer.Create */ inline __fastcall virtual TPickerDrawerNative(TBasePickerControl* Picker) : TPickerDrawer(Picker) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TPickerDrawerNative() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TPickerDrawerStyled : public TPickerDrawer
{
	typedef TPickerDrawer inherited;
	
public:
	virtual System::Uitypes::TColor __fastcall GetBorderColor(bool Hot, bool Pressed);
	virtual System::Uitypes::TColor __fastcall GetButtonColor(bool Hot, bool Pressed);
	virtual System::Uitypes::TColor __fastcall GetButtonFontColor(bool Hot, bool Pressed);
	virtual System::Uitypes::TColor __fastcall GetColor(bool Hot, bool Pressed, bool Enabled);
	virtual System::Uitypes::TColor __fastcall GetFontColor();
	virtual System::Uitypes::TColor __fastcall GetHighlightColor();
	virtual System::Uitypes::TColor __fastcall GetPopupColor();
	virtual System::Uitypes::TColor __fastcall GetSelectionColor();
	virtual System::Uitypes::TColor __fastcall GetSelectionFontColor();
public:
	/* TPickerDrawer.Create */ inline __fastcall virtual TPickerDrawerStyled(TBasePickerControl* Picker) : TPickerDrawer(Picker) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TPickerDrawerStyled() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TBasePickerControl : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
private:
	System::Uitypes::TColor FBorderColor;
	Vcl::Forms::TFormBorderStyle FBorderStyle;
	int FDropDownCount;
	bool FDroppedDown;
	System::Uitypes::TColor FHighlightColor;
	System::Uitypes::TColor FHotColor;
	bool FHot;
	System::Classes::TNotifyEvent FOnChange;
	System::Classes::TNotifyEvent FOnCloseUp;
	TDrawPickerCellEvent FOnDrawCell;
	TDrawPickerCellEvent FOnDrawPickerCell;
	System::Uitypes::TColor FPopupColor;
	bool FPressed;
	System::Uitypes::TColor FSelectionColor;
	System::Uitypes::TColor FSelectionFontColor;
	bool FShowOkCancel;
	void __fastcall SetBorderColor(System::Uitypes::TColor Value);
	void __fastcall SetBorderStyle(Vcl::Forms::TBorderStyle Value);
	void __fastcall SetDropDownCount(int Value);
	void __fastcall SetHighlightColor(System::Uitypes::TColor Value);
	void __fastcall SetHot(bool Value);
	void __fastcall SetHotColor(System::Uitypes::TColor Value);
	void __fastcall SetPopupColor(System::Uitypes::TColor Value);
	void __fastcall SetPressed(bool Value);
	void __fastcall SetSelectionColor(System::Uitypes::TColor Value);
	void __fastcall SetSelectionFontColor(System::Uitypes::TColor Value);
	void __fastcall SetShowOkCancel(bool Value);
	__property bool Hot = {read=FHot, write=SetHot, nodefault};
	__property bool Pressed = {read=FPressed, write=SetPressed, nodefault};
	MESSAGE void __fastcall CMCancelMode(Vcl::Controls::TCMCancelMode &Msg);
	HIDESBASE MESSAGE void __fastcall CMDialogKey(Winapi::Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Msg);
	MESSAGE void __fastcall CMStyleChanged(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall CNKeyDown(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TWMKillFocus &Msg);
	HIDESBASE MESSAGE void __fastcall WMLButtonDown(Winapi::Messages::TWMMouse &Msg);
	HIDESBASE MESSAGE void __fastcall WMLButtonUp(Winapi::Messages::TWMMouse &Msg);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Msg);
	
protected:
	static const int DefaultBorderColor = int(-16777200);
	
	static const int DefaultPopupColor = int(-16777211);
	
	static const System::Int8 DefaultFontSize = System::Int8(0xc);
	
	int FBorderSize;
	System::Generics::Collections::TObjectList__1<TPickerColumn*>* FColumns;
	TPickerDrawer* FDrawer;
	TPickerPopupControl* FPopupControl;
	virtual void __fastcall AcceptDropDown() = 0 ;
	DYNAMIC void __fastcall AdjustSize();
	System::Types::TSize __fastcall CalcSizes(const System::Types::TSize &MinSize);
	virtual bool __fastcall CanResize(int &NewWidth, int &NewHeight);
	DYNAMIC void __fastcall ChangeScale(int M, int D, bool isDpiChange)/* overload */;
	DYNAMIC void __fastcall Click();
	virtual TPickerDrawer* __fastcall CreateDrawer();
	virtual void __fastcall CreateWnd();
	virtual void __fastcall DefineColumns(System::Generics::Collections::TList__1<TPickerColumn*>* Columns) = 0 ;
	virtual void __fastcall InitColumns() = 0 ;
	void __fastcall InitPopup();
	void __fastcall DoDrawPickerCell(System::TObject* Sender, TPickerCellDrawInfo* PickerCellDrawInfo);
	DYNAMIC bool __fastcall DoMouseWheelDown(System::Classes::TShiftState Shift, const System::Types::TPoint &MousePos);
	DYNAMIC bool __fastcall DoMouseWheelUp(System::Classes::TShiftState Shift, const System::Types::TPoint &MousePos);
	void __fastcall DoOnChange();
	template<typename T> T __fastcall GetColumnByClass();
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	TPickerDrawer* __fastcall NeedDrawer();
	virtual void __fastcall Paint();
	virtual void __fastcall ParseFormat(const System::UnicodeString Format) = 0 ;
	virtual void __fastcall RejectDropDown() = 0 ;
	
public:
	__fastcall virtual TBasePickerControl(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TBasePickerControl();
	virtual bool __fastcall CanModify();
	void __fastcall CloseUp(bool Accept);
	void __fastcall DropDown();
	__property System::Uitypes::TColor BorderColor = {read=FBorderColor, write=SetBorderColor, default=-16777200};
	__property Vcl::Forms::TBorderStyle BorderStyle = {read=FBorderStyle, write=SetBorderStyle, default=1};
	__property int DropDownCount = {read=FDropDownCount, write=SetDropDownCount, default=7};
	__property System::Uitypes::TColor HighlightColor = {read=FHighlightColor, write=SetHighlightColor, default=-16777201};
	__property System::Uitypes::TColor HotColor = {read=FHotColor, write=SetHotColor, default=-16777196};
	__property System::Uitypes::TColor PopupColor = {read=FPopupColor, write=SetPopupColor, default=-16777211};
	__property System::Uitypes::TColor SelectionColor = {read=FSelectionColor, write=SetSelectionColor, default=-16777203};
	__property System::Uitypes::TColor SelectionFontColor = {read=FSelectionFontColor, write=SetSelectionFontColor, default=-16777202};
	__property bool ShowOkCancel = {read=FShowOkCancel, write=SetShowOkCancel, default=1};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property System::Classes::TNotifyEvent OnCloseUp = {read=FOnCloseUp, write=FOnCloseUp};
	__property TDrawPickerCellEvent OnDrawCell = {read=FOnDrawCell, write=FOnDrawCell};
	__property TDrawPickerCellEvent OnDrawPickerCell = {read=FOnDrawPickerCell, write=FOnDrawPickerCell};
public:
	/* TWinControl.CreateParented */ inline __fastcall TBasePickerControl(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
	/* Hoisted overloads: */
	
protected:
	DYNAMIC inline void __fastcall  ChangeScale(int M, int D){ Vcl::Controls::TControl::ChangeScale(M, D); }
	
};


class PASCALIMPLEMENTATION TCustomDatePicker : public TBasePickerControl
{
	typedef TBasePickerControl inherited;
	
private:
	System::TDate FDate;
	System::UnicodeString FDateFormat;
	_di_IDateProvider FDateProvider;
	System::TDate __fastcall GetDate();
	System::TDate __fastcall GetDateFromColumns();
	bool __fastcall GetDayVisible();
	int __fastcall GetMaxYear();
	int __fastcall GetMinYear();
	bool __fastcall GetMonthVisible();
	bool __fastcall GetYearVisible();
	void __fastcall SetDate(System::TDate Value);
	void __fastcall SetDateFormat(const System::UnicodeString Value);
	void __fastcall SetDateToColumns(System::TDate Value);
	void __fastcall SetMaxYear(int Value);
	void __fastcall SetMinYear(int Value);
	
protected:
	virtual void __fastcall DefineColumns(System::Generics::Collections::TList__1<TPickerColumn*>* Columns);
	virtual void __fastcall InitColumns();
	virtual void __fastcall AcceptDropDown();
	virtual void __fastcall RejectDropDown();
	virtual void __fastcall ParseFormat(const System::UnicodeString Format);
	static const System::Word DefaultMinYear = System::Word(0x76c);
	
	static const System::Word DefaultMaxYear = System::Word(0xbb8);
	
	
public:
	__fastcall virtual TCustomDatePicker(System::Classes::TComponent* AOwner);
	__property System::TDate Date = {read=GetDate, write=SetDate};
	__property System::UnicodeString DateFormat = {read=FDateFormat, write=SetDateFormat};
	__property bool DayVisible = {read=GetDayVisible, nodefault};
	__property int MaxYear = {read=GetMaxYear, write=SetMaxYear, default=3000};
	__property int MinYear = {read=GetMinYear, write=SetMinYear, default=1900};
	__property bool MonthVisible = {read=GetMonthVisible, nodefault};
	__property bool YearVisible = {read=GetYearVisible, nodefault};
public:
	/* TBasePickerControl.Destroy */ inline __fastcall virtual ~TCustomDatePicker() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomDatePicker(HWND ParentWindow) : TBasePickerControl(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TCustomTimePicker : public TBasePickerControl
{
	typedef TBasePickerControl inherited;
	
private:
	System::TTime FTime;
	System::UnicodeString FTimeFormat;
	_di_ITimeProvider FTimeProvider;
	TMinuteIncrement __fastcall GetMinuteIncrement();
	System::TTime __fastcall GetTimeFromColumns();
	void __fastcall SetMinuteIncrement(TMinuteIncrement Value);
	void __fastcall SetTime(System::TTime Value);
	void __fastcall SetTimeFormat(const System::UnicodeString Value);
	void __fastcall SetTimeToColumns(System::TTime Value);
	
protected:
	virtual void __fastcall DefineColumns(System::Generics::Collections::TList__1<TPickerColumn*>* Columns);
	virtual void __fastcall InitColumns();
	virtual void __fastcall AcceptDropDown();
	virtual void __fastcall RejectDropDown();
	virtual void __fastcall ParseFormat(const System::UnicodeString Format);
	
public:
	__fastcall virtual TCustomTimePicker(System::Classes::TComponent* AOwner);
	__property TMinuteIncrement MinuteIncrement = {read=GetMinuteIncrement, write=SetMinuteIncrement, default=1};
	__property System::TTime Time = {read=FTime, write=SetTime};
	__property System::UnicodeString TimeFormat = {read=FTimeFormat, write=SetTimeFormat};
public:
	/* TBasePickerControl.Destroy */ inline __fastcall virtual ~TCustomTimePicker() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomTimePicker(HWND ParentWindow) : TBasePickerControl(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TDatePicker : public TCustomDatePicker
{
	typedef TCustomDatePicker inherited;
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property BorderStyle = {default=1};
	__property Color = {default=-16777211};
	__property Date = {default=0};
	__property DateFormat = {default=0};
	__property DropDownCount = {default=7};
	__property Enabled = {default=1};
	__property Font;
	__property Height = {default=32};
	__property HighlightColor = {default=-16777201};
	__property MaxYear = {default=3000};
	__property MinYear = {default=1900};
	__property PopupColor = {default=-16777211};
	__property PopupMenu;
	__property SelectionColor = {default=-16777203};
	__property SelectionFontColor = {default=-16777202};
	__property ShowHint;
	__property ShowOkCancel = {default=1};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Width = {default=150};
	__property OnChange;
	__property OnClick;
	__property OnCloseUp;
	__property OnDblClick;
	__property OnDrawCell;
	__property OnDrawPickerCell;
public:
	/* TCustomDatePicker.Create */ inline __fastcall virtual TDatePicker(System::Classes::TComponent* AOwner) : TCustomDatePicker(AOwner) { }
	
public:
	/* TBasePickerControl.Destroy */ inline __fastcall virtual ~TDatePicker() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TDatePicker(HWND ParentWindow) : TCustomDatePicker(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TTimePicker : public TCustomTimePicker
{
	typedef TCustomTimePicker inherited;
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property BorderStyle = {default=1};
	__property Color = {default=-16777211};
	__property DropDownCount = {default=7};
	__property Enabled = {default=1};
	__property Font;
	__property Height = {default=32};
	__property HighlightColor = {default=-16777201};
	__property MinuteIncrement = {default=1};
	__property PopupColor = {default=-16777211};
	__property PopupMenu;
	__property SelectionColor = {default=-16777203};
	__property SelectionFontColor = {default=-16777202};
	__property ShowHint;
	__property ShowOkCancel = {default=1};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Time = {default=0};
	__property TimeFormat = {default=0};
	__property Width = {default=150};
	__property OnChange;
	__property OnClick;
	__property OnCloseUp;
	__property OnDblClick;
	__property OnDrawCell;
	__property OnDrawPickerCell;
public:
	/* TCustomTimePicker.Create */ inline __fastcall virtual TTimePicker(System::Classes::TComponent* AOwner) : TCustomTimePicker(AOwner) { }
	
public:
	/* TBasePickerControl.Destroy */ inline __fastcall virtual ~TTimePicker() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TTimePicker(HWND ParentWindow) : TCustomTimePicker(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TBasePickerAnimation : public System::TObject
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
	void __fastcall TimerTick(System::TObject* Sender);
	
protected:
	virtual void __fastcall Animate(unsigned Current) = 0 ;
	virtual void __fastcall DoOnFinish();
	virtual void __fastcall DoPrepare();
	
public:
	__fastcall virtual ~TBasePickerAnimation();
	void __fastcall Finish();
	void __fastcall Start(unsigned Duration, unsigned Interval);
	void __fastcall StartDefault();
	__property unsigned Duration = {read=FDuration, write=FDuration, nodefault};
	__property unsigned Interval = {read=FInterval, write=FInterval, nodefault};
	__property bool IsStarted = {read=FIsStarted, write=FIsStarted, nodefault};
	__property unsigned WhenStarted = {read=FWhenStarted, nodefault};
	__property System::Classes::TNotifyEvent OnFinished = {read=FOnFinished, write=FOnFinished};
	__property System::Classes::TNotifyEvent OnStarted = {read=FOnStarted, write=FOnStarted};
public:
	/* TObject.Create */ inline __fastcall TBasePickerAnimation() : System::TObject() { }
	
};


class PASCALIMPLEMENTATION TPickerSlideAnimation : public TBasePickerAnimation
{
	typedef TBasePickerAnimation inherited;
	
private:
	double FCoef;
	TPickerColumn* FColumn;
	TPickerPopupControl* FControl;
	int FDelta;
	int FNextValue;
	
protected:
	virtual void __fastcall Animate(unsigned Current);
	virtual void __fastcall DoOnFinish();
	virtual void __fastcall DoPrepare();
	
public:
	__property TPickerColumn* Column = {read=FColumn, write=FColumn};
	__property TPickerPopupControl* Control = {read=FControl, write=FControl};
	__property int Delta = {read=FDelta, write=FDelta, nodefault};
	__property int NextValue = {read=FNextValue, write=FNextValue, nodefault};
public:
	/* TBasePickerAnimation.Destroy */ inline __fastcall virtual ~TPickerSlideAnimation() { }
	
public:
	/* TObject.Create */ inline __fastcall TPickerSlideAnimation() : TBasePickerAnimation() { }
	
};


class PASCALIMPLEMENTATION TPickerPopupControl : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
private:
	TBasePickerAnimation* FAnimation;
	System::Uitypes::TColor FBorderColor;
	int FBorderSize;
#ifndef _WIN64
	System::DynamicArray<TPickerColumn*> FColumns;
#else /* _WIN64 */
	System::TArray__1<TPickerColumn*> FColumns;
#endif /* _WIN64 */
	TPickerDrawer* FDrawer;
	int FDropDownCount;
	System::Uitypes::TColor FHighlightColor;
	System::Uitypes::TColor FHotColor;
	int FItemHeight;
	int FMouseOver;
	System::Types::TPoint FMouseOverPoint;
	int FMouseOverValue;
	TPickerOkCancelButtons* FOkCancelButtons;
	TDrawPickerCellEvent FOnDrawCell;
	Vcl::Controls::TWinControl* FParentOwner;
	System::Uitypes::TColor FSelectionColor;
	System::Uitypes::TColor FSelectionFontColor;
	System::Types::TRect FSelectRect;
	bool FShowOkCancel;
	void __fastcall AnimateColumnValueChanged(TPickerColumn* Column, int NextValue, int Delta);
	void __fastcall Calculate();
	bool __fastcall GetCellValueByMousePos(const System::Types::TPoint &Point, /* out */ int &ResultValue, /* out */ int &ResultDelta);
	TPickerColumn* __fastcall GetColumnByMousePos(const System::Types::TPoint &Point);
	void __fastcall SetBorderColor(System::Uitypes::TColor Value);
	void __fastcall SetDropDownCount(int Value);
	void __fastcall SetHighlightColor(System::Uitypes::TColor Value);
	void __fastcall SetHotColor(System::Uitypes::TColor Value);
	void __fastcall SetMouseOver(int Value);
	void __fastcall SetMouseOverPoint(const System::Types::TPoint &Value);
	void __fastcall SetMouseOverValue(int Value);
	void __fastcall SetSelectionColor(System::Uitypes::TColor Value);
	void __fastcall SetSelectionFontColor(System::Uitypes::TColor Value);
	void __fastcall SetShowOkCancel(bool Value);
	void __fastcall UpdateHoverItems(const System::Types::TPoint &Point);
	HIDESBASE MESSAGE void __fastcall CMMouseActivate(Vcl::Controls::TCMMouseActivate &Msg);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall CNKeyDown(Winapi::Messages::TWMKey &Msg);
	MESSAGE void __fastcall WMGetDlgCode(Winapi::Messages::TWMNoParams &Msg);
	HIDESBASE MESSAGE void __fastcall WMLButtonDown(Winapi::Messages::TWMMouse &Msg);
	HIDESBASE MESSAGE void __fastcall WMLButtonUp(Winapi::Messages::TWMMouse &Msg);
	
protected:
	static const System::Int8 ArrowWidth = System::Int8(0x2);
	
	static const System::Int8 ScrollButtonHeight = System::Int8(0x10);
	
	void __fastcall DoDrawCell(System::TObject* Sender, TPickerCellDrawInfo* PickerCellDrawInfo);
	DYNAMIC bool __fastcall DoMouseWheelDown(System::Classes::TShiftState Shift, const System::Types::TPoint &MousePos);
	DYNAMIC bool __fastcall DoMouseWheelUp(System::Classes::TShiftState Shift, const System::Types::TPoint &MousePos);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall Paint();
	virtual void __fastcall PaintCell(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &Rect, const System::UnicodeString Text, TPickerDrawer* Drawer, bool Highlighted, bool Selected);
	virtual void __fastcall PaintColumn(Vcl::Graphics::TCanvas* Canvas, TPickerColumn* Column, TPickerDrawer* Drawer, int ColumnIndex)/* overload */;
	virtual void __fastcall PaintColumn(TPickerColumn* Column, TPickerDrawer* Drawer, int ColumnIndex)/* overload */;
	virtual void __fastcall PaintOkCancel(Vcl::Graphics::TCanvas* Canvas, TPickerDrawer* Drawer);
	__property int MouseOver = {read=FMouseOver, write=SetMouseOver, nodefault};
	__property System::Types::TPoint MouseOverPoint = {read=FMouseOverPoint, write=SetMouseOverPoint};
	__property int MouseOverValue = {read=FMouseOverValue, write=SetMouseOverValue, nodefault};
	
public:
	__fastcall virtual TPickerPopupControl(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TPickerPopupControl();
	void __fastcall AnimationFinished(System::TObject* Sender);
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	void __fastcall Init(Vcl::Controls::TWinControl* ParentOwner, System::Generics::Collections::TList__1<TPickerColumn*>* Columns, TPickerViewInfo* ViewInfo, TDrawPickerCellEvent OnDrawEvent, TPickerDrawer* Drawer);
	void __fastcall PaintColumns(Vcl::Graphics::TCanvas* const Canvas, TPickerDrawer* const Drawer);
	__property System::Uitypes::TColor BorderColor = {read=FBorderColor, write=SetBorderColor, nodefault};
	__property int DropDownCount = {read=FDropDownCount, write=SetDropDownCount, default=7};
	__property System::Uitypes::TColor HighlightColor = {read=FHighlightColor, write=SetHighlightColor, default=-16777201};
	__property System::Uitypes::TColor HotColor = {read=FHotColor, write=SetHotColor, default=-16777196};
	__property System::Uitypes::TColor SelectionColor = {read=FSelectionColor, write=SetSelectionColor, default=-16777203};
	__property System::Uitypes::TColor SelectionFontColor = {read=FSelectionFontColor, write=SetSelectionFontColor, default=-16777202};
	__property bool ShowOkCancel = {read=FShowOkCancel, write=SetShowOkCancel, nodefault};
	__property TDrawPickerCellEvent OnDrawCell = {read=FOnDrawCell, write=FOnDrawCell};
public:
	/* TWinControl.CreateParented */ inline __fastcall TPickerPopupControl(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Byte DefaultPickerWidth = System::Byte(0x96);
static const System::Int8 DefaultPickerHeight = System::Int8(0x20);
static const System::Int8 DefaultPickerDropDownCount = System::Int8(0x7);
static const int DefaultPickerHotColor = int(-16777196);
static const int DefaultPickerHighlightColor = int(-16777201);
static const int DefaultPickerSelectionColor = int(-16777203);
static const int DefaultPickerSelectionFontColor = int(-16777202);
}	/* namespace Winxpickers */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_WINXPICKERS)
using namespace Vcl::Winxpickers;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_WinxpickersHPP
