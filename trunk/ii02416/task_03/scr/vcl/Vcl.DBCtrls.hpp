// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.DBCtrls.pas' rev: 35.00 (Windows)

#ifndef Vcl_DbctrlsHPP
#define Vcl_DbctrlsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Variants.hpp>
#include <Winapi.Windows.hpp>
#include <System.SysUtils.hpp>
#include <Winapi.Messages.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Mask.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Data.DB.hpp>
#include <Winapi.RichEdit.hpp>
#include <System.Generics.Collections.hpp>
#include <Vcl.ImageCollection.hpp>
#include <Vcl.VirtualImageList.hpp>
#include <System.UITypes.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Dbctrls
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TFieldDataLink;
class DELPHICLASS TPaintControl;
class DELPHICLASS TDBEdit;
class DELPHICLASS TDBText;
class DELPHICLASS TDBBoundLabel;
class DELPHICLASS TDBLabeledEdit;
class DELPHICLASS TDBCheckBox;
class DELPHICLASS TDBComboBox;
class DELPHICLASS TDBListBox;
class DELPHICLASS TDBRadioGroup;
class DELPHICLASS TDBMemo;
class DELPHICLASS TDBImage;
class DELPHICLASS TDBNavigator;
class DELPHICLASS TNavButton;
class DELPHICLASS TNavDataLink;
class DELPHICLASS TDataSourceLink;
class DELPHICLASS TListSourceLink;
class DELPHICLASS TDBLookupControl;
class DELPHICLASS TDBLookupListBox;
class DELPHICLASS TPopupDataList;
class DELPHICLASS TCustomDBLookupComboBox;
class DELPHICLASS TDBLookupComboBox;
class DELPHICLASS TDBRichEdit;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TFieldDataLink : public Data::Db::TDataLink
{
	typedef Data::Db::TDataLink inherited;
	
private:
	Data::Db::TField* FField;
	System::UnicodeString FFieldName;
	System::Classes::TComponent* FControl;
	bool FEditing;
	bool FModified;
	System::Classes::TNotifyEvent FOnDataChange;
	System::Classes::TNotifyEvent FOnEditingChange;
	System::Classes::TNotifyEvent FOnUpdateData;
	System::Classes::TNotifyEvent FOnActiveChange;
	bool __fastcall GetCanModify();
	HIDESBASE void __fastcall SetEditing(bool Value);
	void __fastcall SetField(Data::Db::TField* Value);
	void __fastcall SetFieldName(const System::UnicodeString Value);
	void __fastcall UpdateField();
	void __fastcall UpdateRightToLeft();
	
protected:
	virtual void __fastcall ActiveChanged();
	virtual void __fastcall DataEvent(Data::Db::TDataEvent Event, NativeInt Info);
	virtual void __fastcall EditingChanged();
	virtual void __fastcall FocusControl(Data::Db::TFieldRef Field);
	virtual void __fastcall LayoutChanged();
	virtual void __fastcall RecordChanged(Data::Db::TField* Field);
	virtual void __fastcall UpdateData();
	
public:
	__fastcall TFieldDataLink();
	HIDESBASE bool __fastcall Edit();
	void __fastcall Modified();
	void __fastcall Reset();
	__property bool CanModify = {read=GetCanModify, nodefault};
	__property System::Classes::TComponent* Control = {read=FControl, write=FControl};
	__property bool Editing = {read=FEditing, nodefault};
	__property Data::Db::TField* Field = {read=FField};
	__property System::UnicodeString FieldName = {read=FFieldName, write=SetFieldName};
	__property System::Classes::TNotifyEvent OnDataChange = {read=FOnDataChange, write=FOnDataChange};
	__property System::Classes::TNotifyEvent OnEditingChange = {read=FOnEditingChange, write=FOnEditingChange};
	__property System::Classes::TNotifyEvent OnUpdateData = {read=FOnUpdateData, write=FOnUpdateData};
	__property System::Classes::TNotifyEvent OnActiveChange = {read=FOnActiveChange, write=FOnActiveChange};
public:
	/* TDataLink.Destroy */ inline __fastcall virtual ~TFieldDataLink() { }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TPaintControl : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Vcl::Controls::TWinControl* FOwner;
	System::UnicodeString FClassName;
	HWND FHandle;
	void *FObjectInstance;
	void *FDefWindowProc;
	bool FCtl3dButton;
	HWND __fastcall GetHandle();
	void __fastcall SetCtl3DButton(bool Value);
	void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	
public:
	__fastcall TPaintControl(Vcl::Controls::TWinControl* AOwner, const System::UnicodeString ClassName);
	__fastcall virtual ~TPaintControl();
	void __fastcall DestroyHandle();
	__property bool Ctl3DButton = {read=FCtl3dButton, write=SetCtl3DButton, nodefault};
#ifndef _WIN64
	__property HWND Handle = {read=GetHandle, nodefault};
#else /* _WIN64 */
	__property HWND Handle = {read=GetHandle};
#endif /* _WIN64 */
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TDBEdit : public Vcl::Extctrls::TCustomLabeledEdit
{
	typedef Vcl::Extctrls::TCustomLabeledEdit inherited;
	
private:
	TFieldDataLink* FDataLink;
	Vcl::Controls::TControlCanvas* FCanvas;
	System::Classes::TAlignment FAlignment;
	bool FFocused;
	void __fastcall ActiveChange(System::TObject* Sender);
	void __fastcall DataChange(System::TObject* Sender);
	void __fastcall EditingChange(System::TObject* Sender);
	System::UnicodeString __fastcall GetDataField();
	Data::Db::TDataSource* __fastcall GetDataSource();
	Data::Db::TField* __fastcall GetField();
	HIDESBASE bool __fastcall GetReadOnly();
	System::Types::TPoint __fastcall GetTextMargins();
	void __fastcall ResetMaxLength();
	void __fastcall SetDataField(const System::UnicodeString Value);
	void __fastcall SetDataSource(Data::Db::TDataSource* Value);
	void __fastcall SetFocused(bool Value);
	HIDESBASE void __fastcall SetReadOnly(bool Value);
	void __fastcall UpdateData(System::TObject* Sender);
	HIDESBASE MESSAGE void __fastcall WMCut(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMPaste(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMUndo(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMClear(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMEnter(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall CMExit(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Message);
	MESSAGE void __fastcall CMGetDataLink(Winapi::Messages::TMessage &Message);
	
protected:
	__classmethod virtual bool __fastcall WithLabel();
	DYNAMIC void __fastcall Change();
	virtual bool __fastcall EditCanModify();
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	virtual void __fastcall Loaded();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall Reset();
	
public:
	__fastcall virtual TDBEdit(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TDBEdit();
	DYNAMIC bool __fastcall ExecuteAction(System::Classes::TBasicAction* Action);
	virtual bool __fastcall UpdateAction(System::Classes::TBasicAction* Action);
	DYNAMIC bool __fastcall UseRightToLeftAlignment();
	__property Data::Db::TField* Field = {read=GetField};
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property AutoSelect = {default=1};
	__property AutoSize = {default=1};
	__property BevelEdges = {default=15};
	__property BevelInner = {index=0, default=2};
	__property BevelOuter = {index=1, default=1};
	__property BevelKind = {default=0};
	__property BevelWidth = {default=1};
	__property BiDiMode;
	__property BorderStyle = {default=1};
	__property CharCase = {default=0};
	__property Color = {default=-16777211};
	__property Constraints;
	__property Ctl3D;
	__property System::UnicodeString DataField = {read=GetDataField, write=SetDataField};
	__property Data::Db::TDataSource* DataSource = {read=GetDataSource, write=SetDataSource};
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property MaxLength = {default=0};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PasswordChar = {default=0};
	__property PopupMenu;
	__property bool ReadOnly = {read=GetReadOnly, write=SetReadOnly, default=0};
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Touch;
	__property Visible = {default=1};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property OnChange;
	__property OnClick;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnGesture;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseActivate;
	__property OnMouseDown;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TWinControl.CreateParented */ inline __fastcall TDBEdit(HWND ParentWindow) : Vcl::Extctrls::TCustomLabeledEdit(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TDBText : public Vcl::Stdctrls::TCustomLabel
{
	typedef Vcl::Stdctrls::TCustomLabel inherited;
	
private:
	TFieldDataLink* FDataLink;
	void __fastcall DataChange(System::TObject* Sender);
	System::UnicodeString __fastcall GetDataField();
	Data::Db::TDataSource* __fastcall GetDataSource();
	Data::Db::TField* __fastcall GetField();
	System::UnicodeString __fastcall GetFieldText();
	void __fastcall SetDataField(const System::UnicodeString Value);
	void __fastcall SetDataSource(Data::Db::TDataSource* Value);
	MESSAGE void __fastcall CMGetDataLink(Winapi::Messages::TMessage &Message);
	
protected:
	virtual System::UnicodeString __fastcall GetLabelText();
	virtual void __fastcall Loaded();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall SetAutoSize(bool Value);
	
public:
	__fastcall virtual TDBText(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TDBText();
	DYNAMIC bool __fastcall ExecuteAction(System::Classes::TBasicAction* Action);
	virtual bool __fastcall UpdateAction(System::Classes::TBasicAction* Action);
	DYNAMIC bool __fastcall UseRightToLeftAlignment();
	__property Data::Db::TField* Field = {read=GetField};
	
__published:
	__property Align = {default=0};
	__property Alignment = {default=0};
	__property Anchors = {default=3};
	__property AutoSize = {default=0};
	__property BiDiMode;
	__property Color;
	__property Constraints;
	__property System::UnicodeString DataField = {read=GetDataField, write=SetDataField};
	__property Data::Db::TDataSource* DataSource = {read=GetDataSource, write=SetDataSource};
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property Transparent;
	__property ShowHint;
	__property Touch;
	__property Visible = {default=1};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property WordWrap = {default=0};
	__property OnClick;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnGesture;
	__property OnMouseActivate;
	__property OnMouseDown;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnStartDock;
	__property OnStartDrag;
};


class PASCALIMPLEMENTATION TDBBoundLabel : public Vcl::Extctrls::TBoundLabel
{
	typedef Vcl::Extctrls::TBoundLabel inherited;
	
private:
	HIDESBASE bool __fastcall IsCaptionStored();
	
__published:
	__property Caption = {stored=IsCaptionStored, default=0};
public:
	/* TBoundLabel.Create */ inline __fastcall virtual TDBBoundLabel(System::Classes::TComponent* AOwner) : Vcl::Extctrls::TBoundLabel(AOwner) { }
	
public:
	/* TGraphicControl.Destroy */ inline __fastcall virtual ~TDBBoundLabel() { }
	
};


class PASCALIMPLEMENTATION TDBLabeledEdit : public TDBEdit
{
	typedef TDBEdit inherited;
	
private:
	HIDESBASE void __fastcall DataChange(System::TObject* Sender);
	
protected:
	__classmethod virtual bool __fastcall WithLabel();
	__classmethod virtual Vcl::Extctrls::TBoundLabelClass __fastcall GetLabelClass();
	
public:
	__fastcall virtual TDBLabeledEdit(System::Classes::TComponent* AOwner);
	
__published:
	__property EditLabel;
	__property LabelPosition = {default=0};
	__property LabelSpacing = {default=3};
public:
	/* TDBEdit.Destroy */ inline __fastcall virtual ~TDBLabeledEdit() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TDBLabeledEdit(HWND ParentWindow) : TDBEdit(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TDBCheckBox : public Vcl::Stdctrls::TCustomCheckBox
{
	typedef Vcl::Stdctrls::TCustomCheckBox inherited;
	
private:
	TFieldDataLink* FDataLink;
	System::UnicodeString FValueCheck;
	System::UnicodeString FValueUncheck;
	TPaintControl* FPaintControl;
	void __fastcall DataChange(System::TObject* Sender);
	System::UnicodeString __fastcall GetDataField();
	Data::Db::TDataSource* __fastcall GetDataSource();
	Data::Db::TField* __fastcall GetField();
	Vcl::Stdctrls::TCheckBoxState __fastcall GetFieldState();
	bool __fastcall GetReadOnly();
	bool __fastcall IsValueChecked();
	bool __fastcall IsValueUnchecked();
	void __fastcall SetDataField(const System::UnicodeString Value);
	void __fastcall SetDataSource(Data::Db::TDataSource* Value);
	void __fastcall SetReadOnly(bool Value);
	void __fastcall SetValueCheck(const System::UnicodeString Value);
	void __fastcall SetValueUncheck(const System::UnicodeString Value);
	void __fastcall UpdateData(System::TObject* Sender);
	bool __fastcall ValueMatch(const System::UnicodeString ValueList, const System::UnicodeString Value);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Message);
	HIDESBASE MESSAGE void __fastcall CMExit(Winapi::Messages::TWMNoParams &Message);
	MESSAGE void __fastcall CMGetDataLink(Winapi::Messages::TMessage &Message);
	
protected:
	virtual void __fastcall Toggle();
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	
public:
	__fastcall virtual TDBCheckBox(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TDBCheckBox();
	DYNAMIC bool __fastcall ExecuteAction(System::Classes::TBasicAction* Action);
	virtual bool __fastcall UpdateAction(System::Classes::TBasicAction* Action);
	DYNAMIC bool __fastcall UseRightToLeftAlignment();
	__property Checked = {default=0};
	__property Data::Db::TField* Field = {read=GetField};
	__property State = {default=0};
	
__published:
	__property Action;
	__property Align = {default=0};
	__property Alignment = {default=1};
	__property AllowGrayed = {default=0};
	__property Anchors = {default=3};
	__property BiDiMode;
	__property Caption = {default=0};
	__property Color = {default=-16777211};
	__property Constraints;
	__property Ctl3D;
	__property System::UnicodeString DataField = {read=GetDataField, write=SetDataField};
	__property Data::Db::TDataSource* DataSource = {read=GetDataSource, write=SetDataSource};
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=1};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property bool ReadOnly = {read=GetReadOnly, write=SetReadOnly, default=0};
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property System::UnicodeString ValueChecked = {read=FValueCheck, write=SetValueCheck, stored=IsValueChecked};
	__property System::UnicodeString ValueUnchecked = {read=FValueUncheck, write=SetValueUncheck, stored=IsValueUnchecked};
	__property Visible = {default=1};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property WordWrap = {default=0};
	__property OnClick;
	__property OnContextPopup;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseActivate;
	__property OnMouseDown;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TWinControl.CreateParented */ inline __fastcall TDBCheckBox(HWND ParentWindow) : Vcl::Stdctrls::TCustomCheckBox(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TDBComboBox : public Vcl::Stdctrls::TCustomComboBox
{
	typedef Vcl::Stdctrls::TCustomComboBox inherited;
	
private:
	TFieldDataLink* FDataLink;
	TPaintControl* FPaintControl;
	void __fastcall DataChange(System::TObject* Sender);
	void __fastcall EditingChange(System::TObject* Sender);
	System::UnicodeString __fastcall GetComboText();
	System::UnicodeString __fastcall GetDataField();
	Data::Db::TDataSource* __fastcall GetDataSource();
	Data::Db::TField* __fastcall GetField();
	bool __fastcall GetReadOnly();
	void __fastcall SetComboText(const System::UnicodeString Value);
	void __fastcall SetDataField(const System::UnicodeString Value);
	void __fastcall SetDataSource(Data::Db::TDataSource* Value);
	void __fastcall SetEditReadOnly();
	void __fastcall SetReadOnly(bool Value);
	void __fastcall UpdateData(System::TObject* Sender);
	HIDESBASE MESSAGE void __fastcall CMEnter(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall CMExit(Winapi::Messages::TWMNoParams &Message);
	MESSAGE void __fastcall CMGetDataLink(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Message);
	
protected:
	DYNAMIC void __fastcall Change();
	DYNAMIC void __fastcall Click();
	virtual void __fastcall ComboWndProc(Winapi::Messages::TMessage &Message, HWND ComboWnd, void * ComboProc);
	virtual void __fastcall CreateWnd();
	DYNAMIC void __fastcall DropDown();
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	virtual void __fastcall Loaded();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall SetItems(System::Classes::TStrings* const Value);
	virtual void __fastcall SetStyle(Vcl::Stdctrls::TComboBoxStyle Value);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	
public:
	__fastcall virtual TDBComboBox(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TDBComboBox();
	DYNAMIC bool __fastcall ExecuteAction(System::Classes::TBasicAction* Action);
	virtual bool __fastcall UpdateAction(System::Classes::TBasicAction* Action);
	DYNAMIC bool __fastcall UseRightToLeftAlignment();
	__property Data::Db::TField* Field = {read=GetField};
	__property Text = {default=0};
	
__published:
	__property Style = {default=0};
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property AutoComplete = {default=1};
	__property AutoDropDown = {default=0};
	__property BevelEdges = {default=15};
	__property BevelInner = {index=0, default=2};
	__property BevelOuter = {index=1, default=1};
	__property BevelKind = {default=0};
	__property BevelWidth = {default=1};
	__property BiDiMode;
	__property CharCase = {default=0};
	__property Color = {default=-16777211};
	__property Constraints;
	__property Ctl3D;
	__property System::UnicodeString DataField = {read=GetDataField, write=SetDataField};
	__property Data::Db::TDataSource* DataSource = {read=GetDataSource, write=SetDataSource};
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property DropDownCount = {default=8};
	__property Enabled = {default=1};
	__property Font;
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property ItemHeight;
	__property Items = {write=SetItems};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property bool ReadOnly = {read=GetReadOnly, write=SetReadOnly, default=0};
	__property ShowHint;
	__property Sorted = {default=0};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Touch;
	__property Visible = {default=1};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property OnChange;
	__property OnClick;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnDrawItem;
	__property OnDropDown;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnGesture;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMeasureItem;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TWinControl.CreateParented */ inline __fastcall TDBComboBox(HWND ParentWindow) : Vcl::Stdctrls::TCustomComboBox(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TDBListBox : public Vcl::Stdctrls::TCustomListBox
{
	typedef Vcl::Stdctrls::TCustomListBox inherited;
	
private:
	TFieldDataLink* FDataLink;
	void __fastcall DataChange(System::TObject* Sender);
	void __fastcall UpdateData(System::TObject* Sender);
	System::UnicodeString __fastcall GetDataField();
	Data::Db::TDataSource* __fastcall GetDataSource();
	Data::Db::TField* __fastcall GetField();
	bool __fastcall GetReadOnly();
	void __fastcall SetDataField(const System::UnicodeString Value);
	void __fastcall SetDataSource(Data::Db::TDataSource* Value);
	void __fastcall SetReadOnly(bool Value);
	HIDESBASE void __fastcall SetItems(System::Classes::TStrings* Value);
	HIDESBASE MESSAGE void __fastcall WMLButtonDown(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall CMExit(Winapi::Messages::TWMNoParams &Message);
	MESSAGE void __fastcall CMGetDataLink(Winapi::Messages::TMessage &Message);
	
protected:
	DYNAMIC void __fastcall Click();
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	
public:
	__fastcall virtual TDBListBox(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TDBListBox();
	DYNAMIC bool __fastcall ExecuteAction(System::Classes::TBasicAction* Action);
	virtual bool __fastcall UpdateAction(System::Classes::TBasicAction* Action);
	DYNAMIC bool __fastcall UseRightToLeftAlignment();
	__property Data::Db::TField* Field = {read=GetField};
	
__published:
	__property Align = {default=0};
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
	__property Constraints;
	__property Ctl3D = {default=1};
	__property System::UnicodeString DataField = {read=GetDataField, write=SetDataField};
	__property Data::Db::TDataSource* DataSource = {read=GetDataSource, write=SetDataSource};
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property IntegralHeight = {default=0};
	__property ItemHeight = {default=16};
	__property Items = {write=SetItems};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property bool ReadOnly = {read=GetReadOnly, write=SetReadOnly, default=0};
	__property ShowHint;
	__property Style = {default=0};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Touch;
	__property Visible = {default=1};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property OnClick;
	__property OnContextPopup;
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
	/* TWinControl.CreateParented */ inline __fastcall TDBListBox(HWND ParentWindow) : Vcl::Stdctrls::TCustomListBox(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TDBRadioGroup : public Vcl::Extctrls::TCustomRadioGroup
{
	typedef Vcl::Extctrls::TCustomRadioGroup inherited;
	
private:
	TFieldDataLink* FDataLink;
	System::UnicodeString FValue;
	System::Classes::TStrings* FValues;
	bool FInSetValue;
	System::Classes::TNotifyEvent FOnChange;
	void __fastcall DataChange(System::TObject* Sender);
	void __fastcall UpdateData(System::TObject* Sender);
	System::UnicodeString __fastcall GetDataField();
	Data::Db::TDataSource* __fastcall GetDataSource();
	Data::Db::TField* __fastcall GetField();
	bool __fastcall GetReadOnly();
	System::UnicodeString __fastcall GetButtonValue(int Index);
	void __fastcall SetDataField(const System::UnicodeString Value);
	void __fastcall SetDataSource(Data::Db::TDataSource* Value);
	void __fastcall SetReadOnly(bool Value);
	void __fastcall SetValue(const System::UnicodeString Value);
	HIDESBASE void __fastcall SetItems(System::Classes::TStrings* Value);
	void __fastcall SetValues(System::Classes::TStrings* Value);
	HIDESBASE MESSAGE void __fastcall CMExit(Winapi::Messages::TWMNoParams &Message);
	MESSAGE void __fastcall CMGetDataLink(Winapi::Messages::TMessage &Message);
	
protected:
	DYNAMIC void __fastcall Change();
	DYNAMIC void __fastcall Click();
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	virtual bool __fastcall CanModify();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	__property TFieldDataLink* DataLink = {read=FDataLink};
	
public:
	__fastcall virtual TDBRadioGroup(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TDBRadioGroup();
	DYNAMIC bool __fastcall ExecuteAction(System::Classes::TBasicAction* Action);
	virtual bool __fastcall UpdateAction(System::Classes::TBasicAction* Action);
	DYNAMIC bool __fastcall UseRightToLeftAlignment();
	__property Data::Db::TField* Field = {read=GetField};
	__property ItemIndex = {default=-1};
	__property System::UnicodeString Value = {read=FValue, write=SetValue};
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property BiDiMode;
	__property Caption = {default=0};
	__property Color = {default=-16777211};
	__property Columns = {default=1};
	__property Constraints;
	__property Ctl3D;
	__property System::UnicodeString DataField = {read=GetDataField, write=SetDataField};
	__property Data::Db::TDataSource* DataSource = {read=GetDataSource, write=SetDataSource};
	__property DefaultHeaderFont = {default=1};
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property HeaderFont;
	__property Items = {write=SetItems};
	__property ParentBackground = {default=1};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=1};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property bool ReadOnly = {read=GetReadOnly, write=SetReadOnly, default=0};
	__property ShowFrame = {default=1};
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=0};
	__property Touch;
	__property System::Classes::TStrings* Values = {read=FValues, write=SetValues};
	__property Visible = {default=1};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property OnClick;
	__property OnContextPopup;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnGesture;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TWinControl.CreateParented */ inline __fastcall TDBRadioGroup(HWND ParentWindow) : Vcl::Extctrls::TCustomRadioGroup(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TDBMemo : public Vcl::Stdctrls::TCustomMemo
{
	typedef Vcl::Stdctrls::TCustomMemo inherited;
	
private:
	TFieldDataLink* FDataLink;
	bool FAutoDisplay;
	bool FFocused;
	bool FMemoLoaded;
	TPaintControl* FPaintControl;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
private:
	void __fastcall DataChange(System::TObject* Sender);
	void __fastcall EditingChange(System::TObject* Sender);
	System::UnicodeString __fastcall GetDataField();
	Data::Db::TDataSource* __fastcall GetDataSource();
	Data::Db::TField* __fastcall GetField();
	HIDESBASE bool __fastcall GetReadOnly();
	void __fastcall SetDataField(const System::UnicodeString Value);
	void __fastcall SetDataSource(Data::Db::TDataSource* Value);
	HIDESBASE void __fastcall SetReadOnly(bool Value);
	void __fastcall SetAutoDisplay(bool Value);
	void __fastcall SetFocused(bool Value);
	void __fastcall UpdateData(System::TObject* Sender);
	MESSAGE void __fastcall WMCut(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMPaste(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMUndo(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMClear(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMEnter(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall CMExit(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonDblClk(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Message);
	MESSAGE void __fastcall CMGetDataLink(Winapi::Messages::TMessage &Message);
	HIDESBASE void __fastcall SetLines();
	
protected:
	DYNAMIC void __fastcall Change();
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	virtual void __fastcall Loaded();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	
public:
	__fastcall virtual TDBMemo(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TDBMemo();
	DYNAMIC bool __fastcall ExecuteAction(System::Classes::TBasicAction* Action);
	virtual void __fastcall LoadMemo();
	virtual bool __fastcall UpdateAction(System::Classes::TBasicAction* Action);
	DYNAMIC bool __fastcall UseRightToLeftAlignment();
	__property Data::Db::TField* Field = {read=GetField};
	
__published:
	__property Align = {default=0};
	__property Alignment = {default=0};
	__property Anchors = {default=3};
	__property bool AutoDisplay = {read=FAutoDisplay, write=SetAutoDisplay, default=1};
	__property BevelEdges = {default=15};
	__property BevelInner = {index=0, default=2};
	__property BevelOuter = {index=1, default=1};
	__property BevelKind = {default=0};
	__property BevelWidth = {default=1};
	__property BiDiMode;
	__property BorderStyle = {default=1};
	__property Color = {default=-16777211};
	__property Constraints;
	__property Ctl3D;
	__property System::UnicodeString DataField = {read=GetDataField, write=SetDataField};
	__property Data::Db::TDataSource* DataSource = {read=GetDataSource, write=SetDataSource};
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property EditMargins;
	__property Enabled = {default=1};
	__property Font;
	__property HideSelection = {default=1};
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property MaxLength = {default=0};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property bool ReadOnly = {read=GetReadOnly, write=SetReadOnly, default=0};
	__property ScrollBars = {default=0};
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Touch;
	__property Visible = {default=1};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property WantReturns = {default=1};
	__property WantTabs = {default=0};
	__property WordWrap = {default=1};
	__property OnChange;
	__property OnClick;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnGesture;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseActivate;
	__property OnMouseDown;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TWinControl.CreateParented */ inline __fastcall TDBMemo(HWND ParentWindow) : Vcl::Stdctrls::TCustomMemo(ParentWindow) { }
	
};


typedef void __fastcall (__closure *TLoadPictureEvent)(System::TObject* Sender, Vcl::Graphics::TPicture* Picture, bool &Loaded);

class PASCALIMPLEMENTATION TDBImage : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
private:
	TFieldDataLink* FDataLink;
	Vcl::Graphics::TPicture* FPicture;
	Vcl::Forms::TFormBorderStyle FBorderStyle;
	bool FAutoDisplay;
	bool FStretch;
	bool FCenter;
	bool FPictureLoaded;
	bool FProportional;
	bool FQuickDraw;
	Vcl::Graphics::TProgressEvent FOnProgress;
	Vcl::Graphics::TFindGraphicClassEvent FOnFindGraphicClass;
	TLoadPictureEvent FOnLoadPicture;
	void __fastcall DataChange(System::TObject* Sender);
	System::UnicodeString __fastcall GetDataField();
	Data::Db::TDataSource* __fastcall GetDataSource();
	Data::Db::TField* __fastcall GetField();
	bool __fastcall GetReadOnly();
	void __fastcall PictureChanged(System::TObject* Sender);
	void __fastcall SetAutoDisplay(bool Value);
	void __fastcall SetBorderStyle(Vcl::Forms::TBorderStyle Value);
	void __fastcall SetCenter(bool Value);
	void __fastcall SetDataField(const System::UnicodeString Value);
	void __fastcall SetDataSource(Data::Db::TDataSource* Value);
	void __fastcall SetPicture(Vcl::Graphics::TPicture* Value);
	void __fastcall SetProportional(bool Value);
	void __fastcall SetReadOnly(bool Value);
	void __fastcall SetStretch(bool Value);
	void __fastcall UpdateData(System::TObject* Sender);
	MESSAGE void __fastcall CMGetDataLink(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMEnter(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall CMExit(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall CMTextChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonDown(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonDblClk(Winapi::Messages::TWMMouse &Message);
	MESSAGE void __fastcall WMCut(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMCopy(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMPaste(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TMessage &Message);
	
protected:
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	System::Types::TRect __fastcall DestRect(Vcl::Graphics::TPicture* APicture);
	DYNAMIC HPALETTE __fastcall GetPalette();
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall Paint();
	DYNAMIC void __fastcall Progress(System::TObject* Sender, Vcl::Graphics::TProgressStage Stage, System::Byte PercentDone, bool RedrawNow, const System::Types::TRect &R, const System::UnicodeString Msg);
	DYNAMIC void __fastcall FindGraphicClass(System::TObject* Sender, const Vcl::Graphics::TFindGraphicClassContext &Context, Vcl::Graphics::TGraphicClass &GraphicClass);
	DYNAMIC bool __fastcall DoLoadPicture(bool AllowReset, Vcl::Graphics::TPicture* APicture);
	
public:
	__fastcall virtual TDBImage(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TDBImage();
	void __fastcall CopyToClipboard();
	void __fastcall CutToClipboard();
	DYNAMIC bool __fastcall ExecuteAction(System::Classes::TBasicAction* Action);
	void __fastcall LoadPicture();
	void __fastcall PasteFromClipboard();
	virtual bool __fastcall UpdateAction(System::Classes::TBasicAction* Action);
	__property Data::Db::TField* Field = {read=GetField};
	__property Vcl::Graphics::TPicture* Picture = {read=FPicture, write=SetPicture};
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property bool AutoDisplay = {read=FAutoDisplay, write=SetAutoDisplay, default=1};
	__property Vcl::Forms::TBorderStyle BorderStyle = {read=FBorderStyle, write=SetBorderStyle, default=1};
	__property bool Center = {read=FCenter, write=SetCenter, default=1};
	__property Color = {default=-16777211};
	__property Constraints;
	__property Ctl3D;
	__property System::UnicodeString DataField = {read=GetDataField, write=SetDataField};
	__property Data::Db::TDataSource* DataSource = {read=GetDataSource, write=SetDataSource};
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property bool Proportional = {read=FProportional, write=SetProportional, default=0};
	__property bool ReadOnly = {read=GetReadOnly, write=SetReadOnly, default=0};
	__property bool QuickDraw = {read=FQuickDraw, write=FQuickDraw, default=1};
	__property ShowHint;
	__property bool Stretch = {read=FStretch, write=SetStretch, default=0};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Touch;
	__property Visible = {default=1};
	__property OnClick;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property Vcl::Graphics::TFindGraphicClassEvent OnFindGraphicClass = {read=FOnFindGraphicClass, write=FOnFindGraphicClass};
	__property OnGesture;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property TLoadPictureEvent OnLoadPicture = {read=FOnLoadPicture, write=FOnLoadPicture};
	__property OnMouseActivate;
	__property OnMouseDown;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
	__property Vcl::Graphics::TProgressEvent OnProgress = {read=FOnProgress, write=FOnProgress};
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TWinControl.CreateParented */ inline __fastcall TDBImage(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
};


enum DECLSPEC_DENUM TNavGlyph : unsigned char { ngEnabled, ngDisabled };

enum DECLSPEC_DENUM TNavigateBtn : unsigned char { nbFirst, nbPrior, nbNext, nbLast, nbInsert, nbDelete, nbEdit, nbPost, nbCancel, nbRefresh, nbApplyUpdates, nbCancelUpdates };

typedef System::Set<TNavigateBtn, TNavigateBtn::nbFirst, TNavigateBtn::nbCancelUpdates> TNavButtonSet;

enum DECLSPEC_DENUM Vcl_Dbctrls__31 : unsigned char { nsAllowTimer, nsFocusRect };

typedef System::Set<Vcl_Dbctrls__31, Vcl_Dbctrls__31::nsAllowTimer, Vcl_Dbctrls__31::nsFocusRect> TNavButtonStyle;

typedef void __fastcall (__closure *ENavClick)(System::TObject* Sender, TNavigateBtn Button);

enum DECLSPEC_DENUM TDBNavigatorKind : unsigned char { dbnHorizontal, dbnVertical };

class PASCALIMPLEMENTATION TDBNavigator : public Vcl::Extctrls::TCustomPanel
{
	typedef Vcl::Extctrls::TCustomPanel inherited;
	
private:
	TNavDataLink* FDataLink;
	TNavButtonSet FVisibleButtons;
	System::Classes::TStrings* FHints;
	System::Classes::TStrings* FDefHints;
	int ButtonWidth;
	int ButtonHeight;
	System::Types::TPoint MinBtnSize;
	ENavClick FOnNavClick;
	ENavClick FBeforeAction;
	TNavigateBtn FocusedButton;
	bool FConfirmDelete;
	bool FFlat;
	int FMaxErrors;
	TDBNavigatorKind FKind;
	Vcl::Virtualimagelist::TVirtualImageList* FButtonImages;
	static Vcl::Imagecollection::TImageCollection* FButtonsImageCollection;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
private:
	void __fastcall BtnMouseDown(System::TObject* Sender, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall ClickHandler(System::TObject* Sender);
	Data::Db::TDataSource* __fastcall GetDataSource();
	System::Classes::TStrings* __fastcall GetHints();
	void __fastcall HintsChanged(System::TObject* Sender);
	void __fastcall InitButtons();
	void __fastcall InitHints();
	void __fastcall SetDataSource(Data::Db::TDataSource* Value);
	void __fastcall SetFlat(bool Value);
	void __fastcall SetHints(System::Classes::TStrings* Value);
	void __fastcall SetKind(TDBNavigatorKind Value);
	void __fastcall SetSize(int &W, int &H);
	HIDESBASE void __fastcall SetVisible(TNavButtonSet Value);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Message);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TWMKillFocus &Message);
	MESSAGE void __fastcall WMGetDlgCode(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMWindowPosChanging(Winapi::Messages::TWMWindowPosMsg &Message);
	void __fastcall ApplyUpdates();
	bool __fastcall CanApplyUpdates();
	void __fastcall CancelUpdates();
	bool __fastcall CanCancelUpdates();
	
protected:
	System::StaticArray<TNavButton*, 12> Buttons;
	void __fastcall ActiveChanged();
	void __fastcall CalcMinSize(int &W, int &H);
	virtual void __fastcall CreateWnd();
	void __fastcall DataChanged();
	void __fastcall EditingChanged();
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall Loaded();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall Paint();
	virtual void __fastcall SetButtonGlyph(TNavigateBtn Index);
	DYNAMIC void __fastcall ChangeScale(int M, int D, bool isDpiChange)/* overload */;
	
public:
	__fastcall virtual TDBNavigator(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TDBNavigator();
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	DYNAMIC void __fastcall GetChildren(System::Classes::TGetChildProc Proc, System::Classes::TComponent* Root);
	virtual void __fastcall BtnClick(TNavigateBtn Index);
	
__published:
	__property Data::Db::TDataSource* DataSource = {read=GetDataSource, write=SetDataSource};
	__property TNavButtonSet VisibleButtons = {read=FVisibleButtons, write=SetVisible, default=1023};
	__property int MaxErrors = {read=FMaxErrors, write=FMaxErrors, default=-1};
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property Constraints;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property bool Flat = {read=FFlat, write=SetFlat, default=0};
	__property Ctl3D;
	__property System::Classes::TStrings* Hints = {read=GetHints, write=SetHints};
	__property TDBNavigatorKind Kind = {read=FKind, write=SetKind, default=0};
	__property ParentCtl3D = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property bool ConfirmDelete = {read=FConfirmDelete, write=FConfirmDelete, default=1};
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=0};
	__property Visible = {default=1};
	__property ENavClick BeforeAction = {read=FBeforeAction, write=FBeforeAction};
	__property ENavClick OnClick = {read=FOnNavClick, write=FOnNavClick};
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
	/* TWinControl.CreateParented */ inline __fastcall TDBNavigator(HWND ParentWindow) : Vcl::Extctrls::TCustomPanel(ParentWindow) { }
	
	/* Hoisted overloads: */
	
protected:
	DYNAMIC inline void __fastcall  ChangeScale(int M, int D){ Vcl::Controls::TControl::ChangeScale(M, D); }
	
};


class PASCALIMPLEMENTATION TNavButton : public Vcl::Buttons::TSpeedButton
{
	typedef Vcl::Buttons::TSpeedButton inherited;
	
private:
	TNavigateBtn FIndex;
	TNavButtonStyle FNavStyle;
	Vcl::Extctrls::TTimer* FRepeatTimer;
	void __fastcall TimerExpired(System::TObject* Sender);
	
protected:
	virtual void __fastcall Paint();
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	
public:
	__fastcall virtual ~TNavButton();
	__property TNavButtonStyle NavStyle = {read=FNavStyle, write=FNavStyle, nodefault};
	__property TNavigateBtn Index = {read=FIndex, write=FIndex, nodefault};
public:
	/* TCustomSpeedButton.Create */ inline __fastcall virtual TNavButton(System::Classes::TComponent* AOwner) : Vcl::Buttons::TSpeedButton(AOwner) { }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TNavDataLink : public Data::Db::TDataLink
{
	typedef Data::Db::TDataLink inherited;
	
private:
	TDBNavigator* FNavigator;
	
protected:
	virtual void __fastcall EditingChanged();
	virtual void __fastcall DataSetChanged();
	virtual void __fastcall ActiveChanged();
	
public:
	__fastcall TNavDataLink(TDBNavigator* ANav);
	__fastcall virtual ~TNavDataLink();
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TDataSourceLink : public Data::Db::TDataLink
{
	typedef Data::Db::TDataLink inherited;
	
private:
	TDBLookupControl* FDBLookupControl;
	
protected:
	virtual void __fastcall FocusControl(Data::Db::TFieldRef Field);
	virtual void __fastcall ActiveChanged();
	virtual void __fastcall LayoutChanged();
	virtual void __fastcall RecordChanged(Data::Db::TField* Field);
	
public:
	__fastcall TDataSourceLink();
public:
	/* TDataLink.Destroy */ inline __fastcall virtual ~TDataSourceLink() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TListSourceLink : public Data::Db::TDataLink
{
	typedef Data::Db::TDataLink inherited;
	
private:
	TDBLookupControl* FDBLookupControl;
	
protected:
	virtual void __fastcall ActiveChanged();
	virtual void __fastcall DataSetChanged();
	virtual void __fastcall LayoutChanged();
	
public:
	__fastcall TListSourceLink();
public:
	/* TDataLink.Destroy */ inline __fastcall virtual ~TListSourceLink() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TDBLookupControl : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
private:
	Data::Db::TDataSource* FLookupSource;
	TDataSourceLink* FDataLink;
	TListSourceLink* FListLink;
	System::UnicodeString FDataFieldName;
	System::UnicodeString FKeyFieldName;
	System::UnicodeString FListFieldName;
	int FListFieldIndex;
	Data::Db::TField* FDataField;
	Data::Db::TField* FMasterField;
	Data::Db::TField* FKeyField;
	Data::Db::TField* FListField;
	System::Generics::Collections::TList__1<Data::Db::TField*>* FListFields;
	System::Variant FKeyValue;
	System::UnicodeString FSearchText;
	bool FLookupMode;
	bool FListActive;
	bool FHasFocus;
	int FListDataChanging;
	System::Classes::TShortCut FNullValueKey;
	void __fastcall CheckNotCircular();
	void __fastcall CheckNotLookup();
	void __fastcall DataLinkRecordChanged(Data::Db::TField* Field);
	Data::Db::TDataSource* __fastcall GetDataSource();
	System::UnicodeString __fastcall GetKeyFieldName();
	Data::Db::TDataSource* __fastcall GetListSource();
	bool __fastcall GetReadOnly();
	void __fastcall SetDataFieldName(const System::UnicodeString Value);
	void __fastcall SetDataSource(Data::Db::TDataSource* Value);
	void __fastcall SetKeyFieldName(const System::UnicodeString Value);
	void __fastcall SetKeyValue(const System::Variant &Value);
	void __fastcall SetListFieldName(const System::UnicodeString Value);
	void __fastcall SetListSource(Data::Db::TDataSource* Value);
	void __fastcall SetLookupMode(bool Value);
	void __fastcall SetReadOnly(bool Value);
	MESSAGE void __fastcall WMGetDlgCode(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMKeyDown(Winapi::Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMGetDataLink(Winapi::Messages::TMessage &Message);
	
protected:
	virtual bool __fastcall CanModify();
	virtual int __fastcall GetBorderSize();
	virtual int __fastcall GetTextHeight();
	virtual void __fastcall KeyValueChanged();
	virtual void __fastcall ListLinkDataChanged();
	virtual bool __fastcall LocateKey();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall ProcessSearchKey(System::WideChar Key);
	virtual void __fastcall SelectKeyValue(const System::Variant &Value);
	virtual void __fastcall UpdateDataFields();
	virtual void __fastcall UpdateListFields();
	__property System::UnicodeString DataField = {read=FDataFieldName, write=SetDataFieldName};
	__property TDataSourceLink* DataLink = {read=FDataLink};
	__property Data::Db::TDataSource* DataSource = {read=GetDataSource, write=SetDataSource};
	__property bool HasFocus = {read=FHasFocus, nodefault};
	__property System::UnicodeString KeyField = {read=GetKeyFieldName, write=SetKeyFieldName};
	__property System::Variant KeyValue = {read=FKeyValue, write=SetKeyValue};
	__property bool ListActive = {read=FListActive, nodefault};
	__property System::UnicodeString ListField = {read=FListFieldName, write=SetListFieldName};
	__property int ListFieldIndex = {read=FListFieldIndex, write=FListFieldIndex, default=0};
	__property System::Generics::Collections::TList__1<Data::Db::TField*>* ListFields = {read=FListFields};
	__property TListSourceLink* ListLink = {read=FListLink};
	__property Data::Db::TDataSource* ListSource = {read=GetListSource, write=SetListSource};
	__property System::Classes::TShortCut NullValueKey = {read=FNullValueKey, write=FNullValueKey, default=0};
	__property ParentColor = {default=0};
	__property bool ReadOnly = {read=GetReadOnly, write=SetReadOnly, default=0};
	__property System::UnicodeString SearchText = {read=FSearchText, write=FSearchText};
	__property TabStop = {default=1};
	
public:
	__fastcall virtual TDBLookupControl(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TDBLookupControl();
	DYNAMIC bool __fastcall ExecuteAction(System::Classes::TBasicAction* Action);
	virtual bool __fastcall UpdateAction(System::Classes::TBasicAction* Action);
	__property Data::Db::TField* Field = {read=FDataField};
public:
	/* TWinControl.CreateParented */ inline __fastcall TDBLookupControl(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TDBLookupListBox : public TDBLookupControl
{
	typedef TDBLookupControl inherited;
	
private:
	int FRecordIndex;
	int FRecordCount;
	int FRowCount;
	Vcl::Forms::TFormBorderStyle FBorderStyle;
	bool FPopup;
	bool FKeySelected;
	bool FTracking;
	bool FTimerActive;
	bool FLockPosition;
	int FMousePos;
	System::UnicodeString FSelectedItem;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
private:
	int __fastcall GetKeyIndex();
	void __fastcall SelectCurrent();
	void __fastcall SelectItemAt(int X, int Y);
	void __fastcall SetBorderStyle(Vcl::Forms::TBorderStyle Value);
	void __fastcall SetRowCount(int Value);
	void __fastcall StopTimer();
	void __fastcall StopTracking();
	void __fastcall TimerScroll();
	void __fastcall UpdateScrollBar();
	HIDESBASE MESSAGE void __fastcall CMCtl3DChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMCancelMode(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMTimer(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMVScroll(Winapi::Messages::TWMScroll &Message);
	
protected:
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd();
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	virtual void __fastcall KeyValueChanged();
	virtual void __fastcall ListLinkDataChanged();
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall Paint();
	virtual void __fastcall UpdateListFields();
	
public:
	__fastcall virtual TDBLookupListBox(System::Classes::TComponent* AOwner);
	DYNAMIC bool __fastcall ExecuteAction(System::Classes::TBasicAction* Action);
	virtual bool __fastcall UpdateAction(System::Classes::TBasicAction* Action);
	DYNAMIC bool __fastcall UseRightToLeftAlignment();
	__property KeyValue = {default=0};
	__property System::UnicodeString SelectedItem = {read=FSelectedItem};
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property BevelEdges = {default=15};
	__property BevelInner = {index=0, default=2};
	__property BevelOuter = {index=1, default=1};
	__property BevelKind = {default=0};
	__property BevelWidth = {default=1};
	__property BiDiMode;
	__property Vcl::Forms::TBorderStyle BorderStyle = {read=FBorderStyle, write=SetBorderStyle, default=1};
	__property Color = {default=-16777211};
	__property Constraints;
	__property Ctl3D;
	__property DataField = {default=0};
	__property DataSource;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property KeyField = {default=0};
	__property ListField = {default=0};
	__property ListFieldIndex = {default=0};
	__property ListSource;
	__property NullValueKey = {default=0};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ReadOnly = {default=0};
	__property int RowCount = {read=FRowCount, write=SetRowCount, stored=false, nodefault};
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Touch;
	__property Visible = {default=1};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property OnClick;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnGesture;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseActivate;
	__property OnMouseDown;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TDBLookupControl.Destroy */ inline __fastcall virtual ~TDBLookupListBox() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TDBLookupListBox(HWND ParentWindow) : TDBLookupControl(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TPopupDataList : public TDBLookupListBox
{
	typedef TDBLookupListBox inherited;
	
private:
	HIDESBASE MESSAGE void __fastcall WMMouseActivate(Winapi::Messages::TWMMouseActivate &Message);
	
protected:
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd();
	
public:
	__fastcall virtual TPopupDataList(System::Classes::TComponent* AOwner);
public:
	/* TDBLookupControl.Destroy */ inline __fastcall virtual ~TPopupDataList() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TPopupDataList(HWND ParentWindow) : TDBLookupListBox(ParentWindow) { }
	
};


enum DECLSPEC_DENUM TDropDownAlign : unsigned char { daLeft, daRight, daCenter };

class PASCALIMPLEMENTATION TCustomDBLookupComboBox : public TDBLookupControl
{
	typedef TDBLookupControl inherited;
	
private:
	TPopupDataList* FDataList;
	int FButtonWidth;
	System::UnicodeString FText;
	int FDropDownRows;
	int FDropDownWidth;
	TDropDownAlign FDropDownAlign;
	bool FListVisible;
	bool FPressed;
	bool FTracking;
	System::Classes::TAlignment FAlignment;
	bool FLookupMode;
	bool FMouseInControl;
	System::Classes::TNotifyEvent FOnDropDown;
	System::Classes::TNotifyEvent FOnCloseUp;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
private:
	void __fastcall ListMouseUp(System::TObject* Sender, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall StopTracking();
	void __fastcall TrackButton(int X, int Y);
	HIDESBASE MESSAGE void __fastcall CMDialogKey(Winapi::Messages::TWMKey &Message);
	MESSAGE void __fastcall CMCancelMode(Vcl::Controls::TCMCancelMode &Message);
	HIDESBASE MESSAGE void __fastcall CMCtl3DChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMGetDataLink(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMCancelMode(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TWMKillFocus &Message);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMKillFocus &Message);
	HIDESBASE MESSAGE void __fastcall CMBiDiModeChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	void __fastcall InternalCloseUp(bool Accept, bool ChangeFocus);
	
protected:
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall Paint();
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	virtual void __fastcall KeyValueChanged();
	virtual void __fastcall ListLinkDataChanged();
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall UpdateListFields();
	virtual void __fastcall UpdateStyleElements();
	DYNAMIC void __fastcall ChangeScale(int M, int D, bool isDpiChange)/* overload */;
	
public:
	__fastcall virtual TCustomDBLookupComboBox(System::Classes::TComponent* AOwner);
	virtual void __fastcall CloseUp(bool Accept);
	virtual void __fastcall DropDown();
	DYNAMIC bool __fastcall ExecuteAction(System::Classes::TBasicAction* Action);
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	virtual bool __fastcall UpdateAction(System::Classes::TBasicAction* Action);
	DYNAMIC bool __fastcall UseRightToLeftAlignment();
	__property TDropDownAlign DropDownAlign = {read=FDropDownAlign, write=FDropDownAlign, default=0};
	__property int DropDownRows = {read=FDropDownRows, write=FDropDownRows, default=7};
	__property int DropDownWidth = {read=FDropDownWidth, write=FDropDownWidth, default=0};
	__property KeyValue = {default=0};
	__property bool ListVisible = {read=FListVisible, nodefault};
	__property System::Classes::TNotifyEvent OnCloseUp = {read=FOnCloseUp, write=FOnCloseUp};
	__property System::Classes::TNotifyEvent OnDropDown = {read=FOnDropDown, write=FOnDropDown};
	__property System::UnicodeString Text = {read=FText};
public:
	/* TDBLookupControl.Destroy */ inline __fastcall virtual ~TCustomDBLookupComboBox() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomDBLookupComboBox(HWND ParentWindow) : TDBLookupControl(ParentWindow) { }
	
	/* Hoisted overloads: */
	
protected:
	DYNAMIC inline void __fastcall  ChangeScale(int M, int D){ Vcl::Controls::TControl::ChangeScale(M, D); }
	
};


class PASCALIMPLEMENTATION TDBLookupComboBox : public TCustomDBLookupComboBox
{
	typedef TCustomDBLookupComboBox inherited;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property BevelEdges = {default=15};
	__property BevelInner = {index=0, default=2};
	__property BevelOuter = {index=1, default=1};
	__property BevelKind = {default=0};
	__property BevelWidth = {default=1};
	__property BiDiMode;
	__property Color = {default=-16777211};
	__property Constraints;
	__property Ctl3D;
	__property DataField = {default=0};
	__property DataSource;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property DropDownAlign = {default=0};
	__property DropDownRows = {default=7};
	__property DropDownWidth = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property KeyField = {default=0};
	__property ListField = {default=0};
	__property ListFieldIndex = {default=0};
	__property ListSource;
	__property NullValueKey = {default=0};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ReadOnly = {default=0};
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Touch;
	__property Visible = {default=1};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property OnClick;
	__property OnCloseUp;
	__property OnContextPopup;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnDropDown;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnGesture;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseActivate;
	__property OnMouseDown;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TCustomDBLookupComboBox.Create */ inline __fastcall virtual TDBLookupComboBox(System::Classes::TComponent* AOwner) : TCustomDBLookupComboBox(AOwner) { }
	
public:
	/* TDBLookupControl.Destroy */ inline __fastcall virtual ~TDBLookupComboBox() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TDBLookupComboBox(HWND ParentWindow) : TCustomDBLookupComboBox(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TDBRichEdit : public Vcl::Comctrls::TCustomRichEdit
{
	typedef Vcl::Comctrls::TCustomRichEdit inherited;
	
private:
	TFieldDataLink* FDataLink;
	bool FAutoDisplay;
	bool FFocused;
	bool FMemoLoaded;
	System::UnicodeString FDataSave;
	int FCreatingWnd;
	bool __fastcall BeginEditing();
	void __fastcall DataChange(System::TObject* Sender);
	void __fastcall EditingChange(System::TObject* Sender);
	System::UnicodeString __fastcall GetDataField();
	Data::Db::TDataSource* __fastcall GetDataSource();
	Data::Db::TField* __fastcall GetField();
	HIDESBASE bool __fastcall GetReadOnly();
	void __fastcall SetDataField(const System::UnicodeString Value);
	void __fastcall SetDataSource(Data::Db::TDataSource* Value);
	HIDESBASE void __fastcall SetReadOnly(bool Value);
	void __fastcall SetAutoDisplay(bool Value);
	void __fastcall SetFocused(bool Value);
	void __fastcall UpdateData(System::TObject* Sender);
	MESSAGE void __fastcall EMSetCharFormat(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall EMSetParaFormat(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMCut(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMPaste(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMClear(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMEnter(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall CMExit(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonDblClk(Winapi::Messages::TWMMouse &Message);
	MESSAGE void __fastcall CMGetDataLink(Winapi::Messages::TMessage &Message);
	
protected:
	virtual void __fastcall CreateWnd();
	DYNAMIC void __fastcall Change();
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	virtual void __fastcall Loaded();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	
public:
	__fastcall virtual TDBRichEdit(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TDBRichEdit();
	DYNAMIC bool __fastcall ExecuteAction(System::Classes::TBasicAction* Action);
	virtual void __fastcall LoadMemo();
	virtual bool __fastcall UpdateAction(System::Classes::TBasicAction* Action);
	DYNAMIC bool __fastcall UseRightToLeftAlignment();
	__property Data::Db::TField* Field = {read=GetField};
	__property Lines;
	
__published:
	__property Align = {default=0};
	__property Alignment = {default=0};
	__property Anchors = {default=3};
	__property bool AutoDisplay = {read=FAutoDisplay, write=SetAutoDisplay, default=1};
	__property BevelEdges = {default=15};
	__property BevelInner = {index=0, default=2};
	__property BevelOuter = {index=1, default=1};
	__property BevelKind = {default=0};
	__property BevelWidth = {default=1};
	__property BiDiMode;
	__property BorderStyle = {default=1};
	__property Color = {default=-16777211};
	__property Constraints;
	__property Ctl3D;
	__property System::UnicodeString DataField = {read=GetDataField, write=SetDataField};
	__property Data::Db::TDataSource* DataSource = {read=GetDataSource, write=SetDataSource};
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property EditMargins;
	__property Enabled = {default=1};
	__property Font;
	__property HideSelection = {default=1};
	__property HideScrollBars = {default=1};
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property MaxLength = {default=0};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=0};
	__property ParentShowHint = {default=1};
	__property PlainText = {default=0};
	__property PopupMenu;
	__property bool ReadOnly = {read=GetReadOnly, write=SetReadOnly, default=0};
	__property ScrollBars = {default=0};
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Touch;
	__property Visible = {default=1};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property WantReturns = {default=1};
	__property WantTabs = {default=0};
	__property WordWrap = {default=1};
	__property Zoom = {default=100};
	__property OnChange;
	__property OnClick;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnGesture;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseActivate;
	__property OnMouseDown;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnResizeRequest;
	__property OnSelectionChange;
	__property OnProtectChange;
	__property OnSaveClipboard;
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TWinControl.CreateParented */ inline __fastcall TDBRichEdit(HWND ParentWindow) : Vcl::Comctrls::TCustomRichEdit(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Word InitRepeatPause = System::Word(0x190);
static const System::Int8 RepeatPause = System::Int8(0x64);
static const System::Int8 SpaceSize = System::Int8(0x5);
extern DELPHI_PACKAGE bool __fastcall OkToChangeFieldAlignment(Data::Db::TField* AField, System::Classes::TAlignment Alignment);
extern DELPHI_PACKAGE bool __fastcall DBUseRightToLeftAlignment(Vcl::Controls::TControl* AControl, Data::Db::TField* AField);
extern DELPHI_PACKAGE bool __fastcall OkToChangeFieldBidiMode(Data::Db::TField* AField);
extern DELPHI_PACKAGE bool __fastcall DBUseRightToLeftBidiMode(Vcl::Controls::TControl* AControl, Data::Db::TField* AField);
}	/* namespace Dbctrls */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_DBCTRLS)
using namespace Vcl::Dbctrls;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_DbctrlsHPP
