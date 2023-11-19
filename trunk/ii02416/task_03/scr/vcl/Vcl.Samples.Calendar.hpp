// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.Samples.Calendar.pas' rev: 35.00 (Windows)

#ifndef Vcl_Samples_CalendarHPP
#define Vcl_Samples_CalendarHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Winapi.Messages.hpp>
#include <Winapi.Windows.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Grids.hpp>
#include <System.SysUtils.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Menus.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Samples
{
namespace Calendar
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TCalendar;
//-- type declarations -------------------------------------------------------
typedef System::Int8 TDayOfWeek;

class PASCALIMPLEMENTATION TCalendar : public Vcl::Grids::TCustomGrid
{
	typedef Vcl::Grids::TCustomGrid inherited;
	
private:
	System::TDateTime FDate;
	int FMonthOffset;
	System::Classes::TNotifyEvent FOnChange;
	bool FReadOnly;
	TDayOfWeek FStartOfWeek;
	bool FUpdating;
	bool FUseCurrentDate;
	System::UnicodeString __fastcall GetCellText(int ACol, int ARow);
	int __fastcall GetDateElement(int Index);
	void __fastcall SetCalendarDate(System::TDateTime Value);
	void __fastcall SetDateElement(int Index, int Value);
	void __fastcall SetStartOfWeek(TDayOfWeek Value);
	void __fastcall SetUseCurrentDate(bool Value);
	bool __fastcall StoreCalendarDate();
	
protected:
	DYNAMIC void __fastcall Change();
	void __fastcall ChangeMonth(int Delta);
	DYNAMIC void __fastcall ChangeScale(int M, int D)/* overload */;
	DYNAMIC void __fastcall Click();
	virtual int __fastcall DaysPerMonth(int AYear, int AMonth);
	virtual int __fastcall DaysThisMonth();
	virtual void __fastcall DrawCell(int ACol, int ARow, const System::Types::TRect &ARect, Vcl::Grids::TGridDrawState AState);
	virtual bool __fastcall IsLeapYear(int AYear);
	virtual bool __fastcall SelectCell(int ACol, int ARow);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	void __fastcall RecalcColumns(int AHeight, int AWidth);
	
public:
	__fastcall virtual TCalendar(System::Classes::TComponent* AOwner);
	__property System::TDateTime CalendarDate = {read=FDate, write=SetCalendarDate, stored=StoreCalendarDate};
	__property System::UnicodeString CellText[int ACol][int ARow] = {read=GetCellText};
	void __fastcall NextMonth();
	void __fastcall NextYear();
	void __fastcall PrevMonth();
	void __fastcall PrevYear();
	virtual void __fastcall UpdateCalendar();
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property BorderStyle = {default=1};
	__property Color = {default=-16777211};
	__property Constraints;
	__property Ctl3D;
	__property int Day = {read=GetDateElement, write=SetDateElement, stored=false, index=3, nodefault};
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property GridLineWidth = {default=1};
	__property int Month = {read=GetDateElement, write=SetDateElement, stored=false, index=2, nodefault};
	__property ParentColor = {default=0};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property bool ReadOnly = {read=FReadOnly, write=FReadOnly, default=0};
	__property ShowHint;
	__property TDayOfWeek StartOfWeek = {read=FStartOfWeek, write=SetStartOfWeek, nodefault};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property bool UseCurrentDate = {read=FUseCurrentDate, write=SetUseCurrentDate, default=1};
	__property Visible = {default=1};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property int Year = {read=GetDateElement, write=SetDateElement, stored=false, index=1, nodefault};
	__property OnClick;
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TCustomGrid.Destroy */ inline __fastcall virtual ~TCalendar() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TCalendar(HWND ParentWindow) : Vcl::Grids::TCustomGrid(ParentWindow) { }
	
	/* Hoisted overloads: */
	
protected:
	DYNAMIC inline void __fastcall  ChangeScale(int M, int D, bool isDpiChange){ Vcl::Grids::TCustomGrid::ChangeScale(M, D, isDpiChange); }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Calendar */
}	/* namespace Samples */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_SAMPLES_CALENDAR)
using namespace Vcl::Samples::Calendar;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_SAMPLES)
using namespace Vcl::Samples;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_Samples_CalendarHPP
