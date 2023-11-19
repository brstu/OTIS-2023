// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.ExtActns.pas' rev: 35.00 (Windows)

#ifndef Vcl_ExtactnsHPP
#define Vcl_ExtactnsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.UrlMon.hpp>
#include <Winapi.ActiveX.hpp>
#include <System.SysUtils.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Graphics.hpp>
#include <System.Win.Registry.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.StdActns.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Winapi.ShellAPI.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.ExtDlgs.hpp>
#include <Vcl.ImgList.hpp>
#include <Winapi.Mapi.hpp>
#include <System.Actions.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Extactns
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TCustomFileRun;
class DELPHICLASS TFileRun;
class DELPHICLASS TRichEditAction;
class DELPHICLASS TRichEditBold;
class DELPHICLASS TRichEditItalic;
class DELPHICLASS TRichEditUnderline;
class DELPHICLASS TRichEditStrikeOut;
class DELPHICLASS TRichEditBullets;
class DELPHICLASS TRichEditAlignLeft;
class DELPHICLASS TRichEditAlignRight;
class DELPHICLASS TRichEditAlignCenter;
class DELPHICLASS TTabAction;
class DELPHICLASS TPreviousTab;
class DELPHICLASS TNextTab;
class DELPHICLASS TOpenPicture;
class DELPHICLASS TSavePicture;
class DELPHICLASS TURLAction;
class DELPHICLASS TBrowseURL;
class DELPHICLASS TDownLoadURL;
class DELPHICLASS TRecipientItem;
class DELPHICLASS TRecipientCollection;
class DELPHICLASS TSendMail;
class DELPHICLASS TListControlAction;
class DELPHICLASS TListControlSelectAll;
class DELPHICLASS TListControlClearSelection;
class DELPHICLASS TListControlDeleteSelection;
class DELPHICLASS TListControlCopySelection;
class DELPHICLASS TListControlMoveSelection;
class DELPHICLASS TRichEditSpellCheck;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TShowCmd : unsigned char { scHide, scMaximize, scMinimize, scRestore, scShow, scShowDefault, scShowMaximized, scShowMinimized, scShowMinNoActive, scShowNA, scShowNoActivate, scShowNormal };

class PASCALIMPLEMENTATION TCustomFileRun : public Vcl::Actnlist::TCustomAction
{
	typedef Vcl::Actnlist::TCustomAction inherited;
	
private:
	bool FBrowse;
	System::Sysutils::TFileName FDirectory;
	System::Sysutils::TFileName FFile;
	NativeUInt FHInst;
	NativeUInt FParentHWnd;
	System::UnicodeString FParameters;
	System::UnicodeString FOperation;
	TShowCmd FShowCmd;
	Vcl::Dialogs::TOpenDialog* FBrowseDlg;
	Vcl::Controls::TWinControl* FParentControl;
	System::Sysutils::TFileName __fastcall GetDirectory();
	System::Sysutils::TFileName __fastcall GetFileName();
	void __fastcall SetBrowseDlg(Vcl::Dialogs::TOpenDialog* const Value);
	void __fastcall SetDirectory(System::Sysutils::TFileName Value);
	void __fastcall SetFileName(System::Sysutils::TFileName Value);
	void __fastcall SetParentControl(Vcl::Controls::TWinControl* const Value);
	
protected:
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	
public:
	__fastcall virtual TCustomFileRun(System::Classes::TComponent* AOwner);
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	virtual bool __fastcall HandlesTarget(System::TObject* Target);
	void __fastcall SetupBrowseDialog();
#ifndef _WIN64
	__property NativeUInt HInst = {read=FHInst, nodefault};
#else /* _WIN64 */
	__property NativeUInt HInst = {read=FHInst};
#endif /* _WIN64 */
	virtual void __fastcall UpdateTarget(System::TObject* Target);
	__property bool Browse = {read=FBrowse, write=FBrowse, nodefault};
	__property Vcl::Dialogs::TOpenDialog* BrowseDlg = {read=FBrowseDlg, write=SetBrowseDlg};
	__property System::Sysutils::TFileName Directory = {read=GetDirectory, write=SetDirectory};
	__property System::Sysutils::TFileName FileName = {read=GetFileName, write=SetFileName};
	__property System::UnicodeString Operation = {read=FOperation, write=FOperation};
	__property Vcl::Controls::TWinControl* ParentControl = {read=FParentControl, write=SetParentControl};
	__property System::UnicodeString Parameters = {read=FParameters, write=FParameters};
	__property TShowCmd ShowCmd = {read=FShowCmd, write=FShowCmd, nodefault};
public:
	/* TCustomAction.Destroy */ inline __fastcall virtual ~TCustomFileRun() { }
	
};


