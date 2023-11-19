// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.DBGrids.pas' rev: 35.00 (Windows)

#ifndef Vcl_DbgridsHPP
#define Vcl_DbgridsHPP

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
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Data.DB.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.ImageCollection.hpp>
#include <Vcl.VirtualImageList.hpp>
#include <System.UITypes.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Dbgrids
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TColumnTitle;
class DELPHICLASS TColumn;
class DELPHICLASS TDBGridColumns;
class DELPHICLASS TGridDataLink;
class DELPHICLASS TBookmarkList;
class DELPHICLASS TCustomDBGrid;
class DELPHICLASS TDBGrid;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TColumnValue : unsigned char { cvColor, cvWidth, cvFont, cvAlignment, cvReadOnly, cvTitleColor, cvTitleCaption, cvTitleAlignment, cvTitleFont, cvImeMode, cvImeName };

typedef System::Set<TColumnValue, TColumnValue::cvColor, TColumnValue::cvImeName> TColumnValues;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TColumnTitle : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TColumn* FColumn;
	System::UnicodeString FCaption;
	Vcl::Graphics::TFont* FFont;
	System::Uitypes::TColor FColor;
	System::Classes::TAlignment FAlignment;
	bool FIsFontScaled;
	void __fastcall FontChanged(System::TObject* Sender);
	System::Classes::TAlignment __fastcall GetAlignment();
	System::Uitypes::TColor __fastcall GetColor();
	System::UnicodeString __fastcall GetCaption();
	Vcl::Graphics::TFont* __fastcall GetFont();
	bool __fastcall IsAlignmentStored();
	bool __fastcall IsColorStored();
	bool __fastcall IsFontStored();
	bool __fastcall IsCaptionStored();
	void __fastcall SetAlignment(System::Classes::TAlignment Value);
	void __fastcall SetColor(System::Uitypes::TColor Value);
	void __fastcall SetFont(Vcl::Graphics::TFont* Value);
	virtual void __fastcall SetCaption(const System::UnicodeString Value);
	
protected:
	void __fastcall RefreshDefaultFont();
	__property bool IsFontScaled = {read=FIsFontScaled, nodefault};
	
public:
	__fastcall TColumnTitle(TColumn* Column);
	__fastcall virtual ~TColumnTitle();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	System::Classes::TAlignment __fastcall DefaultAlignment();
	System::Uitypes::TColor __fastcall DefaultColor();
	Vcl::Graphics::TFont* __fastcall DefaultFont();
	System::UnicodeString __fastcall DefaultCaption();
	virtual void __fastcall RestoreDefaults();
	__property TColumn* Column = {read=FColumn};
	
__published:
	__property System::Classes::TAlignment Alignment = {read=GetAlignment, write=SetAlignment, stored=IsAlignmentStored, nodefault};
	__property System::UnicodeString Caption = {read=GetCaption, write=SetCaption, stored=IsCaptionStored};
	__property System::Uitypes::TColor Color = {read=GetColor, write=SetColor, stored=IsColorStored, nodefault};
	__property Vcl::Graphics::TFont* Font = {read=GetFont, write=SetFont, stored=IsFontStored};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TColumnButtonStyle : unsigned char { cbsAuto, cbsEllipsis, cbsNone };

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TColumn : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	Data::Db::TField* FField;
	System::UnicodeString FFieldName;
	System::Uitypes::TColor FColor;
	int FWidth;
	TColumnTitle* FTitle;
	Vcl::Graphics::TFont* FFont;
	Vcl::Controls::TImeMode FImeMode;
	Vcl::Controls::TImeName FImeName;
	System::Classes::TStrings* FPickList;
	Vcl::Menus::TPopupMenu* FPopupMenu;
	unsigned FDropDownRows;
	TColumnButtonStyle FButtonStyle;
	System::Classes::TAlignment FAlignment;
	bool FReadonly;
	TColumnValues FAssignedValues;
	bool FVisible;
	bool FExpanded;
	bool FStored;
	bool FIsFontScaled;
	void __fastcall FontChanged(System::TObject* Sender);
	System::Classes::TAlignment __fastcall GetAlignment();
	System::Uitypes::TColor __fastcall GetColor();
	bool __fastcall GetExpanded();
	Data::Db::TField* __fastcall GetField();
	Vcl::Graphics::TFont* __fastcall GetFont();
	Vcl::Controls::TImeMode __fastcall GetImeMode();
	Vcl::Controls::TImeName __fastcall GetImeName();
	TColumn* __fastcall GetParentColumn();
	System::Classes::TStrings* __fastcall GetPickList();
	bool __fastcall GetReadOnly();
	bool __fastcall GetShowing();
	int __fastcall GetWidth();
	bool __fastcall GetVisible();
	bool __fastcall IsAlignmentStored();
	bool __fastcall IsColorStored();
	bool __fastcall IsFontStored();
	bool __fastcall IsImeModeStored();
	bool __fastcall IsImeNameStored();
	bool __fastcall IsReadOnlyStored();
	bool __fastcall IsWidthStored();
	virtual void __fastcall SetAlignment(System::Classes::TAlignment Value);
	void __fastcall SetButtonStyle(TColumnButtonStyle Value);
	void __fastcall SetColor(System::Uitypes::TColor Value);
	void __fastcall SetExpanded(bool Value);
	virtual void __fastcall SetField(Data::Db::TField* Value);
	void __fastcall SetFieldName(const System::UnicodeString Value);
	void __fastcall SetFont(Vcl::Graphics::TFont* Value);
	virtual void __fastcall SetImeMode(Vcl::Controls::TImeMode Value);
	virtual void __fastcall SetImeName(Vcl::Controls::TImeName Value);
	void __fastcall SetPickList(System::Classes::TStrings* Value);
	void __fastcall SetPopupMenu(Vcl::Menus::TPopupMenu* Value);
	virtual void __fastcall SetReadOnly(bool Value);
	void __fastcall SetTitle(TColumnTitle* Value);
	virtual void __fastcall SetWidth(int Value);
	void __fastcall SetVisible(bool Value);
	bool __fastcall GetExpandable();
	
protected:
	virtual TColumnTitle* __fastcall CreateTitle();
	TCustomDBGrid* __fastcall GetGrid();
	virtual System::UnicodeString __fastcall GetDisplayName();
	void __fastcall RefreshDefaultFont();
	virtual void __fastcall SetIndex(int Value);
	__property bool IsStored = {read=FStored, write=FStored, default=1};
	__property bool IsFontScaled = {read=FIsFontScaled, nodefault};
	
public:
	__fastcall virtual TColumn(System::Classes::TCollection* Collection);
	__fastcall virtual ~TColumn();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	System::Classes::TAlignment __fastcall DefaultAlignment();
	System::Uitypes::TColor __fastcall DefaultColor();
	Vcl::Graphics::TFont* __fastcall DefaultFont();
	Vcl::Controls::TImeMode __fastcall DefaultImeMode();
	Vcl::Controls::TImeName __fastcall DefaultImeName();
	bool __fastcall DefaultReadOnly();
	int __fastcall DefaultWidth();
	int __fastcall Depth();
	virtual void __fastcall RestoreDefaults();
	__property TCustomDBGrid* Grid = {read=GetGrid};
	__property TColumnValues AssignedValues = {read=FAssignedValues, nodefault};
	__property bool Expandable = {read=GetExpandable, nodefault};
	__property Data::Db::TField* Field = {read=GetField, write=SetField};
	__property TColumn* ParentColumn = {read=GetParentColumn};
	__property bool Showing = {read=GetShowing, nodefault};
	
