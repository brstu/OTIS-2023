// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.DdeMan.pas' rev: 35.00 (Windows)

#ifndef Vcl_DdemanHPP
#define Vcl_DdemanHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <Vcl.Forms.hpp>
#include <Winapi.DDEml.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Ddeman
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TDdeClientConv;
class DELPHICLASS TDdeClientItem;
class DELPHICLASS TDdeServerConv;
class DELPHICLASS TDdeServerItem;
class DELPHICLASS TDdeMgr;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TDataMode : unsigned char { ddeAutomatic, ddeManual };

typedef void __fastcall (__closure *TMacroEvent)(System::TObject* Sender, System::Classes::TStrings* Msg);

class PASCALIMPLEMENTATION TDdeClientConv : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	System::UnicodeString FDdeService;
	System::UnicodeString FDdeTopic;
	tagCONVINFO FCnvInfo;
	System::Classes::TList* FItems;
	int FDdeFmt;
	System::Classes::TNotifyEvent FOnClose;
	System::Classes::TNotifyEvent FOnOpen;
	System::UnicodeString FAppName;
	TDataMode FDataMode;
	TDataMode FConnectMode;
	bool FWaitStat;
	bool FFormatChars;
	NativeUInt FConv;
	NativeUInt FHszApp;
	NativeUInt FHszTopic;
	void __fastcall SetDdeService(const System::UnicodeString Value);
	void __fastcall SetDdeTopic(const System::UnicodeString Value);
	void __fastcall SetService(const System::UnicodeString Value);
	void __fastcall SetTopic(const System::UnicodeString Value);
	void __fastcall SetConnectMode(TDataMode NewMode);
	void __fastcall SetFormatChars(bool NewFmt);
	void __fastcall XactComplete();
	void __fastcall SrvrDisconnect();
	void __fastcall DataChange(NativeUInt DdeDat, NativeUInt hszIt);
	
protected:
	bool __fastcall CreateDdeConv(NativeUInt FHszApp, NativeUInt FHszTopic);
	System::Classes::TPersistent* __fastcall GetCliItemByName(const System::UnicodeString ItemName);
	System::Classes::TPersistent* __fastcall GetCliItemByCtrl(TDdeClientItem* ACtrl);
	virtual void __fastcall Loaded();
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	void __fastcall ReadLinkInfo(System::Classes::TReader* Reader);
	void __fastcall WriteLinkInfo(System::Classes::TWriter* Writer);
	bool __fastcall OnSetItem(TDdeClientItem* aCtrl, const System::UnicodeString S);
	void __fastcall OnAttach(TDdeClientItem* aCtrl);
	void __fastcall OnDetach(TDdeClientItem* aCtrl);
	DYNAMIC void __fastcall Close();
	DYNAMIC void __fastcall Open();
	bool __fastcall ChangeLink(const System::UnicodeString App, const System::UnicodeString Topic, const System::UnicodeString Item);
	void __fastcall ClearItems();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	
public:
	__fastcall virtual TDdeClientConv(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TDdeClientConv();
	bool __fastcall PasteLink();
	bool __fastcall OpenLink();
	bool __fastcall SetLink(const System::UnicodeString Service, const System::UnicodeString Topic);
	void __fastcall CloseLink();
	bool __fastcall StartAdvise();
	bool __fastcall PokeDataLines(const System::UnicodeString Item, System::Classes::TStrings* Data);
	bool __fastcall ExecuteMacroLines(System::Classes::TStrings* Cmd, bool waitFlg);
	bool __fastcall PokeData(const System::UnicodeString Item, char * Data);
	bool __fastcall ExecuteMacro(char * Cmd, bool waitFlg);
	char * __fastcall RequestData(const System::UnicodeString Item);
#ifndef _WIN64
	__property NativeUInt Conv = {read=FConv, nodefault};
#else /* _WIN64 */
	__property NativeUInt Conv = {read=FConv};
#endif /* _WIN64 */
	__property int DdeFmt = {read=FDdeFmt, nodefault};
	__property bool WaitStat = {read=FWaitStat, nodefault};
	__property TDataMode DataMode = {read=FDataMode, write=FDataMode, nodefault};
	
__published:
	__property System::UnicodeString ServiceApplication = {read=FAppName, write=FAppName};
	__property System::UnicodeString DdeService = {read=FDdeService, write=SetDdeService};
	__property System::UnicodeString DdeTopic = {read=FDdeTopic, write=SetDdeTopic};
	__property TDataMode ConnectMode = {read=FConnectMode, write=SetConnectMode, default=0};
	__property bool FormatChars = {read=FFormatChars, write=SetFormatChars, default=0};
	__property System::Classes::TNotifyEvent OnClose = {read=FOnClose, write=FOnClose};
	__property System::Classes::TNotifyEvent OnOpen = {read=FOnOpen, write=FOnOpen};
};


