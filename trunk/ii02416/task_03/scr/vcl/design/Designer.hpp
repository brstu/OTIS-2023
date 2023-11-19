// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Designer.pas' rev: 35.00 (Windows)

#ifndef DesignerHPP
#define DesignerHPP

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
#include <System.Contnrs.hpp>

//-- user supplied -----------------------------------------------------------

namespace Designer
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IItemGuidelines;
typedef System::DelphiInterface<IItemGuidelines> _di_IItemGuidelines;
__interface DELPHIINTERFACE IGuidelinePainter;
typedef System::DelphiInterface<IGuidelinePainter> _di_IGuidelinePainter;
__interface DELPHIINTERFACE IDragImage;
typedef System::DelphiInterface<IDragImage> _di_IDragImage;
__interface DELPHIINTERFACE IItem;
typedef System::DelphiInterface<IItem> _di_IItem;
__interface DELPHIINTERFACE IComponentItem;
typedef System::DelphiInterface<IComponentItem> _di_IComponentItem;
__interface DELPHIINTERFACE IItemEx;
typedef System::DelphiInterface<IItemEx> _di_IItemEx;
__interface DELPHIINTERFACE IItem2D;
typedef System::DelphiInterface<IItem2D> _di_IItem2D;
__interface DELPHIINTERFACE ICustomModuleItemCreator;
typedef System::DelphiInterface<ICustomModuleItemCreator> _di_ICustomModuleItemCreator;
__interface DELPHIINTERFACE IItemWrapper;
typedef System::DelphiInterface<IItemWrapper> _di_IItemWrapper;
__interface DELPHIINTERFACE IGrabHandles;
typedef System::DelphiInterface<IGrabHandles> _di_IGrabHandles;
__interface DELPHIINTERFACE IDragBoxes;
typedef System::DelphiInterface<IDragBoxes> _di_IDragBoxes;
__interface DELPHIINTERFACE IDragBoxesEx;
typedef System::DelphiInterface<IDragBoxesEx> _di_IDragBoxesEx;
__interface DELPHIINTERFACE IDesignSurfaceListener;
typedef System::DelphiInterface<IDesignSurfaceListener> _di_IDesignSurfaceListener;
__interface DELPHIINTERFACE IDesignSurface;
typedef System::DelphiInterface<IDesignSurface> _di_IDesignSurface;
__interface DELPHIINTERFACE ITools;
typedef System::DelphiInterface<ITools> _di_ITools;
__interface DELPHIINTERFACE ISelectionsListener;
typedef System::DelphiInterface<ISelectionsListener> _di_ISelectionsListener;
__interface DELPHIINTERFACE ISelections;
typedef System::DelphiInterface<ISelections> _di_ISelections;
__interface DELPHIINTERFACE ISurfaceDesigner;
typedef System::DelphiInterface<ISurfaceDesigner> _di_ISurfaceDesigner;
class DELPHICLASS TDesigner;
__interface DELPHIINTERFACE IPersistentItem;
typedef System::DelphiInterface<IPersistentItem> _di_IPersistentItem;
class DELPHICLASS TPersistentItem;
class DELPHICLASS TXorDragBoxes;
class DELPHICLASS TNullTools;
class DELPHICLASS TSelectionListenerHelper;
class DELPHICLASS TSimpleSelections;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TZOrder : unsigned char { zoFront, zoBack };

enum DECLSPEC_DENUM TGuideType : unsigned char { gtAlignLeft, gtAlignTop, gtAlignRight, gtAlignBottom, gtMarginLeft, gtMarginTop, gtMarginRight, gtMarginBottom, gtPaddingLeft, gtPaddingTop, gtPaddingRight, gtPaddingBottom, gtBaseline };

typedef System::Set<TGuideType, TGuideType::gtAlignLeft, TGuideType::gtBaseline> TGuideTypes;