__published:
	__property System::Classes::TAlignment Alignment = {read=GetAlignment, write=SetAlignment, stored=IsAlignmentStored, nodefault};
	__property TColumnButtonStyle ButtonStyle = {read=FButtonStyle, write=SetButtonStyle, default=0};
	__property System::Uitypes::TColor Color = {read=GetColor, write=SetColor, stored=IsColorStored, nodefault};
	__property unsigned DropDownRows = {read=FDropDownRows, write=FDropDownRows, default=7};
	__property bool Expanded = {read=GetExpanded, write=SetExpanded, default=1};
	__property System::UnicodeString FieldName = {read=FFieldName, write=SetFieldName};
	__property Vcl::Graphics::TFont* Font = {read=GetFont, write=SetFont, stored=IsFontStored};
	__property Vcl::Controls::TImeMode ImeMode = {read=GetImeMode, write=SetImeMode, stored=IsImeModeStored, nodefault};
	__property Vcl::Controls::TImeName ImeName = {read=GetImeName, write=SetImeName, stored=IsImeNameStored};
	__property System::Classes::TStrings* PickList = {read=GetPickList, write=SetPickList};
	__property Vcl::Menus::TPopupMenu* PopupMenu = {read=FPopupMenu, write=SetPopupMenu};
	__property bool ReadOnly = {read=GetReadOnly, write=SetReadOnly, stored=IsReadOnlyStored, nodefault};
	__property TColumnTitle* Title = {read=FTitle, write=SetTitle};
	__property int Width = {read=GetWidth, write=SetWidth, stored=IsWidthStored, nodefault};
	__property bool Visible = {read=GetVisible, write=SetVisible, nodefault};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TColumnClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TColumnClass);
#endif /* _WIN64 */

enum DECLSPEC_DENUM TDBGridColumnsState : unsigned char { csDefault, csCustomized };

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TDBGridColumns : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	TColumn* operator[](int Index) { return this->Items[Index]; }
	
private:
	TCustomDBGrid* FGrid;
	TColumn* __fastcall GetColumn(int Index);
	TColumn* __fastcall InternalAdd();
	void __fastcall SetColumn(int Index, TColumn* Value);
	void __fastcall SetState(TDBGridColumnsState NewState);
	TDBGridColumnsState __fastcall GetState();
	
protected:
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	virtual void __fastcall Update(System::Classes::TCollectionItem* Item);
	
