// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.CheckLst.pas' rev: 35.00 (Windows)

#ifndef Vcl_ChecklstHPP
#define Vcl_ChecklstHPP

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
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Checklst
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TCustomCheckListBox;
class DELPHICLASS TCheckListBox;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TCustomCheckListBox : public Vcl::Stdctrls::TCustomListBox
{
	typedef Vcl::Stdctrls::TCustomListBox inherited;
	
private:
	bool FAllowGrayed;
	bool FFlat;
	int FStandardItemHeight;
	System::Classes::TNotifyEvent FOnClickCheck;
	System::Uitypes::TColor FHeaderColor;
	System::Uitypes::TColor FHeaderBackgroundColor;
	System::Classes::TList* FWrapperList;
	int FCheckWidthForDPI;
	int FCheckHeightForDPI;
	int FCheckBoxPadding;
	static int FCheckWidth;
	static int FCheckHeight;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
private:
	__classmethod void __fastcall GetCheckSize();
	void __fastcall GetCheckSizeForDPI(int ADPI);
	void __fastcall ResetItemHeight();
	void __fastcall DrawCheck(const System::Types::TRect &R, Vcl::Stdctrls::TCheckBoxState AState, bool AEnabled);
	void __fastcall SetChecked(int Index, bool AChecked);
	bool __fastcall GetChecked(int Index);
	void __fastcall SetState(int Index, Vcl::Stdctrls::TCheckBoxState AState);
	Vcl::Stdctrls::TCheckBoxState __fastcall GetState(int Index);
	void __fastcall ToggleClickCheck(int Index);
	void __fastcall InvalidateCheck(int Index);
	void __fastcall InvalidateItem(int Index);
	System::TObject* __fastcall CreateWrapper(int Index);
	System::TObject* __fastcall ExtractWrapper(int Index);
	System::TObject* __fastcall GetWrapper(int Index);
	bool __fastcall HaveWrapper(int Index);
	void __fastcall SetFlat(bool Value);
	void __fastcall SetCheckBoxPadding(int Value);
	HIDESBASE MESSAGE void __fastcall CNDrawItem(Winapi::Messages::TWMDrawItem &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	bool __fastcall GetItemEnabled(int Index);
	void __fastcall SetItemEnabled(int Index, const bool Value);
	bool __fastcall GetHeader(int Index);
	void __fastcall SetHeader(int Index, const bool Value);
	void __fastcall SetHeaderBackgroundColor(const System::Uitypes::TColor Value);
	void __fastcall SetHeaderColor(const System::Uitypes::TColor Value);
	bool __fastcall IsStyleEnabled();
	
protected:
	virtual void __fastcall DrawItem(int Index, const System::Types::TRect &Rect, Winapi::Windows::TOwnerDrawState State);
	DYNAMIC NativeInt __fastcall InternalGetItemData(int Index);
	DYNAMIC void __fastcall InternalSetItemData(int Index, NativeInt AData);
	DYNAMIC void __fastcall SetItemData(int Index, NativeInt AData);
	DYNAMIC NativeInt __fastcall GetItemData(int Index);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	virtual void __fastcall LoadRecreateItems(System::Classes::TStrings* RecreateItems);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall ResetContent();
	virtual void __fastcall SaveRecreateItems(System::Classes::TStrings* RecreateItems);
	DYNAMIC void __fastcall DeleteString(int Index);
	DYNAMIC void __fastcall ClickCheck();
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd();
	int __fastcall GetCheckWidth();
	DYNAMIC void __fastcall ChangeScale(int M, int D, bool isDpiChange)/* overload */;
	MESSAGE void __fastcall CMStyleChanged(Winapi::Messages::TMessage &Message);
	
public:
	__fastcall virtual TCustomCheckListBox(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomCheckListBox();
	void __fastcall CheckAll(Vcl::Stdctrls::TCheckBoxState AState, bool AllowGrayed = true, bool AllowDisabled = true);
	__property bool AllowGrayed = {read=FAllowGrayed, write=FAllowGrayed, default=0};
	__property int CheckBoxPadding = {read=FCheckBoxPadding, write=SetCheckBoxPadding, default=0};
	__property bool Checked[int Index] = {read=GetChecked, write=SetChecked};
	__property bool Flat = {read=FFlat, write=SetFlat, default=1};
	__property bool ItemEnabled[int Index] = {read=GetItemEnabled, write=SetItemEnabled};
	__property Vcl::Stdctrls::TCheckBoxState State[int Index] = {read=GetState, write=SetState};
	__property bool Header[int Index] = {read=GetHeader, write=SetHeader};
	__property System::Uitypes::TColor HeaderColor = {read=FHeaderColor, write=SetHeaderColor, default=-16777193};
	__property System::Uitypes::TColor HeaderBackgroundColor = {read=FHeaderBackgroundColor, write=SetHeaderBackgroundColor, default=-16777192};
	__property System::Classes::TNotifyEvent OnClickCheck = {read=FOnClickCheck, write=FOnClickCheck};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomCheckListBox(HWND ParentWindow) : Vcl::Stdctrls::TCustomListBox(ParentWindow) { }
	
	/* Hoisted overloads: */
	
protected:
	DYNAMIC inline void __fastcall  ChangeScale(int M, int D){ Vcl::Controls::TControl::ChangeScale(M, D); }
	
};


class PASCALIMPLEMENTATION TCheckListBox : public TCustomCheckListBox
{
	typedef TCustomCheckListBox inherited;
	
__published:
	__property Align = {default=0};
	__property AllowGrayed = {default=0};
	__property Anchors = {default=3};
	__property AutoComplete = {default=1};
	__property BevelEdges = {default=15};
	__property BevelInner = {index=0, default=2};
	__property BevelOuter = {index=1, default=1};
	__property BevelKind = {default=0};
	__property BevelWidth = {default=1};
	__property BiDiMode;
	__property BorderStyle = {default=1};
	__property Color = {default=-16777211};
	__property Columns = {default=0};
	__property Constraints;
	__property Ctl3D;
	__property CheckBoxPadding = {default=0};
	__property DoubleBuffered;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Flat = {default=1};
	__property Font;
	__property HeaderColor = {default=-16777193};
	__property HeaderBackgroundColor = {default=-16777192};
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property IntegralHeight = {default=0};
	__property ItemHeight = {default=16};
	__property Items;
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentDoubleBuffered = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ScrollWidth = {default=0};
	__property ShowHint;
	__property Sorted = {default=0};
	__property Style = {default=0};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property TabWidth = {default=0};
	__property Touch;
	__property Visible = {default=1};
	__property OnClick;
	__property OnClickCheck;
	__property OnContextPopup;
	__property OnData;
	__property OnDataFind;
	__property OnDataObject;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnDrawItem;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnGesture;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMeasureItem;
	__property OnMouseActivate;
	__property OnMouseDown;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TCustomCheckListBox.Create */ inline __fastcall virtual TCheckListBox(System::Classes::TComponent* AOwner) : TCustomCheckListBox(AOwner) { }
	/* TCustomCheckListBox.Destroy */ inline __fastcall virtual ~TCheckListBox() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TCheckListBox(HWND ParentWindow) : TCustomCheckListBox(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Checklst */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_CHECKLST)
using namespace Vcl::Checklst;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_ChecklstHPP