class PASCALIMPLEMENTATION TFileRun : public TCustomFileRun
{
	typedef TCustomFileRun inherited;
	
__published:
	__property Browse;
	__property BrowseDlg;
	__property Caption = {default=0};
	__property Directory = {default=0};
	__property Enabled = {default=1};
	__property FileName = {default=0};
	__property HelpContext = {default=0};
	__property Hint = {default=0};
	__property ImageIndex = {default=-1};
	__property ImageName = {default=0};
	__property Operation = {default=0};
	__property ParentControl;
	__property Parameters = {default=0};
	__property ShowCmd;
	__property ShortCut = {default=0};
	__property SecondaryShortCuts;
	__property Visible = {default=1};
	__property OnUpdate;
	__property OnHint;
public:
	/* TCustomFileRun.Create */ inline __fastcall virtual TFileRun(System::Classes::TComponent* AOwner) : TCustomFileRun(AOwner) { }
	
public:
	/* TCustomAction.Destroy */ inline __fastcall virtual ~TFileRun() { }
	
};


class PASCALIMPLEMENTATION TRichEditAction : public Vcl::Stdactns::TEditAction
{
	typedef Vcl::Stdactns::TEditAction inherited;
	
protected:
	Vcl::Comctrls::TTextAttributes* __fastcall CurrText(Vcl::Comctrls::TCustomRichEdit* Edit);
	void __fastcall SetFontStyle(Vcl::Comctrls::TCustomRichEdit* Edit, System::Uitypes::TFontStyle Style);
	
public:
	__fastcall virtual TRichEditAction(System::Classes::TComponent* AOwner);
	virtual bool __fastcall HandlesTarget(System::TObject* Target);
public:
	/* TEditAction.Destroy */ inline __fastcall virtual ~TRichEditAction() { }
	
};


class PASCALIMPLEMENTATION TRichEditBold : public TRichEditAction
{
	typedef TRichEditAction inherited;
	
public:
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	virtual void __fastcall UpdateTarget(System::TObject* Target);
public:
	/* TRichEditAction.Create */ inline __fastcall virtual TRichEditBold(System::Classes::TComponent* AOwner) : TRichEditAction(AOwner) { }
	
public:
	/* TEditAction.Destroy */ inline __fastcall virtual ~TRichEditBold() { }
	
};


class PASCALIMPLEMENTATION TRichEditItalic : public TRichEditAction
{
	typedef TRichEditAction inherited;
	
public:
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	virtual void __fastcall UpdateTarget(System::TObject* Target);
public:
	/* TRichEditAction.Create */ inline __fastcall virtual TRichEditItalic(System::Classes::TComponent* AOwner) : TRichEditAction(AOwner) { }
	
public:
	/* TEditAction.Destroy */ inline __fastcall virtual ~TRichEditItalic() { }
	
};


class PASCALIMPLEMENTATION TRichEditUnderline : public TRichEditAction
{
	typedef TRichEditAction inherited;
	
public:
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	virtual void __fastcall UpdateTarget(System::TObject* Target);
public:
	/* TRichEditAction.Create */ inline __fastcall virtual TRichEditUnderline(System::Classes::TComponent* AOwner) : TRichEditAction(AOwner) { }
	
public:
	/* TEditAction.Destroy */ inline __fastcall virtual ~TRichEditUnderline() { }
	
};


class PASCALIMPLEMENTATION TRichEditStrikeOut : public TRichEditAction
{
	typedef TRichEditAction inherited;
	
public:
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	virtual void __fastcall UpdateTarget(System::TObject* Target);
public:
	/* TRichEditAction.Create */ inline __fastcall virtual TRichEditStrikeOut(System::Classes::TComponent* AOwner) : TRichEditAction(AOwner) { }
	
public:
	/* TEditAction.Destroy */ inline __fastcall virtual ~TRichEditStrikeOut() { }
	
};


class PASCALIMPLEMENTATION TRichEditBullets : public TRichEditAction
{
	typedef TRichEditAction inherited;
	
public:
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	virtual void __fastcall UpdateTarget(System::TObject* Target);
public:
	/* TRichEditAction.Create */ inline __fastcall virtual TRichEditBullets(System::Classes::TComponent* AOwner) : TRichEditAction(AOwner) { }
	
public:
	/* TEditAction.Destroy */ inline __fastcall virtual ~TRichEditBullets() { }
	
};


class PASCALIMPLEMENTATION TRichEditAlignLeft : public TRichEditAction
{
	typedef TRichEditAction inherited;
	
public:
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	virtual void __fastcall UpdateTarget(System::TObject* Target);
public:
	/* TRichEditAction.Create */ inline __fastcall virtual TRichEditAlignLeft(System::Classes::TComponent* AOwner) : TRichEditAction(AOwner) { }
	
public:
	/* TEditAction.Destroy */ inline __fastcall virtual ~TRichEditAlignLeft() { }
	
};


class PASCALIMPLEMENTATION TRichEditAlignRight : public TRichEditAction
{
	typedef TRichEditAction inherited;
	
public:
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	virtual void __fastcall UpdateTarget(System::TObject* Target);
public:
	/* TRichEditAction.Create */ inline __fastcall virtual TRichEditAlignRight(System::Classes::TComponent* AOwner) : TRichEditAction(AOwner) { }
	
public:
	/* TEditAction.Destroy */ inline __fastcall virtual ~TRichEditAlignRight() { }
	
};


class PASCALIMPLEMENTATION TRichEditAlignCenter : public TRichEditAction
{
	typedef TRichEditAction inherited;
	
public:
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	virtual void __fastcall UpdateTarget(System::TObject* Target);
public:
	/* TRichEditAction.Create */ inline __fastcall virtual TRichEditAlignCenter(System::Classes::TComponent* AOwner) : TRichEditAction(AOwner) { }
	
public:
	/* TEditAction.Destroy */ inline __fastcall virtual ~TRichEditAlignCenter() { }
	
};


typedef void __fastcall (__closure *TValidateTabEvent)(TTabAction* Sender, Vcl::Comctrls::TCustomTabControl* TabControl, bool &Enabled);

class PASCALIMPLEMENTATION TTabAction : public Vcl::Actnlist::TCustomAction
{
	typedef Vcl::Actnlist::TCustomAction inherited;
	
private:
	System::Classes::TNotifyEvent FAfterTabChange;
	System::Classes::TNotifyEvent FBeforeTabChange;
	bool FEnabled;
	TValidateTabEvent FOnValidateTab;
	bool FSkipHiddenTabs;
	Vcl::Comctrls::TCustomTabControl* FTabControl;
	bool FWrap;
	
protected:
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	void __fastcall SelectNextTab(bool GoForward = true);
	
public:
	__fastcall virtual TTabAction(System::Classes::TComponent* AOwner);
	virtual bool __fastcall HandlesTarget(System::TObject* Target);
	virtual void __fastcall UpdateTarget(System::TObject* Target);
	__property bool SkipHiddenTabs = {read=FSkipHiddenTabs, write=FSkipHiddenTabs, default=1};
	__property Vcl::Comctrls::TCustomTabControl* TabControl = {read=FTabControl, write=FTabControl};
	__property bool Wrap = {read=FWrap, write=FWrap, default=0};
	__property System::Classes::TNotifyEvent BeforeTabChange = {read=FBeforeTabChange, write=FBeforeTabChange};
	__property System::Classes::TNotifyEvent AfterTabChange = {read=FAfterTabChange, write=FAfterTabChange};
	__property TValidateTabEvent OnValidateTab = {read=FOnValidateTab, write=FOnValidateTab};
public:
	/* TCustomAction.Destroy */ inline __fastcall virtual ~TTabAction() { }
	
};


class PASCALIMPLEMENTATION TPreviousTab : public TTabAction
{
	typedef TTabAction inherited;
	
public:
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	virtual void __fastcall UpdateTarget(System::TObject* Target);
	
__published:
	__property TabControl;
	__property Caption = {default=0};
	__property Enabled = {default=1};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=0};
	__property Hint = {default=0};
	__property ImageIndex = {default=-1};
	__property ImageName = {default=0};
	__property ShortCut = {default=0};
	__property SkipHiddenTabs = {default=1};
	__property Visible = {default=1};
	__property Wrap = {default=0};
	__property AfterTabChange;
	__property BeforeTabChange;
	__property OnHint;
	__property OnUpdate;
	__property OnValidateTab;
public:
	/* TTabAction.Create */ inline __fastcall virtual TPreviousTab(System::Classes::TComponent* AOwner) : TTabAction(AOwner) { }
	
public:
	/* TCustomAction.Destroy */ inline __fastcall virtual ~TPreviousTab() { }
	
};


class PASCALIMPLEMENTATION TNextTab : public TTabAction
{
	typedef TTabAction inherited;
	
private:
	System::UnicodeString FOldCaption;
	System::UnicodeString FLastTabCaption;
	System::Classes::TNotifyEvent FOnFinish;
	
public:
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	virtual void __fastcall UpdateTarget(System::TObject* Target);
	
__published:
	__property System::UnicodeString LastTabCaption = {read=FLastTabCaption, write=FLastTabCaption};
	__property TabControl;
	__property Caption = {default=0};
	__property Enabled = {default=1};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=0};
	__property Hint = {default=0};
	__property ImageIndex = {default=-1};
	__property ImageName = {default=0};
	__property ShortCut = {default=0};
	__property SkipHiddenTabs = {default=1};
	__property Visible = {default=1};
	__property Wrap = {default=0};
	__property AfterTabChange;
	__property BeforeTabChange;
	__property System::Classes::TNotifyEvent OnFinish = {read=FOnFinish, write=FOnFinish};
	__property OnHint;
	__property OnUpdate;
	__property OnValidateTab;
public:
	/* TTabAction.Create */ inline __fastcall virtual TNextTab(System::Classes::TComponent* AOwner) : TTabAction(AOwner) { }
	
public:
	/* TCustomAction.Destroy */ inline __fastcall virtual ~TNextTab() { }
	
};


class PASCALIMPLEMENTATION TOpenPicture : public Vcl::Stdactns::TCommonDialogAction
{
	typedef Vcl::Stdactns::TCommonDialogAction inherited;
	
private:
	Vcl::Extdlgs::TOpenPictureDialog* __fastcall GetDialog();
	
protected:
	virtual Vcl::Stdactns::TCommonDialogClass __fastcall GetDialogClass();
	
__published:
	__property Vcl::Extdlgs::TOpenPictureDialog* Dialog = {read=GetDialog};
	__property Caption = {default=0};
	__property Enabled = {default=1};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=0};
	__property Hint = {default=0};
	__property ImageIndex = {default=-1};
	__property ImageName = {default=0};
	__property ShortCut = {default=0};
	__property SecondaryShortCuts;
	__property Visible = {default=1};
	__property OnHint;
	__property OnUpdate;
	__property OnAccept;
	__property OnCancel;
public:
	/* TCommonDialogAction.Create */ inline __fastcall virtual TOpenPicture(System::Classes::TComponent* AOwner) : Vcl::Stdactns::TCommonDialogAction(AOwner) { }
	/* TCommonDialogAction.Destroy */ inline __fastcall virtual ~TOpenPicture() { }
	
};


class PASCALIMPLEMENTATION TSavePicture : public Vcl::Stdactns::TCommonDialogAction
{
	typedef Vcl::Stdactns::TCommonDialogAction inherited;
	
private:
	Vcl::Extdlgs::TSavePictureDialog* __fastcall GetDialog();
	
protected:
	virtual Vcl::Stdactns::TCommonDialogClass __fastcall GetDialogClass();
	
__published:
	__property Vcl::Extdlgs::TSavePictureDialog* Dialog = {read=GetDialog};
	__property Caption = {default=0};
	__property Enabled = {default=1};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=0};
	__property Hint = {default=0};
	__property ImageIndex = {default=-1};
	__property ImageName = {default=0};
	__property ShortCut = {default=0};
	__property SecondaryShortCuts;
	__property Visible = {default=1};
	__property OnHint;
	__property OnUpdate;
	__property OnAccept;
	__property OnCancel;
public:
	/* TCommonDialogAction.Create */ inline __fastcall virtual TSavePicture(System::Classes::TComponent* AOwner) : Vcl::Stdactns::TCommonDialogAction(AOwner) { }
	/* TCommonDialogAction.Destroy */ inline __fastcall virtual ~TSavePicture() { }
	
};


class PASCALIMPLEMENTATION TURLAction : public Vcl::Actnlist::TCustomAction
{
	typedef Vcl::Actnlist::TCustomAction inherited;
	
private:
	System::UnicodeString FURL;
	System::UnicodeString __fastcall GetURL();
	void __fastcall SetURL(System::UnicodeString Value);
	
public:
	virtual bool __fastcall HandlesTarget(System::TObject* Target);
	virtual void __fastcall UpdateTarget(System::TObject* Target);
	
__published:
	__property Caption = {default=0};
	__property Enabled = {default=1};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=0};
	__property Hint = {default=0};
	__property ImageIndex = {default=-1};
	__property ImageName = {default=0};
	__property ShortCut = {default=0};
	__property SecondaryShortCuts;
	__property Visible = {default=1};
	__property System::UnicodeString URL = {read=GetURL, write=SetURL};
	__property OnHint;
	__property OnUpdate;
