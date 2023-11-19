// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'WizardAPI.pas' rev: 35.00 (Windows)

#ifndef WizardapiHPP
#define WizardapiHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>

//-- user supplied -----------------------------------------------------------

namespace Wizardapi
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IWizardService;
typedef System::DelphiInterface<IWizardService> _di_IWizardService;
__interface DELPHIINTERFACE IWizardCallback;
typedef System::DelphiInterface<IWizardCallback> _di_IWizardCallback;
__interface DELPHIINTERFACE ISelectionManagerWizardCallback;
typedef System::DelphiInterface<ISelectionManagerWizardCallback> _di_ISelectionManagerWizardCallback;
__interface DELPHIINTERFACE IWizard;
typedef System::DelphiInterface<IWizard> _di_IWizard;
__interface DELPHIINTERFACE IMrWizard;
typedef System::DelphiInterface<IMrWizard> _di_IMrWizard;
__interface DELPHIINTERFACE IWizardPageCreator;
typedef System::DelphiInterface<IWizardPageCreator> _di_IWizardPageCreator;
__interface DELPHIINTERFACE IWizardPage;
typedef System::DelphiInterface<IWizardPage> _di_IWizardPage;
__interface DELPHIINTERFACE IWizardPageEvents;
typedef System::DelphiInterface<IWizardPageEvents> _di_IWizardPageEvents;
__interface DELPHIINTERFACE IWizardPageStatus;
typedef System::DelphiInterface<IWizardPageStatus> _di_IWizardPageStatus;
__interface DELPHIINTERFACE IWizardPageEventHandlers;
typedef System::DelphiInterface<IWizardPageEventHandlers> _di_IWizardPageEventHandlers;
__interface DELPHIINTERFACE IWizardEvents;
typedef System::DelphiInterface<IWizardEvents> _di_IWizardEvents;
__interface DELPHIINTERFACE INewComponentPage;
typedef System::DelphiInterface<INewComponentPage> _di_INewComponentPage;
__interface DELPHIINTERFACE INewPackagePage;
typedef System::DelphiInterface<INewPackagePage> _di_INewPackagePage;
__interface DELPHIINTERFACE IChoicePage;
typedef System::DelphiInterface<IChoicePage> _di_IChoicePage;
__interface DELPHIINTERFACE IFeaturesPage;
typedef System::DelphiInterface<IFeaturesPage> _di_IFeaturesPage;
__interface DELPHIINTERFACE IOptionsPage;
typedef System::DelphiInterface<IOptionsPage> _di_IOptionsPage;
__interface DELPHIINTERFACE IWSDLImporterWizardLocationPage;
typedef System::DelphiInterface<IWSDLImporterWizardLocationPage> _di_IWSDLImporterWizardLocationPage;
__interface DELPHIINTERFACE ISelectionPage;
typedef System::DelphiInterface<ISelectionPage> _di_ISelectionPage;
__interface DELPHIINTERFACE ISelectionManager;
typedef System::DelphiInterface<ISelectionManager> _di_ISelectionManager;
__interface DELPHIINTERFACE ISelectionManagerEx;
typedef System::DelphiInterface<ISelectionManagerEx> _di_ISelectionManagerEx;
__interface DELPHIINTERFACE ISingleSelection;
typedef System::DelphiInterface<ISingleSelection> _di_ISingleSelection;
__interface DELPHIINTERFACE IMultiSelection;
typedef System::DelphiInterface<IMultiSelection> _di_IMultiSelection;
__interface DELPHIINTERFACE ISelectionIterator;
typedef System::DelphiInterface<ISelectionIterator> _di_ISelectionIterator;
__interface DELPHIINTERFACE ISelectionList;
typedef System::DelphiInterface<ISelectionList> _di_ISelectionList;
__interface DELPHIINTERFACE ICheckList;
typedef System::DelphiInterface<ICheckList> _di_ICheckList;
__interface DELPHIINTERFACE IEnabledList;
typedef System::DelphiInterface<IEnabledList> _di_IEnabledList;
class DELPHICLASS TWizardPage;
//-- type declarations -------------------------------------------------------
typedef _di_IWizardPage __fastcall (__closure *TWizardFunctionCallback)(const _di_IWizardPage CurrentPage);

