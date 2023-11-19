// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.Imaging.pnglang.pas' rev: 35.00 (Windows)

#ifndef Vcl_Imaging_PnglangHPP
#define Vcl_Imaging_PnglangHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Imaging
{
namespace Pnglang
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::ResourceString _EPngInvalidCRCText;
#define Vcl_Imaging_Pnglang_EPngInvalidCRCText System::LoadResourceString(&Vcl::Imaging::Pnglang::_EPngInvalidCRCText)
extern DELPHI_PACKAGE System::ResourceString _EPNGInvalidIHDRText;
#define Vcl_Imaging_Pnglang_EPNGInvalidIHDRText System::LoadResourceString(&Vcl::Imaging::Pnglang::_EPNGInvalidIHDRText)
extern DELPHI_PACKAGE System::ResourceString _EPNGMissingMultipleIDATText;
#define Vcl_Imaging_Pnglang_EPNGMissingMultipleIDATText System::LoadResourceString(&Vcl::Imaging::Pnglang::_EPNGMissingMultipleIDATText)
extern DELPHI_PACKAGE System::ResourceString _EPNGZLIBErrorText;
#define Vcl_Imaging_Pnglang_EPNGZLIBErrorText System::LoadResourceString(&Vcl::Imaging::Pnglang::_EPNGZLIBErrorText)
extern DELPHI_PACKAGE System::ResourceString _EPNGInvalidPaletteText;
#define Vcl_Imaging_Pnglang_EPNGInvalidPaletteText System::LoadResourceString(&Vcl::Imaging::Pnglang::_EPNGInvalidPaletteText)
extern DELPHI_PACKAGE System::ResourceString _EPNGInvalidFileHeaderText;
#define Vcl_Imaging_Pnglang_EPNGInvalidFileHeaderText System::LoadResourceString(&Vcl::Imaging::Pnglang::_EPNGInvalidFileHeaderText)
extern DELPHI_PACKAGE System::ResourceString _EPNGIHDRNotFirstText;
#define Vcl_Imaging_Pnglang_EPNGIHDRNotFirstText System::LoadResourceString(&Vcl::Imaging::Pnglang::_EPNGIHDRNotFirstText)
extern DELPHI_PACKAGE System::ResourceString _EPNGNotExistsText;
#define Vcl_Imaging_Pnglang_EPNGNotExistsText System::LoadResourceString(&Vcl::Imaging::Pnglang::_EPNGNotExistsText)
extern DELPHI_PACKAGE System::ResourceString _EPNGSizeExceedsText;
#define Vcl_Imaging_Pnglang_EPNGSizeExceedsText System::LoadResourceString(&Vcl::Imaging::Pnglang::_EPNGSizeExceedsText)
extern DELPHI_PACKAGE System::ResourceString _EPNGUnknownPalEntryText;
#define Vcl_Imaging_Pnglang_EPNGUnknownPalEntryText System::LoadResourceString(&Vcl::Imaging::Pnglang::_EPNGUnknownPalEntryText)
extern DELPHI_PACKAGE System::ResourceString _EPNGMissingPaletteText;
#define Vcl_Imaging_Pnglang_EPNGMissingPaletteText System::LoadResourceString(&Vcl::Imaging::Pnglang::_EPNGMissingPaletteText)
extern DELPHI_PACKAGE System::ResourceString _EPNGUnknownCriticalChunkText;
#define Vcl_Imaging_Pnglang_EPNGUnknownCriticalChunkText System::LoadResourceString(&Vcl::Imaging::Pnglang::_EPNGUnknownCriticalChunkText)
extern DELPHI_PACKAGE System::ResourceString _EPNGUnknownCompressionText;
#define Vcl_Imaging_Pnglang_EPNGUnknownCompressionText System::LoadResourceString(&Vcl::Imaging::Pnglang::_EPNGUnknownCompressionText)
extern DELPHI_PACKAGE System::ResourceString _EPNGUnknownInterlaceText;
#define Vcl_Imaging_Pnglang_EPNGUnknownInterlaceText System::LoadResourceString(&Vcl::Imaging::Pnglang::_EPNGUnknownInterlaceText)
extern DELPHI_PACKAGE System::ResourceString _EPNGUnknownColorTypeText;
#define Vcl_Imaging_Pnglang_EPNGUnknownColorTypeText System::LoadResourceString(&Vcl::Imaging::Pnglang::_EPNGUnknownColorTypeText)
extern DELPHI_PACKAGE System::ResourceString _EPNGCannotAssignChunkText;
#define Vcl_Imaging_Pnglang_EPNGCannotAssignChunkText System::LoadResourceString(&Vcl::Imaging::Pnglang::_EPNGCannotAssignChunkText)
extern DELPHI_PACKAGE System::ResourceString _EPNGUnexpectedEndText;
#define Vcl_Imaging_Pnglang_EPNGUnexpectedEndText System::LoadResourceString(&Vcl::Imaging::Pnglang::_EPNGUnexpectedEndText)
extern DELPHI_PACKAGE System::ResourceString _EPNGNoImageDataText;
#define Vcl_Imaging_Pnglang_EPNGNoImageDataText System::LoadResourceString(&Vcl::Imaging::Pnglang::_EPNGNoImageDataText)
extern DELPHI_PACKAGE System::ResourceString _EPNGCannotAddChunkText;
#define Vcl_Imaging_Pnglang_EPNGCannotAddChunkText System::LoadResourceString(&Vcl::Imaging::Pnglang::_EPNGCannotAddChunkText)
extern DELPHI_PACKAGE System::ResourceString _EPNGCannotAddInvalidImageText;
#define Vcl_Imaging_Pnglang_EPNGCannotAddInvalidImageText System::LoadResourceString(&Vcl::Imaging::Pnglang::_EPNGCannotAddInvalidImageText)
extern DELPHI_PACKAGE System::ResourceString _EPNGCouldNotLoadResourceText;
#define Vcl_Imaging_Pnglang_EPNGCouldNotLoadResourceText System::LoadResourceString(&Vcl::Imaging::Pnglang::_EPNGCouldNotLoadResourceText)
extern DELPHI_PACKAGE System::ResourceString _EPNGOutMemoryText;
#define Vcl_Imaging_Pnglang_EPNGOutMemoryText System::LoadResourceString(&Vcl::Imaging::Pnglang::_EPNGOutMemoryText)
extern DELPHI_PACKAGE System::ResourceString _EPNGCannotChangeTransparentText;
#define Vcl_Imaging_Pnglang_EPNGCannotChangeTransparentText System::LoadResourceString(&Vcl::Imaging::Pnglang::_EPNGCannotChangeTransparentText)
extern DELPHI_PACKAGE System::ResourceString _EPNGHeaderNotPresentText;
#define Vcl_Imaging_Pnglang_EPNGHeaderNotPresentText System::LoadResourceString(&Vcl::Imaging::Pnglang::_EPNGHeaderNotPresentText)
extern DELPHI_PACKAGE System::ResourceString _EInvalidNewSize;
#define Vcl_Imaging_Pnglang_EInvalidNewSize System::LoadResourceString(&Vcl::Imaging::Pnglang::_EInvalidNewSize)
extern DELPHI_PACKAGE System::ResourceString _EInvalidSpec;
#define Vcl_Imaging_Pnglang_EInvalidSpec System::LoadResourceString(&Vcl::Imaging::Pnglang::_EInvalidSpec)
extern DELPHI_PACKAGE System::ResourceString _EPNGInvalidBitDepthText;
#define Vcl_Imaging_Pnglang_EPNGInvalidBitDepthText System::LoadResourceString(&Vcl::Imaging::Pnglang::_EPNGInvalidBitDepthText)
}	/* namespace Pnglang */
}	/* namespace Imaging */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_IMAGING_PNGLANG)
using namespace Vcl::Imaging::Pnglang;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_IMAGING)
using namespace Vcl::Imaging;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_Imaging_PnglangHPP
