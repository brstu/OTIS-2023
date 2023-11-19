// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'TreeIntf.pas' rev: 35.00 (Windows)

#ifndef TreeintfHPP
#define TreeintfHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <Winapi.CommCtrl.hpp>
#include <Winapi.ActiveX.hpp>
#include <System.Win.ComObj.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <System.Variants.hpp>
#include <System.TypInfo.hpp>
#include <System.Contnrs.hpp>
#include <System.IniFiles.hpp>
#include <System.Types.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.AppEvnts.hpp>
#include <DesignIntf.hpp>
#include <DesignEditors.hpp>
#include <DesignMenus.hpp>
#include <StructureViewAPI.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Treeintf
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE ISprigCollection;
typedef System::DelphiInterface<ISprigCollection> _di_ISprigCollection;
__interface DELPHIINTERFACE ISprigDesigner;
typedef System::DelphiInterface<ISprigDesigner> _di_ISprigDesigner;
__interface DELPHIINTERFACE ISprig;
typedef System::DelphiInterface<ISprig> _di_ISprig;
class DELPHICLASS TInformant;
class DELPHICLASS TSprigStructureNode;
class DELPHICLASS TSprig;
class DELPHICLASS TAbstractSprig;
class DELPHICLASS TTransientSprig;
class DELPHICLASS TAbstractCollectionSprig;
class DELPHICLASS TTransientCollectionSprig;
class DELPHICLASS TPersistentSprig;
class DELPHICLASS TComponentSprig;
class DELPHICLASS TRootSprigStructureContext;
class DELPHICLASS TRootSprig;
class DELPHICLASS TSprigTreeNode;
class DELPHICLASS TSprigIndex;
class DELPHICLASS TPropertySprig;
class DELPHICLASS TCollectionSprig;
class DELPHICLASS TCollectionItemSprig;
class DELPHICLASS TSprigType;
class DELPHICLASS TSprigIntfType;
class DELPHICLASS TSprigTypeList;
class DELPHICLASS TDragSprigs;
class DELPHICLASS TRootSprigList;
//-- type declarations -------------------------------------------------------
typedef System::TMetaClass* TSprigClass;

typedef void __fastcall (__closure *TSprigAction)(TSprig* AItem);

typedef System::TMetaClass* TRootSprigClass;

__interface  INTERFACE_UUID("{0B6ABAEE-E1A4-4DAC-8E20-C6B741A5082D}") ISprigCollection  : public System::IInterface 
{
	virtual bool __fastcall RootSprigAssigned() = 0 ;
	virtual TRootSprig* __fastcall RootSprig() = 0 ;
	virtual _di_ISprigDesigner __fastcall GetSprigDesigner() = 0 ;
	virtual void __fastcall SetSprigDesigner(const _di_ISprigDesigner ASprigDesigner) = 0 ;
	__property _di_ISprigDesigner SprigDesigner = {read=GetSprigDesigner, write=SetSprigDesigner};
};

__interface  INTERFACE_UUID("{6AC141E3-2FBE-425E-B299-AB29E7DF3FBB}") ISprigDesigner  : public System::IInterface 
{
	virtual Vcl::Comctrls::TCustomTreeView* __fastcall GetTreeView() = 0 ;
	virtual void __fastcall BeforeItemsModified() = 0 ;
	virtual void __fastcall AfterItemsModified() = 0 ;
	virtual TRootSprig* __fastcall GetRootSprig() = 0 ;
	virtual void __fastcall SetRootSprig(TRootSprig* ARootSprig) = 0 ;
	__property TRootSprig* RootSprig = {read=GetRootSprig, write=SetRootSprig};
};

__interface  INTERFACE_UUID("{156098B8-0BCD-4550-8174-37B3C38918F4}") ISprig  : public System::IInterface 
{
	virtual TSprig* __fastcall GetSprig() = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TInformant : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Classes::TList* FNotifyList;
	int FDisableNotify;
	bool FNotifyNeeded;
	bool FDestroying;
	
protected:
	virtual void __fastcall Changed(TInformant* AObj);
	
public:
	virtual void __fastcall BeforeDestruction();
	__fastcall virtual ~TInformant();
	__property bool Destroying = {read=FDestroying, nodefault};
	void __fastcall DisableNotify();
	void __fastcall EnableNotify();
	void __fastcall Notification();
	void __fastcall Notify(TInformant* AObj);
	void __fastcall Unnotify(TInformant* AObj);
public:
	/* TObject.Create */ inline __fastcall TInformant() : System::TObject() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSprigStructureNode : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	TSprig* FSprig;
	int FData;
	bool FSelected;
	bool FFocused;
	
protected:
	HRESULT __stdcall GetTypeInfoCount(/* out */ int &Count);
	HRESULT __stdcall GetTypeInfo(int Index, int LocaleID, /* out */ void *TypeInfo);
	HRESULT __stdcall GetIDsOfNames(const GUID &IID, void * Names, int NameCount, int LocaleID, void * DispIDs);
	HRESULT __stdcall Invoke(int DispID, const GUID &IID, int LocaleID, System::Word Flags, void *Params, void * VarResult, void * ExcepInfo, void * ArgErr);
	HRESULT __stdcall InterfaceSupportsErrorInfo(const GUID &iid);
	HRESULT __safecall AddChildNode(const Structureviewapi::_di_IOTAStructureNode ANode, int Index, int &__AddChildNode_result);
	HRESULT __safecall get_Caption(System::WideString &__get_Caption_result);
	HRESULT __safecall get_ChildCount(int &__get_ChildCount_result);
	HRESULT __safecall get_Child(int Index, Structureviewapi::_di_IOTAStructureNode &__get_Child_result);
	HRESULT __safecall get_Data(int &__get_Data_result);
	HRESULT __safecall get_EditCaption(System::WideString &__get_EditCaption_result);
	HRESULT __safecall get_Expanded(System::WordBool &__get_Expanded_result);
	HRESULT __safecall get_Focused(System::WordBool &__get_Focused_result);
	HRESULT __safecall get_Hint(System::WideString &__get_Hint_result);
	HRESULT __safecall get_ImageIndex(int &__get_ImageIndex_result);
	HRESULT __safecall get_Name(System::WideString &__get_Name_result);
	HRESULT __safecall get_Parent(Structureviewapi::_di_IOTAStructureNode &__get_Parent_result);
	HRESULT __safecall get_Selected(System::WordBool &__get_Selected_result);
	HRESULT __safecall get_StateIndex(int &__get_StateIndex_result);
	HRESULT __safecall RemoveChildNode(int Index);
	HRESULT __safecall set_Data(int Value);
	HRESULT __safecall set_Expanded(System::WordBool Value);
	HRESULT __safecall set_Focused(System::WordBool Value);
	HRESULT __safecall set_Selected(System::WordBool Value);
	HRESULT __safecall Get_SortByIndex(System::WordBool &__Get_SortByIndex_result);
	HRESULT __safecall Get_ItemIndex(int &__Get_ItemIndex_result);
	TSprig* __fastcall GetSprig();
	
public:
	virtual HRESULT __fastcall SafeCallException(System::TObject* ExceptObject, void * ExceptAddr);
	__fastcall TSprigStructureNode(TSprig* ASprig);
	void __fastcall ClearSprig();
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TSprigStructureNode() { }
	
private:
	void *__ISprig;	// ISprig 
	void *__IOTASortableStructureNode;	// Structureviewapi::IOTASortableStructureNode 
	void *__IOTAStructureNode;	// Structureviewapi::IOTAStructureNode 
	void *__ISupportErrorInfo;	// ISupportErrorInfo 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {156098B8-0BCD-4550-8174-37B3C38918F4}
	operator _di_ISprig()
	{
		_di_ISprig intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ISprig*(void) { return (ISprig*)&__ISprig; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {24451294-D128-47E6-A8A5-00C3547C2F9C}
	operator Structureviewapi::_di_IOTASortableStructureNode()
	{
		Structureviewapi::_di_IOTASortableStructureNode intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Structureviewapi::IOTASortableStructureNode*(void) { return (Structureviewapi::IOTASortableStructureNode*)&__IOTASortableStructureNode; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {8A0802F5-C26C-4902-9D1F-8323F2F48F8C}
	operator Structureviewapi::_di_IOTAStructureNode()
	{
		Structureviewapi::_di_IOTAStructureNode intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Structureviewapi::IOTAStructureNode*(void) { return (Structureviewapi::IOTAStructureNode*)&__IOTAStructureNode; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {DF0B3D60-548F-101B-8E65-08002B2BD119}
	operator _di_ISupportErrorInfo()
	{
		_di_ISupportErrorInfo intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ISupportErrorInfo*(void) { return (ISupportErrorInfo*)&__ISupportErrorInfo; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00020400-0000-0000-C000-000000000046}
	operator _di_IDispatch()
	{
		_di_IDispatch intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IDispatch*(void) { return (IDispatch*)&__IOTASortableStructureNode; }
	#endif
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TSprigDeleteStyle : unsigned char { dsNormal, dsIgnore, dsAbort, dsCustom };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSprig : public TInformant
{
	typedef TInformant inherited;
	
public:
	TSprig* operator[](int Index) { return this->Items[Index]; }
	
private:
	TRootSprig* FRoot;
	TSprig* FParent;
	System::Contnrs::TObjectList* FList;
	System::Classes::TPersistent* FItem;
	Vcl::Comctrls::TTreeNode* FTreeNode;
	System::Uitypes::TImageIndex FImageIndex;
	System::Uitypes::TImageIndex FIconIndex;
	System::UnicodeString FCaption;
	bool FExpanded;
	bool FInvalid;
	bool FCollectionsDone;
	bool FHidden;
	bool FHiddenTested;
	TSprigStructureNode* FSprigStructureNode;
	Structureviewapi::_di_IOTAStructureNode FStructureNode;
	void __fastcall SetExpanded(const bool Value);
	System::Uitypes::TImageIndex __fastcall GetIconIndex();
	
protected:
	TSprig* __fastcall GetItem(int Index);
	virtual System::UnicodeString __fastcall UniqueName();
	System::UnicodeString __fastcall CaptionFor(const System::UnicodeString AName, const System::UnicodeString ALabel = System::UnicodeString(), const System::UnicodeString AClass = System::UnicodeString());
	void __fastcall ReparentChildren();
	virtual void __fastcall SelectItems(System::Classes::TPersistent* const *AItems, const int AItems_High, bool ARuntimeChange = true);
	virtual void __fastcall RuntimeChange();
	virtual void __fastcall DesigntimeChange();
	virtual TSprig* __fastcall FindItem(System::Classes::TPersistent* AItem, bool Recurse);
	virtual TSprig* __fastcall FindItemByName(const System::UnicodeString AName, System::TClass AClass, bool Recurse);
	virtual TSprig* __fastcall FindItemByPath(const System::UnicodeString APath, bool Recurse = true);
	virtual bool __fastcall GetDesigner(/* out */ Designintf::_di_IDesigner &ADesigner);
	virtual System::Uitypes::TImageIndex __fastcall GetImageIndex();
	virtual void __fastcall SetImageIndex(const System::Uitypes::TImageIndex Value);
	int __fastcall GetIndex();
	void __fastcall SetIndex(int Value);
	virtual System::Uitypes::TImageIndex __fastcall GetStateIndex();
	virtual void __fastcall BeginUpdate();
	virtual void __fastcall EnsureUpdate();
	virtual void __fastcall EndUpdate();
	virtual System::UnicodeString __fastcall GetAddType(int Index);
	
public:
	__fastcall virtual TSprig(System::Classes::TPersistent* AItem)/* overload */;
	__fastcall virtual ~TSprig();
	void __fastcall Invalidate();
	virtual bool __fastcall Transient();
	virtual bool __fastcall AnyProblems();
	__property bool Invalid = {read=FInvalid, nodefault};
	__property System::Classes::TPersistent* Item = {read=FItem};
	virtual bool __fastcall Hidden();
	virtual bool __fastcall Ghosted();
	virtual System::Classes::TPersistent* __fastcall FocusItem();
	virtual System::TClass __fastcall ItemClass();
	virtual TSprig* __fastcall Owner();
	virtual void __fastcall VisualRefresh();
	virtual Structureviewapi::_di_IOTAStructureNode __fastcall StructureNodeFor();
	__property Structureviewapi::_di_IOTAStructureNode StructureNode = {read=FStructureNode};
	virtual Vcl::Comctrls::TTreeNode* __fastcall TreeNodeFor(Vcl::Comctrls::TCustomTreeView* ATreeView);
	__property Vcl::Comctrls::TTreeNode* TreeNode = {read=FTreeNode};
	__property bool Expanded = {read=FExpanded, write=SetExpanded, nodefault};
	__property System::Uitypes::TImageIndex ImageIndex = {read=GetImageIndex, write=SetImageIndex, nodefault};
	__property System::Uitypes::TImageIndex IconIndex = {read=GetIconIndex, nodefault};
	__property System::Uitypes::TImageIndex StateIndex = {read=GetStateIndex, nodefault};
	void __fastcall ClearTreeNode()/* overload */;
	void __fastcall ClearTreeNode(bool ARecurse, bool AFreeNode = true)/* overload */;
	virtual System::UnicodeString __fastcall Name();
	virtual System::UnicodeString __fastcall Caption();
	virtual System::UnicodeString __fastcall Hint();
	virtual void __fastcall PrepareMenu(const Designmenus::_di_IMenuItems AItems);
	virtual bool __fastcall ShowRegisteredMenus();
	System::TClass __fastcall DragClass();
	virtual bool __fastcall DragOver(TSprig* AItem);
	virtual bool __fastcall DragOverTo(TSprig* AParent);
	virtual bool __fastcall DragDrop(TSprig* AItem);
	virtual bool __fastcall DragDropTo(TSprig* AParent);
	virtual bool __fastcall PaletteOver(TSprigClass ASprigClass, System::TClass AClass);
	__classmethod virtual bool __fastcall PaletteOverTo(TSprig* AParent, System::TClass AClass);
	TSprig* __fastcall Add(TSprig* AItem);
	TSprig* __fastcall Find(System::Classes::TPersistent* AItem, bool Recurse = true)/* overload */;
	TSprig* __fastcall Find(const System::UnicodeString AName, bool Recurse = true)/* overload */;
	TSprig* __fastcall Find(const System::UnicodeString AName, System::TClass AClass, bool Recurse = true)/* overload */;
	TSprig* __fastcall FindPath(const System::UnicodeString APath, bool Recurse = true);
	int __fastcall IndexOf(TSprig* AItem);
	void __fastcall SetIndexOf(TSprig* AItem, int Index);
	void __fastcall ForEach(TSprigAction ABefore, TSprigAction AAfter = 0x0);
	void __fastcall ClearUnneededSprigs();
	virtual TSprigDeleteStyle __fastcall DeleteStyle();
	virtual bool __fastcall CustomDelete();
	virtual bool __fastcall CanMove(bool AUp);
	virtual bool __fastcall Move(bool AUp);
	virtual bool __fastcall CanAdd();
	virtual int __fastcall AddTypeCount();
	__property System::UnicodeString AddTypes[int Index] = {read=GetAddType};
	virtual void __fastcall AddType(int Index);
	virtual void __fastcall SortItems();
	virtual bool __fastcall SortByIndex();
	virtual bool __fastcall IncludeIndexInCaption();
	virtual int __fastcall ItemIndex();
	virtual bool __fastcall CopyGlyph(Vcl::Graphics::TBitmap* ABitmap);
	__property TRootSprig* Root = {read=FRoot};
	__property TSprig* Parent = {read=FParent};
	bool __fastcall Parents(TSprig* ASprig);
	System::UnicodeString __fastcall Path();
	__property TSprig* Items[int Index] = {read=GetItem/*, default*/};
	int __fastcall Count();
	__property int Index = {read=GetIndex, write=SetIndex, nodefault};
	virtual void __fastcall Reparent();
	virtual System::Classes::TComponent* __fastcall Construct(System::Classes::TComponentClass AClass);
	TSprig* __fastcall SeekParent(System::Classes::TPersistent* AItem, bool Recurse = true)/* overload */;
	TSprig* __fastcall SeekParent(const System::UnicodeString AName, bool Recurse = true)/* overload */;
	TSprig* __fastcall SeekParent(const System::UnicodeString AName, System::TClass AClass, bool Recurse = true)/* overload */;
	__classmethod virtual System::UnicodeString __fastcall ParentProperty();
	virtual void __fastcall FigureParent();
	virtual void __fastcall FigureChildren();
	virtual bool __fastcall ParentOrphanedSprigs();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAbstractSprig : public TSprig
{
	typedef TSprig inherited;
	
public:
	virtual bool __fastcall Ghosted();
public:
	/* TSprig.Create */ inline __fastcall virtual TAbstractSprig(System::Classes::TPersistent* AItem)/* overload */ : TSprig(AItem) { }
	/* TSprig.Destroy */ inline __fastcall virtual ~TAbstractSprig() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TTransientSprig : public TAbstractSprig
{
	typedef TAbstractSprig inherited;
	
public:
	virtual bool __fastcall Transient();
public:
	/* TSprig.Create */ inline __fastcall virtual TTransientSprig(System::Classes::TPersistent* AItem)/* overload */ : TAbstractSprig(AItem) { }
	/* TSprig.Destroy */ inline __fastcall virtual ~TTransientSprig() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAbstractCollectionSprig : public TAbstractSprig
{
	typedef TAbstractSprig inherited;
	
public:
	__fastcall virtual TAbstractCollectionSprig(System::Classes::TPersistent* AItem)/* overload */;
public:
	/* TSprig.Destroy */ inline __fastcall virtual ~TAbstractCollectionSprig() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TTransientCollectionSprig : public TTransientSprig
{
	typedef TTransientSprig inherited;
	
public:
	__fastcall virtual TTransientCollectionSprig(System::Classes::TPersistent* AItem)/* overload */;
public:
	/* TSprig.Destroy */ inline __fastcall virtual ~TTransientCollectionSprig() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPersistentSprig : public TSprig
{
	typedef TSprig inherited;
	
public:
	/* TSprig.Create */ inline __fastcall virtual TPersistentSprig(System::Classes::TPersistent* AItem)/* overload */ : TSprig(AItem) { }
	/* TSprig.Destroy */ inline __fastcall virtual ~TPersistentSprig() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TComponentSprig : public TPersistentSprig
{
	typedef TPersistentSprig inherited;
	
private:
	TSprig* FOwner;
	
public:
	__fastcall virtual TComponentSprig(System::Classes::TPersistent* AItem)/* overload */;
	__fastcall TComponentSprig(System::Classes::TPersistent* AItem, TSprig* AOwner)/* overload */;
	virtual System::UnicodeString __fastcall UniqueName();
	virtual TSprig* __fastcall Owner();
public:
	/* TSprig.Destroy */ inline __fastcall virtual ~TComponentSprig() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TComponentSprigClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRootSprigStructureContext : public TSprigStructureNode
{
	typedef TSprigStructureNode inherited;
	
private:
	TRootSprig* FRootSprig;
	int FSelectLocks;
	Designmenus::_di_IPopupMenu FPopup;
	bool FUpdateEditState;
	Designintf::TEditState FLastEditState;
	bool FPendingClearSelection;
	Vcl::Appevnts::TApplicationEvents* FAppEvents;
	void __fastcall HandleAddType(System::TObject* Sender);
	void __fastcall LockSelect();
	bool __fastcall SelectLocked();
	void __fastcall UnlockSelect();
	void __fastcall StructureChanged(const Designintf::_di_IDesigner ADesigner);
	void __fastcall Idle(System::TObject* Sender, bool &Done);
	void __fastcall SetPendingClearSelection(bool AValue);
	
protected:
	HIDESBASE HRESULT __stdcall GetTypeInfoCount(/* out */ int &Count);
	HIDESBASE HRESULT __stdcall GetTypeInfo(int Index, int LocaleID, /* out */ void *TypeInfo);
	HIDESBASE HRESULT __stdcall GetIDsOfNames(const GUID &IID, void * Names, int NameCount, int LocaleID, void * DispIDs);
	HIDESBASE HRESULT __stdcall Invoke(int DispID, const GUID &IID, int LocaleID, System::Word Flags, void *Params, void * VarResult, void * ExcepInfo, void * ArgErr)/* overload */;
	HIDESBASE HRESULT __stdcall InterfaceSupportsErrorInfo(const GUID &iid);
	HRESULT __safecall get_ContextIdent(System::WideString &__get_ContextIdent_result);
	HRESULT __safecall get_StructureType(System::WideString &__get_StructureType_result);
	HRESULT __safecall get_ViewOptions(int &__get_ViewOptions_result);
	HRESULT __safecall AddRootNode(const Structureviewapi::_di_IOTAStructureNode ANode, int Index);
	HRESULT __safecall RemoveRootNode(const Structureviewapi::_di_IOTAStructureNode ANode);
	HRESULT __safecall Get_RootNodeCount(int &__Get_RootNodeCount_result);
	HRESULT __safecall GetRootStructureNode(int Index, Structureviewapi::_di_IOTAStructureNode &__GetRootStructureNode_result);
	HRESULT __safecall NodeEdited(const Structureviewapi::_di_IOTAStructureNode Node);
	HRESULT __safecall NodeFocused(const Structureviewapi::_di_IOTAStructureNode Node);
	HRESULT __safecall NodeSelected(const Structureviewapi::_di_IOTAStructureNode Node);
	HRESULT __safecall DefaultNodeAction(const Structureviewapi::_di_IOTAStructureNode Node);
	HRESULT __safecall SameContext(const Structureviewapi::_di_IOTAStructureContext AContext, System::WordBool &__SameContext_result);
	HRESULT __safecall InitPopupMenu(const Structureviewapi::_di_IOTAStructureNode Node, const Structureviewapi::_di_IOTAStructureNodeMenuItem PopupMenu);
	HRESULT __safecall ContextActivated();
	HIDESBASE HRESULT __safecall get_ChildCount(int &__get_ChildCount_result);
	HIDESBASE HRESULT __safecall get_Child(int Index, Structureviewapi::_di_IOTAStructureNode &__get_Child_result);
	HRESULT __safecall DragAllowed(const Structureviewapi::_di_IOTAStructureNode Node, System::WordBool &__DragAllowed_result);
	HRESULT __safecall DragDrop(const Structureviewapi::_di_IOTAStructureNode Node, System::OleVariant DataObject, const System::WideString FormatArray, int X, int Y, int KeyState, Structureviewapi::TOTADropMode Mode, int &Effect);
	HRESULT __safecall DragOver(const Structureviewapi::_di_IOTAStructureNode Node, System::OleVariant DataObject, Structureviewapi::TOTADragState State, int X, int Y, int KeyState, Structureviewapi::TOTADropMode Mode, int &Effect, System::WordBool &__DragOver_result);
	HRESULT __safecall GetDataObject(System::OleVariant &__GetDataObject_result);
	HRESULT __safecall EditAction(int Action, System::WordBool &__EditAction_result);
	HRESULT __safecall GetEditState(int &__GetEditState_result);
	HRESULT __safecall KeyDown(const Structureviewapi::_di_IOTAStructureNode Node, int KeyState, System::Word &KeyCode);
	HRESULT __safecall KeyPressed(const Structureviewapi::_di_IOTAStructureNode Node, int KeyState, System::Word &KeyChar);
	HRESULT __safecall Get_ButtonCount(int &__Get_ButtonCount_result);
	HRESULT __safecall GetButtonCaption(int Index, System::WideString &__GetButtonCaption_result);
	HRESULT __safecall GetButtonEnabled(int Index, System::WordBool &__GetButtonEnabled_result);
	HRESULT __safecall GetButtonEnableDropDown(int Index, System::WordBool &__GetButtonEnableDropDown_result);
	HRESULT __safecall GetButtonHasDropDown(int Index, System::WordBool &__GetButtonHasDropDown_result);
	HRESULT __safecall GetButtonHint(int Index, System::WideString &__GetButtonHint_result);
	HRESULT __safecall GetButtonImageIndex(int Index, int &__GetButtonImageIndex_result);
	HRESULT __safecall GetButtonMenu(int Index, Structureviewapi::_di_IOTAStructureNodeMenuItem &__GetButtonMenu_result);
	HRESULT __safecall GetButtonSeparator(int Index, System::WordBool &__GetButtonSeparator_result);
	HRESULT __safecall GetButtonVisible(int Index, System::WordBool &__GetButtonVisible_result);
	HIDESBASE HRESULT __safecall Invoke(int Index)/* overload */;
	HRESULT __safecall Get_NodePreservationMode(Structureviewapi::TOTANodePreservationMode &__Get_NodePreservationMode_result);
	HRESULT __safecall PreserveNodeStates();
	HRESULT __safecall RestoreNodeState(const Structureviewapi::_di_IOTAStructureNode Node);
	void __fastcall DesignerClosed(const Designintf::_di_IDesigner ADesigner, bool AGoingDormant);
	void __fastcall DesignerOpened(const Designintf::_di_IDesigner ADesigner, bool AResurrecting);
	void __fastcall ItemDeleted(const Designintf::_di_IDesigner ADesigner, System::Classes::TPersistent* AItem);
	void __fastcall ItemInserted(const Designintf::_di_IDesigner ADesigner, System::Classes::TPersistent* AItem);
	void __fastcall ItemsModified(const Designintf::_di_IDesigner ADesigner);
	void __fastcall SelectionChanged(const Designintf::_di_IDesigner ADesigner, const Designintf::_di_IDesignerSelections ASelection);
	
public:
	virtual HRESULT __fastcall SafeCallException(System::TObject* ExceptObject, void * ExceptAddr);
	__fastcall TRootSprigStructureContext(TRootSprig* ARootSprig);
	__fastcall virtual ~TRootSprigStructureContext();
	void __fastcall ClearRootSprig();
private:
	void *__IOTAStructureContext110;	// Structureviewapi::IOTAStructureContext110 
	void *__IOTAStructureNodeStatePreserver;	// Structureviewapi::IOTAStructureNodeStatePreserver 
	void *__IOTAStructureContextToolbar;	// Structureviewapi::IOTAStructureContextToolbar 
	void *__IOTAStructureContextKeyHandler;	// Structureviewapi::IOTAStructureContextKeyHandler 
	void *__IOTAStructureContextEditActions;	// Structureviewapi::IOTAStructureContextEditActions 
	void *__IOTADragStructureContext;	// Structureviewapi::IOTADragStructureContext 
	void *__IDesignNotification;	// Designintf::IDesignNotification 
	void *__IOTAStructureNode;	// Structureviewapi::IOTAStructureNode 
	void *__ISupportErrorInfo;	// ISupportErrorInfo 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {E60A76A6-8E44-4F67-85F3-06ED345BB2F4}
	operator Structureviewapi::_di_IOTAStructureContext110()
	{
		Structureviewapi::_di_IOTAStructureContext110 intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Structureviewapi::IOTAStructureContext110*(void) { return (Structureviewapi::IOTAStructureContext110*)&__IOTAStructureContext110; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {F6189580-87EE-4985-8866-7712D8DB4872}
	operator Structureviewapi::_di_IOTAStructureNodeStatePreserver()
	{
		Structureviewapi::_di_IOTAStructureNodeStatePreserver intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Structureviewapi::IOTAStructureNodeStatePreserver*(void) { return (Structureviewapi::IOTAStructureNodeStatePreserver*)&__IOTAStructureNodeStatePreserver; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {55C848EB-2197-4B17-A9D0-696D3331B3CC}
	operator Structureviewapi::_di_IOTAStructureContextToolbar()
	{
		Structureviewapi::_di_IOTAStructureContextToolbar intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Structureviewapi::IOTAStructureContextToolbar*(void) { return (Structureviewapi::IOTAStructureContextToolbar*)&__IOTAStructureContextToolbar; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {17A71EDB-A2FE-4358-ABD2-362011A8D547}
	operator Structureviewapi::_di_IOTAStructureContextKeyHandler()
	{
		Structureviewapi::_di_IOTAStructureContextKeyHandler intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Structureviewapi::IOTAStructureContextKeyHandler*(void) { return (Structureviewapi::IOTAStructureContextKeyHandler*)&__IOTAStructureContextKeyHandler; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {EF0F0981-8E1B-468F-B063-4A5956EB4BDA}
	operator Structureviewapi::_di_IOTAStructureContextEditActions()
	{
		Structureviewapi::_di_IOTAStructureContextEditActions intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Structureviewapi::IOTAStructureContextEditActions*(void) { return (Structureviewapi::IOTAStructureContextEditActions*)&__IOTAStructureContextEditActions; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {03DC0E9A-DED1-4E2A-BECE-328CB27D19B9}
	operator Structureviewapi::_di_IOTADragStructureContext()
	{
		Structureviewapi::_di_IOTADragStructureContext intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Structureviewapi::IOTADragStructureContext*(void) { return (Structureviewapi::IOTADragStructureContext*)&__IOTADragStructureContext; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {E8C9F739-5601-4ADD-9D95-594132D4CEFD}
	operator Designintf::_di_IDesignNotification()
	{
		Designintf::_di_IDesignNotification intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Designintf::IDesignNotification*(void) { return (Designintf::IDesignNotification*)&__IDesignNotification; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {8A0802F5-C26C-4902-9D1F-8323F2F48F8C}
	operator Structureviewapi::_di_IOTAStructureNode()
	{
		Structureviewapi::_di_IOTAStructureNode intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Structureviewapi::IOTAStructureNode*(void) { return (Structureviewapi::IOTAStructureNode*)&__IOTAStructureNode; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {67FD6512-C50F-4C83-8C2F-4E60340668D1}
	operator Structureviewapi::_di_IOTAStructureContext()
	{
		Structureviewapi::_di_IOTAStructureContext intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Structureviewapi::IOTAStructureContext*(void) { return (Structureviewapi::IOTAStructureContext*)&__IOTAStructureContext110; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {DF0B3D60-548F-101B-8E65-08002B2BD119}
	operator _di_ISupportErrorInfo()
	{
		_di_ISupportErrorInfo intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ISupportErrorInfo*(void) { return (ISupportErrorInfo*)&__ISupportErrorInfo; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00020400-0000-0000-C000-000000000046}
	operator _di_IDispatch()
	{
		_di_IDispatch intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IDispatch*(void) { return (IDispatch*)&__IOTAStructureContext110; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TRootSprig : public TPersistentSprig
{
	typedef TPersistentSprig inherited;
	
private:
	TSprigIndex* FIndex;
	System::Classes::TList* FNamedItems;
	System::Classes::TList* FPathedItems;
	bool FRepopulating;
	bool FParentChanges;
	_di_ISprigDesigner FSprigDesigner;
	Designintf::_di_IDesigner FDesigner;
	bool FRepopulateNeeded;
	bool FNeedUpdate;
	int FUpdateLocks;
	TRootSprigStructureContext* FRootStructureContext;
	Structureviewapi::_di_IOTAStructureContext FStructureContext;
	void __fastcall ValidateParent(TSprig* AItem);
	void __fastcall PreRefreshTreeView(TSprig* AItem);
	void __fastcall PostRefreshTreeView(TSprig* AItem);
	void __fastcall DepopulateTreeView(TSprig* AItem);
	void __fastcall StoreExpandState(TSprig* AItem);
	void __fastcall SetSprigDesigner(const _di_ISprigDesigner ASprigDesigner);
	void __fastcall SelectionSurvey(/* out */ TSprigDeleteStyle &ADeleteStyle, /* out */ bool &AAllVisible);
	
protected:
	virtual TSprig* __fastcall FindItem(System::Classes::TPersistent* AItem, bool Recurse = true);
	virtual TSprig* __fastcall FindItemByName(const System::UnicodeString AName, System::TClass AClass, bool Recurse);
	virtual TSprig* __fastcall FindItemByPath(const System::UnicodeString APath, bool Recurse = true);
	void __fastcall AddItem(TSprig* ASprig);
	void __fastcall RemoveItem(TSprig* ASprig);
	virtual bool __fastcall GetDesigner(/* out */ Designintf::_di_IDesigner &ADesigner);
	virtual System::UnicodeString __fastcall GetAddType(int Index);
	bool __fastcall SelectedSprig(TSprig* &ASprig);
	
public:
	__fastcall virtual TRootSprig(System::Classes::TPersistent* AItem)/* overload */;
	__fastcall virtual ~TRootSprig();
	virtual void __fastcall FigureParent();
	__property _di_ISprigDesigner SprigDesigner = {read=FSprigDesigner, write=SetSprigDesigner};
	__property Designintf::_di_IDesigner Designer = {read=FDesigner, write=FDesigner};
	__property bool Repopulating = {read=FRepopulating, nodefault};
	bool __fastcall Repopulate();
	Vcl::Comctrls::TCustomTreeView* __fastcall TreeView();
	void __fastcall RefreshTreeView();
	void __fastcall StoreTreeState();
	virtual void __fastcall BeginUpdate();
	virtual void __fastcall EnsureUpdate();
	virtual void __fastcall EndUpdate();
	void __fastcall ItemDeleted(System::Classes::TPersistent* AItem);
	void __fastcall ItemInserted();
	void __fastcall ItemsModified(bool AForceRepopulate = true);
	virtual void __fastcall RuntimeChange();
	virtual void __fastcall DesigntimeChange();
	virtual void __fastcall SelectItems(System::Classes::TPersistent* const *AItems, const int AItems_High, bool ARuntimeChange = true);
	virtual Structureviewapi::_di_IOTAStructureNode __fastcall StructureNodeFor();
	Structureviewapi::_di_IOTAStructureContext __fastcall StructureContextFor();
	virtual bool __fastcall CanMove(bool AUp);
	virtual bool __fastcall Move(bool AUp);
	virtual bool __fastcall CanAdd();
	virtual void __fastcall AddType(int Index);
	virtual int __fastcall AddTypeCount();
	bool __fastcall EditAction(Designintf::TEditAction Action);
	Designintf::TEditState __fastcall GetEditState();
	virtual TSprigDeleteStyle __fastcall DeleteStyle();
	virtual bool __fastcall PaletteOver(TSprigClass ASprigClass, System::TClass AClass);
	virtual bool __fastcall AcceptsClass(System::TClass AClass);
	__property bool RepopulateNeeded = {read=FRepopulateNeeded, write=FRepopulateNeeded, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSprigTreeNode : public Vcl::Comctrls::TTreeNode
{
	typedef Vcl::Comctrls::TTreeNode inherited;
	
public:
	__fastcall virtual ~TSprigTreeNode();
public:
	/* TTreeNode.Create */ inline __fastcall virtual TSprigTreeNode(Vcl::Comctrls::TTreeNodes* AOwner) : Vcl::Comctrls::TTreeNode(AOwner) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSprigIndex : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Contnrs::TObjectList* FList;
	
public:
	__fastcall TSprigIndex();
	__fastcall virtual ~TSprigIndex();
	void __fastcall Add(TSprig* ASprig);
	void __fastcall Remove(TSprig* ASprig);
	TSprig* __fastcall Find(System::Classes::TPersistent* AItem);
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPropertySprig : public TPersistentSprig
{
	typedef TPersistentSprig inherited;
	
public:
	virtual bool __fastcall Ghosted();
	virtual TSprigDeleteStyle __fastcall DeleteStyle();
public:
	/* TSprig.Create */ inline __fastcall virtual TPropertySprig(System::Classes::TPersistent* AItem)/* overload */ : TPersistentSprig(AItem) { }
	/* TSprig.Destroy */ inline __fastcall virtual ~TPropertySprig() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCollectionSprig : public TPropertySprig
{
	typedef TPropertySprig inherited;
	
private:
	System::UnicodeString FPropName;
	TSprig* FOwner;
	
protected:
	virtual System::UnicodeString __fastcall GetAddType(int Index);
	
public:
	__fastcall virtual TCollectionSprig(System::Classes::TPersistent* AItem)/* overload */;
	virtual System::UnicodeString __fastcall Name();
	virtual System::UnicodeString __fastcall Caption();
	virtual void __fastcall FigureParent();
	virtual void __fastcall FigureChildren();
	virtual TSprig* __fastcall Owner();
	virtual bool __fastcall SortByIndex();
	virtual void __fastcall AddType(int Index);
	virtual int __fastcall AddTypeCount();
	virtual TSprigDeleteStyle __fastcall DeleteStyle();
	virtual bool __fastcall CustomDelete();
public:
	/* TSprig.Destroy */ inline __fastcall virtual ~TCollectionSprig() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCollectionItemSprig : public TPersistentSprig
{
	typedef TPersistentSprig inherited;
	
private:
	TSprig* FOwner;
	
protected:
	virtual System::UnicodeString __fastcall GetAddType(int Index);
	
public:
	virtual System::UnicodeString __fastcall Name();
	virtual void __fastcall FigureParent();
	virtual TSprig* __fastcall Owner();
	virtual bool __fastcall Ghosted();
	virtual int __fastcall ItemIndex();
	virtual bool __fastcall IncludeIndexInCaption();
	virtual bool __fastcall DragOverTo(TSprig* AParent);
	virtual bool __fastcall DragDropTo(TSprig* AParent);
	virtual void __fastcall AddType(int Index);
	virtual int __fastcall AddTypeCount();
public:
	/* TSprig.Create */ inline __fastcall virtual TCollectionItemSprig(System::Classes::TPersistent* AItem)/* overload */ : TPersistentSprig(AItem) { }
	/* TSprig.Destroy */ inline __fastcall virtual ~TCollectionItemSprig() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSprigType : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int FGroup;
	System::TClass FClass;
	TSprigClass FSprigClass;
	
public:
	__fastcall TSprigType(const System::TClass AClass, const TSprigClass ASprigClass);
	int __fastcall Score(const System::TClass AClass);
	__property TSprigClass SprigClass = {read=FSprigClass};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TSprigType() { }
	
};

#pragma pack(pop)

typedef System::DynamicArray<GUID> TGUIDArray;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSprigIntfType : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int FGroup;
	TGUIDArray FInterfaces;
	TSprigClass FSprigClass;
	
public:
	__fastcall TSprigIntfType(const TGUIDArray AInterfaces, const TSprigClass ASprigClass);
	bool __fastcall Match(const System::TClass AClass);
	__property TSprigClass SprigClass = {read=FSprigClass};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TSprigIntfType() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSprigTypeList : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Contnrs::TObjectList* FList;
	System::TClass FLastClass;
	TSprigClass FLastSprigClass;
	System::Contnrs::TObjectList* FInterfaceList;
	
protected:
	void __fastcall ClearCache();
	TSprigClass __fastcall MatchCache(const System::TClass AClass);
	TSprigClass __fastcall MatchClass(const System::TClass AClass);
	
public:
	__fastcall TSprigTypeList();
	__fastcall virtual ~TSprigTypeList();
	TSprigClass __fastcall Match(const System::TClass AClass);
	void __fastcall Add(const System::TClass AClass, const TSprigClass ASprigClass)/* overload */;
	void __fastcall Add(const TGUIDArray AInterfaces, const TSprigClass ASprigClass)/* overload */;
	void __fastcall FreeEditorGroup(int AGroup);
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TDragSprigs : public Vcl::Controls::TDragControlObjectEx
{
	typedef Vcl::Controls::TDragControlObjectEx inherited;
	
private:
	System::Classes::TList* FSprigs;
	TSprig* __fastcall GetSprig(int Index);
	
public:
	__fastcall virtual TDragSprigs(Vcl::Controls::TControl* AControl);
	__fastcall virtual ~TDragSprigs();
	void __fastcall Add(TSprig* ASprig);
	int __fastcall Count();
	__property TSprig* Sprigs[int Index] = {read=GetSprig};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TRootSprigList : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Contnrs::TBucketList* FList;
	
public:
	__fastcall TRootSprigList();
	__fastcall virtual ~TRootSprigList();
	bool __fastcall FindRoot(const Designintf::_di_IDesigner ADesigner, /* out */ TRootSprig* &ARootSprig);
	void __fastcall DesignerClosed(const Designintf::_di_IDesigner ADesigner, bool AGoingDormant);
	void __fastcall DesignerOpened(const Designintf::_di_IDesigner ADesigner, bool AResurrecting);
	void __fastcall ItemDeleted(const Designintf::_di_IDesigner ADesigner, System::Classes::TPersistent* AItem);
	void __fastcall ItemInserted(const Designintf::_di_IDesigner ADesigner, System::Classes::TPersistent* AItem);
	void __fastcall ItemsModified(const Designintf::_di_IDesigner ADesigner);
};

#pragma pack(pop)

typedef bool __fastcall (__closure *TCopySprigGlyphFunc)(TSprig* ASprig, Vcl::Graphics::TBitmap* ABitmap);

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE bool GShowClassNameInTreeView;
extern DELPHI_PACKAGE System::Uitypes::TImageIndex GImageOffset;
extern DELPHI_PACKAGE System::Uitypes::TImageIndex GStateImageOffset;
extern DELPHI_PACKAGE System::Uitypes::TImageIndex GToolButtonImageOffset;
extern DELPHI_PACKAGE int GSprigClipboardFormat;
static const System::Int8 CFakeSprigImage = System::Int8(0x0);
static const System::Int8 CFakeCollectionSprigImage = System::Int8(0x1);
static const System::Int8 CPersistentSprigImage = System::Int8(0x2);
static const System::Int8 CCollectionSprigImage = System::Int8(0x3);
static const System::Int8 CComponentSprigImage = System::Int8(0x4);
static const System::Int8 CDataModuleSprigImage = System::Int8(0x5);
static const System::Int8 CControlSprigImage = System::Int8(0x6);
static const System::Int8 CUIControlSprigImage = System::Int8(0x7);
static const System::Int8 CUIContainerSprigImage = System::Int8(0x8);
static const System::Int8 CFormSprigImage = System::Int8(0x9);
static const System::Int8 CGhostedOffset = System::Int8(0xa);
static const System::Int8 CNoStateImage = System::Int8(0x0);
static const System::Int8 CCheckOutStateImage = System::Int8(0x1);
#define CCollectionName L"<Collection.%s>"
#define CSprigClipboardFormat L"Borland.Sprig"
extern DELPHI_PACKAGE System::StaticArray<int, 2> CUIControlImageIndex;
extern DELPHI_PACKAGE TCopySprigGlyphFunc CopySprigGlyphFunc;
extern DELPHI_PACKAGE void __fastcall RegisterSprigType(const System::TClass AClass, TSprigClass ASprigClass)/* overload */;
extern DELPHI_PACKAGE void __fastcall RegisterSprigType(const TGUIDArray AInterfaces, TSprigClass ASprigClass)/* overload */;
extern DELPHI_PACKAGE TSprigClass __fastcall FindBestSprigClass(System::TClass AClass)/* overload */;
extern DELPHI_PACKAGE TSprigClass __fastcall FindBestSprigClass(System::TClass AClass, TSprigClass AMinimumSprigClass)/* overload */;
extern DELPHI_PACKAGE void __fastcall RegisterRootSprigType(const System::TClass AClass, TRootSprigClass ASprigClass)/* overload */;
extern DELPHI_PACKAGE void __fastcall RegisterRootSprigType(const TGUIDArray AInterfaces, TRootSprigClass ASprigClass)/* overload */;
extern DELPHI_PACKAGE TRootSprigClass __fastcall FindBestRootSprigClass(System::TClass AClass)/* overload */;
extern DELPHI_PACKAGE TRootSprigClass __fastcall FindBestRootSprigClass(System::TClass AClass, TRootSprigClass AMinimumSprigClass)/* overload */;
extern DELPHI_PACKAGE TRootSprigList* __fastcall RootSprigList();
extern DELPHI_PACKAGE void __fastcall InitDesignNotification();
extern DELPHI_PACKAGE void __fastcall DoneDesignNotification();
}	/* namespace Treeintf */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_TREEINTF)
using namespace Treeintf;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// TreeintfHPP