public:
	/* TCustomAction.Create */ inline __fastcall virtual TURLAction(System::Classes::TComponent* AOwner) : Vcl::Actnlist::TCustomAction(AOwner) { }
	/* TCustomAction.Destroy */ inline __fastcall virtual ~TURLAction() { }
	
};


class PASCALIMPLEMENTATION TBrowseURL : public TURLAction
{
	typedef TURLAction inherited;
	
private:
	System::Classes::TNotifyEvent FAfterBrowse;
	System::Classes::TNotifyEvent FBeforeBrowse;
	
public:
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	
__published:
	__property Caption = {default=0};
	__property Enabled = {default=1};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=0};
	__property Hint = {default=0};
	__property ImageIndex = {default=-1};
	__property ImageName = {default=0};
	__property ShortCut = {default=0};
	__property SecondaryShortCuts;
	__property Visible = {default=1};
	__property URL = {default=0};
	__property OnHint;
	__property OnUpdate;
	__property System::Classes::TNotifyEvent BeforeBrowse = {read=FBeforeBrowse, write=FBeforeBrowse};
	__property System::Classes::TNotifyEvent AfterBrowse = {read=FAfterBrowse, write=FAfterBrowse};
public:
	/* TCustomAction.Create */ inline __fastcall virtual TBrowseURL(System::Classes::TComponent* AOwner) : TURLAction(AOwner) { }
	/* TCustomAction.Destroy */ inline __fastcall virtual ~TBrowseURL() { }
	
};


enum DECLSPEC_DENUM TURLDownloadStatus : unsigned char { dsFindingResource, dsConnecting, dsRedirecting, dsBeginDownloadData, dsDownloadingData, dsEndDownloadData, dsBeginDownloadComponents, dsInstallingComponents, dsEndDownloadComponents, dsUsingCachedCopy, dsSendingRequest, dsClassIDAvailable, dsMIMETypeAvailable, dsCacheFileNameAvailable, dsBeginSyncOperation, dsEndSyncOperation, dsBeginUploadData, dsUploadingData, dsEndUploadData, dsProtocolClassID, dsEncoding, dsVerifiedMIMETypeAvailable, dsClassInstallLocation, dsDecoding, dsLoadingMIMEHandler, dsContentDispositionAttach, dsFilterReportMIMEType, dsCLSIDCanInstantiate, dsIUnKnownAvailable, dsDirectBind, dsRawMIMEType, dsProxyDetecting, dsAcceptRanges, dsCookieSent, dsCompactPolicyReceived, 
	dsCookieSuppressed, dsCookieStateUnknown, dsCookieStateAccept, dsCookeStateReject, dsCookieStatePrompt, dsCookieStateLeash, dsCookieStateDowngrade, dsPolicyHREF, dsP3PHeader, dsSessionCookieReceived, dsPersistentCookieReceived, dsSessionCookiesAllowed, dsCacheControl, dsContentDispositionFileName, dsMimeTextPlainMismatch, dsPublisherAvailable, dsDisplayNameAvailable, dsSSLUXNavBlocked, dsServerMimeTypeAvailable, dsSniffedClassIDAvailable, ds64BitProgress, dsReserved0, dsReserved1, dsReserved2, dsReserved3, dsReserved4, dsReserved5, dsReserved6, dsReserved7, dsReserved8, dsReserved9, dsReservedA, dsReservedB, dsReservedC, dsReservedD, dsReservedE, dsReservedF, dsReserved10, dsReserved11, dsReserved12, dsReserved13 };

typedef void __fastcall (__closure *TDownloadProgressEvent)(TDownLoadURL* Sender, unsigned Progress, unsigned ProgressMax, TURLDownloadStatus StatusCode, System::UnicodeString StatusText, bool &Cancel);

class PASCALIMPLEMENTATION TDownLoadURL : public TURLAction
{
	typedef TURLAction inherited;
	
private:
	TDownloadProgressEvent FOnDownloadProgress;
	System::Sysutils::TFileName FFilename;
	System::Classes::TNotifyEvent FBeforeDownload;
	System::Classes::TNotifyEvent FAfterDownload;
	System::Sysutils::TFileName __fastcall GetFileName();
	void __fastcall SetFileName(System::Sysutils::TFileName Value);
	
protected:
	HRESULT __stdcall GetBindInfo(/* out */ unsigned &grfBINDF, _tagBINDINFO &bindinfo);
	HRESULT __stdcall GetPriority(/* out */ void *nPriority);
	HRESULT __stdcall OnDataAvailable(unsigned grfBSCF, unsigned dwSize, Winapi::Activex::PFormatEtc formatetc, Winapi::Activex::PStgMedium stgmed);
	HRESULT __stdcall OnLowResource(unsigned reserved);
	HRESULT __stdcall OnObjectAvailable(const GUID &iid, System::_di_IInterface punk);
	HRESULT __stdcall OnProgress(unsigned ulProgress, unsigned ulProgressMax, unsigned ulStatusCode, System::WideChar * szStatusText);
	HRESULT __stdcall OnStartBinding(unsigned dwReserved, _di_IBinding pib);
	HRESULT __stdcall OnStopBinding(HRESULT hresult, System::WideChar * szError);
	
public:
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	
__published:
	__property Caption = {default=0};
	__property Enabled = {default=1};
	__property System::Sysutils::TFileName Filename = {read=GetFileName, write=SetFileName};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=0};
	__property Hint = {default=0};
	__property ImageIndex = {default=-1};
	__property ImageName = {default=0};
	__property ShortCut = {default=0};
	__property SecondaryShortCuts;
	__property Visible = {default=1};
	__property URL = {default=0};
	__property System::Classes::TNotifyEvent BeforeDownload = {read=FBeforeDownload, write=FBeforeDownload};
	__property System::Classes::TNotifyEvent AfterDownload = {read=FAfterDownload, write=FAfterDownload};
	__property OnHint;
	__property OnUpdate;
	__property TDownloadProgressEvent OnDownloadProgress = {read=FOnDownloadProgress, write=FOnDownloadProgress};
public:
	/* TCustomAction.Create */ inline __fastcall virtual TDownLoadURL(System::Classes::TComponent* AOwner) : TURLAction(AOwner) { }
	/* TCustomAction.Destroy */ inline __fastcall virtual ~TDownLoadURL() { }
	
private:
	void *__IBindStatusCallback;	// IBindStatusCallback 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {79EAC9C1-BAF9-11CE-8C82-00AA004BA90B}
	operator _di_IBindStatusCallback()
	{
		_di_IBindStatusCallback intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IBindStatusCallback*(void) { return (IBindStatusCallback*)&__IBindStatusCallback; }
	#endif
	
};


enum DECLSPEC_DENUM TRecipientType : unsigned char { rtPrimary, rtCC, rtBCC };

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TRecipientItem : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	System::UnicodeString FAddress;
	System::UnicodeString FDisplayName;
	TRecipientType FRecipientType;
	
protected:
	virtual System::UnicodeString __fastcall GetDisplayName();
	virtual void __fastcall SetDisplayName(const System::UnicodeString Value);
	
__published:
	__property TRecipientType RecipientType = {read=FRecipientType, write=FRecipientType, nodefault};
	__property DisplayName = {default=0};
	__property System::UnicodeString Address = {read=FAddress, write=FAddress};