typedef void __fastcall (__closure *TWizardProcedureCallback)(const _di_IWizardPage CurrentPage);

typedef void __fastcall (__closure *TWizardEvent)(const _di_IWizardPage Sender);

enum DECLSPEC_DENUM TOptionChecked : unsigned char { ocChecked, ocNotChecked, ocNotPresent };

__interface  INTERFACE_UUID("{75642215-E914-4EC9-8D84-BFB9EF69997F}") IWizardService  : public System::IInterface 
{
	virtual _di_IWizard __fastcall CreateWizard(const _di_IMrWizard MrWizard) = 0 ;
	virtual void __fastcall RegisterWizardPageCreator(const _di_IWizardPageCreator WizardPageCreator) = 0 ;
	virtual _di_IWizardPage __fastcall CreatePage(const GUID &PageID) = 0 ;
	virtual void __fastcall RegisterWizardCallback(const _di_IWizardCallback WizardCallback) = 0 ;
	virtual _di_IWizardCallback __fastcall FindWizardCallback(const GUID &CallbackID) = 0 ;
};

__interface  INTERFACE_UUID("{86960CD1-B565-42A2-82A5-33331945F97A}") IWizardCallback  : public System::IInterface 
{
	virtual GUID __fastcall CallbackID() = 0 ;
};

__interface  INTERFACE_UUID("{9662F5E1-4DFA-4E93-A862-6815C9D5B4CD}") ISelectionManagerWizardCallback  : public IWizardCallback 
{
	virtual _di_ISelectionManager __fastcall CreateSelectionManager() = 0 ;
};

enum DECLSPEC_DENUM TWizardOption : unsigned char { woSinglePage, woInformation, woPageNumbering, woSteps };

typedef System::Set<TWizardOption, TWizardOption::woSinglePage, TWizardOption::woSteps> TWizardOptions;

