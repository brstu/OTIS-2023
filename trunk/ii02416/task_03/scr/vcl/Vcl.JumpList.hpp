// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.JumpList.pas' rev: 35.00 (Windows)

#ifndef Vcl_JumplistHPP
#define Vcl_JumplistHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <Winapi.ShlObj.hpp>
#include <Winapi.ObjectArray.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Jumplist
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TJumpListItem;
class DELPHICLASS TJumpListCollection;
class DELPHICLASS TJumpCategoryItem;
class DELPHICLASS TJumpCategories;
class DELPHICLASS TCustomJumpList;
class DELPHICLASS TJumpList;
class DELPHICLASS EJumpListItemException;
class DELPHICLASS EJumpListException;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TJumpListItem : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	System::Sysutils::TFileName FPath;
	System::Sysutils::TFileName FIcon;
	System::UnicodeString FArguments;
	System::UnicodeString FFriendlyName;
	bool FIsSeparator;
	bool FVisible;
	void __fastcall SetIsSeparator(const bool Value);
	void __fastcall SetIcon(const System::Sysutils::TFileName Value);
	void __fastcall SetPath(const System::Sysutils::TFileName Value);
	void __fastcall SetFriendlyName(const System::UnicodeString Value);
	void __fastcall SetArguments(const System::UnicodeString Value);
	void __fastcall SetVisible(const bool Value);
	
public:
	_di_IShellLinkW __fastcall GetAsIShellLink();
	__fastcall virtual TJumpListItem(System::Classes::TCollection* Collection);
	
__published:
	__property bool IsSeparator = {read=FIsSeparator, write=SetIsSeparator, default=0};
	__property System::Sysutils::TFileName Icon = {read=FIcon, write=SetIcon};
	__property System::Sysutils::TFileName Path = {read=FPath, write=SetPath};
	__property System::UnicodeString FriendlyName = {read=FFriendlyName, write=SetFriendlyName};
	__property System::UnicodeString Arguments = {read=FArguments, write=SetArguments};
	__property bool Visible = {read=FVisible, write=SetVisible, default=1};
public:
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TJumpListItem() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TJumpListCollection : public System::Classes::TOwnedCollection
{
	typedef System::Classes::TOwnedCollection inherited;
	
public:
	TJumpListItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	System::Classes::TNotifyEvent FOnChange;
	HIDESBASE TJumpListItem* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TJumpListItem* const Value);
	
protected:
	virtual void __fastcall Update(System::Classes::TCollectionItem* Item);
	
public:
	_di_IObjectArray __fastcall GetObjectArray();
	__property TJumpListItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
public:
	/* TOwnedCollection.Create */ inline __fastcall TJumpListCollection(System::Classes::TPersistent* AOwner, System::Classes::TCollectionItemClass ItemClass) : System::Classes::TOwnedCollection(AOwner, ItemClass) { }
	
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TJumpListCollection() { }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TJumpCategoryItem : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	TJumpListCollection* FItems;
	System::UnicodeString FCategoryName;
	bool FVisible;
	void __fastcall SetVisible(const bool Value);
	void __fastcall SetCategoryName(const System::UnicodeString Value);
	void __fastcall SetItems(TJumpListCollection* const Value);
	void __fastcall OnItemsChange(System::TObject* Sender);
	
public:
	__fastcall virtual TJumpCategoryItem(System::Classes::TCollection* Collection);
	__fastcall virtual ~TJumpCategoryItem();
	
__published:
	__property bool Visible = {read=FVisible, write=SetVisible, default=1};
	__property System::UnicodeString CategoryName = {read=FCategoryName, write=SetCategoryName};
	__property TJumpListCollection* Items = {read=FItems, write=SetItems};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TJumpCategories : public System::Classes::TOwnedCollection
{
	typedef System::Classes::TOwnedCollection inherited;
	
public:
	TJumpCategoryItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	System::Classes::TNotifyEvent FOnChange;
	HIDESBASE TJumpCategoryItem* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TJumpCategoryItem* const Value);
	
protected:
	virtual void __fastcall Update(System::Classes::TCollectionItem* Item);
	
public:
	int __fastcall GetCategoryIndex(const System::UnicodeString CategoryName);
	__property TJumpCategoryItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