__interface  INTERFACE_UUID("{FB1DDCF5-5EE1-4212-BA03-435B21BBEF50}") IItemGuidelines  : public System::IInterface 
{
	
public:
	int operator[](int Index) { return this->GuideOffsets[Index]; }
	virtual int __fastcall GetCount() = 0 ;
	virtual TGuideType __fastcall GetGuideType(int Index) = 0 ;
	virtual int __fastcall GetGuideOffset(int Index) = 0 ;
	__property int Count = {read=GetCount};
	__property TGuideType GuideTypes[int Index] = {read=GetGuideType};
	__property int GuideOffsets[int Index] = {read=GetGuideOffset/*, default*/};
};

__interface  INTERFACE_UUID("{9266DB44-D85F-4A71-8E31-215CA9E88BFB}") IGuidelinePainter  : public System::IInterface 
{
	virtual void __fastcall Add(const System::Types::TRect &ARect, TGuideType AGuideType) = 0 ;
	virtual void __fastcall BeginUpdate() = 0 ;
	virtual void __fastcall ClearLines() = 0 ;
	virtual void __fastcall EndUpdate() = 0 ;
};

__interface  INTERFACE_UUID("{6986FA99-A57D-4ABF-AD17-9BB36010E898}") IDragImage  : public System::IInterface 
{
	virtual void __fastcall DrawImage(System::TObject* Canvas, const System::Types::TPoint &Point) = 0 ;
};

__interface  INTERFACE_UUID("{C41303AD-CAE3-11D3-AB47-00C04FB17A72}") IItem  : public System::IInterface 
{
	virtual bool __fastcall Contains(const _di_IItem Item) = 0 ;
	virtual void __fastcall Delete() = 0 ;
	virtual System::Types::TPoint __fastcall GlobalToLocal(const System::Types::TPoint &Point) = 0 ;
	virtual System::Types::TPoint __fastcall LocalToGlobal(const System::Types::TPoint &Point) = 0 ;
	virtual bool __fastcall Equals(const _di_IItem Item) = 0 ;
	virtual System::Types::TRect __fastcall GetBoundsRect() = 0 ;
	virtual System::Types::TRect __fastcall GetExtendedRect() = 0 ;
	virtual System::Types::TRect __fastcall GetClientRect() = 0 ;
	virtual _di_IItem __fastcall GetParent() = 0 ;
	virtual bool __fastcall IsContainer() = 0 ;
	virtual bool __fastcall HasSelectableChildren() = 0 ;
	virtual void __fastcall SetBoundsRect(const System::Types::TRect &Value) = 0 ;
	virtual bool __fastcall Selectable() = 0 ;
	virtual void __fastcall ValidateDeletable() = 0 ;
	virtual void __fastcall Edit() = 0 ;
	__property System::Types::TRect BoundsRect = {read=GetBoundsRect, write=SetBoundsRect};
	__property System::Types::TRect ClientRect = {read=GetClientRect};
	__property System::Types::TRect ExtendedRect = {read=GetExtendedRect};
	__property _di_IItem Parent = {read=GetParent};
};

__interface  INTERFACE_UUID("{EBBB60E7-45FF-4461-BF1A-9D24AA0ABD6D}") IComponentItem  : public IItem 
{
	virtual bool __fastcall GetVisible() = 0 ;
	__property bool Visible = {read=GetVisible};
};

__interface  INTERFACE_UUID("{1325EA5F-56A8-419A-9A0E-EA314C61BD55}") IItemEx  : public IItem 
{
	virtual _di_IDragImage __fastcall GetDragImage() = 0 ;
	virtual _di_IItemGuidelines __fastcall GetGuidelines() = 0 ;
	virtual System::Types::TRect __fastcall GetPaddedBoundsRect() = 0 ;
	virtual bool __fastcall GetShowing() = 0 ;
	__property System::Types::TRect PaddedBoundsRect = {read=GetPaddedBoundsRect};
	__property bool Showing = {read=GetShowing};
};

__interface  INTERFACE_UUID("{FB9FE8E7-0576-47A5-ADD4-B3F9981A1988}") IItem2D  : public IItemEx 
{
	virtual System::Extended __fastcall GetRotationAngle() = 0 ;
	virtual System::Types::TPointF __fastcall GetRotationCenter() = 0 ;
	virtual System::Types::TPointF __fastcall GetScale() = 0 ;
};