public:
	/* TCollectionItem.Create */ inline __fastcall virtual TRecipientItem(System::Classes::TCollection* Collection) : System::Classes::TCollectionItem(Collection) { }
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TRecipientItem() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TRecipientCollection : public System::Classes::TOwnedCollection
{
	typedef System::Classes::TOwnedCollection inherited;
	
public:
	TRecipientItem* operator[](const int Index) { return this->Recipients[Index]; }
	
private:
	int FDisplayCounter;
	TRecipientItem* __fastcall GetRecipients(const int Index);
	void __fastcall SetRecipients(const int Index, TRecipientItem* const Value);
	
protected:
	__property int DisplayCounter = {read=FDisplayCounter, nodefault};
	virtual void __fastcall Notify(System::Classes::TCollectionItem* Item, System::Generics::Collections::TCollectionNotification Action);
	
public:
	__fastcall virtual TRecipientCollection(TSendMail* const Action);
	__property TRecipientItem* Recipients[const int Index] = {read=GetRecipients, write=SetRecipients/*, default*/};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TRecipientCollection() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TMailSendStatus : unsigned char { mssSuccess, mssAmbiguousRecipient, mssAttachmentNotFound, mssAttachmentOpenFailure, mssBadRecipType, mssFailure, mssInsufficientMemory, mssInvalidRecips, mssLoginFailure, mssTextTooLarge, mssTooManyFiles, mssTooManyRecipients, mssUnknownRecipient, mssUserAbort, mssStatusCodeError };

typedef void __fastcall (__closure *TMailSendStatusEvent)(System::TObject* Sender, const TMailSendStatus Status);

class PASCALIMPLEMENTATION TSendMail : public Vcl::Actnlist::TCustomAction
{
	typedef Vcl::Actnlist::TCustomAction inherited;
	
private:
	System::Classes::TStrings* FText;
	bool FUTF8Encoded;
	System::UnicodeString FSubject;
	TRecipientCollection* FRecipients;
	TMailSendStatusEvent FOnMailSendStatus;
	System::Classes::TStrings* FAttachments;
	void __fastcall SetText(System::Classes::TStrings* const Value);
	
protected:
	char * __fastcall GetMAPIString(const System::UnicodeString Value);
	void __fastcall FreeMAPIString(char * &Value);
	unsigned __fastcall RecipientTypeToRecipClass(const TRecipientType Value);
	TMailSendStatus __fastcall MAPISendStatusToMailSendStatus(const unsigned Value);
	virtual MapiRecipDesc __fastcall GetRecipientData(const int Index);
	virtual void __fastcall FreeRecipientData(MapiRecipDesc &RecipData);
	virtual Winapi::Mapi::PMapiRecipDesc __fastcall GetRecipientDataTable();
	virtual void __fastcall FreeRecipientDataTable(Winapi::Mapi::PMapiRecipDesc &DataTable);
	virtual MapiFileDesc __fastcall GetAttachmentData(const int Index);
	virtual void __fastcall FreeAttachmentData(MapiFileDesc &AttachData);
	virtual Winapi::Mapi::PMapiFileDesc __fastcall GetAttachmentDataTable();
	virtual void __fastcall FreeAttachmentDataTable(Winapi::Mapi::PMapiFileDesc &DataTable);
	virtual void __fastcall DoMailSendStatus(const unsigned MAPIStatus);
	virtual MapiMessage __fastcall GetMessageData();
	virtual void __fastcall FreeMessageData(MapiMessage &MsgData);
	
public:
	__fastcall virtual TSendMail(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TSendMail();
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	virtual bool __fastcall HandlesTarget(System::TObject* Target);
	virtual void __fastcall UpdateTarget(System::TObject* Target);
	
__published:
	__property System::Classes::TStrings* Attachments = {read=FAttachments};
	__property Caption = {default=0};
	__property Enabled = {default=1};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=0};
	__property Hint = {default=0};
	__property ImageIndex = {default=-1};
	__property ImageName = {default=0};
	__property TRecipientCollection* Recipients = {read=FRecipients};
	__property ShortCut = {default=0};
	__property SecondaryShortCuts;
	__property System::UnicodeString Subject = {read=FSubject, write=FSubject};
	__property System::Classes::TStrings* Text = {read=FText, write=SetText};
	__property Visible = {default=1};
	__property bool UTF8Encoded = {read=FUTF8Encoded, write=FUTF8Encoded, default=1};
	__property OnHint;
	__property OnUpdate;
	__property TMailSendStatusEvent OnMailSendStatus = {read=FOnMailSendStatus, write=FOnMailSendStatus};
};


class PASCALIMPLEMENTATION TListControlAction : public Vcl::Actnlist::TCustomAction
{
	typedef Vcl::Actnlist::TCustomAction inherited;
	
private:
	Vcl::Controls::TCustomListControl* FListControl;
	void __fastcall SetListControl(Vcl::Controls::TCustomListControl* const Value);
	
protected:
	bool __fastcall IsEnabled(System::TObject* Target);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	
public:
	__fastcall virtual TListControlAction(System::Classes::TComponent* AOwner);
	virtual bool __fastcall HandlesTarget(System::TObject* Target);
	__property Vcl::Controls::TCustomListControl* ListControl = {read=FListControl, write=SetListControl};
public:
	/* TCustomAction.Destroy */ inline __fastcall virtual ~TListControlAction() { }
	
};


class PASCALIMPLEMENTATION TListControlSelectAll : public TListControlAction
{
	typedef TListControlAction inherited;
	
public:
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	virtual void __fastcall UpdateTarget(System::TObject* Target);
	
__published:
	__property Caption = {default=0};
	__property Enabled = {default=1};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=0};
	__property Hint = {default=0};
	__property ImageIndex = {default=-1};
	__property ImageName = {default=0};
	__property ListControl;
	__property ShortCut = {default=0};
	__property SecondaryShortCuts;
	__property Visible = {default=1};
	__property OnHint;
	__property OnUpdate;
public:
	/* TListControlAction.Create */ inline __fastcall virtual TListControlSelectAll(System::Classes::TComponent* AOwner) : TListControlAction(AOwner) { }
	
public:
	/* TCustomAction.Destroy */ inline __fastcall virtual ~TListControlSelectAll() { }
	
};


