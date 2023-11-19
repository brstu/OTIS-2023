// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.ActnMan.pas' rev: 35.00 (Windows)

#ifndef Vcl_ActnmanHPP
#define Vcl_ActnmanHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.oleacc.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <System.Actions.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.ToolWin.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Themes.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.StdCtrls.hpp>
#include <System.UITypes.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------
#if defined(_VCL_ALIAS_RECORDS)
#if !defined(STRICT)
  #pragma alias "@Vcl@Actnman@TCustomActionBar@NCPaint$qqrpv"="@Vcl@Actnman@TCustomActionBar@NCPaint$qqrp5HDC__"
#endif
#endif

namespace Vcl
{
namespace Actnman
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TActionBarStyle;
class DELPHICLASS TCustomActionManager;
class DELPHICLASS TActionManager;
class DELPHICLASS TActionListItem;
class DELPHICLASS TActionListCollection;
class DELPHICLASS TActionClientsCollection;
class DELPHICLASS TActionClient;
class DELPHICLASS TActionBarItem;
class DELPHICLASS TActionBars;
class DELPHICLASS TActionClients;
class DELPHICLASS TActionClientLink;
class DELPHICLASS TCommandProperties;
class DELPHICLASS TCheckBoxProperties;
class DELPHICLASS TButtonProperties;
class DELPHICLASS TGalleryProperties;
class DELPHICLASS TTextProperties;
class DELPHICLASS TControlProperties;
class DELPHICLASS TMenuProperties;
class DELPHICLASS TComboBoxProperties;
class DELPHICLASS TActionClientItem;
class DELPHICLASS TActionDragBaseClass;
class DELPHICLASS TCustomActionClass;
class DELPHICLASS TActionDragObject;
class DELPHICLASS TCategoryDragObject;
class DELPHICLASS TActionItemDragObject;
class DELPHICLASS TCustomActionBarColorMap;
class DELPHICLASS TCustomActionBar;
struct TCMItemMsg;
class DELPHICLASS TCustomActionControl;
__interface DELPHIINTERFACE IActionBarDesigner;
typedef System::DelphiInterface<IActionBarDesigner> _di_IActionBarDesigner;
class DELPHICLASS TXToolDockForm;
class DELPHICLASS TActionBarStyleList;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
typedef System::TMetaClass* TActionClientItemClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TActionClientItemClass);
#endif /* _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TActionClientsClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TActionClientsClass);
#endif /* _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TActionBarsClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TActionBarsClass);
#endif /* _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TActionBarItemClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TActionBarItemClass);
#endif /* _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TCommandPropertiesClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TCommandPropertiesClass);
#endif /* _WIN64 */

typedef void __fastcall (__closure *TGetBarsClassEvent)(TCustomActionManager* Sender, TActionBarsClass BarsClass);

typedef void __fastcall (__closure *TGetBarItemClassEvent)(TCustomActionManager* Sender, TActionBarItemClass &BarItemClass);

typedef void __fastcall (__closure *TGetClientsClassEvent)(TCustomActionManager* Sender, TActionClientsClass &ClientsClass);

typedef void __fastcall (__closure *TGetClientItemClassEvent)(TCustomActionManager* Sender, TActionClientItemClass &ClientItemClass);

typedef void __fastcall (__closure *TGetCommandPropertiesClassEvent)(TCustomActionManager* Sender, TActionClientItem* AnItem, TCommandPropertiesClass &CommandPropertiesClass);

typedef void __fastcall (__closure *TStyleChanged)(TCustomActionManager* Sender);

typedef void __fastcall (__closure *TActionProc)(TActionClient* AClient);

#ifndef _WIN64
typedef System::TMetaClass* TCustomActionControlClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TCustomActionControlClass);
#endif /* _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TCustomColorMapClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TCustomColorMapClass);
#endif /* _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TActionBarStyle : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	virtual TCustomActionControlClass __fastcall GetControlClass(TCustomActionBar* ActionBar, TActionClientItem* AnItem) = 0 ;
	virtual TCustomColorMapClass __fastcall GetColorMapClass(TCustomActionBar* ActionBar) = 0 ;
	virtual System::UnicodeString __fastcall GetStyleName() = 0 ;