__interface  INTERFACE_UUID("{DDA32E0C-AB72-4AC5-9FD5-CC6055569D70}") ICustomModuleItemCreator  : public System::IInterface 
{
	virtual _di_IItem __fastcall ItemFor(System::Classes::TPersistent* APersistent, const System::_di_IInterface Surface) = 0 ;
};

__interface  INTERFACE_UUID("{9176628C-79F0-47AD-865D-6EB4F70D9D6A}") IItemWrapper  : public System::IInterface 
{
	virtual int __fastcall GetLeft() = 0 ;
	virtual int __fastcall GetTop() = 0 ;
	virtual int __fastcall GetRight() = 0 ;
	virtual int __fastcall GetBottom() = 0 ;
	virtual System::Types::TPoint __fastcall GetOffset() = 0 ;
	virtual int __fastcall GetPaddedLeft() = 0 ;
	virtual int __fastcall GetPaddedTop() = 0 ;
	virtual int __fastcall GetPaddedRight() = 0 ;
	virtual int __fastcall GetPaddedBottom() = 0 ;
	virtual _di_IItemEx __fastcall GetItem() = 0 ;
	virtual System::Types::TRect __fastcall GetBoundsRect() = 0 ;
	virtual System::Types::TRect __fastcall GetPaddedBoundsRect() = 0 ;
	virtual System::Types::TRect __fastcall GetClientRect() = 0 ;
	virtual void __fastcall SetOffset(const System::Types::TPoint &APoint) = 0 ;
	virtual void __fastcall SetBoundsRect(const System::Types::TRect &ARect) = 0 ;
	__property int Left = {read=GetLeft};
	__property int Top = {read=GetTop};
	__property int Right = {read=GetRight};
	__property int Bottom = {read=GetBottom};
	__property int PaddedLeft = {read=GetPaddedLeft};
	__property int PaddedTop = {read=GetPaddedTop};
	__property int PaddedRight = {read=GetPaddedRight};
	__property int PaddedBottom = {read=GetPaddedBottom};
	__property System::Types::TPoint Offset = {read=GetOffset, write=SetOffset};
	__property _di_IItemEx Item = {read=GetItem};
	__property System::Types::TRect BoundsRect = {read=GetBoundsRect, write=SetBoundsRect};
	__property System::Types::TRect PaddedBoundsRect = {read=GetPaddedBoundsRect};
	__property System::Types::TRect ClientRect = {read=GetClientRect};
};

__interface  INTERFACE_UUID("{C41303A9-CAE3-11D3-AB47-00C04FB17A72}") IGrabHandles  : public System::IInterface 
{
	virtual _di_IItem __fastcall GetSelection() = 0 ;
	virtual void __fastcall SetSelection(const _di_IItem Value) = 0 ;
	virtual void __fastcall SetActive(bool Value) = 0 ;
	virtual void __fastcall Update() = 0 ;
	__property _di_IItem Selection = {read=GetSelection, write=SetSelection};
};

enum DECLSPEC_DENUM TDesignKeyCode : unsigned char { dkNone, dkDelete, dkLeft, dkUp, dkRight, dkDown, dkTab, dkEnter, dkEscape, dkChar };

enum DECLSPEC_DENUM Designer__1 : unsigned char { gaLeft, gaTop, gaRight, gaBottom };

typedef System::Set<Designer__1, Designer__1::gaLeft, Designer__1::gaBottom> TMoveAffects;

enum DECLSPEC_DENUM TDesignBoxStyle : unsigned char { dbsSelection, dbsItem };

enum DECLSPEC_DENUM TDragAction : unsigned char { daNone, daCreate, daSelect, daMove, daSize };

__interface IDragBoxes  : public System::IInterface 
{
	virtual int __fastcall Add(const System::Types::TRect &Rect, TDesignBoxStyle Style, TDragAction DragAction) = 0 /* overload */;
	virtual void __fastcall Change(int Index, const System::Types::TRect &New, TDragAction DragAction) = 0 ;
	virtual void __fastcall MoveBy(int DX, int DY, TDragAction DragAction) = 0 ;
	virtual void __fastcall Done() = 0 ;
};

__interface  INTERFACE_UUID("{D09A9465-C694-4A0A-9090-EC7C07677F31}") IDragBoxesEx  : public IDragBoxes 
{
	HIDESBASE virtual int __fastcall Add(const System::Types::TRect &Rect, const _di_IDragImage DragImage, TDesignBoxStyle Style, TDragAction DragAction) = 0 /* overload */;
	HIDESBASE virtual int __fastcall Add(_di_IItem2D Item, TDesignBoxStyle Style, TDragAction DragAction) = 0 /* overload */;
	virtual void __fastcall CancelDrag() = 0 ;
};

__interface  INTERFACE_UUID("{C41303AA-CAE3-11D3-AB47-00C04FB17A72}") IDesignSurfaceListener  : public System::IInterface 
{
	virtual void __fastcall MouseDown(_di_IItem Sender, System::Classes::TShiftState Shift, int X, int Y, bool DoubleClick, TMoveAffects MoveAffects = TMoveAffects() , bool NonClient = false) = 0 ;
	virtual void __fastcall MouseMove(int X, int Y) = 0 ;
	virtual void __fastcall MouseUp(int X, int Y) = 0 ;
	virtual void __fastcall Key(TDesignKeyCode KeyCode, System::Classes::TShiftState Shift, System::WideChar Ch, bool KeyUp = false) = 0 ;
	virtual void __fastcall CancelDragging() = 0 ;
};

__interface  INTERFACE_UUID("{37C644AA-6B33-4D7E-B18A-53D57E48010F}") IDesignSurface  : public System::IInterface 
{
	virtual void __fastcall AddListener(const _di_IDesignSurfaceListener Listener) = 0 ;
	virtual _di_IDragBoxes __fastcall BeginDragging(const _di_IItem Parent, const System::Types::TPoint &Anchor) = 0 ;
	virtual void __fastcall Close() = 0 ;
	virtual _di_IItem __fastcall CreateItem(const _di_IItem Parent, const System::Types::TRect &Rect, bool ScaleRect) = 0 ;
	virtual System::Types::TPoint __fastcall CursorPosition() = 0 ;
	virtual void __fastcall DeleteSelection() = 0 ;
	virtual System::Types::TPoint __fastcall DesignerToGlobal(const System::Types::TPoint &Point) = 0 ;
	virtual void __fastcall DestroyItem(const _di_IItem Item) = 0 ;
	virtual _di_IItem __fastcall FindNextItem(const _di_IItem Item, bool GoForward) = 0 ;
	virtual void __fastcall Focus() = 0 ;
	virtual _di_IGrabHandles __fastcall GetGrabHandles() = 0 ;
	virtual _di_IGuidelinePainter __fastcall GetGuidelinePainter() = 0 ;
	virtual _di_IItem __fastcall GetItems(int Index) = 0 ;
	virtual int __fastcall GetItemsCount() = 0 ;
	virtual System::Types::TPoint __fastcall GetOffset() = 0 ;
	virtual _di_IItem __fastcall GetRoot() = 0 ;
	virtual _di_IItem __fastcall GetContainerItem() = 0 ;
	virtual System::Types::TPoint __fastcall GlobalToDesigner(const System::Types::TPoint &Point) = 0 ;
	virtual bool __fastcall GridSnapDisabled() = 0 ;
	virtual _di_IItem __fastcall ItemAt(const int X, const int Y) = 0 ;
	virtual void __fastcall RemoveListener(const _di_IDesignSurfaceListener Listener) = 0 ;
	virtual void __fastcall UpdateSelection() = 0 ;
	virtual void __fastcall ValidateModification() = 0 ;
	virtual void __fastcall Modified() = 0 ;
	virtual bool __fastcall ItemInSelections(const _di_ISelections ASelections, const _di_IItem AItem) = 0 ;
	virtual _di_IItem __fastcall ItemFor(System::Classes::TPersistent* APersistent) = 0 ;
	__property _di_IGrabHandles GrabHandles = {read=GetGrabHandles};
	__property _di_IGuidelinePainter GuidelinePainter = {read=GetGuidelinePainter};
	__property _di_IItem Items[int Index] = {read=GetItems};
	__property int ItemsCount = {read=GetItemsCount};
	__property _di_IItem Root = {read=GetRoot};
	__property _di_IItem ContainerItem = {read=GetContainerItem};
};

