// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.Touch.GestureMgr.pas' rev: 35.00 (Windows)

#ifndef Vcl_Touch_GesturemgrHPP
#define Vcl_Touch_GesturemgrHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.SysUtils.hpp>
#include <System.Generics.Collections.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.Touch.Gestures.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Touch
{
namespace Gesturemgr
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TGestureCollectionItem;
class DELPHICLASS TGestureCollection;
class DELPHICLASS TGestureManager;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TGestureCollectionItem : public Vcl::Controls::TCustomGestureCollectionItem
{
	typedef Vcl::Controls::TCustomGestureCollectionItem inherited;
	
private:
	System::Classes::TBasicAction* FAction;
	int FDeviation;
	int FErrorMargin;
	Vcl::Controls::TGestureID FGestureID;
	System::UnicodeString FName;
	Vcl::Controls::TGestureOptions FOptions;
	Vcl::Controls::TGesturePointArray FPoints;
	void __fastcall ReadDeviation(System::Classes::TReader* Reader);
	void __fastcall ReadErrorMargin(System::Classes::TReader* Reader);
	void __fastcall ReadGestureID(System::Classes::TReader* Reader);
	void __fastcall ReadName(System::Classes::TReader* Reader);
	void __fastcall ReadOptions(System::Classes::TReader* Reader);
	void __fastcall ReadPoints(System::Classes::TStream* Stream);
	void __fastcall WriteDeviation(System::Classes::TWriter* Writer);
	void __fastcall WriteErrorMargin(System::Classes::TWriter* Writer);
	void __fastcall WriteGestureID(System::Classes::TWriter* Writer);
	void __fastcall WriteName(System::Classes::TWriter* Writer);
	void __fastcall WriteOptions(System::Classes::TWriter* Writer);
	void __fastcall WritePoints(System::Classes::TStream* Stream);
	
protected:
	virtual System::Classes::TBasicAction* __fastcall GetAction();
	virtual int __fastcall GetDeviation();
	virtual int __fastcall GetErrorMargin();
	virtual Vcl::Controls::TGestureID __fastcall GetGestureID();
	virtual Vcl::Controls::TGestureType __fastcall GetGestureType();
	virtual Vcl::Controls::TGestureOptions __fastcall GetOptions();
	virtual System::UnicodeString __fastcall GetName();
	virtual Vcl::Controls::TGesturePointArray __fastcall GetPoints();
	virtual void __fastcall SetAction(System::Classes::TBasicAction* const Value);
	virtual void __fastcall SetDeviation(const int Value);
	virtual void __fastcall SetErrorMargin(const int Value);
	virtual void __fastcall SetGestureID(const Vcl::Controls::TGestureID Value);
	virtual void __fastcall SetName(const System::UnicodeString Value);
	virtual void __fastcall SetOptions(const Vcl::Controls::TGestureOptions Value);
	virtual void __fastcall SetPoints(const Vcl::Controls::TGesturePointArray Value);
	
protected:
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual System::UnicodeString __fastcall GetDisplayName();
	
public:
	__fastcall virtual TGestureCollectionItem(System::Classes::TCollection* Collection);
	__fastcall virtual ~TGestureCollectionItem();
	
__published:
	__property Action;
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TGestureNotification : unsigned char { gnChanged, gnDeleted };

typedef void __fastcall (__closure *TGestureItemChangeEvent)(System::TObject* Sender, TGestureNotification Action, Vcl::Controls::TCustomGestureCollectionItem* Item);

class PASCALIMPLEMENTATION TGestureCollection : public Vcl::Controls::TCustomGestureCollection
{
	typedef Vcl::Controls::TCustomGestureCollection inherited;
	
private:
	TGestureManager* FGestureManager;
	TGestureItemChangeEvent FOnItemChange;
	
protected:
	bool FStreamGestureDetails;
	virtual Vcl::Controls::TCustomGestureManager* __fastcall GetGestureManager();
	virtual void __fastcall Notify(System::Classes::TCollectionItem* Item, System::Generics::Collections::TCollectionNotification Action);
	virtual void __fastcall Update(System::Classes::TCollectionItem* Item);
	
public:
	__fastcall virtual TGestureCollection()/* overload */;
	__fastcall virtual TGestureCollection(TGestureManager* AGestureManager)/* overload */;
	__fastcall virtual ~TGestureCollection();
	HIDESBASE TGestureCollectionItem* __fastcall Add();
	virtual Vcl::Controls::TCustomGestureCollectionItem* __fastcall AddGesture();
	virtual Vcl::Controls::TCustomGestureCollectionItem* __fastcall FindGesture(Vcl::Controls::TGestureID AGestureID)/* overload */;
	virtual Vcl::Controls::TCustomGestureCollectionItem* __fastcall FindGesture(const System::UnicodeString AName)/* overload */;
	virtual Vcl::Controls::TGestureID __fastcall GetUniqueGestureID();
	virtual void __fastcall RemoveGesture(Vcl::Controls::TGestureID AGestureID);
	__property TGestureItemChangeEvent OnItemChange = {read=FOnItemChange, write=FOnItemChange};
};


class PASCALIMPLEMENTATION TGestureManager : public Vcl::Controls::TCustomGestureManager
{
	typedef Vcl::Controls::TCustomGestureManager inherited;
	
	
private:
	typedef System::Generics::Collections::TDictionary__2<Vcl::Controls::TControl*,TGestureCollection*>* TGestureControlList;
	
	typedef void __fastcall (__closure *TDesignerHook)(Vcl::Controls::TCustomGestureCollectionItem* AGesture);
	
	
private:
	static System::Generics::Collections::TList__1<Vcl::Controls::TCustomGestureManager*>* FInstanceList;
	static Vcl::Controls::TGestureID FNextGestureID;
	static TGestureCollection* FRegisteredGestures;
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	static int __fastcall GetRegisteredGestureCount();
	static Vcl::Controls::TGestureArray __fastcall GetRegisteredGestures();
	System::Generics::Collections::TDictionary__2<Vcl::Controls::TControl*,TGestureCollection*>* FControls;
	System::Sysutils::TFileName FFileName;
	bool FLoading;
	System::Generics::Collections::TList__1<Vcl::Controls::TControl*>* FNotifyList;
	TGestureCollection* FRecordedGestures;
	bool FSaved;
	System::Classes::TCollection* FStreamCollection;
	bool FUpdating;
	void __fastcall GestureItemChanged(System::TObject* Sender, TGestureNotification Action, Vcl::Controls::TCustomGestureCollectionItem* Item);
	int __fastcall GetCustomGestureCount();
	Vcl::Controls::TGestureArray __fastcall GetCustomGestures();
	int __fastcall GetRecordedGestureCount();
	Vcl::Controls::TGestureArray __fastcall GetRecordedGestures();
	void __fastcall ReadControlData(System::Classes::TReader* Reader);
	void __fastcall ReadRecordedGestures(System::Classes::TReader* Reader);
	void __fastcall WriteControlData(System::Classes::TWriter* Writer);
	void __fastcall WriteRecordedGestures(System::Classes::TWriter* Writer);
	
protected:
	static TDesignerHook FDesignerHook;
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual Vcl::Controls::TGestureArray __fastcall GetGestureList(Vcl::Controls::TControl* Control);
	virtual Vcl::Controls::TStandardGestures __fastcall GetStandardGestures(Vcl::Controls::TControl* AControl);
	virtual void __fastcall Loaded();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	void __fastcall NotifyControls(unsigned Msg, int Operation, Vcl::Controls::TGestureID GestureID);
	virtual void __fastcall SetStandardGestures(Vcl::Controls::TControl* AControl, const Vcl::Controls::TStandardGestures &AStandardGestures);
	__property bool Loading = {read=FLoading, nodefault};
	
public:
	static Vcl::Controls::TGestureID __fastcall RegisterGesture(Vcl::Controls::TCustomGestureCollectionItem* AGesture);
	static void __fastcall UnregisterGesture(Vcl::Controls::TGestureID AGesture);
	/* static */ __property int RegisteredGestureCount = {read=GetRegisteredGestureCount, nodefault};
	/* static */ __property Vcl::Controls::TGestureArray RegisteredGestures = {read=GetRegisteredGestures};
	__fastcall virtual TGestureManager(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TGestureManager();
	virtual Vcl::Controls::TGestureID __fastcall AddRecordedGesture(Vcl::Controls::TCustomGestureCollectionItem* Item)/* overload */;
	void __fastcall ChangeNotification(Vcl::Controls::TControl* AControl);
	virtual Vcl::Controls::TCustomGestureCollectionItem* __fastcall FindCustomGesture(Vcl::Controls::TGestureID AGestureID)/* overload */;
	virtual Vcl::Controls::TCustomGestureCollectionItem* __fastcall FindCustomGesture(const System::UnicodeString AName)/* overload */;
	virtual Vcl::Controls::TCustomGestureCollectionItem* __fastcall FindGesture(Vcl::Controls::TControl* AControl, Vcl::Controls::TGestureID AGestureID)/* overload */;
	virtual Vcl::Controls::TCustomGestureCollectionItem* __fastcall FindGesture(Vcl::Controls::TControl* AControl, const System::UnicodeString AName)/* overload */;
	void __fastcall LoadFromFile(const System::UnicodeString Filename);
	void __fastcall LoadFromStream(System::Classes::TStream* S);
	virtual void __fastcall RegisterControl(Vcl::Controls::TControl* AControl);
	void __fastcall RemoveChangeNotification(Vcl::Controls::TControl* AControl);
	virtual void __fastcall RemoveRecordedGesture(Vcl::Controls::TGestureID AGestureID)/* overload */;
	virtual void __fastcall RemoveRecordedGesture(Vcl::Controls::TCustomGestureCollectionItem* AGesture)/* overload */;
	void __fastcall SaveToFile(const System::UnicodeString Filename);
	void __fastcall SaveToStream(System::Classes::TStream* S);
	virtual bool __fastcall SelectGesture(Vcl::Controls::TControl* AControl, Vcl::Controls::TGestureID AGestureID)/* overload */;
	virtual bool __fastcall SelectGesture(Vcl::Controls::TControl* AControl, const System::UnicodeString AName)/* overload */;
	void __fastcall SetRecordedGestures(Vcl::Controls::TGestureArray Gestures);
	virtual void __fastcall UnregisterControl(Vcl::Controls::TControl* AControl);
	virtual void __fastcall UnselectGesture(Vcl::Controls::TControl* AControl, Vcl::Controls::TGestureID AGestureID);
	__property int CustomGestureCount = {read=GetCustomGestureCount, nodefault};
	__property Vcl::Controls::TGestureArray CustomGestures = {read=GetCustomGestures};
	__property int RecordedGestureCount = {read=GetRecordedGestureCount, nodefault};
	__property Vcl::Controls::TGestureArray RecordedGestures = {read=GetRecordedGestures};
	
__published:
	__property System::Sysutils::TFileName FileName = {read=FFileName, write=FFileName};
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Gesturemgr */
}	/* namespace Touch */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_TOUCH_GESTUREMGR)
using namespace Vcl::Touch::Gesturemgr;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_TOUCH)
using namespace Vcl::Touch;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_Touch_GesturemgrHPP