public:
	/* TOwnedCollection.Create */ inline __fastcall TJumpCategories(System::Classes::TPersistent* AOwner, System::Classes::TCollectionItemClass ItemClass) : System::Classes::TOwnedCollection(AOwner, ItemClass) { }
	
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TJumpCategories() { }
	
};


typedef void __fastcall (__closure *TItemDeletedByUserEvent)(System::TObject* Sender, TJumpListItem* const Item, const System::UnicodeString CategoryName, bool FromTasks);

typedef void __fastcall (__closure *TCreatingListErrorEvent)(System::TObject* Sender, unsigned WinErrorCode, const System::UnicodeString ErrorDescription, bool &Handled);

class PASCALIMPLEMENTATION TCustomJumpList : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	TJumpCategories* FCustomCategories;
	TJumpListCollection* FTaskList;
	bool FShowRecent;
	bool FShowFrequent;
	TItemDeletedByUserEvent FOnItemDeleted;
	_di_ICustomDestinationList FDestinationList;
	System::UnicodeString FApplicationID;
	bool FAutoRefresh;
	bool FIsCreatingList;
	TCreatingListErrorEvent FOnListUpdateError;
	System::Classes::TNotifyEvent FOnItemsLoaded;
	bool FEnabled;
	void __fastcall ChangeProcessAppId(const System::UnicodeString AppId);
	void __fastcall ProcessRemovedObjects(const _di_IObjectArray ObjArray);
	void __fastcall ProcessRemoved(const System::UnicodeString Path, const System::UnicodeString Arguments, const System::UnicodeString FriendlyName);
	void __fastcall SetAutoRefresh(const bool Value);
	void __fastcall SetCustomCategories(TJumpCategories* const Value);
	void __fastcall SetTaskList(TJumpListCollection* const Value);
	void __fastcall SetShowRecent(const bool Value);
	void __fastcall DoAutoRefresh();
	void __fastcall SetShowFrequent(const bool Value);
	void __fastcall OnListChange(System::TObject* Sender);
#ifndef _WIN64
	__classmethod void __fastcall RetrievePathsFromArray(const _di_IObjectArray ObjectArray, /* out */ System::DynamicArray<System::UnicodeString> &Items);
#else /* _WIN64 */
	__classmethod void __fastcall RetrievePathsFromArray(const _di_IObjectArray ObjectArray, /* out */ System::TArray__1<System::UnicodeString> &Items);
#endif /* _WIN64 */
	__classmethod bool __fastcall GetDocList(int ListType, const System::UnicodeString AppModelID, /* out */ _di_IObjectArray &ObjectList, int NumItems = 0x0)/* overload */;
	void __fastcall SetEnabled(const bool Value);
	void __fastcall CheckProcessAppId();
	void __fastcall CheckCanEnable();
	void __fastcall DoEnable();
	bool __fastcall CheckUpdateError(HRESULT ErrNo, const System::UnicodeString Description);
	
protected:
	virtual void __fastcall Loaded();
	