__interface  INTERFACE_UUID("{C41303AF-CAE3-11D3-AB47-00C04FB17A72}") ITools  : public System::IInterface 
{
	virtual bool __fastcall ToolSelected() = 0 ;
};

__interface  INTERFACE_UUID("{3D642F40-D567-11D3-BA96-0080C78ADCDB}") ISelectionsListener  : public System::IInterface 
{
	virtual void __fastcall SelectionChanged(const _di_ISelections Selections) = 0 ;
};

__interface  INTERFACE_UUID("{C41303AC-CAE3-11D3-AB47-00C04FB17A72}") ISelections  : public System::IInterface 
{
	
public:
	_di_IItem operator[](int Index) { return this->Items[Index]; }
	virtual int __fastcall GetCount() = 0 ;
	virtual _di_IItem __fastcall GetItems(int Index) = 0 ;
	virtual int __fastcall GetSelectionLevel() = 0 ;
	virtual void __fastcall Add(const _di_IItem Item) = 0 ;
	virtual void __fastcall AddListener(const _di_ISelectionsListener Listener) = 0 ;
	virtual void __fastcall BeginSelections() = 0 ;
	virtual void __fastcall Clear() = 0 ;
	virtual void __fastcall EndSelections() = 0 ;
	virtual void __fastcall Remove(const _di_IItem Item) = 0 /* overload */;
	virtual void __fastcall Remove(int Index) = 0 /* overload */;
	virtual void __fastcall RemoveListener(const _di_ISelectionsListener Listener) = 0 ;
	virtual bool __fastcall Selected(const _di_IItem Item) = 0 ;
	virtual void __fastcall Toggle(const _di_IItem Item) = 0 ;
	__property int Count = {read=GetCount};
	__property _di_IItem Items[int Index] = {read=GetItems/*, default*/};
	__property int SelectionLevel = {read=GetSelectionLevel};
};

