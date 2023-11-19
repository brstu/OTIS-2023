// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DesignIntf.pas' rev: 35.00 (Windows)

#ifndef DesignintfHPP
#define DesignintfHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <System.Types.hpp>
#include <Winapi.ActiveX.hpp>
#include <System.TypInfo.hpp>
#include <DesignConst.hpp>
#include <System.IniFiles.hpp>
#include <DesignerTypes.hpp>
#include <DesignMenus.hpp>
#include <Vcl.Controls.hpp>
#include <Winapi.Messages.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Designintf
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IEventInfo;
typedef System::DelphiInterface<IEventInfo> _di_IEventInfo;
class DELPHICLASS TEventInfo;
__interface DELPHIINTERFACE IProperty;
typedef System::DelphiInterface<IProperty> _di_IProperty;
__interface DELPHIINTERFACE IPropertyKind;
typedef System::DelphiInterface<IPropertyKind> _di_IPropertyKind;
__interface DELPHIINTERFACE IPropertyControl;
typedef System::DelphiInterface<IPropertyControl> _di_IPropertyControl;
__interface DELPHIINTERFACE IWideProperty;
typedef System::DelphiInterface<IWideProperty> _di_IWideProperty;
__interface DELPHIINTERFACE IWideProperty10;
typedef System::DelphiInterface<IWideProperty10> _di_IWideProperty10;
__interface DELPHIINTERFACE IProperty70;
typedef System::DelphiInterface<IProperty70> _di_IProperty70;
__interface DELPHIINTERFACE IProperty80;
typedef System::DelphiInterface<IProperty80> _di_IProperty80;
__interface DELPHIINTERFACE IProperty160;
typedef System::DelphiInterface<IProperty160> _di_IProperty160;
__interface DELPHIINTERFACE IPropertyDescription;
typedef System::DelphiInterface<IPropertyDescription> _di_IPropertyDescription;
__interface DELPHIINTERFACE IWidePropertyDescription;
typedef System::DelphiInterface<IWidePropertyDescription> _di_IWidePropertyDescription;
__interface DELPHIINTERFACE IPropertyHost;
typedef System::DelphiInterface<IPropertyHost> _di_IPropertyHost;
__interface DELPHIINTERFACE IPropertyHost20;
typedef System::DelphiInterface<IPropertyHost20> _di_IPropertyHost20;
__interface DELPHIINTERFACE IMethodProperty;
typedef System::DelphiInterface<IMethodProperty> _di_IMethodProperty;
__interface DELPHIINTERFACE IActivatable;
typedef System::DelphiInterface<IActivatable> _di_IActivatable;
__interface DELPHIINTERFACE IReferenceProperty;
typedef System::DelphiInterface<IReferenceProperty> _di_IReferenceProperty;
__interface DELPHIINTERFACE IShowReferenceProperty;
typedef System::DelphiInterface<IShowReferenceProperty> _di_IShowReferenceProperty;
__interface DELPHIINTERFACE IClass;
typedef System::DelphiInterface<IClass> _di_IClass;
__interface DELPHIINTERFACE IDesignObject;
typedef System::DelphiInterface<IDesignObject> _di_IDesignObject;
__interface DELPHIINTERFACE IDesignPersistent;
typedef System::DelphiInterface<IDesignPersistent> _di_IDesignPersistent;
__interface DELPHIINTERFACE IDesignerSelections;
typedef System::DelphiInterface<IDesignerSelections> _di_IDesignerSelections;
__interface DELPHIINTERFACE IDesigner60;
typedef System::DelphiInterface<IDesigner60> _di_IDesigner60;
__interface DELPHIINTERFACE IDesigner70;
typedef System::DelphiInterface<IDesigner70> _di_IDesigner70;
__interface DELPHIINTERFACE IDesigner80;
typedef System::DelphiInterface<IDesigner80> _di_IDesigner80;
__interface DELPHIINTERFACE IDesigner100;
typedef System::DelphiInterface<IDesigner100> _di_IDesigner100;
__interface DELPHIINTERFACE IDesigner170;
typedef System::DelphiInterface<IDesigner170> _di_IDesigner170;
__interface DELPHIINTERFACE IDesigner200;
typedef System::DelphiInterface<IDesigner200> _di_IDesigner200;
__interface DELPHIINTERFACE IDesigner;
typedef System::DelphiInterface<IDesigner> _di_IDesigner;
__interface DELPHIINTERFACE IDesignNotification;
typedef System::DelphiInterface<IDesignNotification> _di_IDesignNotification;
__interface DELPHIINTERFACE IDesignNotificationEx;
typedef System::DelphiInterface<IDesignNotificationEx> _di_IDesignNotificationEx;
__interface DELPHIINTERFACE IDesignNotificationViews;
typedef System::DelphiInterface<IDesignNotificationViews> _di_IDesignNotificationViews;
__interface DELPHIINTERFACE IDesignWindow;
typedef System::DelphiInterface<IDesignWindow> _di_IDesignWindow;
class DELPHICLASS TBasePropertyEditor;
__interface DELPHIINTERFACE IComponentEditor;
typedef System::DelphiInterface<IComponentEditor> _di_IComponentEditor;
class DELPHICLASS TBaseComponentEditor;
__interface DELPHIINTERFACE IDefaultEditor;
typedef System::DelphiInterface<IDefaultEditor> _di_IDefaultEditor;
__interface DELPHIINTERFACE ISelectionEditor;
typedef System::DelphiInterface<ISelectionEditor> _di_ISelectionEditor;
__interface DELPHIINTERFACE ISelectionPropertyFilter;
typedef System::DelphiInterface<ISelectionPropertyFilter> _di_ISelectionPropertyFilter;
class DELPHICLASS TBaseSelectionEditor;
__interface DELPHIINTERFACE ISelectionEditorList;
typedef System::DelphiInterface<ISelectionEditorList> _di_ISelectionEditorList;
__interface DELPHIINTERFACE ICustomModule;
typedef System::DelphiInterface<ICustomModule> _di_ICustomModule;
class DELPHICLASS TBaseCustomModule;
__interface DELPHIINTERFACE IHostForm;
typedef System::DelphiInterface<IHostForm> _di_IHostForm;
class DELPHICLASS TDesignerSelections;
__interface DELPHIINTERFACE IImplementation;
typedef System::DelphiInterface<IImplementation> _di_IImplementation;
__interface DELPHIINTERFACE IEditHandler;
typedef System::DelphiInterface<IEditHandler> _di_IEditHandler;
class DELPHICLASS TDragTarget;
class DELPHICLASS TClassWrapper;
__interface DELPHIINTERFACE IComponentGuidelines;
typedef System::DelphiInterface<IComponentGuidelines> _di_IComponentGuidelines;
class DELPHICLASS TBaseComponentGuidelines;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TPropKind : unsigned char { pkProperties, pkEvents };

