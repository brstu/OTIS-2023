// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DesignEditors.pas' rev: 35.00 (Windows)

#ifndef DesigneditorsHPP
#define DesigneditorsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Types.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Winapi.ActiveX.hpp>
#include <System.TypInfo.hpp>
#include <System.Variants.hpp>
#include <DesignIntf.hpp>
#include <DesignMenus.hpp>
#include <ToolsAPI.hpp>

//-- user supplied -----------------------------------------------------------

namespace Designeditors
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS EDesignPropertyError;
struct TInstProp;
class DELPHICLASS TPropertyEditor;
class DELPHICLASS TOrdinalProperty;
class DELPHICLASS TIntegerProperty;
class DELPHICLASS TCharProperty;
class DELPHICLASS TEnumProperty;
class DELPHICLASS TBoolProperty;
class DELPHICLASS TInt64Property;
class DELPHICLASS TFloatProperty;
class DELPHICLASS TStringProperty;
class DELPHICLASS TNestedProperty;
class DELPHICLASS TSetElementProperty;
class DELPHICLASS TSetProperty;
class DELPHICLASS TClassProperty;
class DELPHICLASS TMethodProperty;
class DELPHICLASS TWideStringProperty;
class DELPHICLASS TWideCharProperty;
class DELPHICLASS TComponentProperty;
class DELPHICLASS TInterfaceProperty;
class DELPHICLASS TComponentNameProperty;
class DELPHICLASS TDateProperty;
class DELPHICLASS TTimeProperty;
class DELPHICLASS TDateTimeProperty;
class DELPHICLASS TVariantProperty;
class DELPHICLASS TComponentEditor;
class DELPHICLASS TDefaultEditor;
class DELPHICLASS TSelectionEditor;
class DELPHICLASS TEditActionSelectionEditor;
class DELPHICLASS TCustomModule;
__interface DELPHIINTERFACE IDesignGroupChange;
typedef System::DelphiInterface<IDesignGroupChange> _di_IDesignGroupChange;
class DELPHICLASS TDesignerOleDropTarget;
class DELPHICLASS TComponentGuidelines;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION EDesignPropertyError : public Toolsapi::ENonAIRException
{
	typedef Toolsapi::ENonAIRException inherited;
	
public:
	/* Exception.Create */ inline __fastcall EDesignPropertyError(const System::UnicodeString Msg) : Toolsapi::ENonAIRException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EDesignPropertyError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : Toolsapi::ENonAIRException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EDesignPropertyError(NativeUInt Ident)/* overload */ : Toolsapi::ENonAIRException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EDesignPropertyError(System::PResStringRec ResStringRec)/* overload */ : Toolsapi::ENonAIRException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EDesignPropertyError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : Toolsapi::ENonAIRException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EDesignPropertyError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : Toolsapi::ENonAIRException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EDesignPropertyError(const System::UnicodeString Msg, int AHelpContext) : Toolsapi::ENonAIRException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EDesignPropertyError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Toolsapi::ENonAIRException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EDesignPropertyError(NativeUInt Ident, int AHelpContext)/* overload */ : Toolsapi::ENonAIRException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EDesignPropertyError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Toolsapi::ENonAIRException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EDesignPropertyError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Toolsapi::ENonAIRException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EDesignPropertyError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Toolsapi::ENonAIRException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EDesignPropertyError() { }
	
};

#pragma pack(pop)

struct DECLSPEC_DRECORD TInstProp
{
public:
	System::Classes::TPersistent* Instance;
	System::Typinfo::TPropInfo *PropInfo;
};


typedef System::StaticArray<TInstProp, 1024> TInstPropList;