class PASCALIMPLEMENTATION TListControlClearSelection : public TListControlAction
{
	typedef TListControlAction inherited;
	
public:
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	virtual void __fastcall UpdateTarget(System::TObject* Target);
	
__published:
	__property Caption = {default=0};
	__property Enabled = {default=1};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=0};
	__property Hint = {default=0};
	__property ImageIndex = {default=-1};
	__property ImageName = {default=0};
	__property ListControl;
	__property ShortCut = {default=0};
	__property SecondaryShortCuts;
	__property Visible = {default=1};
	__property OnHint;
	__property OnUpdate;
public:
	/* TListControlAction.Create */ inline __fastcall virtual TListControlClearSelection(System::Classes::TComponent* AOwner) : TListControlAction(AOwner) { }
	
public:
	/* TCustomAction.Destroy */ inline __fastcall virtual ~TListControlClearSelection() { }
	
};


class PASCALIMPLEMENTATION TListControlDeleteSelection : public TListControlAction
{
	typedef TListControlAction inherited;
	
public:
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	virtual void __fastcall UpdateTarget(System::TObject* Target);
	
__published:
	__property Caption = {default=0};
	__property Enabled = {default=1};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=0};
	__property Hint = {default=0};
	__property ImageIndex = {default=-1};
	__property ImageName = {default=0};
	__property ListControl;
	__property ShortCut = {default=0};
	__property SecondaryShortCuts;
	__property Visible = {default=1};
	__property OnHint;
	__property OnUpdate;
public:
	/* TListControlAction.Create */ inline __fastcall virtual TListControlDeleteSelection(System::Classes::TComponent* AOwner) : TListControlAction(AOwner) { }
	
public:
	/* TCustomAction.Destroy */ inline __fastcall virtual ~TListControlDeleteSelection() { }
	
};


class PASCALIMPLEMENTATION TListControlCopySelection : public TListControlAction
{
	typedef TListControlAction inherited;
	
private:
	Vcl::Controls::TCustomListControl* FDestination;
	void __fastcall SetDestination(Vcl::Controls::TCustomListControl* const Value);
	
public:
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	virtual bool __fastcall HandlesTarget(System::TObject* Target);
	virtual void __fastcall UpdateTarget(System::TObject* Target);
	
__published:
	__property Caption = {default=0};
	__property Vcl::Controls::TCustomListControl* Destination = {read=FDestination, write=SetDestination};
	__property Enabled = {default=1};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=0};
	__property Hint = {default=0};
	__property ImageIndex = {default=-1};
	__property ImageName = {default=0};
	__property ListControl;
	__property ShortCut = {default=0};
	__property SecondaryShortCuts;
	__property Visible = {default=1};
	__property OnHint;
	__property OnUpdate;
public:
	/* TListControlAction.Create */ inline __fastcall virtual TListControlCopySelection(System::Classes::TComponent* AOwner) : TListControlAction(AOwner) { }
	
public:
	/* TCustomAction.Destroy */ inline __fastcall virtual ~TListControlCopySelection() { }
	
};


class PASCALIMPLEMENTATION TListControlMoveSelection : public TListControlCopySelection
{
	typedef TListControlCopySelection inherited;
	
public:
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
public:
	/* TListControlAction.Create */ inline __fastcall virtual TListControlMoveSelection(System::Classes::TComponent* AOwner) : TListControlCopySelection(AOwner) { }
	
public:
	/* TCustomAction.Destroy */ inline __fastcall virtual ~TListControlMoveSelection() { }
	
};


class PASCALIMPLEMENTATION TRichEditSpellCheck : public TRichEditAction
{
	typedef TRichEditAction inherited;
	
public:
	__fastcall virtual TRichEditSpellCheck(System::Classes::TComponent* AOwner);
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	virtual void __fastcall UpdateTarget(System::TObject* Target);
public:
	/* TEditAction.Destroy */ inline __fastcall virtual ~TRichEditSpellCheck() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Extactns */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_EXTACTNS)
using namespace Vcl::Extactns;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_ExtactnsHPP
