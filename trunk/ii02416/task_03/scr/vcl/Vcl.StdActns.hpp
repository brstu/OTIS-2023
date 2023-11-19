// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.StdActns.pas' rev: 35.00 (Windows)

#ifndef Vcl_StdactnsHPP
#define Vcl_StdactnsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.ShlObj.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Dialogs.hpp>
#include <System.Actions.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Stdactns
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS THintAction;
class DELPHICLASS TEditAction;
class DELPHICLASS TEditCut;
class DELPHICLASS TEditCopy;
class DELPHICLASS TEditPaste;
class DELPHICLASS TEditSelectAll;
class DELPHICLASS TEditUndo;
class DELPHICLASS TEditDelete;
class DELPHICLASS TWindowAction;
class DELPHICLASS TWindowClose;
class DELPHICLASS TWindowCascade;
class DELPHICLASS TWindowTileHorizontal;
class DELPHICLASS TWindowTileVertical;
class DELPHICLASS TWindowMinimizeAll;
class DELPHICLASS TWindowArrange;
class DELPHICLASS THelpAction;
class DELPHICLASS THelpContents;
class DELPHICLASS THelpTopicSearch;
class DELPHICLASS THelpOnHelp;
class DELPHICLASS THelpContextAction;
class DELPHICLASS TCommonDialogAction;
class DELPHICLASS TFileAction;
class DELPHICLASS TFileOpen;
class DELPHICLASS TFileOpenWith;
class DELPHICLASS TFileSaveAs;
class DELPHICLASS TFilePrintSetup;
class DELPHICLASS TFilePageSetup;
class DELPHICLASS TFileExit;
class DELPHICLASS TSearchAction;
class DELPHICLASS TSearchFind;
class DELPHICLASS TSearchReplace;
class DELPHICLASS TSearchFindFirst;
class DELPHICLASS TSearchFindNext;
class DELPHICLASS TFontEdit;
class DELPHICLASS TColorSelect;
class DELPHICLASS TPrintDlg;
class DELPHICLASS TBrowseForFolder;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION THintAction : public Vcl::Actnlist::TCustomAction
{
	typedef Vcl::Actnlist::TCustomAction inherited;
	
public:
	__fastcall virtual THintAction(System::Classes::TComponent* AOwner);
	
__published:
	__property Hint = {default=0};
public:
	/* TCustomAction.Destroy */ inline __fastcall virtual ~THintAction() { }
	
};


class PASCALIMPLEMENTATION TEditAction : public Vcl::Actnlist::TAction
{
	typedef Vcl::Actnlist::TAction inherited;
	
private:
	Vcl::Stdctrls::TCustomEdit* FControl;
	void __fastcall SetControl(Vcl::Stdctrls::TCustomEdit* Value);
	
protected:
	virtual Vcl::Stdctrls::TCustomEdit* __fastcall GetControl(System::TObject* Target);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	
public:
	__fastcall virtual ~TEditAction();
	virtual bool __fastcall HandlesTarget(System::TObject* Target);
	virtual void __fastcall UpdateTarget(System::TObject* Target);
	__property Vcl::Stdctrls::TCustomEdit* Control = {read=FControl, write=SetControl};
public:
	/* TAction.Create */ inline __fastcall virtual TEditAction(System::Classes::TComponent* AOwner) : Vcl::Actnlist::TAction(AOwner) { }
	
};


class PASCALIMPLEMENTATION TEditCut : public TEditAction
{
	typedef TEditAction inherited;
	
public:
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
public:
	/* TEditAction.Destroy */ inline __fastcall virtual ~TEditCut() { }
	
public:
	/* TAction.Create */ inline __fastcall virtual TEditCut(System::Classes::TComponent* AOwner) : TEditAction(AOwner) { }
	
};


class PASCALIMPLEMENTATION TEditCopy : public TEditAction
{
	typedef TEditAction inherited;
	
public:
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
public:
	/* TEditAction.Destroy */ inline __fastcall virtual ~TEditCopy() { }
	
public:
	/* TAction.Create */ inline __fastcall virtual TEditCopy(System::Classes::TComponent* AOwner) : TEditAction(AOwner) { }
	
};


