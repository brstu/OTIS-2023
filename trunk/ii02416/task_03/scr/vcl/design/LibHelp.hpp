// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'LibHelp.pas' rev: 35.00 (Windows)

#ifndef LibhelpHPP
#define LibhelpHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>

//-- user supplied -----------------------------------------------------------

namespace Libhelp
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
static const System::Word hcDFontEditor = System::Word(0x61a8);
static const System::Word hcDColorEditor = System::Word(0x61b2);
static const System::Word hcDMediaPlayerOpen = System::Word(0x61bc);
static const System::Word hcRedirectLinkError = System::Word(0x61c6);
static const System::Word hcRedirectLinkDlg = System::Word(0x61c7);
static const System::Word hcDStringListEditor = System::Word(0x6590);
static const System::Word hcDValueListEditor = System::Word(0x6595);
static const System::Word hcDFilterEditor = System::Word(0x659a);
static const System::Word hcDNotebookEditor = System::Word(0x65a4);
static const System::Word hcDPictureEditor = System::Word(0x65ae);
static const System::Word hcDInputMaskEditor = System::Word(0x65b8);
static const System::Word hcDMaskedTextEditor = System::Word(0x65c2);
static const System::Word hcDOpenMaskFile = System::Word(0x65cc);
static const System::Word hcDColumnsEditor = System::Word(0x65d6);
static const System::Word hcDTableIndexEditor = System::Word(0x65e0);
static const System::Word hcDTreeViewItemEdit = System::Word(0x65ea);
static const System::Word hcDListViewItemEdit = System::Word(0x65f4);
static const System::Word hcDListViewColEdit = System::Word(0x65fe);
static const System::Word hcDHeaderSectionEdit = System::Word(0x6608);
static const System::Word hcDStatusBarEdit = System::Word(0x6612);
static const System::Word hcDImageListEditor = System::Word(0x661c);
static const System::Word hcDCollectionEditor = System::Word(0x6626);
static const System::Word hcDResponseEditor = System::Word(0x6630);
static const System::Word hcDActionListEditor = System::Word(0x663a);
static const System::Word hcDNewStdAction = System::Word(0x663b);
static const System::Word hcDIconViewItemEdit = System::Word(0x663c);
static const System::Word hcmCollectionAdd = System::Word(0x6659);
static const System::Word hcmCollectionDelete = System::Word(0x665a);
static const System::Word hcmCollectionMoveUp = System::Word(0x665b);
static const System::Word hcmCollectionMoveDown = System::Word(0x665c);
static const System::Word hcmCollectionSelectAll = System::Word(0x665d);
static const System::Word hcmCollectionShowButtons = System::Word(0x665e);
static const System::Word hcmDBGridColnAddAllFields = System::Word(0x666d);
static const System::Word hcmDBGridColnRestoreDefaults = System::Word(0x666e);
static const System::Word hcDLoadPicture = System::Word(0x6978);
static const System::Word hcDSavePicture = System::Word(0x6982);
static const System::Word hcDAddNoteBookPage = System::Word(0x698c);
static const System::Word hcDEditNotebookPage = System::Word(0x6996);
static const System::Word hcDStringListLoad = System::Word(0x69a0);
static const System::Word hcDStringListSave = System::Word(0x69aa);
static const System::Word hcDDDEInfo = System::Word(0x69b4);
static const System::Word hcOlePasteSpecial = System::Word(0x69be);
static const System::Word hcOleInsertObject = System::Word(0x69c8);
static const System::Word hcOleConvert = System::Word(0x69d2);
static const System::Word hcDDataBaseEdit = System::Word(0x69dc);
static const System::Word hcDDataSetAdd = System::Word(0x69e6);
static const System::Word hcDStoredProcedure = System::Word(0x69f0);
static const System::Word hcDDefineField = System::Word(0x69fa);
static const System::Word hcDFieldLinksDesign = System::Word(0x6a04);
static const System::Word hcDDefineParameter = System::Word(0x6a0e);
static const System::Word hcDQuery = System::Word(0x6a18);
static const System::Word hcDLoadMenuResource = System::Word(0x6a22);
static const System::Word hcDSelectReportDir = System::Word(0x6a2c);
static const System::Word hcDVCSGetFileDir = System::Word(0x6a36);
static const System::Word hcDVCSGetDir = System::Word(0x6a3b);
static const System::Word hcDVCSPutSelDir = System::Word(0x6a40);
static const System::Word hcDFormExpert = System::Word(0x6a4a);
static const System::Word hcDUpdateSQL = System::Word(0x6a54);
static const System::Word hcDSaveAttributesAs = System::Word(0x6a5e);
static const System::Word hcDAssociateAttributes = System::Word(0x6a68);
static const System::Word hcDAssignClientData = System::Word(0x6a72);
static const System::Word hcDAXDataBindings = System::Word(0x6a7c);
static const System::Word hcDADOConnEdit = System::Word(0x6a86);
static const System::Word hcDADOSQLEdit = System::Word(0x6a87);
static const System::Word hcGestureDesigner = System::Word(0x6a90);
static const System::Word hcGestureManagerEdit = System::Word(0x6a91);
static const System::Word hcGestureSelector = System::Word(0x6a92);
static const System::Word hcDIBUpdateSQL = System::Word(0x6b6c);
static const System::Word hcDIBDatabaseEdit = System::Word(0x6b76);
static const System::Word hcDIBTransactionEdit = System::Word(0x6b80);
static const System::Word hcDIBConnectionBrokerEdit = System::Word(0x6b8a);
static const System::Word hcDataSetDesigner = System::Word(0x6d60);
static const System::Word hcMDynamicItem = System::Word(0x6f54);
static const System::Word hcMDatabase = System::Word(0x6fb8);
static const System::Word hcMDatabaseExplore = System::Word(0x6fb9);
static const System::Word hcMDatabaseSQLMon = System::Word(0x6fba);
static const System::Word hcMDatabaseFormExpt = System::Word(0x6fbb);
static const System::Word hcFAlignToGrid = System::Word(0x7530);
static const System::Word hcFBringToFront = System::Word(0x7531);
static const System::Word hcFSendToBack = System::Word(0x7532);
static const System::Word hcFAlign = System::Word(0x7533);
static const System::Word hcFSize = System::Word(0x7534);
static const System::Word hcFScale = System::Word(0x7535);
static const System::Word hcFTabOrder = System::Word(0x7536);
static const System::Word hcFSaveAsTemplate = System::Word(0x7537);
static const System::Word hcFCreateOrder = System::Word(0x7538);
static const System::Word hcFViewAsText = System::Word(0x7539);
static const System::Word hcFRevert = System::Word(0x753a);
static const System::Word hcFFlipChildren = System::Word(0x753b);
static const System::Word hcFFlipChildrenAll = System::Word(0x753c);
static const System::Word hcFFlipChildrenSelected = System::Word(0x753d);
static const System::Word hcFTextDFM = System::Word(0x753e);
static const System::Word hcFConvertToMetro = System::Word(0x753f);
static const System::Word hcFShowNonVisualComponents = System::Word(0x7540);
static const System::Word hcMMenuDesignerPopup = System::Word(0x7594);
static const System::Word hcMFormDesignerPopup = System::Word(0x759e);
static const System::Word hcMFieldsEditorPopup = System::Word(0x75b2);
static const System::Word hcMFEPAddFieldsItem = System::Word(0x75b3);
static const System::Word hcMFEPNewFieldItem = System::Word(0x75b4);
static const System::Word hcMFEPCut = System::Word(0x75b5);
static const System::Word hcMFEPCopy = System::Word(0x75b6);
static const System::Word hcMFEPPaste = System::Word(0x75b7);
static const System::Word hcMFEPDelete = System::Word(0x75b8);
static const System::Word hcMFEPSelectAll = System::Word(0x75b9);
static const System::Word hcMFEPRetrieveAttribs = System::Word(0x75ba);
static const System::Word hcMFEPSaveAttributes = System::Word(0x75bb);
static const System::Word hcMFEPSaveAttrAs = System::Word(0x75bc);
static const System::Word hcMFEPAssociateAttr = System::Word(0x75bd);
static const System::Word hcMFEPUnAssociateAttr = System::Word(0x75be);
static const System::Word hcDHTMLFileOpen = System::Word(0x75c6);
static const System::Word hcDWebPage = System::Word(0x75c7);
static const System::Word hcDAddWebComp = System::Word(0x75c8);
static const System::Word hcDAddFieldCtrls = System::Word(0x75c9);
static const System::Word hcMWebPageEditor = System::Word(0x75ca);
static const System::Word hcMHTMLPage = System::Word(0x75cb);
static const System::Word hcMWebPageEditorLabels = System::Word(0x75cc);
static const System::Word hcDStylesFileOpen = System::Word(0x75cd);
static const System::Word hcDNewWebServerWiz = System::Word(0x75ce);
static const System::Word hcDDecisionCubeEditor = System::Word(0x75da);
static const System::Word hcDDecisionCubeDimensions = System::Word(0x75db);
static const System::Word hcDDecisionCubeMemoryControl = System::Word(0x75dc);
static const System::Word hcDDecisionCubeDesignerOptions = System::Word(0x75dd);
static const System::Word hcDDecisionCubeLimits = System::Word(0x75de);
static const System::Word hcDDecisionQueryEditor = System::Word(0x75e4);
static const System::Word hcDDecisionQueryDimensions = System::Word(0x75e5);
static const System::Word hcDDecisionQuerySQLEditor = System::Word(0x75e6);
static const System::Word hcDVCSManageVersionLabels = System::Word(0xc738);
static const System::Word hcDVCSGet = System::Word(0xc742);
static const System::Word hcDVCSGetFile = System::Word(0xc74c);
static const System::Word hcDVCSArchiveManager = System::Word(0xc756);
static const System::Word hcDVCSCreateArchive = System::Word(0xc760);
static const System::Word hcDVCSOptions = System::Word(0xc76a);
static const System::Word hcDVCSPut = System::Word(0xc774);
static const System::Word hcDVCSPutDir = System::Word(0xc77e);
static const System::Word hcDVCSLockArchives = System::Word(0xc788);
static const System::Word hcDVCSUnlockArchives = System::Word(0xc792);
}	/* namespace Libhelp */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_LIBHELP)
using namespace Libhelp;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// LibhelpHPP
