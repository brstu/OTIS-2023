// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FileHistoryAPI.pas' rev: 35.00 (Windows)

#ifndef FilehistoryapiHPP
#define FilehistoryapiHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.CommCtrl.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.Menus.hpp>
#include <Winapi.ActiveX.hpp>
#include <ToolsAPI.hpp>

//-- user supplied -----------------------------------------------------------

namespace Filehistoryapi
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IOTAFileHistoryManager;
typedef System::DelphiInterface<IOTAFileHistoryManager> _di_IOTAFileHistoryManager;
__interface DELPHIINTERFACE IOTAFileHistoryNotifier;
typedef System::DelphiInterface<IOTAFileHistoryNotifier> _di_IOTAFileHistoryNotifier;
__interface DELPHIINTERFACE IOTAAsynchronousHistoryUpdater;
typedef System::DelphiInterface<IOTAAsynchronousHistoryUpdater> _di_IOTAAsynchronousHistoryUpdater;
__interface DELPHIINTERFACE IOTAFileHistoryProvider;
typedef System::DelphiInterface<IOTAFileHistoryProvider> _di_IOTAFileHistoryProvider;
__interface DELPHIINTERFACE IOTAAsynchronousHistoryProvider;
typedef System::DelphiInterface<IOTAAsynchronousHistoryProvider> _di_IOTAAsynchronousHistoryProvider;
__interface DELPHIINTERFACE IOTAAsynchronousHistoryProvider150;
typedef System::DelphiInterface<IOTAAsynchronousHistoryProvider150> _di_IOTAAsynchronousHistoryProvider150;
__interface DELPHIINTERFACE IOTAFileHistory;
typedef System::DelphiInterface<IOTAFileHistory> _di_IOTAFileHistory;
__interface DELPHIINTERFACE IOTAFileHistoryHint;
typedef System::DelphiInterface<IOTAFileHistoryHint> _di_IOTAFileHistoryHint;
__interface DELPHIINTERFACE IOTAAnnotationLineProvider;
typedef System::DelphiInterface<IOTAAnnotationLineProvider> _di_IOTAAnnotationLineProvider;
__interface DELPHIINTERFACE IOTAAnnotationCompletion;
typedef System::DelphiInterface<IOTAAnnotationCompletion> _di_IOTAAnnotationCompletion;
__interface DELPHIINTERFACE IOTAAsynchronousAnnotationProvider;
typedef System::DelphiInterface<IOTAAsynchronousAnnotationProvider> _di_IOTAAsynchronousAnnotationProvider;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TOTAHistoryStyle : unsigned int { hsBuffer, hsFile, hsLocalFile, hsRemoteRevision, hsActiveRevision };

typedef System::DynamicArray<System::WideString> TOTAFileNameArray;

__interface  INTERFACE_UUID("{55A2BEE4-A64C-4749-8388-070CAEFDEFA5}") IOTAFileHistoryManager  : public System::IInterface 
{
	virtual int __fastcall AddNotifier(const _di_IOTAFileHistoryNotifier ANotifier) = 0 ;
	virtual void __fastcall AddTemporaryLabel(const System::WideString ALabelName, const TOTAFileNameArray AFiles) = 0 ;
	virtual int __fastcall Get_Count() = 0 ;
	virtual _di_IOTAFileHistoryProvider __fastcall GetFileHistoryProvider(int Index) = 0 ;
	virtual int __fastcall RegisterHistoryProvider(const _di_IOTAFileHistoryProvider HistoryProvider) = 0 ;
	virtual void __fastcall RemoveNotifier(int Index) = 0 ;
	virtual void __fastcall RevertTemporaryLabel(const System::WideString ALabelName) = 0 ;
	virtual void __fastcall UnregisterHistoryProvider(int Index) = 0 ;
	virtual void __fastcall UpdateProviders() = 0 ;
	__property int Count = {read=Get_Count};
	__property _di_IOTAFileHistoryProvider FileHistoryProvider[int Index] = {read=GetFileHistoryProvider};
};