public:
	/* TObject.Create */ inline __fastcall TActionBarStyle() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TActionBarStyle() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TCustomActionManager : public Vcl::Actnlist::TCustomActionList
{
	typedef Vcl::Actnlist::TCustomActionList inherited;
	
private:
	Vcl::Actnlist::TCustomAction* FAction;
	TActionBars* FActionBars;
	System::UnicodeString FCompareCaption;
	TActionProc FCompareProc;
	Vcl::Imglist::TChangeLink* FDisabledImageChangeLink;
	Vcl::Imglist::TCustomImageList* FDisabledImages;
	TActionClientItem* FFoundClient;
	TActionListCollection* FLinkedActionLists;
	TActionBars* FDefaultActionBars;
	System::Sysutils::TFileName FFileName;
	Vcl::Imglist::TChangeLink* FLargeDisabledImageChangeLink;
	Vcl::Imglist::TCustomImageList* FLargeDisabledImages;
	Vcl::Imglist::TChangeLink* FLargeImageChangeLink;
	Vcl::Imglist::TCustomImageList* FLargeImages;
	bool FLoading;
	System::Classes::TStringList* FPrioritySchedule;
	bool FSaved;
	TGetBarItemClassEvent FOnGetBarItemClass;
	TGetBarsClassEvent FOnGetBarsClass;
	TGetClientItemClassEvent FOnGetClientItemClass;
	TGetClientsClassEvent FOnGetClientsClass;
	TStyleChanged FOnStyleChanged;
	TActionBarStyle* FStyle;
	TGetCommandPropertiesClassEvent FOnGetCommandPropertiesClass;
	void __fastcall CompareCaption(TActionClient* AClient);
	void __fastcall CompareAction(TActionClient* AClient);
	TActionClientItem* __fastcall FindItem();
	void __fastcall SetActionBars(TActionBars* const Value);
	void __fastcall SetPrioritySchedule(System::Classes::TStringList* const Value);
	HIDESBASE void __fastcall ImageListChange(System::TObject* Sender);
	bool __fastcall IsPriorityScheduleStored();
	void __fastcall SetLinkedActionLists(TActionListCollection* const Value);
	bool __fastcall IsLinkedActionListsStored();
	bool __fastcall IsActionBarsStored();
	TActionListCollection* __fastcall GetLinkedActionLists();
	System::Sysutils::TFileName __fastcall GetFileName();
	void __fastcall ReadStyleProp(System::Classes::TReader* Reader);
	void __fastcall WriteStyleProp(System::Classes::TWriter* Writer);
	void __fastcall SetStyle(TActionBarStyle* const Value);
	void __fastcall ResetClientUsageData(TActionClient* AClient);
	void __fastcall SetFileName(System::Sysutils::TFileName Value);
	void __fastcall SetDisabledImages(Vcl::Imglist::TCustomImageList* const Value);
	void __fastcall SetLargeDisabledImages(Vcl::Imglist::TCustomImageList* const Value);
	void __fastcall SetLargeImages(Vcl::Imglist::TCustomImageList* const Value);
	
protected:
	virtual void __fastcall Change();
	TActionBars* __fastcall CreateActionBars();
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	TActionClientItem* __fastcall FindActionClient(System::Actions::TContainedAction* AnAction, TActionClientsCollection* Clients = (TActionClientsCollection*)(0x0));
	TActionClient* __fastcall FindActionBar(TCustomActionBar* ActionBar, TActionClientsCollection* Clients = (TActionClientsCollection*)(0x0));
	void __fastcall FindClient(TActionClient* AClient);
	DYNAMIC TActionBarsClass __fastcall GetActionBarsClass();
	DYNAMIC TActionBarItemClass __fastcall GetActionBarItemClass();
	DYNAMIC TActionClientsClass __fastcall GetActionClientsClass();
	virtual bool __fastcall GetUsage(TActionClientItem* AnItem);
	bool __fastcall HasLinkedActionLists();
	virtual void __fastcall Loaded();
	void __fastcall LoadMenu(TActionClients* Clients, Vcl::Menus::TMenuItem* AMenu);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall SetState(const System::Actions::TActionListState Value);
	void __fastcall SetupActionBars(TActionClientsCollection* ActionBars);
	virtual void __fastcall SetImages(Vcl::Imglist::TCustomImageList* Value);
	__property bool Loading = {read=FLoading, nodefault};
	__property TGetBarItemClassEvent OnGetBarItemClass = {read=FOnGetBarItemClass, write=FOnGetBarItemClass};
	__property TGetBarsClassEvent OnGetBarsClass = {read=FOnGetBarsClass, write=FOnGetBarsClass};
	__property TGetClientsClassEvent OnGetClientsClass = {read=FOnGetClientsClass, write=FOnGetClientsClass};
	__property TGetClientItemClassEvent OnGetClientItemClass = {read=FOnGetClientItemClass, write=FOnGetClientItemClass};
	__property TGetCommandPropertiesClassEvent OnGetCommandPropertiesClass = {read=FOnGetCommandPropertiesClass, write=FOnGetCommandPropertiesClass};
	
public:
	__fastcall virtual TCustomActionManager(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomActionManager();
	DYNAMIC TActionClientItemClass __fastcall GetActionClientItemClass();
	DYNAMIC TCommandPropertiesClass __fastcall GetCommandPropertiesClass(TActionClientItem* AnItem);
	HIDESBASE TActionClientItem* __fastcall AddAction(Vcl::Actnlist::TCustomAction* AnAction, TActionClient* AClient, bool After = true);
	TActionClientItem* __fastcall AddCategory(System::UnicodeString ACategory, TActionClient* AClient, bool After = true);
	TActionClientItem* __fastcall AddSeparator(TActionClientItem* AnItem, bool After = true);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall DeleteActionItems(Vcl::Actnlist::TCustomAction* *Actions, const int Actions_High);
	void __fastcall DeleteItem(System::UnicodeString Caption);
	TActionClientItem* __fastcall FindItemByCaption(System::UnicodeString ACaption);
	TActionClientItem* __fastcall FindItemByAction(Vcl::Actnlist::TCustomAction* Action);
	void __fastcall LoadFromFile(const System::UnicodeString Filename);
	void __fastcall LoadFromStream(System::Classes::TStream* S);
	void __fastcall ResetActionBar(int Index);
	void __fastcall ResetUsageData();
	void __fastcall SaveToFile(const System::UnicodeString Filename);
	void __fastcall SaveToStream(System::Classes::TStream* S);
	virtual void __fastcall AfterConstruction();
	__property TActionBars* ActionBars = {read=FActionBars, write=SetActionBars, stored=IsActionBarsStored};
	__property TActionBars* DefaultActionBars = {read=FDefaultActionBars};
	__property Vcl::Imglist::TCustomImageList* DisabledImages = {read=FDisabledImages, write=SetDisabledImages};
	__property Vcl::Imglist::TCustomImageList* LargeDisabledImages = {read=FLargeDisabledImages, write=SetLargeDisabledImages};
	__property Vcl::Imglist::TCustomImageList* LargeImages = {read=FLargeImages, write=SetLargeImages};
	__property TActionListCollection* LinkedActionLists = {read=GetLinkedActionLists, write=SetLinkedActionLists, stored=IsLinkedActionListsStored};
	__property System::Sysutils::TFileName FileName = {read=GetFileName, write=SetFileName};
	__property Images;
	__property System::Classes::TStringList* PrioritySchedule = {read=FPrioritySchedule, write=SetPrioritySchedule, stored=IsPriorityScheduleStored};
	__property TActionBarStyle* Style = {read=FStyle, write=SetStyle};
	__property TStyleChanged OnStyleChanged = {read=FOnStyleChanged, write=FOnStyleChanged};
};


class PASCALIMPLEMENTATION TActionManager : public TCustomActionManager
{
	typedef TCustomActionManager inherited;
	
__published:
	__property FileName = {default=0};
	__property ActionBars;
	__property DisabledImages;
	__property LargeDisabledImages;
	__property LargeImages;
	__property LinkedActionLists;
	__property Images;
	__property PrioritySchedule;
	__property State = {default=0};
	__property Style;
	__property OnChange;
	__property OnExecute;
	__property OnGetBarItemClass;
	__property OnGetBarsClass;
	__property OnGetClientsClass;
	__property OnGetClientItemClass;
	__property OnGetCommandPropertiesClass;
	__property OnUpdate;
	__property OnStateChange;
	__property OnStyleChanged;
public:
	/* TCustomActionManager.Create */ inline __fastcall virtual TActionManager(System::Classes::TComponent* AOwner) : TCustomActionManager(AOwner) { }
	/* TCustomActionManager.Destroy */ inline __fastcall virtual ~TActionManager() { }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TActionListItem : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	Vcl::Actnlist::TCustomActionList* FActionList;
	System::UnicodeString FCaption;
	void __fastcall SetActionList(Vcl::Actnlist::TCustomActionList* const Value);
	System::UnicodeString __fastcall GetCaption();
	
protected:
	virtual System::UnicodeString __fastcall GetDisplayName();
	TActionListCollection* __fastcall Owner();
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property Vcl::Actnlist::TCustomActionList* ActionList = {read=FActionList, write=SetActionList};
	__property System::UnicodeString Caption = {read=GetCaption, write=FCaption};
public:
	/* TCollectionItem.Create */ inline __fastcall virtual TActionListItem(System::Classes::TCollection* Collection) : System::Classes::TCollectionItem(Collection) { }
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TActionListItem() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TActionListCollection : public System::Classes::TOwnedCollection
{
	typedef System::Classes::TOwnedCollection inherited;
	
public:
	TActionListItem* operator[](int Index) { return this->ListItems[Index]; }
	
private:
	TCustomActionManager* __fastcall GetActionManager();
	TActionListItem* __fastcall GetListItem(int Index);
	void __fastcall SetListItem(int Index, TActionListItem* const Value);
	
public:
	__property TCustomActionManager* ActionManager = {read=GetActionManager};
	__property TActionListItem* ListItems[int Index] = {read=GetListItem, write=SetListItem/*, default*/};
public:
	/* TOwnedCollection.Create */ inline __fastcall TActionListCollection(System::Classes::TPersistent* AOwner, System::Classes::TCollectionItemClass ItemClass) : System::Classes::TOwnedCollection(AOwner, ItemClass) { }
	
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TActionListCollection() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TActionClientsCollection : public System::Classes::TOwnedCollection
{
	typedef System::Classes::TOwnedCollection inherited;
	
public:
	TActionClient* operator[](const int Index) { return this->ActionClients[Index]; }
	
private:
	bool FAutoHotKeys;
	TActionClient* FParentItem;
	bool FCustomizable;
	TActionClient* __fastcall GetActionClient(const int Index);
	void __fastcall SetActionClient(const int Index, TActionClient* const Value);
	void __fastcall SetAutoHotKeys(const bool Value);
	
protected:
	TCustomActionManager* __fastcall GetActionManager();
	bool __fastcall InternalRethinkHotkeys(bool ForceRethink);
	__property TActionClient* ActionClients[const int Index] = {read=GetActionClient, write=SetActionClient/*, default*/};
	__property TActionClient* ParentItem = {read=FParentItem, write=FParentItem};
	
public:
	__fastcall virtual TActionClientsCollection(System::Classes::TPersistent* AOwner, System::Classes::TCollectionItemClass ItemClass);
	void __fastcall IterateClients(TActionClientsCollection* Clients, TActionProc ActionProc);
	virtual void __fastcall AfterConstruction();
	__property TCustomActionManager* ActionManager = {read=GetActionManager};
	__property bool AutoHotKeys = {read=FAutoHotKeys, write=SetAutoHotKeys, nodefault};
	__property bool Customizable = {read=FCustomizable, write=FCustomizable, default=1};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TActionClientsCollection() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TBackgroundLayout : unsigned char { blNormal, blStretch, blTile, blLeftBanner, blRightBanner };

enum DECLSPEC_DENUM TChangesAllowed : unsigned char { caModify, caMove, caDelete };

typedef System::Set<TChangesAllowed, TChangesAllowed::caModify, TChangesAllowed::caDelete> TChangesAllowedSet;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TActionClient : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	TCustomActionBar* FActionBar;
	Vcl::Graphics::TPicture* FBackground;
	TBackgroundLayout FBackgroundLayout;
	TCustomActionBar* FChildActionBar;
	TActionClients* FContextItems;
	System::UnicodeString FCaption;
	System::Uitypes::TColor FColor;
	bool FSmallIcons;
	TActionClients* FItems;
	bool FVisible;
	TChangesAllowedSet FChangesAllowed;
	_di_IAccessible FAccessible;
	NativeInt FTag;
	TActionClients* __fastcall GetContextItems();
	void __fastcall SetActionBar(TCustomActionBar* const Value);
	void __fastcall SetItems(TActionClients* const Value);
	void __fastcall SetBackground(Vcl::Graphics::TPicture* const Value);
	void __fastcall SetBackgroundLayout(const TBackgroundLayout Value);
	void __fastcall SetContextItems(TActionClients* const Value);
	bool __fastcall IsBackgroundStored();
	bool __fastcall AreContextItemsStored();
	Vcl::Graphics::TPicture* __fastcall GetBackground();
	TActionClients* __fastcall GetItems();
	bool __fastcall IsItemsStored();
	bool __fastcall GetHasItems();
	TActionClientsCollection* __fastcall GetOwningCollection();
	
protected:
	void __fastcall ClearActionBar();
	virtual void __fastcall ColorChanged();
	void __fastcall FreeChildren();
	bool __fastcall HasVisibleItems();
	bool __fastcall IsChildItem(TActionClient* AClient);
	virtual void __fastcall SetChangesAllowed(const TChangesAllowedSet Value);
	virtual void __fastcall SetColor(const System::Uitypes::TColor Value);
	virtual void __fastcall SetVisible(const bool Value);
	
public:
	__fastcall virtual TActionClient(System::Classes::TCollection* Collection);
	__fastcall virtual ~TActionClient();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	bool __fastcall HasBackground();
	virtual void __fastcall Refresh();
	__property TCustomActionBar* ActionBar = {read=FActionBar, write=SetActionBar};
	__property TCustomActionBar* ChildActionBar = {read=FChildActionBar, write=FChildActionBar};
	__property bool HasItems = {read=GetHasItems, nodefault};
	__property TActionClientsCollection* OwningCollection = {read=GetOwningCollection};
	
__published:
	__property TChangesAllowedSet ChangesAllowed = {read=FChangesAllowed, write=SetChangesAllowed, default=7};
	__property System::Uitypes::TColor Color = {read=FColor, write=SetColor, default=536870912};
	__property TActionClients* ContextItems = {read=GetContextItems, write=SetContextItems, stored=AreContextItemsStored};
	__property Vcl::Graphics::TPicture* Background = {read=GetBackground, write=SetBackground, stored=IsBackgroundStored};
	__property TBackgroundLayout BackgroundLayout = {read=FBackgroundLayout, write=SetBackgroundLayout, default=0};
	__property TActionClients* Items = {read=GetItems, write=SetItems, stored=IsItemsStored};
	__property bool Visible = {read=FVisible, write=SetVisible, default=1};
	__property _di_IAccessible Accessible = {read=FAccessible, write=FAccessible};
	__property NativeInt Tag = {read=FTag, write=FTag, default=0};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TActionBarItem : public TActionClient
{
	typedef TActionClient inherited;
	
private:
	bool FAutoSize;
	Vcl::Buttons::TButtonLayout FGlyphLayout;
	TActionBars* __fastcall GetActionBars();
	void __fastcall SetAutoSize(const bool Value);
	void __fastcall SetGlyphLayout(const Vcl::Buttons::TButtonLayout Value);
	
protected:
	virtual void __fastcall ColorChanged();
	virtual System::UnicodeString __fastcall GetDisplayName();
	virtual void __fastcall SetVisible(const bool Value);
	__property TActionBars* ActionBars = {read=GetActionBars};
	
public:
	__fastcall virtual TActionBarItem(System::Classes::TCollection* Collection);
	virtual void __fastcall Refresh();
	
__published:
	__property ActionBar;
	__property bool AutoSize = {read=FAutoSize, write=SetAutoSize, default=1};
	__property Vcl::Buttons::TButtonLayout GlyphLayout = {read=FGlyphLayout, write=SetGlyphLayout, default=0};
public:
	/* TActionClient.Destroy */ inline __fastcall virtual ~TActionBarItem() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TActionBars : public TActionClientsCollection
{
	typedef TActionClientsCollection inherited;
	
public:
	TActionBarItem* operator[](const int Index) { return this->ActionBars[Index]; }
	
private:
	int FSessionCount;
	bool FShowHint;
	TActionBarItem* __fastcall GetActionBar(const int Index);
	void __fastcall SetShowHints(const bool Value);
	void __fastcall SetHintShortCuts(const bool Value);
	bool __fastcall GetHintShortCuts();
	
protected:
	void __fastcall DoShowHint(TActionClient* AClient);
	void __fastcall Loaded();
	virtual void __fastcall Notify(System::Classes::TCollectionItem* Item, System::Generics::Collections::TCollectionNotification Action);
	
public:
	__fastcall virtual TActionBars(System::Classes::TPersistent* AOwner, System::Classes::TCollectionItemClass ItemClass);
	HIDESBASE TActionBarItem* __fastcall Add();
	__property TActionBarItem* ActionBars[const int Index] = {read=GetActionBar/*, default*/};
	
__published:
	__property Customizable = {default=1};
	__property bool HintShortCuts = {read=GetHintShortCuts, write=SetHintShortCuts, default=1};
	__property int SessionCount = {read=FSessionCount, write=FSessionCount, default=0};
	__property bool ShowHints = {read=FShowHint, write=SetShowHints, default=1};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TActionBars() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TActionClientClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TActionClientClass);
#endif /* _WIN64 */

enum DECLSPEC_DENUM TCaptionOptions : unsigned char { coNone, coSelective, coAll };

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TActionClients : public TActionClientsCollection
{
	typedef TActionClientsCollection inherited;
	
public:
	TActionClientItem* operator[](const int Index) { return this->ActionClients[Index]; }
	
private:
	TCaptionOptions FCaptionOptions;
	bool FSmallIcons;
	bool FHideUnused;
	HIDESBASE TActionClientItem* __fastcall GetActionClient(const int Index);
	HIDESBASE void __fastcall SetActionClient(const int Index, TActionClientItem* const Value);
	void __fastcall SetCaptionOptions(const TCaptionOptions Value);
	void __fastcall SetSmallIcons(const bool Value);
	void __fastcall SetHideUnused(const bool Value);
	
protected:
	void __fastcall DoHideUnused(TActionClient* AClient);
	void __fastcall DoShowCaptions(TActionClient* AClient);
	void __fastcall ToggleSmallIcons(TActionClients* Clients, bool Small);
	virtual void __fastcall Notify(System::Classes::TCollectionItem* Item, System::Generics::Collections::TCollectionNotification Action);
	
public:
	__fastcall virtual TActionClients(System::Classes::TPersistent* AOwner, System::Classes::TCollectionItemClass ItemClass);
	HIDESBASE TActionClientItem* __fastcall Add();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	int __fastcall VisibleCount();
	__property TActionClientItem* ActionClients[const int Index] = {read=GetActionClient, write=SetActionClient/*, default*/};
	__property TCustomActionManager* ActionManager = {read=GetActionManager};
	
__published:
	__property AutoHotKeys = {default=1};
	__property Customizable = {default=1};
	__property bool HideUnused = {read=FHideUnused, write=SetHideUnused, default=1};
	__property TCaptionOptions CaptionOptions = {read=FCaptionOptions, write=SetCaptionOptions, default=1};
	__property bool SmallIcons = {read=FSmallIcons, write=SetSmallIcons, default=1};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TActionClients() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TActionClientLinkClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TActionClientLinkClass);
#endif /* _WIN64 */

class PASCALIMPLEMENTATION TActionClientLink : public Vcl::Actnlist::TActionLink
{
	typedef Vcl::Actnlist::TActionLink inherited;
	
protected:
	TActionClientItem* FClient;
	virtual void __fastcall AssignClient(System::TObject* AClient);
	virtual bool __fastcall IsCaptionLinked();
	virtual bool __fastcall IsEnabledLinked();
	virtual bool __fastcall IsHelpContextLinked();
	virtual bool __fastcall IsHintLinked();
	virtual bool __fastcall IsImageIndexLinked();
	virtual bool __fastcall IsOnExecuteLinked();
	virtual bool __fastcall IsShortCutLinked();
	virtual bool __fastcall IsVisibleLinked();
	virtual bool __fastcall DoShowHint(System::UnicodeString &HintStr);
	virtual void __fastcall SetCaption(const System::UnicodeString Value);
	virtual void __fastcall SetChecked(bool Value);
	virtual void __fastcall SetEnabled(bool Value);
	virtual void __fastcall SetHelpContext(System::Classes::THelpContext Value);
	virtual void __fastcall SetHint(const System::UnicodeString Value);
	virtual void __fastcall SetImageIndex(int Value);
	virtual void __fastcall SetOnExecute(System::Classes::TNotifyEvent Value);
	virtual void __fastcall SetShortCut(System::Classes::TShortCut Value);
	virtual void __fastcall SetVisible(bool Value);
public:
	/* TBasicActionLink.Create */ inline __fastcall virtual TActionClientLink(System::TObject* AClient) : Vcl::Actnlist::TActionLink(AClient) { }
	/* TBasicActionLink.Destroy */ inline __fastcall virtual ~TActionClientLink() { }
	
};


class PASCALIMPLEMENTATION TCommandProperties : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
	
public:
	enum DECLSPEC_DENUM TChangeState : unsigned char { csIgnore, csRecreate, csRebuild };
	
	
protected:
	typedef void __fastcall (__closure *TCommandPropertiesChangeEvent)(System::TObject* Sender, TChangeState State);
	
	
private:
	TActionClientItem* FActionClientItem;
	TCommandPropertiesChangeEvent FOnChange;
	TChangeState FChangeState;
	TCustomActionControl* __fastcall GetControl();
	
protected:
	void __fastcall InvalidateControl(const bool ResetBounds);
	virtual void __fastcall DoChanged();
	
public:
	__fastcall virtual TCommandProperties(TActionClientItem* AItem);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property TCustomActionControl* Control = {read=GetControl};
	__property TActionClientItem* ActionClientItem = {read=FActionClientItem, write=FActionClientItem};
	__property TCommandPropertiesChangeEvent OnChange = {read=FOnChange, write=FOnChange};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TCommandProperties() { }
	
};


class PASCALIMPLEMENTATION TCheckBoxProperties : public TCommandProperties
{
	typedef TCommandProperties inherited;
	
private:
	int FWidth;
	void __fastcall SetWidth(const int Value);
	
protected:
	virtual void __fastcall DoSetWidth();
	
public:
	__fastcall virtual TCheckBoxProperties(TActionClientItem* AItem);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property int Width = {read=FWidth, write=SetWidth, nodefault};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TCheckBoxProperties() { }
	
};


class PASCALIMPLEMENTATION TButtonProperties : public TCommandProperties
{
	typedef TCommandProperties inherited;
	
	
public:
	enum DECLSPEC_DENUM TButtonSize : unsigned char { bsSmall, bsLarge };
	
	enum DECLSPEC_DENUM TButtonType : unsigned char { btNone, btDropDown, btSplit, btGallery };
	
	enum DECLSPEC_DENUM TGroupPosition : unsigned char { gpNone, gpStart, gpMiddle, gpEnd, gpSingle };
	
	enum DECLSPEC_DENUM TTextAssociation : unsigned char { taImage, taDropdown };
	
	
private:
	TButtonSize FButtonSize;
	TButtonType FButtonType;
	TGroupPosition FGroupPosition;
	TTextAssociation FTextAssociation;
	void __fastcall SetButtonType(const TButtonType Value);
	void __fastcall SetButtonSize(const TButtonSize Value);
	void __fastcall SetGroupPosition(const TGroupPosition Value);
	void __fastcall SetTextAssociation(const TTextAssociation Value);
	
public:
	__fastcall virtual TButtonProperties(TActionClientItem* AItem);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property TButtonSize ButtonSize = {read=FButtonSize, write=SetButtonSize, default=0};
	__property TButtonType ButtonType = {read=FButtonType, write=SetButtonType, default=0};
	__property TGroupPosition GroupPosition = {read=FGroupPosition, write=SetGroupPosition, default=0};
	__property TTextAssociation TextAssociation = {read=FTextAssociation, write=SetTextAssociation, default=0};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TButtonProperties() { }
	
};


class PASCALIMPLEMENTATION TGalleryProperties : public TButtonProperties
{
	typedef TButtonProperties inherited;
	
	
public:
	enum DECLSPEC_DENUM TGalleryType : unsigned char { gtDropDown, gtGrid, gtRibbon };
	
	
private:
	TGalleryType FGalleryType;
	int FItemsPerRow;
	bool FShowRichContent;
	void __fastcall SetShowRichContent(const bool Value);
	
public:
	__fastcall virtual TGalleryProperties(TActionClientItem* AItem);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	TGalleryType __fastcall GetGalleryType();
	void __fastcall SetGalleryType(const TGalleryType Value);
	int __fastcall GetItemsPerRow();
	void __fastcall SetItemsPerRow(const int Value);
	
__published:
	__property TGalleryType GalleryType = {read=GetGalleryType, write=SetGalleryType, default=1};
	__property int ItemsPerRow = {read=GetItemsPerRow, write=SetItemsPerRow, default=4};
	__property bool ShowRichContent = {read=FShowRichContent, write=SetShowRichContent, default=0};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TGalleryProperties() { }
	
};


class PASCALIMPLEMENTATION TTextProperties : public TCheckBoxProperties
{
	typedef TCheckBoxProperties inherited;
	
private:
	System::Classes::TAlignment FAlignment;
	Vcl::Stdctrls::TEllipsisPosition FEllipsisPosition;
	Vcl::Graphics::TFont* FFont;
	bool FParentFont;
	void __fastcall FontChangeHandler(System::TObject* Sender);
	void __fastcall SetAlignment(const System::Classes::TAlignment Value);
	void __fastcall SetEllipsisPosition(const Vcl::Stdctrls::TEllipsisPosition Value);
	void __fastcall SetFont(Vcl::Graphics::TFont* const Value);
	void __fastcall SetParentFont(const bool Value);
	
public:
	__fastcall virtual TTextProperties(TActionClientItem* AItem);
	__fastcall virtual ~TTextProperties();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property System::Classes::TAlignment Alignment = {read=FAlignment, write=SetAlignment, default=0};
	__property Vcl::Stdctrls::TEllipsisPosition EllipsisPosition = {read=FEllipsisPosition, write=SetEllipsisPosition, default=0};
	__property Vcl::Graphics::TFont* Font = {read=FFont, write=SetFont};
	__property bool ParentFont = {read=FParentFont, write=SetParentFont, default=1};
};


class PASCALIMPLEMENTATION TControlProperties : public TCheckBoxProperties
{
	typedef TCheckBoxProperties inherited;
	
private:
	Vcl::Controls::TControl* FContainedControl;
	System::UnicodeString FText;
	int FLabelWidth;
	void __fastcall SetContainedControl(Vcl::Controls::TControl* const Value);
	void __fastcall SetText(const System::UnicodeString Value);
	void __fastcall SetLabelWidth(const int Value);
	
protected:
	virtual void __fastcall DoSetControlText(const System::UnicodeString Value);
	virtual void __fastcall DoSetWidth();
	
public:
	__fastcall virtual TControlProperties(TActionClientItem* AItem);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property Vcl::Controls::TControl* ContainedControl = {read=FContainedControl, write=SetContainedControl};
	__property int LabelWidth = {read=FLabelWidth, write=SetLabelWidth, default=-1};
	__property System::UnicodeString Text = {read=FText, write=SetText};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TControlProperties() { }
	
};


class PASCALIMPLEMENTATION TMenuProperties : public TControlProperties
{
	typedef TControlProperties inherited;
	
private:
	System::Classes::TStrings* FContent;
	Vcl::Graphics::TFont* FFont;
	bool FShowRichContent;
	int FHeight;
	void __fastcall SetContent(System::Classes::TStrings* const Value);
	void __fastcall SetFont(Vcl::Graphics::TFont* const Value);
	void __fastcall SetShowRichContent(const bool Value);
	void __fastcall SetHeight(const int Value);
	
public:
	__fastcall virtual TMenuProperties(TActionClientItem* AItem);
	__fastcall virtual ~TMenuProperties();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property System::Classes::TStrings* Content = {read=FContent, write=SetContent};
	__property Vcl::Graphics::TFont* Font = {read=FFont, write=SetFont};
	__property int Height = {read=FHeight, write=SetHeight, nodefault};
	__property bool ShowRichContent = {read=FShowRichContent, write=SetShowRichContent, default=0};
};


enum DECLSPEC_DENUM TGalleryResize : unsigned char { grNone, grVertical, grBoth };

class PASCALIMPLEMENTATION TComboBoxProperties : public TControlProperties
{
	typedef TControlProperties inherited;
	
private:
	TGalleryResize FAllowResize;
	
public:
	__fastcall virtual TComboBoxProperties(TActionClientItem* AItem);
	
__published:
	__property TGalleryResize AllowResize = {read=FAllowResize, write=FAllowResize, default=0};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TComboBoxProperties() { }
	
};


enum DECLSPEC_DENUM TCommandStyle : unsigned char { csButton, csMenu, csSeparator, csText, csGallery, csComboBox, csCheckBox, csRadioButton, csControl, csCustom };

typedef int TMergeRange;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TActionClientItem : public TActionClient
{
	typedef TActionClient inherited;
	
private:
	TActionClientLink* FActionLink;
	bool FCheckUnused;
	TCustomActionControl* FControl;
	int FUsageCount;
	System::Classes::TShortCut FShortCut;
	TMergeRange FMergeIndex;
	bool FSeparator;
	bool FShowCaption;
	bool FShowShortCut;
	System::UnicodeString FShortCutText;
	System::Uitypes::TImageIndex FImageIndex;
	System::Uitypes::TImageName FImageName;
	int FLastSession;
	bool FUnused;
	bool FShowGlyph;
	System::Classes::THelpContext FHelpContext;
	bool FDefault;
	System::UnicodeString FKeyTip;
	bool FNewRow;
	bool FNewCol;
	TCommandStyle FCommandStyle;
	TCommandProperties* FCommandProperties;
	int FDisplayRow;
	void __fastcall DoActionChange(System::TObject* Sender);
	void __fastcall SetAction(System::Actions::TContainedAction* const Value);
	void __fastcall SetUsageCount(const int Value);
	TActionClients* __fastcall GetActionClients();
	void __fastcall SetShortCut(const System::Classes::TShortCut Value);
	void __fastcall SetControl(TCustomActionControl* const Value);
	void __fastcall SetMergeIndex(const TMergeRange Value);
	void __fastcall SetShowShortCut(const bool Value);
	void __fastcall SetImageIndex(const System::Uitypes::TImageIndex Value);
	void __fastcall SetImageName(const System::Uitypes::TImageName Value);
	void __fastcall SetCaption(const System::UnicodeString Value);
	void __fastcall SetShowCaption(const bool Value);
	System::UnicodeString __fastcall GetCaption();
	System::Actions::TContainedAction* __fastcall GetAction();
	void __fastcall SetShowGlyph(const bool Value);
	bool __fastcall IsCaptionStored();
	TActionClient* __fastcall GetParentItem();
	void __fastcall SetLastSession(const int Value);
	bool __fastcall IsHelpContextStored();
	void __fastcall SetNewCol(const bool Value);
	void __fastcall SetNewRow(const bool Value);
	void __fastcall SetDefault(const bool Value);
	void __fastcall SetCommandProperties(TCommandProperties* const Value);
	void __fastcall SetCommandStyle(const TCommandStyle Value);
	
protected:
	DYNAMIC void __fastcall ActionChange(System::TObject* Sender, bool CheckDefaults);
	virtual void __fastcall ColorChanged();
	DYNAMIC TActionClientLinkClass __fastcall GetActionLinkClass();
	virtual System::UnicodeString __fastcall GetDisplayName();
	virtual void __fastcall SetChangesAllowed(const TChangesAllowedSet Value);
	virtual void __fastcall SetCollection(System::Classes::TCollection* Value);
	virtual void __fastcall SetIndex(int Value);
	virtual void __fastcall SetVisible(const bool Value);
	Vcl::Imglist::TCustomImageList* __fastcall GetImages();
	void __fastcall UpdateImageName(System::Uitypes::TImageIndex Index, System::Uitypes::TImageName &Name);
	void __fastcall UpdateImageIndex(System::Uitypes::TImageName Name, System::Uitypes::TImageIndex &Index);
	void __fastcall CheckImageIndexAndName();
	
public:
	void __fastcall ResetUsageData();
	__fastcall virtual TActionClientItem(System::Classes::TCollection* Collection);
	__fastcall virtual ~TActionClientItem();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual bool __fastcall HasGlyph();
	virtual void __fastcall InitiateAction();
	virtual void __fastcall Refresh();
	bool __fastcall Unused();
	__property TActionClients* ActionClients = {read=GetActionClients};
	__property TActionClientLink* ActionLink = {read=FActionLink, write=FActionLink};
	__property bool CheckUnused = {read=FCheckUnused, write=FCheckUnused, nodefault};
	__property TCustomActionControl* Control = {read=FControl, write=SetControl};
	__property int DisplayRow = {read=FDisplayRow, write=FDisplayRow, nodefault};
	__property TActionClient* ParentItem = {read=GetParentItem};
	__property bool Separator = {read=FSeparator, nodefault};
	__property System::UnicodeString ShortCutText = {read=FShortCutText};
	
__published:
	__property System::Actions::TContainedAction* Action = {read=GetAction, write=SetAction};
	__property System::UnicodeString Caption = {read=GetCaption, write=SetCaption, stored=IsCaptionStored};
	__property TCommandStyle CommandStyle = {read=FCommandStyle, write=SetCommandStyle, default=0};
	__property bool Default = {read=FDefault, write=SetDefault, default=0};
	__property System::Classes::THelpContext HelpContext = {read=FHelpContext, write=FHelpContext, stored=IsHelpContextStored, default=0};
	__property System::Uitypes::TImageIndex ImageIndex = {read=FImageIndex, write=SetImageIndex, default=-1};
	__property System::Uitypes::TImageName ImageName = {read=FImageName, write=SetImageName};
	__property System::UnicodeString KeyTip = {read=FKeyTip, write=FKeyTip};
	__property TMergeRange MergeIndex = {read=FMergeIndex, write=SetMergeIndex, default=0};
	__property bool NewCol = {read=FNewCol, write=SetNewCol, default=0};
	__property bool NewRow = {read=FNewRow, write=SetNewRow, default=0};
	__property int LastSession = {read=FLastSession, write=SetLastSession, default=0};
	__property bool ShowCaption = {read=FShowCaption, write=SetShowCaption, default=1};
	__property bool ShowGlyph = {read=FShowGlyph, write=SetShowGlyph, default=1};
	__property bool ShowShortCut = {read=FShowShortCut, write=SetShowShortCut, default=1};
	__property System::Classes::TShortCut ShortCut = {read=FShortCut, write=SetShortCut, default=0};
	__property int UsageCount = {read=FUsageCount, write=SetUsageCount, default=0};
	__property TCommandProperties* CommandProperties = {read=FCommandProperties, write=SetCommandProperties};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TActionDragBaseClass : public Vcl::Controls::TDragObjectEx
{
	typedef Vcl::Controls::TDragObjectEx inherited;
	
private:
	TCustomActionManager* FActionManager;
	
public:
	__property TCustomActionManager* ActionManager = {read=FActionManager, write=FActionManager};
public:
	/* TObject.Create */ inline __fastcall TActionDragBaseClass() : Vcl::Controls::TDragObjectEx() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TActionDragBaseClass() { }
	
};


class PASCALIMPLEMENTATION TCustomActionClass : public Vcl::Actnlist::TCustomAction
{
	typedef Vcl::Actnlist::TCustomAction inherited;
	
public:
	/* TCustomAction.Create */ inline __fastcall virtual TCustomActionClass(System::Classes::TComponent* AOwner) : Vcl::Actnlist::TCustomAction(AOwner) { }
	/* TCustomAction.Destroy */ inline __fastcall virtual ~TCustomActionClass() { }
	
};


class PASCALIMPLEMENTATION TActionDragObject : public TActionDragBaseClass
{
	typedef TActionDragBaseClass inherited;
	
private:
	System::Classes::TList* FActions;
	System::Actions::TContainedAction* __fastcall GetAction(int Index);
	int __fastcall GetActionCount();
	
protected:
	bool FActionClasses;
	
public:
	__fastcall TActionDragObject();
	__fastcall virtual ~TActionDragObject();
	void __fastcall AddAction(System::Actions::TContainedAction* AnAction);
	void __fastcall AddActionClass(TCustomActionClass* AnActionClass);
	__property int ActionCount = {read=GetActionCount, nodefault};
	__property System::Actions::TContainedAction* Actions[int Index] = {read=GetAction};
};


class PASCALIMPLEMENTATION TCategoryDragObject : public TActionDragObject
{
	typedef TActionDragObject inherited;
	
private:
	System::UnicodeString FCategory;
	
public:
	__fastcall TCategoryDragObject(System::UnicodeString ACategory);
	__property System::UnicodeString Category = {read=FCategory};
public:
	/* TActionDragObject.Destroy */ inline __fastcall virtual ~TCategoryDragObject() { }
	
};


class PASCALIMPLEMENTATION TActionItemDragObject : public TActionDragBaseClass
{
	typedef TActionDragBaseClass inherited;
	
private:
	TActionClientItem* FClientItem;
	
protected:
	virtual void __fastcall Finished(System::TObject* Target, int X, int Y, bool Accepted);
	
public:
	__property TActionClientItem* ClientItem = {read=FClientItem, write=FClientItem};
public:
	/* TObject.Create */ inline __fastcall TActionItemDragObject() : TActionDragBaseClass() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TActionItemDragObject() { }
	
};


typedef void __fastcall (*TColorMapUpdateProc)(TCustomActionBar* ActionBar, TCustomActionBarColorMap* Colors);

class PASCALIMPLEMENTATION TCustomActionBarColorMap : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	System::Classes::TList* FActionBars;
	System::Uitypes::TColor FBtnSelectedColor;
	System::Uitypes::TColor FBtnFrameColor;
	System::Uitypes::TColor FBtnSelectedFont;
	System::Uitypes::TColor FColor;
	System::Uitypes::TColor FDisabledColor;
	System::Uitypes::TColor FDisabledFontColor;
	System::Uitypes::TColor FDisabledFontShadow;
	System::Uitypes::TColor FFontColor;
	System::Uitypes::TColor FHotColor;
	System::Uitypes::TColor FShadowColor;
	System::Uitypes::TColor FHotFontColor;
	System::Uitypes::TColor FUnusedColor;
	System::Uitypes::TColor FSelectedFontColor;
	System::Uitypes::TColor FSelectedColor;
	System::Uitypes::TColor FHighlightColor;
	System::Uitypes::TColor FDesignFocus;
	System::Uitypes::TColor FMenuColor;
	System::Uitypes::TColor FFrameTopLeftInner;
	System::Uitypes::TColor FFrameTopLeftOuter;
	System::Uitypes::TColor FFrameBottomRightInner;
	System::Uitypes::TColor FFrameBottomRightOuter;
	System::Classes::TNotifyEvent FOnColorChange;
	System::Uitypes::TColor __fastcall GetDisabledColor();
	System::Uitypes::TColor __fastcall GetUnusedColor();
	
protected:
	void __fastcall Add(TCustomActionBar* ActionBar);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	HIDESBASE void __fastcall Remove(TCustomActionBar* ActionBar);
	virtual void __fastcall SetColor(const System::Uitypes::TColor Value);
	virtual void __fastcall SetFontColor(const System::Uitypes::TColor Value);
	void __fastcall UpdateActionBars(TColorMapUpdateProc UpdateProc, System::Uitypes::TColor Color);
	
public:
	__fastcall virtual TCustomActionBarColorMap(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomActionBarColorMap();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual void __fastcall UpdateColors();
	__property System::Uitypes::TColor BtnFrameColor = {read=FBtnFrameColor, write=FBtnFrameColor, nodefault};
	__property System::Uitypes::TColor BtnSelectedColor = {read=FBtnSelectedColor, write=FBtnSelectedColor, nodefault};
	__property System::Uitypes::TColor BtnSelectedFont = {read=FBtnSelectedFont, write=FBtnSelectedFont, nodefault};
	__property System::Uitypes::TColor Color = {read=FColor, write=SetColor, nodefault};
	__property System::Uitypes::TColor DesignFocus = {read=FDesignFocus, write=FDesignFocus, nodefault};
	__property System::Uitypes::TColor DisabledColor = {read=GetDisabledColor, write=FDisabledColor, nodefault};
	__property System::Uitypes::TColor DisabledFontColor = {read=FDisabledFontColor, write=FDisabledFontColor, nodefault};
	__property System::Uitypes::TColor DisabledFontShadow = {read=FDisabledFontShadow, write=FDisabledFontShadow, nodefault};
	__property System::Uitypes::TColor FontColor = {read=FFontColor, write=SetFontColor, nodefault};
	__property System::Uitypes::TColor FrameTopLeftInner = {read=FFrameTopLeftInner, write=FFrameTopLeftInner, nodefault};
	__property System::Uitypes::TColor FrameTopLeftOuter = {read=FFrameTopLeftOuter, write=FFrameTopLeftOuter, nodefault};
	__property System::Uitypes::TColor FrameBottomRightInner = {read=FFrameBottomRightInner, write=FFrameBottomRightInner, nodefault};
	__property System::Uitypes::TColor FrameBottomRightOuter = {read=FFrameBottomRightOuter, write=FFrameBottomRightOuter, nodefault};
	__property System::Uitypes::TColor HighlightColor = {read=FHighlightColor, write=FHighlightColor, nodefault};
	__property System::Uitypes::TColor HotColor = {read=FHotColor, write=FHotColor, nodefault};
	__property System::Uitypes::TColor HotFontColor = {read=FHotFontColor, write=FHotFontColor, nodefault};
	__property System::Uitypes::TColor MenuColor = {read=FMenuColor, write=FMenuColor, nodefault};
	__property System::Uitypes::TColor SelectedColor = {read=FSelectedColor, write=FSelectedColor, nodefault};
	__property System::Uitypes::TColor SelectedFontColor = {read=FSelectedFontColor, write=FSelectedFontColor, nodefault};
	__property System::Uitypes::TColor ShadowColor = {read=FShadowColor, write=FShadowColor, nodefault};
	__property System::Uitypes::TColor UnusedColor = {read=GetUnusedColor, write=FUnusedColor, nodefault};
	__property System::Classes::TNotifyEvent OnColorChange = {read=FOnColorChange, write=FOnColorChange};
};


#ifndef _WIN64
typedef System::TMetaClass* TCustomActionBarClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TCustomActionBarClass);
#endif /* _WIN64 */

enum DECLSPEC_DENUM TBarOrientation : unsigned char { boLeftToRight, boRightToLeft, boTopToBottom, boBottomToTop };

typedef System::Set<TBarOrientation, TBarOrientation::boLeftToRight, TBarOrientation::boBottomToTop> TBarOrientations;

typedef void __fastcall (__closure *TControlCreatedEvent)(System::TObject* Sender, TCustomActionControl* &Control);

typedef void __fastcall (__closure *TGetControlClassEvent)(TCustomActionBar* Sender, TActionClient* AnItem, TCustomActionControlClass &ControlClass);

enum DECLSPEC_DENUM TBarEdge : unsigned char { beLeft, beRight, beEither };

class PASCALIMPLEMENTATION TCustomActionBar : public Vcl::Toolwin::TToolWindow
{
	typedef Vcl::Toolwin::TToolWindow inherited;
	
private:
	TActionClient* FActionClient;
	TCustomActionManager* FActionManager;
	bool FAllowHiding;
	Vcl::Graphics::TCanvas* FCanvas;
	TCustomActionBarColorMap* FColorMap;
	bool FDesignable;
	bool FDesignMode;
	bool FEnabledState;
	TBarOrientation FOrientation;
	int FSpacing;
	TControlCreatedEvent FOnControlCreated;
	TGetControlClassEvent FOnGetControlClass;
	System::Classes::TNotifyEvent FOnPaint;
	bool FPersistentHotKeys;
	int FHRowCount;
	int FVRowCount;
	int FVertMargin;
	int FHorzMargin;
	bool FHorzSeparator;
	System::Types::TPoint FSavedSize;
	bool FVertSeparator;
	int FTallest;
	int FWidest;
	bool FContextBar;
	bool FIsRecreating;
	bool FTransparent;
	void __fastcall SetActionManager(TCustomActionManager* const Value);
	void __fastcall SetHorzMargin(const int Value);
	void __fastcall SetHorzSeparator(const bool Value);
	void __fastcall SetVertMargin(const int Value);
	void __fastcall SetVertSeparator(const bool Value);
	void __fastcall SetTransparent(const bool Value);
	HIDESBASE MESSAGE void __fastcall CMEnabledchanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMResetBar(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMWinINIChange(Winapi::Messages::TWMWinIniChange &Message);
	MESSAGE void __fastcall CMStyleChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMSysFontChanged(Winapi::Messages::TMessage &Message);
	TActionClients* __fastcall GetItems();
	HIDESBASE MESSAGE void __fastcall WMContextMenu(Winapi::Messages::TWMContextMenu &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Message);
	bool __fastcall GetAutoSizing();
	TCustomActionBarColorMap* __fastcall GetColorMap();
	
protected:
	TCustomActionBarColorMap* FDefaultColorMap;
	bool FSavedWrapState;
	virtual void __fastcall AlignControls(Vcl::Controls::TControl* AControl, System::Types::TRect &Rect);
	virtual void __fastcall AutoSizingChanged();
	System::Types::TPoint __fastcall BackgroundSize();
	virtual void __fastcall Clear();
	int __fastcall CalcInsertPosition(TCustomActionControl* Control, int X, int Y);
	virtual void __fastcall CreateControls();
	virtual bool __fastcall CustomAlignInsertBefore(Vcl::Controls::TControl* C1, Vcl::Controls::TControl* C2);
	virtual void __fastcall CustomAlignPosition(Vcl::Controls::TControl* Control, int &NewLeft, int &NewTop, int &NewWidth, int &NewHeight, System::Types::TRect &AlignRect, const Vcl::Controls::TAlignInfo &AlignInfo);
	DYNAMIC TCustomActionControlClass __fastcall DoGetControlClass(TActionClientItem* AnItem);
	virtual void __fastcall DoControlCreated(TCustomActionControl* &Control);
	virtual void __fastcall DoDropActions(TActionDragObject* Source, const int X, const int Y);
	virtual void __fastcall DoDropItem(TActionItemDragObject* Source, const int X, const int Y);
	DYNAMIC void __fastcall DragOver(System::TObject* Source, int X, int Y, System::Uitypes::TDragState State, bool &Accept);
	virtual TActionClientItem* __fastcall FindLast();
	TCustomActionControl* __fastcall FindItemAt(const System::Types::TPoint &P);
	TCustomActionControl* __fastcall FindItemCaption(const System::UnicodeString ACaption);
	TCustomActionControl* __fastcall FindNearestControl(const System::Types::TPoint &Point);
	TActionClientItem* __fastcall FindNextVisibleItem(TActionClientItem* AClient);
	TActionClientItem* __fastcall FindPreviousVisibleItem(TActionClientItem* AClient);
	TActionClientItem* __fastcall FindLeastUsedItem(const bool Visible = true);
	virtual TActionClientItem* __fastcall FindNext(TActionClientItem* AClient, const bool Wrap = true);
	virtual TActionClientItem* __fastcall FindPrevious(TActionClientItem* AClient, const bool Wrap = true);
	virtual int __fastcall GetBannerWidth(TBarEdge BarEdge);
	virtual int __fastcall GetBarHeight();
	virtual int __fastcall GetBarWidth();
	virtual bool __fastcall GetDesignMode();
	virtual TCustomActionControl* __fastcall GetActionControl(const int Index);
	virtual TCustomColorMapClass __fastcall GetDefaultColorMapClass();
	virtual TCustomActionControlClass __fastcall GetControlClass(TActionClientItem* AnItem);
	TCustomActionBarClass __fastcall GetPopupMenuClass();
	bool __fastcall HasItems();
	virtual int __fastcall ItemCount();
	virtual void __fastcall Loaded();
	virtual void __fastcall NCPaint(HDC DC);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall DrawBackground();
	virtual void __fastcall Paint();
	virtual void __fastcall PaintWindow(HDC DC);
	virtual void __fastcall Reset();
	virtual void __fastcall RequestAlign();
	DYNAMIC void __fastcall Resize();
	virtual void __fastcall SetActionClient(TActionClient* const Value);
	virtual void __fastcall SetAutoSizing(const bool Value);
	virtual void __fastcall SetColorMap(TCustomActionBarColorMap* const Value);
	virtual void __fastcall SetDesignMode(const bool Value);
	virtual void __fastcall SetOrientation(const TBarOrientation Value);
	virtual void __fastcall SetPersistentHotKeys(const bool Value);
	virtual void __fastcall SetSpacing(int Value);
	virtual void __fastcall SetBiDiMode(System::Classes::TBiDiMode Value);
	TCustomActionBarColorMap* __fastcall SetupDefaultColorMap();
	DYNAMIC void __fastcall VisibleChanging();
	void __fastcall AdjustItems();
	__property int HRowCount = {read=FHRowCount, nodefault};
	__property TActionClients* Items = {read=GetItems};
	__property ParentColor = {default=1};
	__property ParentBackground;
	__property int VRowCount = {read=FVRowCount, nodefault};
	__property int Tallest = {read=FTallest, nodefault};
	__property int Widest = {read=FWidest, nodefault};
	
public:
	__fastcall virtual TCustomActionBar(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomActionBar();
	virtual TCustomActionControl* __fastcall CreateControl(TActionClientItem* AnItem);
	DYNAMIC bool __fastcall DesignWndProc(Winapi::Messages::TMessage &Message);
	virtual void __fastcall DoDropCategory(TCategoryDragObject* Source, const int X, const int Y);
	TActionClientItem* __fastcall FindAccelItem(const System::Word Accel);
	DYNAMIC void __fastcall DragDrop(System::TObject* Source, int X, int Y);
	virtual TActionClientItem* __fastcall FindFirst();
	TActionClientItem* __fastcall FindFirstVisibleItem();
	TActionClientItem* __fastcall FindLastVisibleItem();
	virtual void __fastcall RecreateControls();
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	virtual bool __fastcall IsCustomStyleActive();
	virtual TActionBarStyle* __fastcall Style();
	virtual Vcl::Themes::TCustomStyleServices* __fastcall StyleServices();
	__property TCustomActionManager* ActionManager = {read=FActionManager, write=SetActionManager};
	__property TActionClient* ActionClient = {read=FActionClient, write=SetActionClient};
	__property bool AllowHiding = {read=FAllowHiding, write=FAllowHiding, nodefault};
	__property bool AutoSizing = {read=GetAutoSizing, write=SetAutoSizing, nodefault};
	__property Caption = {default=0};
	__property Vcl::Graphics::TCanvas* Canvas = {read=FCanvas};
	__property Color = {default=-16777211};
	__property TCustomActionBarColorMap* ColorMap = {read=GetColorMap, write=SetColorMap};
	__property bool ContextBar = {read=FContextBar, write=FContextBar, nodefault};
	__property bool Designable = {read=FDesignable, write=FDesignable, nodefault};
	__property Font;
	__property bool DesignMode = {read=GetDesignMode, write=SetDesignMode, nodefault};
	__property int HorzMargin = {read=FHorzMargin, write=SetHorzMargin, default=1};
	__property bool HorzSeparator = {read=FHorzSeparator, write=SetHorzSeparator, nodefault};
	__property TBarOrientation Orientation = {read=FOrientation, write=SetOrientation, nodefault};
	__property bool PersistentHotKeys = {read=FPersistentHotKeys, write=SetPersistentHotKeys, nodefault};
	__property TCustomActionControl* ActionControls[const int Index] = {read=GetActionControl};
	__property int Spacing = {read=FSpacing, write=SetSpacing, nodefault};
	__property bool Transparent = {read=FTransparent, write=SetTransparent, nodefault};
	__property int VertMargin = {read=FVertMargin, write=SetVertMargin, default=1};
	__property bool VertSeparator = {read=FVertSeparator, write=SetVertSeparator, nodefault};
	__property TControlCreatedEvent OnControlCreated = {read=FOnControlCreated, write=FOnControlCreated};
	__property TGetControlClassEvent OnGetControlClass = {read=FOnGetControlClass, write=FOnGetControlClass};
	__property System::Classes::TNotifyEvent OnPaint = {read=FOnPaint, write=FOnPaint};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomActionBar(HWND ParentWindow) : Vcl::Toolwin::TToolWindow(ParentWindow) { }
	
};


struct DECLSPEC_DRECORD TCMItemMsg
{
public:
	unsigned Msg;
	NativeUInt Unused;
	TCustomActionControl* Sender;
	NativeInt Result;
};


class PASCALIMPLEMENTATION TCustomActionControl : public Vcl::Controls::TGraphicControl
{
	typedef Vcl::Controls::TGraphicControl inherited;
	
private:
	TCustomActionBar* FActionBar;
	TActionClientItem* FActionClient;
	bool FDropPoint;
	Vcl::Buttons::TButtonLayout FGlyphLayout;
	System::Types::TPoint FGlyphPos;
	System::Types::TRect FMargins;
	bool FSelected;
	bool FSmallIcon;
	int FSpacing;
	System::Types::TRect FTextBounds;
	bool FTransparent;
	int __fastcall CaptionLength();
	int __fastcall CaptionHeight();
	int __fastcall ActualSpacing(const System::Types::TPoint &ImageSize);
	MESSAGE void __fastcall CMTextChanged(Winapi::Messages::TMessage &Message);
	TCustomActionBar* __fastcall GetActionBar();
	HIDESBASE void __fastcall SetMargins(const System::Types::TRect &Value);
	void __fastcall SetTransparent(const bool Value);
	void __fastcall SetSmallIcon(const bool Value);
	void __fastcall SetSpacing(const int Value);
	HIDESBASE MESSAGE void __fastcall CMHintShow(Vcl::Controls::TCMHintShow &Message);
	HIDESBASE MESSAGE void __fastcall WMContextMenu(Winapi::Messages::TWMContextMenu &Message);
	
protected:
	DYNAMIC void __fastcall BeginAutoDrag();
	virtual void __fastcall CalcLayout();
	virtual void __fastcall DoDragDrop(System::TObject* DragObject, int X, int Y);
	DYNAMIC void __fastcall DragOver(System::TObject* Source, int X, int Y, System::Uitypes::TDragState State, bool &Accept);
	virtual System::Classes::TBasicAction* __fastcall GetAction();
	virtual bool __fastcall GetShowCaption();
	virtual bool __fastcall GetShowShortCut();
	HIDESBASE MESSAGE void __fastcall CMDesignHitTest(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMItemSelected(TCMItemMsg &Message);
	MESSAGE void __fastcall CMItemDropPoint(TCMItemMsg &Message);
	DYNAMIC void __fastcall DoStartDrag(Vcl::Controls::TDragObject* &DragObject);
	virtual void __fastcall DrawDesignFocus(System::Types::TRect &PaintRect);
	virtual void __fastcall DrawDragDropPoint();
	virtual void __fastcall DrawGlyph(const System::Types::TPoint &Location);
	virtual void __fastcall DrawLargeGlyph(const System::Types::TPoint &Location);
	virtual void __fastcall DrawBackground(System::Types::TRect &PaintRect);
	virtual void __fastcall DrawText(System::Types::TRect &ARect, unsigned &Flags, System::UnicodeString Text);
	virtual void __fastcall DrawShadowedText(const System::Types::TRect &Rect, unsigned Flags, System::UnicodeString Text, System::Uitypes::TColor TextColor, System::Uitypes::TColor ShadowColor);
	virtual void __fastcall DrawSeparator(const int Offset);
	virtual System::Types::TPoint __fastcall GetImageSize();
	virtual Vcl::Imglist::TCustomImageList* __fastcall FindImageList(bool UseLargeImages, System::Uitypes::TImageIndex ImageIndex = (System::Uitypes::TImageIndex)(0xffffffff))/* overload */;
	virtual Vcl::Imglist::TCustomImageList* __fastcall FindImageList(bool UseLargeImages, bool &Disabled, System::Uitypes::TImageIndex ImageIndex = (System::Uitypes::TImageIndex)(0xffffffff))/* overload */;
	bool __fastcall HasGlyph();
	virtual bool __fastcall IsChecked();
	virtual bool __fastcall IsGrouped();
	virtual bool __fastcall GetSeparator();
	virtual void __fastcall Paint();
	virtual void __fastcall PositionChanged();
	virtual void __fastcall RequestAlign();
	void __fastcall ResetUsageData();
	virtual void __fastcall SetActionClient(TActionClientItem* Value);
	virtual void __fastcall SetGlyphLayout(const Vcl::Buttons::TButtonLayout Value);
	virtual void __fastcall SetSelected(bool Value);
	void __fastcall SetDropPoint(bool Value);
	void __fastcall UpdateSelection();
	void __fastcall UpdateTextBounds();
	MESSAGE void __fastcall WMSetText(Winapi::Messages::TWMSetText &Message);
	__property Color = {default=-16777211};
	__property DragMode = {default=0};
	__property System::Types::TPoint GlyphPos = {read=FGlyphPos, write=FGlyphPos};
	__property ParentColor = {default=1};
	DYNAMIC void __fastcall ChangeScale(int M, int D, bool isDpiChange)/* overload */;
	
public:
	__fastcall virtual TCustomActionControl(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomActionControl();
	DYNAMIC bool __fastcall DesignWndProc(Winapi::Messages::TMessage &Message);
	virtual void __fastcall CalcBounds();
	DYNAMIC void __fastcall Click();
	DYNAMIC void __fastcall DragDrop(System::TObject* Source, int X, int Y);
	virtual void __fastcall InitiateAction();
	virtual bool __fastcall IsCustomStyleActive();
	virtual Vcl::Themes::TCustomStyleServices* __fastcall StyleServices();
	virtual void __fastcall Keyed();
	__property TCustomActionBar* ActionBar = {read=GetActionBar};
	__property TActionClientItem* ActionClient = {read=FActionClient, write=SetActionClient};
	__property Caption = {default=0};
	__property bool DropPoint = {read=FDropPoint, write=SetDropPoint, nodefault};
	__property Vcl::Buttons::TButtonLayout GlyphLayout = {read=FGlyphLayout, write=SetGlyphLayout, nodefault};
	__property System::Types::TRect Margins = {read=FMargins, write=SetMargins};
	__property bool Selected = {read=FSelected, write=SetSelected, nodefault};
	__property bool Separator = {read=GetSeparator, nodefault};
	__property bool ShowCaption = {read=GetShowCaption, nodefault};
	__property bool ShowShortCut = {read=GetShowShortCut, nodefault};
	__property bool SmallIcon = {read=FSmallIcon, write=SetSmallIcon, nodefault};
	__property int Spacing = {read=FSpacing, write=SetSpacing, default=4};
	__property System::Types::TRect TextBounds = {read=FTextBounds, write=FTextBounds};
	__property bool Transparent = {read=FTransparent, write=SetTransparent, nodefault};
	__property OnClick;
	/* Hoisted overloads: */
	
protected:
	DYNAMIC inline void __fastcall  ChangeScale(int M, int D){ Vcl::Controls::TControl::ChangeScale(M, D); }
	
};


__interface  INTERFACE_UUID("{7CFC301B-1C59-11D4-8184-00C04F6BB89F}") IActionBarDesigner  : public System::IInterface 
{
	virtual System::Actions::TContainedAction* __fastcall CreateAction(System::Actions::TContainedActionClass AnActionClass) = 0 ;
	virtual void __fastcall EditAction(System::Actions::TContainedAction* Action) = 0 ;
	virtual void __fastcall Modified(TCustomActionBar* ActionBar) = 0 ;
	virtual void __fastcall SetActiveMenu(TCustomActionBar* Menu) = 0 ;
	virtual void __fastcall SetItemSelection(TActionClient* const *Items, const int Items_High) = 0 ;
	virtual void __fastcall SetSelection(System::Classes::TPersistent* APersistent) = 0 ;
};

class PASCALIMPLEMENTATION TXToolDockForm : public Vcl::Toolwin::TToolDockForm
{
	typedef Vcl::Toolwin::TToolDockForm inherited;
	
private:
	HIDESBASE MESSAGE void __fastcall CMDialogChar(Winapi::Messages::TWMKey &Message);
public:
	/* TToolDockForm.Create */ inline __fastcall virtual TXToolDockForm(System::Classes::TComponent* AOwner) : Vcl::Toolwin::TToolDockForm(AOwner) { }
	
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TXToolDockForm(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Toolwin::TToolDockForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TXToolDockForm() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TXToolDockForm(HWND ParentWindow) : Vcl::Toolwin::TToolDockForm(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TActionBarStyleList : public System::Classes::TStringList
{
	typedef System::Classes::TStringList inherited;
	
private:
	TActionBarStyle* __fastcall GetStyle(int Index);
	
public:
	__property TActionBarStyle* Style[int Index] = {read=GetStyle};
public:
	/* TStringList.Create */ inline __fastcall TActionBarStyleList()/* overload */ : System::Classes::TStringList() { }
	/* TStringList.Create */ inline __fastcall TActionBarStyleList(bool OwnsObjects)/* overload */ : System::Classes::TStringList(OwnsObjects) { }
	/* TStringList.Create */ inline __fastcall TActionBarStyleList(System::WideChar QuoteChar, System::WideChar Delimiter)/* overload */ : System::Classes::TStringList(QuoteChar, Delimiter) { }
	/* TStringList.Create */ inline __fastcall TActionBarStyleList(System::WideChar QuoteChar, System::WideChar Delimiter, System::Classes::TStringsOptions Options)/* overload */ : System::Classes::TStringList(QuoteChar, Delimiter, Options) { }
	/* TStringList.Create */ inline __fastcall TActionBarStyleList(System::Types::TDuplicates Duplicates, bool Sorted, bool CaseSensitive)/* overload */ : System::Classes::TStringList(Duplicates, Sorted, CaseSensitive) { }
	/* TStringList.Destroy */ inline __fastcall virtual ~TActionBarStyleList() { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Word CM_ITEMSELECTED = System::Word(0x915);
static const System::Word CM_ITEMCLICKED = System::Word(0x916);
static const System::Word CM_ITEMKEYED = System::Word(0x917);
static const System::Word CM_SPLITITEMCLICKED = System::Word(0x918);
static const System::Word CM_SCROLLCLICKED = System::Word(0x919);
static const System::Word CM_RESETBAR = System::Word(0x91c);
static const System::Word CM_ENTERMENULOOP = System::Word(0x923);
static const System::Word CM_ITEMDROPPOINT = System::Word(0x924);
#define caAllChanges (System::Set<TChangesAllowed, TChangesAllowed::caModify, TChangesAllowed::caDelete>() << TChangesAllowed::caModify << TChangesAllowed::caMove << TChangesAllowed::caDelete )
extern DELPHI_PACKAGE System::StaticArray<System::Uitypes::TDragMode, 2> ControlDragMode;
extern DELPHI_PACKAGE System::UnicodeString cDefaultSchedule;
extern DELPHI_PACKAGE _di_IActionBarDesigner ActionBarDesigner;
extern DELPHI_PACKAGE TActionBarStyleList* ActionBarStyles;
extern DELPHI_PACKAGE System::UnicodeString DefaultActnBarStyle;
extern DELPHI_PACKAGE void __fastcall NotifyDesigner(TCustomActionBar* ActionBar);
}	/* namespace Actnman */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_ACTNMAN)
using namespace Vcl::Actnman;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_ActnmanHPP