public:
	__fastcall TDBGridColumns(TCustomDBGrid* Grid, TColumnClass ColumnClass);
	HIDESBASE TColumn* __fastcall Add();
	void __fastcall LoadFromFile(const System::UnicodeString Filename);
	void __fastcall LoadFromStream(System::Classes::TStream* S);
	void __fastcall RestoreDefaults();
	void __fastcall RebuildColumns();
	void __fastcall SaveToFile(const System::UnicodeString Filename);
	void __fastcall SaveToStream(System::Classes::TStream* S);
	__property TDBGridColumnsState State = {read=GetState, write=SetState, nodefault};
	__property TCustomDBGrid* Grid = {read=FGrid};
	__property TColumn* Items[int Index] = {read=GetColumn, write=SetColumn/*, default*/};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TDBGridColumns() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TGridDataLink : public Data::Db::TDataLink
{
	typedef Data::Db::TDataLink inherited;
	
	
private:
	typedef System::DynamicArray<int> _TGridDataLink__1;
	
	
private:
	TCustomDBGrid* FGrid;
	int FFieldCount;
	_TGridDataLink__1 FFieldMap;
	bool FModified;
	bool FInUpdateData;
	bool FSparseMap;
	bool __fastcall GetDefaultFields();
	Data::Db::TField* __fastcall GetFields(int I);
	
protected:
	virtual void __fastcall ActiveChanged();
	void __fastcall BuildAggMap();
	virtual void __fastcall DataSetChanged();
	virtual void __fastcall DataSetScrolled(int Distance);
	virtual void __fastcall FocusControl(Data::Db::TFieldRef Field);
	virtual void __fastcall EditingChanged();
	virtual bool __fastcall IsAggRow(int Value);
	virtual void __fastcall LayoutChanged();
	virtual void __fastcall RecordChanged(Data::Db::TField* Field);
	virtual void __fastcall UpdateData();
	int __fastcall GetMappedIndex(int ColIndex);
	
public:
	__fastcall TGridDataLink(TCustomDBGrid* AGrid);
	__fastcall virtual ~TGridDataLink();
	bool __fastcall AddMapping(const System::UnicodeString FieldName);
	void __fastcall ClearMapping();
	void __fastcall Modified();
	void __fastcall Reset();
	__property bool DefaultFields = {read=GetDefaultFields, nodefault};
	__property int FieldCount = {read=FFieldCount, nodefault};
	__property Data::Db::TField* Fields[int I] = {read=GetFields};
	__property bool SparseMap = {read=FSparseMap, write=FSparseMap, nodefault};
	__property TCustomDBGrid* Grid = {read=FGrid};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TBookmarkList : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
#ifndef _WIN64
	typedef System::DynamicArray<System::DynamicArray<System::Byte> > _TBookmarkList__1;
#else /* _WIN64 */
	typedef System::DynamicArray<System::TArray__1<System::Byte> > _TBookmarkList__1;
#endif /* _WIN64 */
	
	
public:
#ifndef _WIN64
	System::DynamicArray<System::Byte> operator[](int Index) { return this->Items[Index]; }
#else /* _WIN64 */
	System::TArray__1<System::Byte> operator[](int Index) { return this->Items[Index]; }
#endif /* _WIN64 */
	
private:
	_TBookmarkList__1 FList;
	TCustomDBGrid* FGrid;
#ifndef _WIN64
	System::DynamicArray<System::Byte> FCache;
#else /* _WIN64 */
	System::TArray__1<System::Byte> FCache;
#endif /* _WIN64 */
	int FCacheIndex;
	bool FCacheFind;
	bool FLinkActive;
	int __fastcall GetCount();
	bool __fastcall GetCurrentRowSelected();
#ifndef _WIN64
	System::DynamicArray<System::Byte> __fastcall GetItem(int Index);
	void __fastcall InsertItem(int Index, System::DynamicArray<System::Byte> Item);
#else /* _WIN64 */
	System::TArray__1<System::Byte> __fastcall GetItem(int Index);
	void __fastcall InsertItem(int Index, System::TArray__1<System::Byte> Item);
#endif /* _WIN64 */
	void __fastcall DeleteItem(int Index);
	void __fastcall SetCurrentRowSelected(bool Value);
	void __fastcall DataChanged(System::TObject* Sender);
	
protected:
#ifndef _WIN64
	System::DynamicArray<System::Byte> __fastcall CurrentRow();
	int __fastcall Compare(const System::DynamicArray<System::Byte> Item1, const System::DynamicArray<System::Byte> Item2);
#else /* _WIN64 */
	System::TArray__1<System::Byte> __fastcall CurrentRow();
	int __fastcall Compare(const System::TArray__1<System::Byte> Item1, const System::TArray__1<System::Byte> Item2);
#endif /* _WIN64 */
	void __fastcall LinkActive(bool Value);
	
public:
	__fastcall TBookmarkList(TCustomDBGrid* AGrid);
	__fastcall virtual ~TBookmarkList();
	void __fastcall Clear();
	void __fastcall Delete();
#ifndef _WIN64
	bool __fastcall Find(const System::DynamicArray<System::Byte> Item, int &Index);
	int __fastcall IndexOf(const System::DynamicArray<System::Byte> Item);
#else /* _WIN64 */
	bool __fastcall Find(const System::TArray__1<System::Byte> Item, int &Index);
	int __fastcall IndexOf(const System::TArray__1<System::Byte> Item);
#endif /* _WIN64 */
	bool __fastcall Refresh();
	__property int Count = {read=GetCount, nodefault};
	__property bool CurrentRowSelected = {read=GetCurrentRowSelected, write=SetCurrentRowSelected, nodefault};
#ifndef _WIN64
	__property System::DynamicArray<System::Byte> Items[int Index] = {read=GetItem/*, default*/};
#else /* _WIN64 */
	__property System::TArray__1<System::Byte> Items[int Index] = {read=GetItem/*, default*/};
#endif /* _WIN64 */
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TDBGridOption : unsigned char { dgEditing, dgAlwaysShowEditor, dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgRowSelect, dgAlwaysShowSelection, dgConfirmDelete, dgCancelOnExit, dgMultiSelect, dgTitleClick, dgTitleHotTrack };

typedef System::Set<TDBGridOption, TDBGridOption::dgEditing, TDBGridOption::dgTitleHotTrack> TDBGridOptions;

typedef void __fastcall (__closure *TDrawDataCellEvent)(System::TObject* Sender, const System::Types::TRect &Rect, Data::Db::TField* Field, Vcl::Grids::TGridDrawState State);

typedef void __fastcall (__closure *TDrawColumnCellEvent)(System::TObject* Sender, const System::Types::TRect &Rect, int DataCol, TColumn* Column, Vcl::Grids::TGridDrawState State);

typedef void __fastcall (__closure *TDBGridClickEvent)(TColumn* Column);

class PASCALIMPLEMENTATION TCustomDBGrid : public Vcl::Grids::TCustomGrid
{
	typedef Vcl::Grids::TCustomGrid inherited;
	
private:
	bool FNeedRestoreImeName;
	Vcl::Virtualimagelist::TVirtualImageList* FIndicators;
	Vcl::Graphics::TFont* FTitleFont;
	bool FReadOnly;
	Vcl::Controls::TImeName FOriginalImeName;
	Vcl::Controls::TImeMode FOriginalImeMode;
	bool FUserChange;
	bool FIsESCKey;
	bool FLayoutFromDataset;
	TDBGridOptions FOptions;
	System::Byte FTitleOffset;
	System::Byte FIndicatorOffset;
	int FIndicatorWidth;
	System::Byte FUpdateLock;
	System::Byte FLayoutLock;
	bool FInColExit;
	bool FDefaultDrawing;
	bool FSelfChangingTitleFont;
	bool FSelecting;
	int FSelRow;
	TGridDataLink* FDataLink;
	System::Classes::TNotifyEvent FOnColEnter;
	System::Classes::TNotifyEvent FOnColExit;
	TDrawDataCellEvent FOnDrawDataCell;
	TDrawColumnCellEvent FOnDrawColumnCell;
	System::UnicodeString FEditText;
	TDBGridColumns* FColumns;
	System::Classes::TList* FVisibleColumns;
	TBookmarkList* FBookmarks;
#ifndef _WIN64
	System::DynamicArray<System::Byte> FSelectionAnchor;
#else /* _WIN64 */
	System::TArray__1<System::Byte> FSelectionAnchor;
#endif /* _WIN64 */
	System::Classes::TNotifyEvent FOnEditButtonClick;
	Vcl::Grids::TMovedEvent FOnColumnMoved;
	TDBGridClickEvent FOnCellClick;
	TDBGridClickEvent FOnTitleClick;
	TColumn* FDragCol;
	bool FOldScrollBarVisible;
	static Vcl::Imagecollection::TImageCollection* FIndicatorImageCollection;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
private:
	bool __fastcall AcquireFocus();
	void __fastcall DataChanged();
	void __fastcall EditingChanged();
	Data::Db::TDataSource* __fastcall GetDataSource();
	int __fastcall GetFieldCount();
	Data::Db::TField* __fastcall GetFields(int FieldIndex);
	Data::Db::TField* __fastcall GetSelectedField();
	int __fastcall GetSelectedIndex();
	void __fastcall InternalLayout();
	void __fastcall MoveCol(int RawCol, int Direction);
	bool __fastcall PtInExpandButton(int X, int Y, TColumn* &MasterCol);
	void __fastcall ReadColumns(System::Classes::TReader* Reader);
	void __fastcall RecordChanged(Data::Db::TField* Field);
	HIDESBASE void __fastcall SetIme();
	void __fastcall SetColumns(TDBGridColumns* Value);
	void __fastcall SetDataSource(Data::Db::TDataSource* Value);
	HIDESBASE void __fastcall SetOptions(TDBGridOptions Value);
	void __fastcall SetSelectedField(Data::Db::TField* Value);
	void __fastcall SetSelectedIndex(int Value);
	void __fastcall SetTitleFont(Vcl::Graphics::TFont* Value);
	void __fastcall TitleFontChanged(System::TObject* Sender);
	void __fastcall UpdateData();
	void __fastcall UpdateActive();
	void __fastcall UpdateIme();
	void __fastcall UpdateRowCount();
	void __fastcall WriteColumns(System::Classes::TWriter* Writer);
	HIDESBASE MESSAGE void __fastcall CMBiDiModeChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMExit(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMParentFontChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMDeferLayout(void *Message);
	HIDESBASE MESSAGE void __fastcall CMDesignHitTest(Winapi::Messages::TWMMouse &Msg);
	HIDESBASE MESSAGE void __fastcall WMSetCursor(Winapi::Messages::TWMSetCursor &Msg);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	HIDESBASE MESSAGE void __fastcall WMVScroll(Winapi::Messages::TWMScroll &Message);
	HIDESBASE MESSAGE void __fastcall WMIMEStartComp(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Message);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TMessage &Message);
	bool __fastcall CanEditModifyField(Data::Db::TField* AField);
	
protected:
	bool FUpdateFields;
	bool FAcquireFocus;
	DYNAMIC void __fastcall ChangeScale(int M, int D, bool isDpiChange)/* overload */;
	int __fastcall RawToDataColumn(int ACol);
	int __fastcall DataToRawColumn(int ACol);
	bool __fastcall AcquireLayoutLock();
	void __fastcall BeginLayout();
	HIDESBASE void __fastcall BeginUpdate();
	virtual void __fastcall CalcSizingState(int X, int Y, Vcl::Grids::TGridState &State, int &Index, int &SizingPos, int &SizingOfs, Vcl::Grids::TGridDrawInfo &FixedInfo);
	virtual int __fastcall CalcColWidth(const int ATextLength, const System::UnicodeString ACaption, System::TObject* AColumnObj);
	void __fastcall CancelLayout();
	DYNAMIC bool __fastcall CanEditAcceptKey(System::WideChar Key);
	DYNAMIC bool __fastcall CanEditModify();
	virtual bool __fastcall CanEditShow();
	DYNAMIC void __fastcall CellClick(TColumn* Column);
	DYNAMIC void __fastcall ColumnMoved(int FromIndex, int ToIndex);
	System::Types::TRect __fastcall CalcTitleRect(TColumn* Col, int ARow, TColumn* &MasterCol);
	virtual Vcl::Grids::TGridRect __fastcall CalcExpandedCellRect(const Vcl::Grids::TGridCoord &Coord);
	TColumn* __fastcall ColumnAtDepth(TColumn* Col, int ADepth);
	DYNAMIC void __fastcall ColEnter();
	DYNAMIC void __fastcall ColExit();
	DYNAMIC void __fastcall ColWidthsChanged();
	DYNAMIC TDBGridColumns* __fastcall CreateColumns();
	virtual Vcl::Grids::TInplaceEdit* __fastcall CreateEditor();
	DYNAMIC TGridDataLink* __fastcall CreateDataLink();
	virtual void __fastcall CreateWnd();
	void __fastcall DeferLayout();
	virtual void __fastcall DefineFieldMap();
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual void __fastcall DrawCell(int ACol, int ARow, const System::Types::TRect &ARect, Vcl::Grids::TGridDrawState AState);
	virtual void __fastcall DrawCellBackground(const System::Types::TRect &ARect, System::Uitypes::TColor AColor, Vcl::Grids::TGridDrawState AState, int ACol, int ARow);
	virtual void __fastcall DrawCellHighlight(const System::Types::TRect &ARect, Vcl::Grids::TGridDrawState AState, int ACol, int ARow);
	DYNAMIC void __fastcall DrawDataCell(const System::Types::TRect &Rect, Data::Db::TField* Field, Vcl::Grids::TGridDrawState State);
	DYNAMIC void __fastcall DrawColumnCell(const System::Types::TRect &Rect, int DataCol, TColumn* Column, Vcl::Grids::TGridDrawState State);
	DYNAMIC void __fastcall EditButtonClick();
	void __fastcall EndLayout();
	HIDESBASE void __fastcall EndUpdate();
	Data::Db::TField* __fastcall GetColField(int DataCol);
	DYNAMIC int __fastcall GetEditLimit();
	DYNAMIC System::UnicodeString __fastcall GetEditMask(int ACol, int ARow);
	DYNAMIC Vcl::Grids::TEditStyle __fastcall GetEditStyle(int ACol, int ARow);
	DYNAMIC System::UnicodeString __fastcall GetEditText(int ACol, int ARow);
	System::UnicodeString __fastcall GetFieldValue(int ACol);
	virtual bool __fastcall HighlightCell(int DataCol, int DataRow, const System::UnicodeString Value, Vcl::Grids::TGridDrawState AState);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	void __fastcall InvalidateTitles();
	virtual void __fastcall LayoutChanged();
	virtual void __fastcall LinkActive(bool Value);
	virtual void __fastcall Loaded();
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC bool __fastcall DoMouseWheelDown(System::Classes::TShiftState Shift, const System::Types::TPoint &MousePos);
	DYNAMIC bool __fastcall DoMouseWheelUp(System::Classes::TShiftState Shift, const System::Types::TPoint &MousePos);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall Scroll(int Distance);
	virtual void __fastcall SetColumnAttributes();
	DYNAMIC void __fastcall SetEditText(int ACol, int ARow, const System::UnicodeString Value);
	bool __fastcall StoreColumns();
	DYNAMIC void __fastcall TimedScroll(Vcl::Grids::TGridScrollDirection Direction);
	DYNAMIC void __fastcall TitleClick(TColumn* Column);
	DYNAMIC void __fastcall TopLeftChanged();
	virtual void __fastcall UpdateScrollBar();
	bool __fastcall UseRightToLeftAlignmentForField(Data::Db::TField* const AField, System::Classes::TAlignment Alignment);
	DYNAMIC bool __fastcall BeginColumnDrag(int &Origin, int &Destination, const System::Types::TPoint &MousePt);
	DYNAMIC bool __fastcall CheckColumnDrag(int &Origin, int &Destination, const System::Types::TPoint &MousePt);
	DYNAMIC bool __fastcall EndColumnDrag(int &Origin, int &Destination, const System::Types::TPoint &MousePt);
	__property TDBGridColumns* Columns = {read=FColumns, write=SetColumns};
	__property bool DefaultDrawing = {read=FDefaultDrawing, write=FDefaultDrawing, default=1};
	__property TGridDataLink* DataLink = {read=FDataLink};
	__property System::Byte IndicatorOffset = {read=FIndicatorOffset, nodefault};
	__property System::Byte LayoutLock = {read=FLayoutLock, nodefault};
	__property TDBGridOptions Options = {read=FOptions, write=SetOptions, default=27901};
	__property ParentColor = {default=0};
	__property bool ReadOnly = {read=FReadOnly, write=FReadOnly, default=0};
	__property TBookmarkList* SelectedRows = {read=FBookmarks};
	__property Vcl::Graphics::TFont* TitleFont = {read=FTitleFont, write=SetTitleFont};
	__property System::Byte UpdateLock = {read=FUpdateLock, nodefault};
	__property System::Classes::TNotifyEvent OnColEnter = {read=FOnColEnter, write=FOnColEnter};
	__property System::Classes::TNotifyEvent OnColExit = {read=FOnColExit, write=FOnColExit};
	__property TDrawDataCellEvent OnDrawDataCell = {read=FOnDrawDataCell, write=FOnDrawDataCell};
	__property TDrawColumnCellEvent OnDrawColumnCell = {read=FOnDrawColumnCell, write=FOnDrawColumnCell};
	__property System::Classes::TNotifyEvent OnEditButtonClick = {read=FOnEditButtonClick, write=FOnEditButtonClick};
	__property Vcl::Grids::TMovedEvent OnColumnMoved = {read=FOnColumnMoved, write=FOnColumnMoved};
	__property TDBGridClickEvent OnCellClick = {read=FOnCellClick, write=FOnCellClick};
	__property TDBGridClickEvent OnTitleClick = {read=FOnTitleClick, write=FOnTitleClick};
	
public:
	__fastcall virtual TCustomDBGrid(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomDBGrid();
	void __fastcall DefaultDrawDataCell(const System::Types::TRect &Rect, Data::Db::TField* Field, Vcl::Grids::TGridDrawState State);
	void __fastcall DefaultDrawColumnCell(const System::Types::TRect &Rect, int DataCol, TColumn* Column, Vcl::Grids::TGridDrawState State);
	virtual void __fastcall DefaultHandler(void *Msg);
	DYNAMIC bool __fastcall ExecuteAction(System::Classes::TBasicAction* Action);
	DYNAMIC void __fastcall ShowPopupEditor(TColumn* Column, int X = 0x80000000, int Y = 0x80000000);
	virtual bool __fastcall UpdateAction(System::Classes::TBasicAction* Action);
	bool __fastcall ValidFieldIndex(int FieldIndex);
	__property EditorMode;
	__property int FieldCount = {read=GetFieldCount, nodefault};
	__property Data::Db::TField* Fields[int FieldIndex] = {read=GetFields};
	__property Data::Db::TField* SelectedField = {read=GetSelectedField, write=SetSelectedField};
	__property int SelectedIndex = {read=GetSelectedIndex, write=SetSelectedIndex, nodefault};
	__property Data::Db::TDataSource* DataSource = {read=GetDataSource, write=SetDataSource};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomDBGrid(HWND ParentWindow) : Vcl::Grids::TCustomGrid(ParentWindow) { }
	
	/* Hoisted overloads: */
	
protected:
	DYNAMIC inline void __fastcall  ChangeScale(int M, int D){ Vcl::Controls::TControl::ChangeScale(M, D); }
	
};


class PASCALIMPLEMENTATION TDBGrid : public TCustomDBGrid
{
	typedef TCustomDBGrid inherited;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
public:
	__property Canvas;
	__property SelectedRows;
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property BiDiMode;
	__property BorderStyle = {default=1};
	__property Color = {default=-16777211};
	__property Columns = {stored=false};
	__property Constraints;
	__property Ctl3D;
	__property DataSource;
	__property DefaultDrawing = {default=1};
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property DrawingStyle = {default=1};
	__property Enabled = {default=1};
	__property FixedColor = {default=-16777201};
	__property GradientEndColor;
	__property GradientStartColor = {default=16777215};
	__property Font;
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property Options = {default=27901};
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
	__property TitleFont;
	__property Touch;
	__property Visible = {default=1};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property OnCellClick;
	__property OnColEnter;
	__property OnColExit;
	__property OnColumnMoved;
	__property OnDrawDataCell;
	__property OnDrawColumnCell;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEditButtonClick;
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
	__property OnMouseWheel;
	__property OnMouseWheelDown;
	__property OnMouseWheelUp;
	__property OnStartDock;
	__property OnStartDrag;
	__property OnTitleClick;
public:
	/* TCustomDBGrid.Create */ inline __fastcall virtual TDBGrid(System::Classes::TComponent* AOwner) : TCustomDBGrid(AOwner) { }
	/* TCustomDBGrid.Destroy */ inline __fastcall virtual ~TDBGrid() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TDBGrid(HWND ParentWindow) : TCustomDBGrid(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
#define ColumnTitleValues (System::Set<TColumnValue, TColumnValue::cvColor, TColumnValue::cvImeName>() << TColumnValue::cvTitleColor << TColumnValue::cvTitleCaption << TColumnValue::cvTitleAlignment << TColumnValue::cvTitleFont )
static const System::Word cm_DeferLayout = System::Word(0x464);
static const System::Int8 IndicatorWidth = System::Int8(0xb);
}	/* namespace Dbgrids */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_DBGRIDS)
using namespace Vcl::Dbgrids;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_DbgridsHPP
