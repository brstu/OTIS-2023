// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DataExplorerAPI.pas' rev: 35.00 (Windows)

#ifndef DataexplorerapiHPP
#define DataexplorerapiHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Vcl.Forms.hpp>
#include <System.Rtti.hpp>
#include <DesignIntf.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <System.Generics.Collections.hpp>
#include <Vcl.ImgList.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dataexplorerapi
{
//-- forward type declarations -----------------------------------------------
struct TScope;
struct TDEValueRec;
class DELPHICLASS TDEEnumerableWrapper;
__interface DELPHIINTERFACE IOTADataExplorerItem;
typedef System::DelphiInterface<IOTADataExplorerItem> _di_IOTADataExplorerItem;
__interface DELPHIINTERFACE IOTADataExplorerRootItem;
typedef System::DelphiInterface<IOTADataExplorerRootItem> _di_IOTADataExplorerRootItem;
__interface DELPHIINTERFACE IOTADataExplorerCommand;
typedef System::DelphiInterface<IOTADataExplorerCommand> _di_IOTADataExplorerCommand;
__interface DELPHIINTERFACE IOTADataExplorerComponentStream;
typedef System::DelphiInterface<IOTADataExplorerComponentStream> _di_IOTADataExplorerComponentStream;
__interface DELPHIINTERFACE IOTADataExplorerStaticNodeItem;
typedef System::DelphiInterface<IOTADataExplorerStaticNodeItem> _di_IOTADataExplorerStaticNodeItem;
__interface DELPHIINTERFACE IOTADataExplorerNodeCollectionItem;
typedef System::DelphiInterface<IOTADataExplorerNodeCollectionItem> _di_IOTADataExplorerNodeCollectionItem;
__interface DELPHIINTERFACE IDataExplorerFrame;
typedef System::DelphiInterface<IDataExplorerFrame> _di_IDataExplorerFrame;
__interface DELPHIINTERFACE IOTADataExplorerService;
typedef System::DelphiInterface<IOTADataExplorerService> _di_IOTADataExplorerService;
//-- type declarations -------------------------------------------------------
struct DECLSPEC_DRECORD TScope
{
private:
	System::TObject* FObject;
	System::UnicodeString FName;
	
public:
	__fastcall TScope(const System::UnicodeString AName, System::TObject* AObject);
	__property System::TObject* Obj = {read=FObject};
	__property System::UnicodeString Name = {read=FName};
	TScope() {}
};


typedef System::DynamicArray<TScope> TScopesArray;

struct DECLSPEC_DRECORD TDEValueRec
{
public:
	System::UnicodeString Value;
	System::TObject* ValueObj;
	__fastcall TDEValueRec(System::UnicodeString AValueStr)/* overload */;
	__fastcall TDEValueRec(System::TObject* AValueObj)/* overload */;
	TDEValueRec() {}
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TDEEnumerableWrapper : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	System::Rtti::TRttiContext FContext;
	System::TObject* FEnumerator;
	System::TObject* __fastcall GetCurrent();
	
public:
	__fastcall TDEEnumerableWrapper(System::TObject* AEnumerator);
	bool __fastcall MoveNext();
	__property System::TObject* Current = {read=GetCurrent};
	void __fastcall Reset();
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDEEnumerableWrapper() { }
	
private:
	void *__IEnumerator;	// System::IEnumerator 
	
public:
	operator System::IEnumerator*(void) { return (System::IEnumerator*)&__IEnumerator; }
	
};

#pragma pack(pop)

typedef System::DynamicArray<_di_IOTADataExplorerItem> TDEItemsArray;

typedef System::DynamicArray<_di_IOTADataExplorerCommand> TDECommandsArray;

__interface  INTERFACE_UUID("{3EDCE923-F52C-4E2D-ADBB-4162D7593D93}") IOTADataExplorerItem  : public System::IInterface 
{
	virtual bool __fastcall IsRoot() = 0 ;
	virtual bool __fastcall GetEnabled(System::DynamicArray<TScope> AScopesArray) = 0 ;
	virtual TDEValueRec __fastcall GetEnabledValue() = 0 ;
	virtual TDEValueRec __fastcall GetNameValue() = 0 ;
	virtual TDEValueRec __fastcall GetIdentityValue() = 0 ;
	virtual System::DynamicArray<_di_IOTADataExplorerCommand> __fastcall GetCommandsArray() = 0 ;
	virtual System::DynamicArray<_di_IOTADataExplorerItem> __fastcall GetItemsArray() = 0 ;
	virtual int __fastcall GetItemCount() = 0 ;
	virtual System::DynamicArray<TScope> __fastcall GetScopesArray() = 0 ;
	virtual System::Rtti::TValue __fastcall EvaluateValueRec(const TDEValueRec &AValueRec, System::DynamicArray<TScope> AScopes) = 0 ;
	__property System::DynamicArray<_di_IOTADataExplorerCommand> CommandsArray = {read=GetCommandsArray};
	__property System::DynamicArray<_di_IOTADataExplorerItem> ItemsArray = {read=GetItemsArray};
	__property int ItemCount = {read=GetItemCount};
	__property TDEValueRec NameValue = {read=GetNameValue};
	__property TDEValueRec IdentityValue = {read=GetIdentityValue};
};

__interface  INTERFACE_UUID("{59F144E3-9AFC-4790-BCDF-45878B6A373D}") IOTADataExplorerRootItem  : public System::IInterface 
{
	virtual bool __fastcall IsRoot() = 0 ;
};

__interface  INTERFACE_UUID("{550248E8-60B5-4E63-9515-FD8A4CA563AE}") IOTADataExplorerCommand  : public System::IInterface 
{
	virtual void __fastcall Execute(_di_IOTADataExplorerItem AItem, System::DynamicArray<TScope> AScopes) = 0 ;
	virtual void __fastcall Update(_di_IOTADataExplorerItem AItem, System::DynamicArray<TScope> AScopes) = 0 ;
	virtual System::UnicodeString __fastcall GetCaption() = 0 ;
	virtual bool __fastcall GetEnabled() = 0 ;
	virtual bool __fastcall GetVisible() = 0 ;
	__property System::UnicodeString Caption = {read=GetCaption};
	__property bool Enabled = {read=GetEnabled};
	__property bool Visible = {read=GetVisible};
};

__interface  INTERFACE_UUID("{C5CFDAFD-C665-4E80-B5ED-AE0AC73E3590}") IOTADataExplorerComponentStream  : public System::IInterface 
{
	virtual System::Word __fastcall GetFormat() = 0 ;
	virtual bool __fastcall GetStream(_di_IOTADataExplorerItem AItem, System::DynamicArray<TScope> AScopes, System::Classes::TStream* AStream) = 0 ;
	__property System::Word Format = {read=GetFormat};
};

typedef System::DynamicArray<_di_IOTADataExplorerComponentStream> TDEComponentStreamArray;

__interface  INTERFACE_UUID("{31AC3616-D72F-4D51-B435-5CC71E6481E9}") IOTADataExplorerStaticNodeItem  : public IOTADataExplorerItem 
{
	virtual int __fastcall GetImageIndex() = 0 ;
	virtual TDEValueRec __fastcall GetDisplayNameValue() = 0 ;
	virtual TDEValueRec __fastcall GetImageIndexValue() = 0 ;
	virtual TDEValueRec __fastcall GetObjectValue() = 0 ;
	virtual System::DynamicArray<_di_IOTADataExplorerComponentStream> __fastcall GetComponentStreamsArray() = 0 ;
	__property int ImageIndex = {read=GetImageIndex};
	__property TDEValueRec DisplayNameValue = {read=GetDisplayNameValue};
	__property TDEValueRec ImageIndexValue = {read=GetImageIndexValue};
	__property TDEValueRec ObjectValue = {read=GetObjectValue};
	__property System::DynamicArray<_di_IOTADataExplorerComponentStream> ComponentStreamsArray = {read=GetComponentStreamsArray};
};

__interface  INTERFACE_UUID("{50ED24EB-2FF9-44A5-98A5-CEEFBD9D00B9}") IOTADataExplorerNodeCollectionItem  : public IOTADataExplorerItem 
{
	virtual TDEValueRec __fastcall GetEnumeratorValue() = 0 ;
	virtual System::UnicodeString __fastcall GetEnumeratorScopeName() = 0 ;
	virtual TDEValueRec __fastcall GetRefreshValue() = 0 ;
	__property TDEValueRec EnumeratorValue = {read=GetEnumeratorValue};
	__property TDEValueRec RefreshValue = {read=GetRefreshValue};
	__property System::UnicodeString EnumeratorScopeName = {read=GetEnumeratorScopeName};
};

__interface  INTERFACE_UUID("{676E80A1-CAB4-4E27-8CB2-75F6A135DAA1}") IDataExplorerFrame  : public System::IInterface 
{
	virtual Designintf::TEditState __fastcall GetEditState() = 0 ;
	virtual bool __fastcall EditAction(Designintf::TEditAction Action) = 0 ;
};

typedef System::TMetaClass* TFrameClass;

__interface  INTERFACE_UUID("{51DC9F09-3DF5-4FB2-8DC1-A9BA137FA6BD}") IOTADataExplorerService  : public System::IInterface 
{
	virtual void __fastcall DeleteGroup(const int AGroupNum) = 0 ;
	virtual void __fastcall RegisterRootNode(_di_IOTADataExplorerItem ARootItem) = 0 ;
	virtual void __fastcall UnregisterRootNode(_di_IOTADataExplorerItem ARootItem) = 0 ;
	virtual System::DynamicArray<_di_IOTADataExplorerItem> __fastcall GetRootNodes() = 0 ;
	virtual void __fastcall RefreshNode(System::TObject* AIdentity, _di_IOTADataExplorerItem AItem, bool AChildren) = 0 ;
	virtual void __fastcall DeleteNode(System::TObject* AIdentity) = 0 ;
	virtual void __fastcall SelectNewChildNode(System::TObject* AParentIdentity, _di_IOTADataExplorerItem AItem, const System::UnicodeString AName) = 0 ;
	virtual void __fastcall RefreshChildNode(System::TObject* AParentIdentity, _di_IOTADataExplorerItem AItem, const System::UnicodeString AName, bool AChildren) = 0 ;
	virtual int __fastcall AddImages(Vcl::Imglist::TCustomImageList* const Images) = 0 ;
	virtual void __fastcall AddTab(const System::UnicodeString ATabCaption, TFrameClass AFrameClass, System::DelphiInterface<System::Sysutils::TProc__1<Vcl::Forms::TFrame*> > AFrameCreatedProc) = 0 ;
	virtual void __fastcall RenameTab(const System::UnicodeString AOldCaption, const System::UnicodeString ANewCaption) = 0 ;
	virtual void __fastcall RemoveTab(const System::UnicodeString ATabCaption) = 0 ;
	virtual bool __fastcall HasTab(const System::UnicodeString ATabCaption) = 0 ;
	virtual void __fastcall ActivateTab(const System::UnicodeString ATabCaption) = 0 ;
	virtual void __fastcall ObjInspectorSelect(System::Classes::TPersistent* const AObj) = 0 ;
};

typedef _di_IOTADataExplorerService IDataExplorerService _DEPRECATED_ATTRIBUTE1("Use IOTADataExplorerService") ;

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE int piClosedFolder;
extern DELPHI_PACKAGE int piOpenFolder;
extern DELPHI_PACKAGE int piConnection;
extern DELPHI_PACKAGE int piDatabase;
extern DELPHI_PACKAGE int piFields;
extern DELPHI_PACKAGE int piIndexes;
extern DELPHI_PACKAGE int piPackages;
extern DELPHI_PACKAGE int piStoredProc;
extern DELPHI_PACKAGE int piSynonyms;
extern DELPHI_PACKAGE int piTables;
extern DELPHI_PACKAGE int piViews;
extern DELPHI_PACKAGE int piNoConnection;
extern DELPHI_PACKAGE int piServerMethods;
}	/* namespace Dataexplorerapi */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DATAEXPLORERAPI)
using namespace Dataexplorerapi;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DataexplorerapiHPP
