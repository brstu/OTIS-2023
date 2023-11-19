// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'StructureViewAPI.pas' rev: 35.00 (Windows)

#ifndef StructureviewapiHPP
#define StructureviewapiHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.CommCtrl.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.Controls.hpp>
#include <Winapi.ActiveX.hpp>
#include <ToolsAPI.hpp>
#include <Vcl.VirtualImageList.hpp>
#include <Vcl.Graphics.hpp>

//-- user supplied -----------------------------------------------------------

namespace Structureviewapi
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IOTAStructureNotifier;
typedef System::DelphiInterface<IOTAStructureNotifier> _di_IOTAStructureNotifier;
__interface DELPHIINTERFACE IOTABaseStructureView;
typedef System::DelphiInterface<IOTABaseStructureView> _di_IOTABaseStructureView;
__interface DELPHIINTERFACE IOTAStructureView;
typedef System::DelphiInterface<IOTAStructureView> _di_IOTAStructureView;
__interface DELPHIINTERFACE IOTAStructureView110;
typedef System::DelphiInterface<IOTAStructureView110> _di_IOTAStructureView110;
__interface DELPHIINTERFACE IOTAStructureView280;
typedef System::DelphiInterface<IOTAStructureView280> _di_IOTAStructureView280;
__interface DELPHIINTERFACE IOTAStructureContext;
typedef System::DelphiInterface<IOTAStructureContext> _di_IOTAStructureContext;
__interface DELPHIINTERFACE IOTAStructureContext110;
typedef System::DelphiInterface<IOTAStructureContext110> _di_IOTAStructureContext110;
__interface DELPHIINTERFACE IOTAStructureNodeStatePreserver;
typedef System::DelphiInterface<IOTAStructureNodeStatePreserver> _di_IOTAStructureNodeStatePreserver;
__interface DELPHIINTERFACE IOTAStructureUpdateSynchronizer;
typedef System::DelphiInterface<IOTAStructureUpdateSynchronizer> _di_IOTAStructureUpdateSynchronizer;
__interface DELPHIINTERFACE INTAStructureContext;
typedef System::DelphiInterface<INTAStructureContext> _di_INTAStructureContext;
__interface DELPHIINTERFACE IOTAStructureContextToolbar;
typedef System::DelphiInterface<IOTAStructureContextToolbar> _di_IOTAStructureContextToolbar;
__interface DELPHIINTERFACE IOTAStructureContextEditActions;
typedef System::DelphiInterface<IOTAStructureContextEditActions> _di_IOTAStructureContextEditActions;
__interface DELPHIINTERFACE IOTAStructureContextKeyHandler;
typedef System::DelphiInterface<IOTAStructureContextKeyHandler> _di_IOTAStructureContextKeyHandler;
__interface DELPHIINTERFACE IOTADragStructureContext;
typedef System::DelphiInterface<IOTADragStructureContext> _di_IOTADragStructureContext;
__interface DELPHIINTERFACE IOTAStructureNode;
typedef System::DelphiInterface<IOTAStructureNode> _di_IOTAStructureNode;
__interface DELPHIINTERFACE IOTASortableStructureNode;
typedef System::DelphiInterface<IOTASortableStructureNode> _di_IOTASortableStructureNode;
__interface DELPHIINTERFACE IOTAEditableStructureNode;
typedef System::DelphiInterface<IOTAEditableStructureNode> _di_IOTAEditableStructureNode;
__interface DELPHIINTERFACE IOTANavigableStructureNode;
typedef System::DelphiInterface<IOTANavigableStructureNode> _di_IOTANavigableStructureNode;
__interface DELPHIINTERFACE IOTADragStructureNode;
typedef System::DelphiInterface<IOTADragStructureNode> _di_IOTADragStructureNode;
__interface DELPHIINTERFACE IOTAStructureNodeMenuItem;
typedef System::DelphiInterface<IOTAStructureNodeMenuItem> _di_IOTAStructureNodeMenuItem;
__interface DELPHIINTERFACE IOTAStructureNodePopup;
typedef System::DelphiInterface<IOTAStructureNodePopup> _di_IOTAStructureNodePopup;
class DELPHICLASS TStructureMenuItem;
__interface DELPHIINTERFACE IInternalStructureMenuItem;
typedef System::DelphiInterface<IInternalStructureMenuItem> _di_IInternalStructureMenuItem;
class DELPHICLASS TStructureNodeMenuItem;
__interface DELPHIINTERFACE IOTACustomEditorViewStructure;
typedef System::DelphiInterface<IOTACustomEditorViewStructure> _di_IOTACustomEditorViewStructure;
__interface DELPHIINTERFACE IOTACustomEditorSubViewStructure;
typedef System::DelphiInterface<IOTACustomEditorSubViewStructure> _di_IOTACustomEditorSubViewStructure;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TOTAChildUpdateKind : unsigned int { ckNodeAdded, ckNodeRemoved, ckChanged };