typedef TInstPropList *PInstPropList;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPropertyEditor : public Designintf::TBasePropertyEditor
{
	typedef Designintf::TBasePropertyEditor inherited;
	
private:
	Designintf::_di_IDesigner FDesigner;
	TInstPropList *FPropList;
	int FPropCount;
	System::Classes::TList* FAncestorList;
	System::Classes::TComponent* FRoot;
	System::Classes::TPersistent* FAncestor;
	System::Classes::TComponent* FRootAncestor;
	System::Classes::TComponent* FLookingFor;
	bool FDoneLooking;
	void __fastcall AddAncestor(System::Classes::TComponent* Component);
	void __fastcall GetLookupInfo(System::Classes::TPersistent* &Ancestor, System::Classes::TComponent* &Root, System::Classes::TComponent* &LookupRoot, System::Classes::TComponent* &RootAncestor);
	System::UnicodeString __fastcall GetPrivateDirectory();
	void __fastcall WriteComponentSimulation(System::Classes::TComponent* Component);
	
protected:
	virtual void __fastcall SetPropEntry(int Index, System::Classes::TPersistent* AInstance, System::Typinfo::PPropInfo APropInfo);
	System::Extended __fastcall GetFloatValue();
	System::Extended __fastcall GetFloatValueAt(int Index);
	__int64 __fastcall GetInt64Value();
	__int64 __fastcall GetInt64ValueAt(int Index);
	System::TMethod __fastcall GetMethodValue();
	System::TMethod __fastcall GetMethodValueAt(int Index);
	int __fastcall GetOrdValue();
	int __fastcall GetOrdValueAt(int Index);
	System::UnicodeString __fastcall GetStrValue();
	System::UnicodeString __fastcall GetStrValueAt(int Index);
	System::WideString __fastcall GetWideStrValue();
	System::WideString __fastcall GetWideStrValueAt(int Index);
	System::Variant __fastcall GetVarValue();
	System::Variant __fastcall GetVarValueAt(int Index);
	System::_di_IInterface __fastcall GetIntfValue();
	System::_di_IInterface __fastcall GetIntfValueAt(int Index);
	void __fastcall Modified();
	void __fastcall SetFloatValue(System::Extended Value);
	void __fastcall SetMethodValue(const System::TMethod &Value);
	void __fastcall SetInt64Value(__int64 Value);
	void __fastcall SetOrdValue(int Value);
	void __fastcall SetStrValue(const System::UnicodeString Value);
	void __fastcall SetWideStrValue(const System::WideString Value);
	void __fastcall SetVarValue(const System::Variant &Value);
	void __fastcall SetIntfValue(const System::_di_IInterface Value);
	bool __fastcall GetEditValue(/* out */ System::UnicodeString &Value)/* overload */;
	bool __fastcall HasInstance(System::Classes::TPersistent* Instance);
	virtual bool __fastcall GetIsDefault();
	bool __fastcall GetEditValue(/* out */ System::WideString &Value)/* overload */;
	
public:
	__fastcall virtual TPropertyEditor(const Designintf::_di_IDesigner ADesigner, int APropCount);
	__fastcall virtual ~TPropertyEditor();
	virtual void __fastcall Activate();
	virtual bool __fastcall AllEqual();
	virtual bool __fastcall AutoFill();
	virtual void __fastcall Edit();
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes();
	System::Classes::TPersistent* __fastcall GetComponent(int Index);
	virtual int __fastcall GetEditLimit();
	virtual System::UnicodeString __fastcall GetName();
	virtual void __fastcall GetProperties(Designintf::TGetPropProc Proc);
	virtual System::Typinfo::PPropInfo __fastcall GetPropInfo();
	System::Typinfo::PTypeInfo __fastcall GetPropType();
	System::TTypeKind __fastcall GetKind();
	virtual System::UnicodeString __fastcall GetValue();
	virtual System::WideString __fastcall GetValueW();
	System::UnicodeString __fastcall GetVisualValue();
	virtual void __fastcall GetValues(System::Classes::TGetStrProc Proc);
	virtual void __fastcall Initialize();
	void __fastcall Revert();
	virtual void __fastcall SetValue(const System::UnicodeString Value)/* overload */;
	virtual void __fastcall SetValue(const System::WideString Value)/* overload */;
	bool __fastcall ValueAvailable();
	__property Designintf::_di_IDesigner Designer = {read=FDesigner};
	__property System::UnicodeString PrivateDirectory = {read=GetPrivateDirectory};
	__property int PropCount = {read=FPropCount, nodefault};
	__property System::UnicodeString Value = {read=GetValue, write=SetValue};
private:
	void *__IProperty70;	// Designintf::IProperty70 
	void *__IPropertyKind;	// Designintf::IPropertyKind 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {57B97F18-B47F-4635-94CB-3344783E7069}
	operator Designintf::_di_IProperty70()
	{
		Designintf::_di_IProperty70 intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Designintf::IProperty70*(void) { return (Designintf::IProperty70*)&__IProperty70; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {DC38E982-F69D-40BB-B99D-F14EE83CD448}
	operator Designintf::_di_IPropertyKind()
	{
		Designintf::_di_IPropertyKind intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Designintf::IPropertyKind*(void) { return (Designintf::IPropertyKind*)&__IPropertyKind; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {7ED7BF29-E349-11D3-AB4A-00C04FB17A72}
	operator Designintf::_di_IProperty()
	{
		Designintf::_di_IProperty intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Designintf::IProperty*(void) { return (Designintf::IProperty*)&__IProperty70; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TOrdinalProperty : public TPropertyEditor
{
	typedef TPropertyEditor inherited;
	
public:
	virtual bool __fastcall AllEqual();
	virtual int __fastcall GetEditLimit();
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TOrdinalProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : TPropertyEditor(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TOrdinalProperty() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIntegerProperty : public TOrdinalProperty
{
	typedef TOrdinalProperty inherited;
	
public:
	virtual System::UnicodeString __fastcall GetValue();
	virtual void __fastcall SetValue(const System::UnicodeString Value)/* overload */;
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TIntegerProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : TOrdinalProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TIntegerProperty() { }
	
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  SetValue(const System::WideString Value){ TPropertyEditor::SetValue(Value); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCharProperty : public TOrdinalProperty
{
	typedef TOrdinalProperty inherited;
	
public:
	virtual System::UnicodeString __fastcall GetValue();
	virtual void __fastcall SetValue(const System::UnicodeString Value)/* overload */;
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TCharProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : TOrdinalProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TCharProperty() { }
	
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  SetValue(const System::WideString Value){ TPropertyEditor::SetValue(Value); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEnumProperty : public TOrdinalProperty
{
	typedef TOrdinalProperty inherited;
	
public:
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes();
	virtual System::UnicodeString __fastcall GetValue();
	virtual void __fastcall GetValues(System::Classes::TGetStrProc Proc);
	virtual void __fastcall SetValue(const System::UnicodeString Value)/* overload */;
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TEnumProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : TOrdinalProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TEnumProperty() { }
	
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  SetValue(const System::WideString Value){ TPropertyEditor::SetValue(Value); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TBoolProperty : public TEnumProperty
{
	typedef TEnumProperty inherited;
	
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TBoolProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : TEnumProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TBoolProperty() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TInt64Property : public TPropertyEditor
{
	typedef TPropertyEditor inherited;
	
public:
	virtual bool __fastcall AllEqual();
	virtual int __fastcall GetEditLimit();
	virtual System::UnicodeString __fastcall GetValue();
	virtual void __fastcall SetValue(const System::UnicodeString Value)/* overload */;
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TInt64Property(const Designintf::_di_IDesigner ADesigner, int APropCount) : TPropertyEditor(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TInt64Property() { }
	
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  SetValue(const System::WideString Value){ TPropertyEditor::SetValue(Value); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TFloatProperty : public TPropertyEditor
{
	typedef TPropertyEditor inherited;
	
public:
	virtual bool __fastcall AllEqual();
	virtual System::UnicodeString __fastcall GetValue();
	virtual void __fastcall SetValue(const System::UnicodeString Value)/* overload */;
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TFloatProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : TPropertyEditor(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TFloatProperty() { }
	
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  SetValue(const System::WideString Value){ TPropertyEditor::SetValue(Value); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TStringProperty : public TPropertyEditor
{
	typedef TPropertyEditor inherited;
	
public:
	virtual bool __fastcall AllEqual();
	virtual int __fastcall GetEditLimit();
	virtual System::UnicodeString __fastcall GetValue();
	virtual void __fastcall SetValue(const System::UnicodeString Value)/* overload */;
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TStringProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : TPropertyEditor(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TStringProperty() { }
	
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  SetValue(const System::WideString Value){ TPropertyEditor::SetValue(Value); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TNestedProperty : public TPropertyEditor
{
	typedef TPropertyEditor inherited;
	
public:
	__fastcall TNestedProperty(TPropertyEditor* Parent);
	__fastcall virtual ~TNestedProperty();
};

#pragma pack(pop)

typedef System::Int8 TBit;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSetElementProperty : public TNestedProperty
{
	typedef TNestedProperty inherited;
	
private:
	int FElement;
	TBit FBit;
	
protected:
	__fastcall TSetElementProperty(TPropertyEditor* Parent, int AElement);
	__property int Element = {read=FElement, nodefault};
	virtual bool __fastcall GetIsDefault();
	
public:
	virtual bool __fastcall AllEqual();
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes();
	virtual System::UnicodeString __fastcall GetName();
	virtual System::UnicodeString __fastcall GetValue();
	virtual void __fastcall GetValues(System::Classes::TGetStrProc Proc);
	virtual void __fastcall SetValue(const System::UnicodeString Value)/* overload */;
public:
	/* TNestedProperty.Destroy */ inline __fastcall virtual ~TSetElementProperty() { }
	
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  SetValue(const System::WideString Value){ TPropertyEditor::SetValue(Value); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSetProperty : public TOrdinalProperty
{
	typedef TOrdinalProperty inherited;
	
public:
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes();
	virtual void __fastcall GetProperties(Designintf::TGetPropProc Proc);
	virtual System::UnicodeString __fastcall GetValue();
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TSetProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : TOrdinalProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TSetProperty() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TClassProperty : public TPropertyEditor
{
	typedef TPropertyEditor inherited;
	
public:
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes();
	virtual void __fastcall GetProperties(Designintf::TGetPropProc Proc);
	virtual System::UnicodeString __fastcall GetValue();
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TClassProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : TPropertyEditor(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TClassProperty() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TMethodProperty : public TPropertyEditor
{
	typedef TPropertyEditor inherited;
	
public:
	virtual bool __fastcall AllNamed();
	virtual bool __fastcall AllEqual();
	virtual void __fastcall Edit();
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes();
	virtual int __fastcall GetEditLimit();
	virtual System::UnicodeString __fastcall GetValue();
	virtual void __fastcall GetValues(System::Classes::TGetStrProc Proc);
	virtual void __fastcall SetValue(const System::UnicodeString AValue)/* overload */;
	virtual System::UnicodeString __fastcall GetFormMethodName();
	System::UnicodeString __fastcall GetTrimmedEventName();
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TMethodProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : TPropertyEditor(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TMethodProperty() { }
	
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  SetValue(const System::WideString Value){ TPropertyEditor::SetValue(Value); }
	
private:
	void *__IMethodProperty;	// Designintf::IMethodProperty 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {392CBF4A-F078-47E9-B731-0E0B7F1F4998}
	operator Designintf::_di_IMethodProperty()
	{
		Designintf::_di_IMethodProperty intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Designintf::IMethodProperty*(void) { return (Designintf::IMethodProperty*)&__IMethodProperty; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TWideStringProperty : public TPropertyEditor
{
	typedef TPropertyEditor inherited;
	
public:
	virtual bool __fastcall AllEqual();
	System::WideString __fastcall GetNameW();
	virtual System::UnicodeString __fastcall GetValue();
	virtual System::WideString __fastcall GetValueW();
	virtual void __fastcall SetValue(const System::WideString Value)/* overload */;
	HIDESBASE virtual void __fastcall GetValues(Designintf::TGetWideStrProc Proc);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TWideStringProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : TPropertyEditor(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TWideStringProperty() { }
	
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  SetValue(const System::UnicodeString Value){ TPropertyEditor::SetValue(Value); }
	
private:
	void *__IWideProperty10;	// Designintf::IWideProperty10 
	void *__IWideProperty;	// Designintf::IWideProperty 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {EB335848-4AD4-4423-8598-37FFDF5984D5}
	operator Designintf::_di_IWideProperty10()
	{
		Designintf::_di_IWideProperty10 intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Designintf::IWideProperty10*(void) { return (Designintf::IWideProperty10*)&__IWideProperty10; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {ACBF6140-1378-4AAC-94D6-D4660DFE7053}
	operator Designintf::_di_IWideProperty()
	{
		Designintf::_di_IWideProperty intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Designintf::IWideProperty*(void) { return (Designintf::IWideProperty*)&__IWideProperty; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TWideCharProperty : public TOrdinalProperty
{
	typedef TOrdinalProperty inherited;
	
public:
	virtual System::UnicodeString __fastcall GetValue();
	virtual void __fastcall SetValue(const System::UnicodeString Value)/* overload */;
	virtual System::WideString __fastcall GetValueW();
	virtual void __fastcall SetValue(const System::WideString Value)/* overload */;
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TWideCharProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : TOrdinalProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TWideCharProperty() { }
	
private:
	void *__IWideProperty;	// Designintf::IWideProperty 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {ACBF6140-1378-4AAC-94D6-D4660DFE7053}
	operator Designintf::_di_IWideProperty()
	{
		Designintf::_di_IWideProperty intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Designintf::IWideProperty*(void) { return (Designintf::IWideProperty*)&__IWideProperty; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TComponentProperty : public TPropertyEditor
{
	typedef TPropertyEditor inherited;
	
protected:
	bool __fastcall FilterFunc(const Designintf::_di_IProperty ATestEditor);
	virtual System::Classes::TComponent* __fastcall GetComponentReference();
	virtual bool __fastcall ShowReferenceProperty();
	virtual Designintf::_di_IDesignerSelections __fastcall GetSelections();
	
public:
	virtual bool __fastcall AllEqual();
	virtual void __fastcall Edit();
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes();
	virtual void __fastcall GetProperties(Designintf::TGetPropProc Proc);
	virtual int __fastcall GetEditLimit();
	virtual System::UnicodeString __fastcall GetValue();
	virtual void __fastcall GetValues(System::Classes::TGetStrProc Proc);
	virtual void __fastcall SetValue(const System::UnicodeString Value)/* overload */;
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TComponentProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : TPropertyEditor(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TComponentProperty() { }
	
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  SetValue(const System::WideString Value){ TPropertyEditor::SetValue(Value); }
	
private:
	void *__IShowReferenceProperty;	// Designintf::IShowReferenceProperty 
	void *__IReferenceProperty;	// Designintf::IReferenceProperty 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {ECD009DA-C711-4C7F-912B-3AB5A6A4B290}
	operator Designintf::_di_IShowReferenceProperty()
	{
		Designintf::_di_IShowReferenceProperty intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Designintf::IShowReferenceProperty*(void) { return (Designintf::IShowReferenceProperty*)&__IShowReferenceProperty; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {C7EE2B1E-3F89-40AD-9250-D2667BA3D46B}
	operator Designintf::_di_IReferenceProperty()
	{
		Designintf::_di_IReferenceProperty intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Designintf::IReferenceProperty*(void) { return (Designintf::IReferenceProperty*)&__IReferenceProperty; }
	#endif
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TInterfaceProperty : public TComponentProperty
{
	typedef TComponentProperty inherited;
	
private:
	System::Classes::TGetStrProc FGetValuesStrProc;
	
protected:
	void __fastcall ReceiveComponentNames(const System::UnicodeString S);
	HIDESBASE System::Classes::TComponent* __fastcall GetComponent(const System::_di_IInterface AInterface);
	virtual System::Classes::TComponent* __fastcall GetComponentReference();
	virtual Designintf::_di_IDesignerSelections __fastcall GetSelections();
	
public:
	virtual bool __fastcall AllEqual();
	virtual void __fastcall GetValues(System::Classes::TGetStrProc Proc);
	virtual void __fastcall SetValue(const System::UnicodeString Value)/* overload */;
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TInterfaceProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : TComponentProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TInterfaceProperty() { }
	
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  SetValue(const System::WideString Value){ TPropertyEditor::SetValue(Value); }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TComponentNameProperty : public TStringProperty
{
	typedef TStringProperty inherited;
	
public:
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes();
	virtual int __fastcall GetEditLimit();
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TComponentNameProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : TStringProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TComponentNameProperty() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDateProperty : public TPropertyEditor
{
	typedef TPropertyEditor inherited;
	
public:
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes();
	virtual System::UnicodeString __fastcall GetValue();
	virtual void __fastcall SetValue(const System::UnicodeString Value)/* overload */;
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TDateProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : TPropertyEditor(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TDateProperty() { }
	
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  SetValue(const System::WideString Value){ TPropertyEditor::SetValue(Value); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TTimeProperty : public TPropertyEditor
{
	typedef TPropertyEditor inherited;
	
public:
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes();
	virtual System::UnicodeString __fastcall GetValue();
	virtual void __fastcall SetValue(const System::UnicodeString Value)/* overload */;
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TTimeProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : TPropertyEditor(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TTimeProperty() { }
	
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  SetValue(const System::WideString Value){ TPropertyEditor::SetValue(Value); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDateTimeProperty : public TPropertyEditor
{
	typedef TPropertyEditor inherited;
	
public:
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes();
	virtual System::UnicodeString __fastcall GetValue();
	virtual void __fastcall SetValue(const System::UnicodeString Value)/* overload */;
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TDateTimeProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : TPropertyEditor(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TDateTimeProperty() { }
	
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  SetValue(const System::WideString Value){ TPropertyEditor::SetValue(Value); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TVariantProperty : public TPropertyEditor
{
	typedef TPropertyEditor inherited;
	
public:
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes();
	virtual System::UnicodeString __fastcall GetValue();
	virtual void __fastcall SetValue(const System::UnicodeString Value)/* overload */;
	virtual void __fastcall GetProperties(Designintf::TGetPropProc Proc);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TVariantProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : TPropertyEditor(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TVariantProperty() { }
	
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  SetValue(const System::WideString Value){ TPropertyEditor::SetValue(Value); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TComponentEditor : public Designintf::TBaseComponentEditor
{
	typedef Designintf::TBaseComponentEditor inherited;
	
private:
	System::Classes::TComponent* FComponent;
	Designintf::_di_IDesigner FDesigner;
	
public:
	__fastcall virtual TComponentEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner);
	virtual void __fastcall Edit();
	virtual void __fastcall ExecuteVerb(int Index);
	System::Classes::TComponent* __fastcall GetComponent();
	Designintf::_di_IDesigner __fastcall GetDesigner();
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual int __fastcall GetVerbCount();
	bool __fastcall IsInInlined();
	virtual void __fastcall Copy();
	virtual void __fastcall PrepareItem(int Index, const Designmenus::_di_IMenuItem AItem);
	__property System::Classes::TComponent* Component = {read=FComponent};
	__property Designintf::_di_IDesigner Designer = {read=GetDesigner};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TComponentEditor() { }
	
private:
	void *__IComponentEditor;	// Designintf::IComponentEditor 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {ECACBA34-DCDF-4BE2-A645-E4404BC06106}
	operator Designintf::_di_IComponentEditor()
	{
		Designintf::_di_IComponentEditor intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Designintf::IComponentEditor*(void) { return (Designintf::IComponentEditor*)&__IComponentEditor; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDefaultEditor : public TComponentEditor
{
	typedef TComponentEditor inherited;
	
private:
	Designintf::_di_IProperty FFirst;
	Designintf::_di_IProperty FBest;
	bool FContinue;
	void __fastcall CheckEdit(const Designintf::_di_IProperty Prop);
	
protected:
	virtual void __fastcall EditProperty(const Designintf::_di_IProperty Prop, bool &Continue);
	
public:
	virtual void __fastcall Edit();
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TDefaultEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : TComponentEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDefaultEditor() { }
	
private:
	void *__IDefaultEditor;	// Designintf::IDefaultEditor 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {5484FAE1-5C60-11D1-9FB6-0020AF3D82DA}
	operator Designintf::_di_IDefaultEditor()
	{
		Designintf::_di_IDefaultEditor intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Designintf::IDefaultEditor*(void) { return (Designintf::IDefaultEditor*)&__IDefaultEditor; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSelectionEditor : public Designintf::TBaseSelectionEditor
{
	typedef Designintf::TBaseSelectionEditor inherited;
	
private:
	Designintf::_di_IDesigner FDesigner;
	
public:
	__fastcall virtual TSelectionEditor(const Designintf::_di_IDesigner ADesigner);
	virtual void __fastcall ExecuteVerb(int Index, const Designintf::_di_IDesignerSelections List);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual int __fastcall GetVerbCount();
	virtual void __fastcall RequiresUnits(System::Classes::TGetStrProc Proc);
	virtual void __fastcall PrepareItem(int Index, const Designmenus::_di_IMenuItem AItem);
	__property Designintf::_di_IDesigner Designer = {read=FDesigner};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TSelectionEditor() { }
	
private:
	void *__ISelectionEditor;	// Designintf::ISelectionEditor 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {B91F7A78-BB2C-45D9-957A-8A45A2D30435}
	operator Designintf::_di_ISelectionEditor()
	{
		Designintf::_di_ISelectionEditor intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Designintf::ISelectionEditor*(void) { return (Designintf::ISelectionEditor*)&__ISelectionEditor; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEditActionSelectionEditor : public TSelectionEditor
{
	typedef TSelectionEditor inherited;
	
protected:
	Designintf::TEditState __fastcall GetEditState();
	void __fastcall EditAction(Designintf::TEditAction Action);
	void __fastcall HandleCopy(System::TObject* Sender);
	void __fastcall HandleCut(System::TObject* Sender);
	void __fastcall HandleDelete(System::TObject* Sender);
	void __fastcall HandlePaste(System::TObject* Sender);
	void __fastcall HandleSelectAll(System::TObject* Sender);
	void __fastcall HandleUndo(System::TObject* Sender);
	
public:
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual int __fastcall GetVerbCount();
	virtual void __fastcall PrepareItem(int Index, const Designmenus::_di_IMenuItem AItem);
public:
	/* TSelectionEditor.Create */ inline __fastcall virtual TEditActionSelectionEditor(const Designintf::_di_IDesigner ADesigner) : TSelectionEditor(ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TEditActionSelectionEditor() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCustomModule : public Designintf::TBaseCustomModule
{
	typedef Designintf::TBaseCustomModule inherited;
	
private:
	System::Classes::TComponent* FRoot;
	Designintf::_di_IDesigner FDesigner;
	System::Classes::TClassFinder* FFinder;
	
protected:
	virtual System::Classes::TPersistentClass __fastcall GetFinderClass();
	
public:
	__fastcall virtual TCustomModule(System::Classes::TComponent* ARoot, const Designintf::_di_IDesigner ADesigner);
	__fastcall virtual ~TCustomModule();
	virtual void __fastcall ExecuteVerb(int Index);
	virtual Designintf::TCustomModuleAttributes __fastcall GetAttributes();
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual int __fastcall GetVerbCount();
	virtual void __fastcall Saving();
	virtual void __fastcall PrepareItem(int Index, const Designmenus::_di_IMenuItem AItem);
	virtual void __fastcall ValidateComponent(System::Classes::TComponent* Component);
	virtual bool __fastcall ValidateComponentClass(System::Classes::TComponentClass ComponentClass);
	virtual bool __fastcall Nestable();
	__property System::Classes::TComponent* Root = {read=FRoot};
	__property Designintf::_di_IDesigner Designer = {read=FDesigner};
private:
	void *__ICustomModule;	// Designintf::ICustomModule 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {95DA4A2B-D800-4CBB-B0B8-85AB7D3CFADA}
	operator Designintf::_di_ICustomModule()
	{
		Designintf::_di_ICustomModule intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Designintf::ICustomModule*(void) { return (Designintf::ICustomModule*)&__ICustomModule; }
	#endif
	
};

#pragma pack(pop)

typedef System::Classes::TComponent* __fastcall (*TGetTopLevelComponentFunc)(System::Classes::TComponent* Ignoring/* = (System::Classes::TComponent*)(0x0)*/);

typedef void __fastcall (*TGroupChangeProc)(int AGroup);

__interface  INTERFACE_UUID("{8B5614E7-A726-4622-B2A7-F79340B1B78E}") IDesignGroupChange  : public System::IInterface 
{
	virtual void __fastcall FreeEditorGroup(int Group) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDesignerOleDropTarget : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	_di_IDropTarget FOldDropTarget;
	
protected:
	HRESULT __stdcall DragEnter(const _di_IDataObject dataObj, int grfKeyState, System::Types::TPoint pt, int &dwEffect);
	HRESULT __stdcall DragOver(int grfKeyState, System::Types::TPoint pt, int &dwEffect);
	HRESULT __stdcall DragLeave();
	HRESULT __stdcall Drop(const _di_IDataObject dataObj, int grfKeyState, System::Types::TPoint pt, int &dwEffect);
	
public:
	__fastcall TDesignerOleDropTarget(const _di_IDropTarget AOldDropTarget);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDesignerOleDropTarget() { }
	
private:
	void *__IDropTarget;	// IDropTarget 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00000122-0000-0000-C000-000000000046}
	operator _di_IDropTarget()
	{
		_di_IDropTarget intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IDropTarget*(void) { return (IDropTarget*)&__IDropTarget; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TComponentGuidelines : public Designintf::TBaseComponentGuidelines
{
	typedef Designintf::TBaseComponentGuidelines inherited;
	
private:
	System::Classes::TComponent* FComponent;
	System::Classes::TComponent* FContainer;
	int __fastcall InternalGetDesignerGuideOffset(int Index);
	
protected:
	virtual int __fastcall CalcHorzPos(int APos);
	virtual int __fastcall CalcVertPos(int APos);
	virtual int __fastcall GetCount();
	virtual Designintf::TDesignerGuideType __fastcall GetDesignerGuideType(int Index);
	virtual int __fastcall GetDesignerGuideOffset(int Index);
	__property System::Classes::TComponent* Component = {read=FComponent};
	__property System::Classes::TComponent* Container = {read=FContainer};
	
public:
	virtual void __fastcall Initialize(System::Classes::TComponent* AComponent, System::Classes::TComponent* AContainer);
public:
	/* TBaseComponentGuidelines.Create */ inline __fastcall virtual TComponentGuidelines(const Designintf::_di_IDesigner ADesigner) : Designintf::TBaseComponentGuidelines(ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TComponentGuidelines() { }
	
private:
	void *__IComponentGuidelines;	// Designintf::IComponentGuidelines 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {237413D7-F6B8-4B8D-B581-3CDC320CE854}
	operator Designintf::_di_IComponentGuidelines()
	{
		Designintf::_di_IComponentGuidelines intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Designintf::IComponentGuidelines*(void) { return (Designintf::IComponentGuidelines*)&__IComponentGuidelines; }
	#endif
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE TGetTopLevelComponentFunc GetTopLevelComponentFunc;
extern DELPHI_PACKAGE bool __fastcall PossibleStream(const System::UnicodeString S);
extern DELPHI_PACKAGE void __fastcall GetComponentProperties(const Designintf::_di_IDesignerSelections Components, System::Typinfo::TTypeKinds Filter, const Designintf::_di_IDesigner Designer, Designintf::TGetPropProc Proc, Designintf::TPropertyEditorFilterFunc EditorFilterFunc = 0x0);
extern DELPHI_PACKAGE Designintf::_di_IComponentEditor __fastcall GetComponentEditor(System::Classes::TComponent* Component, const Designintf::_di_IDesigner Designer);
extern DELPHI_PACKAGE Designintf::_di_ISelectionEditorList __fastcall GetSelectionEditors(const Designintf::_di_IDesigner Designer, const Designintf::_di_IDesignerSelections Selections)/* overload */;
extern DELPHI_PACKAGE Designintf::_di_ISelectionEditorList __fastcall GetSelectionEditors(const Designintf::_di_IDesigner Designer)/* overload */;
extern DELPHI_PACKAGE Designintf::_di_ISelectionEditorList __fastcall GetSelectionEditors(const Designintf::_di_IDesigner Designer, System::Classes::TComponent* Component)/* overload */;
extern DELPHI_PACKAGE bool __fastcall ClassInheritsFrom(System::TClass ClassType, const System::UnicodeString ClassName);
extern DELPHI_PACKAGE bool __fastcall AncestorNameMatches(System::TClass ClassType, System::TClass AncestorClass);
extern DELPHI_PACKAGE int __fastcall NewEditorGroup();
extern DELPHI_PACKAGE void __fastcall NotifyGroupChange(TGroupChangeProc AProc);
extern DELPHI_PACKAGE void __fastcall UnnotifyGroupChange(TGroupChangeProc AProc);
extern DELPHI_PACKAGE void __fastcall FreeEditorGroup(int Group);
extern DELPHI_PACKAGE Designintf::_di_IComponentGuidelines __fastcall GuidelinesFor(const Designintf::_di_IDesigner ADesigner, System::Classes::TComponent* AComponent, System::Classes::TComponent* AContainer);
}	/* namespace Designeditors */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DESIGNEDITORS)
using namespace Designeditors;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DesigneditorsHPP
