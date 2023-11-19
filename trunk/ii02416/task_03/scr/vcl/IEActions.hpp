// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'IEActions.pas' rev: 35.00 (Windows)

#ifndef IeactionsHPP
#define IeactionsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <Winapi.Windows.hpp>
#include <Vcl.Forms.hpp>
#include <System.Classes.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.StdActns.hpp>
#include <Vcl.Dialogs.hpp>
#include <Winapi.ActiveX.hpp>
#include <WebBrowserEx.hpp>
#include <WBComp.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Graphics.hpp>
#include <MSHTML.hpp>
#include <System.Actions.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Ieactions
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TCustomWebBrowserAction;
class DELPHICLASS TWebBrowserAction;
class DELPHICLASS TBrowserAction;
class DELPHICLASS TWebBrowserUndoAction;
class DELPHICLASS TWebBrowserToggleAction;
class DELPHICLASS TWebBrowserOverrideCursor;
class DELPHICLASS TWebBrowserCut;
class DELPHICLASS TWebBrowserCopy;
class DELPHICLASS TWebBrowserPaste;
class DELPHICLASS TWebBrowserSelectAll;
class DELPHICLASS TWebBrowserSelectAllControls;
class DELPHICLASS TWebBrowserUndo;
class DELPHICLASS TWebBrowserRedo;
class DELPHICLASS TWebBrowserDelete;
class DELPHICLASS TWebBrowserClearSelection;
class DELPHICLASS TWebBrowserMultiSelect;
class DELPHICLASS TWebBrowserAtomicSelect;
class DELPHICLASS TWebBrowserKeepSelection;
class DELPHICLASS TWebBrowserFormatAction;
class DELPHICLASS TWebBrowserBold;
class DELPHICLASS TWebBrowserItalic;
class DELPHICLASS TWebBrowserUnderLine;
class DELPHICLASS TWebBrowserSuperscript;
class DELPHICLASS TWebBrowserSubscript;
class DELPHICLASS TWebBrowserAlignLeft;
class DELPHICLASS TWebBrowserAlignRight;
class DELPHICLASS TWebBrowserAlignCenter;
class DELPHICLASS TWebBrowserAlignFull;
class DELPHICLASS TWebBrowserIndent;
class DELPHICLASS TWebBrowserUnindent;
class DELPHICLASS TWebBrowserFont;
class DELPHICLASS TWebBrowserColor;
class DELPHICLASS TWebBrowserBackColor;
class DELPHICLASS TWebBrowserForeColor;
class DELPHICLASS TWebBrowserOrderedList;
class DELPHICLASS TWebBrowserUnorderedList;
class DELPHICLASS TWebBrowserCreateURL;
class DELPHICLASS TWebBrowserRemoveURL;
class DELPHICLASS TWebBrowser2DPosition;
class DELPHICLASS TWebBrowserAbsolutePosition;
class DELPHICLASS TWebBrowserDesignMode;
class DELPHICLASS TWebBrowserPrint;
class DELPHICLASS TWebBrowserPrintPreview;
class DELPHICLASS TWebBrowserRefresh;
class DELPHICLASS TWebBrowserSaveAs;
class DELPHICLASS TWebBrowserAddFavorites;
class DELPHICLASS TWebBrowserZeroBorder;
class DELPHICLASS TWebBrowserShowTags;
class DELPHICLASS TWebBrowserLiveResize;
class DELPHICLASS TWebBrowserRespectVisiblity;
class DELPHICLASS TWebBrowserAutoURLDetect;
class DELPHICLASS TWebBrowserBack;
class DELPHICLASS TWebBrowserForward;
class DELPHICLASS TWebBrowserHome;
class DELPHICLASS TWebBrowserSearch;
class DELPHICLASS TWebBrowserSearchAction;
class DELPHICLASS TWebBrowserSearchFind;
class DELPHICLASS TWebBrowserSearchReplace;
class DELPHICLASS TWebBrowserSearchFindFirst;
class DELPHICLASS TWebBrowserSearchFindNext;
class DELPHICLASS TWebBrowserFrameAction;
class DELPHICLASS TWebBrowserSeamlessJoin;
class DELPHICLASS TWebBrowserDeleteFrame;
class DELPHICLASS TWebBrowserElementAction;
class DELPHICLASS TWebBrowserControlAction;
class DELPHICLASS TWebBrowserInputAction;
class DELPHICLASS TWebBrowserImageAction;
class DELPHICLASS TWebBrowserTableAction;
class DELPHICLASS TWebBrowserTableDelete;
class DELPHICLASS TWebBrowserTableCellAction;
class DELPHICLASS TWebBrowserTableInsertRow;
class DELPHICLASS TWebBrowserTableDeleteRow;
class DELPHICLASS TWebBrowserTableMoveRow;
class DELPHICLASS TWebBrowserTableDeleteCell;
class DELPHICLASS TWebBrowserTableInsertCell;
class DELPHICLASS TWebBrowserTableColumnAction;
class DELPHICLASS TWebBrowserTableInsertColumn;
class DELPHICLASS TWebBrowserTableDeleteColumn;
class DELPHICLASS TWebBrowserControlSelection;
class DELPHICLASS TWebBrowserAbsolutionPositionAction;
class DELPHICLASS TWebBrowserBringToFront;
class DELPHICLASS TWebBrowserSendToBack;
class DELPHICLASS TWebBrowserAlignControls;
class DELPHICLASS TWebBrowserAlignControlsLeft;
class DELPHICLASS TWebBrowserAlignControlsRight;
class DELPHICLASS TWebBrowserAlignControlsTop;
class DELPHICLASS TWebBrowserAlignControlsBottom;
class DELPHICLASS TWebBrowserAlignVerticalCenters;
class DELPHICLASS TWebBrowserAlignHorizontalCenters;
class DELPHICLASS TWebBrowserControlSize;
class DELPHICLASS TWebBrowserMakeSameWidth;
class DELPHICLASS TWebBrowserMakeSameHeight;
class DELPHICLASS TWebBrowserMakeSameSize;
class DELPHICLASS TWebBrowserDesignTimeLock;
class DELPHICLASS TWebBrowserInsertTag;
class DELPHICLASS TWebBrowserInsertFormTag;
class DELPHICLASS TWebBrowserOverwrite;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TWebActionOption : unsigned char { woDoDefault, woPromptUser, woDontPrompt, woShowHelp };

enum DECLSPEC_DENUM TWebActionApplyOption : unsigned char { applyRootDocument, applyAllDocuments, applyActiveDocument };

class PASCALIMPLEMENTATION TCustomWebBrowserAction : public Vcl::Actnlist::TCustomAction
{
	typedef Vcl::Actnlist::TCustomAction inherited;
	
private:
	Webbrowserex::TWebBrowserEx* FControl;
	System::UnicodeString FCmdStr;
	Winapi::Activex::TOleEnum FCmdID;
	System::UnicodeString FHTMLTag;
	bool FUseexecCommand;
	bool FUpdateChecked;
	Webbrowserex::TWebBrowserCommandUpdater* FCommandUpdater;
	GUID FCmdGroup;
	TWebActionApplyOption FWebActionApplyOption;
	void __fastcall SetCmdID(const Winapi::Activex::TOleEnum Value);
	void __fastcall SetCommandUpdater(Webbrowserex::TWebBrowserCommandUpdater* const Value);
	
protected:
	Webbrowserex::TCommandStates FCommandState;
	System::OleVariant FInParam;
	System::OleVariant FOutParam;
	TWebActionOption FOption;
	System::WordBool FShowUI;
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	void __fastcall UpdateCheckedState();
	__property Webbrowserex::TWebBrowserEx* Control = {read=FControl};
	__property TWebActionOption Option = {read=FOption, write=FOption, nodefault};
	
public:
	__fastcall virtual TCustomWebBrowserAction(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomWebBrowserAction();
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	virtual bool __fastcall HandlesTarget(System::TObject* Target);
	virtual void __fastcall UpdateTarget(System::TObject* Target);
	__property TWebActionApplyOption ApplyOption = {read=FWebActionApplyOption, write=FWebActionApplyOption, nodefault};
	__property Winapi::Activex::TOleEnum CmdID = {read=FCmdID, write=SetCmdID, nodefault};
	__property GUID CmdGroup = {read=FCmdGroup, write=FCmdGroup};
	__property Webbrowserex::TWebBrowserCommandUpdater* CommandUpdater = {read=FCommandUpdater, write=SetCommandUpdater};
	__property bool UseexecCommand = {read=FUseexecCommand, write=FUseexecCommand, nodefault};
	__property bool UpdateChecked = {read=FUpdateChecked, write=FUpdateChecked, nodefault};
};


class PASCALIMPLEMENTATION TWebBrowserAction : public TCustomWebBrowserAction
{
	typedef TCustomWebBrowserAction inherited;
	
__published:
	__property AutoCheck = {default=0};
	__property CommandUpdater;
	__property Caption = {default=0};
	__property Checked = {default=0};
	__property Enabled = {default=1};
	__property GroupIndex = {default=0};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=0};
	__property Hint = {default=0};
	__property ImageIndex = {default=-1};
	__property OnChange;
	__property OnExecute;
	__property OnHint;
	__property OnUpdate;
	__property SecondaryShortCuts;
	__property ShortCut = {default=0};
	__property UpdateChecked = {default=0};
	__property Visible = {default=1};
public:
	/* TCustomWebBrowserAction.Create */ inline __fastcall virtual TWebBrowserAction(System::Classes::TComponent* AOwner) : TCustomWebBrowserAction(AOwner) { }
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserAction() { }
	
};


class PASCALIMPLEMENTATION TBrowserAction : public TCustomWebBrowserAction
{
	typedef TCustomWebBrowserAction inherited;
	
__published:
	__property AutoCheck = {default=0};
	__property CommandUpdater;
	__property Caption = {default=0};
	__property Checked = {default=0};
	__property CmdID;
	__property Enabled = {default=1};
	__property GroupIndex = {default=0};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=0};
	__property Hint = {default=0};
	__property ImageIndex = {default=-1};
	__property Option;
	__property UseexecCommand;
	__property OnChange;
	__property OnExecute;
	__property OnHint;
	__property OnUpdate;
	__property SecondaryShortCuts;
	__property ShortCut = {default=0};
	__property Visible = {default=1};
