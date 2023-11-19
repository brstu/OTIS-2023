// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.Outline.pas' rev: 35.00 (Windows)

#ifndef Vcl_OutlineHPP
#define Vcl_OutlineHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#if !defined(_NO_DEPRECATED_UNIT_MSG)
#pragma message("Unit 'Vcl.Outline' is deprecated")
#endif
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.Classes.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <System.SysUtils.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Outline
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS OutlineError;
class DELPHICLASS EOutlineError;
class DELPHICLASS TOutlineNode;
class DELPHICLASS TCustomOutline;
class DELPHICLASS TOutline;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION OutlineError : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	/* TObject.Create */ inline __fastcall OutlineError() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~OutlineError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EOutlineError : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EOutlineError(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EOutlineError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EOutlineError(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EOutlineError(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EOutlineError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EOutlineError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EOutlineError(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EOutlineError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EOutlineError(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EOutlineError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EOutlineError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EOutlineError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EOutlineError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TOutlineNodeCompare : unsigned char { ocLess, ocSame, ocGreater, ocInvalid };

enum DECLSPEC_DENUM TAttachMode : unsigned char { oaAdd, oaAddChild, oaInsert };

typedef System::Int8 TChangeRange;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TOutlineNode : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
public:
	TOutlineNode* operator[](int Index) { return this->Items[Index]; }
	
private:
	System::Classes::TList* FList;
	System::UnicodeString FText;
	void *FData;
	TOutlineNode* FParent;
	int FIndex;
	bool FState;
	TCustomOutline* FOutline;
	int FExpandCount;
	void __fastcall ChangeExpandedCount(int Value);
	void __fastcall CloseNode();
	void __fastcall Clear();
	void __fastcall Error(const System::UnicodeString ErrorString);
	int __fastcall GetExpandedNodeCount();
	System::UnicodeString __fastcall GetFullPath();
	int __fastcall GetIndex();
	int __fastcall GetLastIndex();
	unsigned __fastcall GetLevel();
	System::Classes::TList* __fastcall GetList();
	unsigned __fastcall GetMaxDisplayWidth(unsigned Value);
	TOutlineNode* __fastcall GetNode(int Index);
	int __fastcall GetTopItem();
	TOutlineNode* __fastcall GetVisibleParent();
	bool __fastcall HasChildren();
	bool __fastcall HasVisibleParent();
	bool __fastcall IsEqual(TOutlineNode* Value);
	void __fastcall ReIndex(TOutlineNode* StartNode, TOutlineNode* EndNode, int NewIndex, bool IncludeStart);
	void __fastcall Repaint();
	bool __fastcall Resync(int &NewIndex, TOutlineNode* EndNode);
	void __fastcall SetExpandedState(bool Value);
	void __fastcall SetGoodIndex();
	void __fastcall SetHorzScrollBar();
	void __fastcall SetLevel(unsigned Level);
	void __fastcall SetText(const System::UnicodeString Value);
	
protected:
	TOutlineNode* __fastcall GetVisibleNode(int TargetCount);
	int __fastcall AddNode(TOutlineNode* Value);
	int __fastcall InsertNode(int Index, TOutlineNode* Value);
	TOutlineNode* __fastcall GetNodeAtIndex(int TargetIndex);
	int __fastcall GetDataItem(void * Value);
	int __fastcall GetTextItem(const System::UnicodeString Value);
	bool __fastcall HasAsParent(TOutlineNode* Value);
	bool __fastcall GetRowOfNode(TOutlineNode* TargetNode, int &RowCount);
	void __fastcall InternalRemove(TOutlineNode* Value, int Index);
	void __fastcall Remove(TOutlineNode* Value);
	void __fastcall WriteNode _DEPRECATED_ATTRIBUTE0 (System::WideChar * Buffer, System::Classes::TStream* Stream)/* overload */;
	void __fastcall WriteNode(System::Classes::TStream* Stream, System::Sysutils::TEncoding* Encoding)/* overload */;
	__property TCustomOutline* Outline = {read=FOutline};
	__property System::Classes::TList* List = {read=GetList};
	__property int ExpandCount = {read=FExpandCount, nodefault};
	__property TOutlineNode* Items[int Index] = {read=GetNode/*, default*/};
	
public:
	__fastcall TOutlineNode(TCustomOutline* AOwner);
	__fastcall virtual ~TOutlineNode();
	void __fastcall ChangeLevelBy(TChangeRange Value);
	void __fastcall Collapse();
	void __fastcall Expand();
	void __fastcall FullExpand();
	int __fastcall GetDisplayWidth();
	int __fastcall getFirstChild();
	int __fastcall GetLastChild();
	int __fastcall GetNextChild(int Value);
	int __fastcall GetPrevChild(int Value);
	void __fastcall MoveTo(int Destination, TAttachMode AttachMode);
	__property TOutlineNode* Parent = {read=FParent};
	__property bool Expanded = {read=FState, write=SetExpandedState, nodefault};
	__property System::UnicodeString Text = {read=FText, write=SetText};
	__property void * Data = {read=FData, write=FData};
	__property int Index = {read=GetIndex, nodefault};
	__property unsigned Level = {read=GetLevel, write=SetLevel, nodefault};
	__property bool HasItems = {read=HasChildren, nodefault};
	__property bool IsVisible = {read=HasVisibleParent, nodefault};
	__property int TopItem = {read=GetTopItem, nodefault};
	__property System::UnicodeString FullPath = {read=GetFullPath};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef System::Int8 TBitmapArrayRange;

typedef void __fastcall (__closure *EOutlineChange)(System::TObject* Sender, int Index);

enum DECLSPEC_DENUM TOutlineStyle : unsigned char { osText, osPlusMinusText, osPictureText, osPlusMinusPictureText, osTreeText, osTreePictureText };

enum DECLSPEC_DENUM TOutlineBitmap : unsigned char { obPlus, obMinus, obOpen, obClose, obLeaf };

typedef System::Set<TOutlineBitmap, TOutlineBitmap::obPlus, TOutlineBitmap::obLeaf> TOutlineBitmaps;

typedef System::StaticArray<Vcl::Graphics::TBitmap*, 5> TBitmapArray;

enum DECLSPEC_DENUM TOutlineType : unsigned char { otStandard, otOwnerDraw };

enum DECLSPEC_DENUM TOutlineOption : unsigned char { ooDrawTreeRoot, ooDrawFocusRect, ooStretchBitmaps };

typedef System::Set<TOutlineOption, TOutlineOption::ooDrawTreeRoot, TOutlineOption::ooStretchBitmaps> TOutlineOptions;

class PASCALIMPLEMENTATION TCustomOutline : public Vcl::Grids::TCustomGrid
{
	typedef Vcl::Grids::TCustomGrid inherited;
	
public:
	TOutlineNode* operator[](int Index) { return this->Items[Index]; }
	
private:
	bool FBlockInsert;
	TOutlineNode* FRootNode;
	TOutlineNode* FGoodNode;
	int UpdateCount;
	TOutlineNode* FCurItem;
	System::UnicodeString FSeparator;
	int FFontSize;
	System::Classes::TStrings* FStrings;
	TOutlineBitmaps FUserBitmaps;
	TOutlineBitmaps FOldBitmaps;
	TBitmapArray FPictures;
	EOutlineChange FOnExpand;
	EOutlineChange FOnCollapse;
	TOutlineStyle FOutlineStyle;
	int FItemHeight;
	TOutlineType FStyle;
	TOutlineOptions FOptions;
	bool FIgnoreScrollResize;
	TOutlineNode* FSelectedItem;
	Vcl::Stdctrls::TDrawItemEvent FOnDrawItem;
	bool FSettingWidth;
	bool FSettingHeight;
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	int __fastcall GetItemCount();
	int __fastcall AttachNode(int Index, System::UnicodeString Str, void * Ptr, TAttachMode AttachMode);
	TOutlineNode* __fastcall Get(int Index);
	int __fastcall GetSelectedItem();
	void __fastcall SetSelectedItem(int Value);
	TOutlineNodeCompare __fastcall CompareNodes(TOutlineNode* Value1, TOutlineNode* Value2);
	void __fastcall Error(const System::UnicodeString ErrorString);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	bool __fastcall ResizeGrid();
	void __fastcall DoExpand(TOutlineNode* Node);
	void __fastcall Init();
	void __fastcall MoveNode(int Destination, int Source, TAttachMode AttachMode);
	void __fastcall ClearBitmap(Vcl::Graphics::TBitmap* &Bitmap, TOutlineBitmap Kind);
	void __fastcall ChangeBitmap(Vcl::Graphics::TBitmap* Value, TOutlineBitmap Kind);
	void __fastcall SetRowHeight();
	void __fastcall SetCurItem(int Value);
	void __fastcall CreateGlyph();
	void __fastcall SetStrings(System::Classes::TStrings* Value);
	System::Classes::TStrings* __fastcall GetStrings();
	bool __fastcall IsCurItem(int Value);
	void __fastcall SetPicture(int Index, Vcl::Graphics::TBitmap* Value);
	Vcl::Graphics::TBitmap* __fastcall GetPicture(int Index);
	void __fastcall DrawPictures(Vcl::Graphics::TBitmap* *BitMaps, const int BitMaps_High, const System::Types::TRect &ARect);
	void __fastcall DrawText(TOutlineNode* Node, const System::Types::TRect &Rect);
	void __fastcall SetOutlineStyle(TOutlineStyle Value);
	void __fastcall DrawTree(const System::Types::TRect &ARect, TOutlineNode* Node);
	void __fastcall SetItemHeight(int Value);
	void __fastcall SetStyle(TOutlineType Value);
	void __fastcall SetOutlineOptions(TOutlineOptions Value);
	bool __fastcall StoreBitmap(int Index);
	void __fastcall ReadBinaryData(System::Classes::TStream* Stream);
	void __fastcall WriteBinaryData(System::Classes::TStream* Stream);
	void __fastcall SetHorzScrollBar();
	void __fastcall ResetSelectedItem();
	void __fastcall SetRowFromNode(TOutlineNode* Node);
	
protected:
	virtual void __fastcall Loaded();
	DYNAMIC void __fastcall Click();
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	TOutlineNode* __fastcall SetGoodIndex(TOutlineNode* Value);
	virtual void __fastcall DrawCell(int ACol, int ARow, const System::Types::TRect &ARect, Vcl::Grids::TGridDrawState AState);
	DYNAMIC void __fastcall DblClick();
	void __fastcall SetLevel(TOutlineNode* Node, unsigned CurLevel, unsigned NewLevel);
	bool __fastcall BadIndex(TOutlineNode* Value);
	void __fastcall DeleteNode(TOutlineNode* Node, int CurIndex);
	DYNAMIC void __fastcall Expand(int Index);
	DYNAMIC void __fastcall Collapse(int Index);
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	HIDESBASE void __fastcall InvalidateCell(int ACol, int ARow);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall Move(int Destination, int Source, TAttachMode AttachMode);
	void __fastcall SetDisplayWidth(int Value);
	__property System::Classes::TStrings* Lines = {read=GetStrings, write=SetStrings};
	__property TOutlineStyle OutlineStyle = {read=FOutlineStyle, write=SetOutlineStyle, default=5};
	__property EOutlineChange OnExpand = {read=FOnExpand, write=FOnExpand};
	__property EOutlineChange OnCollapse = {read=FOnCollapse, write=FOnCollapse};
	__property TOutlineOptions Options = {read=FOptions, write=SetOutlineOptions, default=3};
	__property TOutlineType Style = {read=FStyle, write=SetStyle, default=0};
	__property int ItemHeight = {read=FItemHeight, write=SetItemHeight, nodefault};
	__property Vcl::Stdctrls::TDrawItemEvent OnDrawItem = {read=FOnDrawItem, write=FOnDrawItem};
	__property System::UnicodeString ItemSeparator = {read=FSeparator, write=FSeparator};
	__property Vcl::Graphics::TBitmap* PicturePlus = {read=GetPicture, write=SetPicture, stored=StoreBitmap, index=0};
	__property Vcl::Graphics::TBitmap* PictureMinus = {read=GetPicture, write=SetPicture, stored=StoreBitmap, index=1};
	__property Vcl::Graphics::TBitmap* PictureOpen = {read=GetPicture, write=SetPicture, stored=StoreBitmap, index=2};
	__property Vcl::Graphics::TBitmap* PictureClosed = {read=GetPicture, write=SetPicture, stored=StoreBitmap, index=3};
	__property Vcl::Graphics::TBitmap* PictureLeaf = {read=GetPicture, write=SetPicture, stored=StoreBitmap, index=4};
	
public:
	__fastcall virtual TCustomOutline(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomOutline();
	int __fastcall Add(int Index, const System::UnicodeString Text);
	int __fastcall AddChild(int Index, const System::UnicodeString Text);
	int __fastcall AddChildObject(int Index, const System::UnicodeString Text, const void * Data);
	int __fastcall AddObject(int Index, const System::UnicodeString Text, const void * Data);
	HIDESBASE int __fastcall Insert(int Index, const System::UnicodeString Text);
	int __fastcall InsertObject(int Index, const System::UnicodeString Text, const void * Data);
	void __fastcall Delete(int Index);
	int __fastcall GetDataItem(void * Value);
	int __fastcall GetItem(int X, int Y);
	int __fastcall GetNodeDisplayWidth(TOutlineNode* Node);
	int __fastcall GetTextItem(const System::UnicodeString Value);
	TOutlineNode* __fastcall GetVisibleNode(int Index);
	void __fastcall FullExpand();
	void __fastcall FullCollapse();
	void __fastcall LoadFromFile(const System::UnicodeString FileName)/* overload */;
	void __fastcall LoadFromFile(const System::UnicodeString FileName, System::Sysutils::TEncoding* Encoding)/* overload */;
	void __fastcall LoadFromStream(System::Classes::TStream* Stream)/* overload */;
	void __fastcall LoadFromStream(System::Classes::TStream* Stream, System::Sysutils::TEncoding* Encoding)/* overload */;
	void __fastcall SaveToFile(const System::UnicodeString FileName)/* overload */;
	void __fastcall SaveToFile(const System::UnicodeString FileName, System::Sysutils::TEncoding* Encoding)/* overload */;
	void __fastcall SaveToStream(System::Classes::TStream* Stream)/* overload */;
	void __fastcall SaveToStream(System::Classes::TStream* Stream, System::Sysutils::TEncoding* Encoding)/* overload */;
	HIDESBASE void __fastcall BeginUpdate();
	HIDESBASE void __fastcall EndUpdate();
	void __fastcall SetUpdateState(bool Value);
	void __fastcall Clear();
	__property int ItemCount = {read=GetItemCount, nodefault};
	__property TOutlineNode* Items[int Index] = {read=Get/*, default*/};
	__property int SelectedItem = {read=GetSelectedItem, write=SetSelectedItem, nodefault};
	__property Row;
	__property Canvas;
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomOutline(HWND ParentWindow) : Vcl::Grids::TCustomGrid(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TOutline : public TCustomOutline
{
	typedef TCustomOutline inherited;
	
__published:
	__property Lines;
	__property OutlineStyle = {default=5};
	__property OnExpand;
	__property OnCollapse;
	__property Options = {default=3};
	__property Style = {default=0};
	__property ItemHeight;
	__property OnDrawItem;
	__property Align = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property Color = {default=-16777211};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property Ctl3D;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Visible = {default=1};
	__property StyleElements = {default=7};
	__property OnClick;
	__property DoubleBuffered;
	__property DragMode = {default=0};
	__property DragKind = {default=0};
	__property DragCursor = {default=-12};
	__property ParentDoubleBuffered = {default=1};
	__property Touch;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnStartDock;
	__property OnStartDrag;
	__property OnEnter;
	__property OnExit;
	__property OnGesture;
	__property OnMouseActivate;
	__property OnMouseDown;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnDblClick;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property BorderStyle = {default=1};
	__property ItemSeparator = {default=0};
	__property PicturePlus;
	__property PictureMinus;
	__property PictureOpen;
	__property PictureClosed;
	__property PictureLeaf;
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property ShowHint;
	__property PopupMenu;
	__property ScrollBars = {default=3};
	__property OnContextPopup;
public:
	/* TCustomOutline.Create */ inline __fastcall virtual TOutline(System::Classes::TComponent* AOwner) : TCustomOutline(AOwner) { }
	/* TCustomOutline.Destroy */ inline __fastcall virtual ~TOutline() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TOutline(HWND ParentWindow) : TCustomOutline(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Outline */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_OUTLINE)
using namespace Vcl::Outline;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_OutlineHPP