__interface  INTERFACE_UUID("{C3A5B0FD-37C6-486B-AD29-642C51928787}") IEventInfo  : public System::IInterface 
{
	virtual System::Typinfo::TMethodKind __fastcall GetMethodKind() = 0 ;
	virtual int __fastcall GetParamCount() = 0 ;
	virtual System::UnicodeString __fastcall GetParamName(int Index) = 0 ;
	virtual System::UnicodeString __fastcall GetParamType(int Index) = 0 ;
	virtual System::Typinfo::TParamFlags __fastcall GetParamFlags(int Index) = 0 ;
	virtual System::UnicodeString __fastcall GetResultType() = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEventInfo : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
	
private:
	typedef System::DynamicArray<System::UnicodeString> _TEventInfo__1;
	
	typedef System::DynamicArray<System::UnicodeString> _TEventInfo__2;
	
	typedef System::DynamicArray<System::Typinfo::TParamFlags> _TEventInfo__3;
	
	
private:
	System::Typinfo::TMethodKind FMethodKind;
	_TEventInfo__1 FParamNames;
	_TEventInfo__2 FParamTypes;
	_TEventInfo__3 FParamFlags;
	System::UnicodeString FResultType;
	void __fastcall Initialize(System::Typinfo::PTypeData ATypeData);
	
protected:
	System::Typinfo::TMethodKind __fastcall GetMethodKind();
	int __fastcall GetParamCount();
	System::UnicodeString __fastcall GetParamName(int Index);
	System::UnicodeString __fastcall GetParamType(int Index);
	System::Typinfo::TParamFlags __fastcall GetParamFlags(int Index);
	System::UnicodeString __fastcall GetResultType();
	
public:
	__fastcall TEventInfo(System::Typinfo::PPropInfo APropInfo)/* overload */;
	__fastcall TEventInfo(System::Typinfo::PTypeData ATypeData)/* overload */;
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TEventInfo() { }
	
private:
	void *__IEventInfo;	// IEventInfo 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {C3A5B0FD-37C6-486B-AD29-642C51928787}
	operator _di_IEventInfo()
	{
		_di_IEventInfo intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IEventInfo*(void) { return (IEventInfo*)&__IEventInfo; }
	#endif
	
};

#pragma pack(pop)

typedef void __fastcall (__closure *TGetPropProc)(const _di_IProperty Prop);

enum DECLSPEC_DENUM TPropertyAttribute : unsigned char { paValueList, paSubProperties, paDialog, paMultiSelect, paAutoUpdate, paSortList, paReadOnly, paRevertable, paFullWidthName, paVolatileSubProperties, paVCL, paNotNestable, paDisplayReadOnly, paCustomDropDown, paValueEditable };

typedef System::Set<TPropertyAttribute, TPropertyAttribute::paValueList, TPropertyAttribute::paValueEditable> TPropertyAttributes;

__interface  INTERFACE_UUID("{7ED7BF29-E349-11D3-AB4A-00C04FB17A72}") IProperty  : public System::IInterface 
{
	virtual void __fastcall Activate() = 0 ;
	virtual bool __fastcall AllEqual() = 0 ;
	virtual bool __fastcall AutoFill() = 0 ;
	virtual void __fastcall Edit() = 0 /* overload */;
	virtual bool __fastcall HasInstance(System::Classes::TPersistent* Instance) = 0 ;
	virtual TPropertyAttributes __fastcall GetAttributes() = 0 ;
	virtual int __fastcall GetEditLimit() = 0 ;
	virtual bool __fastcall GetEditValue(/* out */ System::UnicodeString &Value) = 0 ;
	virtual System::UnicodeString __fastcall GetName() = 0 ;
	virtual void __fastcall GetProperties(TGetPropProc Proc) = 0 ;
	virtual System::Typinfo::PPropInfo __fastcall GetPropInfo() = 0 ;
	virtual System::Typinfo::PTypeInfo __fastcall GetPropType() = 0 ;
	virtual System::UnicodeString __fastcall GetValue() = 0 ;
	virtual void __fastcall GetValues(System::Classes::TGetStrProc Proc) = 0 ;
	virtual void __fastcall Revert() = 0 ;
	virtual void __fastcall SetValue(const System::UnicodeString Value) = 0 ;
	virtual bool __fastcall ValueAvailable() = 0 ;
};

__interface  INTERFACE_UUID("{DC38E982-F69D-40BB-B99D-F14EE83CD448}") IPropertyKind  : public System::IInterface 
{
	virtual System::TTypeKind __fastcall GetKind() = 0 ;
	__property System::TTypeKind Kind = {read=GetKind};
};

__interface  INTERFACE_UUID("{7FEC88A8-CC8D-43EF-AA14-AFCAD7E3418A}") IPropertyControl  : public System::IInterface 
{
	virtual void __fastcall ClearCache() = 0 ;
};

__interface  INTERFACE_UUID("{ACBF6140-1378-4AAC-94D6-D4660DFE7053}") IWideProperty  : public System::IInterface 
{
	virtual System::WideString __fastcall GetValue() = 0 ;
	virtual bool __fastcall GetEditValue(/* out */ System::WideString &Value) = 0 ;
	virtual void __fastcall SetValue(const System::WideString Value) = 0 ;
};

typedef void __fastcall (__closure *TGetWideStrProc)(const System::WideString S);

__interface  INTERFACE_UUID("{EB335848-4AD4-4423-8598-37FFDF5984D5}") IWideProperty10  : public System::IInterface 
{
	virtual System::WideString __fastcall GetName() = 0 ;
	virtual void __fastcall GetValues(TGetWideStrProc Proc) = 0 ;
};

__interface  INTERFACE_UUID("{57B97F18-B47F-4635-94CB-3344783E7069}") IProperty70  : public IProperty 
{
	virtual bool __fastcall GetIsDefault() = 0 ;
	__property bool IsDefault = {read=GetIsDefault};
};

__interface  INTERFACE_UUID("{A02577DB-D5E5-4374-A8AB-4B2F83177878}") IProperty80  : public IProperty 
{
	HIDESBASE virtual void __fastcall Edit(const _di_IPropertyHost Host, bool DblClick) = 0 ;
};

__interface  INTERFACE_UUID("{265F5E34-8999-4B9B-AC30-A2AED60885DF}") IProperty160  : public IProperty 
{
	virtual void __fastcall SetPropertyPath(const System::UnicodeString Value) = 0 ;
};

__interface  INTERFACE_UUID("{FEAA70CD-F6BC-44D7-8D1D-ED9CB9146075}") IPropertyDescription  : public System::IInterface 
{
	virtual System::UnicodeString __fastcall GetDescription() = 0 ;
};

__interface  INTERFACE_UUID("{87A17602-67E2-46B3-B78B-D53E1E123053}") IWidePropertyDescription  : public System::IInterface 
{
	virtual System::WideString __fastcall GetDescription() = 0 ;
};

__interface  INTERFACE_UUID("{093B302C-2AFC-4891-9B17-FAB69678C956}") IPropertyHost  : public System::IInterface 
{
	virtual void __fastcall DropDownControl(System::Classes::TPersistent* Control) = 0 ;
	virtual void __fastcall CloseDropDown() = 0 ;
};

__interface  INTERFACE_UUID("{46000055-6FD3-4C80-8E4C-8B28D0CD0593}") IPropertyHost20  : public System::IInterface 
{
	virtual int __fastcall GetDropDownWidth() = 0 ;
};

__interface  INTERFACE_UUID("{392CBF4A-F078-47E9-B731-0E0B7F1F4998}") IMethodProperty  : public System::IInterface 
{
	
};

__interface  INTERFACE_UUID("{F00AA4BD-3459-43E9-ACB2-97DBD1663AFF}") IActivatable  : public System::IInterface 
{
	virtual void __fastcall Activate() = 0 ;
};

__interface  INTERFACE_UUID("{C7EE2B1E-3F89-40AD-9250-D2667BA3D46B}") IReferenceProperty  : public System::IInterface 
{
	virtual System::Classes::TComponent* __fastcall GetComponentReference() = 0 ;
};

__interface  INTERFACE_UUID("{ECD009DA-C711-4C7F-912B-3AB5A6A4B290}") IShowReferenceProperty  : public System::IInterface 
{
	virtual bool __fastcall ShowReferenceProperty() = 0 ;
};

__interface  INTERFACE_UUID("{94CD802C-3E83-4C38-AB36-1CD9DB196519}") IClass  : public System::IInterface 
{
	virtual bool __fastcall ClassNameIs(const System::UnicodeString AClassName) = 0 ;
	virtual System::UnicodeString __fastcall GetClassName() = 0 ;
	virtual System::UnicodeString __fastcall GetUnitName() = 0 ;
	virtual _di_IClass __fastcall GetClassParent() = 0 ;
	__property System::UnicodeString ClassName = {read=GetClassName};
	__property _di_IClass ClassParent = {read=GetClassParent};
	__property System::UnicodeString UnitName = {read=GetUnitName};
};

__interface  INTERFACE_UUID("{B1648433-D671-4D5E-B49F-26740D4EB360}") IDesignObject  : public System::IInterface 
{
	virtual bool __fastcall Equals(System::TObject* Obj) = 0 /* overload */;
	virtual bool __fastcall Equals(const _di_IDesignObject ADesignObject) = 0 /* overload */;
	virtual _di_IClass __fastcall GetClassType() = 0 ;
	virtual System::UnicodeString __fastcall GetClassName() = 0 ;
	virtual int __fastcall GetComponentIndex() = 0 ;
	virtual System::UnicodeString __fastcall GetComponentName() = 0 ;
	virtual bool __fastcall GetIsComponent() = 0 ;
	virtual System::UnicodeString __fastcall GetNamePath() = 0 ;
	__property _di_IClass ClassType = {read=GetClassType};
	__property System::UnicodeString ClassName = {read=GetClassName};
	__property int ComponentIndex = {read=GetComponentIndex};
	__property System::UnicodeString ComponentName = {read=GetComponentName};
	__property bool IsComponent = {read=GetIsComponent};
	__property System::UnicodeString NamePath = {read=GetNamePath};
};

__interface  INTERFACE_UUID("{8858E03D-5B6A-427A-BFFC-4A9B8198FB13}") IDesignPersistent  : public IDesignObject 
{
	virtual System::Classes::TPersistent* __fastcall GetPersistent() = 0 ;
	__property System::Classes::TPersistent* Persistent = {read=GetPersistent};
};

__interface  INTERFACE_UUID("{7ED7BF30-E349-11D3-AB4A-00C04FB17A72}") IDesignerSelections  : public System::IInterface 
{
	
public:
	System::Classes::TPersistent* operator[](int Index) { return this->Items[Index]; }
	virtual int __fastcall Add(System::Classes::TPersistent* const Item) = 0 ;
	virtual bool __fastcall Equals(const _di_IDesignerSelections List) = 0 ;
	virtual System::Classes::TPersistent* __fastcall Get(int Index) = 0 ;
	virtual _di_IDesignObject __fastcall GetDesignObject(int Index) = 0 ;
	virtual int __fastcall GetCount() = 0 ;
	__property int Count = {read=GetCount};
	__property System::Classes::TPersistent* Items[int Index] = {read=Get/*, default*/};
	__property _di_IDesignObject DesignObjects[int Index] = {read=GetDesignObject};
};

__interface  INTERFACE_UUID("{A29C6480-D4AF-11D3-BA96-0080C78ADCDB}") IDesigner60  : public System::IInterface 
{
	virtual void __fastcall Activate() = 0 ;
	virtual void __fastcall Modified() = 0 ;
	virtual System::TMethod __fastcall CreateMethod(const System::UnicodeString Name, System::Typinfo::PTypeData TypeData) = 0 /* overload */;
	virtual System::UnicodeString __fastcall GetMethodName(const System::TMethod &Method) = 0 ;
	virtual void __fastcall GetMethods(System::Typinfo::PTypeData TypeData, System::Classes::TGetStrProc Proc) = 0 /* overload */;
	virtual System::UnicodeString __fastcall GetPathAndBaseExeName() = 0 ;
	virtual System::UnicodeString __fastcall GetPrivateDirectory() = 0 ;
	virtual System::UnicodeString __fastcall GetBaseRegKey() = 0 ;
	virtual System::Inifiles::TCustomIniFile* __fastcall GetIDEOptions() = 0 ;
	virtual void __fastcall GetSelections(const _di_IDesignerSelections List) = 0 ;
	virtual bool __fastcall MethodExists(const System::UnicodeString Name) = 0 ;
	virtual void __fastcall RenameMethod(const System::UnicodeString CurName, const System::UnicodeString NewName) = 0 ;
	virtual void __fastcall SelectComponent(System::Classes::TPersistent* Instance) = 0 /* overload */;
	virtual void __fastcall SetSelections(const _di_IDesignerSelections List) = 0 ;
	virtual void __fastcall ShowMethod(const System::UnicodeString Name) = 0 ;
	virtual void __fastcall GetComponentNames(System::Typinfo::PTypeData TypeData, System::Classes::TGetStrProc Proc) = 0 ;
	virtual System::Classes::TComponent* __fastcall GetComponent(const System::UnicodeString Name) = 0 ;
	virtual System::UnicodeString __fastcall GetComponentName(System::Classes::TComponent* Component) = 0 ;
	virtual System::Classes::TPersistent* __fastcall GetObject(const System::UnicodeString Name) = 0 ;
	virtual System::UnicodeString __fastcall GetObjectName(System::Classes::TPersistent* Instance) = 0 ;
	virtual void __fastcall GetObjectNames(System::Typinfo::PTypeData TypeData, System::Classes::TGetStrProc Proc) = 0 ;
	virtual bool __fastcall MethodFromAncestor(const System::TMethod &Method) = 0 ;
	virtual System::Classes::TComponent* __fastcall CreateComponent(System::Classes::TComponentClass ComponentClass, System::Classes::TComponent* Parent, int Left, int Top, int Width, int Height) = 0 ;
	virtual System::Classes::TComponent* __fastcall CreateCurrentComponent(System::Classes::TComponent* Parent, const System::Types::TRect &Rect) = 0 ;
	virtual bool __fastcall IsComponentLinkable(System::Classes::TComponent* Component) = 0 ;
	virtual bool __fastcall IsComponentHidden(System::Classes::TComponent* Component) = 0 ;
	virtual void __fastcall MakeComponentLinkable(System::Classes::TComponent* Component) = 0 ;
	virtual void __fastcall Revert(System::Classes::TPersistent* Instance, System::Typinfo::PPropInfo PropInfo) = 0 ;
	virtual bool __fastcall GetIsDormant() = 0 ;
	virtual void __fastcall GetProjectModules(System::Classes::TGetModuleProc Proc) = 0 ;
	virtual _di_IDesigner __fastcall GetAncestorDesigner() = 0 ;
	virtual bool __fastcall IsSourceReadOnly() = 0 ;
	virtual System::Types::TPoint __fastcall GetScrollRanges(const System::Types::TPoint &ScrollPosition) = 0 ;
	virtual void __fastcall Edit(System::Classes::TComponent* const Component) = 0 ;
	virtual void __fastcall ChainCall(const System::UnicodeString MethodName, const System::UnicodeString InstanceName, const System::UnicodeString InstanceMethod, System::Typinfo::PTypeData TypeData) = 0 /* overload */;
	virtual void __fastcall ChainCall(const System::UnicodeString MethodName, const System::UnicodeString InstanceName, const System::UnicodeString InstanceMethod, const _di_IEventInfo AEventInfo) = 0 /* overload */;
	virtual void __fastcall CopySelection() = 0 ;
	virtual void __fastcall CutSelection() = 0 ;
	virtual bool __fastcall CanPaste() = 0 ;
	virtual void __fastcall PasteSelection() = 0 ;
	virtual void __fastcall DeleteSelection(bool ADoAll = false) = 0 ;
	virtual void __fastcall ClearSelection() = 0 ;
	virtual void __fastcall NoSelection() = 0 ;
	virtual void __fastcall ModuleFileNames(System::UnicodeString &ImplFileName, System::UnicodeString &IntfFileName, System::UnicodeString &FormFileName) = 0 ;
	virtual System::UnicodeString __fastcall GetRootClassName() = 0 ;
	virtual System::UnicodeString __fastcall UniqueName(const System::UnicodeString BaseName) = 0 ;
	virtual System::Classes::TComponent* __fastcall GetRoot() = 0 ;
	virtual System::Classes::TShiftState __fastcall GetShiftState() = 0 ;
	virtual void __fastcall ModalEdit(System::WideChar EditKey, const _di_IActivatable ReturnWindow) = 0 ;
	virtual void __fastcall SelectItemName(const System::UnicodeString PropertyName) = 0 ;
	virtual void __fastcall Resurrect() = 0 ;
	__property System::Classes::TComponent* Root = {read=GetRoot};
	__property bool IsDormant = {read=GetIsDormant};
	__property _di_IDesigner AncestorDesigner = {read=GetAncestorDesigner};
};

__interface  INTERFACE_UUID("{2F704CE2-7614-4AAF-B177-357D00D9634B}") IDesigner70  : public IDesigner60 
{
	virtual System::Classes::TPersistentClass __fastcall GetActiveClassGroup() = 0 ;
	virtual System::Classes::TComponent* __fastcall FindRootAncestor(const System::UnicodeString AClassName) = 0 ;
	__property System::Classes::TPersistentClass ActiveClassGroup = {read=GetActiveClassGroup};
};

__interface  INTERFACE_UUID("{BCE34322-B22A-4494-BEA5-5B2B9754DE36}") IDesigner80  : public IDesigner70 
{
	HIDESBASE virtual System::TMethod __fastcall CreateMethod(const System::UnicodeString Name, const _di_IEventInfo AEventInfo) = 0 /* overload */;
	HIDESBASE virtual void __fastcall GetMethods(const _di_IEventInfo AEventInfo, System::Classes::TGetStrProc Proc) = 0 /* overload */;
	HIDESBASE virtual void __fastcall SelectComponent(const _di_IDesignObject ADesignObject) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{55501C77-FE8D-4844-A407-A7F90F7D5303}") IDesigner100  : public IDesigner80 
{
	virtual System::UnicodeString __fastcall GetDesignerExtension() = 0 ;
	__property System::UnicodeString DesignerExtention = {read=GetDesignerExtension};
};

__interface  INTERFACE_UUID("{17ACD4A3-ED00-483E-8480-B5FBD4589440}") IDesigner170  : public IDesigner100 
{
	virtual System::UnicodeString __fastcall GetAppDataDirectory(bool Local = false) = 0 ;
};

__interface  INTERFACE_UUID("{4B854DD8-2C2C-455A-B1DC-08AAED7370A6}") IDesigner200  : public IDesigner170 
{
	virtual System::Classes::TComponent* __fastcall GetCurrentParent() = 0 ;
	__property System::Classes::TComponent* CurrentParent = {read=GetCurrentParent};
};

__interface  INTERFACE_UUID("{93F3FCBC-968E-45A9-9641-609E8FB3AC60}") IDesigner  : public IDesigner200 
{
	virtual System::Classes::TComponent* __fastcall CreateChild(System::Classes::TComponentClass ComponentClass, System::Classes::TComponent* Parent) = 0 ;
};

typedef void __fastcall (__closure *TGetDesignerEvent)(System::TObject* Sender, /* out */ _di_IDesigner &ADesigner);

__interface  INTERFACE_UUID("{E8C9F739-5601-4ADD-9D95-594132D4CEFD}") IDesignNotification  : public System::IInterface 
{
	virtual void __fastcall ItemDeleted(const _di_IDesigner ADesigner, System::Classes::TPersistent* AItem) = 0 ;
	virtual void __fastcall ItemInserted(const _di_IDesigner ADesigner, System::Classes::TPersistent* AItem) = 0 ;
	virtual void __fastcall ItemsModified(const _di_IDesigner ADesigner) = 0 ;
	virtual void __fastcall SelectionChanged(const _di_IDesigner ADesigner, const _di_IDesignerSelections ASelection) = 0 ;
	virtual void __fastcall DesignerOpened(const _di_IDesigner ADesigner, bool AResurrecting) = 0 ;
	virtual void __fastcall DesignerClosed(const _di_IDesigner ADesigner, bool AGoingDormant) = 0 ;
};

__interface  INTERFACE_UUID("{41DDF415-B9ED-48AE-8291-D49429E3CDF7}") IDesignNotificationEx  : public IDesignNotification 
{
	virtual void __fastcall DescendantUpdated(const _di_IDesigner ADesigner) = 0 ;
};

__interface  INTERFACE_UUID("{92B08B96-E8CF-4AE9-8D02-E1BEBF7DB662}") IDesignNotificationViews  : public IDesignNotification 
{
	virtual void __fastcall ViewAdded(const _di_IDesigner ADesigner, const System::UnicodeString ViewName) = 0 ;
	virtual void __fastcall ViewRemoved(const _di_IDesigner ADesigner, const System::UnicodeString ViewName) = 0 ;
};

__interface  INTERFACE_UUID("{7ED7BF2E-E349-11D3-AB4A-00C04FB17A72}") IDesignWindow  : public IDesignNotification 
{
	virtual void __fastcall WindowHide() = 0 ;
	virtual void __fastcall WindowShow() = 0 ;
};

typedef void __fastcall (*TRegisterDesignNotification)(const _di_IDesignNotification DesignNotification);

#pragma pack(push,4)
class PASCALIMPLEMENTATION TBasePropertyEditor : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
protected:
	virtual void __fastcall Initialize() = 0 ;
	virtual void __fastcall SetPropEntry(int Index, System::Classes::TPersistent* AInstance, System::Typinfo::PPropInfo APropInfo) = 0 ;
	
public:
	__fastcall virtual TBasePropertyEditor(const _di_IDesigner ADesigner, int APropCount);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TBasePropertyEditor() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TPropertyEditorClass;

typedef void __fastcall (*TRegisterPropertyEditorProc)(System::Typinfo::PTypeInfo PropertyType, System::TClass ComponentClass, const System::UnicodeString PropertyName, TPropertyEditorClass EditorClass);

typedef bool __fastcall (__closure *TPropertyEditorFilterFunc)(const _di_IProperty ATestEditor);

typedef void __fastcall (*TSetPropertyEditorGroupProc)(TPropertyEditorClass EditorClass, System::Classes::TPersistentClass GroupClass);

typedef void __fastcall (*TRegisterPropertyInCategoryProc)(const System::UnicodeString CategoryName, System::TClass ComponentClass, System::Typinfo::PTypeInfo PropertyType, const System::UnicodeString PropertyName);

typedef TPropertyEditorClass __fastcall (*TPropertyMapperFunc)(System::Classes::TPersistent* Obj, System::Typinfo::PPropInfo PropInfo);

typedef void __fastcall (*TRegisterPropertyMapperProc)(TPropertyMapperFunc Mapper);

__interface  INTERFACE_UUID("{ECACBA34-DCDF-4BE2-A645-E4404BC06106}") IComponentEditor  : public System::IInterface 
{
	virtual void __fastcall Edit() = 0 ;
	virtual void __fastcall ExecuteVerb(int Index) = 0 ;
	virtual System::UnicodeString __fastcall GetVerb(int Index) = 0 ;
	virtual int __fastcall GetVerbCount() = 0 ;
	virtual void __fastcall PrepareItem(int Index, const Designmenus::_di_IMenuItem AItem) = 0 ;
	virtual void __fastcall Copy() = 0 ;
	virtual bool __fastcall IsInInlined() = 0 ;
	virtual System::Classes::TComponent* __fastcall GetComponent() = 0 ;
	virtual _di_IDesigner __fastcall GetDesigner() = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TBaseComponentEditor : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
public:
	__fastcall virtual TBaseComponentEditor(System::Classes::TComponent* AComponent, _di_IDesigner ADesigner);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TBaseComponentEditor() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TComponentEditorClass;

__interface  INTERFACE_UUID("{5484FAE1-5C60-11D1-9FB6-0020AF3D82DA}") IDefaultEditor  : public IComponentEditor 
{
	
};

typedef void __fastcall (*TRegisterComponentEditorProc)(System::Classes::TComponentClass ComponentClass, TComponentEditorClass ComponentEditor);

__interface  INTERFACE_UUID("{B91F7A78-BB2C-45D9-957A-8A45A2D30435}") ISelectionEditor  : public System::IInterface 
{
	virtual void __fastcall ExecuteVerb(int Index, const _di_IDesignerSelections List) = 0 ;
	virtual System::UnicodeString __fastcall GetVerb(int Index) = 0 ;
	virtual int __fastcall GetVerbCount() = 0 ;
	virtual void __fastcall PrepareItem(int Index, const Designmenus::_di_IMenuItem AItem) = 0 ;
	virtual void __fastcall RequiresUnits(System::Classes::TGetStrProc Proc) = 0 ;
};

__interface  INTERFACE_UUID("{0B424EF6-2F2F-41AB-A082-831292FA91A5}") ISelectionPropertyFilter  : public System::IInterface 
{
	virtual void __fastcall FilterProperties(const _di_IDesignerSelections ASelection, const System::Classes::_di_IInterfaceList ASelectionProperties) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TBaseSelectionEditor : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
public:
	__fastcall virtual TBaseSelectionEditor(const _di_IDesigner ADesigner);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TBaseSelectionEditor() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TSelectionEditorClass;

__interface  INTERFACE_UUID("{C1360368-0099-4A7C-A4A8-7650503BA0C6}") ISelectionEditorList  : public System::IInterface 
{
	
public:
	_di_ISelectionEditor operator[](int Index) { return this->Items[Index]; }
	virtual _di_ISelectionEditor __fastcall Get(int Index) = 0 ;
	virtual int __fastcall GetCount() = 0 ;
	__property int Count = {read=GetCount};
	__property _di_ISelectionEditor Items[int Index] = {read=Get/*, default*/};
};

typedef void __fastcall (*TRegisterSelectionEditorProc)(System::TClass AClass, TSelectionEditorClass AEditor);

enum DECLSPEC_DENUM TCustomModuleAttribute : unsigned char { cmaVirtualSize, cmaMultiView };

typedef System::Set<TCustomModuleAttribute, TCustomModuleAttribute::cmaVirtualSize, TCustomModuleAttribute::cmaMultiView> TCustomModuleAttributes;

__interface  INTERFACE_UUID("{95DA4A2B-D800-4CBB-B0B8-85AB7D3CFADA}") ICustomModule  : public System::IInterface 
{
	virtual TCustomModuleAttributes __fastcall GetAttributes() = 0 ;
	virtual void __fastcall ExecuteVerb(int Index) = 0 ;
	virtual System::UnicodeString __fastcall GetVerb(int Index) = 0 ;
	virtual int __fastcall GetVerbCount() = 0 ;
	virtual void __fastcall PrepareItem(int Index, const Designmenus::_di_IMenuItem AItem) = 0 ;
	virtual void __fastcall Saving() = 0 ;
	virtual void __fastcall ValidateComponent(System::Classes::TComponent* Component) = 0 ;
	virtual bool __fastcall ValidateComponentClass(System::Classes::TComponentClass ComponentClass) = 0 ;
	virtual bool __fastcall Nestable() = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TBaseCustomModule : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
public:
	__fastcall virtual TBaseCustomModule(System::Classes::TComponent* ARoot, const _di_IDesigner Designer);
	__classmethod virtual System::Classes::TComponentClass __fastcall DesignClass();
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TBaseCustomModule() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TCustomModuleClass;

typedef void __fastcall (*TRegisterCustomModuleProc)(int Group, System::Classes::TComponentClass ComponentBaseClass, TCustomModuleClass CustomModuleClass);

__interface  INTERFACE_UUID("{24E50CA3-CD64-42B6-B639-600209E723D7}") IHostForm  : public System::IInterface 
{
	virtual void __fastcall BringToFront() = 0 ;
	virtual void __fastcall CheckPosChanged() = 0 ;
	virtual void __fastcall DeinitializeDesigner(System::Classes::TComponent* ARoot) = 0 ;
	virtual bool __fastcall GetCanPrint() = 0 ;
	virtual System::UnicodeString __fastcall GetCaption() = 0 ;
	virtual Designertypes::TDesignerState __fastcall GetDesignerState() = 0 ;
	virtual System::Classes::TPersistent* __fastcall GetFont() = 0 ;
	virtual System::Classes::TComponent* __fastcall GetForm() = 0 ;
	virtual System::TObject* __fastcall GetFormImage() = 0 ;
	virtual int __fastcall GetScrollPos(bool Horiz) = 0 ;
	virtual bool __fastcall GetVisible() = 0 ;
	virtual Designertypes::TShowState __fastcall GetWindowState() = 0 ;
	virtual void __fastcall HideWindow() = 0 ;
	virtual bool __fastcall IsMenuKey(Winapi::Messages::TWMKey &Message) = 0 ;
	virtual void __fastcall SetCaption(const System::UnicodeString ACaption) = 0 ;
	virtual void __fastcall SetDesigner(const System::_di_IInterface ADesigner) = 0 ;
	virtual void __fastcall SetDesigning(bool DesignMode) = 0 ;
	virtual void __fastcall Show() = 0 ;
	virtual void __fastcall ShowWindow(Designertypes::TShowState AShowState) = 0 ;
	virtual void __fastcall SetFormDefaults(System::Classes::TComponent* ARoot, const System::UnicodeString ARootName, int X, int Y, bool Scale) = 0 ;
	virtual void __fastcall Unmodify() = 0 ;
	__property System::UnicodeString Caption = {read=GetCaption, write=SetCaption};
	__property bool Visible = {read=GetVisible};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDesignerSelections : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
public:
	System::Classes::TPersistent* operator[](int Index) { return this->Items[Index]; }
	
private:
	System::Classes::TList* FList;
	
protected:
	int __fastcall Add(System::Classes::TPersistent* const Item);
	HIDESBASE bool __fastcall Equals(const _di_IDesignerSelections List);
	System::Classes::TPersistent* __fastcall Get(int Index);
	_di_IDesignObject __fastcall GetDesignObject(int Index);
	int __fastcall GetCount();
	__property int Count = {read=GetCount, nodefault};
	__property System::Classes::TPersistent* Items[int Index] = {read=Get/*, default*/};
	
public:
	__fastcall virtual TDesignerSelections();
	__fastcall TDesignerSelections(const _di_IDesignerSelections Selections);
	__fastcall virtual ~TDesignerSelections();
private:
	void *__IDesignerSelections;	// IDesignerSelections 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {7ED7BF30-E349-11D3-AB4A-00C04FB17A72}
	operator _di_IDesignerSelections()
	{
		_di_IDesignerSelections intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IDesignerSelections*(void) { return (IDesignerSelections*)&__IDesignerSelections; }
	#endif
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TEditAction : unsigned char { eaUndo, eaRedo, eaCut, eaCopy, eaPaste, eaDelete, eaSelectAll, eaPrint, eaElide };

enum DECLSPEC_DENUM TEditStates : unsigned char { esCanUndo, esCanRedo, esCanCut, esCanCopy, esCanPaste, esCanDelete, esCanEditOle, esCanPrint, esCanSelectAll, esCanCreateTemplate, esCanElide };

typedef System::Set<TEditStates, TEditStates::esCanUndo, TEditStates::esCanElide> TEditState;

__interface  INTERFACE_UUID("{F9D448F2-50BC-11D1-9FB5-0020AF3D82DA}") IImplementation  : public System::IInterface 
{
	virtual System::TObject* __fastcall GetInstance() = 0 ;
};

__interface  INTERFACE_UUID("{7ED7BF2D-E349-11D3-AB4A-00C04FB17A72}") IEditHandler  : public System::IInterface 
{
	virtual bool __fastcall EditAction(TEditAction Action) = 0 ;
	virtual TEditState __fastcall GetEditState() = 0 ;
};

typedef _di_IEditHandler IDesignEditQuery;

enum DECLSPEC_DENUM TDemandLoadState : unsigned char { dlDefault, dlDisable, dlEnable };

typedef void __fastcall (*TForceDemandLoadStateProc)(TDemandLoadState DemandLoadState);

typedef void __fastcall (*TEnableDemandLoadReportProc)(bool Detailed);

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDragTarget : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	_di_IDesigner FDesigner;
	
public:
	__fastcall virtual TDragTarget(const _di_IDesigner ADesigner);
	virtual bool __fastcall DragOver(System::TObject* Target, System::TObject* Source, int X, int Y, System::Uitypes::TDragState State) = 0 ;
	virtual void __fastcall DragDrop(System::TObject* Target, System::TObject* Source, int X, int Y) = 0 ;
	__property _di_IDesigner Designer = {read=FDesigner};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDragTarget() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TDragTargetClass;

typedef void __fastcall (*TRegisterDragTargetProc)(const System::UnicodeString SourceName, TDragTargetClass TargetClass);

typedef void __fastcall (*TRegisterDesignDragObject)(Vcl::Controls::TDragObjectClass DragObjectClass);

typedef void __fastcall (*TRegisterIDropTarget)(const _di_IDropTarget ADropTarget);

#pragma pack(push,4)
class PASCALIMPLEMENTATION TClassWrapper : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	System::TClass FClass;
	
protected:
	HIDESBASE bool __fastcall ClassNameIs(const System::UnicodeString AClassName);
	System::UnicodeString __fastcall GetClassName();
	_di_IClass __fastcall GetClassParent();
	System::UnicodeString __fastcall GetUnitName();
	
public:
	__fastcall TClassWrapper(System::TClass AClass);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TClassWrapper() { }
	
private:
	void *__IClass;	// IClass 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {94CD802C-3E83-4C38-AB36-1CD9DB196519}
	operator _di_IClass()
	{
		_di_IClass intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IClass*(void) { return (IClass*)&__IClass; }
	#endif
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TDesignerGuideType : unsigned char { gtAlignLeft, gtAlignTop, gtAlignRight, gtAlignBottom, gtMarginLeft, gtMarginTop, gtMarginRight, gtMarginBottom, gtPaddingLeft, gtPaddingTop, gtPaddingRight, gtPaddingBottom, gtBaseline };

__interface  INTERFACE_UUID("{237413D7-F6B8-4B8D-B581-3CDC320CE854}") IComponentGuidelines  : public System::IInterface 
{
	virtual int __fastcall GetCount() = 0 ;
	virtual TDesignerGuideType __fastcall GetDesignerGuideType(int Index) = 0 ;
	virtual int __fastcall GetDesignerGuideOffset(int Index) = 0 ;
	__property int Count = {read=GetCount};
	__property TDesignerGuideType DesignerGuideTypes[int Index] = {read=GetDesignerGuideType};
	__property int DesignerGuideOffsets[int Index] = {read=GetDesignerGuideOffset};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TBaseComponentGuidelines : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	_di_IDesigner FDesigner;
	
public:
	__fastcall virtual TBaseComponentGuidelines(const _di_IDesigner ADesigner);
	virtual void __fastcall Initialize(System::Classes::TComponent* AComponent, System::Classes::TComponent* AContainer) = 0 ;
	__property _di_IDesigner Designer = {read=FDesigner};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TBaseComponentGuidelines() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TComponentGuidelinesClass;

typedef void __fastcall (*TRegisterComponentGuidelines)(System::Classes::TComponentClass AComponentClass, TComponentGuidelinesClass AComponentGuidelineClass);

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE bool GReferenceExpandable;
extern DELPHI_PACKAGE bool GShowReadOnlyProps;
extern DELPHI_PACKAGE TRegisterDesignNotification RegisterDesignNotificationProc;
extern DELPHI_PACKAGE TRegisterDesignNotification UnregisterDesignNotificationProc;
extern DELPHI_PACKAGE TRegisterPropertyEditorProc RegisterPropertyEditorProc;
extern DELPHI_PACKAGE TSetPropertyEditorGroupProc SetPropertyEditorGroupProc;
extern DELPHI_PACKAGE System::ResourceString _sAppearanceCategoryName;
#define Designintf_sAppearanceCategoryName System::LoadResourceString(&Designintf::_sAppearanceCategoryName)
extern DELPHI_PACKAGE System::ResourceString _sBehaviorCategoryName;
#define Designintf_sBehaviorCategoryName System::LoadResourceString(&Designintf::_sBehaviorCategoryName)
extern DELPHI_PACKAGE System::ResourceString _sDesignCategoryName;
#define Designintf_sDesignCategoryName System::LoadResourceString(&Designintf::_sDesignCategoryName)
extern DELPHI_PACKAGE System::ResourceString _sFocusCategoryName;
#define Designintf_sFocusCategoryName System::LoadResourceString(&Designintf::_sFocusCategoryName)
extern DELPHI_PACKAGE System::ResourceString _sWindowStyleName;
#define Designintf_sWindowStyleName System::LoadResourceString(&Designintf::_sWindowStyleName)
extern DELPHI_PACKAGE System::ResourceString _sPropertyChangeCategoryName;
#define Designintf_sPropertyChangeCategoryName System::LoadResourceString(&Designintf::_sPropertyChangeCategoryName)
extern DELPHI_PACKAGE System::ResourceString _sMouseCategoryName;
#define Designintf_sMouseCategoryName System::LoadResourceString(&Designintf::_sMouseCategoryName)
extern DELPHI_PACKAGE System::ResourceString _sKeyCategoryName;
#define Designintf_sKeyCategoryName System::LoadResourceString(&Designintf::_sKeyCategoryName)
extern DELPHI_PACKAGE System::ResourceString _sActionCategoryName;
#define Designintf_sActionCategoryName System::LoadResourceString(&Designintf::_sActionCategoryName)
extern DELPHI_PACKAGE System::ResourceString _sDataCategoryName;
#define Designintf_sDataCategoryName System::LoadResourceString(&Designintf::_sDataCategoryName)
extern DELPHI_PACKAGE System::ResourceString _sDatabaseCategoryName;
#define Designintf_sDatabaseCategoryName System::LoadResourceString(&Designintf::_sDatabaseCategoryName)
extern DELPHI_PACKAGE System::ResourceString _sDragNDropCategoryName;
#define Designintf_sDragNDropCategoryName System::LoadResourceString(&Designintf::_sDragNDropCategoryName)
extern DELPHI_PACKAGE System::ResourceString _sHelpCategoryName;
#define Designintf_sHelpCategoryName System::LoadResourceString(&Designintf::_sHelpCategoryName)
extern DELPHI_PACKAGE System::ResourceString _sLayoutCategoryName;
#define Designintf_sLayoutCategoryName System::LoadResourceString(&Designintf::_sLayoutCategoryName)
extern DELPHI_PACKAGE System::ResourceString _sLegacyCategoryName;
#define Designintf_sLegacyCategoryName System::LoadResourceString(&Designintf::_sLegacyCategoryName)
extern DELPHI_PACKAGE System::ResourceString _sLinkageCategoryName;
#define Designintf_sLinkageCategoryName System::LoadResourceString(&Designintf::_sLinkageCategoryName)
extern DELPHI_PACKAGE System::ResourceString _sLocaleCategoryName;
#define Designintf_sLocaleCategoryName System::LoadResourceString(&Designintf::_sLocaleCategoryName)
extern DELPHI_PACKAGE System::ResourceString _sLocalizableCategoryName;
#define Designintf_sLocalizableCategoryName System::LoadResourceString(&Designintf::_sLocalizableCategoryName)
extern DELPHI_PACKAGE System::ResourceString _sMiscellaneousCategoryName;
#define Designintf_sMiscellaneousCategoryName System::LoadResourceString(&Designintf::_sMiscellaneousCategoryName)
extern DELPHI_PACKAGE System::ResourceString _sVisualCategoryName;
#define Designintf_sVisualCategoryName System::LoadResourceString(&Designintf::_sVisualCategoryName)
extern DELPHI_PACKAGE System::ResourceString _sInputCategoryName;
#define Designintf_sInputCategoryName System::LoadResourceString(&Designintf::_sInputCategoryName)
extern DELPHI_PACKAGE TRegisterPropertyInCategoryProc RegisterPropertyInCategoryProc;
extern DELPHI_PACKAGE System::ResourceString _sInvalidFilter;
#define Designintf_sInvalidFilter System::LoadResourceString(&Designintf::_sInvalidFilter)
extern DELPHI_PACKAGE TRegisterPropertyMapperProc RegisterPropertyMapperProc;
extern DELPHI_PACKAGE TRegisterComponentEditorProc RegisterComponentEditorProc;
extern DELPHI_PACKAGE TRegisterSelectionEditorProc RegisterSelectionEditorProc;
extern DELPHI_PACKAGE TRegisterCustomModuleProc RegisterCustomModuleProc;
static const System::Int8 MaxIdentLength = System::Int8(0x3f);
extern DELPHI_PACKAGE TForceDemandLoadStateProc ForceDemandLoadStateProc;
extern DELPHI_PACKAGE TEnableDemandLoadReportProc EnableDemandLoadReportProc;
extern DELPHI_PACKAGE TRegisterDragTargetProc RegisterDragTargetProc;
extern DELPHI_PACKAGE TRegisterDesignDragObject RegisterDesignDragObjectProc;
extern DELPHI_PACKAGE TRegisterIDropTarget RegisterIDropTargetProc;
extern DELPHI_PACKAGE TRegisterComponentGuidelines RegisterComponentGuidelinesProc;
extern DELPHI_PACKAGE void __fastcall RegisterPropertyMapper(TPropertyMapperFunc Mapper);
extern DELPHI_PACKAGE void __fastcall RegisterPropertyInCategory(const System::UnicodeString CategoryName, const System::UnicodeString PropertyName)/* overload */;
extern DELPHI_PACKAGE void __fastcall RegisterPropertyInCategory(const System::UnicodeString CategoryName, System::TClass ComponentClass, const System::UnicodeString PropertyName)/* overload */;
extern DELPHI_PACKAGE void __fastcall RegisterPropertyInCategory(const System::UnicodeString CategoryName, System::Typinfo::PTypeInfo PropertyType, const System::UnicodeString PropertyName)/* overload */;
extern DELPHI_PACKAGE void __fastcall RegisterPropertyInCategory(const System::UnicodeString CategoryName, System::Typinfo::PTypeInfo PropertyType)/* overload */;
extern DELPHI_PACKAGE void __fastcall RegisterPropertiesInCategory(const System::UnicodeString CategoryName, const System::TVarRec *Filters, const int Filters_High)/* overload */;
extern DELPHI_PACKAGE void __fastcall RegisterPropertiesInCategory(const System::UnicodeString CategoryName, System::TClass ComponentClass, const System::UnicodeString *Filters, const int Filters_High)/* overload */;
extern DELPHI_PACKAGE void __fastcall RegisterPropertiesInCategory(const System::UnicodeString CategoryName, System::Typinfo::PTypeInfo PropertyType, const System::UnicodeString *Filters, const int Filters_High)/* overload */;
extern DELPHI_PACKAGE void __fastcall RegisterDesignNotification(const _di_IDesignNotification DesignNotification);
extern DELPHI_PACKAGE void __fastcall UnregisterDesignNotification(const _di_IDesignNotification DesignNotification);
extern DELPHI_PACKAGE void __fastcall RegisterComponentEditor(System::Classes::TComponentClass ComponentClass, TComponentEditorClass ComponentEditor);
extern DELPHI_PACKAGE _di_IDesignerSelections __fastcall CreateSelectionList();
extern DELPHI_PACKAGE void __fastcall RegisterPropertyEditor(System::Typinfo::PTypeInfo PropertyType, System::TClass ComponentClass, const System::UnicodeString PropertyName, TPropertyEditorClass EditorClass);
extern DELPHI_PACKAGE void __fastcall SetPropertyEditorGroup(TPropertyEditorClass EditorClass, System::Classes::TPersistentClass GroupClass);
extern DELPHI_PACKAGE void __fastcall UnlistPublishedProperty(System::TClass ComponentClass, const System::UnicodeString PropertyName);
extern DELPHI_PACKAGE void __fastcall RegisterSelectionEditor(System::TClass AClass, TSelectionEditorClass AEditor);
extern DELPHI_PACKAGE void __fastcall RegisterCustomModule(System::Classes::TComponentClass ComponentBaseClass, TCustomModuleClass CustomModuleClass);
extern DELPHI_PACKAGE void __fastcall ForceDemandLoadState(TDemandLoadState DemandLoadState);
extern DELPHI_PACKAGE void __fastcall EnableDemandLoadReport(bool Detailed);
extern DELPHI_PACKAGE void __fastcall RegisterDragTarget(const System::UnicodeString SourceName, TDragTargetClass TargetClass);
extern DELPHI_PACKAGE void __fastcall RegisterDesignDragObject(Vcl::Controls::TDragObjectClass DragObjectClass);
extern DELPHI_PACKAGE void __fastcall RegisterIDropTarget(const _di_IDropTarget ADropTarget);
extern DELPHI_PACKAGE _di_IDesignObject __fastcall PersistentToDesignObject(System::Classes::TPersistent* APersistent);
extern DELPHI_PACKAGE void __fastcall RegisterComponentGuidelines(System::Classes::TComponentClass AComponentClass, TComponentGuidelinesClass AComponentGuidelinesClass);
}	/* namespace Designintf */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DESIGNINTF)
using namespace Designintf;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DesignintfHPP