public:
	/* TCustomWebBrowserAction.Create */ inline __fastcall virtual TBrowserAction(System::Classes::TComponent* AOwner) : TCustomWebBrowserAction(AOwner) { }
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TBrowserAction() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserUndoAction : public TCustomWebBrowserAction
{
	typedef TCustomWebBrowserAction inherited;
	
private:
	bool FAllowBatchUndo;
	
protected:
	virtual void __fastcall BeforeAction(System::TObject* Target);
	virtual void __fastcall DoAction(System::TObject* Target, int Data);
	virtual void __fastcall AfterAction(System::TObject* Target);
	
public:
	__fastcall virtual TWebBrowserUndoAction(System::Classes::TComponent* AOwner);
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	__property bool AllowBatchUndo = {read=FAllowBatchUndo, write=FAllowBatchUndo, default=1};
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserUndoAction() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserToggleAction : public TWebBrowserAction
{
	typedef TWebBrowserAction inherited;
	
private:
	bool FNotInParam;
	
public:
	__fastcall virtual TWebBrowserToggleAction(System::Classes::TComponent* AOwner);
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	virtual void __fastcall UpdateTarget(System::TObject* Target);
	__property bool NotInParam = {read=FNotInParam, write=FNotInParam, nodefault};
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserToggleAction() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserOverrideCursor : public TWebBrowserToggleAction
{
	typedef TWebBrowserToggleAction inherited;
	
public:
	__fastcall virtual TWebBrowserOverrideCursor(System::Classes::TComponent* AOwner);
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserOverrideCursor() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserCut : public TWebBrowserAction
{
	typedef TWebBrowserAction inherited;
	
public:
	__fastcall virtual TWebBrowserCut(System::Classes::TComponent* AOwner);
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserCut() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserCopy : public TWebBrowserAction
{
	typedef TWebBrowserAction inherited;
	
public:
	__fastcall virtual TWebBrowserCopy(System::Classes::TComponent* AOwner);
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserCopy() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserPaste : public TWebBrowserAction
{
	typedef TWebBrowserAction inherited;
	
public:
	__fastcall virtual TWebBrowserPaste(System::Classes::TComponent* AOwner);
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserPaste() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserSelectAll : public TWebBrowserAction
{
	typedef TWebBrowserAction inherited;
	
public:
	__fastcall virtual TWebBrowserSelectAll(System::Classes::TComponent* AOwner);
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserSelectAll() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserSelectAllControls : public TWebBrowserAction
{
	typedef TWebBrowserAction inherited;
	
public:
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	virtual void __fastcall UpdateTarget(System::TObject* Target);
public:
	/* TCustomWebBrowserAction.Create */ inline __fastcall virtual TWebBrowserSelectAllControls(System::Classes::TComponent* AOwner) : TWebBrowserAction(AOwner) { }
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserSelectAllControls() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserUndo : public TWebBrowserAction
{
	typedef TWebBrowserAction inherited;
	
public:
	__fastcall virtual TWebBrowserUndo(System::Classes::TComponent* AOwner);
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserUndo() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserRedo : public TWebBrowserAction
{
	typedef TWebBrowserAction inherited;
	
public:
	__fastcall virtual TWebBrowserRedo(System::Classes::TComponent* AOwner);
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserRedo() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserDelete : public TWebBrowserAction
{
	typedef TWebBrowserAction inherited;
	
public:
	__fastcall virtual TWebBrowserDelete(System::Classes::TComponent* AOwner);
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserDelete() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserClearSelection : public TWebBrowserAction
{
	typedef TWebBrowserAction inherited;
	
public:
	__fastcall virtual TWebBrowserClearSelection(System::Classes::TComponent* AOwner);
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserClearSelection() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserMultiSelect : public TWebBrowserAction
{
	typedef TWebBrowserAction inherited;
	
public:
	__fastcall virtual TWebBrowserMultiSelect(System::Classes::TComponent* AOwner);
	
__published:
	__property UpdateChecked = {default=1};
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserMultiSelect() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserAtomicSelect : public TWebBrowserToggleAction
{
	typedef TWebBrowserToggleAction inherited;
	
public:
	__fastcall virtual TWebBrowserAtomicSelect(System::Classes::TComponent* AOwner);
	
__published:
	__property UpdateChecked = {default=1};
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserAtomicSelect() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserKeepSelection : public TWebBrowserAction
{
	typedef TWebBrowserAction inherited;
	
public:
	__fastcall virtual TWebBrowserKeepSelection(System::Classes::TComponent* AOwner);
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserKeepSelection() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserFormatAction : public TWebBrowserAction
{
	typedef TWebBrowserAction inherited;
	
public:
	virtual void __fastcall UpdateTarget(System::TObject* Target);
public:
	/* TCustomWebBrowserAction.Create */ inline __fastcall virtual TWebBrowserFormatAction(System::Classes::TComponent* AOwner) : TWebBrowserAction(AOwner) { }
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserFormatAction() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserBold : public TWebBrowserFormatAction
{
	typedef TWebBrowserFormatAction inherited;
	
public:
	__fastcall virtual TWebBrowserBold(System::Classes::TComponent* AOwner);
	
__published:
	__property UpdateChecked = {default=1};
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserBold() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserItalic : public TWebBrowserFormatAction
{
	typedef TWebBrowserFormatAction inherited;
	
public:
	__fastcall virtual TWebBrowserItalic(System::Classes::TComponent* AOwner);
	
__published:
	__property UpdateChecked = {default=1};
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserItalic() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserUnderLine : public TWebBrowserFormatAction
{
	typedef TWebBrowserFormatAction inherited;
	
public:
	__fastcall virtual TWebBrowserUnderLine(System::Classes::TComponent* AOwner);
	
__published:
	__property UpdateChecked = {default=1};
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserUnderLine() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserSuperscript : public TWebBrowserFormatAction
{
	typedef TWebBrowserFormatAction inherited;
	
public:
	__fastcall virtual TWebBrowserSuperscript(System::Classes::TComponent* AOwner);
	
__published:
	__property UpdateChecked = {default=1};
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserSuperscript() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserSubscript : public TWebBrowserFormatAction
{
	typedef TWebBrowserFormatAction inherited;
	
public:
	__fastcall virtual TWebBrowserSubscript(System::Classes::TComponent* AOwner);
	
__published:
	__property UpdateChecked = {default=1};
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserSubscript() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserAlignLeft : public TWebBrowserFormatAction
{
	typedef TWebBrowserFormatAction inherited;
	
public:
	__fastcall virtual TWebBrowserAlignLeft(System::Classes::TComponent* AOwner);
	
__published:
	__property UpdateChecked = {default=1};
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserAlignLeft() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserAlignRight : public TWebBrowserFormatAction
{
	typedef TWebBrowserFormatAction inherited;
	
public:
	__fastcall virtual TWebBrowserAlignRight(System::Classes::TComponent* AOwner);
	
__published:
	__property UpdateChecked = {default=1};
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserAlignRight() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserAlignCenter : public TWebBrowserFormatAction
{
	typedef TWebBrowserFormatAction inherited;
	
public:
	__fastcall virtual TWebBrowserAlignCenter(System::Classes::TComponent* AOwner);
	
__published:
	__property UpdateChecked = {default=1};
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserAlignCenter() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserAlignFull : public TWebBrowserFormatAction
{
	typedef TWebBrowserFormatAction inherited;
	
public:
	__fastcall virtual TWebBrowserAlignFull(System::Classes::TComponent* AOwner);
	
__published:
	__property UpdateChecked = {default=1};
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserAlignFull() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserIndent : public TWebBrowserFormatAction
{
	typedef TWebBrowserFormatAction inherited;
	
public:
	__fastcall virtual TWebBrowserIndent(System::Classes::TComponent* AOwner);
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserIndent() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserUnindent : public TWebBrowserFormatAction
{
	typedef TWebBrowserFormatAction inherited;
	
public:
	__fastcall virtual TWebBrowserUnindent(System::Classes::TComponent* AOwner);
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserUnindent() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserFont : public TWebBrowserFormatAction
{
	typedef TWebBrowserFormatAction inherited;
	
public:
	__fastcall virtual TWebBrowserFont(System::Classes::TComponent* AOwner);
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserFont() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserColor : public TWebBrowserFormatAction
{
	typedef TWebBrowserFormatAction inherited;
	
private:
	Vcl::Dialogs::TColorDialog* FDialog;
	bool FExecuteResult;
	System::Classes::TNotifyEvent FOnAccept;
	System::Classes::TNotifyEvent FOnCancel;
	System::Classes::TNotifyEvent FBeforeExecute;
	System::Uitypes::TColor __fastcall GetColor();
	void __fastcall SetColor(const System::Uitypes::TColor Value);
	
protected:
	virtual void __fastcall DoAccept();
	virtual void __fastcall DoCancel();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall SetupDialog();
	
public:
	__fastcall virtual TWebBrowserColor(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TWebBrowserColor();
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	__property System::Uitypes::TColor Color = {read=GetColor, write=SetColor, nodefault};
	__property Vcl::Dialogs::TColorDialog* Dialog = {read=FDialog, write=FDialog};
	__property bool ExecuteResult = {read=FExecuteResult, nodefault};
	__property System::Classes::TNotifyEvent BeforeExecute = {read=FBeforeExecute, write=FBeforeExecute};
	__property System::Classes::TNotifyEvent OnAccept = {read=FOnAccept, write=FOnAccept};
	__property System::Classes::TNotifyEvent OnCancel = {read=FOnCancel, write=FOnCancel};
};


class PASCALIMPLEMENTATION TWebBrowserBackColor : public TWebBrowserColor
{
	typedef TWebBrowserColor inherited;
	
public:
	__fastcall virtual TWebBrowserBackColor(System::Classes::TComponent* AOwner);
	
__published:
	__property Dialog;
public:
	/* TWebBrowserColor.Destroy */ inline __fastcall virtual ~TWebBrowserBackColor() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserForeColor : public TWebBrowserColor
{
	typedef TWebBrowserColor inherited;
	
public:
	__fastcall virtual TWebBrowserForeColor(System::Classes::TComponent* AOwner);
	
__published:
	__property Dialog;
public:
	/* TWebBrowserColor.Destroy */ inline __fastcall virtual ~TWebBrowserForeColor() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserOrderedList : public TWebBrowserAction
{
	typedef TWebBrowserAction inherited;
	
public:
	__fastcall virtual TWebBrowserOrderedList(System::Classes::TComponent* AOwner);
	
__published:
	__property UpdateChecked = {default=1};
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserOrderedList() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserUnorderedList : public TWebBrowserAction
{
	typedef TWebBrowserAction inherited;
	
public:
	__fastcall virtual TWebBrowserUnorderedList(System::Classes::TComponent* AOwner);
	
__published:
	__property UpdateChecked = {default=1};
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserUnorderedList() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserCreateURL : public TWebBrowserAction
{
	typedef TWebBrowserAction inherited;
	
public:
	__fastcall virtual TWebBrowserCreateURL(System::Classes::TComponent* AOwner);
	virtual void __fastcall UpdateTarget(System::TObject* Target);
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserCreateURL() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserRemoveURL : public TWebBrowserAction
{
	typedef TWebBrowserAction inherited;
	
public:
	__fastcall virtual TWebBrowserRemoveURL(System::Classes::TComponent* AOwner);
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserRemoveURL() { }
	
};


class PASCALIMPLEMENTATION TWebBrowser2DPosition : public TWebBrowserAction
{
	typedef TWebBrowserAction inherited;
	
public:
	__fastcall virtual TWebBrowser2DPosition(System::Classes::TComponent* AOwner);
	
__published:
	__property UpdateChecked = {default=1};
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowser2DPosition() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserAbsolutePosition : public TWebBrowserAction
{
	typedef TWebBrowserAction inherited;
	
public:
	__fastcall virtual TWebBrowserAbsolutePosition(System::Classes::TComponent* AOwner);
	
__published:
	__property UpdateChecked = {default=1};
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserAbsolutePosition() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserDesignMode : public TWebBrowserAction
{
	typedef TWebBrowserAction inherited;
	
public:
	__fastcall virtual TWebBrowserDesignMode(System::Classes::TComponent* AOwner);
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	virtual void __fastcall UpdateTarget(System::TObject* Target);
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserDesignMode() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserPrint : public TWebBrowserAction
{
	typedef TWebBrowserAction inherited;
	
public:
	__fastcall virtual TWebBrowserPrint(System::Classes::TComponent* AOwner);
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserPrint() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserPrintPreview : public TWebBrowserAction
{
	typedef TWebBrowserAction inherited;
	
public:
	__fastcall virtual TWebBrowserPrintPreview(System::Classes::TComponent* AOwner);
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserPrintPreview() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserRefresh : public TWebBrowserAction
{
	typedef TWebBrowserAction inherited;
	
public:
	__fastcall virtual TWebBrowserRefresh(System::Classes::TComponent* AOwner);
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserRefresh() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserSaveAs : public TWebBrowserAction
{
	typedef TWebBrowserAction inherited;
	
public:
	__fastcall virtual TWebBrowserSaveAs(System::Classes::TComponent* AOwner);
	
__published:
	__property Option;
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserSaveAs() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserAddFavorites : public TWebBrowserAction
{
	typedef TWebBrowserAction inherited;
	
public:
	__fastcall virtual TWebBrowserAddFavorites(System::Classes::TComponent* AOwner);
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserAddFavorites() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserZeroBorder : public TWebBrowserAction
{
	typedef TWebBrowserAction inherited;
	
public:
	__fastcall virtual TWebBrowserZeroBorder(System::Classes::TComponent* AOwner);
	virtual void __fastcall UpdateTarget(System::TObject* Target);
	
__published:
	__property UpdateChecked = {default=1};
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserZeroBorder() { }
	
};


enum DECLSPEC_DENUM TShowTags : unsigned char { stAll, stAlignedSiteTags, stScript, stStyle, stComment, stArea, stUnknown, stMisc };

class PASCALIMPLEMENTATION TWebBrowserShowTags : public TWebBrowserAction
{
	typedef TWebBrowserAction inherited;
	
private:
	TShowTags FShowTags;
	void __fastcall SetShowTags(const TShowTags Value);
	
public:
	__fastcall virtual TWebBrowserShowTags(System::Classes::TComponent* AOwner);
	
__published:
	__property UpdateChecked = {default=1};
	__property TShowTags ShowTags = {read=FShowTags, write=SetShowTags, default=0};
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserShowTags() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserLiveResize : public TWebBrowserAction
{
	typedef TWebBrowserAction inherited;
	
public:
	__fastcall virtual TWebBrowserLiveResize(System::Classes::TComponent* AOwner);
	
__published:
	__property UpdateChecked = {default=1};
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserLiveResize() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserRespectVisiblity : public TWebBrowserAction
{
	typedef TWebBrowserAction inherited;
	
public:
	__fastcall virtual TWebBrowserRespectVisiblity(System::Classes::TComponent* AOwner);
	
__published:
	__property UpdateChecked = {default=1};
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserRespectVisiblity() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserAutoURLDetect : public TWebBrowserToggleAction
{
	typedef TWebBrowserToggleAction inherited;
	
public:
	__fastcall virtual TWebBrowserAutoURLDetect(System::Classes::TComponent* AOwner);
	
__published:
	__property UpdateChecked = {default=1};
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserAutoURLDetect() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserBack : public TWebBrowserAction
{
	typedef TWebBrowserAction inherited;
	
public:
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	virtual void __fastcall UpdateTarget(System::TObject* Target);
public:
	/* TCustomWebBrowserAction.Create */ inline __fastcall virtual TWebBrowserBack(System::Classes::TComponent* AOwner) : TWebBrowserAction(AOwner) { }
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserBack() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserForward : public TWebBrowserAction
{
	typedef TWebBrowserAction inherited;
	
public:
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	virtual void __fastcall UpdateTarget(System::TObject* Target);
public:
	/* TCustomWebBrowserAction.Create */ inline __fastcall virtual TWebBrowserForward(System::Classes::TComponent* AOwner) : TWebBrowserAction(AOwner) { }
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserForward() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserHome : public TWebBrowserAction
{
	typedef TWebBrowserAction inherited;
	
public:
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	virtual void __fastcall UpdateTarget(System::TObject* Target);
public:
	/* TCustomWebBrowserAction.Create */ inline __fastcall virtual TWebBrowserHome(System::Classes::TComponent* AOwner) : TWebBrowserAction(AOwner) { }
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserHome() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserSearch : public TWebBrowserAction
{
	typedef TWebBrowserAction inherited;
	
public:
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	virtual void __fastcall UpdateTarget(System::TObject* Target);
public:
	/* TCustomWebBrowserAction.Create */ inline __fastcall virtual TWebBrowserSearch(System::Classes::TComponent* AOwner) : TWebBrowserAction(AOwner) { }
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserSearch() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserSearchAction : public Vcl::Stdactns::TCommonDialogAction
{
	typedef Vcl::Stdactns::TCommonDialogAction inherited;
	
protected:
	Webbrowserex::TWebBrowserEx* FControl;
	bool FFindFirst;
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	
public:
	virtual bool __fastcall HandlesTarget(System::TObject* Target);
	virtual void __fastcall Search(System::TObject* Sender);
	virtual void __fastcall UpdateTarget(System::TObject* Target);
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
public:
	/* TCommonDialogAction.Create */ inline __fastcall virtual TWebBrowserSearchAction(System::Classes::TComponent* AOwner) : Vcl::Stdactns::TCommonDialogAction(AOwner) { }
	/* TCommonDialogAction.Destroy */ inline __fastcall virtual ~TWebBrowserSearchAction() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserSearchFind : public TWebBrowserAction
{
	typedef TWebBrowserAction inherited;
	
public:
	__fastcall virtual TWebBrowserSearchFind(System::Classes::TComponent* AOwner);
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserSearchFind() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserSearchReplace : public TWebBrowserSearchAction
{
	typedef TWebBrowserSearchAction inherited;
	
private:
	void __fastcall Replace(System::TObject* Sender);
	Vcl::Dialogs::TReplaceDialog* __fastcall GetReplaceDialog();
	
protected:
	virtual Vcl::Stdactns::TCommonDialogClass __fastcall GetDialogClass();
	
public:
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	
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
public:
	/* TCommonDialogAction.Create */ inline __fastcall virtual TWebBrowserSearchReplace(System::Classes::TComponent* AOwner) : TWebBrowserSearchAction(AOwner) { }
	/* TCommonDialogAction.Destroy */ inline __fastcall virtual ~TWebBrowserSearchReplace() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserSearchFindFirst : public TWebBrowserSearchFind
{
	typedef TWebBrowserSearchFind inherited;
	
public:
	__fastcall virtual TWebBrowserSearchFindFirst(System::Classes::TComponent* AOwner);
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserSearchFindFirst() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserSearchFindNext : public Vcl::Actnlist::TCustomAction
{
	typedef Vcl::Actnlist::TCustomAction inherited;
	
private:
	TWebBrowserSearchFind* FSearchFind;
	
public:
	__fastcall virtual TWebBrowserSearchFindNext(System::Classes::TComponent* AOwner);
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
	__property TWebBrowserSearchFind* SearchFind = {read=FSearchFind, write=FSearchFind};
	__property ShortCut = {default=0};
	__property SecondaryShortCuts;
	__property Visible = {default=1};
	__property OnHint;
public:
	/* TCustomAction.Destroy */ inline __fastcall virtual ~TWebBrowserSearchFindNext() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserFrameAction : public TWebBrowserUndoAction
{
	typedef TWebBrowserUndoAction inherited;
	
public:
	virtual void __fastcall UpdateTarget(System::TObject* Target);
public:
	/* TWebBrowserUndoAction.Create */ inline __fastcall virtual TWebBrowserFrameAction(System::Classes::TComponent* AOwner) : TWebBrowserUndoAction(AOwner) { }
	
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserFrameAction() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserSeamlessJoin : public TWebBrowserFrameAction
{
	typedef TWebBrowserFrameAction inherited;
	
protected:
	virtual void __fastcall DoAction(System::TObject* Target, int Data);
	
public:
	__fastcall virtual TWebBrowserSeamlessJoin(System::Classes::TComponent* AOwner);
	virtual void __fastcall UpdateTarget(System::TObject* Target);
	
__published:
	__property AllowBatchUndo = {default=1};
	__property AutoCheck = {default=0};
	__property CommandUpdater;
	__property Caption = {default=0};
	__property Checked = {default=0};
	__property Enabled = {default=1};
	__property GroupIndex = {default=0};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=0};
	__property Hint = {default=0};
	__property ImageIndex = {default=-1};
	__property OnChange;
	__property OnExecute;
	__property OnHint;
	__property OnUpdate;
	__property SecondaryShortCuts;
	__property ShortCut = {default=0};
	__property UpdateChecked = {default=0};
	__property Visible = {default=1};
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserSeamlessJoin() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserDeleteFrame : public TWebBrowserFrameAction
{
	typedef TWebBrowserFrameAction inherited;
	
protected:
	virtual void __fastcall DoAction(System::TObject* Target, int Data);
	
public:
	virtual bool __fastcall HandlesTarget(System::TObject* Target);
	virtual void __fastcall UpdateTarget(System::TObject* Target);
	
__published:
	__property AllowBatchUndo = {default=1};
	__property AutoCheck = {default=0};
	__property CommandUpdater;
	__property Caption = {default=0};
	__property Checked = {default=0};
	__property Enabled = {default=1};
	__property GroupIndex = {default=0};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=0};
	__property Hint = {default=0};
	__property ImageIndex = {default=-1};
	__property OnChange;
	__property OnExecute;
	__property OnHint;
	__property OnUpdate;
	__property SecondaryShortCuts;
	__property ShortCut = {default=0};
	__property UpdateChecked = {default=0};
	__property Visible = {default=1};
public:
	/* TWebBrowserUndoAction.Create */ inline __fastcall virtual TWebBrowserDeleteFrame(System::Classes::TComponent* AOwner) : TWebBrowserFrameAction(AOwner) { }
	
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserDeleteFrame() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserElementAction : public TWebBrowserUndoAction
{
	typedef TWebBrowserUndoAction inherited;
	
protected:
	virtual Mshtml::_di_IHTMLElement __fastcall GetElement();
	virtual bool __fastcall IsTargetElement();
	
public:
	virtual void __fastcall UpdateTarget(System::TObject* Target);
	__property Mshtml::_di_IHTMLElement Element = {read=GetElement};
	
__published:
	__property AllowBatchUndo = {default=1};
	__property AutoCheck = {default=0};
	__property CommandUpdater;
	__property Caption = {default=0};
	__property Checked = {default=0};
	__property Enabled = {default=1};
	__property GroupIndex = {default=0};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=0};
	__property Hint = {default=0};
	__property ImageIndex = {default=-1};
	__property OnChange;
	__property OnExecute;
	__property OnHint;
	__property OnUpdate;
	__property SecondaryShortCuts;
	__property ShortCut = {default=0};
	__property UpdateChecked = {default=0};
	__property Visible = {default=1};
public:
	/* TWebBrowserUndoAction.Create */ inline __fastcall virtual TWebBrowserElementAction(System::Classes::TComponent* AOwner) : TWebBrowserUndoAction(AOwner) { }
	
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserElementAction() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserControlAction : public TWebBrowserElementAction
{
	typedef TWebBrowserElementAction inherited;
	
protected:
	virtual Mshtml::_di_IHTMLElement __fastcall GetElement();
public:
	/* TWebBrowserUndoAction.Create */ inline __fastcall virtual TWebBrowserControlAction(System::Classes::TComponent* AOwner) : TWebBrowserElementAction(AOwner) { }
	
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserControlAction() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserInputAction : public TWebBrowserControlAction
{
	typedef TWebBrowserControlAction inherited;
	
protected:
	virtual bool __fastcall IsTargetElement();
public:
	/* TWebBrowserUndoAction.Create */ inline __fastcall virtual TWebBrowserInputAction(System::Classes::TComponent* AOwner) : TWebBrowserControlAction(AOwner) { }
	
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserInputAction() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserImageAction : public TWebBrowserControlAction
{
	typedef TWebBrowserControlAction inherited;
	
protected:
	virtual bool __fastcall IsTargetElement();
public:
	/* TWebBrowserUndoAction.Create */ inline __fastcall virtual TWebBrowserImageAction(System::Classes::TComponent* AOwner) : TWebBrowserControlAction(AOwner) { }
	
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserImageAction() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserTableAction : public TWebBrowserControlAction
{
	typedef TWebBrowserControlAction inherited;
	
protected:
	virtual bool __fastcall IsTargetElement();
public:
	/* TWebBrowserUndoAction.Create */ inline __fastcall virtual TWebBrowserTableAction(System::Classes::TComponent* AOwner) : TWebBrowserControlAction(AOwner) { }
	
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserTableAction() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserTableDelete : public TWebBrowserTableAction
{
	typedef TWebBrowserTableAction inherited;
	
protected:
	virtual void __fastcall DoAction(System::TObject* Target, int Data);
	virtual Mshtml::_di_IHTMLElement __fastcall GetElement();
	
__published:
	__property AllowBatchUndo = {default=1};
	__property AutoCheck = {default=0};
	__property CommandUpdater;
	__property Caption = {default=0};
	__property Checked = {default=0};
	__property Enabled = {default=1};
	__property GroupIndex = {default=0};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=0};
	__property Hint = {default=0};
	__property ImageIndex = {default=-1};
	__property OnChange;
	__property OnExecute;
	__property OnHint;
	__property OnUpdate;
	__property SecondaryShortCuts;
	__property ShortCut = {default=0};
	__property UpdateChecked = {default=0};
	__property Visible = {default=1};
public:
	/* TWebBrowserUndoAction.Create */ inline __fastcall virtual TWebBrowserTableDelete(System::Classes::TComponent* AOwner) : TWebBrowserTableAction(AOwner) { }
	
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserTableDelete() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserTableCellAction : public TWebBrowserElementAction
{
	typedef TWebBrowserElementAction inherited;
	
protected:
	virtual bool __fastcall IsTargetElement();
	virtual Mshtml::_di_IHTMLElement __fastcall GetElement();
	
__published:
	__property AllowBatchUndo = {default=1};
	__property AutoCheck = {default=0};
	__property CommandUpdater;
	__property Caption = {default=0};
	__property Checked = {default=0};
	__property Enabled = {default=1};
	__property GroupIndex = {default=0};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=0};
	__property Hint = {default=0};
	__property ImageIndex = {default=-1};
	__property OnChange;
	__property OnExecute;
	__property OnHint;
	__property OnUpdate;
	__property SecondaryShortCuts;
	__property ShortCut = {default=0};
	__property UpdateChecked = {default=0};
	__property Visible = {default=1};
public:
	/* TWebBrowserUndoAction.Create */ inline __fastcall virtual TWebBrowserTableCellAction(System::Classes::TComponent* AOwner) : TWebBrowserElementAction(AOwner) { }
	
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserTableCellAction() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserTableInsertRow : public TWebBrowserTableCellAction
{
	typedef TWebBrowserTableCellAction inherited;
	
private:
	bool FInsertAbove;
	
protected:
	virtual void __fastcall DoAction(System::TObject* Target, int Data);
	
__published:
	__property AllowBatchUndo = {default=1};
	__property AutoCheck = {default=0};
	__property CommandUpdater;
	__property Caption = {default=0};
	__property Checked = {default=0};
	__property Enabled = {default=1};
	__property GroupIndex = {default=0};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=0};
	__property Hint = {default=0};
	__property ImageIndex = {default=-1};
	__property bool InsertAbove = {read=FInsertAbove, write=FInsertAbove, default=0};
	__property OnChange;
	__property OnExecute;
	__property OnHint;
	__property OnUpdate;
	__property SecondaryShortCuts;
	__property ShortCut = {default=0};
	__property UpdateChecked = {default=0};
	__property Visible = {default=1};
public:
	/* TWebBrowserUndoAction.Create */ inline __fastcall virtual TWebBrowserTableInsertRow(System::Classes::TComponent* AOwner) : TWebBrowserTableCellAction(AOwner) { }
	
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserTableInsertRow() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserTableDeleteRow : public TWebBrowserTableCellAction
{
	typedef TWebBrowserTableCellAction inherited;
	
public:
	virtual void __fastcall DoAction(System::TObject* Target, int Data);
	
__published:
	__property AllowBatchUndo = {default=1};
	__property AutoCheck = {default=0};
	__property CommandUpdater;
	__property Caption = {default=0};
	__property Checked = {default=0};
	__property Enabled = {default=1};
	__property GroupIndex = {default=0};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=0};
	__property Hint = {default=0};
	__property ImageIndex = {default=-1};
	__property OnChange;
	__property OnExecute;
	__property OnHint;
	__property OnUpdate;
	__property SecondaryShortCuts;
	__property ShortCut = {default=0};
	__property UpdateChecked = {default=0};
	__property Visible = {default=1};
public:
	/* TWebBrowserUndoAction.Create */ inline __fastcall virtual TWebBrowserTableDeleteRow(System::Classes::TComponent* AOwner) : TWebBrowserTableCellAction(AOwner) { }
	
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserTableDeleteRow() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserTableMoveRow : public TWebBrowserTableCellAction
{
	typedef TWebBrowserTableCellAction inherited;
	
private:
	bool FMoveUp;
	
protected:
	virtual void __fastcall DoAction(System::TObject* Target, int Data);
	
public:
	virtual void __fastcall UpdateTarget(System::TObject* Target);
	
__published:
	__property AllowBatchUndo = {default=1};
	__property AutoCheck = {default=0};
	__property CommandUpdater;
	__property Caption = {default=0};
	__property Checked = {default=0};
	__property Enabled = {default=1};
	__property GroupIndex = {default=0};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=0};
	__property Hint = {default=0};
	__property ImageIndex = {default=-1};
	__property bool MoveUp = {read=FMoveUp, write=FMoveUp, default=0};
	__property OnChange;
	__property OnExecute;
	__property OnHint;
	__property OnUpdate;
	__property SecondaryShortCuts;
	__property ShortCut = {default=0};
	__property UpdateChecked = {default=0};
	__property Visible = {default=1};
public:
	/* TWebBrowserUndoAction.Create */ inline __fastcall virtual TWebBrowserTableMoveRow(System::Classes::TComponent* AOwner) : TWebBrowserTableCellAction(AOwner) { }
	
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserTableMoveRow() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserTableDeleteCell : public TWebBrowserTableCellAction
{
	typedef TWebBrowserTableCellAction inherited;
	
public:
	virtual void __fastcall DoAction(System::TObject* Target, int Data);
	
__published:
	__property AllowBatchUndo = {default=1};
	__property AutoCheck = {default=0};
	__property CommandUpdater;
	__property Caption = {default=0};
	__property Checked = {default=0};
	__property Enabled = {default=1};
	__property GroupIndex = {default=0};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=0};
	__property Hint = {default=0};
	__property ImageIndex = {default=-1};
	__property OnChange;
	__property OnExecute;
	__property OnHint;
	__property OnUpdate;
	__property SecondaryShortCuts;
	__property ShortCut = {default=0};
	__property UpdateChecked = {default=0};
	__property Visible = {default=1};
public:
	/* TWebBrowserUndoAction.Create */ inline __fastcall virtual TWebBrowserTableDeleteCell(System::Classes::TComponent* AOwner) : TWebBrowserTableCellAction(AOwner) { }
	
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserTableDeleteCell() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserTableInsertCell : public TWebBrowserTableCellAction
{
	typedef TWebBrowserTableCellAction inherited;
	
protected:
	virtual void __fastcall DoAction(System::TObject* Target, int Data);
	
__published:
	__property AllowBatchUndo = {default=1};
	__property AutoCheck = {default=0};
	__property CommandUpdater;
	__property Caption = {default=0};
	__property Checked = {default=0};
	__property Enabled = {default=1};
	__property GroupIndex = {default=0};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=0};
	__property Hint = {default=0};
	__property ImageIndex = {default=-1};
	__property OnChange;
	__property OnExecute;
	__property OnHint;
	__property OnUpdate;
	__property SecondaryShortCuts;
	__property ShortCut = {default=0};
	__property UpdateChecked = {default=0};
	__property Visible = {default=1};
public:
	/* TWebBrowserUndoAction.Create */ inline __fastcall virtual TWebBrowserTableInsertCell(System::Classes::TComponent* AOwner) : TWebBrowserTableCellAction(AOwner) { }
	
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserTableInsertCell() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserTableColumnAction : public TWebBrowserTableCellAction
{
	typedef TWebBrowserTableCellAction inherited;
	
private:
	Mshtml::_di_IHTMLTableRow FActiveRow;
	
protected:
	__property Mshtml::_di_IHTMLTableRow ActiveRow = {read=FActiveRow};
	
public:
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
public:
	/* TWebBrowserUndoAction.Create */ inline __fastcall virtual TWebBrowserTableColumnAction(System::Classes::TComponent* AOwner) : TWebBrowserTableCellAction(AOwner) { }
	
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserTableColumnAction() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserTableInsertColumn : public TWebBrowserTableColumnAction
{
	typedef TWebBrowserTableColumnAction inherited;
	
private:
	bool FInsertToLeft;
	
protected:
	virtual void __fastcall DoAction(System::TObject* Target, int Data);
	
__published:
	__property AllowBatchUndo = {default=1};
	__property AutoCheck = {default=0};
	__property CommandUpdater;
	__property Caption = {default=0};
	__property Checked = {default=0};
	__property Enabled = {default=1};
	__property GroupIndex = {default=0};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=0};
	__property Hint = {default=0};
	__property ImageIndex = {default=-1};
	__property OnChange;
	__property OnExecute;
	__property OnHint;
	__property OnUpdate;
	__property SecondaryShortCuts;
	__property ShortCut = {default=0};
	__property bool InsertToLeft = {read=FInsertToLeft, write=FInsertToLeft, nodefault};
	__property Visible = {default=1};
public:
	/* TWebBrowserUndoAction.Create */ inline __fastcall virtual TWebBrowserTableInsertColumn(System::Classes::TComponent* AOwner) : TWebBrowserTableColumnAction(AOwner) { }
	
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserTableInsertColumn() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserTableDeleteColumn : public TWebBrowserTableColumnAction
{
	typedef TWebBrowserTableColumnAction inherited;
	
protected:
	virtual void __fastcall DoAction(System::TObject* Target, int Data);
	
__published:
	__property AllowBatchUndo = {default=1};
	__property AutoCheck = {default=0};
	__property CommandUpdater;
	__property Caption = {default=0};
	__property Checked = {default=0};
	__property Enabled = {default=1};
	__property GroupIndex = {default=0};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=0};
	__property Hint = {default=0};
	__property ImageIndex = {default=-1};
	__property OnChange;
	__property OnExecute;
	__property OnHint;
	__property OnUpdate;
	__property SecondaryShortCuts;
	__property ShortCut = {default=0};
	__property Visible = {default=1};
public:
	/* TWebBrowserUndoAction.Create */ inline __fastcall virtual TWebBrowserTableDeleteColumn(System::Classes::TComponent* AOwner) : TWebBrowserTableColumnAction(AOwner) { }
	
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserTableDeleteColumn() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserControlSelection : public TCustomWebBrowserAction
{
	typedef TCustomWebBrowserAction inherited;
	
private:
	Mshtml::_di_IHTMLControlRange FControlRange;
	bool FAllowBatchUndo;
	int FMaxSelCount;
	int FMinSelCount;
	Mshtml::_di_IHTMLControlRange FRange;
	bool FIgnoreLockedControls;
	
protected:
	virtual void __fastcall BeforeAction();
	virtual void __fastcall DoAction(int Index, Mshtml::_di_IHTMLElement Element) = 0 ;
	virtual void __fastcall AfterAction();
	virtual bool __fastcall GetEnabled();
	__property Mshtml::_di_IHTMLControlRange ControlRange = {read=FControlRange};
	
public:
	__fastcall virtual TWebBrowserControlSelection(System::Classes::TComponent* AOwner);
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	virtual void __fastcall UpdateTarget(System::TObject* Target);
	__property bool AllowBatchUndo = {read=FAllowBatchUndo, write=FAllowBatchUndo, default=1};
	__property int MinSelCount = {read=FMinSelCount, write=FMinSelCount, nodefault};
	__property int MaxSelCount = {read=FMaxSelCount, write=FMaxSelCount, nodefault};
	__property bool IgnoreLockedControls = {read=FIgnoreLockedControls, write=FIgnoreLockedControls, nodefault};
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserControlSelection() { }
	
};


typedef void __fastcall (__closure *TGetNextZIndexEvent)(System::TObject* Sender, int &NextZIndex);

typedef void __fastcall (__closure *TGetPrevZIndexEvent)(System::TObject* Sender, int &PrevZIndex);

class PASCALIMPLEMENTATION TWebBrowserAbsolutionPositionAction : public TWebBrowserControlSelection
{
	typedef TWebBrowserControlSelection inherited;
	
protected:
	virtual bool __fastcall GetEnabled();
public:
	/* TWebBrowserControlSelection.Create */ inline __fastcall virtual TWebBrowserAbsolutionPositionAction(System::Classes::TComponent* AOwner) : TWebBrowserControlSelection(AOwner) { }
	
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserAbsolutionPositionAction() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserBringToFront : public TWebBrowserAbsolutionPositionAction
{
	typedef TWebBrowserAbsolutionPositionAction inherited;
	
private:
	TGetNextZIndexEvent FOnGetNextZIndex;
	
protected:
	virtual void __fastcall DoAction(int Index, Mshtml::_di_IHTMLElement Element);
	
__published:
	__property CommandUpdater;
	__property Caption = {default=0};
	__property Enabled = {default=1};
	__property GroupIndex = {default=0};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=0};
	__property Hint = {default=0};
	__property ImageIndex = {default=-1};
	__property OnChange;
	__property OnExecute;
	__property OnHint;
	__property OnUpdate;
	__property TGetNextZIndexEvent OnGetNextZIndex = {read=FOnGetNextZIndex, write=FOnGetNextZIndex};
	__property SecondaryShortCuts;
	__property ShortCut = {default=0};
	__property Visible = {default=1};
public:
	/* TWebBrowserControlSelection.Create */ inline __fastcall virtual TWebBrowserBringToFront(System::Classes::TComponent* AOwner) : TWebBrowserAbsolutionPositionAction(AOwner) { }
	
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserBringToFront() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserSendToBack : public TWebBrowserAbsolutionPositionAction
{
	typedef TWebBrowserAbsolutionPositionAction inherited;
	
private:
	TGetPrevZIndexEvent FOnGetPrevZIndex;
	
protected:
	virtual void __fastcall DoAction(int Index, Mshtml::_di_IHTMLElement Element);
	
__published:
	__property CommandUpdater;
	__property Caption = {default=0};
	__property Enabled = {default=1};
	__property GroupIndex = {default=0};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=0};
	__property Hint = {default=0};
	__property ImageIndex = {default=-1};
	__property OnChange;
	__property OnExecute;
	__property OnHint;
	__property OnUpdate;
	__property SecondaryShortCuts;
	__property ShortCut = {default=0};
	__property Visible = {default=1};
	__property TGetPrevZIndexEvent OnGetPrevZIndex = {read=FOnGetPrevZIndex, write=FOnGetPrevZIndex};
public:
	/* TWebBrowserControlSelection.Create */ inline __fastcall virtual TWebBrowserSendToBack(System::Classes::TComponent* AOwner) : TWebBrowserAbsolutionPositionAction(AOwner) { }
	
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserSendToBack() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserAlignControls : public TWebBrowserControlSelection
{
	typedef TWebBrowserControlSelection inherited;
	
private:
	Mshtml::_di_IHTMLElement FPrimaryElement;
	
protected:
	virtual void __fastcall BeforeAction();
	__property Mshtml::_di_IHTMLElement PrimaryElement = {read=FPrimaryElement};
	
public:
	__fastcall virtual TWebBrowserAlignControls(System::Classes::TComponent* AOwner);
	
__published:
	__property CommandUpdater;
	__property Caption = {default=0};
	__property Enabled = {default=1};
	__property GroupIndex = {default=0};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=0};
	__property Hint = {default=0};
	__property ImageIndex = {default=-1};
	__property OnChange;
	__property OnExecute;
	__property OnHint;
	__property OnUpdate;
	__property SecondaryShortCuts;
	__property ShortCut = {default=0};
	__property Visible = {default=1};
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserAlignControls() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserAlignControlsLeft : public TWebBrowserAlignControls
{
	typedef TWebBrowserAlignControls inherited;
	
protected:
	virtual void __fastcall DoAction(int Index, Mshtml::_di_IHTMLElement Element);
public:
	/* TWebBrowserAlignControls.Create */ inline __fastcall virtual TWebBrowserAlignControlsLeft(System::Classes::TComponent* AOwner) : TWebBrowserAlignControls(AOwner) { }
	
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserAlignControlsLeft() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserAlignControlsRight : public TWebBrowserAlignControls
{
	typedef TWebBrowserAlignControls inherited;
	
protected:
	virtual void __fastcall DoAction(int Index, Mshtml::_di_IHTMLElement Element);
public:
	/* TWebBrowserAlignControls.Create */ inline __fastcall virtual TWebBrowserAlignControlsRight(System::Classes::TComponent* AOwner) : TWebBrowserAlignControls(AOwner) { }
	
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserAlignControlsRight() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserAlignControlsTop : public TWebBrowserAlignControls
{
	typedef TWebBrowserAlignControls inherited;
	
protected:
	virtual void __fastcall DoAction(int Index, Mshtml::_di_IHTMLElement Element);
public:
	/* TWebBrowserAlignControls.Create */ inline __fastcall virtual TWebBrowserAlignControlsTop(System::Classes::TComponent* AOwner) : TWebBrowserAlignControls(AOwner) { }
	
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserAlignControlsTop() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserAlignControlsBottom : public TWebBrowserAlignControls
{
	typedef TWebBrowserAlignControls inherited;
	
protected:
	virtual void __fastcall DoAction(int Index, Mshtml::_di_IHTMLElement Element);
public:
	/* TWebBrowserAlignControls.Create */ inline __fastcall virtual TWebBrowserAlignControlsBottom(System::Classes::TComponent* AOwner) : TWebBrowserAlignControls(AOwner) { }
	
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserAlignControlsBottom() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserAlignVerticalCenters : public TWebBrowserAlignControls
{
	typedef TWebBrowserAlignControls inherited;
	
protected:
	virtual void __fastcall DoAction(int Index, Mshtml::_di_IHTMLElement Element);
public:
	/* TWebBrowserAlignControls.Create */ inline __fastcall virtual TWebBrowserAlignVerticalCenters(System::Classes::TComponent* AOwner) : TWebBrowserAlignControls(AOwner) { }
	
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserAlignVerticalCenters() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserAlignHorizontalCenters : public TWebBrowserAlignControls
{
	typedef TWebBrowserAlignControls inherited;
	
protected:
	virtual void __fastcall DoAction(int Index, Mshtml::_di_IHTMLElement Element);
public:
	/* TWebBrowserAlignControls.Create */ inline __fastcall virtual TWebBrowserAlignHorizontalCenters(System::Classes::TComponent* AOwner) : TWebBrowserAlignControls(AOwner) { }
	
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserAlignHorizontalCenters() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserControlSize : public TWebBrowserAlignControls
{
	typedef TWebBrowserAlignControls inherited;
	
__published:
	__property CommandUpdater;
	__property Caption = {default=0};
	__property Enabled = {default=1};
	__property GroupIndex = {default=0};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=0};
	__property Hint = {default=0};
	__property ImageIndex = {default=-1};
	__property OnChange;
	__property OnExecute;
	__property OnHint;
	__property OnUpdate;
	__property SecondaryShortCuts;
	__property ShortCut = {default=0};
	__property Visible = {default=1};
public:
	/* TWebBrowserAlignControls.Create */ inline __fastcall virtual TWebBrowserControlSize(System::Classes::TComponent* AOwner) : TWebBrowserAlignControls(AOwner) { }
	
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserControlSize() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserMakeSameWidth : public TWebBrowserControlSize
{
	typedef TWebBrowserControlSize inherited;
	
protected:
	virtual void __fastcall DoAction(int Index, Mshtml::_di_IHTMLElement Element);
public:
	/* TWebBrowserAlignControls.Create */ inline __fastcall virtual TWebBrowserMakeSameWidth(System::Classes::TComponent* AOwner) : TWebBrowserControlSize(AOwner) { }
	
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserMakeSameWidth() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserMakeSameHeight : public TWebBrowserControlSize
{
	typedef TWebBrowserControlSize inherited;
	
protected:
	virtual void __fastcall DoAction(int Index, Mshtml::_di_IHTMLElement Element);
public:
	/* TWebBrowserAlignControls.Create */ inline __fastcall virtual TWebBrowserMakeSameHeight(System::Classes::TComponent* AOwner) : TWebBrowserControlSize(AOwner) { }
	
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserMakeSameHeight() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserMakeSameSize : public TWebBrowserControlSize
{
	typedef TWebBrowserControlSize inherited;
	
protected:
	virtual void __fastcall DoAction(int Index, Mshtml::_di_IHTMLElement Element);
public:
	/* TWebBrowserAlignControls.Create */ inline __fastcall virtual TWebBrowserMakeSameSize(System::Classes::TComponent* AOwner) : TWebBrowserControlSize(AOwner) { }
	
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserMakeSameSize() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserDesignTimeLock : public TWebBrowserControlSelection
{
	typedef TWebBrowserControlSelection inherited;
	
protected:
	virtual void __fastcall DoAction(int Index, Mshtml::_di_IHTMLElement Element);
	
public:
	virtual void __fastcall UpdateTarget(System::TObject* Target);
	
__published:
	__property CommandUpdater;
	__property Caption = {default=0};
	__property Enabled = {default=1};
	__property GroupIndex = {default=0};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=0};
	__property Hint = {default=0};
	__property ImageIndex = {default=-1};
	__property OnChange;
	__property OnExecute;
	__property OnHint;
	__property OnUpdate;
	__property SecondaryShortCuts;
	__property ShortCut = {default=0};
	__property Visible = {default=1};
public:
	/* TWebBrowserControlSelection.Create */ inline __fastcall virtual TWebBrowserDesignTimeLock(System::Classes::TComponent* AOwner) : TWebBrowserControlSelection(AOwner) { }
	
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserDesignTimeLock() { }
	
};


typedef void __fastcall (__closure *TElementCreatedEvent)(TWebBrowserInsertTag* Sender, Mshtml::_di_IHTMLElement Element);

class PASCALIMPLEMENTATION TWebBrowserInsertTag : public TWebBrowserAction
{
	typedef TWebBrowserAction inherited;
	
private:
	System::UnicodeString FHTMLTag;
	TElementCreatedEvent FOnElementCreated;
	void __fastcall SetHTMLTag(const System::UnicodeString Value);
	
protected:
	virtual bool __fastcall CanInsert();
	Winapi::Activex::TOleEnum __fastcall GetTagID();
	
public:
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	virtual void __fastcall UpdateTarget(System::TObject* Target);
	
__published:
	__property System::UnicodeString HTMLTag = {read=FHTMLTag, write=SetHTMLTag};
	__property TElementCreatedEvent OnElementCreated = {read=FOnElementCreated, write=FOnElementCreated};
public:
	/* TCustomWebBrowserAction.Create */ inline __fastcall virtual TWebBrowserInsertTag(System::Classes::TComponent* AOwner) : TWebBrowserAction(AOwner) { }
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserInsertTag() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserInsertFormTag : public TWebBrowserInsertTag
{
	typedef TWebBrowserInsertTag inherited;
	
protected:
	virtual bool __fastcall CanInsert();
public:
	/* TCustomWebBrowserAction.Create */ inline __fastcall virtual TWebBrowserInsertFormTag(System::Classes::TComponent* AOwner) : TWebBrowserInsertTag(AOwner) { }
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserInsertFormTag() { }
	
};


class PASCALIMPLEMENTATION TWebBrowserOverwrite : public TWebBrowserAction
{
	typedef TWebBrowserAction inherited;
	
public:
	__fastcall virtual TWebBrowserOverwrite(System::Classes::TComponent* AOwner);
public:
	/* TCustomWebBrowserAction.Destroy */ inline __fastcall virtual ~TWebBrowserOverwrite() { }
	
};


//-- var, const, procedure ---------------------------------------------------
#define sDesignTimeLock L"Design_Time_Lock"
extern DELPHI_PACKAGE void __fastcall ValidateInsertablePosition(Webbrowserex::TWebBrowserEx* WebBrowser, Mshtml::_di_IMarkupPointer StartPos);
extern DELPHI_PACKAGE bool __fastcall CanInsertControlAtCurrentPosition(Webbrowserex::TWebBrowserEx* WebBrowser);
extern DELPHI_PACKAGE void __fastcall ShowElementCreateError(const System::UnicodeString ATagName, const System::UnicodeString AMessage);
}	/* namespace Ieactions */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IEACTIONS)
using namespace Ieactions;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IeactionsHPP