public:
	__fastcall virtual TCustomJumpList(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomJumpList();
	__classmethod void __fastcall AddToRecent(const System::UnicodeString Path)/* overload */;
	__classmethod void __fastcall AddToRecent(const _di_IShellLinkW ShellLink)/* overload */;
	__classmethod void __fastcall AddToRecent(TJumpListItem* const JumpItem)/* overload */;
	__classmethod bool __fastcall RemoveFromRecent(const System::UnicodeString Path, const System::UnicodeString AppModelID)/* overload */;
	__classmethod bool __fastcall RemoveFromRecent(const System::_di_IInterface ShellItem, const System::UnicodeString AppModelID)/* overload */;
	__classmethod bool __fastcall RemoveFromRecent(TJumpListItem* const JumpItem, const System::UnicodeString AppModelID)/* overload */;
	__classmethod bool __fastcall RemoveAllFromRecent(const System::UnicodeString AppModelID);
	__classmethod bool __fastcall GetRecentList(const System::UnicodeString AppModelID, /* out */ _di_IObjectArray &ObjectList, int NumItems = 0x0)/* overload */;
#ifndef _WIN64
	__classmethod bool __fastcall GetRecentList(const System::UnicodeString AppModelID, /* out */ System::DynamicArray<System::UnicodeString> &Items, int NumItems = 0x0)/* overload */;
#else /* _WIN64 */
	__classmethod bool __fastcall GetRecentList(const System::UnicodeString AppModelID, /* out */ System::TArray__1<System::UnicodeString> &Items, int NumItems = 0x0)/* overload */;
#endif /* _WIN64 */
	__classmethod bool __fastcall GetFrequentList(const System::UnicodeString AppModelID, /* out */ _di_IObjectArray &ObjectList, int NumItems = 0x0)/* overload */;
#ifndef _WIN64
	__classmethod bool __fastcall GetFrequentList(const System::UnicodeString AppModelID, /* out */ System::DynamicArray<System::UnicodeString> &Items, int NumItems = 0x0)/* overload */;
#else /* _WIN64 */
	__classmethod bool __fastcall GetFrequentList(const System::UnicodeString AppModelID, /* out */ System::TArray__1<System::UnicodeString> &Items, int NumItems = 0x0)/* overload */;
#endif /* _WIN64 */
	int __fastcall AddCategory(const System::UnicodeString CategoryName);
	TJumpListItem* __fastcall AddTask(const System::UnicodeString FriendlyName, const System::UnicodeString Path = System::UnicodeString(), const System::UnicodeString Arguments = System::UnicodeString(), const System::UnicodeString Icon = System::UnicodeString());
	TJumpListItem* __fastcall AddTaskSeparator();
	TJumpListItem* __fastcall AddItemToCategory(int CategoryIndex, const System::UnicodeString FriendlyName, const System::UnicodeString Path = System::UnicodeString(), const System::UnicodeString Arguments = System::UnicodeString(), const System::UnicodeString Icon = System::UnicodeString());
	bool __fastcall UpdateList();
	bool __fastcall DeleteList();
	__property bool AutoRefresh = {read=FAutoRefresh, write=SetAutoRefresh, default=0};
	__property bool Enabled = {read=FEnabled, write=SetEnabled, default=0};
	__property System::UnicodeString ApplicationID = {read=FApplicationID, write=FApplicationID};
	__property TJumpCategories* CustomCategories = {read=FCustomCategories, write=SetCustomCategories};
	__property bool ShowRecent = {read=FShowRecent, write=SetShowRecent, default=0};
	__property bool ShowFrequent = {read=FShowFrequent, write=SetShowFrequent, default=0};
	__property TJumpListCollection* TaskList = {read=FTaskList, write=SetTaskList};
	__property TItemDeletedByUserEvent OnItemDeleted = {read=FOnItemDeleted, write=FOnItemDeleted};
	__property TCreatingListErrorEvent OnListUpdateError = {read=FOnListUpdateError, write=FOnListUpdateError};
	__property System::Classes::TNotifyEvent OnItemsLoaded = {read=FOnItemsLoaded, write=FOnItemsLoaded};
};


class PASCALIMPLEMENTATION TJumpList : public TCustomJumpList
{
	typedef TCustomJumpList inherited;
	
__published:
	__property AutoRefresh = {default=0};
	__property Enabled = {default=0};
	__property ApplicationID = {default=0};
	__property CustomCategories;
	__property ShowRecent = {default=0};
	__property ShowFrequent = {default=0};
	__property TaskList;
	__property OnItemDeleted;
	__property OnListUpdateError;
	__property OnItemsLoaded;
public:
	/* TCustomJumpList.Create */ inline __fastcall virtual TJumpList(System::Classes::TComponent* AOwner) : TCustomJumpList(AOwner) { }
	/* TCustomJumpList.Destroy */ inline __fastcall virtual ~TJumpList() { }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EJumpListItemException : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EJumpListItemException(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EJumpListItemException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EJumpListItemException(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EJumpListItemException(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EJumpListItemException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EJumpListItemException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EJumpListItemException(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EJumpListItemException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EJumpListItemException(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EJumpListItemException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EJumpListItemException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EJumpListItemException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EJumpListItemException() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EJumpListException : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EJumpListException(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EJumpListException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EJumpListException(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EJumpListException(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EJumpListException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EJumpListException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EJumpListException(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EJumpListException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EJumpListException(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EJumpListException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EJumpListException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EJumpListException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EJumpListException() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Jumplist */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_JUMPLIST)
using namespace Vcl::Jumplist;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_JumplistHPP
