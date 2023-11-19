// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ClassStructureViewAPI.pas' rev: 35.00 (Windows)

#ifndef ClassstructureviewapiHPP
#define ClassstructureviewapiHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <ToolsAPI.hpp>
#include <StructureViewAPI.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.CommCtrl.hpp>
#include <Vcl.VirtualImageList.hpp>
#include <Vcl.Graphics.hpp>

//-- user supplied -----------------------------------------------------------

namespace Classstructureviewapi
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IOTAClassStructureNode;
typedef System::DelphiInterface<IOTAClassStructureNode> _di_IOTAClassStructureNode;
__interface DELPHIINTERFACE IOTAClassStructureNotifier;
typedef System::DelphiInterface<IOTAClassStructureNotifier> _di_IOTAClassStructureNotifier;
__interface DELPHIINTERFACE IOTAClassStructureView;
typedef System::DelphiInterface<IOTAClassStructureView> _di_IOTAClassStructureView;
__interface DELPHIINTERFACE IOTAClassStructureView280;
typedef System::DelphiInterface<IOTAClassStructureView280> _di_IOTAClassStructureView280;
//-- type declarations -------------------------------------------------------
__interface  INTERFACE_UUID("{61CCDC31-578B-4734-8440-ADCA90B3ACC3}") IOTAClassStructureNode  : public Structureviewapi::IOTAStructureNode 
{
	virtual HRESULT __safecall GetDetailCount(int &__GetDetailCount_result) = 0 ;
	virtual HRESULT __safecall AddDetailNode(Structureviewapi::_di_IOTAStructureNode ANode, int Index, int &__AddDetailNode_result) = 0 ;
	virtual HRESULT __safecall GetDetailNode(int Index, Structureviewapi::_di_IOTAStructureNode &__GetDetailNode_result) = 0 ;
};

__interface  INTERFACE_UUID("{0641513F-BF98-4E9A-80FD-E7FB34480D69}") IOTAClassStructureNotifier  : public Structureviewapi::IOTAStructureNotifier 
{
	virtual void __fastcall DetailNodeEdited(const Structureviewapi::_di_IOTAStructureNode Node) = 0 ;
	virtual void __fastcall DetailNodeFocused(const Structureviewapi::_di_IOTAStructureNode Node) = 0 ;
	virtual void __fastcall DetailNodeSelected(const Structureviewapi::_di_IOTAStructureNode Node) = 0 ;
	virtual void __fastcall DefaultDetailNodeAction(const Structureviewapi::_di_IOTAStructureNode Node) = 0 ;
};

__interface  INTERFACE_UUID("{5E329BEC-57DF-4072-969C-22A1A7675A27}") IOTAClassStructureView  : public Structureviewapi::IOTABaseStructureView 
{
	virtual HRESULT __safecall AddNotifier(const _di_IOTAClassStructureNotifier Notifier, int &__AddNotifier_result) = 0 ;
	virtual HRESULT __safecall ChildNodeUpdated(const _di_IOTAClassStructureNode ParentNode, const _di_IOTAClassStructureNode ChildNode, Structureviewapi::TOTAChildUpdateKind AUpdateKind) = 0 ;
	virtual HRESULT __safecall ClearSelection() = 0 ;
	virtual HRESULT __safecall FocusNode(const _di_IOTAClassStructureNode Node) = 0 ;
	virtual HRESULT __safecall GetFirstSelectedTreeNode(_di_IOTAClassStructureNode &__GetFirstSelectedTreeNode_result) = 0 ;
	virtual HRESULT __safecall GetNextSelectedTreeNode(const _di_IOTAClassStructureNode ANode, _di_IOTAClassStructureNode &__GetNextSelectedTreeNode_result) = 0 ;
	virtual HRESULT __safecall GetTreeSelectedCount(int &__GetTreeSelectedCount_result) = 0 ;
	virtual HRESULT __safecall GetFirstSelectedDetailNode(Structureviewapi::_di_IOTAStructureNode &__GetFirstSelectedDetailNode_result) = 0 ;
	virtual HRESULT __safecall GetNextSelectedDetailNode(const Structureviewapi::_di_IOTAStructureNode ANode, Structureviewapi::_di_IOTAStructureNode &__GetNextSelectedDetailNode_result) = 0 ;
	virtual HRESULT __safecall GetDetailSelectedCount(int &__GetDetailSelectedCount_result) = 0 ;
	HIDESBASE virtual HRESULT __safecall GetStructureType(System::WideString &__GetStructureType_result) = 0 ;
	virtual HRESULT __safecall RemoveNotifier(int Index) = 0 ;
	virtual HRESULT __safecall RequestEdit(const _di_IOTAClassStructureNode Node, System::WordBool ForceEdit, System::WordBool &__RequestEdit_result) = 0 ;
	HIDESBASE virtual HRESULT __safecall SetStructureContext(const Structureviewapi::_di_IOTAStructureContext AContext) = 0 ;
	HIDESBASE virtual HRESULT __safecall StructureChanged(System::WordBool Deferred) = 0 ;
	virtual HRESULT __safecall SelectNode(const _di_IOTAClassStructureNode Node) = 0 ;
	virtual HRESULT __safecall SelectDetailNode(const Structureviewapi::_di_IOTAStructureNode Node) = 0 ;
	virtual HRESULT __safecall AddBitmap(HBITMAP ABitmap, int Flags, int &__AddBitmap_result) = 0 ;
	virtual HRESULT __safecall AddIcon(HICON AIcon, int Flags, int &__AddIcon_result) = 0 ;
	virtual HRESULT __safecall AddImageList(NativeUInt AImageList, int Flags, int &__AddImageList_result) = 0 ;
	virtual HRESULT __safecall ViewShowing(System::WordBool &__ViewShowing_result) = 0 ;
};

__interface  INTERFACE_UUID("{26CB088E-1EEA-4F88-801D-27AA90ECF325}") IOTAClassStructureView280  : public IOTAClassStructureView 
{
	virtual HRESULT __safecall AddImage(const System::UnicodeString AImageName, const Vcl::Graphics::TGraphicArray AImage, int Flags, int &__AddImage_result) = 0 ;
	virtual HRESULT __safecall AddVirtualImageList(Vcl::Virtualimagelist::TVirtualImageList* AVirtualImageList, int Flags, int &__AddVirtualImageList_result) = 0 ;
};

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 CSI_TREE = System::Int8(0x0);
static const System::Int8 CSI_NODE = System::Int8(0x0);
static const System::Int8 CSI_STATE = System::Int8(0x1);
static const System::Int8 CSI_DETAIL = System::Int8(0x2);
#define ClassViewStructureType L"ClassView.StructureType"
}	/* namespace Classstructureviewapi */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CLASSSTRUCTUREVIEWAPI)
using namespace Classstructureviewapi;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// ClassstructureviewapiHPP