enum DECLSPEC_DENUM TOTADragState : unsigned int { odsDragEnter, odsDragLeave, odsDragMove };

enum DECLSPEC_DENUM TOTADropMode : unsigned int { odmNowhere, odmAbove, odmOnNode, odmBelow };

enum DECLSPEC_DENUM TOTANodePreservationMode : unsigned int { onpNone, onpIntegrated, onpExternal };

__interface  INTERFACE_UUID("{F158EF17-342C-46AA-BA06-5DCD544354BF}") IOTAStructureNotifier  : public Toolsapi::IOTANotifier 
{
	virtual void __fastcall StructureChanged(const _di_IOTAStructureContext Context) = 0 ;
	virtual void __fastcall NodeEdited(const _di_IOTAStructureNode Node) = 0 ;
	virtual void __fastcall NodeFocused(const _di_IOTAStructureNode Node) = 0 ;
	virtual void __fastcall NodeSelected(const _di_IOTAStructureNode Node) = 0 ;
	virtual void __fastcall DefaultNodeAction(const _di_IOTAStructureNode Node) = 0 ;
	virtual void __fastcall VisibleChanged(System::WordBool Visible) = 0 ;
};

__interface  INTERFACE_UUID("{04084727-3466-4220-9337-4F2A0CC17F87}") IOTABaseStructureView  : public IDispatch 
{
	virtual HRESULT __safecall BeginUpdate() = 0 ;
	virtual HRESULT __safecall EndUpdate() = 0 ;
	virtual HRESULT __safecall GetStructureContext(_di_IOTAStructureContext &__GetStructureContext_result) = 0 ;
	virtual HRESULT __safecall GetStructureType(System::WideString &__GetStructureType_result) = 0 ;
	virtual HRESULT __safecall SetStructureContext(const _di_IOTAStructureContext AContext) = 0 ;
	virtual HRESULT __safecall StructureChanged(System::WordBool Deferred) = 0 ;
	virtual void __fastcall NodeSelected(const _di_IOTAStructureNode Node) = 0 ;
	virtual void __fastcall NodeFocused(const _di_IOTAStructureNode Node) = 0 ;
	virtual void __fastcall NodeEdited(const _di_IOTAStructureNode Node) = 0 ;
};

__interface  INTERFACE_UUID("{A37053F0-8E22-47A2-8E99-1CFFFC392BEF}") IOTAStructureView  : public IOTABaseStructureView 
{
	virtual HRESULT __safecall AddNotifier(const _di_IOTAStructureNotifier Notifier, int &__AddNotifier_result) = 0 ;
	virtual HRESULT __safecall ChildNodeUpdated(const _di_IOTAStructureNode ParentNode, const _di_IOTAStructureNode ChildNode, TOTAChildUpdateKind AUpdateKind) = 0 ;
	virtual HRESULT __safecall ClearSelection() = 0 ;
	virtual HRESULT __safecall FocusNode(const _di_IOTAStructureNode Node) = 0 ;
	virtual HRESULT __safecall GetFirstSelected(_di_IOTAStructureNode &__GetFirstSelected_result) = 0 ;
	virtual HRESULT __safecall GetNextSelected(const _di_IOTAStructureNode ANode, _di_IOTAStructureNode &__GetNextSelected_result) = 0 ;
	virtual HRESULT __safecall GetSelectedCount(int &__GetSelectedCount_result) = 0 ;
	HIDESBASE virtual HRESULT __safecall GetStructureType(System::WideString &__GetStructureType_result) = 0 ;
	virtual HRESULT __safecall RemoveNotifier(int Index) = 0 ;
	virtual HRESULT __safecall RequestEdit(const _di_IOTAStructureNode Node, System::WordBool ForceEdit, System::WordBool &__RequestEdit_result) = 0 ;
	HIDESBASE virtual HRESULT __safecall SetStructureContext(const _di_IOTAStructureContext AContext) = 0 ;
	HIDESBASE virtual HRESULT __safecall StructureChanged(System::WordBool Deferred) = 0 ;
	virtual HRESULT __safecall SelectNode(const _di_IOTAStructureNode Node) = 0 ;
	virtual HRESULT __safecall AddBitmap(HBITMAP ABitmap, System::WordBool StateImage, int &__AddBitmap_result) = 0 ;
	virtual HRESULT __safecall AddIcon(HICON AIcon, System::WordBool StateImage, int &__AddIcon_result) = 0 ;
	virtual HRESULT __safecall AddImageList(NativeUInt AImageList, System::WordBool StateImage, int &__AddImageList_result) = 0 ;
	virtual HRESULT __safecall ViewShowing(System::WordBool &__ViewShowing_result) = 0 ;
};

__interface  INTERFACE_UUID("{72C311FE-4C8A-44AD-9F1F-9A846FE617F2}") IOTAStructureView110  : public IOTAStructureView 
{
	virtual HRESULT __safecall IsContextChanging(System::WordBool &__IsContextChanging_result) = 0 ;
};

__interface  INTERFACE_UUID("{D54B2624-1411-48D1-8FD1-559373FD141E}") IOTAStructureView280  : public IOTAStructureView110 
{
	virtual HRESULT __safecall AddImage(const System::UnicodeString AImageName, const Vcl::Graphics::TGraphicArray AImage, System::WordBool StateImage, int &__AddImage_result) = 0 ;
	virtual HRESULT __safecall AddVirtualImageList(Vcl::Virtualimagelist::TVirtualImageList* AVirtualImageList, System::WordBool StateImage, int &__AddVirtualImageList_result) = 0 ;
};

__interface  INTERFACE_UUID("{67FD6512-C50F-4C83-8C2F-4E60340668D1}") IOTAStructureContext  : public IDispatch 
{
	virtual HRESULT __safecall Get_ContextIdent(System::WideString &__Get_ContextIdent_result) = 0 ;
	virtual HRESULT __safecall Get_StructureType(System::WideString &__Get_StructureType_result) = 0 ;
	virtual HRESULT __safecall Get_ViewOptions(int &__Get_ViewOptions_result) = 0 ;
	virtual HRESULT __safecall Get_RootNodeCount(int &__Get_RootNodeCount_result) = 0 ;
	virtual HRESULT __safecall GetRootStructureNode(int Index, _di_IOTAStructureNode &__GetRootStructureNode_result) = 0 ;
	virtual HRESULT __safecall NodeEdited(const _di_IOTAStructureNode Node) = 0 ;
	virtual HRESULT __safecall NodeFocused(const _di_IOTAStructureNode Node) = 0 ;
	virtual HRESULT __safecall NodeSelected(const _di_IOTAStructureNode Node) = 0 ;
	virtual HRESULT __safecall DefaultNodeAction(const _di_IOTAStructureNode Node) = 0 ;
	virtual HRESULT __safecall SameContext(const _di_IOTAStructureContext AContext, System::WordBool &__SameContext_result) = 0 ;
	virtual HRESULT __safecall InitPopupMenu(const _di_IOTAStructureNode Node, const _di_IOTAStructureNodeMenuItem PopupMenu) = 0 ;
	virtual HRESULT __safecall AddRootNode(const _di_IOTAStructureNode ANode, int Index) = 0 ;
	virtual HRESULT __safecall RemoveRootNode(const _di_IOTAStructureNode ANode) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::WideString _scw_Get_ContextIdent() { System::WideString __r; HRESULT __hr = Get_ContextIdent(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property System::WideString ContextIdent = {read=_scw_Get_ContextIdent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::WideString _scw_Get_StructureType() { System::WideString __r; HRESULT __hr = Get_StructureType(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property System::WideString StructureType = {read=_scw_Get_StructureType};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_ViewOptions() { int __r; HRESULT __hr = Get_ViewOptions(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property int ViewOptions = {read=_scw_Get_ViewOptions};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_RootNodeCount() { int __r; HRESULT __hr = Get_RootNodeCount(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property int RootNodeCount = {read=_scw_Get_RootNodeCount};
};

__interface  INTERFACE_UUID("{E60A76A6-8E44-4F67-85F3-06ED345BB2F4}") IOTAStructureContext110  : public IOTAStructureContext 
{
	virtual HRESULT __safecall ContextActivated() = 0 ;
};

__interface  INTERFACE_UUID("{F6189580-87EE-4985-8866-7712D8DB4872}") IOTAStructureNodeStatePreserver  : public IDispatch 
{
	virtual HRESULT __safecall Get_NodePreservationMode(TOTANodePreservationMode &__Get_NodePreservationMode_result) = 0 ;
	virtual HRESULT __safecall PreserveNodeStates() = 0 ;
	virtual HRESULT __safecall RestoreNodeState(const _di_IOTAStructureNode Node) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline TOTANodePreservationMode _scw_Get_NodePreservationMode() { TOTANodePreservationMode __r; HRESULT __hr = Get_NodePreservationMode(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property TOTANodePreservationMode NodePreservationMode = {read=_scw_Get_NodePreservationMode};
};

__interface  INTERFACE_UUID("{D53E0F35-B178-4541-8CCD-24196466855D}") IOTAStructureUpdateSynchronizer  : public IDispatch 
{
	virtual HRESULT __safecall Lock() = 0 ;
	virtual HRESULT __safecall TryLock(System::WordBool &__TryLock_result) = 0 ;
	virtual HRESULT __safecall UnLock() = 0 ;
};

__interface  INTERFACE_UUID("{F413DD7C-532E-46EB-8238-C4FE5CDA9729}") INTAStructureContext  : public IDispatch 
{
	virtual HRESULT __safecall GetStructureControl(Vcl::Controls::TWinControl* &__GetStructureControl_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline Vcl::Controls::TWinControl* _scw_GetStructureControl() { Vcl::Controls::TWinControl* __r; HRESULT __hr = GetStructureControl(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property Vcl::Controls::TWinControl* StructureControl = {read=_scw_GetStructureControl};
};

__interface  INTERFACE_UUID("{55C848EB-2197-4B17-A9D0-696D3331B3CC}") IOTAStructureContextToolbar  : public IDispatch 
{
	virtual HRESULT __safecall Get_ButtonCount(int &__Get_ButtonCount_result) = 0 ;
	virtual HRESULT __safecall GetButtonCaption(int Index, System::WideString &__GetButtonCaption_result) = 0 ;
	virtual HRESULT __safecall GetButtonEnabled(int Index, System::WordBool &__GetButtonEnabled_result) = 0 ;
	virtual HRESULT __safecall GetButtonEnableDropDown(int Index, System::WordBool &__GetButtonEnableDropDown_result) = 0 ;
	virtual HRESULT __safecall GetButtonHasDropDown(int Index, System::WordBool &__GetButtonHasDropDown_result) = 0 ;
	virtual HRESULT __safecall GetButtonHint(int Index, System::WideString &__GetButtonHint_result) = 0 ;
	virtual HRESULT __safecall GetButtonImageIndex(int Index, int &__GetButtonImageIndex_result) = 0 ;
	virtual HRESULT __safecall GetButtonMenu(int Index, _di_IOTAStructureNodeMenuItem &__GetButtonMenu_result) = 0 ;
	virtual HRESULT __safecall GetButtonSeparator(int Index, System::WordBool &__GetButtonSeparator_result) = 0 ;
	virtual HRESULT __safecall GetButtonVisible(int Index, System::WordBool &__GetButtonVisible_result) = 0 ;
	HIDESBASE virtual HRESULT __safecall Invoke(int Index) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_ButtonCount() { int __r; HRESULT __hr = Get_ButtonCount(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property int ButtonCount = {read=_scw_Get_ButtonCount};
};

__interface  INTERFACE_UUID("{EF0F0981-8E1B-468F-B063-4A5956EB4BDA}") IOTAStructureContextEditActions  : public IDispatch 
{
	virtual HRESULT __safecall EditAction(int Action, System::WordBool &__EditAction_result) = 0 ;
	virtual HRESULT __safecall GetEditState(int &__GetEditState_result) = 0 ;
};

__interface  INTERFACE_UUID("{17A71EDB-A2FE-4358-ABD2-362011A8D547}") IOTAStructureContextKeyHandler  : public IDispatch 
{
	virtual HRESULT __safecall KeyDown(const _di_IOTAStructureNode Node, int KeyState, System::Word &KeyCode) = 0 ;
	virtual HRESULT __safecall KeyPressed(const _di_IOTAStructureNode Node, int KeyState, System::Word &KeyChar) = 0 ;
};

__interface  INTERFACE_UUID("{03DC0E9A-DED1-4E2A-BECE-328CB27D19B9}") IOTADragStructureContext  : public IDispatch 
{
	virtual HRESULT __safecall DragAllowed(const _di_IOTAStructureNode Node, System::WordBool &__DragAllowed_result) = 0 ;
	virtual HRESULT __safecall DragDrop(const _di_IOTAStructureNode Node, System::OleVariant DataObject, const System::WideString FormatArray, int X, int Y, int KeyState, TOTADropMode Mode, int &Effect) = 0 ;
	virtual HRESULT __safecall DragOver(const _di_IOTAStructureNode Node, System::OleVariant DataObject, TOTADragState State, int X, int Y, int KeyState, TOTADropMode Mode, int &Effect, System::WordBool &__DragOver_result) = 0 ;
	virtual HRESULT __safecall GetDataObject(System::OleVariant &__GetDataObject_result) = 0 ;
};

__interface  INTERFACE_UUID("{8A0802F5-C26C-4902-9D1F-8323F2F48F8C}") IOTAStructureNode  : public IDispatch 
{
	virtual HRESULT __safecall AddChildNode(const _di_IOTAStructureNode ANode, int Index, int &__AddChildNode_result) = 0 ;
	virtual HRESULT __safecall Get_Caption(System::WideString &__Get_Caption_result) = 0 ;
	virtual HRESULT __safecall Get_ChildCount(int &__Get_ChildCount_result) = 0 ;
	virtual HRESULT __safecall Get_Child(int Index, _di_IOTAStructureNode &__Get_Child_result) = 0 ;
	virtual HRESULT __safecall Get_Expanded(System::WordBool &__Get_Expanded_result) = 0 ;
	virtual HRESULT __safecall Set_Expanded(System::WordBool Value) = 0 ;
	virtual HRESULT __safecall Get_Focused(System::WordBool &__Get_Focused_result) = 0 ;
	virtual HRESULT __safecall Set_Focused(System::WordBool Value) = 0 ;
	virtual HRESULT __safecall Get_Hint(System::WideString &__Get_Hint_result) = 0 ;
	virtual HRESULT __safecall Get_ImageIndex(int &__Get_ImageIndex_result) = 0 ;
	virtual HRESULT __safecall Get_Name(System::WideString &__Get_Name_result) = 0 ;
	virtual HRESULT __safecall Get_Parent(_di_IOTAStructureNode &__Get_Parent_result) = 0 ;
	virtual HRESULT __safecall Get_Selected(System::WordBool &__Get_Selected_result) = 0 ;
	virtual HRESULT __safecall Set_Selected(System::WordBool Value) = 0 ;
	virtual HRESULT __safecall Get_StateIndex(int &__Get_StateIndex_result) = 0 ;
	virtual HRESULT __safecall Get_Data(int &__Get_Data_result) = 0 ;
	virtual HRESULT __safecall Set_Data(int Value) = 0 ;
	virtual HRESULT __safecall RemoveChildNode(int Index) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::WideString _scw_Get_Caption() { System::WideString __r; HRESULT __hr = Get_Caption(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property System::WideString Caption = {read=_scw_Get_Caption};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_ChildCount() { int __r; HRESULT __hr = Get_ChildCount(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property int ChildCount = {read=_scw_Get_ChildCount};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IOTAStructureNode _scw_Get_Child(int Index) { _di_IOTAStructureNode __r; HRESULT __hr = Get_Child(Index, __r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property _di_IOTAStructureNode Child[int Index] = {read=_scw_Get_Child};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Data() { int __r; HRESULT __hr = Get_Data(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property int Data = {read=_scw_Get_Data, write=Set_Data};
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::WordBool _scw_Get_Expanded() { System::WordBool __r; HRESULT __hr = Get_Expanded(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property System::WordBool Expanded = {read=_scw_Get_Expanded, write=Set_Expanded};
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::WordBool _scw_Get_Focused() { System::WordBool __r; HRESULT __hr = Get_Focused(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property System::WordBool Focused = {read=_scw_Get_Focused, write=Set_Focused};
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::WideString _scw_Get_Hint() { System::WideString __r; HRESULT __hr = Get_Hint(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property System::WideString Hint = {read=_scw_Get_Hint};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_ImageIndex() { int __r; HRESULT __hr = Get_ImageIndex(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property int ImageIndex = {read=_scw_Get_ImageIndex};
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::WideString _scw_Get_Name() { System::WideString __r; HRESULT __hr = Get_Name(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property System::WideString Name = {read=_scw_Get_Name};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IOTAStructureNode _scw_Get_Parent() { _di_IOTAStructureNode __r; HRESULT __hr = Get_Parent(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property _di_IOTAStructureNode Parent = {read=_scw_Get_Parent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::WordBool _scw_Get_Selected() { System::WordBool __r; HRESULT __hr = Get_Selected(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property System::WordBool Selected = {read=_scw_Get_Selected, write=Set_Selected};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_StateIndex() { int __r; HRESULT __hr = Get_StateIndex(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property int StateIndex = {read=_scw_Get_StateIndex};
};

__interface  INTERFACE_UUID("{24451294-D128-47E6-A8A5-00C3547C2F9C}") IOTASortableStructureNode  : public IDispatch 
{
	virtual HRESULT __safecall Get_SortByIndex(System::WordBool &__Get_SortByIndex_result) = 0 ;
	virtual HRESULT __safecall Get_ItemIndex(int &__Get_ItemIndex_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::WordBool _scw_Get_SortByIndex() { System::WordBool __r; HRESULT __hr = Get_SortByIndex(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property System::WordBool SortByIndex = {read=_scw_Get_SortByIndex};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_ItemIndex() { int __r; HRESULT __hr = Get_ItemIndex(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property int ItemIndex = {read=_scw_Get_ItemIndex};
};

__interface  INTERFACE_UUID("{B2CF6C45-4151-4B1A-B56B-B23534BB053E}") IOTAEditableStructureNode  : public IDispatch 
{
	virtual HRESULT __safecall Get_CanEdit(System::WordBool &__Get_CanEdit_result) = 0 ;
	virtual HRESULT __safecall Get_EditCaption(System::WideString &__Get_EditCaption_result) = 0 ;
	virtual HRESULT __safecall SetValue(const System::WideString Value) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::WideString _scw_Get_EditCaption() { System::WideString __r; HRESULT __hr = Get_EditCaption(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property System::WideString EditCaption = {read=_scw_Get_EditCaption};
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::WordBool _scw_Get_CanEdit() { System::WordBool __r; HRESULT __hr = Get_CanEdit(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property System::WordBool CanEdit = {read=_scw_Get_CanEdit};
};

__interface  INTERFACE_UUID("{81B1557A-E3F2-4E9C-AA69-CEBBA99D923F}") IOTANavigableStructureNode  : public IDispatch 
{
	virtual HRESULT __safecall Navigate(bool &__Navigate_result) = 0 ;
};

__interface  INTERFACE_UUID("{679BCA19-150F-4CC5-9023-CE24F5580F5B}") IOTADragStructureNode  : public IDispatch 
{
	virtual HRESULT __safecall DragAllowed(System::WordBool &__DragAllowed_result) = 0 ;
	virtual HRESULT __safecall DragDrop(System::OleVariant DataObject, const System::WideString FormatArray, int X, int Y, int KeyState, TOTADropMode Mode, int &Effect) = 0 ;
	virtual HRESULT __safecall DragOver(System::OleVariant DataObject, TOTADragState State, int X, int Y, int KeyState, TOTADropMode Mode, int &Effect, System::WordBool &__DragOver_result) = 0 ;
};

__interface  INTERFACE_UUID("{7BF39892-F3D3-48F7-B5F3-664FDD438581}") IOTAStructureNodeMenuItem  : public IDispatch 
{
	virtual HRESULT __safecall DeleteItem(int Index) = 0 ;
	virtual HRESULT __safecall Get_Caption(System::WideString &__Get_Caption_result) = 0 ;
	virtual HRESULT __safecall Get_Checked(System::WordBool &__Get_Checked_result) = 0 ;
	virtual HRESULT __safecall Get_Count(int &__Get_Count_result) = 0 ;
	virtual HRESULT __safecall Get_Enabled(System::WordBool &__Get_Enabled_result) = 0 ;
	virtual HRESULT __safecall Get_GroupIndex(int &__Get_GroupIndex_result) = 0 ;
	virtual HRESULT __safecall Get_ImageIndex(int &__Get_ImageIndex_result) = 0 ;
	virtual HRESULT __safecall Get_Item(int Index, _di_IOTAStructureNodeMenuItem &__Get_Item_result) = 0 ;
	virtual HRESULT __safecall Get_Name(System::WideString &__Get_Name_result) = 0 ;
	virtual HRESULT __safecall Get_RadioItem(System::WordBool &__Get_RadioItem_result) = 0 ;
	virtual HRESULT __safecall Get_ShortCut(int &__Get_ShortCut_result) = 0 ;
	virtual HRESULT __safecall Get_Visible(System::WordBool &__Get_Visible_result) = 0 ;
	virtual HRESULT __safecall InsertItem(int Index, const _di_IOTAStructureNodeMenuItem Item) = 0 ;
	HIDESBASE virtual HRESULT __safecall Invoke() = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::WideString _scw_Get_Caption() { System::WideString __r; HRESULT __hr = Get_Caption(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property System::WideString Caption = {read=_scw_Get_Caption};
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::WordBool _scw_Get_Checked() { System::WordBool __r; HRESULT __hr = Get_Checked(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property System::WordBool Checked = {read=_scw_Get_Checked};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Count() { int __r; HRESULT __hr = Get_Count(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property int Count = {read=_scw_Get_Count};
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::WordBool _scw_Get_Enabled() { System::WordBool __r; HRESULT __hr = Get_Enabled(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property System::WordBool Enabled = {read=_scw_Get_Enabled};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_GroupIndex() { int __r; HRESULT __hr = Get_GroupIndex(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property int GroupIndex = {read=_scw_Get_GroupIndex};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_ImageIndex() { int __r; HRESULT __hr = Get_ImageIndex(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property int ImageIndex = {read=_scw_Get_ImageIndex};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IOTAStructureNodeMenuItem _scw_Get_Item(int Index) { _di_IOTAStructureNodeMenuItem __r; HRESULT __hr = Get_Item(Index, __r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property _di_IOTAStructureNodeMenuItem Item[int Index] = {read=_scw_Get_Item};
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::WideString _scw_Get_Name() { System::WideString __r; HRESULT __hr = Get_Name(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property System::WideString Name = {read=_scw_Get_Name};
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::WordBool _scw_Get_RadioItem() { System::WordBool __r; HRESULT __hr = Get_RadioItem(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property System::WordBool RadioItem = {read=_scw_Get_RadioItem};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_ShortCut() { int __r; HRESULT __hr = Get_ShortCut(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property int ShortCut = {read=_scw_Get_ShortCut};
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::WordBool _scw_Get_Visible() { System::WordBool __r; HRESULT __hr = Get_Visible(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property System::WordBool Visible = {read=_scw_Get_Visible};
};

__interface  INTERFACE_UUID("{FAA6133B-F03F-4A93-9E86-C50EAD7348E6}") IOTAStructureNodePopup  : public IDispatch 
{
	virtual HRESULT __safecall InitPopupMenu(const _di_IOTAStructureNodeMenuItem PopupMenu) = 0 ;
};

class PASCALIMPLEMENTATION TStructureMenuItem : public Vcl::Menus::TMenuItem
{
	typedef Vcl::Menus::TMenuItem inherited;
	
private:
	_di_IOTAStructureNodeMenuItem FStructureNodeMenuItem;
	void __fastcall SetStructureNodeMenuItem(const _di_IOTAStructureNodeMenuItem AStructureNodeMenuItem);
	
public:
	__fastcall TStructureMenuItem(Vcl::Menus::TMenuItem* AMenuItem, bool DestroyOriginal);
	virtual void __fastcall Click();
	__property _di_IOTAStructureNodeMenuItem StructureNodeMenuItem = {read=FStructureNodeMenuItem, write=SetStructureNodeMenuItem};
public:
	/* TMenuItem.Create */ inline __fastcall virtual TStructureMenuItem(System::Classes::TComponent* AOwner) : Vcl::Menus::TMenuItem(AOwner) { }
	/* TMenuItem.Destroy */ inline __fastcall virtual ~TStructureMenuItem() { }
	
};


__interface  INTERFACE_UUID("{7CC9A6ED-7C94-4CEF-B524-2BC3132468F4}") IInternalStructureMenuItem  : public System::IInterface 
{
	virtual Vcl::Menus::TMenuItem* __fastcall GetMenuItem() = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TStructureNodeMenuItem : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	Vcl::Menus::TMenuItem* FMenuItem;
	
protected:
	HRESULT __stdcall GetTypeInfoCount(/* out */ int &Count);
	HRESULT __stdcall GetTypeInfo(int Index, int LocaleID, /* out */ void *TypeInfo);
	HRESULT __stdcall GetIDsOfNames(const GUID &IID, void * Names, int NameCount, int LocaleID, void * DispIDs);
	HRESULT __stdcall Invoke(int DispID, const GUID &IID, int LocaleID, System::Word Flags, void *Params, void * VarResult, void * ExcepInfo, void * ArgErr)/* overload */;
	HRESULT __stdcall InterfaceSupportsErrorInfo(const GUID &iid);
	HRESULT __safecall DeleteItem(int Index);
	HRESULT __safecall Get_Caption(System::WideString &__Get_Caption_result);
	HRESULT __safecall Get_Checked(System::WordBool &__Get_Checked_result);
	HRESULT __safecall Get_Count(int &__Get_Count_result);
	HRESULT __safecall Get_Enabled(System::WordBool &__Get_Enabled_result);
	HRESULT __safecall Get_GroupIndex(int &__Get_GroupIndex_result);
	HRESULT __safecall Get_ImageIndex(int &__Get_ImageIndex_result);
	HRESULT __safecall Get_Item(int Index, _di_IOTAStructureNodeMenuItem &__Get_Item_result);
	HRESULT __safecall Get_Name(System::WideString &__Get_Name_result);
	HRESULT __safecall Get_RadioItem(System::WordBool &__Get_RadioItem_result);
	HRESULT __safecall Get_ShortCut(int &__Get_ShortCut_result);
	HRESULT __safecall Get_Visible(System::WordBool &__Get_Visible_result);
	HRESULT __safecall InsertItem(int Index, const _di_IOTAStructureNodeMenuItem Item);
	HRESULT __safecall Invoke()/* overload */;
	Vcl::Menus::TMenuItem* __fastcall GetMenuItem();
	
public:
	__fastcall TStructureNodeMenuItem(Vcl::Menus::TMenuItem* AMenuItem);
	virtual HRESULT __fastcall SafeCallException(System::TObject* ExceptObject, void * ExceptAddr);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TStructureNodeMenuItem() { }
	
private:
	void *__IInternalStructureMenuItem;	// IInternalStructureMenuItem 
	void *__IOTAStructureNodeMenuItem;	// IOTAStructureNodeMenuItem 
	void *__ISupportErrorInfo;	// ISupportErrorInfo 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {7CC9A6ED-7C94-4CEF-B524-2BC3132468F4}
	operator _di_IInternalStructureMenuItem()
	{
		_di_IInternalStructureMenuItem intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IInternalStructureMenuItem*(void) { return (IInternalStructureMenuItem*)&__IInternalStructureMenuItem; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {7BF39892-F3D3-48F7-B5F3-664FDD438581}
	operator _di_IOTAStructureNodeMenuItem()
	{
		_di_IOTAStructureNodeMenuItem intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IOTAStructureNodeMenuItem*(void) { return (IOTAStructureNodeMenuItem*)&__IOTAStructureNodeMenuItem; }
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
	operator IDispatch*(void) { return (IDispatch*)&__IOTAStructureNodeMenuItem; }
	#endif
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{8B75C91B-7B4A-4FBB-93F0-3C8A09585982}") IOTACustomEditorViewStructure  : public System::IInterface 
{
	virtual _di_IOTAStructureContext __fastcall GetStructureContext() = 0 ;
	virtual System::WideString __fastcall GetStructureType() = 0 ;
};

__interface  INTERFACE_UUID("{E597AA89-3E34-449A-BDFC-0B3731200150}") IOTACustomEditorSubViewStructure  : public System::IInterface 
{
	virtual _di_IOTAStructureContext __fastcall GetStructureContext(const System::_di_IInterface AContext, System::TObject* AViewObject) = 0 ;
	virtual System::WideString __fastcall GetStructureType(const System::_di_IInterface AContext, System::TObject* AViewObject) = 0 ;
};

//-- var, const, procedure ---------------------------------------------------
#define SourceCodeStructureType L"SourceCode.StructureType"
#define ErrorsNodeType L"Errors.NodeType"
#define DesignerStructureType L"Designer.StructureType"
static const System::Int8 voLevelSelectConstraint = System::Int8(0x1);
static const System::Int8 voMultiSelect = System::Int8(0x2);
static const System::Int8 voRightClickSelect = System::Int8(0x4);
static const System::Int8 voSiblingSelectConstraint = System::Int8(0x8);
}	/* namespace Structureviewapi */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_STRUCTUREVIEWAPI)
using namespace Structureviewapi;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// StructureviewapiHPP
