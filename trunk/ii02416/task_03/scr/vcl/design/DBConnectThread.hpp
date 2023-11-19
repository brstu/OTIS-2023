// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBConnectThread.pas' rev: 35.00 (Windows)

#ifndef DbconnectthreadHPP
#define DbconnectthreadHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <System.Generics.Collections.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Controls.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dbconnectthread
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TThreadedMessageDialog;
class DELPHICLASS TThreadedMessageDialogThread;
//-- type declarations -------------------------------------------------------
typedef System::Sysutils::_di_TProc TWorkCompleteProc;

typedef System::DelphiInterface<System::Sysutils::TProc__1<System::UnicodeString> > TFinishProc;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TThreadedMessageDialog : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Generics::Collections::TList__1<System::Classes::TThread*>* FThreads;
	
public:
	__fastcall TThreadedMessageDialog();
	__fastcall virtual ~TThreadedMessageDialog();
	bool __fastcall ShowMessage(const System::UnicodeString AMessage, TThreadedMessageDialogThread* AThread, System::Sysutils::_di_TProc AWorkCompletProc, /* out */ System::UnicodeString &AErrorMessage, unsigned ATimeOut = (unsigned)(0x3e8));
	__property System::Generics::Collections::TList__1<System::Classes::TThread*>* Threads = {read=FThreads};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TThreadedMessageDialogThread : public System::Classes::TThread
{
	typedef System::Classes::TThread inherited;
	
private:
	System::TObject* FLock;
	System::TObject* FCallbackLock;
	System::Generics::Collections::TList__1<System::TObject*>* FOwnedObjects;
	System::Sysutils::_di_TProc FWorkCompleteProc;
	System::DelphiInterface<System::Sysutils::TProc__1<System::UnicodeString> > FFinishProc;
	void __fastcall LockAndCallback(System::TObject* AObject, System::Sysutils::_di_TProc AProc);
	
protected:
	virtual bool __fastcall DoWork(/* out */ System::UnicodeString &AErrorMessage) = 0 ;
	
public:
	__fastcall TThreadedMessageDialogThread();
	__fastcall virtual ~TThreadedMessageDialogThread();
	virtual void __fastcall Execute();
	void __fastcall ConnectCallbacks(System::Sysutils::_di_TProc AWorkCompleteProc, System::DelphiInterface<System::Sysutils::TProc__1<System::UnicodeString> > AFinishProc);
	void __fastcall DisconnectCallbacks();
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Dbconnectthread */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DBCONNECTTHREAD)
using namespace Dbconnectthread;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbconnectthreadHPP
