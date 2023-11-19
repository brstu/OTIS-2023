// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'PlatformConst.pas' rev: 35.00 (Windows)

#ifndef PlatformconstHPP
#define PlatformconstHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Generics.Collections.hpp>

//-- user supplied -----------------------------------------------------------

namespace Platformconst
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
#define cWin32Platform L"Win32"
#define cWinNX32Platform L"WinNX32"
#define cWinIoT32Platform L"WinIoT32"
#define cWinArm32Platform L"WinARM32"
#define cWinArmPlatform L"WinARM32"
#define cOSX32Platform L"OSX32"
#define cWin64Platform L"Win64"
#define cLinux32Platform L"Linux32"
#define cAndroidArm32Platform L"Android"
#define cAndroid32ArmPlatform L"Android"
#define cAndroidPlatform L"Android"
#define ciOSSimulator32Platform L"iOSSimulator"
#define ciOSSimulator64Platform L"iOSSimulator64"
#define ciOSSimulatorPlatform L"iOSSimulator"
#define ciOSDevice32Platform L"iOSDevice32"
#define ciOSDevice64Platform L"iOSDevice64"
#define ciOSDevicePlatform L"iOSDevice32"
#define cLinux64Platform L"Linux64"
#define cOSX64Platform L"OSX64"
#define cLinuxArm32Platform L"LinuxARM32"
#define cLinuxArm64Platform L"LinuxARM64"
#define cAndroidArm64Platform L"Android64"
#define cAndroid64ArmPlatform L"Android64"
#define cOSXArm64Platform L"OSXARM64"
#define cWinArm64Platform L"WinARM64"
#define ciOSSimulatorArm64Platform L"iOSSimARM64"
#define cUndefinedFamilyName L"Unknown"
#define cWindowsFamilyName L"Windows"
#define cOSXFamilyName L"macOS"
#define ciOSFamilyName L"iOS"
#define cAndroidFamilyName L"Android"
#define cLinuxFamilyName L"Linux"
extern DELPHI_PACKAGE System::DynamicArray<System::UnicodeString> __fastcall GetAllPlatforms();
}	/* namespace Platformconst */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_PLATFORMCONST)
using namespace Platformconst;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// PlatformconstHPP
