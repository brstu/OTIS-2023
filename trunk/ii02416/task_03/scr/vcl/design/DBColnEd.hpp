// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBColnEd.pas' rev: 35.00 (Windows)

#ifndef DbcolnedHPP
#define DbcolnedHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Dialogs.hpp>
#include <ColnEdit.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Data.DB.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.ToolWin.hpp>
#include <Vcl.PlatformDefaultStyleActnCtrls.hpp>
#include <Vcl.ActnPopup.hpp>
#include <System.Actions.hpp>
#include <System.ImageList.hpp>
#include <Vcl.VirtualImageList.hpp>
#include <ToolWnds.hpp>
#include <DesignWindows.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dbcolned
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TDBGridColumnsEditor;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TDBGridColumnsEditor : public Colnedit::TCollectionEditor
{
	typedef Colnedit::TCollectionEditor inherited;
	
__published:
	Vcl::Menus::TMenuItem* AddAllFields1;
	Vcl::Menus::TMenuItem* Restoredefaults1;
	Vcl::Actnlist::TAction* AddAllFieldsCmd;
	Vcl::Actnlist::TAction* RestoreDefaultsCmd;
	Vcl::Comctrls::TToolButton* ToolButton6;
	Vcl::Comctrls::TToolButton* ToolButton7;
	Vcl::Comctrls::TToolButton* ToolButton8;
	Vcl::Menus::TMenuItem* N1;
	void __fastcall AddAllFieldsClick(System::TObject* Sender);
	void __fastcall RestoreDefaultsClick(System::TObject* Sender);
	void __fastcall AddAllFieldsCmdUpdate(System::TObject* Sender);
	void __fastcall RestoreDefaultsCmdUpdate(System::TObject* Sender);
	HIDESBASE void __fastcall ListView1DragOver(System::TObject* Sender, System::TObject* Source, int X, int Y, System::Uitypes::TDragState State, bool &Accept);
	HIDESBASE void __fastcall FormAfterMonitorDpiChanged(System::TObject* Sender, int OldDPI, int NewDPI);
	HIDESBASE void __fastcall FormBeforeMonitorDpiChanged(System::TObject* Sender, int OldDPI, int NewDPI);
	HIDESBASE void __fastcall FormCreate(System::TObject* Sender);
	
private:
	Vcl::Comctrls::TWidth FListViewWidth;
	
protected:
	virtual bool __fastcall CanAdd(int Index);
	
public:
	Data::Db::TDataSource* __fastcall GetDataSource();
public:
	/* TDesignWindow.Create */ inline __fastcall virtual TDBGridColumnsEditor(System::Classes::TComponent* AOwner) : Colnedit::TCollectionEditor(AOwner) { }
	/* TDesignWindow.Destroy */ inline __fastcall virtual ~TDBGridColumnsEditor() { }
	
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TDBGridColumnsEditor(System::Classes::TComponent* AOwner, int Dummy) : Colnedit::TCollectionEditor(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TDBGridColumnsEditor(HWND ParentWindow) : Colnedit::TCollectionEditor(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Dbcolned */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DBCOLNED)
using namespace Dbcolned;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbcolnedHPP
