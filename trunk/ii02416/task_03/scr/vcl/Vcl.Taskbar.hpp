// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.Taskbar.pas' rev: 35.00 (Windows)

#ifndef Vcl_TaskbarHPP
#define Vcl_TaskbarHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Winapi.Windows.hpp>
#include <System.Win.TaskbarCore.hpp>
#include <System.Win.Taskbar.hpp>
#include <Vcl.Graphics.hpp>
#include <Winapi.Messages.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Taskbar
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TThumbBarButton;
class DELPHICLASS TThumbBarButtonList;
class DELPHICLASS TCustomTaskbar;
class DELPHICLASS TTaskbar;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TThumbBarButton : public System::Win::Taskbarcore::TThumbBarButtonBase
{
	typedef System::Win::Taskbarcore::TThumbBarButtonBase inherited;
	
private:
	Vcl::Graphics::TIcon* FIcon;
	void __fastcall SetIcon(Vcl::Graphics::TIcon* const Value);
	
protected:
	DYNAMIC void __fastcall OnActionChange(System::TObject* Sender);
	DYNAMIC void __fastcall SetActionImageIndex(int Value);
	
public:
	__fastcall virtual TThumbBarButton(System::Classes::TCollection* Collection);
	__fastcall virtual ~TThumbBarButton();
	virtual HICON __fastcall GetHIcon();
	
__published:
	__property Action;
	__property ButtonState = {default=1};
	__property Hint = {default=0};
	__property Vcl::Graphics::TIcon* Icon = {read=FIcon, write=SetIcon};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TThumbBarButtonList : public System::Win::Taskbarcore::TThumbBarButtonListBase
{
	typedef System::Win::Taskbarcore::TThumbBarButtonListBase inherited;
	
public:
	TThumbBarButton* operator[](int Index) { return this->Items[Index]; }
	
private:
	HIDESBASE TThumbBarButton* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TThumbBarButton* const Value);
	
public:
	__fastcall TThumbBarButtonList(System::Classes::TPersistent* const AOwner, System::Classes::TCollectionItem* const AOwnerItem);
	HIDESBASE TThumbBarButton* __fastcall Add();
	__property TThumbBarButton* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TThumbBarButtonList() { }
	
};


typedef void __fastcall (__closure *TThumbPreviewItemRequestEvent)(System::TObject* Sender, int APreviewHeight, int APreviewWidth, Vcl::Graphics::TBitmap* PreviewBitmap);

typedef void __fastcall (__closure *TWindowPreviewItemRequestEvent)(System::TObject* Sender, System::Types::TPoint &Position, Vcl::Graphics::TBitmap* PreviewBitmap);

typedef void __fastcall (__closure *TThumbButtonNotifyEvent)(System::TObject* Sender, int AButtonID);

class PASCALIMPLEMENTATION TCustomTaskbar : public System::Win::Taskbarcore::TTaskbarBase
{
	typedef System::Win::Taskbarcore::TTaskbarBase inherited;
	
private:
	Vcl::Forms::TForm* FProxyWnd;
	TThumbBarButtonList* FTaskbarButtons;
	Vcl::Graphics::TIcon* FOverlayIcon;
	TThumbPreviewItemRequestEvent FOnThumbPreviewRequest;
	TWindowPreviewItemRequestEvent FOnWindowPreviewItemRequest;
	Vcl::Graphics::TBitmap* FTmpPreviewBitmap;
	TThumbButtonNotifyEvent FOnThumbButtonClick;
	System::Classes::TWndMethod FOldProxyWndProc;
	void __fastcall SetOverlayIcon(Vcl::Graphics::TIcon* const Value);
	void __fastcall SetTaskbarButtons(TThumbBarButtonList* const Value);
	void __fastcall UpdateButtons();
	void __fastcall GenerateFormImage(int APreviewHeight = 0x0, int APreviewWidth = 0x0);
	void __fastcall ProxyFormWndProc(Winapi::Messages::TMessage &message);
	void __fastcall DoButtonChange(System::TObject* Sender);
	
protected:
	virtual HWND __fastcall GetFormHandle();
	
public:
	__fastcall virtual TCustomTaskbar(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomTaskbar();
	virtual void __fastcall Initialize();
	virtual void __fastcall DoThumbButtonNotify(System::Word ItemID);
	virtual void __fastcall DoThumbPreviewRequest(System::Word APreviewHeight, System::Word APreviewWidth);
	virtual void __fastcall DoWindowPreviewRequest();
	virtual void __fastcall UnregisterTab();
	virtual void __fastcall ApplyButtonsChanges();
	virtual HWND __fastcall GetMainWindowHwnd();
	virtual HICON __fastcall GetOverlayHIcon();
	virtual bool __fastcall ActivateTab();
	__property TThumbBarButtonList* TaskBarButtons = {read=FTaskbarButtons, write=SetTaskbarButtons};
	__property Vcl::Graphics::TIcon* OverlayIcon = {read=FOverlayIcon, write=SetOverlayIcon};
	__property TThumbPreviewItemRequestEvent OnThumbPreviewRequest = {read=FOnThumbPreviewRequest, write=FOnThumbPreviewRequest};
	__property TWindowPreviewItemRequestEvent OnWindowPreviewItemRequest = {read=FOnWindowPreviewItemRequest, write=FOnWindowPreviewItemRequest};
	__property TThumbButtonNotifyEvent OnThumbButtonClick = {read=FOnThumbButtonClick, write=FOnThumbButtonClick};
};


class PASCALIMPLEMENTATION TTaskbar : public TCustomTaskbar
{
	typedef TCustomTaskbar inherited;
	
__published:
	__property TaskBarButtons;
	__property ProgressState = {default=0};
	__property ProgressMaxValue = {default=0};
	__property ProgressValue = {default=0};
	__property OverlayIcon;
	__property OverlayHint = {default=0};
	__property PreviewClipRegion;
	__property TabProperties;
	__property ToolTip = {default=0};
	__property OnThumbPreviewRequest;
	__property OnWindowPreviewItemRequest;
	__property OnThumbButtonClick;
public:
	/* TCustomTaskbar.Create */ inline __fastcall virtual TTaskbar(System::Classes::TComponent* AOwner) : TCustomTaskbar(AOwner) { }
	/* TCustomTaskbar.Destroy */ inline __fastcall virtual ~TTaskbar() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Taskbar */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_TASKBAR)
using namespace Vcl::Taskbar;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_TaskbarHPP
