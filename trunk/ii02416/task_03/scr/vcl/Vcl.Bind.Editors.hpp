// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.Bind.Editors.pas' rev: 35.00 (Windows)

#ifndef Vcl_Bind_EditorsHPP
#define Vcl_Bind_EditorsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.Bindings.EvalProtocol.hpp>
#include <Data.Bind.Components.hpp>
#include <Data.Bind.Editors.hpp>
#include <Vcl.StdCtrls.hpp>
#include <System.Bindings.ObjEval.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.Controls.hpp>
#include <System.Generics.Collections.hpp>
#include <System.Rtti.hpp>
#include <System.SysUtils.hpp>
#include <System.UITypes.hpp>
#include <System.Generics.Defaults.hpp>

//-- user supplied -----------------------------------------------------------
#pragma link "Vcl.Bind.Editors"

namespace Vcl
{
namespace Bind
{
namespace Editors
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TBindStateCheckBoxEditor;
class DELPHICLASS TBaseListBoxItemEditorObject;
class DELPHICLASS TListBoxItemEditorObject;
class DELPHICLASS TComboBoxItemEditorObject;
class DELPHICLASS TBindListLookupEditorImpl;
class DELPHICLASS TBaseBindListListBoxEditor;
class DELPHICLASS TBindListListBoxEditor;
class DELPHICLASS TBindListComboBoxEditor;
class DELPHICLASS TListViewItemEditorObject;
class DELPHICLASS TListViewGroupEditorObject;
class DELPHICLASS TBindListListViewEditor;
class DELPHICLASS TStringGridItemEditorObject;
class DELPHICLASS TBindListStringGridEditor;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TBindStateCheckBoxEditor : public Data::Bind::Editors::TBindCheckBoxEditor
{
	typedef Data::Bind::Editors::TBindCheckBoxEditor inherited;
	
private:
	Vcl::Stdctrls::TCheckBox* FCheckBox;
	
public:
	__fastcall TBindStateCheckBoxEditor(Vcl::Stdctrls::TCheckBox* ACheckBox);
	virtual Data::Bind::Components::TBindCheckBoxState __fastcall GetState();
	virtual void __fastcall SetState(Data::Bind::Components::TBindCheckBoxState Value);
	virtual bool __fastcall GetAllowGrayed();
	virtual void __fastcall SetAllowGrayed(bool Value);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TBindStateCheckBoxEditor() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef int TLookupKey;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TBaseListBoxItemEditorObject : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	int FIndex;
	virtual System::Classes::TStrings* __fastcall GetControlItems() = 0 ;
	virtual int __fastcall GetControlItemIndex() = 0 ;
	virtual void __fastcall SetControlItemIndex(int AIndex) = 0 ;
	virtual void __fastcall ControlClear() = 0 ;
	virtual void __fastcall SetText(const System::UnicodeString Value) = 0 ;
	virtual System::UnicodeString __fastcall GetText() = 0 ;
	int __fastcall GetLookupKey();
	
public:
	__property System::Classes::TStrings* ControlItems = {read=GetControlItems};
	__property int ControlItemIndex = {read=GetControlItemIndex, write=SetControlItemIndex, nodefault};
	__property System::UnicodeString Text = {read=GetText, write=SetText};
public:
	/* TObject.Create */ inline __fastcall TBaseListBoxItemEditorObject() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TBaseListBoxItemEditorObject() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TListBoxItemEditorObject : public TBaseListBoxItemEditorObject
{
	typedef TBaseListBoxItemEditorObject inherited;
	
private:
	Vcl::Stdctrls::TCustomListBox* FListBox;
	Vcl::Stdctrls::TCustomListBox* __fastcall GetOwner();
	
protected:
	virtual void __fastcall SetText(const System::UnicodeString Value);
	virtual System::UnicodeString __fastcall GetText();
	virtual System::Classes::TStrings* __fastcall GetControlItems();
	virtual int __fastcall GetControlItemIndex();
	virtual void __fastcall SetControlItemIndex(int AIndex);
	virtual void __fastcall ControlClear();
	
public:
	__fastcall TListBoxItemEditorObject(Vcl::Stdctrls::TCustomListBox* AListBox);
	__property Vcl::Stdctrls::TCustomListBox* Owner = {read=GetOwner};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TListBoxItemEditorObject() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TComboBoxItemEditorObject : public TBaseListBoxItemEditorObject
{
	typedef TBaseListBoxItemEditorObject inherited;
	
private:
	Vcl::Stdctrls::TCustomComboBox* FComboBox;
	Vcl::Stdctrls::TCustomComboBox* __fastcall GetOwner();
	
protected:
	virtual void __fastcall SetText(const System::UnicodeString Value);
	virtual System::UnicodeString __fastcall GetText();
	virtual System::Classes::TStrings* __fastcall GetControlItems();
	virtual int __fastcall GetControlItemIndex();
	virtual void __fastcall SetControlItemIndex(int AIndex);
	virtual void __fastcall ControlClear();
	
public:
	__fastcall TComboBoxItemEditorObject(Vcl::Stdctrls::TCustomComboBox* AComboBox);
	__property Vcl::Stdctrls::TCustomComboBox* Owner = {read=GetOwner};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TComboBoxItemEditorObject() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TBindListLookupEditorImpl : public Data::Bind::Editors::TBindListLookupEditor
{
	typedef Data::Bind::Editors::TBindListLookupEditor inherited;
	
private:
	int FCurrentKey;
	System::Generics::Collections::TDictionary__2<int,System::Rtti::TValue>* FLookupDictionary;
	int __fastcall FindLookupValue(const System::Rtti::TValue &AValue);
	bool __fastcall SameValue(const System::Rtti::TValue &AValue1, const System::Rtti::TValue &AValue2);
	
protected:
	int __fastcall NextKey();
	void __fastcall ListCleared();
	void __fastcall ItemRemoved(int AListItem);
	virtual int __fastcall GetLookupKey(System::TObject* AListItemObject) = 0 ;
	virtual int __fastcall GetSelected() = 0 ;
	virtual int __fastcall ListCount() = 0 ;
	virtual int __fastcall GetListItem(int I) = 0 ;
	virtual void __fastcall SetSelected(int ALookupKey) = 0 ;
	virtual System::Rtti::TValue __fastcall GetLookupValue(const System::Bindings::Evalprotocol::_di_IScope AScope);
	virtual void __fastcall SetLookupValue(const System::Bindings::Evalprotocol::_di_IScope AScope, const System::Rtti::TValue &AValue);
	virtual System::Rtti::TValue __fastcall GetSelectedLookupValue();
	virtual void __fastcall SetSelectedLookupValue(const System::Rtti::TValue &AValue);
	
public:
	__fastcall virtual ~TBindListLookupEditorImpl();
public:
	/* TObject.Create */ inline __fastcall TBindListLookupEditorImpl() : Data::Bind::Editors::TBindListLookupEditor() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TBaseBindListListBoxEditor : public TBindListLookupEditorImpl
{
	typedef TBindListLookupEditorImpl inherited;
	
private:
	TBaseListBoxItemEditorObject* FEditorObject;
	int FUpdateCounter;
	void __fastcall SetCurrentValue(const System::UnicodeString AMemberName, const System::Rtti::TValue &AValue, Data::Bind::Components::TScopeMemberType AType);
	bool __fastcall CanSetCurrentValue(const System::UnicodeString AMemberName, /* out */ Data::Bind::Components::TScopeMemberType &AType);
	
protected:
	virtual TBaseListBoxItemEditorObject* __fastcall CreateItemsEditor(Vcl::Controls::TControl* AControl) = 0 ;
	virtual int __fastcall GetLookupKey(System::TObject* AListItemObject);
	virtual void __fastcall BeginUpdate();
	virtual void __fastcall EndUpdate();
	virtual System::Bindings::Evalprotocol::_di_IScope __fastcall AddItem(bool Select = false);
	virtual System::Bindings::Evalprotocol::_di_IScope __fastcall InsertItem(bool Select = false);
	virtual bool __fastcall CanInsertItem();
	virtual System::Bindings::Evalprotocol::_di_IScope __fastcall CurrentItem();
	virtual int __fastcall GetRowCount();
	virtual bool __fastcall MoveNext();
	virtual void __fastcall DeleteToEnd();
	virtual void __fastcall ClearList();
	virtual System::UnicodeString __fastcall GetSelectedText();
	virtual void __fastcall SetSelectedText(const System::UnicodeString AValue);
	virtual int __fastcall CurrentIndex();
	
public:
	__fastcall TBaseBindListListBoxEditor(Vcl::Controls::TControl* AControl);
	__fastcall virtual ~TBaseBindListListBoxEditor();
private:
	void *__IBindListEditorEvalShortcut;	// Data::Bind::Components::IBindListEditorEvalShortcut 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {B3E7381A-559C-479B-B867-92FDACFDFD34}
	operator Data::Bind::Components::_di_IBindListEditorEvalShortcut()
	{
		Data::Bind::Components::_di_IBindListEditorEvalShortcut intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Data::Bind::Components::IBindListEditorEvalShortcut*(void) { return (Data::Bind::Components::IBindListEditorEvalShortcut*)&__IBindListEditorEvalShortcut; }
	#endif
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TBindListListBoxEditor : public TBaseBindListListBoxEditor
{
	typedef TBaseBindListListBoxEditor inherited;
	
private:
	Vcl::Stdctrls::TCustomListBox* FListBox;
	
protected:
	virtual TBaseListBoxItemEditorObject* __fastcall CreateItemsEditor(Vcl::Controls::TControl* AControl);
	virtual int __fastcall GetSelected();
	virtual int __fastcall ListCount();
	virtual int __fastcall GetListItem(int I);
	virtual void __fastcall SetSelected(int ALookupKey);
	virtual int __fastcall GetItemIndex();
	virtual void __fastcall SetItemIndex(int AIndex);
	
public:
	__fastcall TBindListListBoxEditor(Vcl::Stdctrls::TCustomListBox* AListBox);
	__fastcall virtual ~TBindListListBoxEditor();
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TBindListComboBoxEditor : public TBaseBindListListBoxEditor
{
	typedef TBaseBindListListBoxEditor inherited;
	
private:
	Vcl::Stdctrls::TCustomComboBox* FListBox;
	
protected:
	virtual TBaseListBoxItemEditorObject* __fastcall CreateItemsEditor(Vcl::Controls::TControl* AControl);
	virtual int __fastcall GetSelected();
	virtual int __fastcall ListCount();
	virtual int __fastcall GetListItem(int I);
	virtual void __fastcall SetSelected(int ALookupKey);
	virtual int __fastcall GetItemIndex();
	virtual void __fastcall SetItemIndex(int AIndex);
	
public:
	__fastcall TBindListComboBoxEditor(Vcl::Stdctrls::TCustomComboBox* ACombobox);
	__fastcall virtual ~TBindListComboBoxEditor();
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TListViewItemEditorObject : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Vcl::Comctrls::TCustomListView* FListView;
	int FItemIndex;
	Vcl::Comctrls::TCustomListView* __fastcall GetOwner();
	void __fastcall SetText(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetText();
	Vcl::Comctrls::TListItem* __fastcall CurrentItem();
	System::UnicodeString __fastcall GetCaption();
	bool __fastcall GetChecked();
	void * __fastcall GetData();
	bool __fastcall GetFocused();
	int __fastcall GetGroupID();
	System::Uitypes::TImageIndex __fastcall GetImageIndex();
	int __fastcall GetIndent();
	int __fastcall GetLeft();
	System::Uitypes::TImageIndex __fastcall GetOverlayIndex();
	bool __fastcall GetSelected();
	System::Uitypes::TImageIndex __fastcall GetStateIndex();
	int __fastcall GetSubItemImage(int Index);
	System::Classes::TStrings* __fastcall GetSubItems();
	int __fastcall GetTop();
	void __fastcall SetCaption(const System::UnicodeString Value);
	void __fastcall SetChecked(const bool Value);
	void __fastcall SetData(const void * Value);
	void __fastcall SetFocused(const bool Value);
	void __fastcall SetGroupID(const int Value);
	void __fastcall SetImageIndex(const System::Uitypes::TImageIndex Value);
	void __fastcall SetIndent(const int Value);
	void __fastcall SetLeft(const int Value);
	void __fastcall SetOverlayIndex(const System::Uitypes::TImageIndex Value);
	void __fastcall SetSelected(const bool Value);
	void __fastcall SetStateIndex(const System::Uitypes::TImageIndex Value);
	void __fastcall SetSubItemImage(int Index, const int Value);
	void __fastcall SetSubItems(System::Classes::TStrings* const Value);
	void __fastcall SetTop(const int Value);
	bool __fastcall CheckRange();
	
public:
	__property System::UnicodeString Text = {read=GetText, write=SetText};
	__property Vcl::Comctrls::TCustomListView* Owner = {read=GetOwner};
	__property System::UnicodeString Caption = {read=GetCaption, write=SetCaption};
	__property bool Checked = {read=GetChecked, write=SetChecked, nodefault};
	__property void * Data = {read=GetData, write=SetData};
	__property bool Focused = {read=GetFocused, write=SetFocused, nodefault};
	__property int GroupID = {read=GetGroupID, write=SetGroupID, nodefault};
	__property System::Uitypes::TImageIndex ImageIndex = {read=GetImageIndex, write=SetImageIndex, nodefault};
	__property int Indent = {read=GetIndent, write=SetIndent, nodefault};
	__property int Left = {read=GetLeft, write=SetLeft, nodefault};
	__property System::Uitypes::TImageIndex OverlayIndex = {read=GetOverlayIndex, write=SetOverlayIndex, nodefault};
	__property bool Selected = {read=GetSelected, write=SetSelected, nodefault};
	__property System::Uitypes::TImageIndex StateIndex = {read=GetStateIndex, write=SetStateIndex, nodefault};
	__property System::Classes::TStrings* SubItems = {read=GetSubItems, write=SetSubItems};
	__property int SubItemImages[int Index] = {read=GetSubItemImage, write=SetSubItemImage};
	__property int Top = {read=GetTop, write=SetTop, nodefault};
public:
	/* TObject.Create */ inline __fastcall TListViewItemEditorObject() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TListViewItemEditorObject() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TListViewGroupEditorObject : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TListViewItemEditorObject* FEditorObject;
	System::UnicodeString __fastcall GetFooter();
	System::Classes::TAlignment __fastcall GetFooterAlign();
	int __fastcall GetGroupID();
	Vcl::Comctrls::TListGroup* __fastcall GetGroupObject();
	System::UnicodeString __fastcall GetHeader();
	System::Classes::TAlignment __fastcall GetHeaderAlign();
	Vcl::Comctrls::TCustomListView* __fastcall GetOwner();
	Vcl::Comctrls::TListGroupStateSet __fastcall GetState();
	System::UnicodeString __fastcall GetSubtitle();
	System::Uitypes::TImageIndex __fastcall GetTitleImage();
	void __fastcall SetFooter(const System::UnicodeString Value);
	void __fastcall SetFooterAlign(const System::Classes::TAlignment Value);
	void __fastcall SetGroupID(const int Value);
	void __fastcall SetHeader(const System::UnicodeString Value);
	void __fastcall SetHeaderAlign(const System::Classes::TAlignment Value);
	void __fastcall SetState(const Vcl::Comctrls::TListGroupStateSet Value);
	void __fastcall SetSubtitle(const System::UnicodeString Value);
	void __fastcall SetTitleImage(const System::Uitypes::TImageIndex Value);
	bool __fastcall CheckGroup(/* out */ Vcl::Comctrls::TListGroup* &AGroup);
	
public:
	__fastcall TListViewGroupEditorObject(TListViewItemEditorObject* AEditorObject);
	__property Vcl::Comctrls::TListGroup* GroupObject = {read=GetGroupObject};
	__property Vcl::Comctrls::TCustomListView* Owner = {read=GetOwner};
	__property System::UnicodeString Header = {read=GetHeader, write=SetHeader};
	__property System::UnicodeString Footer = {read=GetFooter, write=SetFooter};
	__property int GroupID = {read=GetGroupID, write=SetGroupID, nodefault};
	__property Vcl::Comctrls::TListGroupStateSet State = {read=GetState, write=SetState, nodefault};
	__property System::Classes::TAlignment HeaderAlign = {read=GetHeaderAlign, write=SetHeaderAlign, nodefault};
	__property System::Classes::TAlignment FooterAlign = {read=GetFooterAlign, write=SetFooterAlign, nodefault};
	__property System::UnicodeString Subtitle = {read=GetSubtitle, write=SetSubtitle};
	__property System::Uitypes::TImageIndex TitleImage = {read=GetTitleImage, write=SetTitleImage, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TListViewGroupEditorObject() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TBindListListViewEditor : public TBindListLookupEditorImpl
{
	typedef TBindListLookupEditorImpl inherited;
	
private:
	int FUpdateCounter;
	TListViewItemEditorObject* FEditorObject;
	TListViewGroupEditorObject* FGroupEditorObject;
	void __fastcall SetCurrentValue(const System::UnicodeString AMemberName, const System::Rtti::TValue &AValue, Data::Bind::Components::TScopeMemberType AType);
	bool __fastcall CanSetCurrentValue(const System::UnicodeString AMemberName, /* out */ Data::Bind::Components::TScopeMemberType &AType);
	
protected:
	virtual int __fastcall GetLookupKey(System::TObject* AListItemObject);
	virtual int __fastcall GetSelected();
	virtual int __fastcall ListCount();
	virtual int __fastcall GetListItem(int I);
	virtual void __fastcall SetSelected(int ALookupKey);
	virtual void __fastcall GetItemMemberNames(System::Classes::TStrings* ANames);
	virtual System::UnicodeString __fastcall GetItemMemberNameExpression(const System::UnicodeString AName);
	virtual void __fastcall GetHeaderMemberNames(System::Classes::TStrings* ANames);
	virtual System::UnicodeString __fastcall GetHeaderMemberNameExpression(const System::UnicodeString AName);
	virtual System::Bindings::Evalprotocol::_di_IScope __fastcall CurrentHeaderItem();
	virtual int __fastcall CurrentIndex();
	virtual System::TObject* __fastcall CurrentObject();
	virtual int __fastcall GetItemIndex();
	virtual void __fastcall SetItemIndex(int AIndex);
	virtual bool __fastcall GetPositionSetter(System::UnicodeString &ASetter, int &ABase);
	
public:
	__fastcall TBindListListViewEditor(Vcl::Comctrls::TCustomListView* AListView);
	__fastcall virtual ~TBindListListViewEditor();
	virtual void __fastcall BeginUpdate();
	virtual void __fastcall EndUpdate();
	virtual System::Bindings::Evalprotocol::_di_IScope __fastcall AddItem(bool Select);
	virtual System::Bindings::Evalprotocol::_di_IScope __fastcall AddHeader();
	virtual System::Bindings::Evalprotocol::_di_IScope __fastcall InsertItem(bool Select);
	virtual bool __fastcall CanInsertItem();
	virtual System::Bindings::Evalprotocol::_di_IScope __fastcall CurrentItem();
	virtual int __fastcall GetRowCount();
	virtual bool __fastcall MoveNext();
	virtual void __fastcall DeleteToEnd();
	virtual void __fastcall ClearList();
	virtual System::UnicodeString __fastcall GetSelectedText();
	virtual void __fastcall SetSelectedText(const System::UnicodeString AValue);
private:
	void *__IBindListEditorEvalShortcut;	// Data::Bind::Components::IBindListEditorEvalShortcut 
	void *__IBindListGroupEditor;	// Data::Bind::Components::IBindListGroupEditor 
	void *__IBindFillControlMembers;	// Data::Bind::Components::IBindFillControlMembers 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {B3E7381A-559C-479B-B867-92FDACFDFD34}
	operator Data::Bind::Components::_di_IBindListEditorEvalShortcut()
	{
		Data::Bind::Components::_di_IBindListEditorEvalShortcut intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Data::Bind::Components::IBindListEditorEvalShortcut*(void) { return (Data::Bind::Components::IBindListEditorEvalShortcut*)&__IBindListEditorEvalShortcut; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {788EB4F3-AA8F-42EA-AD73-B5A5B1D90A49}
	operator Data::Bind::Components::_di_IBindListGroupEditor()
	{
		Data::Bind::Components::_di_IBindListGroupEditor intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Data::Bind::Components::IBindListGroupEditor*(void) { return (Data::Bind::Components::IBindListGroupEditor*)&__IBindListGroupEditor; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {85AD494A-E7ED-402A-90FF-4F9B485B209C}
	operator Data::Bind::Components::_di_IBindFillControlMembers()
	{
		Data::Bind::Components::_di_IBindFillControlMembers intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Data::Bind::Components::IBindFillControlMembers*(void) { return (Data::Bind::Components::IBindFillControlMembers*)&__IBindFillControlMembers; }
	#endif
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TStringGridItemEditorObject : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Vcl::Grids::TStringGrid* FStringGrid;
	int FIndex;
	Vcl::Grids::TStringGrid* __fastcall GetOwner();
	System::UnicodeString __fastcall GetCells(int ACol);
	void __fastcall SetCells(int ACol, const System::UnicodeString Value);
	
public:
	__property Vcl::Grids::TStringGrid* Owner = {read=GetOwner};
	__property System::UnicodeString Cells[int ACol] = {read=GetCells, write=SetCells};
public:
	/* TObject.Create */ inline __fastcall TStringGridItemEditorObject() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TStringGridItemEditorObject() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TBindListStringGridEditor : public Data::Bind::Editors::TBindGridEditor
{
	typedef Data::Bind::Editors::TBindGridEditor inherited;
	
private:
	int FUpdateCounter;
	bool FIsEmpty;
	TStringGridItemEditorObject* FEditorObject;
	bool __fastcall IsEmpty();
	void __fastcall SetCurrentValue(const System::UnicodeString AMemberName, const System::Rtti::TValue &AValue, Data::Bind::Components::TScopeMemberType AType);
	bool __fastcall CanSetCurrentValue(const System::UnicodeString AMemberName, /* out */ Data::Bind::Components::TScopeMemberType &AType);
	
protected:
	virtual void __fastcall BeginUpdate();
	virtual void __fastcall EndUpdate();
	virtual System::Bindings::Evalprotocol::_di_IScope __fastcall AddItem(bool Select);
	virtual bool __fastcall CanInsertItem();
	virtual System::Bindings::Evalprotocol::_di_IScope __fastcall InsertItem(bool Select);
	virtual System::Bindings::Evalprotocol::_di_IScope __fastcall CurrentItem();
	virtual int __fastcall GetRowCount();
	virtual bool __fastcall MoveNext();
	virtual void __fastcall DeleteToEnd();
	virtual void __fastcall ClearList();
	virtual System::UnicodeString __fastcall GetSelectedText();
	virtual void __fastcall SetSelectedText(const System::UnicodeString AValue);
	virtual void __fastcall GetColumnIndices(System::Classes::TStrings* ANames);
	virtual void __fastcall GetColumnNames(System::Classes::TStrings* ANames);
	virtual bool __fastcall GetPositionGetter(System::UnicodeString &AGetter, int &ABase);
	virtual bool __fastcall GetPositionSetter(System::UnicodeString &ASetter, int &ABase);
	virtual int __fastcall GetItemIndex();
	virtual void __fastcall SetItemIndex(int AIndex);
	
public:
	__fastcall TBindListStringGridEditor(Vcl::Grids::TStringGrid* AGrid);
	__fastcall virtual ~TBindListStringGridEditor();
private:
	void *__IBindListEditorEvalShortcut;	// Data::Bind::Components::IBindListEditorEvalShortcut 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {B3E7381A-559C-479B-B867-92FDACFDFD34}
	operator Data::Bind::Components::_di_IBindListEditorEvalShortcut()
	{
		Data::Bind::Components::_di_IBindListEditorEvalShortcut intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Data::Bind::Components::IBindListEditorEvalShortcut*(void) { return (Data::Bind::Components::IBindListEditorEvalShortcut*)&__IBindListEditorEvalShortcut; }
	#endif
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Editors */
}	/* namespace Bind */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_BIND_EDITORS)
using namespace Vcl::Bind::Editors;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_BIND)
using namespace Vcl::Bind;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_Bind_EditorsHPP
