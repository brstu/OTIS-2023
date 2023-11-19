// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.Clipbrd.pas' rev: 35.00 (Windows)

#ifndef Vcl_ClipbrdHPP
#define Vcl_ClipbrdHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.Graphics.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Clipbrd
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TClipboard;
class DELPHICLASS EClipboardException;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TClipboard : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	int FOpenRefCount;
	HWND FClipboardWindow;
	bool FAllocated;
	bool FEmptied;
	void __fastcall Adding();
	void __fastcall AssignGraphic(Vcl::Graphics::TGraphic* Source);
	void __fastcall AssignPicture(Vcl::Graphics::TPicture* Source);
	void __fastcall AssignToBitmap(Vcl::Graphics::TBitmap* Dest);
	void __fastcall AssignToMetafile(Vcl::Graphics::TMetafile* Dest);
	void __fastcall AssignToPicture(Vcl::Graphics::TPicture* Dest);
	System::UnicodeString __fastcall GetAsText();
	HWND __fastcall GetClipboardWindow();
	int __fastcall GetFormatCount();
	System::Word __fastcall GetFormats(int Index);
	void __fastcall SetAsText(const System::UnicodeString Value);
	
protected:
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	void __fastcall MainWndProc(Winapi::Messages::TMessage &Message);
	void __fastcall SetBuffer(System::Word Format, void *Buffer, int Size);
#ifndef _WIN64
	__property HWND Handle = {read=GetClipboardWindow, nodefault};
#else /* _WIN64 */
	__property HWND Handle = {read=GetClipboardWindow};
#endif /* _WIN64 */
	__property int OpenRefCount = {read=FOpenRefCount, nodefault};
	
public:
	__fastcall virtual ~TClipboard();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual void __fastcall Clear();
	virtual void __fastcall Close();
	System::Classes::TComponent* __fastcall GetComponent(System::Classes::TComponent* Owner, System::Classes::TComponent* Parent);
	NativeUInt __fastcall GetAsHandle(System::Word Format);
	bool __fastcall HasFormat(System::Word Format);
	virtual void __fastcall Open();
	void __fastcall SetComponent(System::Classes::TComponent* Component);
	void __fastcall SetAsHandle(System::Word Format, NativeUInt Value);
	int __fastcall GetTextBuf(System::WideChar * Buffer, int BufSize);
	void __fastcall SetTextBuf(System::WideChar * Buffer);
	__property System::UnicodeString AsText = {read=GetAsText, write=SetAsText};
	__property int FormatCount = {read=GetFormatCount, nodefault};
	__property System::Word Formats[int Index] = {read=GetFormats};
public:
	/* TObject.Create */ inline __fastcall TClipboard() : System::Classes::TPersistent() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EClipboardException : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EClipboardException(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EClipboardException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EClipboardException(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EClipboardException(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EClipboardException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EClipboardException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EClipboardException(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EClipboardException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EClipboardException(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EClipboardException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EClipboardException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EClipboardException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EClipboardException() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::Word CF_PICTURE;
extern DELPHI_PACKAGE System::Word CF_COMPONENT;
extern DELPHI_PACKAGE TClipboard* __fastcall Clipboard(void);
extern DELPHI_PACKAGE TClipboard* __fastcall SetClipboard(TClipboard* NewClipboard);
}	/* namespace Clipbrd */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_CLIPBRD)
using namespace Vcl::Clipbrd;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_ClipbrdHPP
