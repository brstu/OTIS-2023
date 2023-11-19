// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.FileCtrl.pas' rev: 35.00 (Windows)

#ifndef Vcl_FilectrlHPP
#define Vcl_FilectrlHPP

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
#include <Vcl.Controls.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Buttons.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Filectrl
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TFileListBox;
class DELPHICLASS TDirectoryListBox;
class DELPHICLASS TDriveComboBox;
class DELPHICLASS TFilterComboBox;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TFileAttr : unsigned char { ftReadOnly, ftHidden, ftSystem, ftVolumeID, ftDirectory, ftArchive, ftNormal };

typedef System::Set<TFileAttr, TFileAttr::ftReadOnly, TFileAttr::ftNormal> TFileType;

enum DECLSPEC_DENUM TDriveType : unsigned char { dtUnknown, dtNoDrive, dtFloppy, dtFixed, dtNetwork, dtCDROM, dtRAM };

class PASCALIMPLEMENTATION TFileListBox : public Vcl::Stdctrls::TCustomListBox
{
	typedef Vcl::Stdctrls::TCustomListBox inherited;
	
private:
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	System::UnicodeString __fastcall GetDirectory();
	System::WideChar __fastcall GetDrive();
	System::UnicodeString __fastcall GetFileName();
	bool __fastcall IsMaskStored();
	void __fastcall SetDrive(System::WideChar Value);
	void __fastcall SetFileEdit(Vcl::Stdctrls::TEdit* Value);
	void __fastcall SetDirectory(const System::UnicodeString NewDirectory);
	void __fastcall SetFileType(TFileType NewFileType);
	void __fastcall SetMask(const System::UnicodeString NewMask);
	void __fastcall SetFileName(const System::UnicodeString NewFile);
	void __fastcall SetShowGlyphs(bool Value);
	void __fastcall ResetItemHeight();
	
protected:
	System::UnicodeString FDirectory;
	System::UnicodeString FMask;
	TFileType FFileType;
	Vcl::Stdctrls::TEdit* FFileEdit;
	TDirectoryListBox* FDirList;
	TFilterComboBox* FFilterCombo;
	Vcl::Graphics::TBitmap* ExeBMP;
	Vcl::Graphics::TBitmap* DirBMP;
	Vcl::Graphics::TBitmap* UnknownBMP;
	System::Classes::TNotifyEvent FOnChange;
	int FLastSel;
	bool FShowGlyphs;
	virtual void __fastcall CreateWnd();
	virtual void __fastcall ReadBitmaps();
	DYNAMIC void __fastcall Click();
	virtual void __fastcall Change();
	virtual void __fastcall ReadFileNames();
	virtual void __fastcall DrawItem(int Index, const System::Types::TRect &Rect, Winapi::Windows::TOwnerDrawState State);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual System::UnicodeString __fastcall GetFilePath();
	
public:
	__fastcall virtual TFileListBox(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TFileListBox();
	HIDESBASE void __fastcall Update();
	virtual void __fastcall ApplyFilePath(const System::UnicodeString EditText);
	__property System::WideChar Drive = {read=GetDrive, write=SetDrive, nodefault};
	__property System::UnicodeString Directory = {read=GetDirectory, write=ApplyFilePath};
	__property System::UnicodeString FileName = {read=GetFilePath, write=ApplyFilePath};
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property AutoComplete = {default=1};
	__property BevelEdges = {default=15};
	__property BevelInner = {index=0, default=2};
	__property BevelKind = {default=0};
	__property BevelOuter = {index=1, default=1};
	__property Color = {default=-16777211};
	__property Constraints;
	__property Ctl3D;
	__property DoubleBuffered;
	__property DragCursor = {default=-12};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property ExtendedSelect = {default=1};
	__property Vcl::Stdctrls::TEdit* FileEdit = {read=FFileEdit, write=SetFileEdit};
	__property TFileType FileType = {read=FFileType, write=SetFileType, default=64};
	__property Font;
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property IntegralHeight = {default=0};
	__property ItemHeight = {default=16};
	__property System::UnicodeString Mask = {read=FMask, write=SetMask, stored=IsMaskStored};
	__property MultiSelect = {default=0};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentDoubleBuffered = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property bool ShowGlyphs = {read=FShowGlyphs, write=SetShowGlyphs, default=0};
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Touch;
	__property Visible = {default=1};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property OnClick;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnGesture;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseActivate;
	__property OnMouseDown;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnStartDrag;
public:
	/* TWinControl.CreateParented */ inline __fastcall TFileListBox(HWND ParentWindow) : Vcl::Stdctrls::TCustomListBox(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TDirectoryListBox : public Vcl::Stdctrls::TCustomListBox
{
	typedef Vcl::Stdctrls::TCustomListBox inherited;
	
private:
	TFileListBox* FFileList;
	TDriveComboBox* FDriveCombo;
	Vcl::Stdctrls::TLabel* FDirLabel;
	bool FInSetDir;
	bool FPreserveCase;
	bool FCaseSensitive;
	System::UnicodeString __fastcall GetDirectory();
	System::WideChar __fastcall GetDrive();
	void __fastcall SetFileListBox(TFileListBox* Value);
	void __fastcall SetDirLabel(Vcl::Stdctrls::TLabel* Value);
	void __fastcall SetDirLabelCaption();
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	void __fastcall SetDrive(System::WideChar Value);
	void __fastcall DriveChange(System::WideChar NewDrive);
	void __fastcall SetDir(const System::UnicodeString NewDirectory);
	virtual void __fastcall SetDirectory(const System::UnicodeString NewDirectory);
	void __fastcall ResetItemHeight();
	
protected:
	Vcl::Graphics::TBitmap* ClosedBMP;
	Vcl::Graphics::TBitmap* OpenedBMP;
	Vcl::Graphics::TBitmap* CurrentBMP;
	System::UnicodeString FDirectory;
	System::Classes::TNotifyEvent FOnChange;
	virtual void __fastcall Change();
	DYNAMIC void __fastcall DblClick();
	virtual void __fastcall ReadBitmaps();
	virtual void __fastcall CreateWnd();
	virtual void __fastcall DrawItem(int Index, const System::Types::TRect &Rect, Winapi::Windows::TOwnerDrawState State);
	int __fastcall ReadDirectoryNames(const System::UnicodeString ParentDirectory, System::Classes::TStringList* DirectoryList);
	virtual void __fastcall BuildList();
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	
public:
	__fastcall virtual TDirectoryListBox(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TDirectoryListBox();
	System::UnicodeString __fastcall DisplayCase(const System::UnicodeString S);
	int __fastcall FileCompareText(const System::UnicodeString A, const System::UnicodeString B);
	System::UnicodeString __fastcall GetItemPath(int Index);
	void __fastcall OpenCurrent();
	HIDESBASE void __fastcall Update();
	__property System::WideChar Drive = {read=GetDrive, write=SetDrive, nodefault};
	__property System::UnicodeString Directory = {read=GetDirectory, write=SetDirectory};
	__property bool PreserveCase = {read=FPreserveCase, nodefault};
	__property bool CaseSensitive = {read=FCaseSensitive, nodefault};
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property AutoComplete = {default=1};
	__property BevelEdges = {default=15};
	__property BevelInner = {index=0, default=2};
	__property BevelKind = {default=0};
	__property BevelOuter = {index=1, default=1};
	__property Color = {default=-16777211};
	__property Columns = {default=0};
	__property Constraints;
	__property Ctl3D;
	__property Vcl::Stdctrls::TLabel* DirLabel = {read=FDirLabel, write=SetDirLabel};
	__property DoubleBuffered;
	__property DragCursor = {default=-12};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property TFileListBox* FileList = {read=FFileList, write=SetFileListBox};
	__property Font;
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property IntegralHeight = {default=0};
	__property ItemHeight = {default=16};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentDoubleBuffered = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Touch;
	__property Visible = {default=1};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property OnClick;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnGesture;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseActivate;
	__property OnMouseDown;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnStartDrag;
public:
	/* TWinControl.CreateParented */ inline __fastcall TDirectoryListBox(HWND ParentWindow) : Vcl::Stdctrls::TCustomListBox(ParentWindow) { }
	
};


enum DECLSPEC_DENUM TTextCase : unsigned char { tcLowerCase, tcUpperCase };

class PASCALIMPLEMENTATION TDriveComboBox : public Vcl::Stdctrls::TCustomComboBox
{
	typedef Vcl::Stdctrls::TCustomComboBox inherited;
	
private:
	TDirectoryListBox* FDirList;
	System::WideChar FDrive;
	TTextCase FTextCase;
	System::WideChar __fastcall GetDrive();
	void __fastcall SetDirListBox(TDirectoryListBox* Value);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	void __fastcall SetDrive(System::WideChar NewDrive);
	void __fastcall SetTextCase(TTextCase NewTextCase);
	void __fastcall ReadBitmaps();
	void __fastcall ResetItemHeight();
	
protected:
	Vcl::Graphics::TBitmap* FloppyBMP;
	Vcl::Graphics::TBitmap* FixedBMP;
	Vcl::Graphics::TBitmap* NetworkBMP;
	Vcl::Graphics::TBitmap* CDROMBMP;
	Vcl::Graphics::TBitmap* RAMBMP;
	virtual void __fastcall CreateWnd();
	virtual void __fastcall DrawItem(int Index, const System::Types::TRect &Rect, Winapi::Windows::TOwnerDrawState State);
	DYNAMIC void __fastcall Click();
	virtual void __fastcall BuildList();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	
public:
	__fastcall virtual TDriveComboBox(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TDriveComboBox();
	__property Text = {default=0};
	__property System::WideChar Drive = {read=GetDrive, write=SetDrive, nodefault};
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property AutoComplete = {default=1};
	__property AutoDropDown = {default=0};
	__property BevelEdges = {default=15};
	__property BevelInner = {index=0, default=2};
	__property BevelKind = {default=0};
	__property BevelOuter = {index=1, default=1};
	__property Color = {default=-16777211};
	__property Constraints;
	__property Ctl3D;
	__property TDirectoryListBox* DirList = {read=FDirList, write=SetDirListBox};
	__property DoubleBuffered;
	__property DragMode = {default=0};
	__property DragCursor = {default=-12};
	__property Enabled = {default=1};
	__property Font;
	__property ImeMode = {default=3};
	__property ImeName = {default=0};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentDoubleBuffered = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property TTextCase TextCase = {read=FTextCase, write=SetTextCase, default=0};
	__property Touch;
	__property Visible = {default=1};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property OnChange;
	__property OnClick;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnDropDown;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnGesture;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnStartDrag;
public:
	/* TWinControl.CreateParented */ inline __fastcall TDriveComboBox(HWND ParentWindow) : Vcl::Stdctrls::TCustomComboBox(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TFilterComboBox : public Vcl::Stdctrls::TCustomComboBox
{
	typedef Vcl::Stdctrls::TCustomComboBox inherited;
	
private:
	System::UnicodeString FFilter;
	TFileListBox* FFileList;
	System::Classes::TStringList* MaskList;
	bool __fastcall IsFilterStored();
	System::UnicodeString __fastcall GetMask();
	void __fastcall SetFilter(const System::UnicodeString NewFilter);
	void __fastcall SetFileListBox(TFileListBox* Value);
	
protected:
	DYNAMIC void __fastcall Change();
	virtual void __fastcall CreateWnd();
	DYNAMIC void __fastcall Click();
	void __fastcall BuildList();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	
public:
	__fastcall virtual TFilterComboBox(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TFilterComboBox();
	__property System::UnicodeString Mask = {read=GetMask};
	__property Text = {default=0};
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property AutoComplete = {default=1};
	__property AutoDropDown = {default=0};
	__property BevelEdges = {default=15};
	__property BevelInner = {index=0, default=2};
	__property BevelKind = {default=0};
	__property BevelOuter = {index=1, default=1};
	__property Color = {default=-16777211};
	__property Constraints;
	__property Ctl3D;
	__property DoubleBuffered;
	__property DragMode = {default=0};
	__property DragCursor = {default=-12};
	__property Enabled = {default=1};
	__property TFileListBox* FileList = {read=FFileList, write=SetFileListBox};
	__property System::UnicodeString Filter = {read=FFilter, write=SetFilter, stored=IsFilterStored};
	__property Font;
	__property ImeName = {default=0};
	__property ImeMode = {default=3};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentDoubleBuffered = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Touch;
	__property Visible = {default=1};
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property OnChange;
	__property OnClick;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnDropDown;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnGesture;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnStartDrag;
public:
	/* TWinControl.CreateParented */ inline __fastcall TFilterComboBox(HWND ParentWindow) : Vcl::Stdctrls::TCustomComboBox(ParentWindow) { }
	
};


enum DECLSPEC_DENUM TSelectDirOpt : unsigned char { sdAllowCreate, sdPerformCreate, sdPrompt };

typedef System::Set<TSelectDirOpt, TSelectDirOpt::sdAllowCreate, TSelectDirOpt::sdPrompt> TSelectDirOpts;

enum DECLSPEC_DENUM TSelectDirExtOpt : unsigned char { sdNewFolder, sdShowEdit, sdShowShares, sdNewUI, sdShowFiles, sdValidateDir };

typedef System::Set<TSelectDirExtOpt, TSelectDirExtOpt::sdNewFolder, TSelectDirExtOpt::sdValidateDir> TSelectDirExtOpts;

enum DECLSPEC_DENUM TSelectDirFileDlgOpt : unsigned char { sdHidePinnedPlaces, sdNoDereferenceLinks, sdForceShowHidden, sdAllowMultiselect };

typedef System::Set<TSelectDirFileDlgOpt, TSelectDirFileDlgOpt::sdHidePinnedPlaces, TSelectDirFileDlgOpt::sdAllowMultiselect> TSelectDirFileDlgOpts;

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 WNTYPE_DRIVE = System::Int8(0x1);
extern DELPHI_PACKAGE System::Sysutils::TFileName __fastcall MinimizeName(const System::Sysutils::TFileName Filename, Vcl::Graphics::TCanvas* Canvas, int MaxLen);
extern DELPHI_PACKAGE void __fastcall ProcessPath(const System::UnicodeString EditText, System::WideChar &Drive, System::UnicodeString &DirPart, System::UnicodeString &FilePart);
extern DELPHI_PACKAGE bool __fastcall SelectDirectory(System::UnicodeString &Directory, TSelectDirOpts Options, int HelpCtx)/* overload */;
extern DELPHI_PACKAGE bool __fastcall SelectDirectory(const System::UnicodeString Caption, const System::WideString Root, System::UnicodeString &Directory, TSelectDirExtOpts Options = (TSelectDirExtOpts() << TSelectDirExtOpt::sdNewUI ), Vcl::Controls::TWinControl* Parent = (Vcl::Controls::TWinControl*)(0x0))/* overload */;
#ifndef _WIN64
extern DELPHI_PACKAGE bool __fastcall SelectDirectory(const System::UnicodeString StartDirectory, /* out */ System::DynamicArray<System::UnicodeString> &Directories, TSelectDirFileDlgOpts Options = TSelectDirFileDlgOpts() , const System::UnicodeString Title = System::UnicodeString(), const System::UnicodeString FolderNameLabel = System::UnicodeString(), const System::UnicodeString OkButtonLabel = System::UnicodeString())/* overload */;
#else /* _WIN64 */
extern DELPHI_PACKAGE bool __fastcall SelectDirectory(const System::UnicodeString StartDirectory, /* out */ System::TArray__1<System::UnicodeString> &Directories, TSelectDirFileDlgOpts Options = TSelectDirFileDlgOpts() , const System::UnicodeString Title = System::UnicodeString(), const System::UnicodeString FolderNameLabel = System::UnicodeString(), const System::UnicodeString OkButtonLabel = System::UnicodeString())/* overload */;
#endif /* _WIN64 */
}	/* namespace Filectrl */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_FILECTRL)
using namespace Vcl::Filectrl;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_FilectrlHPP