class PASCALIMPLEMENTATION TEditPaste : public TEditAction
{
	typedef TEditAction inherited;
	
public:
	virtual void __fastcall UpdateTarget(System::TObject* Target);
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
public:
	/* TEditAction.Destroy */ inline __fastcall virtual ~TEditPaste() { }
	
public:
	/* TAction.Create */ inline __fastcall virtual TEditPaste(System::Classes::TComponent* AOwner) : TEditAction(AOwner) { }
	
};


class PASCALIMPLEMENTATION TEditSelectAll : public TEditAction
{
	typedef TEditAction inherited;
	
public:
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	virtual void __fastcall UpdateTarget(System::TObject* Target);
public:
	/* TEditAction.Destroy */ inline __fastcall virtual ~TEditSelectAll() { }
	
public:
	/* TAction.Create */ inline __fastcall virtual TEditSelectAll(System::Classes::TComponent* AOwner) : TEditAction(AOwner) { }
	
};


class PASCALIMPLEMENTATION TEditUndo : public TEditAction
{
	typedef TEditAction inherited;
	
public:
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	virtual void __fastcall UpdateTarget(System::TObject* Target);
public:
	/* TEditAction.Destroy */ inline __fastcall virtual ~TEditUndo() { }
	
public:
	/* TAction.Create */ inline __fastcall virtual TEditUndo(System::Classes::TComponent* AOwner) : TEditAction(AOwner) { }
	
};


class PASCALIMPLEMENTATION TEditDelete : public TEditAction
{
	typedef TEditAction inherited;
	
public:
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	virtual void __fastcall UpdateTarget(System::TObject* Target);
public:
	/* TEditAction.Destroy */ inline __fastcall virtual ~TEditDelete() { }
	
public:
	/* TAction.Create */ inline __fastcall virtual TEditDelete(System::Classes::TComponent* AOwner) : TEditAction(AOwner) { }
	
};


class PASCALIMPLEMENTATION TWindowAction : public Vcl::Actnlist::TAction
{
	typedef Vcl::Actnlist::TAction inherited;
	
private:
	Vcl::Forms::TCustomForm* FForm;
	void __fastcall SetForm(Vcl::Forms::TCustomForm* Value);
	
protected:
	virtual Vcl::Forms::TForm* __fastcall GetForm(System::TObject* Target);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	
public:
	__fastcall virtual TWindowAction(System::Classes::TComponent* AOwner);
	virtual bool __fastcall HandlesTarget(System::TObject* Target);
	virtual void __fastcall UpdateTarget(System::TObject* Target);
	__property Vcl::Forms::TCustomForm* Form = {read=FForm, write=SetForm};
public:
	/* TCustomAction.Destroy */ inline __fastcall virtual ~TWindowAction() { }
	
};


class PASCALIMPLEMENTATION TWindowClose : public TWindowAction
{
	typedef TWindowAction inherited;
	
public:
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	virtual void __fastcall UpdateTarget(System::TObject* Target);
public:
	/* TWindowAction.Create */ inline __fastcall virtual TWindowClose(System::Classes::TComponent* AOwner) : TWindowAction(AOwner) { }
	
public:
	/* TCustomAction.Destroy */ inline __fastcall virtual ~TWindowClose() { }
	
};


class PASCALIMPLEMENTATION TWindowCascade : public TWindowAction
{
	typedef TWindowAction inherited;
	
public:
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
public:
	/* TWindowAction.Create */ inline __fastcall virtual TWindowCascade(System::Classes::TComponent* AOwner) : TWindowAction(AOwner) { }
	
public:
	/* TCustomAction.Destroy */ inline __fastcall virtual ~TWindowCascade() { }
	
};


class PASCALIMPLEMENTATION TWindowTileHorizontal : public TWindowAction
{
	typedef TWindowAction inherited;
	
public:
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
public:
	/* TWindowAction.Create */ inline __fastcall virtual TWindowTileHorizontal(System::Classes::TComponent* AOwner) : TWindowAction(AOwner) { }
	
public:
	/* TCustomAction.Destroy */ inline __fastcall virtual ~TWindowTileHorizontal() { }
	
};


class PASCALIMPLEMENTATION TWindowTileVertical : public TWindowAction
{
	typedef TWindowAction inherited;
	
public:
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
public:
	/* TWindowAction.Create */ inline __fastcall virtual TWindowTileVertical(System::Classes::TComponent* AOwner) : TWindowAction(AOwner) { }
	
public:
	/* TCustomAction.Destroy */ inline __fastcall virtual ~TWindowTileVertical() { }
	
};


class PASCALIMPLEMENTATION TWindowMinimizeAll : public TWindowAction
{
	typedef TWindowAction inherited;
	
public:
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
public:
	/* TWindowAction.Create */ inline __fastcall virtual TWindowMinimizeAll(System::Classes::TComponent* AOwner) : TWindowAction(AOwner) { }
	
public:
	/* TCustomAction.Destroy */ inline __fastcall virtual ~TWindowMinimizeAll() { }
	
};


class PASCALIMPLEMENTATION TWindowArrange : public TWindowAction
{
	typedef TWindowAction inherited;
	
public:
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
public:
	/* TWindowAction.Create */ inline __fastcall virtual TWindowArrange(System::Classes::TComponent* AOwner) : TWindowAction(AOwner) { }
	
public:
	/* TCustomAction.Destroy */ inline __fastcall virtual ~TWindowArrange() { }
	
};


class PASCALIMPLEMENTATION THelpAction : public Vcl::Actnlist::TAction
{
	typedef Vcl::Actnlist::TAction inherited;
	
public:
	__fastcall virtual THelpAction(System::Classes::TComponent* AOwner);
	virtual bool __fastcall HandlesTarget(System::TObject* Target);
	virtual void __fastcall UpdateTarget(System::TObject* Target);
public:
	/* TCustomAction.Destroy */ inline __fastcall virtual ~THelpAction() { }
	
};


class PASCALIMPLEMENTATION THelpContents : public THelpAction
{
	typedef THelpAction inherited;
	
public:
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
public:
	/* THelpAction.Create */ inline __fastcall virtual THelpContents(System::Classes::TComponent* AOwner) : THelpAction(AOwner) { }
	
public:
	/* TCustomAction.Destroy */ inline __fastcall virtual ~THelpContents() { }
	
};


class PASCALIMPLEMENTATION THelpTopicSearch : public THelpAction
{
	typedef THelpAction inherited;
	
public:
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
public:
	/* THelpAction.Create */ inline __fastcall virtual THelpTopicSearch(System::Classes::TComponent* AOwner) : THelpAction(AOwner) { }
	
public:
	/* TCustomAction.Destroy */ inline __fastcall virtual ~THelpTopicSearch() { }
	
};


class PASCALIMPLEMENTATION THelpOnHelp : public THelpAction
{
	typedef THelpAction inherited;
	
public:
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
public:
	/* THelpAction.Create */ inline __fastcall virtual THelpOnHelp(System::Classes::TComponent* AOwner) : THelpAction(AOwner) { }
	
public:
	/* TCustomAction.Destroy */ inline __fastcall virtual ~THelpOnHelp() { }
	
};


class PASCALIMPLEMENTATION THelpContextAction : public THelpAction
{
	typedef THelpAction inherited;
	
public:
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	virtual void __fastcall UpdateTarget(System::TObject* Target);
public:
	/* THelpAction.Create */ inline __fastcall virtual THelpContextAction(System::Classes::TComponent* AOwner) : THelpAction(AOwner) { }
	
public:
	/* TCustomAction.Destroy */ inline __fastcall virtual ~THelpContextAction() { }
	
};


#ifndef _WIN64
typedef System::TMetaClass* TCommonDialogClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TCommonDialogClass);
#endif /* _WIN64 */

class PASCALIMPLEMENTATION TCommonDialogAction : public Vcl::Actnlist::TCustomAction
{
	typedef Vcl::Actnlist::TCustomAction inherited;
	
private:
	bool FExecuteResult;
	System::Classes::TNotifyEvent FOnAccept;
	System::Classes::TNotifyEvent FOnCancel;
	System::Classes::TNotifyEvent FBeforeExecute;
	
protected:
	Vcl::Dialogs::TCommonDialog* FDialog;
	virtual void __fastcall DoAccept();
	virtual void __fastcall DoCancel();
	virtual TCommonDialogClass __fastcall GetDialogClass();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall SetupDialog();
	
public:
	__fastcall virtual TCommonDialogAction(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCommonDialogAction();
	virtual bool __fastcall HandlesTarget(System::TObject* Target);
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	__property bool ExecuteResult = {read=FExecuteResult, nodefault};
	__property System::Classes::TNotifyEvent BeforeExecute = {read=FBeforeExecute, write=FBeforeExecute};
	__property System::Classes::TNotifyEvent OnAccept = {read=FOnAccept, write=FOnAccept};
	__property System::Classes::TNotifyEvent OnCancel = {read=FOnCancel, write=FOnCancel};
};


class PASCALIMPLEMENTATION TFileAction : public TCommonDialogAction
{
	typedef TCommonDialogAction inherited;
	
private:
	System::Sysutils::TFileName __fastcall GetFileName();
	void __fastcall SetFileName(const System::Sysutils::TFileName Value);
	
protected:
	Vcl::Dialogs::TOpenDialog* __fastcall GetDialog();
	__property System::Sysutils::TFileName FileName = {read=GetFileName, write=SetFileName};
public:
	/* TCommonDialogAction.Create */ inline __fastcall virtual TFileAction(System::Classes::TComponent* AOwner) : TCommonDialogAction(AOwner) { }
	/* TCommonDialogAction.Destroy */ inline __fastcall virtual ~TFileAction() { }
	
};


class PASCALIMPLEMENTATION TFileOpen : public TFileAction
{
	typedef TFileAction inherited;
	
private:
	bool FUseDefaultApp;
	
protected:
	virtual TCommonDialogClass __fastcall GetDialogClass();
	
public:
	__fastcall virtual TFileOpen(System::Classes::TComponent* AOwner);
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	
__published:
	__property Caption = {default=0};
	__property Vcl::Dialogs::TOpenDialog* Dialog = {read=GetDialog};
	__property Enabled = {default=1};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=0};
	__property Hint = {default=0};
	__property ImageIndex = {default=-1};
	__property ShortCut = {default=0};
	__property SecondaryShortCuts;
	__property bool UseDefaultApp = {read=FUseDefaultApp, write=FUseDefaultApp, default=0};
	__property Visible = {default=1};
	__property BeforeExecute;
	__property OnAccept;
	__property OnCancel;
	__property OnHint;
	__property OnUpdate;
public:
	/* TCommonDialogAction.Destroy */ inline __fastcall virtual ~TFileOpen() { }
	
};


class PASCALIMPLEMENTATION TFileOpenWith : public TFileOpen
{
	typedef TFileOpen inherited;
	
private:
	System::Sysutils::TFileName FFileName;
	System::Classes::TNotifyEvent FAfterOpen;
	
public:
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	
__published:
	__property System::Sysutils::TFileName FileName = {read=FFileName, write=FFileName};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=0};
	__property BeforeExecute;
	__property System::Classes::TNotifyEvent AfterOpen = {read=FAfterOpen, write=FAfterOpen};
	__property OnUpdate;
public:
	/* TFileOpen.Create */ inline __fastcall virtual TFileOpenWith(System::Classes::TComponent* AOwner) : TFileOpen(AOwner) { }
	
public:
	/* TCommonDialogAction.Destroy */ inline __fastcall virtual ~TFileOpenWith() { }
	
};


class PASCALIMPLEMENTATION TFileSaveAs : public TFileAction
{
	typedef TFileAction inherited;
	
private:
	Vcl::Dialogs::TSaveDialog* __fastcall GetSaveDialog();
	
protected:
	virtual TCommonDialogClass __fastcall GetDialogClass();
	
public:
	__fastcall virtual TFileSaveAs(System::Classes::TComponent* AOwner);
	
__published:
	__property Caption = {default=0};
	__property Vcl::Dialogs::TSaveDialog* Dialog = {read=GetSaveDialog};
	__property Enabled = {default=1};
	__property HelpContext = {default=0};
	__property Hint = {default=0};
	__property ImageIndex = {default=-1};
	__property ShortCut = {default=0};
	__property SecondaryShortCuts;
	__property Visible = {default=1};
	__property BeforeExecute;
	__property OnAccept;
	__property OnCancel;
	__property OnHint;
	__property OnUpdate;
public:
	/* TCommonDialogAction.Destroy */ inline __fastcall virtual ~TFileSaveAs() { }
	
};


class PASCALIMPLEMENTATION TFilePrintSetup : public TCommonDialogAction
{
	typedef TCommonDialogAction inherited;
	
private:
	Vcl::Dialogs::TPrinterSetupDialog* __fastcall GetDialog();
	
protected:
	virtual TCommonDialogClass __fastcall GetDialogClass();
	
__published:
	__property Caption = {default=0};
	__property Vcl::Dialogs::TPrinterSetupDialog* Dialog = {read=GetDialog};
	__property Enabled = {default=1};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=0};
	__property Hint = {default=0};
	__property ImageIndex = {default=-1};
	__property ShortCut = {default=0};
	__property SecondaryShortCuts;
	__property Visible = {default=1};
	__property BeforeExecute;
	__property OnAccept;
	__property OnCancel;
	__property OnHint;
	__property OnUpdate;
public:
	/* TCommonDialogAction.Create */ inline __fastcall virtual TFilePrintSetup(System::Classes::TComponent* AOwner) : TCommonDialogAction(AOwner) { }
	/* TCommonDialogAction.Destroy */ inline __fastcall virtual ~TFilePrintSetup() { }
	
};


class PASCALIMPLEMENTATION TFilePageSetup : public TCommonDialogAction
{
	typedef TCommonDialogAction inherited;
	
private:
	Vcl::Dialogs::TPageSetupDialog* __fastcall GetDialog();
	
protected:
	virtual TCommonDialogClass __fastcall GetDialogClass();
	
__published:
	__property Caption = {default=0};
	__property Vcl::Dialogs::TPageSetupDialog* Dialog = {read=GetDialog};
	__property Enabled = {default=1};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=0};
	__property Hint = {default=0};
	__property ImageIndex = {default=-1};
	__property ShortCut = {default=0};
	__property SecondaryShortCuts;
	__property Visible = {default=1};
	__property BeforeExecute;
	__property OnAccept;
	__property OnCancel;
	__property OnHint;
	__property OnUpdate;
public:
	/* TCommonDialogAction.Create */ inline __fastcall virtual TFilePageSetup(System::Classes::TComponent* AOwner) : TCommonDialogAction(AOwner) { }
	/* TCommonDialogAction.Destroy */ inline __fastcall virtual ~TFilePageSetup() { }
	
};


class PASCALIMPLEMENTATION TFileExit : public Vcl::Actnlist::TCustomAction
{
	typedef Vcl::Actnlist::TCustomAction inherited;
	
public:
	virtual bool __fastcall HandlesTarget(System::TObject* Target);
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	
__published:
	__property Caption = {default=0};
	__property Enabled = {default=1};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=0};
	__property Hint = {default=0};
	__property ImageIndex = {default=-1};
	__property ShortCut = {default=0};
	__property SecondaryShortCuts;
	__property Visible = {default=1};
	__property OnHint;
	__property OnUpdate;
public:
	/* TCustomAction.Create */ inline __fastcall virtual TFileExit(System::Classes::TComponent* AOwner) : Vcl::Actnlist::TCustomAction(AOwner) { }
	/* TCustomAction.Destroy */ inline __fastcall virtual ~TFileExit() { }
	
};


class PASCALIMPLEMENTATION TSearchAction : public TCommonDialogAction
{
	typedef TCommonDialogAction inherited;
	
protected:
	Vcl::Stdctrls::TCustomEdit* FControl;
	bool FFindFirst;
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	
public:
	__fastcall virtual TSearchAction(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TSearchAction();
	virtual bool __fastcall HandlesTarget(System::TObject* Target);
	virtual void __fastcall Search(System::TObject* Sender);
	virtual void __fastcall UpdateTarget(System::TObject* Target);
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
};


class PASCALIMPLEMENTATION TSearchFind : public TSearchAction
{
	typedef TSearchAction inherited;
	
private:
	Vcl::Dialogs::TFindDialog* __fastcall GetFindDialog();
	
protected:
	virtual TCommonDialogClass __fastcall GetDialogClass();
	
__published:
	__property Caption = {default=0};
	__property Vcl::Dialogs::TFindDialog* Dialog = {read=GetFindDialog};
	__property Enabled = {default=1};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=0};
	__property Hint = {default=0};
	__property ImageIndex = {default=-1};
	__property ShortCut = {default=0};
	__property SecondaryShortCuts;
	__property Visible = {default=1};
	__property BeforeExecute;
	__property OnAccept;
	__property OnCancel;
	__property OnHint;
	__property OnUpdate;
public:
	/* TSearchAction.Create */ inline __fastcall virtual TSearchFind(System::Classes::TComponent* AOwner) : TSearchAction(AOwner) { }
	/* TSearchAction.Destroy */ inline __fastcall virtual ~TSearchFind() { }
	
};


class PASCALIMPLEMENTATION TSearchReplace : public TSearchAction
{
	typedef TSearchAction inherited;
	
private:
	void __fastcall Replace(System::TObject* Sender);
	Vcl::Dialogs::TReplaceDialog* __fastcall GetReplaceDialog();
	
protected:
	virtual TCommonDialogClass __fastcall GetDialogClass();
	
public:
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	virtual void __fastcall UpdateTarget(System::TObject* Target);
	
__published:
	__property Caption = {default=0};
	__property Vcl::Dialogs::TReplaceDialog* Dialog = {read=GetReplaceDialog};
	__property Enabled = {default=1};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=0};
	__property Hint = {default=0};
	__property ImageIndex = {default=-1};
	__property ShortCut = {default=0};
	__property SecondaryShortCuts;
	__property Visible = {default=1};
	__property BeforeExecute;
	__property OnAccept;
	__property OnCancel;
	__property OnHint;
	__property OnUpdate;
public:
	/* TSearchAction.Create */ inline __fastcall virtual TSearchReplace(System::Classes::TComponent* AOwner) : TSearchAction(AOwner) { }
	/* TSearchAction.Destroy */ inline __fastcall virtual ~TSearchReplace() { }
	
};


class PASCALIMPLEMENTATION TSearchFindFirst : public TSearchFind
{
	typedef TSearchFind inherited;
	
public:
	__fastcall virtual TSearchFindFirst(System::Classes::TComponent* AOwner);
public:
	/* TSearchAction.Destroy */ inline __fastcall virtual ~TSearchFindFirst() { }
	
};


class PASCALIMPLEMENTATION TSearchFindNext : public Vcl::Actnlist::TCustomAction
{
	typedef Vcl::Actnlist::TCustomAction inherited;
	
private:
	TSearchFind* FSearchFind;
	
public:
	__fastcall virtual TSearchFindNext(System::Classes::TComponent* AOwner);
	virtual bool __fastcall HandlesTarget(System::TObject* Target);
	virtual void __fastcall UpdateTarget(System::TObject* Target);
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	
__published:
	__property Caption = {default=0};
	__property Enabled = {default=1};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=0};
	__property Hint = {default=0};
	__property ImageIndex = {default=-1};
	__property TSearchFind* SearchFind = {read=FSearchFind, write=FSearchFind};
	__property ShortCut = {default=0};
	__property SecondaryShortCuts;
	__property Visible = {default=1};
	__property OnHint;
	__property OnUpdate;
public:
	/* TCustomAction.Destroy */ inline __fastcall virtual ~TSearchFindNext() { }
	
};


