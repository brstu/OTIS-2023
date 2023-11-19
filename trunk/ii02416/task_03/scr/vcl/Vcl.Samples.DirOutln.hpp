// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.Samples.DirOutln.pas' rev: 35.00 (Windows)

#ifndef Vcl_Samples_DiroutlnHPP
#define Vcl_Samples_DiroutlnHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Outline.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Menus.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Samples
{
namespace Diroutln
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TDirectoryOutline;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TTextCase : unsigned char { tcLowerCase, tcUpperCase, tcAsIs };

typedef System::UnicodeString __fastcall (*TCaseFunction)(const System::UnicodeString AString);

class PASCALIMPLEMENTATION TDirectoryOutline : public Vcl::Outline::TCustomOutline
{
	typedef Vcl::Outline::TCustomOutline inherited;
	
private:
	System::WideChar FDrive;
	System::Sysutils::TFileName FDirectory;
	System::Classes::TNotifyEvent FOnChange;
	TTextCase FTextCase;
	TCaseFunction FCaseFunction;
	
protected:
	void __fastcall SetDrive(System::WideChar NewDrive);
	void __fastcall SetDirectory(const System::Sysutils::TFileName NewDirectory);
	void __fastcall SetTextCase(TTextCase NewTextCase);
	void __fastcall AssignCaseProc();
	virtual void __fastcall BuildOneLevel(int RootItem);
	virtual void __fastcall BuildTree();
	virtual void __fastcall BuildSubTree(int RootItem);
	virtual void __fastcall Change();
	DYNAMIC void __fastcall Click();
	virtual void __fastcall CreateWnd();
	DYNAMIC void __fastcall Expand(int Index);
	int __fastcall FindIndex(Vcl::Outline::TOutlineNode* RootNode, System::Sysutils::TFileName SearchName);
	virtual void __fastcall Loaded();
	void __fastcall WalkTree(const System::UnicodeString Dest);
	
public:
	__fastcall virtual TDirectoryOutline(System::Classes::TComponent* AOwner);
	System::UnicodeString __fastcall ForceCase(const System::UnicodeString AString);
	__property System::WideChar Drive = {read=FDrive, write=SetDrive, nodefault};
	__property System::Sysutils::TFileName Directory = {read=FDirectory, write=SetDirectory};
	__property Lines = {stored=false};
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property BorderStyle = {default=1};
	__property Color = {default=-16777211};
	__property Constraints;
	__property Ctl3D;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property ItemHeight;
	__property Options = {default=6};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PictureClosed;
	__property PictureLeaf;
	__property PictureOpen;
	__property PopupMenu;
	__property ScrollBars = {default=3};
	__property Style = {default=0};
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property TTextCase TextCase = {read=FTextCase, write=SetTextCase, default=0};
	__property Visible = {default=1};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property OnClick;
	__property OnCollapse;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnDrawItem;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnExpand;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TCustomOutline.Destroy */ inline __fastcall virtual ~TDirectoryOutline() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TDirectoryOutline(HWND ParentWindow) : Vcl::Outline::TCustomOutline(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE bool __fastcall SameLetter(System::WideChar Letter1, System::WideChar Letter2);
}	/* namespace Diroutln */
}	/* namespace Samples */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_SAMPLES_DIROUTLN)
using namespace Vcl::Samples::Diroutln;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_SAMPLES)
using namespace Vcl::Samples;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_Samples_DiroutlnHPP