class PASCALIMPLEMENTATION TDdeClientItem : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	System::Classes::TStrings* FLines;
	TDdeClientConv* FDdeClientConv;
	System::UnicodeString FDdeClientItem;
	System::Classes::TNotifyEvent FOnChange;
	System::UnicodeString __fastcall GetText();
	void __fastcall SetDdeClientItem(const System::UnicodeString Val);
	void __fastcall SetDdeClientConv(TDdeClientConv* Val);
	void __fastcall SetText(const System::UnicodeString S);
	void __fastcall SetLines(System::Classes::TStrings* L);
	void __fastcall OnAdvise();
	
protected:
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	
public:
	__fastcall virtual TDdeClientItem(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TDdeClientItem();
	
__published:
	__property System::UnicodeString Text = {read=GetText, write=SetText};
	__property System::Classes::TStrings* Lines = {read=FLines, write=SetLines};
	__property TDdeClientConv* DdeConv = {read=FDdeClientConv, write=SetDdeClientConv};
	__property System::UnicodeString DdeItem = {read=FDdeClientItem, write=SetDdeClientItem};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
};


class PASCALIMPLEMENTATION TDdeServerConv : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	System::Classes::TNotifyEvent FOnOpen;
	System::Classes::TNotifyEvent FOnClose;
	TMacroEvent FOnExecuteMacro;
	
protected:
	DYNAMIC void __fastcall Connect();
	DYNAMIC void __fastcall Disconnect();
	
public:
	__fastcall virtual TDdeServerConv(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TDdeServerConv();
	int __fastcall ExecuteMacro(NativeUInt Data);
	
__published:
	__property System::Classes::TNotifyEvent OnOpen = {read=FOnOpen, write=FOnOpen};
	__property System::Classes::TNotifyEvent OnClose = {read=FOnClose, write=FOnClose};
	__property TMacroEvent OnExecuteMacro = {read=FOnExecuteMacro, write=FOnExecuteMacro};
};


class PASCALIMPLEMENTATION TDdeServerItem : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	System::Classes::TStrings* FLines;
	TDdeServerConv* FServerConv;
	System::Classes::TNotifyEvent FOnChange;
	System::Classes::TNotifyEvent FOnPokeData;
	int FFmt;
	void __fastcall ValueChanged();
	
protected:
	System::UnicodeString __fastcall GetText();
	void __fastcall SetText(const System::UnicodeString Item);
	void __fastcall SetLines(System::Classes::TStrings* Value);
	void __fastcall SetServerConv(TDdeServerConv* SConv);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	
public:
	__fastcall virtual TDdeServerItem(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TDdeServerItem();
	int __fastcall PokeData(NativeUInt Data);
	void __fastcall CopyToClipboard();
	DYNAMIC void __fastcall Change();
	__property int Fmt = {read=FFmt, nodefault};
	
__published:
	__property TDdeServerConv* ServerConv = {read=FServerConv, write=SetServerConv};
	__property System::UnicodeString Text = {read=GetText, write=SetText};
	__property System::Classes::TStrings* Lines = {read=FLines, write=SetLines};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property System::Classes::TNotifyEvent OnPokeData = {read=FOnPokeData, write=FOnPokeData};
};


class PASCALIMPLEMENTATION TDdeMgr : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	System::UnicodeString FAppName;
	System::Classes::TList* FConvs;
	System::Classes::TList* FCliConvs;
	System::Classes::TList* FConvCtrls;
	System::Word FLinkClipFmt;
	NativeUInt FHszApp;
	int FDdeInstId;
	void __fastcall Disconnect(System::Classes::TComponent* DdeSrvrConv);
	int __fastcall GetDdeInstId();
	System::Classes::TComponent* __fastcall GetSrvrConv(const System::UnicodeString Topic);
	bool __fastcall AllowConnect(NativeUInt hszApp, NativeUInt hszTopic);
	NativeUInt __fastcall AllowWildConnect(NativeUInt hszApp, NativeUInt hszTopic);
	bool __fastcall Connect(NativeUInt Conv, NativeUInt hszTopic, bool SameInst);
	void __fastcall PostDataChange(const System::UnicodeString Topic, System::UnicodeString Item);
	void __fastcall SetAppName(const System::UnicodeString Name);
	void __fastcall SetDdeInstId(const int ID);
	void __fastcall ResetAppName();
	TDdeServerConv* __fastcall GetServerConv(const System::UnicodeString Topic);
	void __fastcall InsertServerConv(TDdeServerConv* SConv);
	void __fastcall RemoveServerConv(TDdeServerConv* SConv);
	Vcl::Forms::TForm* __fastcall GetForm(const System::UnicodeString Topic);
	
public:
	__fastcall virtual TDdeMgr(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TDdeMgr();
	System::UnicodeString __fastcall GetExeName _DEPRECATED_ATTRIBUTE0 ();
	__property int DdeInstId = {read=GetDdeInstId, write=SetDdeInstId, nodefault};
	__property System::UnicodeString AppName = {read=FAppName, write=SetAppName};
	__property System::Word LinkClipFmt = {read=FLinkClipFmt, nodefault};
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE TDdeMgr* ddeMgr;
extern DELPHI_PACKAGE bool __fastcall GetPasteLinkInfo(System::UnicodeString &Service, System::UnicodeString &Topic, System::UnicodeString &Item);
}	/* namespace Ddeman */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_DDEMAN)
using namespace Vcl::Ddeman;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_DdemanHPP