class PASCALIMPLEMENTATION TFontEdit : public TCommonDialogAction
{
	typedef TCommonDialogAction inherited;
	
private:
	Vcl::Dialogs::TFontDialog* __fastcall GetDialog();
	
protected:
	virtual TCommonDialogClass __fastcall GetDialogClass();
	
__published:
	__property Caption = {default=0};
	__property Vcl::Dialogs::TFontDialog* Dialog = {read=GetDialog};
	__property Enabled = {default=1};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=0};
	__property Hint = {default=0};
	__property ImageIndex = {default=-1};
	__property ShortCut = {default=0};
	__property SecondaryShortCuts;
	__property Visible = {default=1};
	__property BeforeExecute;
	__property OnAccept;
	__property OnCancel;
	__property OnHint;
	__property OnUpdate;
public:
	/* TCommonDialogAction.Create */ inline __fastcall virtual TFontEdit(System::Classes::TComponent* AOwner) : TCommonDialogAction(AOwner) { }
	/* TCommonDialogAction.Destroy */ inline __fastcall virtual ~TFontEdit() { }
	
};


class PASCALIMPLEMENTATION TColorSelect : public TCommonDialogAction
{
	typedef TCommonDialogAction inherited;
	
private:
	Vcl::Dialogs::TColorDialog* __fastcall GetDialog();
	
protected:
	virtual TCommonDialogClass __fastcall GetDialogClass();
	
__published:
	__property Caption = {default=0};
	__property Vcl::Dialogs::TColorDialog* Dialog = {read=GetDialog};
	__property Enabled = {default=1};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=0};
	__property Hint = {default=0};
	__property ImageIndex = {default=-1};
	__property ShortCut = {default=0};
	__property SecondaryShortCuts;
	__property Visible = {default=1};
	__property BeforeExecute;
	__property OnAccept;
	__property OnCancel;
	__property OnHint;
	__property OnUpdate;
public:
	/* TCommonDialogAction.Create */ inline __fastcall virtual TColorSelect(System::Classes::TComponent* AOwner) : TCommonDialogAction(AOwner) { }
	/* TCommonDialogAction.Destroy */ inline __fastcall virtual ~TColorSelect() { }
	
};


class PASCALIMPLEMENTATION TPrintDlg : public TCommonDialogAction
{
	typedef TCommonDialogAction inherited;
	
private:
	Vcl::Dialogs::TPrintDialog* __fastcall GetDialog();
	
protected:
	virtual TCommonDialogClass __fastcall GetDialogClass();
	
__published:
	__property Caption = {default=0};
	__property Vcl::Dialogs::TPrintDialog* Dialog = {read=GetDialog};
	__property Enabled = {default=1};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=0};
	__property Hint = {default=0};
	__property ImageIndex = {default=-1};
	__property ShortCut = {default=0};
	__property SecondaryShortCuts;
	__property Visible = {default=1};
	__property BeforeExecute;
	__property OnAccept;
	__property OnCancel;
	__property OnHint;
	__property OnUpdate;
public:
	/* TCommonDialogAction.Create */ inline __fastcall virtual TPrintDlg(System::Classes::TComponent* AOwner) : TCommonDialogAction(AOwner) { }
	/* TCommonDialogAction.Destroy */ inline __fastcall virtual ~TPrintDlg() { }
	
};


enum DECLSPEC_DENUM TBrowseForFolderOption : unsigned char { bifBrowseForComputer, bifBrowseForPrinter, bifBrowseIncludeFiles, bifBrowseIncludeURLS, bifDontGoBelowDomain, bifEditBox, bifNewDialogStyle, bifNoNewFolderButton, bifNoTranslateTargets, bifReturnFSAncestors, bifReturnOnlyFSDirs, bifShareable, bifStatusText, bifUAHint, bifUseNewUI, bifValidate };

typedef System::Set<TBrowseForFolderOption, TBrowseForFolderOption::bifBrowseForComputer, TBrowseForFolderOption::bifValidate> TBrowseOptions;

enum DECLSPEC_DENUM TBrowseForFolderOptionEx : unsigned char { bifeHidePinnedPlaces, bifeNoDereferenceLinks, bifeForceShowHidden, bifeAllowMultiselect };

typedef System::Set<TBrowseForFolderOptionEx, TBrowseForFolderOptionEx::bifeHidePinnedPlaces, TBrowseForFolderOptionEx::bifeAllowMultiselect> TBrowseOptionsEx;

