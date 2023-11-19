// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Update.pas' rev: 35.00 (Windows)

#ifndef UpdateHPP
#define UpdateHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <System.TypInfo.hpp>
#include <System.Types.hpp>
#include <DesignIntf.hpp>

//-- user supplied -----------------------------------------------------------

namespace Update
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IUpdateManager;
typedef System::DelphiInterface<IUpdateManager> _di_IUpdateManager;
__interface DELPHIINTERFACE IUpdateManagerCallback;
typedef System::DelphiInterface<IUpdateManagerCallback> _di_IUpdateManagerCallback;
class DELPHICLASS TUpdateFiler;
class DELPHICLASS TUpdateObject;
class DELPHICLASS TUpdateManager;
//-- type declarations -------------------------------------------------------
__interface  INTERFACE_UUID("{7ED7BF35-E349-11D3-AB4A-00C04FB17A72}") IUpdateManager  : public System::IInterface 
{
	virtual bool __fastcall CanRevert(System::Classes::TPersistent* Instance, System::Typinfo::PPropInfo PropInfo) = 0 ;
	virtual System::Classes::TComponent* __fastcall GetComponent() = 0 ;
	virtual System::Classes::TComponent* __fastcall GetAncestor() = 0 ;
	virtual bool __fastcall GetHasDescendents() = 0 ;
	virtual bool __fastcall GetIsDescendent() = 0 ;
	virtual void __fastcall Modified() = 0 ;
	virtual bool __fastcall NameExists(const System::UnicodeString Name) = 0 ;
	virtual void __fastcall Notification(System::Classes::TPersistent* Component, System::Classes::TOperation Operation) = 0 ;
	virtual void __fastcall RenameComponent(const System::UnicodeString CurrentName, const System::UnicodeString NewName) = 0 ;
	virtual void __fastcall RenameDescendents(const System::UnicodeString CurrentName, const System::UnicodeString NewName) = 0 ;
	virtual void __fastcall Revert(System::Classes::TPersistent* Instance, System::Typinfo::PPropInfo PropInfo) = 0 ;
	virtual void __fastcall Update() = 0 ;
	__property System::Classes::TComponent* Component = {read=GetComponent};
	__property System::Classes::TComponent* Ancestor = {read=GetAncestor};
	__property bool HasDescendents = {read=GetHasDescendents};
	__property bool IsDescendent = {read=GetIsDescendent};
};

__interface  INTERFACE_UUID("{ABBE7254-5495-11D1-9FB5-0020AF3D82DA}") IUpdateManagerCallback  : public System::IInterface 
{
	virtual void __fastcall Updating(const _di_IUpdateManager Context) = 0 ;
	virtual void __fastcall Updated(const _di_IUpdateManager Context) = 0 ;
	virtual void __fastcall Deleting(const _di_IUpdateManager Context, System::Classes::TPersistent* Instance) = 0 ;
	virtual System::Classes::TComponent* __fastcall CreateComponent(System::TClass ComponentClass, System::Classes::TComponent* const Owner) = 0 ;
	virtual void __fastcall WriteComponent(System::Classes::TWriter* Writer, System::Classes::TComponent* Component) = 0 ;
	virtual void __fastcall RefuseChildren(System::Classes::TComponent* Component) = 0 ;
	virtual System::Classes::TPersistentClass __fastcall GetActiveClassGroup() = 0 ;
};

enum DECLSPEC_DENUM TUpdateFilterState : unsigned char { usFilter, usReading, usWriting };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TUpdateFiler : public System::Classes::TFiler
{
	typedef System::Classes::TFiler inherited;
	
private:
	System::Classes::TStringList* FPropertyList;
	TUpdateObject* FUpdateObject;
	System::Classes::TWriter* FWriter;
	System::Classes::TReader* FReader;
	bool FFiltered;
	TUpdateFilterState FState;
	System::UnicodeString FPropName;
	bool FCompare;
	bool __fastcall Empty();
	void __fastcall Filter();
	void __fastcall FilterProp(const System::UnicodeString Name, bool HasData);
	void __fastcall Update();
	
public:
	__fastcall TUpdateFiler(TUpdateObject* AUpdateObject, bool ACompare);
	__fastcall virtual ~TUpdateFiler();
	virtual void __fastcall DefineProperty(const System::UnicodeString Name, System::Classes::TReaderProc ReadData, System::Classes::TWriterProc WriteData, bool HasData);
	virtual void __fastcall DefineBinaryProperty(const System::UnicodeString Name, System::Classes::TStreamProc ReadData, System::Classes::TStreamProc WriteData, bool HasData);
	virtual void __fastcall FlushBuffer();
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TUpdateObject : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TUpdateObject* FOwner;
	System::Classes::TPersistent* FObject;
	System::Classes::TPersistent* FAncestor;
	System::Classes::TComponent* FObjectOwner;
	System::Classes::TComponent* FAncestorOwner;
	System::Classes::TList* FPropList;
	System::Classes::TList* FChildList;
	TUpdateFiler* FUpdateFiler;
	bool FIsComponent;
	bool FIsCollection;
	bool FUpdateCollection;
	bool FUpdateOrder;
	int FOrder;
	System::Typinfo::TPropInfo *FPropInfo;
	bool FCompare;
	
protected:
	__fastcall TUpdateObject(TUpdateObject* AOwner, System::Classes::TPersistent* AObject, System::Classes::TPersistent* AAncestor, System::Typinfo::PPropInfo APropInfo, bool Compare, bool AsRoot);
	
private:
	void __fastcall AddChild(System::Classes::TComponent* Component);
	bool __fastcall CanRevert(System::Classes::TPersistent* Instance, System::Typinfo::PPropInfo PropInfo, bool &Continue);
	System::TMethod __fastcall GetAncestorMethod(System::Typinfo::PPropInfo PropInfo);
	void * __fastcall GetAncestorPointer(void * Value);
	void * __fastcall GetAncestorReference(System::Typinfo::PPropInfo PropInfo);
	TUpdateObject* __fastcall FindChild(System::Classes::TComponent* Component);
	TUpdateObject* __fastcall FindChildProp(System::Typinfo::PPropInfo APropInfo);
	void __fastcall ComponentDelete(System::Classes::TComponent* AComponent);
	void __fastcall Filter();
	void __fastcall FilterOrder();
	bool __fastcall Revert(System::Classes::TPersistent* Instance, System::Typinfo::PPropInfo PropInfo);
	void __fastcall Update(TUpdateManager* UpdateManager);
	void __fastcall ValidateObjects();
	
public:
	__fastcall virtual ~TUpdateObject();
};

#pragma pack(pop)

enum DECLSPEC_DENUM TUpdateMode : unsigned char { umNone, umUpdate, umFilter };

class PASCALIMPLEMENTATION TUpdateManager : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	TUpdateObject* FComponentUpdate;
	System::Classes::TList* FChildList;
	System::Classes::TComponent* FComponent;
	System::Classes::TComponent* FAncestor;
	TUpdateManager* FParent;
	TUpdateMode FMode;
	System::Classes::TList* FUpdateList;
	System::Classes::TNotifyEvent FOnUpdating;
	System::Classes::TNotifyEvent FOnUpdate;
	_di_IUpdateManagerCallback FNotifier;
	void __fastcall Filter();
	bool __fastcall GetHasDescendents();
	bool __fastcall GetIsDescendent();
	void __fastcall UpdateChildren();
	void __fastcall SetChildAncestor(System::Classes::TComponent* Child);
	void __fastcall Updating(System::Classes::TComponent* Component);
	System::Classes::TComponent* __fastcall GetAncestor();
	System::Classes::TComponent* __fastcall GetComponent();
	System::TObject* __fastcall GetInstance();
	void __fastcall BeginUpdate();
	void __fastcall EndUpdate();
	
public:
	__fastcall TUpdateManager(System::Classes::TComponent* AComponent, System::Classes::TComponent* AAncestor, _di_IUpdateManager AAncestorManager, const _di_IUpdateManagerCallback ANotifier);
	__fastcall virtual ~TUpdateManager();
	bool __fastcall CanRevert(System::Classes::TPersistent* Instance, System::Typinfo::PPropInfo PropInfo);
	void __fastcall Notification(System::Classes::TPersistent* AComponent, System::Classes::TOperation Operation);
	void __fastcall Modified();
	bool __fastcall NameExists(const System::UnicodeString Name);
	void __fastcall RenameComponent(const System::UnicodeString CurrentName, const System::UnicodeString NewName);
	void __fastcall RenameDescendents(const System::UnicodeString CurrentName, const System::UnicodeString NewName);
	void __fastcall Revert(System::Classes::TPersistent* Instance, System::Typinfo::PPropInfo PropInfo);
	void __fastcall Update();
	__property System::Classes::TNotifyEvent OnUpdating = {read=FOnUpdating, write=FOnUpdating};
	__property System::Classes::TNotifyEvent OnUpdate = {read=FOnUpdate, write=FOnUpdate};
	__property System::Classes::TComponent* Component = {read=FComponent};
	__property System::Classes::TComponent* Ancestor = {read=FAncestor};
	__property bool HasDescendents = {read=GetHasDescendents, nodefault};
	__property bool IsDescendent = {read=GetIsDescendent, nodefault};
private:
	void *__IImplementation;	// Designintf::IImplementation 
	void *__IUpdateManager;	// IUpdateManager 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {F9D448F2-50BC-11D1-9FB5-0020AF3D82DA}
	operator Designintf::_di_IImplementation()
	{
		Designintf::_di_IImplementation intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Designintf::IImplementation*(void) { return (Designintf::IImplementation*)&__IImplementation; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {7ED7BF35-E349-11D3-AB4A-00C04FB17A72}
	operator _di_IUpdateManager()
	{
		_di_IUpdateManager intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IUpdateManager*(void) { return (IUpdateManager*)&__IUpdateManager; }
	#endif
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Update */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_UPDATE)
using namespace Update;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// UpdateHPP
