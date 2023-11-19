// ************************************************************************ //
// WARNING                                                                    
// -------                                                                    
// The types declared in this file were generated from data read from a       
// Type Library. If this type library is explicitly or indirectly (via        
// another type library referring to this type library) re-imported, or the   
// 'Refresh' command of the Type Library Editor activated while editing the   
// Type Library, the contents of this file will be regenerated and all        
// manual modifications will be lost.                                         
// ************************************************************************ //

// $Rev: 48730 $
// File generated on 22/05/2012 10:26:39 from Type Library described below.

// ************************************************************************  //
// Type Lib: XP\MSO.dll (1)
// LIBID: {2DF8D04C-5BFA-101B-BDE5-00AA0044DE52}
// LCID: 0
// Helpfile: C:\OLB\XP\vbaof10.chm 
// HelpString: Microsoft Office 10.0 Object Library
// DepndLst: 
//   (1) v2.0 stdole, (C:\Windows\SysWOW64\stdole2.tlb)
// SYS_KIND: SYS_WIN32
// Cmdline:
//   tlibimp  -C+ -Fe_XP -CE_XP_SRVR -Ha- -Hr+ -HpsOfficeXP -Yp+ -D.\cppXP -Cv-  -Hs- -Ha- XP\MSO.dll
// ************************************************************************ //
#ifndef   Office_XP_SRVRH
#define   Office_XP_SRVRH

#pragma option push -b -a4 -w-inl -w-8118

#if !defined(__UTILCLS_H)
#include <utilcls.h>
#endif
#if !defined(__UTILCLS_H_VERSION) || (__UTILCLS_H_VERSION < 0x0700)
//
// The code generated by the TLIBIMP utility or the Import|TypeLibrary 
// and Import|ActiveX feature of C++Builder rely on specific versions of
// the header file UTILCLS.H found in the INCLUDE\VCL directory. If an 
// older version of the file is detected, you probably need an update/patch.
//
#error "This file requires a newer version of the header UTILCLS.H" \
       "You need to apply an update/patch to your copy of C++Builder"
#endif
#include <olectl.h>
#include <ocidl.h>
#if !defined(_NO_VCL)
#include <System.Win.StdVCL.hpp>
#endif  //   _NO_VCL
#include <ocxproxy.h>

#include "Office_XP.h"
namespace Office_xp
{

// *********************************************************************//
// HelpString: Microsoft Office 10.0 Object Library
// Version:    2.2
// *********************************************************************//

// SKIPPING COCLASS: CommandBars          - Configured to skip Servers
// SKIPPING COCLASS: CommandBarComboBox   - Configured to skip Servers
// SKIPPING COCLASS: CommandBarButton     - Configured to skip Servers
// SKIPPING COCLASS: MsoEnvelope          - Configured to skip Servers
};     // namespace Office_xp

#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using  namespace Office_xp;
#endif

#pragma option pop

#endif // Office_XP_SRVRH