__interface  INTERFACE_UUID("{ED24E6C8-E8EC-4954-80D0-3FFDC4869BF9}") IWizard  : public System::IInterface 
{
	virtual System::Classes::TComponent* __fastcall Owner() = 0 ;
	virtual void __fastcall Show() = 0 ;
	virtual void __fastcall AddPage(const GUID &RootID, const System::UnicodeString RootName, TWizardFunctionCallback Callback = 0x0) = 0 /* overload */;
	virtual void __fastcall AddPage(const GUID &ParentID, const System::UnicodeString ParentName, const GUID &ChildID, const System::UnicodeString ChildName, TWizardFunctionCallback Callback = 0x0, bool AllowBack = true) = 0 /* overload */;
	virtual bool __fastcall GetBack() = 0 ;
	virtual void __fastcall SetBack(bool Value) = 0 ;
	virtual Vcl::Forms::TForm* __fastcall GetForm() = 0 ;
	virtual bool __fastcall GetNext() = 0 ;
	virtual void __fastcall SetNext(bool Value) = 0 ;
	virtual bool __fastcall GetFinish() = 0 ;
	virtual void __fastcall SetFinish(bool Value) = 0 ;
	virtual void __fastcall UpdateSteps() = 0 ;
	virtual bool __fastcall GetCancel() = 0 ;
	virtual void __fastcall SetCancel(bool Value) = 0 ;
	virtual TWizardOptions __fastcall GetWizardOptions() = 0 ;
	virtual void __fastcall SetWizardOptions(TWizardOptions Value) = 0 ;
	virtual System::UnicodeString __fastcall GetInfo() = 0 ;
	virtual void __fastcall SetInfo(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetDescription(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetTitle(const System::UnicodeString Value) = 0 ;
	virtual int __fastcall GetInfoLines() = 0 ;
	virtual void __fastcall SetInfoLines(int Value) = 0 ;
	virtual void __fastcall SetPageCount(int Value) = 0 ;
	virtual void __fastcall SetPageIndex(int Value) = 0 ;
	virtual void __fastcall WaitCursor(bool Enabled) = 0 ;
	virtual _di_IWizardPage __fastcall GetCurrentPage() = 0 ;
	virtual _di_IMrWizard __fastcall GetMrWizard() = 0 ;
	virtual bool __fastcall GoBack() = 0 ;
	virtual bool __fastcall GoNext() = 0 ;
	virtual bool __fastcall GoFinish() = 0 ;
	__property _di_IWizardPage CurrentPage = {read=GetCurrentPage};
	__property _di_IMrWizard MrWizard = {read=GetMrWizard};
	__property bool Back = {read=GetBack, write=SetBack};
	__property bool Next = {read=GetNext, write=SetNext};
	__property bool Finish = {read=GetFinish, write=SetFinish};
	__property bool Cancel = {read=GetCancel, write=SetCancel};
	__property TWizardOptions Options = {read=GetWizardOptions, write=SetWizardOptions};
	__property System::UnicodeString Info = {read=GetInfo, write=SetInfo};
	__property int InfoLines = {read=GetInfoLines, write=SetInfoLines};
	__property Vcl::Forms::TForm* WizardForm = {read=GetForm};
	__property int PageCount = {write=SetPageCount};
	__property int PageIndex = {write=SetPageIndex};
};

__interface  INTERFACE_UUID("{35B88352-3249-4721-A716-76256ADBE491}") IMrWizard  : public System::IInterface 
{
	virtual _di_IWizardPage __fastcall FirstPage() = 0 ;
	virtual System::UnicodeString __fastcall Caption() = 0 ;
	virtual void __fastcall Start() = 0 ;
	virtual void __fastcall Finish() = 0 ;
	virtual void __fastcall Cancel() = 0 ;
	virtual _di_IWizard __fastcall GetWizard() = 0 ;
	virtual void __fastcall SetWizard(const _di_IWizard Value) = 0 ;
	virtual int __fastcall GetHelpContext() = 0 ;
	virtual System::UnicodeString __fastcall GetPersonality() = 0 ;
	__property _di_IWizard Wizard = {read=GetWizard, write=SetWizard};
	__property int HelpContext = {read=GetHelpContext};
	__property System::UnicodeString Personality = {read=GetPersonality};
};

__interface  INTERFACE_UUID("{2534EE6E-3C8E-4DDC-A489-BAD98C6CB858}") IWizardPageCreator  : public System::IInterface 
{
	virtual _di_IWizardPage __fastcall CreatePage() = 0 ;
	virtual GUID __fastcall PageID() = 0 ;
};

__interface  INTERFACE_UUID("{F8B10443-91F6-4535-97A4-7347F1873453}") IWizardPage  : public System::IInterface 
{
	virtual System::UnicodeString __fastcall GetTitle() = 0 ;
	virtual void __fastcall SetTitle(const System::UnicodeString Value) = 0 ;
	virtual System::UnicodeString __fastcall GetDescription() = 0 ;
	virtual void __fastcall SetDescription(const System::UnicodeString Value) = 0 ;
	virtual System::UnicodeString __fastcall GetInfo() = 0 ;
	virtual void __fastcall SetInfo(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall Show() = 0 ;
	virtual bool __fastcall Close() = 0 ;
	virtual Vcl::Forms::TFrame* __fastcall Page() = 0 ;
	virtual _di_IWizard __fastcall GetWizard() = 0 ;
	virtual void __fastcall SetWizard(const _di_IWizard Value) = 0 ;
	virtual _di_IWizardPage __fastcall GetPreviousPage() = 0 ;
	virtual void __fastcall SetPreviousPage(const _di_IWizardPage Value) = 0 ;
	virtual Vcl::Graphics::TBitmap* __fastcall GetImage() = 0 ;
	virtual void __fastcall SetImage(Vcl::Graphics::TBitmap* Value) = 0 ;
	virtual int __fastcall GetHelpContext() = 0 ;
	virtual void __fastcall SetHelpContext(int Value) = 0 ;
	virtual void __fastcall Clear() = 0 ;
	virtual bool __fastcall GetModified() = 0 ;
	virtual void __fastcall SetModified(bool Value) = 0 ;
	virtual GUID __fastcall PageID() = 0 ;
	virtual System::UnicodeString __fastcall GetName() = 0 ;
	virtual void __fastcall SetName(const System::UnicodeString Value) = 0 ;
	__property System::UnicodeString Title = {read=GetTitle, write=SetTitle};
	__property System::UnicodeString Description = {read=GetDescription, write=SetDescription};
	__property System::UnicodeString Info = {read=GetInfo, write=SetInfo};
	__property Vcl::Graphics::TBitmap* Image = {read=GetImage, write=SetImage};
	__property _di_IWizard Wizard = {read=GetWizard, write=SetWizard};
	__property _di_IWizardPage PreviousPage = {read=GetPreviousPage, write=SetPreviousPage};
	__property int HelpContext = {read=GetHelpContext, write=SetHelpContext};
	__property System::UnicodeString Name = {read=GetName, write=SetName};
	__property bool Modified = {read=GetModified, write=SetModified};
};

enum DECLSPEC_DENUM TPageTransition : unsigned char { prNext, prPrev, prFinish };

__interface  INTERFACE_UUID("{3F56B04D-491A-48EA-8F30-B1C404F6E788}") IWizardPageEvents  : public System::IInterface 
{
	virtual void __fastcall OnEnterPage(TPageTransition PageTransition) = 0 ;
	virtual void __fastcall OnLeavePage(TPageTransition PageTransition) = 0 ;
	virtual void __fastcall OnLeavingPage(TPageTransition PageTransition, bool &Allow) = 0 ;
};

__interface  INTERFACE_UUID("{BF50F51B-FBBC-49BF-9D1F-BE4AB120C4CF}") IWizardPageStatus  : public System::IInterface 
{
	virtual bool __fastcall IsComplete() = 0 ;
};

typedef void __fastcall (__closure *TWizardPageTransitionEvent)(TPageTransition PageTransition);

typedef void __fastcall (__closure *TWizardPageTransitioningEvent)(TPageTransition PageTransition, bool &Allow);

__interface  INTERFACE_UUID("{478E396B-34E8-4CFC-9E88-5709FD8F0CA5}") IWizardPageEventHandlers  : public System::IInterface 
{
	virtual void __fastcall SetEnterPageEvent(TWizardPageTransitionEvent AVaue) = 0 ;
	virtual TWizardPageTransitionEvent __fastcall GetEnterPageEvent() = 0 ;
	virtual void __fastcall SetLeavePageEvent(TWizardPageTransitionEvent AVaue) = 0 ;
	virtual TWizardPageTransitionEvent __fastcall GetLeavePageEvent() = 0 ;
	virtual void __fastcall SetLeavingPageEvent(TWizardPageTransitioningEvent AVaue) = 0 ;
	virtual TWizardPageTransitioningEvent __fastcall GetLeavingPageEvent() = 0 ;
	__property TWizardPageTransitionEvent EnterPageEvent = {read=GetEnterPageEvent, write=SetEnterPageEvent};
	__property TWizardPageTransitionEvent LeavePageEvent = {read=GetLeavePageEvent, write=SetLeavePageEvent};
	__property TWizardPageTransitioningEvent LeavingPageEvent = {read=GetLeavingPageEvent, write=SetLeavingPageEvent};
};

__interface  INTERFACE_UUID("{507AC4A4-B2E4-466B-ACF0-2E8726956E9A}") IWizardEvents  : public System::IInterface 
{
	virtual void __fastcall OnEnterPage(_di_IWizardPage LastPage, _di_IWizardPage CurrentPage, TPageTransition PageTransition) = 0 ;
	virtual void __fastcall OnLeavePage(_di_IWizardPage WizardPage, TPageTransition PageTransition) = 0 ;
	virtual void __fastcall OnLeavingPage(_di_IWizardPage WizardPage, TPageTransition PageTransition, bool &Allow) = 0 ;
};

__interface  INTERFACE_UUID("{9F7D7246-71BC-42ED-A123-78C6F67A3DE3}") INewComponentPage  : public IWizardPage 
{
	virtual void __fastcall AddPalettePage(const System::UnicodeString Name) = 0 ;
	virtual void __fastcall SingleComponent(bool Enabled) = 0 ;
	virtual void __fastcall DirectoryBased(bool Enabled) = 0 ;
	virtual void __fastcall SetBrowseCallback(TWizardEvent Event) = 0 ;
	virtual void __fastcall SetClassNamesCallback(TWizardEvent Event) = 0 ;
	virtual void __fastcall EnableCheckBox(const System::UnicodeString Caption, const System::UnicodeString Value, const System::UnicodeString Default) = 0 ;
	virtual System::UnicodeString __fastcall GetComponentName() = 0 ;
	virtual void __fastcall SetComponentName(const System::UnicodeString Value) = 0 ;
	virtual System::UnicodeString __fastcall GetPalettePage() = 0 ;
	virtual void __fastcall SetPalettePage(const System::UnicodeString Value) = 0 ;
	virtual System::UnicodeString __fastcall GetUnitFileName() = 0 ;
	virtual void __fastcall SetUnitFileName(const System::UnicodeString Value) = 0 ;
	virtual System::UnicodeString __fastcall GetSearchPath() = 0 ;
	virtual void __fastcall SetSearchPath(const System::UnicodeString Value) = 0 ;
	__property System::UnicodeString ComponentName = {read=GetComponentName, write=SetComponentName};
	__property System::UnicodeString PalettePage = {read=GetPalettePage, write=SetPalettePage};
	__property System::UnicodeString UnitFileName = {read=GetUnitFileName, write=SetUnitFileName};
	__property System::UnicodeString SearchPath = {read=GetSearchPath, write=SetSearchPath};
};

__interface  INTERFACE_UUID("{E426BC11-0432-4C6E-A41E-338522BDB194}") INewPackagePage  : public IWizardPage 
{
	virtual System::UnicodeString __fastcall GetPackageName() = 0 ;
	virtual void __fastcall SetPackageName(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall PackageNameValidation(bool Valid) = 0 ;
	virtual System::UnicodeString __fastcall GetPackageDescription() = 0 ;
	virtual void __fastcall SetPackageDescription(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetBrowseCallback(TWizardEvent Event) = 0 ;
	virtual void __fastcall SetOnChangeCallback(TWizardEvent Callback) = 0 ;
	__property System::UnicodeString PackageName = {read=GetPackageName, write=SetPackageName};
	__property System::UnicodeString PackageDescription = {read=GetPackageDescription, write=SetPackageDescription};
};

__interface  INTERFACE_UUID("{A808B1CC-82B3-4804-BD1F-03225F0F0A4B}") IChoicePage  : public IWizardPage 
{
	virtual void __fastcall AddChoice(int ID, const System::UnicodeString Description, TWizardProcedureCallback Callback = 0x0) = 0 /* overload */;
	virtual void __fastcall AddChoice(int ID, const System::UnicodeString Description, bool Select) = 0 /* overload */;
	virtual int __fastcall ChoiceCount() = 0 ;
	virtual int __fastcall Selection() = 0 ;
};

typedef void __fastcall (__closure *TFeaturesPageEvent)(const _di_IFeaturesPage Sender);

__interface  INTERFACE_UUID("{CC570D27-1BB7-47FA-B65E-415B99B68833}") IFeaturesPage  : public IWizardPage 
{
	virtual void __fastcall AddFeature(int ID, const System::UnicodeString Caption, const System::UnicodeString Description) = 0 /* overload */;
	virtual void __fastcall AddFeature(int Parent, int ID, const System::UnicodeString Name, const System::UnicodeString Description) = 0 /* overload */;
	virtual void __fastcall AddFeatureGroup(int ID, const System::UnicodeString Name, const System::UnicodeString Description) = 0 /* overload */;
	virtual void __fastcall AddFeatureGroup(int Parent, int ID, const System::UnicodeString Name, const System::UnicodeString Description) = 0 /* overload */;
	virtual bool __fastcall GetChecked(int ID) = 0 ;
	virtual void __fastcall SetChecked(int ID, bool Check) = 0 ;
	virtual int __fastcall GetSelected() = 0 ;
	virtual int __fastcall GetFocused() = 0 ;
	virtual TFeaturesPageEvent __fastcall GetOnChecked() = 0 ;
	virtual void __fastcall SetOnChecked(TFeaturesPageEvent Event) = 0 ;
	virtual TFeaturesPageEvent __fastcall GetOnSelected() = 0 ;
	virtual void __fastcall SetOnSelected(TFeaturesPageEvent Event) = 0 ;
	virtual System::UnicodeString __fastcall GetCaption(int ID) = 0 ;
	HIDESBASE virtual System::UnicodeString __fastcall GetDescription(int ID) = 0 ;
	__property int Selected = {read=GetSelected};
	__property int Focused = {read=GetFocused};
	__property System::UnicodeString Captions[int ID] = {read=GetCaption};
	__property System::UnicodeString Descriptions[int ID] = {read=GetDescription};
	__property bool Checked[int ID] = {read=GetChecked, write=SetChecked};
	__property TFeaturesPageEvent OnChecked = {read=GetOnChecked, write=SetOnChecked};
	__property TFeaturesPageEvent OnSelected = {read=GetOnSelected, write=SetOnSelected};
};

__interface  INTERFACE_UUID("{BDABFF22-8F8F-4D28-8D40-53D18071314E}") IOptionsPage  : public IWizardPage 
{
	virtual void __fastcall AddOption(int ID, const System::UnicodeString Description, bool Checked, TWizardProcedureCallback Callback = 0x0) = 0 ;
	virtual void __fastcall AddGroup(const System::UnicodeString Description) = 0 ;
	virtual int __fastcall OptionsCount() = 0 ;
	virtual int __fastcall GroupCount() = 0 ;
	virtual TOptionChecked __fastcall Checked(int ID) = 0 ;
};

__interface  INTERFACE_UUID("{636768FE-5FDF-486E-B832-C7F67C907F85}") IWSDLImporterWizardLocationPage  : public IWizardPage 
{
	virtual System::UnicodeString __fastcall GetWSDLLocation() = 0 ;
	virtual System::UnicodeString __fastcall GetAuthenticationUserName() = 0 ;
	virtual System::UnicodeString __fastcall GetAuthenticationPassword() = 0 ;
	virtual System::UnicodeString __fastcall GetAuthenticationProxy() = 0 ;
	virtual void __fastcall SetLastWSDLSourceDir(const System::UnicodeString Value) = 0 ;
	virtual System::UnicodeString __fastcall GetLastWSDLSourceDir() = 0 ;
	virtual void __fastcall SetWSDLFileHistory(System::Classes::TStrings* Strings) = 0 ;
	virtual System::Classes::TStrings* __fastcall GetWSDLFileHistory() = 0 ;
	__property System::UnicodeString WSDLLocation = {read=GetWSDLLocation};
	__property System::UnicodeString AuthenticationUserName = {read=GetAuthenticationUserName};
	__property System::UnicodeString AuthenticationPassword = {read=GetAuthenticationPassword};
	__property System::UnicodeString AuthenticationProxy = {read=GetAuthenticationProxy};
	__property System::UnicodeString LastWSDLSourceDir = {read=GetLastWSDLSourceDir, write=SetLastWSDLSourceDir};
	__property System::Classes::TStrings* WSDLFileHistory = {read=GetWSDLFileHistory, write=SetWSDLFileHistory};
};

typedef System::DynamicArray<System::UnicodeString> TSelectionItem;

typedef System::DynamicArray<TSelectionItem> TSelectionItemArray;

typedef System::DynamicArray<System::UnicodeString> TColumns;

typedef void __fastcall (__closure *TSelectionCallback)(const TSelectionItem Item);

__interface  INTERFACE_UUID("{60628217-1B36-4D8A-BA64-D5347982065D}") ISelectionPage  : public IWizardPage 
{
	virtual _di_ISelectionManager __fastcall GetSelectionManager() = 0 ;
	virtual void __fastcall SetSelectionManager(const _di_ISelectionManager Value) = 0 ;
	virtual void __fastcall SetDoubleClick(TSelectionCallback Callback) = 0 ;
	virtual void __fastcall SetOnChange(TSelectionCallback Callback) = 0 ;
	virtual void __fastcall Add(System::UnicodeString *Value, const int Value_High) = 0 ;
	virtual bool __fastcall Select(TSelectionItem Value) = 0 ;
	__property _di_ISelectionManager SelectionManager = {read=GetSelectionManager, write=SetSelectionManager};
};

__interface  INTERFACE_UUID("{C58512B8-40DC-40CB-96FD-6D74BE988DD5}") ISelectionManager  : public System::IInterface 
{
	virtual TColumns __fastcall Columns() = 0 ;
};

__interface  INTERFACE_UUID("{B6DE34D8-0BAE-4B81-A311-F1535C55083B}") ISelectionManagerEx  : public ISelectionManager 
{
	virtual System::UnicodeString __fastcall AddCaption() = 0 ;
	virtual System::UnicodeString __fastcall RemoveCaption() = 0 ;
	virtual bool __fastcall EnableSearch() = 0 ;
	virtual TSelectionItem __fastcall OnAdd() = 0 ;
	virtual _di_ISelectionPage __fastcall GetWizardPage() = 0 ;
	virtual void __fastcall SetWizardPage(const _di_ISelectionPage Value) = 0 ;
	__property _di_ISelectionPage WizardPage = {read=GetWizardPage, write=SetWizardPage};
};

__interface  INTERFACE_UUID("{57999356-6EFB-4BD6-82FC-70478BBB92B8}") ISingleSelection  : public System::IInterface 
{
	virtual TSelectionItem __fastcall GetSelection() = 0 ;
	virtual void __fastcall SetSelection(const TSelectionItem Item) = 0 ;
	virtual bool __fastcall OnRemove(const TSelectionItem Item) = 0 ;
	__property TSelectionItem Selection = {read=GetSelection, write=SetSelection};
};

__interface  INTERFACE_UUID("{2E3F3597-BCAA-46EC-BA9D-2C1DAD64AA55}") IMultiSelection  : public System::IInterface 
{
	virtual TSelectionItemArray __fastcall GetSelections() = 0 ;
	virtual void __fastcall SetSelections(const TSelectionItemArray Item) = 0 ;
	virtual bool __fastcall OnRemove(const TSelectionItemArray Item) = 0 ;
	__property TSelectionItemArray Selections = {read=GetSelections, write=SetSelections};
};

__interface  INTERFACE_UUID("{59A8AC53-F833-44DF-99BB-2DDADCEAA511}") ISelectionIterator  : public System::IInterface 
{
	virtual void __fastcall Start() = 0 ;
	virtual TSelectionItem __fastcall GetNext() = 0 ;
	virtual bool __fastcall IsDone() = 0 ;
};

__interface  INTERFACE_UUID("{02F82671-032C-4674-ADEF-D710BA5FC2C0}") ISelectionList  : public System::IInterface 
{
	virtual TSelectionItem __fastcall GetItems(int Index) = 0 ;
	__property TSelectionItem Items[int Index] = {read=GetItems};
	virtual int __fastcall Count() = 0 ;
};

__interface  INTERFACE_UUID("{F6E4A2C1-3C03-4F5A-BEE3-1982DD62E5E6}") ICheckList  : public ISelectionList 
{
	virtual bool __fastcall GetChecked(int Index) = 0 ;
	__property bool Checked[int Index] = {read=GetChecked};
};

__interface  INTERFACE_UUID("{CF1802FC-9FCF-494B-AC40-4101558709F9}") IEnabledList  : public ISelectionList 
{
	virtual bool __fastcall GetEnabled(int Index) = 0 ;
	__property bool Enabled[int Index] = {read=GetEnabled};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TWizardPage : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	Vcl::Graphics::TBitmap* FImage;
	_di_IWizard FWizard;
	_di_IWizardPage FPreviousPage;
	System::UnicodeString FName;
	System::UnicodeString FTitle;
	System::UnicodeString FDescription;
	System::UnicodeString FInfo;
	int FHelpContext;
	bool FModified;
	bool __fastcall IsCurrentPage();
	
public:
	__fastcall TWizardPage();
	__fastcall virtual ~TWizardPage();
	System::UnicodeString __fastcall GetTitle();
	void __fastcall SetTitle(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetDescription();
	void __fastcall SetDescription(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetInfo();
	void __fastcall SetInfo(const System::UnicodeString Value);
	void __fastcall Show();
	bool __fastcall Close();
	Vcl::Forms::TFrame* __fastcall Page();
	virtual _di_IWizard __fastcall GetWizard();
	virtual void __fastcall SetWizard(const _di_IWizard Value);
	virtual _di_IWizardPage __fastcall GetPreviousPage();
	virtual void __fastcall SetPreviousPage(const _di_IWizardPage Value);
	virtual Vcl::Graphics::TBitmap* __fastcall GetImage();
	virtual void __fastcall SetImage(Vcl::Graphics::TBitmap* Value);
	int __fastcall GetHelpContext();
	void __fastcall SetHelpContext(int Value);
	virtual GUID __fastcall PageID() = 0 ;
	System::UnicodeString __fastcall GetName();
	void __fastcall SetName(const System::UnicodeString Value);
	void __fastcall Clear();
	bool __fastcall GetModified();
	void __fastcall SetModified(bool Value);
	__property System::UnicodeString Title = {read=GetTitle, write=SetTitle};
	__property System::UnicodeString Description = {read=GetDescription, write=SetDescription};
	__property Vcl::Graphics::TBitmap* Image = {read=GetImage, write=SetImage};
	__property _di_IWizard Wizard = {read=GetWizard, write=SetWizard};
	__property _di_IWizardPage PreviousPage = {read=GetPreviousPage, write=SetPreviousPage};
	__property int HelpContext = {read=GetHelpContext, write=SetHelpContext, nodefault};
	__property System::UnicodeString Name = {read=GetName, write=SetName};
	__property bool Modified = {read=GetModified, write=SetModified, nodefault};
	__property System::UnicodeString Info = {read=GetInfo, write=SetInfo};
private:
	void *__IWizardPage;	// IWizardPage 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {F8B10443-91F6-4535-97A4-7347F1873453}
	operator _di_IWizardPage()
	{
		_di_IWizardPage intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IWizardPage*(void) { return (IWizardPage*)&__IWizardPage; }
	#endif
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE GUID Win32PackagesCallbackID;
extern DELPHI_PACKAGE GUID DelphiWin32PackagesCallbackID;
extern DELPHI_PACKAGE GUID CppWin32PackagesCallbackID;
extern DELPHI_PACKAGE GUID DelphiWin32VCLComponentsCallbackID;
extern DELPHI_PACKAGE GUID CppWin32VCLComponentsCallbackID;
extern DELPHI_PACKAGE GUID DotNetPackagesCallbackID;
extern DELPHI_PACKAGE GUID DotNetVCLComponentsCallbackID;
extern DELPHI_PACKAGE GUID TypeLibrarySelectionCallbackID;
extern DELPHI_PACKAGE GUID ActiveXControlsSelectionCallbackID;
extern DELPHI_PACKAGE GUID AssemblySelectionCallbackID;
extern DELPHI_PACKAGE _di_IWizardService BorlandWizards;
}	/* namespace Wizardapi */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WIZARDAPI)
using namespace Wizardapi;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// WizardapiHPP
