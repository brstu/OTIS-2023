// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.TabNotBk.pas' rev: 35.00 (Windows)

#ifndef Vcl_TabnotbkHPP
#define Vcl_TabnotbkHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Winapi.Messages.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.ComCtrls.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Menus.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Tabnotbk
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TTabPage;
class DELPHICLASS TTabbedNotebook;
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TPageChangeEvent)(System::TObject* Sender, int NewTab, bool &AllowChange);

class PASCALIMPLEMENTATION TTabPage : public Vcl::Controls::TWinControl
{
	typedef Vcl::Controls::TWinControl inherited;
	
protected:
	virtual void __fastcall ReadState(System::Classes::TReader* Reader);
	
public:
	__fastcall virtual TTabPage(System::Classes::TComponent* AOwner);
	
__published:
	__property Caption = {default=0};
	__property Height = {stored=false};
	__property TabOrder = {stored=false, default=-1};
	__property Touch;
	__property Visible = {stored=false, default=1};
	__property Width = {stored=false};
	__property Enabled = {stored=false, default=1};
	__property OnGesture;
public:
	/* TWinControl.CreateParented */ inline __fastcall TTabPage(HWND ParentWindow) : Vcl::Controls::TWinControl(ParentWindow) { }
	/* TWinControl.Destroy */ inline __fastcall virtual ~TTabPage() { }
	
};


class PASCALIMPLEMENTATION TTabbedNotebook : public Vcl::Comctrls::TCustomTabControl
{
	typedef Vcl::Comctrls::TCustomTabControl inherited;
	
private:
	System::Classes::TList* FPageList;
	System::Classes::TStrings* FAccess;
	int FPageIndex;
	Vcl::Graphics::TFont* FTabFont;
	int FTabsPerRow;
	System::Classes::TNotifyEvent FOnClick;
	TPageChangeEvent FOnChange;
	System::UnicodeString __fastcall GetActivePage();
	void __fastcall SetPages(System::Classes::TStrings* Value);
	void __fastcall SetActivePage(const System::UnicodeString Value);
	void __fastcall SetTabFont(Vcl::Graphics::TFont* Value);
	void __fastcall SetTabsPerRow(int NewTabCount);
	MESSAGE void __fastcall WMGetDlgCode(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall CMDialogChar(Winapi::Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Message);
	
protected:
	virtual void __fastcall AlignControls(Vcl::Controls::TControl* AControl, System::Types::TRect &Rect);
	DYNAMIC void __fastcall Change();
	DYNAMIC void __fastcall ChangeScale(int M, int D)/* overload */;
	DYNAMIC void __fastcall Click();
	virtual void __fastcall CreateHandle();
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	DYNAMIC System::Classes::TComponent* __fastcall GetChildOwner();
	virtual void __fastcall Loaded();
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall ReadState(System::Classes::TReader* Reader);
	void __fastcall SetPageIndex(int Value);
	virtual void __fastcall ShowControl(Vcl::Controls::TControl* AControl);
	__property Tabs;
	
public:
	MESSAGE void __fastcall CMTabFontChanged(Winapi::Messages::TMessage &Message);
	__fastcall virtual TTabbedNotebook(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TTabbedNotebook();
	DYNAMIC void __fastcall GetChildren(System::Classes::TGetChildProc Proc, System::Classes::TComponent* Root);
	int __fastcall GetIndexForPage(const System::UnicodeString PageName);
	__property Vcl::Graphics::TFont* TopFont = {read=FTabFont};
	void __fastcall TabFontChanged(System::TObject* Sender);
	
__published:
	__property System::UnicodeString ActivePage = {read=GetActivePage, write=SetActivePage, stored=false};
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property Constraints;
	__property DoubleBuffered;
	__property Enabled = {default=1};
	__property int PageIndex = {read=FPageIndex, write=SetPageIndex, default=0};
	__property System::Classes::TStrings* Pages = {read=FAccess, write=SetPages, stored=false};
	__property Font;
	__property int TabsPerRow = {read=FTabsPerRow, write=SetTabsPerRow, default=3};
	__property Vcl::Graphics::TFont* TabFont = {read=FTabFont, write=SetTabFont};
	__property Touch;
	__property ParentDoubleBuffered = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Visible = {default=1};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property System::Classes::TNotifyEvent OnClick = {read=FOnClick, write=FOnClick};
	__property TPageChangeEvent OnChange = {read=FOnChange, write=FOnChange};
	__property OnContextPopup;
	__property OnEnter;
	__property OnExit;
	__property OnGesture;
public:
	/* TWinControl.CreateParented */ inline __fastcall TTabbedNotebook(HWND ParentWindow) : Vcl::Comctrls::TCustomTabControl(ParentWindow) { }
	
	/* Hoisted overloads: */
	
protected:
	DYNAMIC inline void __fastcall  ChangeScale(int M, int D, bool isDpiChange){ Vcl::Comctrls::TCustomTabControl::ChangeScale(M, D, isDpiChange); }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Word CM_TABFONTCHANGED = System::Word(0xb064);
}	/* namespace Tabnotbk */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_TABNOTBK)
using namespace Vcl::Tabnotbk;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_TabnotbkHPP
