// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.OleCtnrs.pas' rev: 35.00 (Windows)

#ifndef Vcl_OlectnrsHPP
#define Vcl_OlectnrsHPP

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
#include <Winapi.OleDlg.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.Graphics.hpp>
#include <System.Win.ComObj.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------
#include <DocObj.h>

namespace Vcl
{
namespace Olectnrs
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IVCLFrameForm;
typedef System::DelphiInterface<IVCLFrameForm> _di_IVCLFrameForm;
struct TCreateInfo;
struct TVerbInfo;
class DELPHICLASS TOleContainer;
class DELPHICLASS TOleForm;
//-- type declarations -------------------------------------------------------
__interface  INTERFACE_UUID("{CD02E1C0-52DA-11D0-9EA6-0020AF3D82DA}") IVCLFrameForm  : public IOleInPlaceFrame 
{
	virtual void __fastcall AddContainer(TOleContainer* Instance) = 0 ;
	virtual void __fastcall RemoveContainer(TOleContainer* Instance) = 0 ;
	virtual void __fastcall ClearBorderSpace() = 0 ;
	virtual Vcl::Forms::TCustomForm* __fastcall Form() = 0 ;
};

enum DECLSPEC_DENUM TAutoActivate : unsigned char { aaManual, aaGetFocus, aaDoubleClick };

enum DECLSPEC_DENUM TSizeMode : unsigned char { smClip, smCenter, smScale, smStretch, smAutoSize };

enum DECLSPEC_DENUM TObjectState : unsigned char { osEmpty, osLoaded, osRunning, osOpen, osInPlaceActive, osUIActive };

enum DECLSPEC_DENUM TCreateType : unsigned char { ctNewObject, ctFromFile, ctLinkToFile, ctFromData, ctLinkFromData };

struct DECLSPEC_DRECORD TCreateInfo
{
public:
	TCreateType CreateType;
	bool ShowAsIcon;
	NativeUInt IconMetaPict;
	GUID ClassID;
	System::WideString FileName;
	_di_IDataObject DataObject;
};


struct DECLSPEC_DRECORD TVerbInfo
{
public:
	short Verb;
	System::Word Flags;
#ifndef _WIN64
	
#else /* _WIN64 */
	Winapi::Messages::TDWordFiller FlagsFiller;
#endif /* _WIN64 */
};


typedef void __fastcall (__closure *TObjectMoveEvent)(TOleContainer* OleContainer, const System::Types::TRect &Bounds);

class PASCALIMPLEMENTATION TOleContainer : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
private:
	int FRefCount;
	_di_ILockBytes FLockBytes;
	_di_IStorage FStorage;
	_di_IOleObject FOleObject;
	int FDrawAspect;
	System::Types::TPoint FViewSize;
	System::Classes::TStringList* FObjectVerbs;
	int FDataConnection;
	_di_IVCLFrameForm FDocForm;
	_di_IVCLFrameForm FFrameForm;
	_di_IOleInPlaceObject FOleInPlaceObject;
	_di_IOleInPlaceActiveObject FOleInPlaceActiveObject;
	HACCEL FAccelTable;
	int FAccelCount;
	Vcl::Menus::TPopupMenu* FPopupVerbMenu;
	bool FAllowInPlace;
	bool FAllowActiveDoc;
	TAutoActivate FAutoActivate;
	bool FAutoVerbMenu;
	Vcl::Forms::TFormBorderStyle FBorderStyle;
	bool FCopyOnSave;
	bool FOldStreamFormat;
	TSizeMode FSizeMode;
	bool FObjectOpen;
	bool FUIActive;
	bool FModified;
	bool FModSinceSave;
	bool FFocused;
	bool FNewInserted;
	System::Classes::TNotifyEvent FOnActivate;
	System::Classes::TNotifyEvent FOnDeactivate;
	TObjectMoveEvent FOnObjectMove;
	System::Classes::TNotifyEvent FOnResize;
	_di_IOleDocumentView FDocView;
	bool FDocObj;
	HRESULT __stdcall SaveObject();
	HRESULT __stdcall GetMoniker(int dwAssign, int dwWhichMoniker, /* out */ _di_IMoniker &mk);
	HRESULT __stdcall GetContainer(/* out */ _di_IOleContainer &container);
	HRESULT __stdcall ShowObject();
	HRESULT __stdcall OnShowWindow(System::LongBool fShow);
	HRESULT __stdcall RequestNewObjectLayout();
	HRESULT __stdcall ContextSensitiveHelp(System::LongBool fEnterMode);
	HRESULT __stdcall GetWindow(/* out */ HWND &wnd);
	HRESULT __stdcall CanInPlaceActivate();
	HRESULT __stdcall OnInPlaceActivate();
	HRESULT __stdcall OnUIActivate();
	HRESULT __stdcall GetWindowContext(/* out */ _di_IOleInPlaceFrame &frame, /* out */ _di_IOleInPlaceUIWindow &doc, /* out */ System::Types::TRect &rcPosRect, /* out */ System::Types::TRect &rcClipRect, /* out */ tagOIFI &frameInfo);
	HRESULT __stdcall Scroll(System::Types::TPoint scrollExtent);
	HRESULT __stdcall OnUIDeactivate(System::LongBool fUndoable);
	HRESULT __stdcall OnInPlaceDeactivate();
	HRESULT __stdcall DiscardUndoState();
	HRESULT __stdcall DeactivateAndUndo();
	HRESULT __stdcall OnPosRectChange(const System::Types::TRect &rcPosRect);
	void __stdcall OnDataChange(const tagFORMATETC &formatetc, const tagSTGMEDIUM &stgmed);
	void __stdcall OnViewChange(int dwAspect, int lindex);
	void __stdcall OnRename(const _di_IMoniker mk);
	void __stdcall OnSave();
	void __stdcall OnClose();
	HRESULT __stdcall ActivateMe(_di_IOleDocumentView View);
	HRESULT __stdcall GetObjectInfo(int dwObject, int &dwObjSize, System::WideChar * &lpszLabel, System::WideChar * &lpszType, System::WideChar * &lpszShortType, System::WideChar * &lpszLocation);
	HRESULT __stdcall GetConvertInfo(int dwObject, GUID &ClassID, System::Word &wFormat, GUID &ConvertDefaultClassID, System::PGUID &lpClsidExclude, int &cClsidExclude);
	HRESULT __stdcall ConvertObject(int dwObject, const GUID &clsidNew);
	HRESULT __stdcall GetViewInfo(int dwObject, NativeUInt &hMetaPict, int &dvAspect, int &nCurrentScale);
	HRESULT __stdcall SetViewInfo(int dwObject, NativeUInt hMetaPict, int dvAspect, int nCurrentScale, System::LongBool bRelativeToOrig);
	void __fastcall AdjustBounds();
	void __fastcall CheckObject();
	void __fastcall CreateAccelTable();
	void __fastcall CreateStorage();
	void __fastcall DesignModified();
	void __fastcall DestroyAccelTable();
	void __fastcall DestroyVerbs();
	int __fastcall GetBorderWidth();
	bool __fastcall GetCanPaste();
	bool __fastcall GetIconic();
	bool __fastcall GetLinked();
	int __fastcall GetObjectDataSize();
	System::Classes::TStrings* __fastcall GetObjectVerbs();
	System::UnicodeString __fastcall GetOleClassName();
	System::Variant __fastcall GetOleObject();
	int __fastcall GetPrimaryVerb();
	System::UnicodeString __fastcall GetSourceDoc();
	TObjectState __fastcall GetState();
	void __fastcall InitObject();
	void __fastcall ObjectMoved(const System::Types::TRect &ObjectRect);
	void __fastcall PopupVerbMenuClick(System::TObject* Sender);
	void __fastcall SetBorderStyle(Vcl::Forms::TBorderStyle Value);
	void __fastcall SetDrawAspect(bool Iconic, NativeUInt IconMetaPict);
	void __fastcall SetFocused(bool Value);
	void __fastcall SetIconic(bool Value);
	void __fastcall SetSizeMode(TSizeMode Value);
	void __fastcall SetUIActive(bool Active);
	void __fastcall SetViewAdviseSink(bool Enable);
	void __fastcall UpdateObjectRect();
	void __fastcall UpdateView();
	HIDESBASE MESSAGE void __fastcall CMCtl3DChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMDocWindowActivate(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall CMUIDeactivate(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TWMSetFocus &Message);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Message);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	HIDESBASE MESSAGE void __fastcall WMWindowPosChanged(Winapi::Messages::TWMWindowPosMsg &Message);
	
protected:
	virtual HRESULT __stdcall QueryInterface(const GUID &IID, /* out */ void *Obj);
	HIDESBASE int __stdcall _AddRef();
	HIDESBASE int __stdcall _Release();
	HIDESBASEDYNAMIC void __fastcall Changed();
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	DYNAMIC void __fastcall DblClick();
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	DYNAMIC void __fastcall DoEnter();
	DYNAMIC Vcl::Menus::TPopupMenu* __fastcall GetPopupMenu();
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall Paint();
	
public:
	__fastcall virtual TOleContainer(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TOleContainer();
	bool __fastcall ChangeIconDialog();
	void __fastcall Close();
	void __fastcall Copy();
	void __fastcall CreateLinkToFile(const System::UnicodeString FileName, bool Iconic);
	void __fastcall CreateObject(const System::UnicodeString OleClassName, bool Iconic);
	void __fastcall CreateObjectFromFile(const System::UnicodeString FileName, bool Iconic);
	void __fastcall CreateObjectFromInfo(const TCreateInfo &CreateInfo);
	void __fastcall DestroyObject();
	void __fastcall DoVerb(int Verb);
	NativeUInt __fastcall GetIconMetaPict();
	bool __fastcall InsertObjectDialog();
	void __fastcall LoadFromFile(const System::UnicodeString FileName);
	void __fastcall LoadFromStream(System::Classes::TStream* Stream);
	bool __fastcall ObjectPropertiesDialog();
	void __fastcall Paste();
	bool __fastcall PasteSpecialDialog();
	void __fastcall Run();
	void __fastcall SaveAsDocument(const System::UnicodeString FileName);
	void __fastcall SaveToFile(const System::UnicodeString FileName);
	void __fastcall SaveToStream(System::Classes::TStream* Stream);
	void __fastcall UpdateObject();
	void __fastcall UpdateVerbs();
	__property bool CanPaste = {read=GetCanPaste, nodefault};
	__property bool Linked = {read=GetLinked, nodefault};
	__property bool Modified = {read=FModified, write=FModified, nodefault};
	__property bool NewInserted = {read=FNewInserted, nodefault};
	__property System::Classes::TStrings* ObjectVerbs = {read=GetObjectVerbs};
	__property System::UnicodeString OleClassName = {read=GetOleClassName};
	__property System::Variant OleObject = {read=GetOleObject};
	__property _di_IOleObject OleObjectInterface = {read=FOleObject};
	__property int PrimaryVerb = {read=GetPrimaryVerb, nodefault};
	__property System::UnicodeString SourceDoc = {read=GetSourceDoc};
	__property TObjectState State = {read=GetState, nodefault};
	__property _di_IStorage StorageInterface = {read=FStorage};
	
__published:
	__property bool AllowInPlace = {read=FAllowInPlace, write=FAllowInPlace, default=1};
	__property bool AllowActiveDoc = {read=FAllowActiveDoc, write=FAllowActiveDoc, default=1};
	__property TAutoActivate AutoActivate = {read=FAutoActivate, write=FAutoActivate, default=2};
	__property bool AutoVerbMenu = {read=FAutoVerbMenu, write=FAutoVerbMenu, default=1};
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property Vcl::Forms::TBorderStyle BorderStyle = {read=FBorderStyle, write=SetBorderStyle, default=1};
	__property Caption = {default=0};
	__property Color = {default=-16777211};
	__property Constraints;
	__property bool CopyOnSave = {read=FCopyOnSave, write=FCopyOnSave, default=1};
	__property Ctl3D;
	__property DragCursor = {default=-12};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property bool Iconic = {read=GetIconic, write=SetIconic, stored=false, nodefault};
	__property bool OldStreamFormat = {read=FOldStreamFormat, write=FOldStreamFormat, default=0};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property TSizeMode SizeMode = {read=FSizeMode, write=SetSizeMode, default=0};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Visible = {default=1};
	__property System::Classes::TNotifyEvent OnActivate = {read=FOnActivate, write=FOnActivate};
	__property System::Classes::TNotifyEvent OnDeactivate = {read=FOnDeactivate, write=FOnDeactivate};
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnMouseActivate;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property TObjectMoveEvent OnObjectMove = {read=FOnObjectMove, write=FOnObjectMove};
	__property System::Classes::TNotifyEvent OnResize = {read=FOnResize, write=FOnResize};
	__property OnStartDrag;
public:
	/* TWinControl.CreateParented */ inline __fastcall TOleContainer(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
private:
	void *__IOleUIObjInfo;	// IOleUIObjInfo 
	void *__IOleDocumentSite;	// IOleDocumentSite 
	void *__IAdviseSink;	// IAdviseSink 
	void *__IOleInPlaceSite;	// IOleInPlaceSite 
	void *__IOleClientSite;	// IOleClientSite 
	
public:
	operator IOleUIObjInfo*(void) { return (IOleUIObjInfo*)&__IOleUIObjInfo; }
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {B722BCC7-4E68-101B-A2BC-00AA00404770}
	operator _di_IOleDocumentSite()
	{
		_di_IOleDocumentSite intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IOleDocumentSite*(void) { return (IOleDocumentSite*)&__IOleDocumentSite; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {0000010F-0000-0000-C000-000000000046}
	operator _di_IAdviseSink()
	{
		_di_IAdviseSink intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IAdviseSink*(void) { return (IAdviseSink*)&__IAdviseSink; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00000119-0000-0000-C000-000000000046}
	operator _di_IOleInPlaceSite()
	{
		_di_IOleInPlaceSite intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IOleInPlaceSite*(void) { return (IOleInPlaceSite*)&__IOleInPlaceSite; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00000118-0000-0000-C000-000000000046}
	operator _di_IOleClientSite()
	{
		_di_IOleClientSite intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IOleClientSite*(void) { return (IOleClientSite*)&__IOleClientSite; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00000000-0000-0000-C000-000000000046}
	operator System::_di_IInterface()
	{
		System::_di_IInterface intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator System::IInterface*(void) { return (System::IInterface*)&__IOleUIObjInfo; }
	#endif
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TOleForm : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	Vcl::Forms::TCustomForm* FForm;
	System::Classes::TList* FContainers;
	_di_IOleInPlaceActiveObject FActiveObject;
	int FSaveWidth;
	int FSaveHeight;
	System::Classes::TList* FHiddenControls;
	System::StaticArray<Vcl::Controls::TControl*, 4> FSpacers;
	void __fastcall OnDestroy();
	void __fastcall OnResize();
	HRESULT __stdcall GetWindow(/* out */ HWND &wnd);
	HRESULT __stdcall ContextSensitiveHelp(System::LongBool fEnterMode);
	HRESULT __stdcall GetBorder(/* out */ System::Types::TRect &BorderRect);
	HRESULT __stdcall RequestBorderSpace(const System::Types::TRect &borderwidths);
	HRESULT __stdcall SetBorderSpace(System::Types::PRect pborderwidths);
	HRESULT __stdcall SetActiveObject(const _di_IOleInPlaceActiveObject ActiveObject, System::WideChar * pszObjName);
	HRESULT __stdcall InsertMenus(HMENU hmenuShared, tagOleMenuGroupWidths &menuWidths);
	HRESULT __stdcall SetMenu(HMENU hmenuShared, HMENU holemenu, HWND hwndActiveObject);
	HRESULT __stdcall RemoveMenus(HMENU hmenuShared);
	HRESULT __stdcall SetStatusText(System::WideChar * pszStatusText);
	HRESULT __stdcall EnableModeless(System::LongBool fEnable);
	HRESULT __stdcall TranslateAccelerator(tagMSG &msg, System::Word wID);
	void __fastcall AddContainer(TOleContainer* Instance);
	void __fastcall RemoveContainer(TOleContainer* Instance);
	Vcl::Forms::TCustomForm* __fastcall Form();
	void __fastcall ClearBorderSpace();
	bool __fastcall IsSpacer(Vcl::Controls::TControl* Control);
	bool __fastcall IsToolControl(Vcl::Controls::TControl* Control);
	
public:
	__fastcall TOleForm(Vcl::Forms::TCustomForm* Form);
	__fastcall virtual ~TOleForm();
private:
	void *__IVCLFrameForm;	// IVCLFrameForm 
	void *__IOleForm;	// Vcl::Forms::IOleForm 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {CD02E1C0-52DA-11D0-9EA6-0020AF3D82DA}
	operator _di_IVCLFrameForm()
	{
		_di_IVCLFrameForm intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IVCLFrameForm*(void) { return (IVCLFrameForm*)&__IVCLFrameForm; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00000116-0000-0000-C000-000000000046}
	operator _di_IOleInPlaceFrame()
	{
		_di_IOleInPlaceFrame intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IOleInPlaceFrame*(void) { return (IOleInPlaceFrame*)&__IVCLFrameForm; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00000115-0000-0000-C000-000000000046}
	operator _di_IOleInPlaceUIWindow()
	{
		_di_IOleInPlaceUIWindow intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IOleInPlaceUIWindow*(void) { return (IOleInPlaceUIWindow*)&__IVCLFrameForm; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00000114-0000-0000-C000-000000000046}
	operator _di_IOleWindow()
	{
		_di_IOleWindow intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IOleWindow*(void) { return (IOleWindow*)&__IVCLFrameForm; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {CD02E1C1-52DA-11D0-9EA6-0020AF3D82DA}
	operator Vcl::Forms::_di_IOleForm()
	{
		Vcl::Forms::_di_IOleForm intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Vcl::Forms::IOleForm*(void) { return (Vcl::Forms::IOleForm*)&__IOleForm; }
	#endif
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 ovShow = System::Int8(-1);
static const System::Int8 ovOpen = System::Int8(-2);
static const System::Int8 ovHide = System::Int8(-3);
static const System::Int8 ovUIActivate = System::Int8(-4);
static const System::Int8 ovInPlaceActivate = System::Int8(-5);
static const System::Int8 ovDiscardUndoState = System::Int8(-6);
static const int ovPrimary = int(-65536);
extern DELPHI_PACKAGE void __fastcall DestroyMetaPict(NativeUInt MetaPict);
}	/* namespace Olectnrs */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_OLECTNRS)
using namespace Vcl::Olectnrs;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_OlectnrsHPP