typedef void __fastcall (__closure *TBrowseForFolderCallbackEvent)(TBrowseForFolder* Sender, HWND Wnd, unsigned uMsg, NativeInt lParam, NativeInt lpData, int &Result);

class PASCALIMPLEMENTATION TBrowseForFolder : public TCommonDialogAction
{
	typedef TCommonDialogAction inherited;
	
private:
	TBrowseOptions FBrowseOptions;
	TBrowseOptionsEx FBrowseOptionsEx;
	System::UnicodeString FFolder;
#ifndef _WIN64
	System::DynamicArray<System::UnicodeString> FFolders;
#else /* _WIN64 */
	System::TArray__1<System::UnicodeString> FFolders;
#endif /* _WIN64 */
	TBrowseForFolderCallbackEvent FOnCallback;
	TBrowseForFolderCallbackEvent FOnValidate;
	System::UnicodeString FRootDir;
	System::UnicodeString FDialogCaption;
	bool FUseFileDialog;
	System::UnicodeString FFolderNameLabel;
	System::UnicodeString FOkButtonLabel;
	void __fastcall SetBrowseOptions(const TBrowseOptions Value);
	System::UnicodeString __fastcall GetDialogCaption();
	System::UnicodeString __fastcall GetFolder();
	System::UnicodeString __fastcall GetRootDir();
	void __fastcall SetFolder(System::UnicodeString Value);
	System::UnicodeString __fastcall GetFolders(int Index);
	int __fastcall GetSelectionCount();
	void __fastcall SetRootDir(System::UnicodeString Value);
	void __fastcall ExecuteIFileDialog();
	
protected:
	virtual TCommonDialogClass __fastcall GetDialogClass();
	int __fastcall DoCallback(HWND Wnd, unsigned uMsg, NativeInt lParam, NativeInt lpData);
	int __fastcall DoValidate(HWND Wnd, unsigned uMsg, NativeInt lParam, NativeInt lpData);
	
public:
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	__property System::UnicodeString Folder = {read=GetFolder, write=SetFolder};
	__property System::UnicodeString Folders[int Index] = {read=GetFolders};
	__property int SelectionCount = {read=GetSelectionCount, nodefault};
	
__published:
	__property Caption = {default=0};
	__property System::UnicodeString DialogCaption = {read=GetDialogCaption, write=FDialogCaption};
	__property TBrowseOptions BrowseOptions = {read=FBrowseOptions, write=SetBrowseOptions, nodefault};
	__property TBrowseOptionsEx BrowseOptionsEx = {read=FBrowseOptionsEx, write=FBrowseOptionsEx, nodefault};
	__property Enabled = {default=1};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=0};
	__property Hint = {default=0};
	__property ImageIndex = {default=-1};
	__property System::UnicodeString RootDir = {read=GetRootDir, write=SetRootDir};
	__property ShortCut = {default=0};
	__property SecondaryShortCuts;
	__property Visible = {default=1};
	__property BeforeExecute;
	__property bool UseFileDialog = {read=FUseFileDialog, write=FUseFileDialog, default=0};
	__property System::UnicodeString FolderNameLabel = {read=FFolderNameLabel, write=FFolderNameLabel};
	__property System::UnicodeString OkButtonLabel = {read=FOkButtonLabel, write=FOkButtonLabel};
	__property TBrowseForFolderCallbackEvent OnCallback = {read=FOnCallback, write=FOnCallback};
	__property TBrowseForFolderCallbackEvent OnValidate = {read=FOnValidate, write=FOnValidate};
	__property OnAccept;
	__property OnCancel;
	__property OnHint;
public:
	/* TCommonDialogAction.Create */ inline __fastcall virtual TBrowseForFolder(System::Classes::TComponent* AOwner) : TCommonDialogAction(AOwner) { }
	/* TCommonDialogAction.Destroy */ inline __fastcall virtual ~TBrowseForFolder() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Stdactns */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_STDACTNS)
using namespace Vcl::Stdactns;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_StdactnsHPP
