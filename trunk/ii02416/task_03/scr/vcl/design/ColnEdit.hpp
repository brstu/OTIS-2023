// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ColnEdit.pas' rev: 35.00 (Windows)

#ifndef ColneditHPP
#define ColneditHPP

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
#include <System.Actions.hpp>
#include <System.Types.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.ToolWin.hpp>
#include <Vcl.ActnPopup.hpp>
#include <Vcl.PlatformDefaultStyleActnCtrls.hpp>
#include <DesignIntf.hpp>
#include <DesignWindows.hpp>
#include <ToolWnds.hpp>
#include <DesignEditors.hpp>
#include <System.ImageList.hpp>
#include <Vcl.VirtualImageList.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Colnedit
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TCollectionEditor;
class DELPHICLASS TCollectionProperty;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TColOption : unsigned char { coAdd, coDelete, coMove };

typedef System::Set<TColOption, TColOption::coAdd, TColOption::coMove> TColOptions;

class PASCALIMPLEMENTATION TCollectionEditor : public Toolwnds::TToolbarDesignWindow
{
	typedef Toolwnds::TToolbarDesignWindow inherited;
	
__published:
	Vcl::Extctrls::TPanel* Panel3;
	Vcl::Comctrls::TListView* ListView1;
	Vcl::Virtualimagelist::TVirtualImageList* ImageList1;
	Vcl::Comctrls::TToolButton* ToolButton1;
	Vcl::Comctrls::TToolButton* ToolButton2;
	Vcl::Comctrls::TToolButton* ToolButton3;
	Vcl::Comctrls::TToolButton* ToolButton4;
	Vcl::Comctrls::TToolButton* ToolButton5;
	Vcl::Actnlist::TAction* AddCmd;
	Vcl::Actnlist::TAction* DeleteCmd;
	Vcl::Actnlist::TAction* MoveUpCmd;
	Vcl::Actnlist::TAction* MoveDownCmd;
	Vcl::Actnlist::TAction* SelectAllCmd;
	Vcl::Menus::TMenuItem* N2;
	void __fastcall AddClick(System::TObject* Sender);
	void __fastcall DeleteClick(System::TObject* Sender);
	void __fastcall ListView1Click(System::TObject* Sender);
	void __fastcall FormKeyPress(System::TObject* Sender, System::WideChar &Key);
	void __fastcall FormKeyDown(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall FormClose(System::TObject* Sender, System::Uitypes::TCloseAction &Action);
	void __fastcall MoveUpClick(System::TObject* Sender);
	void __fastcall ListView1DragOver(System::TObject* Sender, System::TObject* Source, int X, int Y, System::Uitypes::TDragState State, bool &Accept);
	void __fastcall ListView1DragDrop(System::TObject* Sender, System::TObject* Source, int X, int Y);
	void __fastcall MoveDownClick(System::TObject* Sender);
	HIDESBASE void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall FormDestroy(System::TObject* Sender);
	void __fastcall FormResize(System::TObject* Sender);
	void __fastcall ListView1Change(System::TObject* Sender, Vcl::Comctrls::TListItem* Item, Vcl::Comctrls::TItemChange Change);
	void __fastcall SelectAll1Click(System::TObject* Sender);
	void __fastcall SelectAllCommandUpdate(System::TObject* Sender);
	void __fastcall SelectionUpdate(System::TObject* Sender);
	void __fastcall ListView1KeyPress(System::TObject* Sender, System::WideChar &Key);
	void __fastcall ListView1KeyDown(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall FormShow(System::TObject* Sender);
	HIDESBASE void __fastcall FormAfterMonitorDpiChanged(System::TObject* Sender, int OldDPI, int NewDPI);
	void __fastcall FormBeforeMonitorDpiChanged(System::TObject* Sender, int OldDPI, int NewDPI);
	
private:
	Vcl::Comctrls::TWidth FListViewWidth;
	bool FClosing;
	System::UnicodeString FCollectionPropertyName;
	int FStateLock;
	System::Classes::TList* FItemIDList;
	System::UnicodeString FCollectionClassName;
	bool FSelectionError;
	TColOptions FColOptions;
	System::UnicodeString __fastcall GetRegKey();
	void __fastcall SetCollectionPropertyName(const System::UnicodeString Value);
	MESSAGE void __fastcall AMDeferUpdate(void *Msg);
	void __fastcall SetColOptions(TColOptions Value);
	void __fastcall CloseEditor();
	
protected:
	DYNAMIC void __fastcall Activated();
	virtual bool __fastcall CanAdd(int Index);
	void __fastcall LockState();
	void __fastcall UnlockState();
	__property int StateLock = {read=FStateLock, nodefault};
	void __fastcall SelectAll(bool DoUpdate = true);
	void __fastcall SelectNone(bool DoUpdate = true);
	
public:
	System::Classes::TCollection* Collection;
	System::Classes::TComponent* Component;
	__property TColOptions Options = {read=FColOptions, write=SetColOptions, nodefault};
	virtual void __fastcall ItemDeleted(const Designintf::_di_IDesigner ADesigner, System::Classes::TPersistent* AItem);
	virtual void __fastcall DesignerClosed(const Designintf::_di_IDesigner ADesigner, bool AGoingDormant);
	virtual void __fastcall ItemsModified(const Designintf::_di_IDesigner ADesigner);
	System::UnicodeString __fastcall GetItemName(int Index, int ItemIndex);
	void __fastcall GetSelection();
	virtual void __fastcall SelectionChanged(const Designintf::_di_IDesigner ADesigner, const Designintf::_di_IDesignerSelections ASelection);
	HIDESBASE void __fastcall SetSelection();
	void __fastcall UpdateListbox();
	__property System::UnicodeString CollectionPropertyName = {read=FCollectionPropertyName, write=SetCollectionPropertyName};
public:
	/* TDesignWindow.Create */ inline __fastcall virtual TCollectionEditor(System::Classes::TComponent* AOwner) : Toolwnds::TToolbarDesignWindow(AOwner) { }
	/* TDesignWindow.Destroy */ inline __fastcall virtual ~TCollectionEditor() { }
	
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TCollectionEditor(System::Classes::TComponent* AOwner, int Dummy) : Toolwnds::TToolbarDesignWindow(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TCollectionEditor(HWND ParentWindow) : Toolwnds::TToolbarDesignWindow(ParentWindow) { }
	
};


typedef System::TMetaClass* TCollectionEditorClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCollectionProperty : public Designeditors::TClassProperty
{
	typedef Designeditors::TClassProperty inherited;
	
public:
	virtual void __fastcall Edit();
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes();
	virtual TCollectionEditorClass __fastcall GetEditorClass();
	virtual TColOptions __fastcall GetColOptions();
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TCollectionProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TClassProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TCollectionProperty() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const System::Word AM_DeferUpdate = System::Word(0x464);
extern DELPHI_PACKAGE TCollectionEditor* __fastcall ShowCollectionEditorClass(Designintf::_di_IDesigner ADesigner, TCollectionEditorClass CollectionEditorClass, System::Classes::TComponent* AComponent, System::Classes::TCollection* ACollection, const System::UnicodeString PropertyName, TColOptions ColOptions = (TColOptions() << TColOption::coAdd << TColOption::coDelete << TColOption::coMove ));
extern DELPHI_PACKAGE void __fastcall ShowCollectionEditor(Designintf::_di_IDesigner ADesigner, System::Classes::TComponent* AComponent, System::Classes::TCollection* ACollection, const System::UnicodeString PropertyName);
}	/* namespace Colnedit */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_COLNEDIT)
using namespace Colnedit;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// ColneditHPP