__interface  INTERFACE_UUID("{286AC9E5-875A-4402-AF70-8ACDD6757EC8}") IOTAFileHistoryNotifier  : public Toolsapi::IOTANotifier 
{
	virtual void __fastcall ProvidersUpdated() = 0 ;
};

__interface  INTERFACE_UUID("{62711089-2DB3-4C39-B493-CABF73B22174}") IOTAAsynchronousHistoryUpdater  : public System::IInterface 
{
	virtual void __fastcall Completed() = 0 ;
	virtual bool __fastcall UpdateHistoryItems(_di_IOTAFileHistory FileHistory, int FirstNewIndex, int LastNewIndex) = 0 ;
};

__interface  INTERFACE_UUID("{B8CDB02D-93D8-4088-AE03-A28052AD0FAD}") IOTAFileHistoryProvider  : public IDispatch 
{
	virtual HRESULT __safecall Get_Ident(System::WideString &__Get_Ident_result) = 0 ;
	virtual HRESULT __safecall Get_Name(System::WideString &__Get_Name_result) = 0 ;
	virtual HRESULT __safecall GetFileHistory(const System::WideString AFileName, _di_IOTAFileHistory &__GetFileHistory_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::WideString _scw_Get_Ident() { System::WideString __r; HRESULT __hr = Get_Ident(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property System::WideString Ident = {read=_scw_Get_Ident};
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::WideString _scw_Get_Name() { System::WideString __r; HRESULT __hr = Get_Name(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property System::WideString Name = {read=_scw_Get_Name};
};

__interface  INTERFACE_UUID("{BE67C423-C2BC-42D2-BDAF-F859B04A369E}") IOTAAsynchronousHistoryProvider  : public System::IInterface 
{
	virtual void __fastcall StartAsynchronousUpdate(const System::WideString AFileName, const _di_IOTAAsynchronousHistoryUpdater AsynchronousHistoryUpdater) = 0 ;
};

__interface  INTERFACE_UUID("{EF5F011A-413C-4B09-92D5-16BC8A8F7C08}") IOTAAsynchronousHistoryProvider150  : public System::IInterface 
{
	virtual void __fastcall TerminateAsynchronousUpdate(const System::WideString AFileName, bool WaitForTerminate) = 0 ;
};

__interface  INTERFACE_UUID("{92E624D2-A7CD-4C89-9B4E-71170955E96C}") IOTAFileHistory  : public IDispatch 
{
	virtual HRESULT __safecall Get_Count(int &__Get_Count_result) = 0 ;
	virtual HRESULT __safecall GetAuthor(int Index, System::WideString &__GetAuthor_result) = 0 ;
	virtual HRESULT __safecall GetComment(int Index, System::WideString &__GetComment_result) = 0 ;
	virtual HRESULT __safecall GetContent(int Index, _di_IStream &__GetContent_result) = 0 ;
	virtual HRESULT __safecall GetDate(int Index, System::TDateTime &__GetDate_result) = 0 ;
	virtual HRESULT __safecall GetIdent(int Index, System::WideString &__GetIdent_result) = 0 ;
	virtual HRESULT __safecall GetHistoryStyle(int Index, TOTAHistoryStyle &__GetHistoryStyle_result) = 0 ;
	virtual HRESULT __safecall GetLabelCount(int Index, int &__GetLabelCount_result) = 0 ;
	virtual HRESULT __safecall GetLabels(int Index, int LabelIndex, System::WideString &__GetLabels_result) = 0 ;
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::WideString _scw_GetAuthor(int Index) { System::WideString __r; HRESULT __hr = GetAuthor(Index, __r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property System::WideString Author[int Index] = {read=_scw_GetAuthor};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_Get_Count() { int __r; HRESULT __hr = Get_Count(__r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property int Count = {read=_scw_Get_Count};
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::WideString _scw_GetComment(int Index) { System::WideString __r; HRESULT __hr = GetComment(Index, __r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property System::WideString Comment[int Index] = {read=_scw_GetComment};
	#pragma option push -w-inl
	/* safecall wrapper */ inline _di_IStream _scw_GetContent(int Index) { _di_IStream __r; HRESULT __hr = GetContent(Index, __r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property _di_IStream Content[int Index] = {read=_scw_GetContent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::TDateTime _scw_GetDate(int Index) { System::TDateTime __r; HRESULT __hr = GetDate(Index, __r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property System::TDateTime Date[int Index] = {read=_scw_GetDate};
	#pragma option push -w-inl
	/* safecall wrapper */ inline TOTAHistoryStyle _scw_GetHistoryStyle(int Index) { TOTAHistoryStyle __r; HRESULT __hr = GetHistoryStyle(Index, __r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property TOTAHistoryStyle HistoryStyle[int Index] = {read=_scw_GetHistoryStyle};
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::WideString _scw_GetIdent(int Index) { System::WideString __r; HRESULT __hr = GetIdent(Index, __r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property System::WideString Ident[int Index] = {read=_scw_GetIdent};
	#pragma option push -w-inl
	/* safecall wrapper */ inline int _scw_GetLabelCount(int Index) { int __r; HRESULT __hr = GetLabelCount(Index, __r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property int LabelCount[int Index] = {read=_scw_GetLabelCount};
	#pragma option push -w-inl
	/* safecall wrapper */ inline System::WideString _scw_GetLabels(int Index, int LabelIndex) { System::WideString __r; HRESULT __hr = GetLabels(Index, LabelIndex, __r); System::CheckSafecallResult(__hr); return __r; }
	#pragma option pop
	__property System::WideString Labels[int Index][int LabelIndex] = {read=_scw_GetLabels};
};

__interface  INTERFACE_UUID("{93437601-728C-4397-83AE-DAA64A9BA3D1}") IOTAFileHistoryHint  : public System::IInterface 
{
	virtual System::UnicodeString __fastcall GetHintStr(int Index) = 0 ;
	__property System::UnicodeString HintStr[int Index] = {read=GetHintStr};
};

__interface  INTERFACE_UUID("{4443660D-A0D7-4F25-8842-C576E341F2A8}") IOTAAnnotationLineProvider  : public System::IInterface 
{
	virtual int __fastcall GetCount() = 0 ;
	virtual System::UnicodeString __fastcall GetGutterInfo(int Index) = 0 ;
	virtual int __fastcall GetIntensity(int Index) = 0 ;
	virtual int __fastcall GetMaxGutterWidth() = 0 ;
	virtual System::UnicodeString __fastcall GetHintStr(int Index) = 0 ;
	__property int Count = {read=GetCount};
	__property System::UnicodeString GutterInfo[int Index] = {read=GetGutterInfo};
	__property int MaxGutterWidth = {read=GetMaxGutterWidth};
	__property System::UnicodeString HintStr[int Index] = {read=GetHintStr};
	__property int Intensity[int Index] = {read=GetIntensity};
};

__interface  INTERFACE_UUID("{1888C1E9-CB2F-4889-84F6-0BA01A25EF1F}") IOTAAnnotationCompletion  : public System::IInterface 
{
	virtual void __fastcall AnnotationComplete(const _di_IOTAAnnotationLineProvider AnnotationLineProvider) = 0 ;
};

__interface  INTERFACE_UUID("{29769D00-295C-43D9-9D7C-4FF0184B850B}") IOTAAsynchronousAnnotationProvider  : public System::IInterface 
{
	virtual bool __fastcall CanAnnotateFile(const System::UnicodeString FileName) = 0 ;
	virtual void __fastcall StartAsynchronousUpdate(const System::UnicodeString FileName, int FileHistoryIndex, const _di_IOTAAnnotationCompletion AnnotationCompletion) = 0 ;
};

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Filehistoryapi */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FILEHISTORYAPI)
using namespace Filehistoryapi;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// FilehistoryapiHPP
