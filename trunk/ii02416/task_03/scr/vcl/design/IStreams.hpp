// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'IStreams.pas' rev: 35.00 (Windows)

#ifndef IstreamsHPP
#define IstreamsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.ActiveX.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.AxCtrls.hpp>
#include <ToolsAPI.hpp>

//-- user supplied -----------------------------------------------------------

namespace Istreams
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IMemoryStream;
typedef System::DelphiInterface<IMemoryStream> _di_IMemoryStream;
class DELPHICLASS TIStreamAdapter;
class DELPHICLASS TIMemoryStream;
class DELPHICLASS TIFileStream;
class DELPHICLASS TVirtualStream;
//-- type declarations -------------------------------------------------------
typedef Toolsapi::_di_IOTAStreamModifyTime IStreamModifyTime;

__interface  INTERFACE_UUID("{CD001314-EF15-47A9-949F-B30AA85ABF15}") IMemoryStream  : public System::IInterface 
{
	virtual System::Classes::TMemoryStream* __fastcall GetMemoryStream() = 0 ;
	virtual void * __fastcall GetMemory() = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIStreamAdapter : public System::Classes::TStreamAdapter
{
	typedef System::Classes::TStreamAdapter inherited;
	
protected:
	int FModifyTime;
	
public:
	__fastcall TIStreamAdapter(System::Classes::TStream* Stream, System::Classes::TStreamOwnership Ownership);
	virtual HRESULT __stdcall Write(void * pv, unsigned cb, System::PFixedUInt pcbWritten);
	virtual HRESULT __stdcall Stat(/* out */ tagSTATSTG &statstg, unsigned grfStatFlag);
	virtual int __stdcall GetModifyTime();
	virtual void __stdcall SetModifyTime(int Value);
public:
	/* TStreamAdapter.Destroy */ inline __fastcall virtual ~TIStreamAdapter() { }
	
private:
	void *__IOTAStreamModifyTime;	// Toolsapi::IOTAStreamModifyTime 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {49F2F63F-60CB-4FD4-B12F-8167FC79B293}
	operator Toolsapi::_di_IOTAStreamModifyTime()
	{
		Toolsapi::_di_IOTAStreamModifyTime intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::IOTAStreamModifyTime*(void) { return (Toolsapi::IOTAStreamModifyTime*)&__IOTAStreamModifyTime; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIMemoryStream : public TIStreamAdapter
{
	typedef TIStreamAdapter inherited;
	
private:
	System::Classes::TMemoryStream* __fastcall GetMemoryStream();
	void * __fastcall GetMemory();
	
public:
	__fastcall TIMemoryStream(System::Classes::TMemoryStream* Stream, System::Classes::TStreamOwnership Ownership);
	__property System::Classes::TMemoryStream* MemoryStream = {read=GetMemoryStream};
public:
	/* TStreamAdapter.Destroy */ inline __fastcall virtual ~TIMemoryStream() { }
	
private:
	void *__IMemoryStream;	// IMemoryStream 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {CD001314-EF15-47A9-949F-B30AA85ABF15}
	operator _di_IMemoryStream()
	{
		_di_IMemoryStream intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IMemoryStream*(void) { return (IMemoryStream*)&__IMemoryStream; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIFileStream : public System::Classes::TStreamAdapter
{
	typedef System::Classes::TStreamAdapter inherited;
	
private:
	System::UnicodeString FFileName;
	System::Classes::TFileStream* __fastcall GetFileStream();
	
public:
	__fastcall TIFileStream(const System::UnicodeString FileName, System::Word Mode);
	virtual HRESULT __stdcall Commit(unsigned grfCommitFlags);
	virtual HRESULT __stdcall Stat(/* out */ tagSTATSTG &statstg, unsigned grfStatFlag);
	int __stdcall GetModifyTime();
	void __stdcall SetModifyTime(int Time);
	__property System::Classes::TFileStream* FileStream = {read=GetFileStream};
public:
	/* TStreamAdapter.Destroy */ inline __fastcall virtual ~TIFileStream() { }
	
private:
	void *__IOTAStreamModifyTime;	// Toolsapi::IOTAStreamModifyTime 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {49F2F63F-60CB-4FD4-B12F-8167FC79B293}
	operator Toolsapi::_di_IOTAStreamModifyTime()
	{
		Toolsapi::_di_IOTAStreamModifyTime intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Toolsapi::IOTAStreamModifyTime*(void) { return (Toolsapi::IOTAStreamModifyTime*)&__IOTAStreamModifyTime; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TVirtualStream : public Vcl::Axctrls::TOleStream
{
	typedef Vcl::Axctrls::TOleStream inherited;
	
private:
	Toolsapi::_di_IOTAStreamModifyTime FStreamModifyTime;
	
public:
	__fastcall TVirtualStream(_di_IStream AStream);
	int __fastcall GetModifyTime();
	void __fastcall SetModifyTime(int Time);
public:
	/* TOleStream.Destroy */ inline __fastcall virtual ~TVirtualStream() { }
	
};

#pragma pack(pop)

typedef void __fastcall (*TExceptionHandler)();

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE TExceptionHandler ExceptionHandler;
}	/* namespace Istreams */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ISTREAMS)
using namespace Istreams;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IstreamsHPP
