// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ActnRes.pas' rev: 35.00 (Windows)

#ifndef ActnresHPP
#define ActnresHPP

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
#include <Vcl.ImgList.hpp>
#include <Vcl.StdActns.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.ExtActns.hpp>
#include <System.Actions.hpp>
#include <System.ImageList.hpp>
#include <Vcl.VirtualImageList.hpp>

//-- user supplied -----------------------------------------------------------
#pragma link "dclact.lib"

namespace Actnres
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TStandardActions;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TStandardActions : public System::Classes::TDataModule
{
	typedef System::Classes::TDataModule inherited;
	
__published:
	Vcl::Actnlist::TActionList* ActionList1;
	Vcl::Stdactns::TEditCut* EditCut1;
	Vcl::Stdactns::TEditCopy* EditCopy1;
	Vcl::Stdactns::TEditPaste* EditPaste1;
	Vcl::Stdactns::TWindowArrange* WindowArrange1;
	Vcl::Stdactns::TWindowCascade* WindowCascade1;
	Vcl::Stdactns::TWindowClose* WindowClose1;
	Vcl::Stdactns::TWindowMinimizeAll* WindowMinimizeAll1;
	Vcl::Stdactns::TWindowTileHorizontal* WindowTileHorizontal1;
	Vcl::Stdactns::TWindowTileVertical* WindowTileVertical1;
	Vcl::Virtualimagelist::TVirtualImageList* ImageList1;
	Vcl::Stdactns::TEditDelete* EditDelete1;
	Vcl::Stdactns::TEditSelectAll* EditSelectAll1;
	Vcl::Stdactns::TEditUndo* EditUndo1;
	Vcl::Stdactns::THelpContents* HelpContents1;
	Vcl::Stdactns::THelpOnHelp* HelpOnHelp1;
	Vcl::Stdactns::THelpTopicSearch* HelpTopicSearch1;
	Vcl::Stdactns::TFileExit* FileExit1;
	Vcl::Stdactns::TFileOpen* FileOpen1;
	Vcl::Stdactns::TFilePrintSetup* FilePrintSetup1;
	Vcl::Stdactns::TFileSaveAs* FileSaveAs1;
	Vcl::Extactns::TRichEditBold* RichEditBold1;
	Vcl::Extactns::TRichEditItalic* RichEditItalic1;
	Vcl::Extactns::TRichEditUnderline* RichEditUnderline1;
	Vcl::Stdactns::TSearchFind* SearchFind1;
	Vcl::Stdactns::TSearchFindNext* SearchFindNext1;
	Vcl::Stdactns::TSearchReplace* SearchReplace1;
	Vcl::Extactns::TRichEditAlignCenter* RichEditAlignCenter1;
	Vcl::Extactns::TRichEditAlignLeft* RichEditAlignLeft1;
	Vcl::Extactns::TRichEditAlignRight* RichEditAlignRight1;
	Vcl::Extactns::TRichEditBullets* RichEditBullets1;
	Vcl::Extactns::TRichEditStrikeOut* RichEditStrikeOut1;
	Vcl::Stdactns::TColorSelect* ColorSelect1;
	Vcl::Stdactns::TFontEdit* FontEdit1;
	Vcl::Extactns::TOpenPicture* OpenPicture1;
	Vcl::Extactns::TSavePicture* SavePicture1;
	Vcl::Extactns::TFileRun* FileRun1;
	Vcl::Extactns::TPreviousTab* PreviousTab1;
	Vcl::Extactns::TNextTab* NextTab1;
	Vcl::Stdactns::TSearchFindFirst* SearchFindFirst1;
	Vcl::Stdactns::THelpContextAction* HelpContextAction1;
	Vcl::Extactns::TBrowseURL* BrowseURL1;
	Vcl::Extactns::TDownLoadURL* DownLoadURL1;
	Vcl::Extactns::TListControlCopySelection* ListControlCopySelection1;
	Vcl::Extactns::TListControlDeleteSelection* ListControlDeleteSelection1;
	Vcl::Extactns::TListControlSelectAll* ListControlSelectAll1;
	Vcl::Extactns::TListControlClearSelection* ListControlClearSelection1;
	Vcl::Extactns::TListControlMoveSelection* ListControlMoveSelection1;
	Vcl::Extactns::TSendMail* SendMail1;
	Vcl::Stdactns::TPrintDlg* PrintDlg1;
	Vcl::Stdactns::TFileOpenWith* FileOpenWith1;
	Vcl::Stdactns::TFilePageSetup* FilePageSetup1;
	Vcl::Extactns::TRichEditSpellCheck* RichEditSpellCheck1;
public:
	/* TDataModule.Create */ inline __fastcall virtual TStandardActions(System::Classes::TComponent* AOwner) : System::Classes::TDataModule(AOwner) { }
	/* TDataModule.CreateNew */ inline __fastcall virtual TStandardActions(System::Classes::TComponent* AOwner, int Dummy) : System::Classes::TDataModule(AOwner, Dummy) { }
	/* TDataModule.Destroy */ inline __fastcall virtual ~TStandardActions() { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE TStandardActions* StandardActions;
}	/* namespace Actnres */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ACTNRES)
using namespace Actnres;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// ActnresHPP