__interface  INTERFACE_UUID("{BC9760BF-249C-433A-B2C9-85B59B2D3A9F}") ISurfaceDesigner  : public System::IInterface 
{
	virtual void __fastcall Close() = 0 ;
	virtual void __fastcall CancelDragging() = 0 ;
	virtual bool __fastcall GetLocked() = 0 ;
	virtual System::Types::TPoint __fastcall GetGridSize() = 0 ;
	virtual void __fastcall Lock() = 0 ;
	virtual void __fastcall Modified() = 0 ;
	virtual System::Types::TPoint __fastcall PointToGrid(const System::Types::TPoint &Pos, bool Force = false) = 0 ;
	virtual void __fastcall SetGridSize(const System::Types::TPoint &Value) = 0 ;
	virtual void __fastcall Unlock() = 0 ;
	virtual bool __fastcall GetGridAligned() = 0 ;
	virtual void __fastcall SetGridAligned(bool Value) = 0 ;
	virtual bool __fastcall GetGuidelines() = 0 ;
	virtual void __fastcall SetGuidelines(bool Value) = 0 ;
	virtual _di_ISelections __fastcall GetSelections() = 0 ;
	virtual TDragAction __fastcall GetDragAction() = 0 ;
	__property TDragAction DragAction = {read=GetDragAction};
	__property bool Locked = {read=GetLocked};
	__property System::Types::TPoint GridSize = {read=GetGridSize, write=SetGridSize};
	__property bool GridAligned = {read=GetGridAligned, write=SetGridAligned};
	__property bool Guidelines = {read=GetGuidelines, write=SetGuidelines};
	__property _di_ISelections Selections = {read=GetSelections};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDesigner : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	_di_IDesignSurface FDesignSurface;
	_di_ISelections FSelections;
	_di_IGrabHandles FGrabHandles;
	_di_ITools FTools;
	System::Types::TPoint FGridSize;
	System::Types::TPoint FAnchor;
	System::Types::TRect FDragRect;
	TMoveAffects FDragAffects;
	TDragAction FDragAction;
	System::Types::TRect FOriginalBounds;
	bool FLocked;
	bool FGridAlign;
	bool FGuidelines;
	_di_IItem FDragParent;
	_di_IDragBoxes FBoxes;
	_di_IDragBoxesEx FBoxesEx;
	_di_IGuidelinePainter FGuidelinePainter;
	System::Contnrs::TObjectList* FHorzGuides;
	System::Contnrs::TObjectList* FVertGuides;
	_di_IItemGuidelines FDragGuide;
	_di_IItemWrapper FDragItem;
	TGuideTypes FAllowedHorzGuides;
	TGuideTypes FAllowedVertGuides;
	void __fastcall DoDragCreate();
	void __fastcall DoDragMove();
	void __fastcall DoDragSelect();
	void __fastcall DoDragSize();
	void __fastcall DragBoxesMoveTo(const System::Types::TRect &NewRect);
	void __fastcall DragBoxesOff();
	void __fastcall DragBoxesOn();
	_di_IItem __fastcall FindNearestItem(const _di_IItem Item, TDesignKeyCode Key);
	void __fastcall ForceCommonSelectParent(const _di_IItem Parent);
	void __fastcall GenerateGuidelines();
	System::Types::TRect __fastcall GetDragRect(const System::Types::TPoint &Pos, bool IgnoreGuides = false);
	void __fastcall GetGuides();
	void __fastcall MoveBy(const System::Types::TPoint &Delta, bool Size);
	int __fastcall SnapToGrid(int Coord, int GridOffset, int GridSize, bool Force);
	bool __fastcall SnapToMarginGuide(const _di_IItemWrapper Item, int &NewPos, const _di_IItemGuidelines ADragGuides, System::Contnrs::TObjectList* Guides, TGuideTypes AllowedGuides);
	bool __fastcall SnapToAlignGuide(int &NewPos, const _di_IItemGuidelines ADragGuides, System::Contnrs::TObjectList* Guides, TGuideTypes AllowedGuides);
	
protected:
	void __fastcall MouseDown(_di_IItem Sender, System::Classes::TShiftState Shift, int X, int Y, bool DoubleClick, TMoveAffects MoveAffects = TMoveAffects() , bool NonClient = false);
	void __fastcall MouseMove(int X, int Y);
	void __fastcall MouseUp(int X, int Y);
	void __fastcall Key(TDesignKeyCode KeyCode, System::Classes::TShiftState Shift, System::WideChar Ch, bool KeyUp = false);
	void __fastcall Close();
	void __fastcall CancelDragging();
	bool __fastcall GetLocked();
	System::Types::TPoint __fastcall PointToGrid(const System::Types::TPoint &Pos, bool Force = false);
	System::Types::TPoint __fastcall GetGridSize();
	void __fastcall SetGridSize(const System::Types::TPoint &Value);
	bool __fastcall GetGridAligned();
	void __fastcall SetGridAligned(bool Value);
	bool __fastcall GetGuidelines();
	void __fastcall SetGuidelines(bool Value);
	_di_ISelections __fastcall GetSelections();
	TDragAction __fastcall GetDragAction();
	void __fastcall BeginSelect();
	void __fastcall ClearSelection();
	void __fastcall DragBegin(int X, int Y);
	void __fastcall DragCancel();
	void __fastcall DragEnd(int X, int Y, bool Accept);
	void __fastcall DragTo(int X, int Y);
	void __fastcall Edit(const _di_IItem Item);
	void __fastcall EndSelect();
	bool __fastcall IsDesignerSelected();
	void __fastcall Select(const _di_IItem Item, bool Extend);
	_di_IItem __fastcall SelectedItem();
	__property System::Types::TPoint Anchor = {read=FAnchor};
	__property TDragAction DragAction = {read=FDragAction, nodefault};
	__property TMoveAffects DragAffects = {read=FDragAffects, nodefault};
	__property _di_IItem DragParent = {read=FDragParent};
	__property System::Types::TRect DragRect = {read=FDragRect};
	__property _di_IDesignSurface DesignSurface = {read=FDesignSurface};
	__property _di_IGrabHandles GrabHandles = {read=FGrabHandles};
	__property bool GridAlign = {read=FGridAlign, nodefault};
	__property System::Types::TPoint GridSize = {read=FGridSize};
	__property bool Guidelines = {read=FGuidelines, nodefault};
	__property _di_ISelections Selections = {read=FSelections};
	__property _di_ITools Tools = {read=FTools};
	
public:
	__fastcall TDesigner(const _di_IDesignSurface DesignSurface, const _di_ISelections Selections, const _di_ITools Tools);
	__fastcall virtual ~TDesigner();
	void __fastcall DeleteSelection();
	HIDESBASE void __fastcall Free();
	virtual void __fastcall Modified();
	void __fastcall Lock();
	void __fastcall Unlock();
	__property bool Locked = {read=FLocked, nodefault};
private:
	void *__ISurfaceDesigner;	// ISurfaceDesigner 
	void *__IDesignSurfaceListener;	// IDesignSurfaceListener 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {BC9760BF-249C-433A-B2C9-85B59B2D3A9F}
	operator _di_ISurfaceDesigner()
	{
		_di_ISurfaceDesigner intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ISurfaceDesigner*(void) { return (ISurfaceDesigner*)&__ISurfaceDesigner; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {C41303AA-CAE3-11D3-AB47-00C04FB17A72}
	operator _di_IDesignSurfaceListener()
	{
		_di_IDesignSurfaceListener intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IDesignSurfaceListener*(void) { return (IDesignSurfaceListener*)&__IDesignSurfaceListener; }
	#endif
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{C41303B0-CAE3-11D3-AB47-00C04FB17A72}") IPersistentItem  : public System::IInterface 
{
	virtual System::Classes::TPersistent* __fastcall GetItem() = 0 ;
	virtual System::UnicodeString __fastcall GetNamePath() = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPersistentItem : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	System::Classes::TPersistent* FInstance;
	
protected:
	System::Classes::TPersistent* __fastcall GetItem();
	System::UnicodeString __fastcall GetNamePath();
	bool __fastcall Contains(const _di_IItem Item);
	void __fastcall Delete();
	HIDESBASE bool __fastcall Equals(const _di_IItem Item);
	System::Types::TRect __fastcall GetBoundsRect();
	System::Types::TRect __fastcall GetClientRect();
	System::Types::TRect __fastcall GetExtendedRect();
	_di_IItem __fastcall GetParent();
	bool __fastcall IsContainer();
	bool __fastcall HasSelectableChildren();
	void __fastcall SetBoundsRect(const System::Types::TRect &Value);
	void __fastcall ValidateDeletable();
	__property System::Classes::TPersistent* Instance = {read=FInstance};
	
public:
	__fastcall TPersistentItem(System::Classes::TPersistent* Instance);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TPersistentItem() { }
	
private:
	void *__IPersistentItem;	// IPersistentItem 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {C41303B0-CAE3-11D3-AB47-00C04FB17A72}
	operator _di_IPersistentItem()
	{
		_di_IPersistentItem intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IPersistentItem*(void) { return (IPersistentItem*)&__IPersistentItem; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TXorDragBoxes : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
	
private:
	typedef System::DynamicArray<System::Types::TRect> _TXorDragBoxes__1;
	
	typedef System::DynamicArray<TDesignBoxStyle> _TXorDragBoxes__2;
	
	typedef System::DynamicArray<_di_IDragImage> _TXorDragBoxes__3;
	
	
private:
	_TXorDragBoxes__1 FRects;
	_TXorDragBoxes__2 FKinds;
	_TXorDragBoxes__3 FImages;
	int FUsed;
	void __fastcall DrawBoxes();
	
protected:
	int __fastcall Add(const System::Types::TRect &Rect, TDesignBoxStyle Style, TDragAction DragAction)/* overload */;
	int __fastcall Add(const System::Types::TRect &Rect, const _di_IDragImage DragImage, TDesignBoxStyle Style, TDragAction DragAction)/* overload */;
	int __fastcall Add(_di_IItem2D Item, TDesignBoxStyle Style, TDragAction DragAction)/* overload */;
	void __fastcall Change(int Index, const System::Types::TRect &New, TDragAction DragAction);
	void __fastcall MoveBy(int DX, int DY, TDragAction DragAction);
	void __fastcall Done();
	void __fastcall CancelDrag();
	System::Types::TRect __fastcall BoundingRect();
	virtual void __fastcall DrawBox(const System::Types::TRect &Rect, TDesignBoxStyle Kind) = 0 /* overload */;
	virtual void __fastcall DrawBox(const System::Types::TRect &Rect, const _di_IDragImage DragImage, TDesignBoxStyle Kind)/* overload */;
public:
	/* TObject.Create */ inline __fastcall TXorDragBoxes() : System::TInterfacedObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TXorDragBoxes() { }
	
private:
	void *__IDragBoxesEx;	// IDragBoxesEx 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {D09A9465-C694-4A0A-9090-EC7C07677F31}
	operator _di_IDragBoxesEx()
	{
		_di_IDragBoxesEx intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IDragBoxesEx*(void) { return (IDragBoxesEx*)&__IDragBoxesEx; }
	#endif
	operator IDragBoxes*(void) { return (IDragBoxes*)&__IDragBoxesEx; }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TNullTools : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
protected:
	bool __fastcall ToolSelected();
public:
	/* TObject.Create */ inline __fastcall TNullTools() : System::TInterfacedObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TNullTools() { }
	
private:
	void *__ITools;	// ITools 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {C41303AF-CAE3-11D3-AB47-00C04FB17A72}
	operator _di_ITools()
	{
		_di_ITools intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ITools*(void) { return (ITools*)&__ITools; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSelectionListenerHelper : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Classes::_di_IInterfaceList FList;
	
public:
	__fastcall TSelectionListenerHelper();
	void __fastcall AddListener(const _di_ISelectionsListener Listener);
	void __fastcall RemoveListener(const _di_ISelectionsListener Listener);
	void __fastcall SelectionChanged(const _di_ISelections Selections);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TSelectionListenerHelper() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSimpleSelections : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	System::Classes::_di_IInterfaceList FList;
	TSelectionListenerHelper* FListeners;
	int FBeginCount;
	bool FDirty;
	
protected:
	int __fastcall IndexOf(const _di_IItem Item);
	void __fastcall Modified();
	int __fastcall GetCount();
	_di_IItem __fastcall GetItems(int Index);
	int __fastcall GetSelectionLevel();
	void __fastcall BeginSelections();
	void __fastcall Add(const _di_IItem Item);
	void __fastcall Clear();
	void __fastcall EndSelections();
	void __fastcall Remove(const _di_IItem Item)/* overload */;
	void __fastcall Remove(int Index)/* overload */;
	bool __fastcall Selected(const _di_IItem Item);
	void __fastcall Toggle(const _di_IItem Item);
	__property TSelectionListenerHelper* Listeners = {read=FListeners};
	
public:
	__fastcall TSimpleSelections();
	__fastcall virtual ~TSimpleSelections();
private:
	void *__ISelections;	// ISelections 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {C41303AC-CAE3-11D3-AB47-00C04FB17A72}
	operator _di_ISelections()
	{
		_di_ISelections intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ISelections*(void) { return (ISelections*)&__ISelections; }
	#endif
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE bool __fastcall SameItem(const _di_IItem Item1, const _di_IItem Item2);
extern DELPHI_PACKAGE System::Classes::TPersistent* __fastcall ExtractPersistent(const _di_IItem Item);
extern DELPHI_PACKAGE System::Classes::TComponent* __fastcall ExtractComponent(const _di_IItem Item);
}	/* namespace Designer */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DESIGNER)
using namespace Designer;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DesignerHPP
