// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.ValEdit.pas' rev: 35.00 (Windows)

#ifndef Vcl_ValeditHPP
#define Vcl_ValeditHPP

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
#include <System.Variants.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.StdCtrls.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Menus.hpp>

//-- user supplied -----------------------------------------------------------
class DELPHICLASS TItemProp;

namespace Vcl
{
namespace Valedit
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TValueListEditor;
class DELPHICLASS TValueListStrings;
class DELPHICLASS TItemProp;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TDisplayOption : unsigned char { doColumnTitles, doAutoColResize, doKeyColFixed };

typedef System::Set<TDisplayOption, TDisplayOption::doColumnTitles, TDisplayOption::doKeyColFixed> TDisplayOptions;

enum DECLSPEC_DENUM TKeyOption : unsigned char { keyEdit, keyAdd, keyDelete, keyUnique };

typedef System::Set<TKeyOption, TKeyOption::keyEdit, TKeyOption::keyUnique> TKeyOptions;

typedef void __fastcall (__closure *TGetPickListEvent)(System::TObject* Sender, const System::UnicodeString KeyName, System::Classes::TStrings* Values);

typedef void __fastcall (__closure *TOnValidateEvent)(System::TObject* Sender, int ACol, int ARow, const System::UnicodeString KeyName, const System::UnicodeString KeyValue);

class PASCALIMPLEMENTATION TValueListEditor : public Vcl::Grids::TCustomDrawGrid
{
	typedef Vcl::Grids::TCustomDrawGrid inherited;
	
private:
	System::Classes::TStrings* FTitleCaptions;
	TValueListStrings* FStrings;
	TKeyOptions FKeyOptions;
	TDisplayOptions FDisplayOptions;
	int FDropDownRows;
	System::UnicodeString FDupKeySave;
	bool FDeleting;
	bool FAdjustingColWidths;
	int FEditUpdate;
	int FCountSave;
	Vcl::Grids::TInplaceEditList* FEditList;
	TGetPickListEvent FOnGetPickList;
	System::Classes::TNotifyEvent FOnEditButtonClick;
	TOnValidateEvent FOnValidate;
	void __fastcall DisableEditUpdate();
	void __fastcall EnableEditUpdate();
	TItemProp* __fastcall GetItemProp(const System::Variant &KeyOrIndex);
	System::UnicodeString __fastcall GetKey(int Index);
	System::UnicodeString __fastcall GetValue(const System::UnicodeString Key);
	System::Classes::TNotifyEvent __fastcall GetOnStringsChange();
	System::Classes::TNotifyEvent __fastcall GetOnStringsChanging();
	System::Classes::TStrings* __fastcall GetStrings();
	void __fastcall PutItemProp(const System::Variant &KeyOrIndex, TItemProp* const Value);
	void __fastcall SetDisplayOptions(const TDisplayOptions Value);
	void __fastcall SetDropDownRows(const int Value);
	void __fastcall SetKey(int Index, const System::UnicodeString Value);
	void __fastcall SetKeyOptions(TKeyOptions Value);
	void __fastcall SetTitleCaptions(System::Classes::TStrings* const Value);
	void __fastcall SetValue(const System::UnicodeString Key, const System::UnicodeString Value);
	void __fastcall SetOnStringsChange(const System::Classes::TNotifyEvent Value);
	void __fastcall SetOnStringsChanging(const System::Classes::TNotifyEvent Value);
	void __fastcall SetOnEditButtonClick(const System::Classes::TNotifyEvent Value);
	Vcl::Grids::TGridOptions __fastcall GetOptions();
	HIDESBASE void __fastcall SetOptions(const Vcl::Grids::TGridOptions Value);
	HIDESBASE MESSAGE void __fastcall CMShowingChanged(Winapi::Messages::TMessage &Message);
	
protected:
	virtual void __fastcall AdjustColWidths();
	virtual void __fastcall AdjustRowCount();
	DYNAMIC void __fastcall ColWidthsChanged();
	DYNAMIC bool __fastcall CanEditModify();
	virtual Vcl::Grids::TInplaceEdit* __fastcall CreateEditor();
	virtual void __fastcall CreateWnd();
	DYNAMIC void __fastcall DoExit();
	virtual void __fastcall DrawCell(int ACol, int ARow, const System::Types::TRect &ARect, Vcl::Grids::TGridDrawState AState);
	virtual void __fastcall DoOnValidate();
	void __fastcall EditListGetItems(int ACol, int ARow, System::Classes::TStrings* Items);
	virtual System::UnicodeString __fastcall GetCell(int ACol, int ARow);
	int __fastcall GetColCount();
	DYNAMIC int __fastcall GetEditLimit();
	DYNAMIC System::UnicodeString __fastcall GetEditMask(int ACol, int ARow);
	DYNAMIC Vcl::Grids::TEditStyle __fastcall GetEditStyle(int ACol, int ARow);
	DYNAMIC System::UnicodeString __fastcall GetEditText(int ACol, int ARow);
	bool __fastcall GetPickList(System::Classes::TStrings* Values, bool ClearFirst = true);
	int __fastcall GetRowCount();
	bool __fastcall IsEmptyRow();
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall Resize();
	DYNAMIC void __fastcall RowMoved(int FromIndex, int ToIndex);
	virtual bool __fastcall SelectCell(int ACol, int ARow);
	virtual void __fastcall SetCell(int ACol, int ARow, const System::UnicodeString Value);
	DYNAMIC void __fastcall SetEditText(int ACol, int ARow, const System::UnicodeString Value);
	virtual void __fastcall SetStrings(System::Classes::TStrings* const Value);
	DYNAMIC void __fastcall StringsChanging();
	bool __fastcall TitleCaptionsStored();
	__property Vcl::Grids::TInplaceEditList* EditList = {read=FEditList};
	
public:
	__fastcall virtual TValueListEditor(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TValueListEditor();
	virtual void __fastcall DeleteRow(int ARow);
	bool __fastcall FindRow(const System::UnicodeString KeyName, int &Row);
	int __fastcall InsertRow(const System::UnicodeString KeyName, const System::UnicodeString Value, bool Append);
	HIDESBASE void __fastcall Refresh();
	bool __fastcall RestoreCurrentRow();
	__property System::UnicodeString Cells[int ACol][int ARow] = {read=GetCell, write=SetCell};
	__property ColCount = {read=GetColCount, default=5};
	__property TItemProp* ItemProps[const System::Variant KeyOrIndex] = {read=GetItemProp, write=PutItemProp};
	__property System::UnicodeString Keys[int Index] = {read=GetKey, write=SetKey};
	__property int RowCount = {read=GetRowCount, nodefault};
	__property System::UnicodeString Values[const System::UnicodeString Key] = {read=GetValue, write=SetValue};
	__property VisibleColCount;
	__property VisibleRowCount;
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property BiDiMode;
	__property BorderStyle = {default=1};
	__property Color = {default=-16777211};
	__property Constraints;
	__property Ctl3D;
	__property DefaultColWidth = {default=150};
	__property DefaultDrawing = {default=1};
	__property DefaultRowHeight = {default=18};
	__property TDisplayOptions DisplayOptions = {read=FDisplayOptions, write=SetDisplayOptions, default=7};
	__property DoubleBuffered;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property DrawingStyle = {default=1};
	__property int DropDownRows = {read=FDropDownRows, write=SetDropDownRows, default=8};
	__property Enabled = {default=1};
	__property FixedColor = {default=-16777201};
	__property FixedCols = {default=0};
	__property Font;
	__property GradientEndColor;
	__property GradientStartColor = {default=16777215};
	__property GridLineWidth = {default=1};
	__property TKeyOptions KeyOptions = {read=FKeyOptions, write=SetKeyOptions, default=0};
	__property Vcl::Grids::TGridOptions Options = {read=GetOptions, write=SetOptions, default=25743};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentDoubleBuffered = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ScrollBars = {default=3};
	__property ShowHint;
	__property System::Classes::TStrings* Strings = {read=GetStrings, write=SetStrings};
	__property TabOrder = {default=-1};
	__property System::Classes::TStrings* TitleCaptions = {read=FTitleCaptions, write=SetTitleCaptions, stored=TitleCaptionsStored};
	__property Touch;
	__property Visible = {default=1};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property OnClick;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnDrawCell;
	__property System::Classes::TNotifyEvent OnEditButtonClick = {read=FOnEditButtonClick, write=SetOnEditButtonClick};
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnGesture;
	__property OnGetEditMask;
	__property OnGetEditText;
	__property TGetPickListEvent OnGetPickList = {read=FOnGetPickList, write=FOnGetPickList};
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseActivate;
	__property OnMouseDown;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheelDown;
	__property OnMouseWheelUp;
	__property OnRowMoved;
	__property OnSelectCell;
	__property OnSetEditText;
	__property OnStartDock;
	__property OnStartDrag;
	__property System::Classes::TNotifyEvent OnStringsChange = {read=GetOnStringsChange, write=SetOnStringsChange};
	__property System::Classes::TNotifyEvent OnStringsChanging = {read=GetOnStringsChanging, write=SetOnStringsChanging};
	__property OnTopLeftChanged;
	__property TOnValidateEvent OnValidate = {read=FOnValidate, write=FOnValidate};
public:
	/* TWinControl.CreateParented */ inline __fastcall TValueListEditor(HWND ParentWindow) : Vcl::Grids::TCustomDrawGrid(ParentWindow) { }
	
};


typedef System::DynamicArray<TItemProp*> TItemProps;

class PASCALIMPLEMENTATION TValueListStrings : public System::Classes::TStringList
{
	typedef System::Classes::TStringList inherited;
	
private:
	TItemProps FItemProps;
	TValueListEditor* FEditor;
	TItemProp* __fastcall GetItemProp(const System::Variant &KeyOrIndex);
	void __fastcall PutItemProp(const System::Variant &KeyOrIndex, TItemProp* const Value);
	void __fastcall FreeItemProps();
	
protected:
	virtual void __fastcall Changed();
	virtual void __fastcall Changing();
	TItemProp* __fastcall FindItemProp(const System::Variant &KeyOrIndex, bool Create = false);
	virtual void __fastcall InsertItem(int Index, const System::UnicodeString S, System::TObject* AObject);
	virtual void __fastcall Put(int Index, const System::UnicodeString S);
	__property UpdateCount;
	
public:
	__fastcall TValueListStrings(TValueListEditor* AEditor);
	__fastcall virtual ~TValueListStrings();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	bool __fastcall KeyIsValid(const System::UnicodeString Key, bool RaiseError = true);
	virtual void __fastcall Clear();
	virtual void __fastcall CustomSort(System::Classes::TStringListSortCompare Compare);
	virtual void __fastcall Delete(int Index);
	virtual void __fastcall Exchange(int Index1, int Index2);
	__property TItemProp* ItemProps[const System::Variant KeyOrIndex] = {read=GetItemProp, write=PutItemProp};
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TItemProp : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TValueListEditor* FEditor;
	System::UnicodeString FEditMask;
	Vcl::Grids::TEditStyle FEditStyle;
	System::Classes::TStrings* FPickList;
	int FMaxLength;
	bool FReadOnly;
	System::UnicodeString FKeyDesc;
	System::Classes::TStrings* __fastcall GetPickList();
	void __fastcall PickListChange(System::TObject* Sender);
	void __fastcall SetEditMask(const System::UnicodeString Value);
	void __fastcall SetMaxLength(const int Value);
	void __fastcall SetReadOnly(const bool Value);
	void __fastcall SetEditStyle(const Vcl::Grids::TEditStyle Value);
	void __fastcall SetPickList(System::Classes::TStrings* const Value);
	void __fastcall SetKeyDesc(const System::UnicodeString Value);
	
protected:
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	void __fastcall UpdateEdit();
	
public:
	__fastcall TItemProp(TValueListEditor* AEditor);
	__fastcall virtual ~TItemProp();
	bool __fastcall HasPickList();
	
__published:
	__property System::UnicodeString EditMask = {read=FEditMask, write=SetEditMask};
	__property Vcl::Grids::TEditStyle EditStyle = {read=FEditStyle, write=SetEditStyle, nodefault};
	__property System::UnicodeString KeyDesc = {read=FKeyDesc, write=SetKeyDesc};
	__property System::Classes::TStrings* PickList = {read=GetPickList, write=SetPickList};
	__property int MaxLength = {read=FMaxLength, write=SetMaxLength, nodefault};
	__property bool ReadOnly = {read=FReadOnly, write=SetReadOnly, nodefault};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Valedit */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_VALEDIT)
using namespace Vcl::Valedit;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_ValeditHPP
