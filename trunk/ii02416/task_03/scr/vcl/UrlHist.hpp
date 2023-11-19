// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'UrlHist.pas' rev: 35.00 (Windows)

#ifndef UrlhistHPP
#define UrlhistHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.ActiveX.hpp>

//-- user supplied -----------------------------------------------------------
#include <urlhist.h>

namespace Urlhist
{
//-- forward type declarations -----------------------------------------------
struct _STATURL;
__interface DELPHIINTERFACE IEnumStatURL;
typedef System::DelphiInterface<IEnumStatURL> _di_IEnumStatURL;
__interface DELPHIINTERFACE IUrlHistoryStg;
typedef System::DelphiInterface<IUrlHistoryStg> _di_IUrlHistoryStg;
__interface DELPHIINTERFACE IUrlHistoryStg2;
typedef System::DelphiInterface<IUrlHistoryStg2> _di_IUrlHistoryStg2;
__interface DELPHIINTERFACE IUrlHistoryNotify;
typedef System::DelphiInterface<IUrlHistoryNotify> _di_IUrlHistoryNotify;
//-- type declarations -------------------------------------------------------
typedef int ADDURL_FLAG;

struct DECLSPEC_DRECORD _STATURL
{
public:
	unsigned cbSize;
	System::WideChar *pwcsUrl;
	System::WideChar *pwcsTitle;
	_FILETIME ftLastVisited;
	_FILETIME ftLastUpdated;
	_FILETIME ftExpires;
	unsigned dwFlags;
};


typedef _STATURL STATURL;

typedef _STATURL TStatUrl;

typedef _STATURL *LPSTATURL;

typedef LPSTATURL PStatUrl;

__interface  INTERFACE_UUID("{3C374A42-BAE4-11CF-BF7D-00AA006946EE}") IEnumStatURL  : public System::IInterface 
{
	virtual HRESULT __stdcall Next(unsigned celt, _STATURL &rgelt, unsigned &pceltFetched) = 0 ;
	virtual HRESULT __stdcall Skip(unsigned celt) = 0 ;
	virtual HRESULT __stdcall Reset() = 0 ;
	virtual HRESULT __stdcall Clone(/* out */ _di_IEnumStatURL &ppenum) = 0 ;
	virtual HRESULT __stdcall SetFilter(System::WideChar * poszFilter, unsigned dwFlags) = 0 ;
};

__interface  INTERFACE_UUID("{3C374A41-BAE4-11CF-BF7D-00AA006946EE}") IUrlHistoryStg  : public System::IInterface 
{
	virtual HRESULT __stdcall AddUrl(System::WideChar * pocsUrl, System::WideChar * pocsTitle, unsigned dwFlags) = 0 ;
	virtual HRESULT __stdcall DeleteUrl(System::WideChar * pocsUrl, unsigned dwFlags) = 0 ;
	virtual HRESULT __stdcall QueryUrl(System::WideChar * pocsUrl, unsigned dwFlags, _STATURL &lpSTATURL) = 0 ;
	virtual HRESULT __stdcall BindToObject(System::WideChar * pocsUrl, const GUID &riid, /* out */ void *ppvOut) = 0 ;
	virtual HRESULT __stdcall EnumUrls(/* out */ _di_IEnumStatURL &ppEnum) = 0 ;
};

__interface  INTERFACE_UUID("{AFA0DC11-C313-11D0-831A-00C04FD5AE38}") IUrlHistoryStg2  : public IUrlHistoryStg 
{
	virtual HRESULT __stdcall AddUrlAndNotify(System::WideChar * pocsUrl, System::WideChar * pocsTitle, unsigned dwFlags, System::LongBool fWriteHistory, _di_IOleCommandTarget poctNotify, System::_di_IInterface punkISFolder) = 0 ;
	virtual HRESULT __stdcall ClearHistory() = 0 ;
};

__interface  INTERFACE_UUID("{BC40BEC1-C493-11D0-831B-00C04FD5AE38}") IUrlHistoryNotify  : public IOleCommandTarget 
{
	
};

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 ADDURL_FIRST = System::Int8(0x0);
static const System::Int8 ADDURL_ADDTOHISTORYANDCACHE = System::Int8(0x0);
static const System::Int8 ADDURL_ADDTOCACHE = System::Int8(0x1);
static const int ADDURL_Max = int(0x7fffffff);
#define IID_IUrlHistoryStg L"{3C374A41-BAE4-11CF-BF7D-00AA006946EE}"
#define IID_IUrlHistoryStg2 L"{AFA0DC11-C313-11d0-831A-00C04FD5AE38}"
#define IID_IUrlHistoryNotify L"{BC40BEC1-C493-11d0-831B-00C04FD5AE38}"
#define IID_IEnumSTATURL L"{3C374A42-BAE4-11CF-BF7D-00AA006946EE}"
}	/* namespace Urlhist */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_URLHIST)
using namespace Urlhist;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// UrlhistHPP
