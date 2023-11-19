// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'MetaSupport.pas' rev: 35.00 (Windows)

#ifndef MetasupportHPP
#define MetasupportHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <System.Types.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.Printers.hpp>

//-- user supplied -----------------------------------------------------------

namespace Metasupport
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
typedef Vcl::Graphics::TMetafile* __fastcall (__closure *TMetaPopulateProc)(HDC aReferenceHandle, int aNaturalWidth, int aNaturalHeight);

typedef void __fastcall (__closure *TMetaProgressProc)(int aStep, int aSteps);

typedef void __fastcall (__closure *TMetaPostWorkProc)(Vcl::Graphics::TMetafileCanvas* ACanvas, const System::Types::TPoint &AOnPage, const System::Types::TPoint &ATotalPages, const System::Types::TRect &AWorkArea);

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE float MetaPrintBorderSize;
extern DELPHI_PACKAGE float MetaPrintHeaderSize;
extern DELPHI_PACKAGE float MetaPrintOverlapSize;
static const bool MetaPrintHeaderDefault = true;
static const bool MetaPrintToSingleDefault = false;
static const bool MetaPrintBordersDefault = true;
extern DELPHI_PACKAGE System::ResourceString _SMetaSaveFilterCaption;
#define Metasupport_SMetaSaveFilterCaption System::LoadResourceString(&Metasupport::_SMetaSaveFilterCaption)
extern DELPHI_PACKAGE System::ResourceString _SMetaSaveTitleCaption;
#define Metasupport_SMetaSaveTitleCaption System::LoadResourceString(&Metasupport::_SMetaSaveTitleCaption)
extern DELPHI_PACKAGE System::ResourceString _SMetaPrint1dCounterCaption;
#define Metasupport_SMetaPrint1dCounterCaption System::LoadResourceString(&Metasupport::_SMetaPrint1dCounterCaption)
extern DELPHI_PACKAGE System::ResourceString _SMetaPrint2dCounterCaption;
#define Metasupport_SMetaPrint2dCounterCaption System::LoadResourceString(&Metasupport::_SMetaPrint2dCounterCaption)
extern DELPHI_PACKAGE bool __fastcall MetaSave(TMetaPopulateProc APopulate, System::UnicodeString &APath, const System::UnicodeString ATitle = System::UnicodeString());
extern DELPHI_PACKAGE void __fastcall MetaPrint(TMetaPopulateProc APopulate, const System::UnicodeString AHeaderCaption, bool APrintHeader = true, bool APrintBorders = true, bool APrintToSingle = false, TMetaProgressProc AProgress = 0x0, Vcl::Graphics::TFont* AFont = (Vcl::Graphics::TFont*)(0x0), TMetaPostWorkProc APostWorkProc = 0x0);
}	/* namespace Metasupport */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_METASUPPORT)
using namespace Metasupport;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// MetasupportHPP
