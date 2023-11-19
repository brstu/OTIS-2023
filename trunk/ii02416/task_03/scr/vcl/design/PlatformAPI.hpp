// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'PlatformAPI.pas' rev: 35.00 (Windows)

#ifndef PlatformapiHPP
#define PlatformapiHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <System.Types.hpp>
#include <ToolsAPI.hpp>
#include <PlatformConst.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Forms.hpp>

//-- user supplied -----------------------------------------------------------
DEFINE_GUID(IID_IOTAAndroidServicesManager,0x4C4F6CEE,0xCA06,0x46D6,0x91,0x14,0xB2,0x2F,0xA4,0xF7,0xE7,0x71);
DEFINE_GUID(IID_IOTAConnectionCallback,0x7DF7A249,0x4C27,0x4147,0xBF,0xC3,0xCA,0x99,0x59,0x16,0x50,0x43);
DEFINE_GUID(IID_IOTADesignerDevice,0xE5BED0BD,0x9908,0x47A4,0x80,0x26,0x96,0x86,0xCB,0xA8,0xDD,0x33);
DEFINE_GUID(IID_IOTADesignerDevice190,0x652602C6,0x8AC6,0x4D1F,0xBB,0x70,0xE3,0x45,0xCE,0x5F,0x05,0x55);
DEFINE_GUID(IID_IOTADesignerDevice220,0xCF55BDDE,0xEBC3,0x48A1,0xB7,0xFF,0xB8,0x43,0xC3,0x92,0x37,0x7B);
DEFINE_GUID(IID_IOTADesignerDeviceServices,0xFFF44A3C,0xB434,0x4E84,0xA5,0x8E,0xE5,0xCF,0x52,0xDA,0xB0,0x9A);
DEFINE_GUID(IID_IOTADesignerDeviceServices190,0x6DB988CC,0xAFEB,0x47CF,0xA3,0x1D,0xE6,0x9D,0xDF,0x6B,0xE0,0x68);
DEFINE_GUID(IID_IOTADesignerOSEntry,0xBBCED617,0x6FE0,0x4EFD,0x82,0x0A,0xC5,0x9B,0x42,0x25,0x88,0xA0);
DEFINE_GUID(IID_IOTADesignerOSEntry190,0x5A4CA4AE,0x19BD,0x4F75,0x9A,0x0A,0x83,0xE5,0x64,0x98,0x56,0x4E);
DEFINE_GUID(IID_IOTAExternalDevice,0xE45C3DF7,0x2C42,0x4985,0x98,0xB4,0x0E,0xF9,0x8A,0x91,0x56,0x88);
DEFINE_GUID(IID_IOTAExternalDeviceNotifier,0x6B4A238B,0x8F43,0x469A,0x98,0x1A,0xAA,0x2E,0x39,0x79,0x80,0x66);
DEFINE_GUID(IID_IOTAExternalDeviceServices,0x59CFCEEE,0xF977,0x4303,0x98,0x29,0x54,0xDE,0x3A,0x31,0xFA,0xA5);
DEFINE_GUID(IID_IOTAMobileDevice,0xC1EAA414,0xE8ED,0x4ECB,0xBA,0x30,0x69,0x1F,0xBD,0xEF,0xB6,0x90);
DEFINE_GUID(IID_IOTAMobileDeviceNotifier,0xF9CE8EFC,0xA3A2,0x4BE2,0xB8,0xF2,0x13,0xCD,0x5F,0x58,0xFF,0x41);
DEFINE_GUID(IID_IOTAMobileDeviceServices,0x3DAA5A1D,0x5C3B,0x4EA8,0xB4,0xBA,0xA7,0x90,0xE7,0x0D,0x07,0x68);
DEFINE_GUID(IID_IOTAPlatform,0x5D690469,0x8747,0x423B,0xB3,0xD4,0x32,0xC9,0x6C,0xF1,0x33,0xD8);
DEFINE_GUID(IID_IOTAPlatform160,0xBD2EAB7F,0x7FB5,0x464A,0x9C,0x97,0x88,0xDA,0x4D,0xC3,0xD1,0xF7);
DEFINE_GUID(IID_IOTAPlatform170,0xAD0481FA,0x4660,0x48CA,0x87,0x5A,0x57,0xB9,0x05,0x42,0x5E,0xA9);
DEFINE_GUID(IID_IOTAPlatform180,0xD5033082,0xDC1A,0x45DB,0xA3,0xD6,0xE1,0x26,0x6C,0x76,0xF2,0xCD);
DEFINE_GUID(IID_IOTAPlatform190,0x48C2471B,0x92E4,0x4728,0xAE,0xE2,0x6B,0xBE,0xA2,0xCA,0x08,0x60);
DEFINE_GUID(IID_IOTAPlatform200,0xB3E9C246,0x61E8,0x41B9,0x85,0x05,0x56,0x2F,0x54,0x91,0x4B,0x76);
DEFINE_GUID(IID_IOTAPlatform210,0x266CD60A,0x11EC,0x4DEF,0xB8,0xFB,0x34,0xE5,0x75,0xBB,0xDC,0x99);
DEFINE_GUID(IID_IOTAPlatform220,0x0D4CE3AB,0xF2D9,0x4AD6,0x90,0xF9,0xE6,0x7D,0x51,0x84,0x41,0x2D);
DEFINE_GUID(IID_IOTAPlatform230,0x2215945A,0x3D09,0x4750,0x9B,0x95,0xDD,0xE1,0xC5,0xA3,0xE0,0x55);
DEFINE_GUID(IID_IOTAPlatform240,0x5BF6C6CE,0x0475,0x4B66,0x8A,0xE4,0x5E,0x17,0x5F,0x72,0xB1,0xE6);
DEFINE_GUID(IID_IOTAPlatformSDK,0x62374BAA,0x7A95,0x4AE1,0xA5,0xE7,0xB6,0xCC,0x35,0x15,0x4E,0xF6);
DEFINE_GUID(IID_IOTAPlatformSDK180,0xDC2B0ADB,0x18BD,0x45D8,0xA6,0x48,0xDC,0x87,0x22,0xEB,0x7C,0x5C);
DEFINE_GUID(IID_IOTAPlatformSDKAndroid,0xE23DDE52,0x3A44,0x4650,0xB9,0x10,0x03,0xB1,0x54,0x2F,0x4B,0xEC);
DEFINE_GUID(IID_IOTAPlatformSDKAndroid210,0x4CC4CFFE,0xAF97,0x45C3,0x87,0x4D,0xB1,0xA6,0x13,0xA0,0xED,0x50);
DEFINE_GUID(IID_IOTAPlatformSDKAndroid240,0x61978519,0xB00A,0x4C41,0xAE,0x9A,0x58,0x9A,0xEC,0x60,0x92,0x18);
DEFINE_GUID(IID_IOTAPlatformSDKAndroid270,0xFAEF0B24,0x9E15,0x4205,0x99,0x04,0xC7,0x96,0xF2,0xD9,0xEF,0x33);
DEFINE_GUID(IID_IOTAPlatformSDKLinux,0xDD9D4C27,0xA20B,0x4563,0x97,0xC1,0x5E,0x70,0xCE,0xEF,0x09,0xFC);
DEFINE_GUID(IID_IOTAPlatformSDKNotifier,0x3AD83D48,0xBC8B,0x4A6A,0xAA,0x5D,0x53,0x7C,0xC3,0xB7,0x51,0x8B);
DEFINE_GUID(IID_IOTAPlatformSDKOSX,0x78FB1115,0x144C,0x4CC3,0xAB,0xB5,0x50,0xAF,0x3A,0x3E,0xF5,0x8D);
DEFINE_GUID(IID_IOTAPlatformSDKServices,0x6C659F7B,0xFD36,0x478C,0x85,0xC5,0xF2,0x94,0x2C,0x22,0x4F,0xD9);
DEFINE_GUID(IID_IOTAPlatformSDKServices180,0xA41933CA,0x8F86,0x46F3,0x83,0x5B,0x63,0xEF,0x1C,0xAD,0x97,0x83);
DEFINE_GUID(IID_IOTAPlatformSDKServices190,0xDEEC6CA6,0x7027,0x4962,0xA2,0x36,0xA2,0xDF,0x22,0x2F,0x21,0x63);
DEFINE_GUID(IID_IOTAPlatformSDKServices210,0x9A083C9D,0x8CE3,0x43E6,0xB0,0xAB,0xB7,0x0C,0x3F,0xFB,0x83,0x08);
DEFINE_GUID(IID_IOTAPlatformSDKWin10,0xF637EF32,0x9F09,0x44C2,0xBD,0x6B,0xD2,0x40,0xD9,0x4F,0x6F,0x3C);
DEFINE_GUID(IID_IOTAPlatformServices,0x7144C21F,0xD550,0x451E,0xB6,0x84,0x91,0x89,0xBD,0x21,0xB5,0x3E);
DEFINE_GUID(IID_IOTAPlatformServices160,0x8F20CD96,0x6702,0x43B8,0x87,0x6C,0xC9,0x85,0xC5,0x4C,0x9A,0xFF);
DEFINE_GUID(IID_IOTAPlatformServices220,0xDD80D595,0xFCCC,0x4764,0x9E,0xF9,0x7C,0x36,0xBA,0x5B,0x11,0xCE);
DEFINE_GUID(IID_IOTAPlatformServices230,0x775658AD,0x6A87,0x40C9,0x95,0xF0,0x6C,0xDF,0x8A,0x5A,0x83,0xC8);
DEFINE_GUID(IID_IOTAProjectPlatforms,0x4A03546D,0x37DD,0x4BDB,0xA5,0x0E,0x8B,0x5A,0xAF,0xB6,0x21,0x2F);
DEFINE_GUID(IID_IOTAProjectPlatforms160,0xE1C62726,0xBD51,0x4D4E,0xA2,0xF2,0x9A,0x8A,0x59,0xF2,0x72,0xAE);
DEFINE_GUID(IID_IOTARemoteProfile,0x5AB018C2,0x691A,0x4364,0x96,0x1B,0x8B,0x4D,0xBA,0xA7,0xD4,0x88);
DEFINE_GUID(IID_IOTARemoteProfile170,0x328380FA,0x2AB5,0x4F25,0xBC,0xCB,0x7A,0x3F,0x84,0x69,0x1D,0x43);
DEFINE_GUID(IID_IOTARemoteProfile210,0x717C625E,0x8911,0x42A7,0x86,0xA9,0xAC,0xCB,0x57,0xE0,0x07,0xE5);
DEFINE_GUID(IID_IOTARemoteProfileNotifier,0x145453C0,0xAAFE,0x487B,0x86,0xC7,0x7D,0x21,0x71,0xFA,0xF6,0x8F);
DEFINE_GUID(IID_IOTARemoteProfileNotifier170,0x84AD7E51,0xE0D0,0x4732,0x87,0x4B,0x05,0xA7,0x0E,0x2B,0xF5,0x34);
DEFINE_GUID(IID_IOTARemoteProfileServices,0xAF6D9681,0x143F,0x48FD,0xAC,0x78,0x41,0x8D,0xFC,0xF6,0xBA,0xC8);
DEFINE_GUID(IID_IOTARemoteProfileServices160,0xBC86D71D,0x8A31,0x4921,0xA2,0x7F,0x5D,0x32,0xDC,0x3A,0x9A,0x4F);
DEFINE_GUID(IID_IOTARemoteProfileServices170,0x5C996765,0x9F24,0x47B1,0xAF,0x80,0x36,0x39,0x4F,0x30,0x69,0xF9);
DEFINE_GUID(IID_IOTARemoteProfileServices180,0x6B9557F7,0x32B2,0x4706,0x81,0xFF,0x99,0x5E,0xDA,0x2F,0x31,0x1F);
DEFINE_GUID(IID_IOTARemoteProfileServices190,0xC00C8D83,0x2990,0x458A,0x8F,0xA0,0xCD,0x36,0x10,0x91,0xF9,0x24);
DEFINE_GUID(IID_IOTARemoteProfileServices230,0x9BF5A1F9,0xCE88,0x4C92,0x89,0x06,0xF1,0x23,0x07,0xD5,0x6F,0xC1);
DEFINE_GUID(IID_IPlatformContainerCategoryCreator,0xEEA5DA06,0xC1CA,0x4E64,0x8D,0x25,0x49,0xB9,0x86,0xE8,0x00,0x76);
DEFINE_GUID(IID_IPlatformContainerCreator,0x29EF0235,0x029D,0x4994,0x84,0xB0,0x08,0x1C,0x10,0xF2,0x05,0xD8);
DEFINE_GUID(IID_IPlatformProvisionInformation,0x4AE2C2FA,0x4A38,0x4686,0xB5,0xD4,0x88,0x63,0x5E,0xCD,0xD2,0x92);
DEFINE_GUID(IID_IPlatformProvisionInformation180,0xA0C2A411,0x2F5E,0x4E97,0xA5,0x8B,0x81,0x0D,0xF6,0x32,0x53,0x62);
DEFINE_GUID(IID_IPlatformProvisionInformation220,0x65D61296,0xE20F,0x4F22,0x87,0x9B,0xC5,0xAC,0xB0,0xAA,0x30,0x60);
DEFINE_GUID(IID_IPlatformResources,0xE3F87885,0xE37A,0x4B98,0xB5,0xCC,0x03,0xF4,0xEA,0x7D,0x0C,0x2C);
DEFINE_GUID(IID_IPlatformSpecificBuildAction,0x4C87E6BA,0xE248,0x40D8,0x9B,0xDA,0xE8,0xA1,0xAA,0xFE,0x5B,0x8E);
DEFINE_GUID(IID_IProjectPlatformInitialize,0x4618AD84,0xCF6D,0x40A7,0x8C,0x2B,0xB0,0x4F,0x35,0x54,0xAD,0x78);
DEFINE_GUID(IID_IiOSPlatformProvisionAction,0x12EED930,0xE88F,0x44B4,0x8B,0xAB,0xE7,0xF6,0xBC,0xE9,0xEA,0x2E);

namespace Platformapi
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IOTAPlatform160;
typedef System::DelphiInterface<IOTAPlatform160> _di_IOTAPlatform160;
__interface DELPHIINTERFACE IOTAPlatform170;
typedef System::DelphiInterface<IOTAPlatform170> _di_IOTAPlatform170;
__interface DELPHIINTERFACE IOTAPlatform180;
typedef System::DelphiInterface<IOTAPlatform180> _di_IOTAPlatform180;
__interface DELPHIINTERFACE IOTAPlatform190;
typedef System::DelphiInterface<IOTAPlatform190> _di_IOTAPlatform190;
__interface DELPHIINTERFACE IOTAPlatform200;
typedef System::DelphiInterface<IOTAPlatform200> _di_IOTAPlatform200;
__interface DELPHIINTERFACE IOTAPlatform210;
typedef System::DelphiInterface<IOTAPlatform210> _di_IOTAPlatform210;
__interface DELPHIINTERFACE IOTAPlatform220;
typedef System::DelphiInterface<IOTAPlatform220> _di_IOTAPlatform220;
__interface DELPHIINTERFACE IOTAPlatform230;
typedef System::DelphiInterface<IOTAPlatform230> _di_IOTAPlatform230;
__interface DELPHIINTERFACE IOTAPlatform240;
typedef System::DelphiInterface<IOTAPlatform240> _di_IOTAPlatform240;
__interface DELPHIINTERFACE IOTAPlatform;
typedef System::DelphiInterface<IOTAPlatform> _di_IOTAPlatform;
__interface DELPHIINTERFACE IOTAPlatformServices160;
typedef System::DelphiInterface<IOTAPlatformServices160> _di_IOTAPlatformServices160;
__interface DELPHIINTERFACE IOTAPlatformServices220;
typedef System::DelphiInterface<IOTAPlatformServices220> _di_IOTAPlatformServices220;
__interface DELPHIINTERFACE IOTAPlatformServices230;
typedef System::DelphiInterface<IOTAPlatformServices230> _di_IOTAPlatformServices230;
__interface DELPHIINTERFACE IOTAPlatformServices;
typedef System::DelphiInterface<IOTAPlatformServices> _di_IOTAPlatformServices;
struct TOTADeviceLayout;
__interface DELPHIINTERFACE IOTAMobileDevice;
typedef System::DelphiInterface<IOTAMobileDevice> _di_IOTAMobileDevice;
__interface DELPHIINTERFACE IOTAExternalDevice;
typedef System::DelphiInterface<IOTAExternalDevice> _di_IOTAExternalDevice;
__interface DELPHIINTERFACE IOTADesignerDevice190;
typedef System::DelphiInterface<IOTADesignerDevice190> _di_IOTADesignerDevice190;
__interface DELPHIINTERFACE IOTADesignerDevice220;
typedef System::DelphiInterface<IOTADesignerDevice220> _di_IOTADesignerDevice220;
__interface DELPHIINTERFACE IOTADesignerDevice;
typedef System::DelphiInterface<IOTADesignerDevice> _di_IOTADesignerDevice;
__interface DELPHIINTERFACE IOTADesignerOSEntry190;
typedef System::DelphiInterface<IOTADesignerOSEntry190> _di_IOTADesignerOSEntry190;
__interface DELPHIINTERFACE IOTADesignerOSEntry;
typedef System::DelphiInterface<IOTADesignerOSEntry> _di_IOTADesignerOSEntry;
__interface DELPHIINTERFACE IOTAMobileDeviceNotifier;
typedef System::DelphiInterface<IOTAMobileDeviceNotifier> _di_IOTAMobileDeviceNotifier;
__interface DELPHIINTERFACE IOTAMobileDeviceServices;
typedef System::DelphiInterface<IOTAMobileDeviceServices> _di_IOTAMobileDeviceServices;
__interface DELPHIINTERFACE IOTADesignerDeviceServices190;
typedef System::DelphiInterface<IOTADesignerDeviceServices190> _di_IOTADesignerDeviceServices190;
__interface DELPHIINTERFACE IOTADesignerDeviceServices;
typedef System::DelphiInterface<IOTADesignerDeviceServices> _di_IOTADesignerDeviceServices;
__interface DELPHIINTERFACE IOTAExternalDeviceNotifier;
typedef System::DelphiInterface<IOTAExternalDeviceNotifier> _di_IOTAExternalDeviceNotifier;
__interface DELPHIINTERFACE IOTAExternalDeviceServices;
typedef System::DelphiInterface<IOTAExternalDeviceServices> _di_IOTAExternalDeviceServices;
__interface DELPHIINTERFACE IOTAProjectPlatforms160;
typedef System::DelphiInterface<IOTAProjectPlatforms160> _di_IOTAProjectPlatforms160;
__interface DELPHIINTERFACE IOTAProjectPlatforms;
typedef System::DelphiInterface<IOTAProjectPlatforms> _di_IOTAProjectPlatforms;
__interface DELPHIINTERFACE IProjectPlatformInitialize;
typedef System::DelphiInterface<IProjectPlatformInitialize> _di_IProjectPlatformInitialize;
struct TOTARemoteProfilePathItem;
struct TOTARemoteProfileCredential;
struct TOTASDKInfo;
__interface DELPHIINTERFACE IOTAConnectionCallback;
typedef System::DelphiInterface<IOTAConnectionCallback> _di_IOTAConnectionCallback;
__interface DELPHIINTERFACE IOTARemoteProfile170;
typedef System::DelphiInterface<IOTARemoteProfile170> _di_IOTARemoteProfile170;
__interface DELPHIINTERFACE IOTARemoteProfile210;
typedef System::DelphiInterface<IOTARemoteProfile210> _di_IOTARemoteProfile210;
struct TEntitlement;
struct TProvisionProfileInfo;
__interface DELPHIINTERFACE IOTARemoteProfile;
typedef System::DelphiInterface<IOTARemoteProfile> _di_IOTARemoteProfile;
struct TOTAPutFileItem;
struct TOTARemoteFileInfo;
__interface DELPHIINTERFACE IOTARemoteProfileNotifier170;
typedef System::DelphiInterface<IOTARemoteProfileNotifier170> _di_IOTARemoteProfileNotifier170;
__interface DELPHIINTERFACE IOTARemoteProfileNotifier;
typedef System::DelphiInterface<IOTARemoteProfileNotifier> _di_IOTARemoteProfileNotifier;
__interface DELPHIINTERFACE IOTARemoteProfileServices160;
typedef System::DelphiInterface<IOTARemoteProfileServices160> _di_IOTARemoteProfileServices160;
__interface DELPHIINTERFACE IOTARemoteProfileServices170;
typedef System::DelphiInterface<IOTARemoteProfileServices170> _di_IOTARemoteProfileServices170;
__interface DELPHIINTERFACE IOTARemoteProfileServices180;
typedef System::DelphiInterface<IOTARemoteProfileServices180> _di_IOTARemoteProfileServices180;
__interface DELPHIINTERFACE IOTARemoteProfileServices190;
typedef System::DelphiInterface<IOTARemoteProfileServices190> _di_IOTARemoteProfileServices190;
__interface DELPHIINTERFACE IOTARemoteProfileServices230;
typedef System::DelphiInterface<IOTARemoteProfileServices230> _di_IOTARemoteProfileServices230;
__interface DELPHIINTERFACE IOTARemoteProfileServices;
typedef System::DelphiInterface<IOTARemoteProfileServices> _di_IOTARemoteProfileServices;
class DELPHICLASS EPlatformNotSupported;
struct TOTABuildType;
struct TOTABuildTypeConfig;
__interface DELPHIINTERFACE IPlatformProvisionInformation180;
typedef System::DelphiInterface<IPlatformProvisionInformation180> _di_IPlatformProvisionInformation180;
__interface DELPHIINTERFACE IPlatformSpecificBuildAction;
typedef System::DelphiInterface<IPlatformSpecificBuildAction> _di_IPlatformSpecificBuildAction;
__interface DELPHIINTERFACE IPlatformProvisionInformation220;
typedef System::DelphiInterface<IPlatformProvisionInformation220> _di_IPlatformProvisionInformation220;
__interface DELPHIINTERFACE IPlatformProvisionInformation;
typedef System::DelphiInterface<IPlatformProvisionInformation> _di_IPlatformProvisionInformation;
__interface DELPHIINTERFACE IiOSPlatformProvisionAction;
typedef System::DelphiInterface<IiOSPlatformProvisionAction> _di_IiOSPlatformProvisionAction;
__interface DELPHIINTERFACE IOTAPlatformSDK180;
typedef System::DelphiInterface<IOTAPlatformSDK180> _di_IOTAPlatformSDK180;
__interface DELPHIINTERFACE IOTAPlatformSDK;
typedef System::DelphiInterface<IOTAPlatformSDK> _di_IOTAPlatformSDK;
__interface DELPHIINTERFACE IOTAPlatformSDKOSX;
typedef System::DelphiInterface<IOTAPlatformSDKOSX> _di_IOTAPlatformSDKOSX;
__interface DELPHIINTERFACE IOTAPlatformSDKAndroid210;
typedef System::DelphiInterface<IOTAPlatformSDKAndroid210> _di_IOTAPlatformSDKAndroid210;
__interface DELPHIINTERFACE IOTAPlatformSDKAndroid240;
typedef System::DelphiInterface<IOTAPlatformSDKAndroid240> _di_IOTAPlatformSDKAndroid240;
__interface DELPHIINTERFACE IOTAPlatformSDKAndroid270;
typedef System::DelphiInterface<IOTAPlatformSDKAndroid270> _di_IOTAPlatformSDKAndroid270;
__interface DELPHIINTERFACE IOTAPlatformSDKAndroid;
typedef System::DelphiInterface<IOTAPlatformSDKAndroid> _di_IOTAPlatformSDKAndroid;
__interface DELPHIINTERFACE IOTAPlatformSDKWin10;
typedef System::DelphiInterface<IOTAPlatformSDKWin10> _di_IOTAPlatformSDKWin10;
__interface DELPHIINTERFACE IOTAPlatformSDKLinux;
typedef System::DelphiInterface<IOTAPlatformSDKLinux> _di_IOTAPlatformSDKLinux;
__interface DELPHIINTERFACE IOTAPlatformSDKNotifier;
typedef System::DelphiInterface<IOTAPlatformSDKNotifier> _di_IOTAPlatformSDKNotifier;
struct TDeviceRecord;
__interface DELPHIINTERFACE IOTAPlatformSDKServices180;
typedef System::DelphiInterface<IOTAPlatformSDKServices180> _di_IOTAPlatformSDKServices180;
__interface DELPHIINTERFACE IOTAPlatformSDKServices190;
typedef System::DelphiInterface<IOTAPlatformSDKServices190> _di_IOTAPlatformSDKServices190;
__interface DELPHIINTERFACE IOTAPlatformSDKServices210;
typedef System::DelphiInterface<IOTAPlatformSDKServices210> _di_IOTAPlatformSDKServices210;
__interface DELPHIINTERFACE IOTAPlatformSDKServices;
typedef System::DelphiInterface<IOTAPlatformSDKServices> _di_IOTAPlatformSDKServices;
__interface DELPHIINTERFACE IPlatformContainerCreator;
typedef System::DelphiInterface<IPlatformContainerCreator> _di_IPlatformContainerCreator;
__interface DELPHIINTERFACE IPlatformContainerCategoryCreator;
typedef System::DelphiInterface<IPlatformContainerCategoryCreator> _di_IPlatformContainerCategoryCreator;
__interface DELPHIINTERFACE IPlatformResources;
typedef System::DelphiInterface<IPlatformResources> _di_IPlatformResources;
__interface DELPHIINTERFACE IOTAAndroidServicesManager;
typedef System::DelphiInterface<IOTAAndroidServicesManager> _di_IOTAAndroidServicesManager;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TPlatformSupportsOperation : unsigned char { psVFSPreProcessor, psMobile, psWindows, psFrameworkCopy, psiOS, psUSBcatch, psOSX, psAndroid, psLinux, psRemoteDebugger, psClangPCHSupport, psRun, psDeployment };

enum DECLSPEC_DENUM TOTAOSFamily : unsigned char { osfWindows, osfOSX, osfiOS, osfAndroid, osfLinux, osfUndefined };

typedef System::Set<TOTAOSFamily, TOTAOSFamily::osfWindows, TOTAOSFamily::osfUndefined> TOTAOSFamilies;

typedef System::StaticArray<System::UnicodeString, 6> Platformapi__1;

__interface  INTERFACE_UUID("{BD2EAB7F-7FB5-464A-9C97-88DA4DC3D1F7}") IOTAPlatform160  : public System::IInterface 
{
	virtual bool __fastcall CheckProject(const Toolsapi::_di_IOTAProject AProject, System::DynamicArray<System::UnicodeString> &Reasons) = 0 ;
	virtual System::UnicodeString __fastcall GetDisplayName() = 0 ;
	virtual unsigned __fastcall GetId() = 0 ;
	virtual System::UnicodeString __fastcall GetName() = 0 ;
	virtual System::UnicodeString __fastcall GetPathDelim() = 0 ;
	virtual System::UnicodeString __fastcall GetFileExtension(const int FileExtType) = 0 ;
	virtual int __fastcall GetFileType(const System::UnicodeString Filename) = 0 ;
	virtual int __fastcall GetImageIndex() = 0 ;
	virtual System::UnicodeString __fastcall GetNamespaceSearchPaths() = 0 ;
	virtual System::UnicodeString __fastcall GetOutputExtension(const System::UnicodeString ApplicationType) = 0 ;
	virtual System::UnicodeString __fastcall GetOutputType(const System::UnicodeString Filename) = 0 ;
	virtual bool __fastcall IsAvailable(const System::UnicodeString Personality) = 0 ;
	virtual bool __fastcall IsRemoteProfileRequiredToCompile(const System::UnicodeString Personality) = 0 ;
	virtual bool __fastcall IsRemoteProfileRequiredToRun(const System::UnicodeString Personality) = 0 ;
	__property System::UnicodeString DisplayName = {read=GetDisplayName};
	__property System::UnicodeString FileExtensions[const int FileExtType] = {read=GetFileExtension};
	__property int FileType[const System::UnicodeString Filename] = {read=GetFileType};
	__property System::UnicodeString Name = {read=GetName};
	__property System::UnicodeString PathDelim = {read=GetPathDelim};
	__property System::UnicodeString OutputExtension[const System::UnicodeString ApplicationType] = {read=GetOutputExtension};
	__property System::UnicodeString OutputType[const System::UnicodeString Filename] = {read=GetOutputType};
};

__interface  INTERFACE_UUID("{AD0481FA-4660-48CA-875A-57B905425EA9}") IOTAPlatform170  : public IOTAPlatform160 
{
	virtual bool __fastcall PlatformSupports(TPlatformSupportsOperation AOperation) = 0 ;
	virtual bool __fastcall ForceShowWhenUnique() = 0 ;
};

__interface  INTERFACE_UUID("{D5033082-DC1A-45DB-A3D6-E1266C76F2CD}") IOTAPlatform180  : public IOTAPlatform170 
{
	virtual bool __fastcall IsSDKRequiredToCompile(const System::UnicodeString Personality) = 0 ;
	virtual bool __fastcall IsSDKRequiredToRun(const System::UnicodeString Personality) = 0 ;
};

__interface  INTERFACE_UUID("{48C2471B-92E4-4728-AEE2-6BBEA2CA0860}") IOTAPlatform190  : public IOTAPlatform180 
{
	virtual System::UnicodeString __fastcall GetOutputFilePrefix(const System::UnicodeString ApplicationType) = 0 ;
	__property System::UnicodeString OutputFilePrefix[const System::UnicodeString ApplicationType] = {read=GetOutputFilePrefix};
};

__interface  INTERFACE_UUID("{B3E9C246-61E8-41B9-8505-562F54914B76}") IOTAPlatform200  : public IOTAPlatform190 
{
	virtual System::UnicodeString __fastcall GetOSFamilyDisplayName() = 0 ;
	virtual TOTAOSFamily __fastcall GetOSFamily() = 0 ;
	__property System::UnicodeString OSFamilyDisplayName = {read=GetOSFamilyDisplayName};
	__property TOTAOSFamily OSFamily = {read=GetOSFamily};
};

__interface  INTERFACE_UUID("{266CD60A-11EC-4DEF-B8FB-34E575BBDC99}") IOTAPlatform210  : public IOTAPlatform200 
{
	virtual System::UnicodeString __fastcall GetPlatformRemoteDir() = 0 ;
};

__interface  INTERFACE_UUID("{0D4CE3AB-F2D9-4AD6-90F9-E67D5184412D}") IOTAPlatform220  : public IOTAPlatform210 
{
	virtual System::UnicodeString __fastcall GetSDKFamilyName() = 0 ;
	__property System::UnicodeString SDKFamilyName = {read=GetSDKFamilyName};
};

__interface  INTERFACE_UUID("{2215945A-3D09-4750-9B95-DDE1C5A3E055}") IOTAPlatform230  : public IOTAPlatform220 
{
	virtual System::UnicodeString __fastcall GetCppPreprocessorToolName(const System::UnicodeString APlatform, bool IsClangBased) = 0 ;
};

__interface  INTERFACE_UUID("{5BF6C6CE-0475-4B66-8AE4-5E175F72B1E6}") IOTAPlatform240  : public IOTAPlatform230 
{
	virtual System::UnicodeString __fastcall GetPlatformProjectType(const Toolsapi::_di_IOTAProject AProject) = 0 ;
	virtual bool __fastcall SupportsPlatformProjectType(const System::UnicodeString APlatformProjectType) = 0 ;
	virtual bool __fastcall ProjectTypeSupportsOperation(const System::UnicodeString APlatformProjectType, TPlatformSupportsOperation AOperation) = 0 ;
};

__interface  INTERFACE_UUID("{5D690469-8747-423B-B3D4-32C96CF133D8}") IOTAPlatform  : public IOTAPlatform240 
{
	virtual System::UnicodeString __fastcall GetProjectDisplayName(const Toolsapi::_di_IOTAProject AProject) = 0 ;
};

typedef System::DynamicArray<_di_IOTAPlatform> TOTAPlatforms;

__interface  INTERFACE_UUID("{8F20CD96-6702-43B8-876C-C985C54C9AFF}") IOTAPlatformServices160  : public System::IInterface 
{
	
public:
	_di_IOTAPlatform operator[](const System::UnicodeString Name) { return this->Platforms[Name]; }
	virtual System::DynamicArray<System::UnicodeString> __fastcall AllPlatforms() = 0 ;
	virtual System::DynamicArray<System::UnicodeString> __fastcall AvailablePlatforms(const System::UnicodeString Personality) = 0 ;
	virtual System::UnicodeString __fastcall GetFileExtension(const System::UnicodeString APlatform, const int FileExtType) = 0 ;
	virtual _di_IOTAPlatform __fastcall GetPlatform(const System::UnicodeString Name) = 0 ;
	virtual System::DynamicArray<System::UnicodeString> __fastcall GetPlatformsFromFilename(const System::UnicodeString Filename) = 0 ;
	virtual System::DynamicArray<System::UnicodeString> __fastcall GetPlatformsFromNamespace(const System::UnicodeString Namespace) = 0 ;
	virtual bool __fastcall PlatformAvailable(const System::UnicodeString PlatformName, const System::UnicodeString Personality) = 0 ;
	virtual bool __fastcall PlatformExists(const System::UnicodeString PlatformName) = 0 ;
	__property System::UnicodeString FileExtension[const System::UnicodeString APlatform][const int FileExtType] = {read=GetFileExtension};
	__property _di_IOTAPlatform Platforms[const System::UnicodeString Name] = {read=GetPlatform/*, default*/};
};

__interface  INTERFACE_UUID("{DD80D595-FCCC-4764-9EF9-7C36BA5B11CE}") IOTAPlatformServices220  : public IOTAPlatformServices160 
{
	virtual bool __fastcall PlatformSupports(System::UnicodeString APlatform, TPlatformSupportsOperation AOperation) = 0 ;
};

__interface  INTERFACE_UUID("{775658AD-6A87-40C9-95F0-6CDF8A5A83C8}") IOTAPlatformServices230  : public IOTAPlatformServices220 
{
	virtual System::UnicodeString __fastcall GetCppPreprocessorToolName(const System::UnicodeString APlatform, bool IsClangBased) = 0 ;
};

__interface  INTERFACE_UUID("{7144C21F-D550-451E-B684-9189BD21B53E}") IOTAPlatformServices  : public IOTAPlatformServices230 
{
	virtual System::UnicodeString __fastcall GetPlatformProjectType(const System::UnicodeString APlatform, Toolsapi::_di_IOTAProject AProject) = 0 ;
	virtual bool __fastcall SupportsPlatformProjectType(const System::UnicodeString APlatform, System::UnicodeString APlatformProjectType) = 0 ;
	virtual bool __fastcall ProjectTypeSupportsOperation(const System::UnicodeString APlatform, System::UnicodeString APlatformProjectType, TPlatformSupportsOperation AOperation) = 0 ;
};

enum DECLSPEC_DENUM TOTADeviceOrientation : unsigned char { doPortrait, doUpsideDown, doLandscapeLeft, doLandscapeRight };

enum DECLSPEC_DENUM TOTAStatusbarPos : unsigned char { sbpTop, sbpBottom, sbpLeft, sbpRight };

enum DECLSPEC_DENUM TOTADevicePlatform _DEPRECATED_ATTRIBUTE1("Use TOTAOSFamily instead")  : unsigned char { dpWindows, dpOSX, dpiOS, dpAndroid, dpLinux, dpUndefined };

enum DECLSPEC_DENUM TOTADeviceFormFactor : unsigned char { dffDesktop, dffFullScreen, dffPhone, dffTablet, dffMediaPlayer, dffAutomotive, dffIndustrial, dffEmbedded, dffWatch, dffGlasses };

typedef System::Set<TOTADevicePlatform, TOTADevicePlatform::dpWindows, TOTADevicePlatform::dpUndefined> TOTADevicePlatforms _DEPRECATED_ATTRIBUTE1("Use TOTAOSFamilies instead") ;

typedef System::Set<TOTADeviceFormFactor, TOTADeviceFormFactor::dffDesktop, TOTADeviceFormFactor::dffGlasses> TOTADeviceFormFactors;

struct DECLSPEC_DRECORD TOTADeviceLayout
{
public:
	bool Enabled;
	System::UnicodeString Artwork;
	System::UnicodeString Mask;
	int Left;
	int Top;
	int Width;
	int Height;
	int StatusbarHeight;
	TOTAStatusbarPos StatusbarPos;
	void __fastcall Init();
};


__interface  INTERFACE_UUID("{C1EAA414-E8ED-4ECB-BA30-691FBDEFB690}") IOTAMobileDevice  _DEPRECATED_ATTRIBUTE1("Not used anymore")  : public System::IInterface 
{
	virtual void __fastcall Assign _DEPRECATED_ATTRIBUTE0 (const _di_IOTAMobileDevice AMobileDevice) = 0 ;
	virtual bool __fastcall IsActive _DEPRECATED_ATTRIBUTE0 () = 0 ;
	virtual bool __fastcall IsAvailable _DEPRECATED_ATTRIBUTE0 (const System::UnicodeString APlatform) = 0 ;
	virtual System::UnicodeString __fastcall GetDisplayName _DEPRECATED_ATTRIBUTE0 () = 0 ;
	virtual int __fastcall GetImageIndex _DEPRECATED_ATTRIBUTE0 () = 0 ;
	virtual System::UnicodeString __fastcall GetPlatform _DEPRECATED_ATTRIBUTE0 () = 0 ;
	virtual void __fastcall SetActive _DEPRECATED_ATTRIBUTE0 (bool aValue) = 0 ;
	virtual System::UnicodeString __fastcall GetSimulatorID _DEPRECATED_ATTRIBUTE0 () = 0 ;
	virtual int __fastcall GetWidth _DEPRECATED_ATTRIBUTE0 () = 0 ;
	virtual int __fastcall GetHeight _DEPRECATED_ATTRIBUTE0 () = 0 ;
	virtual int __fastcall GetTop _DEPRECATED_ATTRIBUTE0 () = 0 ;
	virtual int __fastcall GetLeft _DEPRECATED_ATTRIBUTE0 () = 0 ;
	virtual int __fastcall GetDPI _DEPRECATED_ATTRIBUTE0 () = 0 ;
	virtual System::UnicodeString __fastcall GetArtwork _DEPRECATED_ATTRIBUTE0 () = 0 ;
	virtual bool __fastcall GetUserData _DEPRECATED_ATTRIBUTE0 () = 0 ;
	virtual TOTADeviceLayout __fastcall GetDeviceLayout _DEPRECATED_ATTRIBUTE0 (TOTADeviceOrientation Orientation) = 0 ;
	virtual void __fastcall SetDisplayName _DEPRECATED_ATTRIBUTE0 (System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetPlatform _DEPRECATED_ATTRIBUTE0 (System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetSimulatorID _DEPRECATED_ATTRIBUTE0 (System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetWidth _DEPRECATED_ATTRIBUTE0 (int Value) = 0 ;
	virtual void __fastcall SetHeight _DEPRECATED_ATTRIBUTE0 (int Value) = 0 ;
	virtual void __fastcall SetLeft _DEPRECATED_ATTRIBUTE0 (int Value) = 0 ;
	virtual void __fastcall SetTop _DEPRECATED_ATTRIBUTE0 (int Value) = 0 ;
	virtual void __fastcall SetDPI _DEPRECATED_ATTRIBUTE0 (int Value) = 0 ;
	virtual void __fastcall SetArtwork _DEPRECATED_ATTRIBUTE0 (System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetUserData _DEPRECATED_ATTRIBUTE0 (bool Value) = 0 ;
	virtual void __fastcall SetDeviceLayout _DEPRECATED_ATTRIBUTE0 (TOTADeviceOrientation Orientation, const TOTADeviceLayout &Value) = 0 ;
	__property bool Active = {read=IsActive, write=SetActive};
	__property System::UnicodeString DisplayName = {read=GetDisplayName, write=SetDisplayName};
	__property System::UnicodeString Platform = {read=GetPlatform, write=SetPlatform};
	__property System::UnicodeString SimulatorID = {read=GetSimulatorID, write=SetSimulatorID};
	__property int Width = {read=GetWidth, write=SetWidth};
	__property int Height = {read=GetHeight, write=SetHeight};
	__property int Top = {read=GetTop, write=SetTop};
	__property int Left = {read=GetLeft, write=SetLeft};
	__property int DPI = {read=GetDPI, write=SetDPI};
	__property System::UnicodeString Artwork = {read=GetArtwork, write=SetArtwork};
	__property bool UserData = {read=GetUserData, write=SetUserData};
	__property TOTADeviceLayout Layouts _DEPRECATED_ATTRIBUTE0 [TOTADeviceOrientation Orientation] = {read=GetDeviceLayout, write=SetDeviceLayout};
};

__interface  INTERFACE_UUID("{E45C3DF7-2C42-4985-98B4-0EF98A915688}") IOTAExternalDevice  : public System::IInterface 
{
	virtual bool __fastcall GetActive() = 0 ;
	virtual System::UnicodeString __fastcall GetInternalName() = 0 ;
	virtual System::UnicodeString __fastcall GetDisplayName() = 0 ;
	virtual int __fastcall GetImageIndex() = 0 ;
	virtual System::UnicodeString __fastcall GetPlatform() = 0 ;
	virtual System::UnicodeString __fastcall GetSimulatorID() = 0 ;
	virtual bool __fastcall GetUserData() = 0 ;
	virtual System::UnicodeString __fastcall GetProfileName() = 0 ;
	virtual System::UnicodeString __fastcall GetPort() = 0 ;
	virtual bool __fastcall GetEmulator() = 0 ;
	virtual void __fastcall SetActive(const bool Value) = 0 ;
	virtual void __fastcall SetDisplayName(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetPlatform(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetSimulatorID(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetUserData(const bool Value) = 0 ;
	virtual void __fastcall SetProfileName(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetPort(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetEmulator(const bool Value) = 0 ;
	virtual void __fastcall Assign(const _di_IOTAExternalDevice AMobileDevice) = 0 ;
	__property bool Active = {read=GetActive, write=SetActive};
	__property System::UnicodeString InternalName = {read=GetInternalName};
	__property System::UnicodeString DisplayName = {read=GetDisplayName, write=SetDisplayName};
	__property System::UnicodeString Platform = {read=GetPlatform, write=SetPlatform};
	__property System::UnicodeString SimulatorID = {read=GetSimulatorID, write=SetSimulatorID};
	__property bool UserData = {read=GetUserData, write=SetUserData};
	__property System::UnicodeString ProfileName = {read=GetProfileName, write=SetProfileName};
	__property System::UnicodeString Port = {read=GetPort, write=SetPort};
	__property bool Emulator = {read=GetEmulator, write=SetEmulator};
};

typedef System::DynamicArray<_di_IOTAExternalDevice> TOTAExternalDevices;

__interface  INTERFACE_UUID("{652602C6-8AC6-4D1F-BB70-E345CE5F0555}") IOTADesignerDevice190  : public System::IInterface 
{
	virtual bool __fastcall GetActive() = 0 ;
	virtual System::UnicodeString __fastcall GetInternalName() = 0 ;
	virtual System::UnicodeString __fastcall GetDisplayName() = 0 ;
	virtual bool __fastcall GetUserData() = 0 ;
	virtual int __fastcall GetListOrder _DEPRECATED_ATTRIBUTE1("not in use anymore") () = 0 ;
	virtual bool __fastcall GetHide() = 0 ;
	virtual TOTADeviceLayout __fastcall GetDeviceLayout(TOTADeviceOrientation Orientation) = 0 ;
	virtual TOTADevicePlatform __fastcall GetDevicePlatform _DEPRECATED_ATTRIBUTE1("use IOTADesignerDevice.GetOSFamily instead") () = 0 ;
	virtual TOTADeviceFormFactor __fastcall GetFormFactor() = 0 ;
	virtual System::UnicodeString __fastcall GetThumbnail _DEPRECATED_ATTRIBUTE0 () = 0 ;
	virtual void __fastcall SetActive(bool aValue) = 0 ;
	virtual void __fastcall SetDisplayName(System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetUserData(bool Value) = 0 ;
	virtual void __fastcall SetListOrder _DEPRECATED_ATTRIBUTE1("not in use anymore") (const int Value) = 0 ;
	virtual void __fastcall SetHide(const bool Value) = 0 ;
	virtual void __fastcall SetDeviceLayout(TOTADeviceOrientation Orientation, const TOTADeviceLayout &Value) = 0 ;
	virtual void __fastcall SetDevicePlatform _DEPRECATED_ATTRIBUTE1("use IOTADesignerDevice.SetOsFamily instead") (const TOTADevicePlatform Value) = 0 ;
	virtual void __fastcall SetFormFactor(const TOTADeviceFormFactor Value) = 0 ;
	virtual void __fastcall SetThumbnail _DEPRECATED_ATTRIBUTE0 (const System::UnicodeString Value) = 0 ;
	virtual void __fastcall Assign(const _di_IOTADesignerDevice AMobileDevice) = 0 ;
	virtual bool __fastcall GenerateThumbnail(Vcl::Graphics::TBitmap* aBitmap) = 0 ;
	virtual void __fastcall UpdateThumbnail(Vcl::Graphics::TBitmap* aBitmap) = 0 ;
	virtual bool __fastcall LoadThumbnail _DEPRECATED_ATTRIBUTE0 (Vcl::Graphics::TBitmap* aBitmap) = 0 ;
	__property bool Active = {read=GetActive, write=SetActive};
	__property System::UnicodeString InternalName = {read=GetInternalName};
	__property System::UnicodeString DisplayName = {read=GetDisplayName, write=SetDisplayName};
	__property bool UserData = {read=GetUserData, write=SetUserData};
	__property int ListOrder = {read=GetListOrder, write=SetListOrder};
	__property bool Hide = {read=GetHide, write=SetHide};
	__property TOTADeviceLayout Layouts[TOTADeviceOrientation Orientation] = {read=GetDeviceLayout, write=SetDeviceLayout};
	__property TOTADevicePlatform DevicePlatform = {read=GetDevicePlatform, write=SetDevicePlatform};
	__property TOTADeviceFormFactor FormFactor = {read=GetFormFactor, write=SetFormFactor};
	__property System::UnicodeString Thumbnail = {read=GetThumbnail, write=SetThumbnail};
};

__interface  INTERFACE_UUID("{CF55BDDE-EBC3-48A1-B7FF-B843C392377B}") IOTADesignerDevice220  : public IOTADesignerDevice190 
{
	virtual TOTAOSFamily __fastcall GetOSFamily() = 0 ;
	virtual void __fastcall SetOSFamily(const TOTAOSFamily Value) = 0 ;
	__property TOTAOSFamily OSFamily = {read=GetOSFamily, write=SetOSFamily};
};

__interface  INTERFACE_UUID("{E5BED0BD-9908-47A4-8026-9686CBA8DD33}") IOTADesignerDevice  : public IOTADesignerDevice220 
{
	virtual TOTADeviceOrientation __fastcall FirstAvailableOrientation() = 0 ;
};

typedef System::DynamicArray<_di_IOTADesignerDevice> TOTADesignerDevices;

__interface  INTERFACE_UUID("{5A4CA4AE-19BD-4F75-9A0A-83E56498564E}") IOTADesignerOSEntry190  : public System::IInterface 
{
	virtual System::UnicodeString __fastcall GetName() = 0 ;
	virtual System::UnicodeString __fastcall GetDisplayName() = 0 ;
	virtual System::UnicodeString __fastcall GetVersion() = 0 ;
	virtual TOTADevicePlatform __fastcall GetOSPlatform _DEPRECATED_ATTRIBUTE1("Use IOTADesignerOSEntry.GetOSFamily instead") () = 0 ;
	virtual void __fastcall SetName(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetDisplayName(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetVersion(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetOSPlatform _DEPRECATED_ATTRIBUTE1("Use IOTADesignerOSEntry.SetOSFamily instead") (const TOTADevicePlatform Value) = 0 ;
	__property System::UnicodeString Name = {read=GetName, write=SetName};
	__property System::UnicodeString DisplayName = {read=GetDisplayName, write=SetDisplayName};
	__property System::UnicodeString Version = {read=GetVersion, write=SetVersion};
	__property TOTADevicePlatform OSPlatform = {read=GetOSPlatform, write=SetOSPlatform};
};

__interface  INTERFACE_UUID("{BBCED617-6FE0-4EFD-820A-C59B422588A0}") IOTADesignerOSEntry  : public IOTADesignerOSEntry190 
{
	virtual TOTAOSFamily __fastcall GetOSFamily() = 0 ;
	virtual void __fastcall SetOSFamily(const TOTAOSFamily Value) = 0 ;
	__property TOTAOSFamily OSFamily = {read=GetOSFamily, write=SetOSFamily};
};

typedef System::DynamicArray<_di_IOTADesignerOSEntry> TOTADesignerOSList;

enum DECLSPEC_DENUM TOTAMobileDeviceChangeAction : unsigned char { mdcaModified, mdcaDeleted, mdcaAdded, mdcaBatchUpdate };

__interface  INTERFACE_UUID("{F9CE8EFC-A3A2-4BE2-B8F2-13CD5F58FF41}") IOTAMobileDeviceNotifier  : public Toolsapi::IOTANotifier 
{
	virtual void __fastcall MobileDeviceChanged(const System::UnicodeString aDeviceInternalName, TOTAMobileDeviceChangeAction aAction) = 0 ;
};

__interface  INTERFACE_UUID("{3DAA5A1D-5C3B-4EA8-B4BA-A790E70D0768}") IOTAMobileDeviceServices  _DEPRECATED_ATTRIBUTE1("Not used anymore")  : public System::IInterface 
{
	
public:
	_di_IOTAMobileDevice operator[](const System::UnicodeString Name) { return this->MobileDevices[Name]; }
	virtual void __fastcall AddMobileDevice _DEPRECATED_ATTRIBUTE0 (const _di_IOTAMobileDevice AMobileDevice) = 0 ;
	virtual _di_IOTAMobileDevice __fastcall CreateMobileDevice _DEPRECATED_ATTRIBUTE0 (const System::UnicodeString AInternalName) = 0 ;
	virtual System::DynamicArray<System::UnicodeString> __fastcall AllMobileDevices _DEPRECATED_ATTRIBUTE0 () = 0 ;
	virtual _di_IOTAMobileDevice __fastcall GetMobileDevice _DEPRECATED_ATTRIBUTE0 (const System::UnicodeString Name) = 0 ;
	virtual _di_IOTAMobileDevice __fastcall GetDefaultDevice _DEPRECATED_ATTRIBUTE0 () = 0 ;
	virtual void __fastcall SetDefaultDevice _DEPRECATED_ATTRIBUTE0 (const System::UnicodeString Name) = 0 ;
	virtual bool __fastcall MobileDeviceExists _DEPRECATED_ATTRIBUTE0 (const System::UnicodeString MobileDeviceName) = 0 ;
	virtual void __fastcall RemoveMobileDevice _DEPRECATED_ATTRIBUTE0 (const System::UnicodeString MobileDeviceName) = 0 ;
	virtual void __fastcall UpdateMobileDevice _DEPRECATED_ATTRIBUTE0 (const _di_IOTAMobileDevice AMobileDevice) = 0 ;
	virtual int __fastcall AddMobileDeviceNotifier _DEPRECATED_ATTRIBUTE0 (const Toolsapi::_di_IOTANotifier ANotifier) = 0 ;
	virtual void __fastcall RemoveMobileDeviceNotifier _DEPRECATED_ATTRIBUTE0 (int Index) = 0 ;
	virtual System::UnicodeString __fastcall GetSimulatorID _DEPRECATED_ATTRIBUTE0 (const System::UnicodeString Name) = 0 ;
	__property _di_IOTAMobileDevice MobileDevices _DEPRECATED_ATTRIBUTE0 [const System::UnicodeString Name] = {read=GetMobileDevice/*, default*/};
};

__interface  INTERFACE_UUID("{6DB988CC-AFEB-47CF-A31D-E69DDF6BE068}") IOTADesignerDeviceServices190  : public System::IInterface 
{
	
public:
	_di_IOTADesignerDevice operator[](const System::UnicodeString Name) { return this->DesignerDevices[Name]; }
	virtual _di_IOTADesignerDevice __fastcall CreateDesignerDevice(const System::UnicodeString AInternalName) = 0 ;
	virtual void __fastcall AddDesignerDevice(const _di_IOTADesignerDevice ADevice) = 0 ;
	virtual System::DynamicArray<System::UnicodeString> __fastcall DesignerDeviceNameList() = 0 ;
	virtual _di_IOTADesignerDevice __fastcall GetDesignerDevice(const System::UnicodeString AName) = 0 ;
	virtual _di_IOTADesignerDevice __fastcall GetDesignerDefaultDevice() = 0 ;
	virtual void __fastcall SetDesignerDefaultDevice(const System::UnicodeString AName) = 0 ;
	virtual bool __fastcall DesignerDeviceExists(const System::UnicodeString ADeviceName) = 0 ;
	virtual void __fastcall RemoveDesignerDevice(const System::UnicodeString ADeviceName) = 0 ;
	virtual void __fastcall UpdateDesignerDevice(const _di_IOTADesignerDevice ADevice) = 0 ;
	virtual int __fastcall AddDesignerDeviceNotifier(const Toolsapi::_di_IOTANotifier ANotifier) = 0 ;
	virtual void __fastcall RemoveDesignerDeviceNotifier(int Index) = 0 ;
	__property _di_IOTADesignerDevice DesignerDevices[const System::UnicodeString Name] = {read=GetDesignerDevice/*, default*/};
	virtual void __fastcall ClearDesignerDeviceList() = 0 ;
	virtual void __fastcall BeginDesignerDeviceListUpdate() = 0 ;
	virtual void __fastcall EndDesignerDeviceListUpdate() = 0 ;
	virtual void __fastcall CancelDesignerDeviceListUpdate() = 0 ;
	virtual TOTADesignerOSList __fastcall GetOSByPlatform _DEPRECATED_ATTRIBUTE1("Use IOTADesignerDeviceServices.GetOSByFamily instead") (TOTADevicePlatform APlatform) = 0 ;
	virtual System::UnicodeString __fastcall GetLastOSVersion _DEPRECATED_ATTRIBUTE1("Use IOTADesignerDeviceServices.GetLastOSFamilyVersion instead") (TOTADevicePlatform APlatform) = 0 ;
	virtual void __fastcall SetLastOSVersion _DEPRECATED_ATTRIBUTE1("Use IOTADesignerDeviceServices.SetLastOSFamilyVersion instead") (TOTADevicePlatform APlatform, System::UnicodeString aVersion) = 0 ;
	virtual bool __fastcall ValidateOSVersion _DEPRECATED_ATTRIBUTE1("Use IOTADesignerDeviceServices.ValidateOSFamilyVersion instead") (TOTADevicePlatform APlatform, System::UnicodeString aVersion) = 0 ;
};

__interface  INTERFACE_UUID("{FFF44A3C-B434-4E84-A58E-E5CF52DAB09A}") IOTADesignerDeviceServices  : public IOTADesignerDeviceServices190 
{
	virtual TOTADesignerOSList __fastcall GetOSByFamily(TOTAOSFamily APlatform) = 0 ;
	virtual System::UnicodeString __fastcall GetLastOSFamilyVersion(TOTAOSFamily APlatform) = 0 ;
	virtual void __fastcall SetLastOSFamilyVersion(TOTAOSFamily APlatform, System::UnicodeString aVersion) = 0 ;
	virtual bool __fastcall ValidateOSFamilyVersion(TOTAOSFamily APlatform, System::UnicodeString aVersion) = 0 ;
};

__interface  INTERFACE_UUID("{6B4A238B-8F43-469A-981A-AA2E39798066}") IOTAExternalDeviceNotifier  : public Toolsapi::IOTANotifier 
{
	virtual void __fastcall ExternalDevicesChanged(const System::UnicodeString APlatform, const System::UnicodeString ARemoteProfileName, const System::UnicodeString ASDKName) = 0 ;
	virtual void __fastcall StartAnimation(const System::UnicodeString APlatform, const System::UnicodeString ARemoteProfileName, const System::UnicodeString ASDKName) = 0 ;
	virtual void __fastcall StopAnimation(const System::UnicodeString APlatform, const System::UnicodeString ARemoteProfileName, const System::UnicodeString ASDKName) = 0 ;
};

__interface  INTERFACE_UUID("{59CFCEEE-F977-4303-9829-54DE3A31FAA5}") IOTAExternalDeviceServices  : public System::IInterface 
{
	virtual System::UnicodeString __fastcall GetExternalDeviceSimulatorID(const System::UnicodeString Name) = 0 ;
	virtual System::DynamicArray<System::UnicodeString> __fastcall AvailableExternalDevices(const System::UnicodeString APlatform) = 0 ;
};

__interface  INTERFACE_UUID("{E1C62726-BD51-4D4E-A2F2-9A8A59F272AE}") IOTAProjectPlatforms160  : public System::IInterface 
{
	virtual void __fastcall AddPlatform(const System::UnicodeString PlatformName) = 0 ;
	virtual System::UnicodeString __fastcall CurrentPlatform() = 0 ;
	virtual bool __fastcall GetEnabled(const System::UnicodeString PlatformName) = 0 ;
	virtual System::DynamicArray<System::UnicodeString> __fastcall GetEnabledPlatforms() = 0 ;
	virtual System::UnicodeString __fastcall GetProfile(const System::UnicodeString PlatformName) = 0 ;
	virtual bool __fastcall GetSupported(const System::UnicodeString PlatformName) = 0 ;
	virtual System::DynamicArray<System::UnicodeString> __fastcall GetSupportedPlatforms() = 0 ;
	virtual void __fastcall SetEnabled(const System::UnicodeString PlatformName, bool Value) = 0 ;
	virtual void __fastcall SetProfile(const System::UnicodeString PlatformName, const System::UnicodeString ProfileName) = 0 ;
	virtual void __fastcall SetSupported(const System::UnicodeString PlatformName, bool Value) = 0 ;
	virtual bool __fastcall UsingDefaultProfile(const System::UnicodeString PlatformName) = 0 ;
	__property System::DynamicArray<System::UnicodeString> EnabledPlatforms = {read=GetEnabledPlatforms};
	__property bool Enabled[const System::UnicodeString PlatformName] = {read=GetEnabled, write=SetEnabled};
	__property System::UnicodeString Profile[const System::UnicodeString PlatformName] = {read=GetProfile, write=SetProfile};
	__property bool Supported[const System::UnicodeString PlatformName] = {read=GetSupported, write=SetSupported};
	__property System::DynamicArray<System::UnicodeString> SupportedPlatforms = {read=GetSupportedPlatforms};
};

__interface  INTERFACE_UUID("{4A03546D-37DD-4BDB-A50E-8B5AAFB6212F}") IOTAProjectPlatforms  : public IOTAProjectPlatforms160 
{
	virtual System::UnicodeString __fastcall GetSDKVersion(const System::UnicodeString PlatformName) = 0 ;
	virtual void __fastcall SetSDKVersion(const System::UnicodeString PlatformName, const System::UnicodeString SDKVersionName) = 0 ;
	virtual System::UnicodeString __fastcall CurrentMobileDevice() = 0 ;
	__property System::UnicodeString PlatformSDK[const System::UnicodeString PlatformName] = {read=GetSDKVersion, write=SetSDKVersion};
};

__interface  INTERFACE_UUID("{4618AD84-CF6D-40A7-8C2B-B04F3554AD78}") IProjectPlatformInitialize  : public System::IInterface 
{
	virtual void __fastcall InitializeProject(const Toolsapi::_di_IOTAProject AProject) = 0 ;
};

enum DECLSPEC_DENUM TOTARemotePathType : unsigned char { orptInclude, orptLibrary, orptFramework, orptOther };

struct DECLSPEC_DRECORD TOTARemoteProfilePathItem
{
public:
	System::UnicodeString Path;
	System::UnicodeString MaskOrFramework;
	bool IncludeSubDir;
	System::UnicodeString DestinationDir;
	TOTARemotePathType PathType;
	System::UnicodeString Reserved;
};


typedef System::DynamicArray<TOTARemoteProfilePathItem> TOTARemoteProfilePathArray;

struct DECLSPEC_DRECORD TOTARemoteProfileCredential
{
public:
	System::UnicodeString PasswordOrPassFile;
	bool IsPassword;
	bool IsEncrypted;
	void __fastcall Init();
};


struct DECLSPEC_DRECORD TOTASDKInfo
{
public:
	System::UnicodeString PlatformID;
	System::UnicodeString Path;
	System::UnicodeString Version;
	System::UnicodeString Name;
	System::UnicodeString DisplayName;
	System::UnicodeString BuildVersion;
	System::UnicodeString XCodeBuildVersion;
};


typedef System::DynamicArray<TOTASDKInfo> TOTASDKInfoArray;

__interface  INTERFACE_UUID("{7DF7A249-4C27-4147-BFC3-CA9959165043}") IOTAConnectionCallback  : public System::IInterface 
{
	virtual bool __fastcall Retry() = 0 ;
	virtual bool __fastcall Abort() = 0 ;
};

__interface  INTERFACE_UUID("{328380FA-2AB5-4F25-BCCB-7A3F84691D43}") IOTARemoteProfile170  : public System::IInterface 
{
	virtual System::UnicodeString __fastcall GetName() = 0 ;
	virtual System::UnicodeString __fastcall GetPlatformName() = 0 ;
	virtual System::UnicodeString __fastcall GetHostName() = 0 ;
	virtual int __fastcall GetPortNumber() = 0 ;
	virtual TOTARemoteProfileCredential __fastcall GetCredential() = 0 ;
	virtual System::UnicodeString __fastcall GetSystemRoot() = 0 ;
	virtual TOTARemoteProfilePathArray __fastcall GetPaths() = 0 ;
	virtual void __fastcall SetName(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetPlatformName(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetHostName(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetPortNumber(const int Value) = 0 ;
	virtual void __fastcall SetCredential(const TOTARemoteProfileCredential &Value) = 0 ;
	virtual void __fastcall SetSystemRoot(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetPaths(const TOTARemoteProfilePathArray Value) = 0 ;
	virtual void __fastcall BeginUpdate() = 0 ;
	virtual void __fastcall EndUpdate() = 0 ;
	__property System::UnicodeString Name = {read=GetName, write=SetName};
	__property System::UnicodeString PlatformName = {read=GetPlatformName, write=SetPlatformName};
	__property System::UnicodeString HostName = {read=GetHostName, write=SetHostName};
	__property int PortNumber = {read=GetPortNumber, write=SetPortNumber};
	__property TOTARemoteProfileCredential Credential = {read=GetCredential, write=SetCredential};
	__property System::UnicodeString SystemRoot = {read=GetSystemRoot, write=SetSystemRoot};
	__property TOTARemoteProfilePathArray Paths = {read=GetPaths, write=SetPaths};
};

__interface  INTERFACE_UUID("{717C625E-8911-42A7-86A9-ACCB57E007E5}") IOTARemoteProfile210  : public IOTARemoteProfile170 
{
	virtual TOTASDKInfoArray __fastcall GetSDKs(const System::UnicodeString PlatformName, /* out */ System::UnicodeString &ErrorMessage) = 0 ;
	virtual System::UnicodeString __fastcall GetDeveloperTeamID(const System::UnicodeString MobileProvisionFile, /* out */ System::UnicodeString &Errormessage) = 0 ;
};

struct DECLSPEC_DRECORD TEntitlement
{
public:
	System::UnicodeString AppIdentifier;
	System::DynamicArray<System::UnicodeString> KeychainAccess;
	System::DynamicArray<System::UnicodeString> ExtraKeyValues;
};


struct DECLSPEC_DRECORD TProvisionProfileInfo
{
public:
	System::UnicodeString Name;
	System::UnicodeString Path;
	System::UnicodeString TeamID;
	System::UnicodeString TeamName;
	System::UnicodeString UUID;
	System::DynamicArray<System::UnicodeString> Devices;
	System::DynamicArray<System::UnicodeString> Certificates;
	TEntitlement Entitlements;
};


typedef System::DynamicArray<TProvisionProfileInfo> TProvisionProfileInfoArray;

__interface  INTERFACE_UUID("{5AB018C2-691A-4364-961B-8B4DBAA7D488}") IOTARemoteProfile  : public IOTARemoteProfile210 
{
	virtual TProvisionProfileInfoArray __fastcall GetProvisionProfiles(System::UnicodeString DeviceId, int Kind, /* out */ System::UnicodeString &ErrorMessage) = 0 ;
};

enum DECLSPEC_DENUM TOTARemoteProfileStatus : unsigned char { orpsOk, orpsNotFound, orpsNotAssigned };

enum DECLSPEC_DENUM TOTADeviceStatus : unsigned char { odsOk, odsCancel, odsNotAssigned };

enum DECLSPEC_DENUM TOTAProgressType : unsigned char { optStart, optUpdate, optError, optFinish, optCancel };

typedef bool __fastcall (__closure *TOTAGetProfileFilesProgressCallback)(TOTAProgressType ProgressType, int CurPathItem, int TotalPathItemCount, const System::UnicodeString StatusMessage, const System::UnicodeString Path, const System::UnicodeString FileName, int FileCurrentPercent);

enum DECLSPEC_DENUM TOTAFileOverwriteControl : unsigned char { ofocAlwaysOverwrite, ofocNeverOverwrite, ofocPromptUserToOverwrite };

enum DECLSPEC_DENUM Platformapi__2 : unsigned char { opffRunnable, opffArchive, opffScript };

typedef System::Set<Platformapi__2, Platformapi__2::opffRunnable, Platformapi__2::opffScript> TOTAPutFileFlags;

struct DECLSPEC_DRECORD TOTAPutFileItem
{
public:
	System::UnicodeString LocalSourceFileName;
	System::UnicodeString RemoteDestinationPath;
	System::UnicodeString RemoteDestinationFile;
	TOTAPutFileFlags Flags;
};


typedef System::DynamicArray<TOTAPutFileItem> TOTAPutFileArray;

struct DECLSPEC_DRECORD TOTARemoteFileInfo
{
public:
	System::UnicodeString Name;
	int Attributes;
	System::TDateTime TimeStamp;
	__int64 Size;
};


typedef System::DynamicArray<TOTARemoteFileInfo> TOTARemoteFileInfoArray;

__interface  INTERFACE_UUID("{84AD7E51-E0D0-4732-874B-05A70E2BF534}") IOTARemoteProfileNotifier170  : public System::IInterface 
{
	virtual void __fastcall RemoteProfileRenamed(const _di_IOTARemoteProfile RemoteProfile, const System::UnicodeString OldName) = 0 ;
	virtual void __fastcall RemoteProfileChanged(const _di_IOTARemoteProfile RemoteProfile) = 0 ;
	virtual void __fastcall RemoteProfileAdded(const _di_IOTARemoteProfile RemoteProfile) = 0 ;
	virtual void __fastcall RemoteProfileRemoved(const _di_IOTARemoteProfile RemoteProfile) = 0 ;
};

__interface  INTERFACE_UUID("{145453C0-AAFE-487B-86C7-7D2171FAF68F}") IOTARemoteProfileNotifier  : public IOTARemoteProfileNotifier170 
{
	virtual void __fastcall AfterDeploy(const bool Succeeded, const _di_IOTARemoteProfile RemoteProfile) = 0 ;
	virtual void __fastcall AfterRun(const bool Succeeded, const _di_IOTARemoteProfile RemoteProfile) = 0 ;
};

__interface  INTERFACE_UUID("{BC86D71D-8A31-4921-A27F-5D32DC3A9A4F}") IOTARemoteProfileServices160  : public System::IInterface 
{
	virtual int __fastcall GetProfileCount(const System::UnicodeString PlatformName) = 0 ;
	virtual _di_IOTARemoteProfile __fastcall GetProfile(const System::UnicodeString PlatformName, int Index) = 0 /* overload */;
	virtual _di_IOTARemoteProfile __fastcall GetProfile(const System::UnicodeString ProfileName) = 0 /* overload */;
	virtual _di_IOTARemoteProfile __fastcall AddProfile(const System::UnicodeString Name, const System::UnicodeString PlatformName, const System::UnicodeString HostName, int PortNumber, const TOTARemoteProfileCredential &Credential, const System::UnicodeString SystemRoot, const TOTARemoteProfilePathArray Paths, bool IsDefault) = 0 ;
	virtual void __fastcall EditProfile(const System::UnicodeString Name) = 0 ;
	virtual void __fastcall RemoveProfile(const _di_IOTARemoteProfile Profile) = 0 ;
	virtual _di_IOTARemoteProfile __fastcall GetDefaultForPlatform(const System::UnicodeString PlatformName) = 0 ;
	virtual void __fastcall SetAsDefaultForPlatform(const _di_IOTARemoteProfile Profile) = 0 ;
	virtual void __fastcall BeginOperation(const _di_IOTARemoteProfile Profile) = 0 ;
	virtual void __fastcall EndOperation(const _di_IOTARemoteProfile Profile) = 0 ;
	virtual bool __fastcall TestConnection(const _di_IOTARemoteProfile Profile, /* out */ System::UnicodeString &ErrorMessage, _di_IOTAConnectionCallback ConnectionCallBack = _di_IOTAConnectionCallback()) = 0 /* overload */;
	virtual bool __fastcall GetProfileFiles(const _di_IOTARemoteProfile Profile, TOTAFileOverwriteControl OverwriteControl = (TOTAFileOverwriteControl)(0x2), _di_IOTAConnectionCallback ConnectionCallback = _di_IOTAConnectionCallback(), TOTAGetProfileFilesProgressCallback ProgressCallback = 0x0) = 0 ;
	virtual bool __fastcall GetFileInfo(const _di_IOTARemoteProfile Profile, const System::UnicodeString Path, /* out */ System::TDateTime &LastWriteTime, /* out */ __int64 &Size) = 0 ;
	virtual bool __fastcall GetRemoteFileInfo(const _di_IOTARemoteProfile Profile, const System::UnicodeString Path, /* out */ System::TDateTime &LastWriteTime, /* out */ __int64 &Size, _di_IOTAConnectionCallback ConnectionCallBack = _di_IOTAConnectionCallback()) = 0 ;
	virtual bool __fastcall GetProfileFilesWithProgress(const _di_IOTARemoteProfile Profile) = 0 ;
	virtual bool __fastcall PutFiles(const _di_IOTARemoteProfile Profile, const TOTAPutFileArray Files, TOTAFileOverwriteControl OverwriteControl = (TOTAFileOverwriteControl)(0x0), _di_IOTAConnectionCallback ConnectionCallback = _di_IOTAConnectionCallback(), TOTAGetProfileFilesProgressCallback ProgressCallback = 0x0) = 0 ;
	virtual bool __fastcall PutFilesWithProgress(const _di_IOTARemoteProfile Profile, const TOTAPutFileArray Files) = 0 ;
	virtual bool __fastcall RemoveRemoteFiles(const _di_IOTARemoteProfile Profile, const System::DynamicArray<System::UnicodeString> Files, _di_IOTAConnectionCallback ConnectionCallback = _di_IOTAConnectionCallback(), TOTAGetProfileFilesProgressCallback ProgressCallback = 0x0) = 0 ;
	virtual bool __fastcall RemoveRemoteFilesWithProgress(const _di_IOTARemoteProfile Profile, const System::DynamicArray<System::UnicodeString> Files) = 0 ;
	virtual TOTARemoteFileInfoArray __fastcall BrowseRemoteFileSystem(const _di_IOTARemoteProfile Profile, const System::UnicodeString Path, int Attributes, bool IncludeTimeStamp, _di_IOTAConnectionCallback ConnectionCallBack = _di_IOTAConnectionCallback()) = 0 ;
	virtual bool __fastcall RemoteDirectoryExists(const _di_IOTARemoteProfile Profile, const System::UnicodeString Directory, _di_IOTAConnectionCallback ConnectionCallBack = _di_IOTAConnectionCallback()) = 0 ;
	virtual System::UnicodeString __fastcall GetRemoteBaseDirectory(const _di_IOTARemoteProfile Profile, _di_IOTAConnectionCallback ConnectionCallBack = _di_IOTAConnectionCallback()) = 0 ;
	virtual System::UnicodeString __fastcall ExpandPath(const _di_IOTARemoteProfile Profile, const System::UnicodeString Path, _di_IOTAConnectionCallback ConnectionCallBack = _di_IOTAConnectionCallback()) = 0 ;
	virtual System::UnicodeString __fastcall ExpandAllPaths(const _di_IOTARemoteProfile Profile, const System::UnicodeString Paths, _di_IOTAConnectionCallback ConnectionCallBack = _di_IOTAConnectionCallback()) = 0 ;
	virtual bool __fastcall CreateSymLink(const _di_IOTARemoteProfile Profile, const System::UnicodeString LinkPath, const System::UnicodeString TargetPath, _di_IOTAConnectionCallback ConnectionCallBack = _di_IOTAConnectionCallback()) = 0 ;
	virtual bool __fastcall Run(const _di_IOTARemoteProfile Profile, const System::UnicodeString PathUnderScratchDir, const System::UnicodeString ExeName, const System::UnicodeString Params, const System::UnicodeString Launcher, const System::UnicodeString WorkingDir, System::Classes::TStrings* const EnvList, const System::UnicodeString UserName, /* out */ System::UnicodeString &ErrorMessage, _di_IOTAConnectionCallback ConnectionCallback = _di_IOTAConnectionCallback()) = 0 /* overload */;
	virtual bool __fastcall StartRemoteDebugger(const _di_IOTARemoteProfile Profile, const System::UnicodeString UserName, const Toolsapi::TOTAProcessType ProcessType, /* out */ int &DebuggerId, /* out */ int &DebuggerPort, /* out */ System::UnicodeString &ErrorMessage, _di_IOTAConnectionCallback ConnectionCallback = _di_IOTAConnectionCallback()) = 0 ;
	virtual _di_IOTARemoteProfile __fastcall ExecuteNewProfileWizard(const System::UnicodeString InitialPlatform = System::UnicodeString(), bool RestrictToInitialPlatform = false) = 0 ;
	virtual _di_IOTARemoteProfile __fastcall ShowSelectProfileDialog(const System::UnicodeString PlatformName = System::UnicodeString()) = 0 ;
	virtual bool __fastcall CanDeployProject(const Toolsapi::_di_IOTAProject Project, const _di_IOTARemoteProfile Profile) = 0 ;
	virtual bool __fastcall DeployProject(const Toolsapi::_di_IOTAProject Project, const _di_IOTARemoteProfile Profile, System::UnicodeString Configuration = System::UnicodeString(), System::UnicodeString PlatformName = System::UnicodeString(), bool ClearMessages = true) = 0 ;
	virtual TOTARemoteProfileStatus __fastcall EnsureProfileForCompile(const Toolsapi::_di_IOTAProject Project, const System::UnicodeString PlatformName, System::UnicodeString &ErrorMessage) = 0 ;
	virtual TOTARemoteProfileStatus __fastcall EnsureProfileForRun(const Toolsapi::_di_IOTAProject Project, System::UnicodeString &ErrorMessage) = 0 ;
	virtual int __fastcall AddNotifier(const _di_IOTARemoteProfileNotifier Notifier) = 0 ;
	virtual void __fastcall RemoveNotifier(int Index) = 0 ;
	virtual System::DynamicArray<System::UnicodeString> __fastcall GetEnvironmentVariables(const _di_IOTARemoteProfile Profile, _di_IOTAConnectionCallback ConnectionCallBack = _di_IOTAConnectionCallback()) = 0 ;
};

__interface  INTERFACE_UUID("{5C996765-9F24-47B1-AF80-36394F3069F9}") IOTARemoteProfileServices170  : public IOTARemoteProfileServices160 
{
	HIDESBASE virtual bool __fastcall Run(const _di_IOTARemoteProfile Profile, const System::UnicodeString PathUnderScratchDir, const System::UnicodeString ExeName, const System::UnicodeString Params, const System::UnicodeString Launcher, const System::UnicodeString WorkingDir, System::Classes::TStrings* const EnvList, const System::UnicodeString UserName, /* out */ System::UnicodeString &ErrorMessage, /* out */ int &Pid, _di_IOTAConnectionCallback ConnectionCallback = _di_IOTAConnectionCallback()) = 0 /* overload */;
	virtual System::UnicodeString __fastcall GetIOSLauncher(const _di_IOTARemoteProfile Profile, const System::UnicodeString DeviceFamily = System::UnicodeString(), bool Debug = false, _di_IOTAConnectionCallback ConnectionCallBack = _di_IOTAConnectionCallback()) = 0 ;
};

__interface  INTERFACE_UUID("{6B9557F7-32B2-4706-81FF-995EDA2F311F}") IOTARemoteProfileServices180  : public IOTARemoteProfileServices170 
{
	virtual void __fastcall MergeRemoteProfile(const _di_IOTARemoteProfile Profile) = 0 ;
};

__interface  INTERFACE_UUID("{C00C8D83-2990-458A-8FA0-CD361091F924}") IOTARemoteProfileServices190  : public IOTARemoteProfileServices180 
{
	virtual System::UnicodeString __fastcall GetAndroidLauncher(const _di_IOTARemoteProfile Profile, const System::UnicodeString DeviceId, bool Debug = false, _di_IOTAConnectionCallback ConnectionCallBack = _di_IOTAConnectionCallback()) = 0 ;
	HIDESBASE virtual bool __fastcall Run(const _di_IOTARemoteProfile Profile, const System::UnicodeString PathUnderScratchDir, const System::UnicodeString ExeName, const System::UnicodeString Params, const System::UnicodeString Launcher, const System::UnicodeString WorkingDir, System::Classes::TStrings* const EnvList, const System::UnicodeString UserName, /* out */ System::UnicodeString &ErrorMessage, /* out */ int &Pid, /* out */ System::UnicodeString &CommandFile, _di_IOTAConnectionCallback ConnectionCallback = _di_IOTAConnectionCallback()) = 0 /* overload */;
	virtual void __fastcall Refresh() = 0 ;
};

__interface  INTERFACE_UUID("{9BF5A1F9-CE88-4C92-8906-F12307D56FC1}") IOTARemoteProfileServices230  : public IOTARemoteProfileServices190 
{
	virtual TOTADeviceStatus __fastcall EnsureDeviceForRun(const Toolsapi::_di_IOTAProject Project, const System::UnicodeString PlatformName, System::UnicodeString &ErrorMessage, int &HelpContext) = 0 ;
};

__interface  INTERFACE_UUID("{AF6D9681-143F-48FD-AC78-418DFCF6BAC8}") IOTARemoteProfileServices  : public IOTARemoteProfileServices230 
{
	virtual bool __fastcall EnsureProvisioningInformation(const Toolsapi::_di_IOTAProject Project) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION EPlatformNotSupported : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	__fastcall EPlatformNotSupported(const System::UnicodeString PlatformName);
public:
	/* Exception.CreateFmt */ inline __fastcall EPlatformNotSupported(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EPlatformNotSupported(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EPlatformNotSupported(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EPlatformNotSupported(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EPlatformNotSupported(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EPlatformNotSupported(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EPlatformNotSupported(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPlatformNotSupported(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPlatformNotSupported(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPlatformNotSupported(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPlatformNotSupported(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EPlatformNotSupported() { }
	
};

#pragma pack(pop)

struct DECLSPEC_DRECORD TOTABuildType
{
public:
	System::UnicodeString Name;
	System::UnicodeString DisplayName;
	int ImageIndex;
};


struct DECLSPEC_DRECORD TOTABuildTypeConfig
{
public:
	System::UnicodeString ProvisioningKey;
	System::UnicodeString DeveloperKey;
	System::UnicodeString DevTeamIdKey;
	System::UnicodeString Platform;
	System::UnicodeString BuildType;
	System::UnicodeString BuildTypeKey;
	System::UnicodeString BuildTypeDisplay;
};


__interface  INTERFACE_UUID("{A0C2A411-2F5E-4E97-A58B-810DF6325362}") IPlatformProvisionInformation180  : public System::IInterface 
{
	virtual System::DynamicArray<TOTABuildTypeConfig> __fastcall GetBuildTypes _DEPRECATED_ATTRIBUTE1("Use IPlatformProvisionInformation.AllBuildTypes instead") () = 0 ;
};

__interface  INTERFACE_UUID("{4C87E6BA-E248-40D8-9BDA-E8A1AAFE5B8E}") IPlatformSpecificBuildAction  : public System::IInterface 
{
	virtual void __fastcall DoBuildAction(const Toolsapi::_di_IOTAProject AProject, Toolsapi::TOTACompileMode CompileMode) = 0 ;
};

__interface  INTERFACE_UUID("{65D61296-E20F-4F22-879B-C5ACB0AA3060}") IPlatformProvisionInformation220  : public System::IInterface 
{
	virtual System::DynamicArray<System::UnicodeString> __fastcall AllBuildTypes() = 0 ;
	virtual System::UnicodeString __fastcall GetBuildTypeDisplayName(const System::UnicodeString ABuildType) = 0 ;
	virtual int __fastcall GetBuildTypeImageIndex(const System::UnicodeString ABuildType) = 0 ;
	virtual System::UnicodeString __fastcall GetBuildTypeKey(const System::UnicodeString ABuildType) = 0 ;
	virtual Vcl::Forms::TCustomFrameClass __fastcall GetBuildTypeFrame(const System::UnicodeString ABuildType) = 0 ;
	virtual System::DynamicArray<System::UnicodeString> __fastcall AllBuildTypeProperties(const System::UnicodeString ABuildType) = 0 ;
	virtual System::UnicodeString __fastcall GetEnvironmentKey(const System::UnicodeString ABuildType, const System::UnicodeString ABuildTypeProperty) = 0 ;
	virtual System::UnicodeString __fastcall GetProjectOptionKey(const System::UnicodeString ABuildType, const System::UnicodeString ABuildTypeProperty) = 0 ;
};

__interface  INTERFACE_UUID("{4AE2C2FA-4A38-4686-B5D4-88635ECDD292}") IPlatformProvisionInformation  : public IPlatformProvisionInformation220 
{
	virtual System::UnicodeString __fastcall GetBuildTypeFinalExtension(const System::UnicodeString ABuildType) = 0 ;
	virtual bool __fastcall GetBuildTypeAllowRun(const System::UnicodeString ABuildType) = 0 ;
	__property bool BuildTypeAllowRun[const System::UnicodeString ABuildType] = {read=GetBuildTypeAllowRun};
	__property System::UnicodeString BuildTypeFinalExtension[const System::UnicodeString ABuildType] = {read=GetBuildTypeFinalExtension};
};

__interface  INTERFACE_UUID("{12EED930-E88F-44B4-8BAB-E7F6BCE9EA2E}") IiOSPlatformProvisionAction  : public System::IInterface 
{
	virtual bool __fastcall CheckProvision(const Toolsapi::_di_IOTAProject Project, /* out */ System::UnicodeString &ErrMsg) = 0 ;
};

enum DECLSPEC_DENUM TOTAPlatformSDKStatus : unsigned char { opssOk, opssNotFound, opssNotAssigned, opssNoFiles, opssOutOfDate };

__interface  INTERFACE_UUID("{DC2B0ADB-18BD-45D8-A648-DC8722EB7C5C}") IOTAPlatformSDK180  : public System::IInterface 
{
	virtual System::UnicodeString __fastcall GetName() = 0 ;
	virtual System::UnicodeString __fastcall GetDisplayName() = 0 ;
	virtual System::UnicodeString __fastcall GetVersion() = 0 ;
	virtual System::UnicodeString __fastcall GetPlatformName() = 0 ;
	virtual System::UnicodeString __fastcall GetSystemRoot() = 0 ;
	virtual bool __fastcall GetIsDefault() = 0 ;
	virtual System::UnicodeString __fastcall GetBuildVersion _DEPRECATED_ATTRIBUTE1("Use IOTAPlatformSDKOSX.GetBuildVersion instead") () = 0 ;
	virtual System::UnicodeString __fastcall GetXCodeBuildVersion _DEPRECATED_ATTRIBUTE1("Use IOTAPlatformSDKOSX.GetXCodeBuildVersion instead") () = 0 ;
	virtual System::UnicodeString __fastcall GetFrameworkRoot _DEPRECATED_ATTRIBUTE1("Use IOTAPlatformSDKOSX.GetFrameworkRoot instead") () = 0 ;
	virtual TOTARemoteProfilePathArray __fastcall GetPaths _DEPRECATED_ATTRIBUTE1("Use IOTAPlatformSDKOSX.GetPaths instead") () = 0 ;
	virtual System::UnicodeString __fastcall GetRemotePath _DEPRECATED_ATTRIBUTE1("Use IOTAPlatformSDKOSX.GetRemotePath instead") () = 0 ;
	virtual void __fastcall SetName(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetDisplayName(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetVersion(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetPlatformName(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetSystemRoot(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetIsDefault(const bool Value) = 0 ;
	virtual void __fastcall SetBuildVersion _DEPRECATED_ATTRIBUTE1("Use IOTAPlatformSDKOSX.SetBuildVersion instead") (const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetXCodeBuildVersion _DEPRECATED_ATTRIBUTE1("Use IOTAPlatformSDKOSX.SetXCodeBuildVersion instead") (const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetFrameworkRoot _DEPRECATED_ATTRIBUTE1("Use IOTAPlatformSDKOSX.SetFrameworkRoot instead") (const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetPaths _DEPRECATED_ATTRIBUTE1("Use IOTAPlatformSDKOSX.SetPaths instead") (const TOTARemoteProfilePathArray Value) = 0 ;
	virtual void __fastcall SetRemotePath _DEPRECATED_ATTRIBUTE1("Use IOTAPlatformSDKOSX.SetRemotePath instead") (const System::UnicodeString Value) = 0 ;
	virtual void __fastcall BeginUpdate() = 0 ;
	virtual void __fastcall EndUpdate() = 0 ;
	__property System::UnicodeString Name = {read=GetName, write=SetName};
	__property System::UnicodeString DisplayName = {read=GetDisplayName, write=SetDisplayName};
	__property System::UnicodeString Version = {read=GetVersion, write=SetVersion};
	__property System::UnicodeString PlatformName = {read=GetPlatformName, write=SetPlatformName};
	__property System::UnicodeString SystemRoot = {read=GetSystemRoot, write=SetSystemRoot};
	__property bool IsDefault = {read=GetIsDefault, write=SetIsDefault};
	__property System::UnicodeString BuildVersion = {read=GetBuildVersion, write=SetBuildVersion};
	__property System::UnicodeString XCodeBuildVersion = {read=GetXCodeBuildVersion, write=SetXCodeBuildVersion};
	__property System::UnicodeString FrameworkRoot = {read=GetFrameworkRoot, write=SetFrameworkRoot};
	__property TOTARemoteProfilePathArray Paths = {read=GetPaths, write=SetPaths};
	__property System::UnicodeString RemotePath = {read=GetRemotePath, write=SetRemotePath};
};

__interface  INTERFACE_UUID("{62374BAA-7A95-4AE1-A5E7-B6CC35154EF6}") IOTAPlatformSDK  : public IOTAPlatformSDK180 
{
	virtual void __fastcall Assign(const _di_IOTAPlatformSDK PlatformSDK) = 0 ;
};

__interface  INTERFACE_UUID("{78FB1115-144C-4CC3-ABB5-50AF3A3EF58D}") IOTAPlatformSDKOSX  : public IOTAPlatformSDK 
{
	HIDESBASE virtual System::UnicodeString __fastcall GetBuildVersion() = 0 ;
	HIDESBASE virtual System::UnicodeString __fastcall GetXCodeBuildVersion() = 0 ;
	HIDESBASE virtual System::UnicodeString __fastcall GetFrameworkRoot() = 0 ;
	HIDESBASE virtual TOTARemoteProfilePathArray __fastcall GetPaths() = 0 ;
	HIDESBASE virtual System::UnicodeString __fastcall GetRemotePath() = 0 ;
	HIDESBASE virtual void __fastcall SetBuildVersion(const System::UnicodeString Value) = 0 ;
	HIDESBASE virtual void __fastcall SetXCodeBuildVersion(const System::UnicodeString Value) = 0 ;
	HIDESBASE virtual void __fastcall SetFrameworkRoot(const System::UnicodeString Value) = 0 ;
	HIDESBASE virtual void __fastcall SetPaths(const TOTARemoteProfilePathArray Value) = 0 ;
	HIDESBASE virtual void __fastcall SetRemotePath(const System::UnicodeString Value) = 0 ;
	HIDESBASE virtual void __fastcall Assign(const _di_IOTAPlatformSDK PlatformSDK) = 0 ;
	__property System::UnicodeString BuildVersion = {read=GetBuildVersion, write=SetBuildVersion};
	__property System::UnicodeString XCodeBuildVersion = {read=GetXCodeBuildVersion, write=SetXCodeBuildVersion};
	__property System::UnicodeString FrameworkRoot = {read=GetFrameworkRoot, write=SetFrameworkRoot};
	__property TOTARemoteProfilePathArray Paths = {read=GetPaths, write=SetPaths};
	__property System::UnicodeString RemotePath = {read=GetRemotePath, write=SetRemotePath};
};

__interface  INTERFACE_UUID("{4CC4CFFE-AF97-45C3-874D-B1A613A0ED50}") IOTAPlatformSDKAndroid210  : public IOTAPlatformSDK 
{
	virtual System::UnicodeString __fastcall GetNDKBasePath() = 0 ;
	virtual System::UnicodeString __fastcall GetNDKArmLinuxAndroidFile() = 0 ;
	virtual System::UnicodeString __fastcall GetNDKArmLinuxAndroidStripFile() = 0 ;
	virtual System::UnicodeString __fastcall GetNDKApiPath() = 0 ;
	virtual System::UnicodeString __fastcall GetNDKGdbServerPath() = 0 ;
	virtual System::UnicodeString __fastcall GetSDKZipAlignPath() = 0 ;
	virtual System::UnicodeString __fastcall GetSDKAndroidPath() = 0 ;
	virtual System::UnicodeString __fastcall GetSDKAdbPath() = 0 ;
	virtual System::UnicodeString __fastcall GetSDKAaptPath() = 0 ;
	virtual System::UnicodeString __fastcall GetSDKApiLevel() = 0 ;
	virtual System::UnicodeString __fastcall GetJDKPath() = 0 ;
	virtual System::UnicodeString __fastcall GetJDKJarsignerPath() = 0 ;
	virtual System::UnicodeString __fastcall GetJDKKeyToolPath() = 0 ;
	virtual System::UnicodeString __fastcall GetDelphiNDKLibraryPath() = 0 ;
	virtual System::UnicodeString __fastcall GetCBuilderNDKLibraryPath() = 0 ;
	virtual void __fastcall SetNDKBasePath(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetNDKArmLinuxAndroidFile(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetNDKArmLinuxAndroidStripFile(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetNDKApiPath(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetNDKGdbServerPath(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetSDKZipAlignPath(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetSDKAndroidPath(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetSDKAdbPath(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetSDKAaptPath(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetSDKApiLevel(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetJDKPath(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetJDKJarsignerPath(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetJDKKeyToolPath(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetDelphiNDKLibraryPath(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetCBuilderNDKLibraryPath(const System::UnicodeString Value) = 0 ;
	HIDESBASE virtual void __fastcall Assign(const _di_IOTAPlatformSDK PlatformSDK) = 0 ;
	__property System::UnicodeString NDKBasePath = {read=GetNDKBasePath, write=SetNDKBasePath};
	__property System::UnicodeString NDKArmLinuxAndroidFile = {read=GetNDKArmLinuxAndroidFile, write=SetNDKArmLinuxAndroidFile};
	__property System::UnicodeString NDKArmLinuxAndroidStripFile = {read=GetNDKArmLinuxAndroidStripFile, write=SetNDKArmLinuxAndroidStripFile};
	__property System::UnicodeString NDKApiPath = {read=GetNDKApiPath, write=SetNDKApiPath};
	__property System::UnicodeString NDKGdbServerPath = {read=GetNDKGdbServerPath, write=SetNDKGdbServerPath};
	__property System::UnicodeString SDKZipAlignPath = {read=GetSDKZipAlignPath, write=SetSDKZipAlignPath};
	__property System::UnicodeString SDKAndroidPath = {read=GetSDKAndroidPath, write=SetSDKAndroidPath};
	__property System::UnicodeString SDKAdbPath = {read=GetSDKAdbPath, write=SetSDKAdbPath};
	__property System::UnicodeString SDKAaptPath = {read=GetSDKAaptPath, write=SetSDKAaptPath};
	__property System::UnicodeString SDKApiLevel = {read=GetSDKApiLevel, write=SetSDKApiLevel};
	__property System::UnicodeString JDKPath = {read=GetJDKPath, write=SetJDKPath};
	__property System::UnicodeString JDKJarsignerPath = {read=GetJDKJarsignerPath, write=SetJDKJarsignerPath};
	__property System::UnicodeString JDKKeyToolPath = {read=GetJDKKeyToolPath, write=SetJDKKeyToolPath};
	__property System::UnicodeString DelphiNDKLibraryPath = {read=GetDelphiNDKLibraryPath, write=SetDelphiNDKLibraryPath};
	__property System::UnicodeString CBuilderNDKLibraryPath = {read=GetCBuilderNDKLibraryPath, write=SetCBuilderNDKLibraryPath};
};

__interface  INTERFACE_UUID("{61978519-B00A-4C41-AE9A-589AEC609218}") IOTAPlatformSDKAndroid240  : public IOTAPlatformSDKAndroid210 
{
	virtual bool __fastcall AutoDetectPaths() = 0 ;
};

__interface  INTERFACE_UUID("{FAEF0B24-9E15-4205-9904-C796F2D9EF33}") IOTAPlatformSDKAndroid270  : public IOTAPlatformSDKAndroid240 
{
	virtual void __fastcall SetGnuSTLVersion _DEPRECATED_ATTRIBUTE1("not in use anymore") (const System::UnicodeString Value) = 0 ;
	virtual System::UnicodeString __fastcall GetGnuSTLVersion _DEPRECATED_ATTRIBUTE1("not in use anymore") () = 0 ;
	__property System::UnicodeString GnuSTLVersion = {read=GetGnuSTLVersion, write=SetGnuSTLVersion};
};

__interface  INTERFACE_UUID("{E23DDE52-3A44-4650-B910-03B1542F4BEC}") IOTAPlatformSDKAndroid  : public IOTAPlatformSDKAndroid270 
{
	virtual System::UnicodeString __fastcall GetSDKApkSignerPath() = 0 ;
	virtual void __fastcall SetSDKApkSignerPath(const System::UnicodeString Value) = 0 ;
	__property System::UnicodeString SDKApkSignerPath = {read=GetSDKApkSignerPath, write=SetSDKApkSignerPath};
};

__interface  INTERFACE_UUID("{F637EF32-9F09-44C2-BD6B-D240D94F6F3C}") IOTAPlatformSDKWin10  : public IOTAPlatformSDK 
{
	virtual System::UnicodeString __fastcall GetMakeAppx() = 0 ;
	virtual System::UnicodeString __fastcall GetMakeCert() = 0 ;
	virtual System::UnicodeString __fastcall GetPvk2pfx() = 0 ;
	virtual System::UnicodeString __fastcall GetSDKBasePath() = 0 ;
	virtual System::UnicodeString __fastcall GetSignTool() = 0 ;
	virtual void __fastcall SetMakeAppx(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetMakeCert(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetPvk2pfx(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetSDKBasePath(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetSignTool(const System::UnicodeString Value) = 0 ;
	__property System::UnicodeString SDKBasePath = {read=GetSDKBasePath, write=SetSDKBasePath};
	__property System::UnicodeString MakeAppx = {read=GetMakeAppx, write=SetMakeAppx};
	__property System::UnicodeString SignTool = {read=GetSignTool, write=SetSignTool};
	__property System::UnicodeString MakeCert = {read=GetMakeCert, write=SetMakeCert};
	__property System::UnicodeString Pvk2pfx = {read=GetPvk2pfx, write=SetPvk2pfx};
};

__interface  INTERFACE_UUID("{DD9D4C27-A20B-4563-97C1-5E70CEEF09FC}") IOTAPlatformSDKLinux  : public IOTAPlatformSDK 
{
	HIDESBASE virtual TOTARemoteProfilePathArray __fastcall GetPaths() = 0 ;
	virtual System::UnicodeString __fastcall GetIncludePath() = 0 ;
	virtual System::UnicodeString __fastcall GetLibraryPath() = 0 ;
	virtual System::UnicodeString __fastcall GetStartupObj() = 0 ;
	virtual System::UnicodeString __fastcall GetEndCodeObj() = 0 ;
	virtual System::UnicodeString __fastcall GetStartupObjS() = 0 ;
	virtual System::UnicodeString __fastcall GetEndCodeObjS() = 0 ;
	HIDESBASE virtual void __fastcall SetPaths(const TOTARemoteProfilePathArray Value) = 0 ;
	virtual void __fastcall SetIncludePath(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetLibraryPath(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetStartupObj(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetEndCodeObj(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetStartupObjS(const System::UnicodeString Value) = 0 ;
	virtual void __fastcall SetEndCodeObjS(const System::UnicodeString Value) = 0 ;
	__property TOTARemoteProfilePathArray Paths = {read=GetPaths, write=SetPaths};
	__property System::UnicodeString IncludePath = {read=GetIncludePath, write=SetIncludePath};
	__property System::UnicodeString LibraryPath = {read=GetLibraryPath, write=SetLibraryPath};
	__property System::UnicodeString StartupObj = {read=GetStartupObj, write=SetStartupObj};
	__property System::UnicodeString EndCodeObj = {read=GetEndCodeObj, write=SetEndCodeObj};
	__property System::UnicodeString StartupObjS = {read=GetStartupObjS, write=SetStartupObjS};
	__property System::UnicodeString EndCodeObjS = {read=GetEndCodeObjS, write=SetEndCodeObjS};
};

__interface  INTERFACE_UUID("{3AD83D48-BC8B-4A6A-AA5D-537CC3B7518B}") IOTAPlatformSDKNotifier  : public System::IInterface 
{
	virtual void __fastcall PlatformSDKChanged(const _di_IOTAPlatformSDK PlatformSDK) = 0 ;
	virtual void __fastcall PlatformSDKAdded(const _di_IOTAPlatformSDK PlatformSDK) = 0 ;
	virtual void __fastcall PlatformSDKRemoved(const _di_IOTAPlatformSDK PlatformSDK) = 0 ;
};

enum DECLSPEC_DENUM TDeviceType : unsigned char { dtEmulator, dtDevice, dtSimulator };

struct DECLSPEC_DRECORD TDeviceRecord
{
public:
	TDeviceType Kind;
	System::UnicodeString Id;
	System::UnicodeString Name;
	System::UnicodeString Target;
	bool Connected;
	bool Online;
	System::UnicodeString Platform;
	System::UnicodeString ProfileName;
	int Height;
	int Width;
	int Density;
	double DiagonalSize;
};


__interface  INTERFACE_UUID("{A41933CA-8F86-46F3-835B-63EF1CAD9783}") IOTAPlatformSDKServices180  : public System::IInterface 
{
	virtual int __fastcall GetPlatformSDKCount(const System::UnicodeString PlatformName) = 0 ;
	virtual _di_IOTAPlatformSDK __fastcall GetPlatformSDK(const System::UnicodeString PlatformName, int Index) = 0 /* overload */;
	virtual _di_IOTAPlatformSDK __fastcall GetPlatformSDK(const System::UnicodeString SDKName) = 0 /* overload */;
	virtual _di_IOTAPlatformSDK __fastcall GetPlatformSDK(const System::UnicodeString PlatformName, const System::UnicodeString Version) = 0 /* overload */;
	virtual _di_IOTAPlatformSDK __fastcall GetDefaultForPlatform(const System::UnicodeString PlatformName) = 0 ;
	virtual void __fastcall SetAsDefaultForPlatform(const _di_IOTAPlatformSDK PlatformSDK) = 0 /* overload */;
	virtual void __fastcall SetDefaultPaths(const _di_IOTAPlatformSDK PlatformSDK) = 0 ;
	virtual TOTARemoteProfilePathArray __fastcall GetDefaultPaths(const _di_IOTAPlatformSDK PlatformSDK) = 0 ;
	virtual System::UnicodeString __fastcall GetDefaultFileName(const System::UnicodeString PlatformSDKName, const System::UnicodeString SDKVersion, const System::UnicodeString PlatformName) = 0 /* overload */;
	virtual System::UnicodeString __fastcall GetDefaultFileName(const System::UnicodeString PlatformSDKName) = 0 /* overload */;
	virtual _di_IOTAPlatformSDK __fastcall AddPlatformSDK _DEPRECATED_ATTRIBUTE0 (const System::UnicodeString Name, const System::UnicodeString DisplayName, const System::UnicodeString Version, const System::UnicodeString BuildVersion, const System::UnicodeString XCodeBuildVersion, const System::UnicodeString PlatformName, const System::UnicodeString SystemRoot, const System::UnicodeString FrameworkRoot, const TOTARemoteProfilePathArray Paths, const System::UnicodeString RemotePath, const bool IsDefault) = 0 ;
	virtual void __fastcall EditPlatformSDK(const System::UnicodeString Name) = 0 ;
	virtual void __fastcall RemovePlatformSDK(const _di_IOTAPlatformSDK PlatformSDK) = 0 /* overload */;
	virtual _di_IOTAPlatformSDK __fastcall ExecuteNewSDKWizard(const bool SelectedSDKActive, const System::UnicodeString InitialPlatform = System::UnicodeString()) = 0 ;
	virtual _di_IOTAPlatformSDK __fastcall SelectProfilePlatformDialog(const bool SelectedSDKActive, /* out */ _di_IOTARemoteProfile &ProfileToConnect, const System::UnicodeString InitialPlatform = System::UnicodeString()) = 0 ;
	virtual bool __fastcall SelectProfileToPullRemoteFiles(const _di_IOTAPlatformSDK PlatformSDKToPullRemoteFiles) = 0 /* overload */;
	virtual int __fastcall AddNotifier(const _di_IOTAPlatformSDKNotifier Notifier) = 0 ;
	virtual bool __fastcall ShowPlatformPropertiesDialog(const Toolsapi::_di_IOTAProject AProject, const System::UnicodeString PlatformName, System::UnicodeString &PlatformSDK, _di_IOTARemoteProfile &Profile) = 0 ;
	virtual TOTAPlatformSDKStatus __fastcall EnsurePlatformSDK _DEPRECATED_ATTRIBUTE0 (const Toolsapi::_di_IOTAProject Project, const System::UnicodeString PlatformName, bool ForCompile, System::UnicodeString &ErrorMessage) = 0 ;
	virtual _di_IOTARemoteProfileServices __fastcall GetProfileMgr() = 0 ;
	virtual void __fastcall SetProfileMgr(const _di_IOTARemoteProfileServices Value) = 0 ;
	__property _di_IOTARemoteProfileServices ProfileMgr = {read=GetProfileMgr, write=SetProfileMgr};
};

__interface  INTERFACE_UUID("{DEEC6CA6-7027-4962-A236-A2DF222F2163}") IOTAPlatformSDKServices190  : public IOTAPlatformSDKServices180 
{
	HIDESBASE virtual _di_IOTAPlatformSDK __fastcall AddPlatformSDK(const System::UnicodeString PlatformName, const bool IsDefault) = 0 /* overload */;
	HIDESBASE virtual _di_IOTAPlatformSDK __fastcall AddPlatformSDK(const _di_IOTAPlatformSDK PlatformSDK) = 0 /* overload */;
	virtual System::DynamicArray<TDeviceRecord> __fastcall AllDevicesFromPAClient(const System::UnicodeString APlatform, const System::UnicodeString ARemoteProfileName = System::UnicodeString(), const System::UnicodeString ASDKName = System::UnicodeString(), const bool AVerboseMode = false) = 0 ;
	HIDESBASE virtual TOTAPlatformSDKStatus __fastcall EnsurePlatformSDK(const Toolsapi::_di_IOTAProject Project, const System::UnicodeString PlatformName, bool ForCompile, System::UnicodeString &ErrorMessage, int &HelpContext) = 0 /* overload */;
};

__interface  INTERFACE_UUID("{9A083C9D-8CE3-43E6-B0AB-B70C3FFB8308}") IOTAPlatformSDKServices210  : public IOTAPlatformSDKServices190 
{
	HIDESBASE virtual _di_IOTAPlatformSDK __fastcall ExecuteNewSDKWizard(const bool SelectedSDKActive, _di_IOTARemoteProfile &RemoteProfileToConnect, const System::UnicodeString InitialPlatform = System::UnicodeString()) = 0 /* overload */;
	virtual void __fastcall RemoveNotifier(int Index) = 0 ;
};

__interface  INTERFACE_UUID("{6C659F7B-FD36-478C-85C5-F2942C224FD9}") IOTAPlatformSDKServices  : public IOTAPlatformSDKServices210 
{
	HIDESBASE virtual _di_IOTAPlatformSDK __fastcall AddPlatformSDK(const System::UnicodeString PlatformName, const bool IsDefault, const _di_IOTAPlatformSDK PlatformSDK) = 0 /* overload */;
	HIDESBASE virtual _di_IOTAPlatformSDK __fastcall GetPlatformSDK(const _di_IOTAPlatformSDK PlatformSDK, const System::UnicodeString PlatformName) = 0 /* overload */;
	HIDESBASE virtual void __fastcall SetAsDefaultForPlatform(const _di_IOTAPlatformSDK PlatformSDK, const System::UnicodeString PlatformName) = 0 /* overload */;
	HIDESBASE virtual void __fastcall RemovePlatformSDK(const _di_IOTAPlatformSDK PlatformSDK, const System::UnicodeString PlatformName) = 0 /* overload */;
	virtual bool __fastcall PlatformNameExists(const System::UnicodeString PlatformNameGroup, const System::UnicodeString PlatformName) = 0 ;
	HIDESBASE virtual bool __fastcall SelectProfileToPullRemoteFiles(const _di_IOTAPlatformSDK PlatformSDKToPullRemoteFiles, const System::UnicodeString PlatformName) = 0 /* overload */;
	virtual void __fastcall UpdateChanges() = 0 ;
};

__interface  INTERFACE_UUID("{29EF0235-029D-4994-84B0-081C10F205D8}") IPlatformContainerCreator  : public System::IInterface 
{
	virtual System::Classes::_di_IInterfaceList __fastcall GetPlatformContainer(const System::_di_IInterface AModelContainer, const System::_di_IInterface AProject, const System::_di_IInterface AGraphParent) = 0 ;
	virtual System::DynamicArray<System::UnicodeString> __fastcall GetPlatformContainerId() = 0 ;
};

__interface  INTERFACE_UUID("{EEA5DA06-C1CA-4E64-8D25-49B986E80076}") IPlatformContainerCategoryCreator  : public System::IInterface 
{
	virtual System::Classes::_di_IInterfaceList __fastcall GetPlatformContainerCategories(const System::_di_IInterface AModelContainer, const System::_di_IInterface AProject, const System::_di_IInterface AGraphParent) = 0 ;
	virtual System::DynamicArray<System::UnicodeString> __fastcall GetPlatformContainerCategoriesId() = 0 ;
};

__interface  INTERFACE_UUID("{E3F87885-E37A-4B98-B5CC-03F4EA7D0C2C}") IPlatformResources  : public System::IInterface 
{
	virtual NativeUInt __fastcall FindPlatformResource(const System::UnicodeString AName) = 0 ;
	virtual System::Classes::TStream* __fastcall LoadPlatformResourceStream(const System::UnicodeString AName) = 0 ;
};

__interface  INTERFACE_UUID("{4C4F6CEE-CA06-46D6-9114-B22FA4F7E771}") IOTAAndroidServicesManager  : public System::IInterface 
{
	virtual bool __fastcall ExecuteAddServiceWizard(const Toolsapi::_di_IOTAProject AProject, const System::UnicodeString ServiceProjectBasePath = System::UnicodeString()) = 0 ;
	virtual bool __fastcall ExecuteRemoveServicesWizard(const Toolsapi::_di_IOTAProject AProject) = 0 ;
};

//-- var, const, procedure ---------------------------------------------------
#define cWin32Platform L"Win32"
#define cWinNX32Platform L"WinNX32"
#define cWinIoT32Platform L"WinIoT32"
#define cWinArmPlatform L"WinARM32"
#define cOSX32Platform L"OSX32"
#define cOSX64Platform L"OSX64"
#define cOSXArm64Platform L"OSXARM64"
#define cWin64Platform L"Win64"
#define cLinux32Platform L"Linux32"
#define cLinux64Platform L"Linux64"
#define cAndroidArm32Platform L"Android"
#define cAndroidPlatform L"Android"
#define cAndroidArm64Platform L"Android64"
#define ciOSSimulator32Platform L"iOSSimulator"
#define ciOSSimulator64Platform L"iOSSimulator64"
#define ciOSSimulatorArm64Platform L"iOSSimARM64"
#define ciOSSimulatorPlatform L"iOSSimulator"
#define ciOSDevice32Platform L"iOSDevice32"
#define ciOSDevice64Platform L"iOSDevice64"
#define ciOSDevicePlatform L"iOSDevice32"
#define cUndefinedFamilyName L"Unknown"
#define cWindowsFamilyName L"Windows"
#define cOSXFamilyName L"macOS"
#define ciOSFamilyName L"iOS"
#define cAndroidFamilyName L"Android"
#define cLinuxFamilyName L"Linux"
static const int AllPlatforms _DEPRECATED_ATTRIBUTE1("use System.Classes.pidAllPlatforms")  = int(0x394df);
static const System::Int8 fetUnknownType = System::Int8(0x0);
static const System::Int8 fetExe = System::Int8(0x1);
static const System::Int8 fetPackage = System::Int8(0x2);
static const System::Int8 fetDll = System::Int8(0x3);
static const System::Int8 fetStaticLibrary = System::Int8(0x4);
static const System::Int8 fetPackageImportLibrary = System::Int8(0x5);
static const System::Int8 fetCUnitBinary = System::Int8(0x6);
static const System::Int8 fetDelphiUnitBinary = System::Int8(0x7);
static const System::Int8 fetImportLibrary = System::Int8(0x8);
static const System::Int8 fetLast = System::Int8(0x8);
static const System::Int8 fetDelphiRemoteDebug = System::Int8(0x9);
static const System::Int8 fetCBuilderRemoteDebug = System::Int8(0xa);
static const System::Int8 fetDelphiLibraryRemoteDebug = System::Int8(0xb);
static const System::Int8 btDebug = System::Int8(0x0);
static const System::Int8 btAdHoc = System::Int8(0x1);
static const System::Int8 btAppStore = System::Int8(0x2);
static const System::Int8 btNormal = System::Int8(0x3);
static const System::Int8 piBTDebug = System::Int8(0x1e);
static const System::Int8 piBTAdHoc = System::Int8(0x1f);
static const System::Int8 piBTAppStore = System::Int8(0x20);
static const System::Int8 piBTNormal = System::Int8(0x21);
#define cAndroidServiceType L"AndroidServiceType"
#define cSrvTypeLocal L"Local"
#define cSrvTypeRemote L"Remote"
#define cSrvTypeIntentLocal L"IntentLocal"
#define cSrvTypeIntentRemote L"IntentRemote"
extern DELPHI_PACKAGE Platformapi__1 cOSFamilyDisplayNames;
extern DELPHI_PACKAGE TOTADevicePlatforms dffPlatforms;
extern DELPHI_PACKAGE TOTADeviceFormFactors dffFormFactors;
extern DELPHI_PACKAGE TOTADeviceFormFactors dffPhoneFactors;
extern DELPHI_PACKAGE TOTADeviceFormFactors dffWearableFactors;
extern DELPHI_PACKAGE TOTADeviceFormFactors dffComputerFactors;
extern DELPHI_PACKAGE System::UnicodeString __fastcall PlatformIDToName(const unsigned APlatformID);
extern DELPHI_PACKAGE System::UnicodeString __fastcall ConfigurationDisplayTitle(const Toolsapi::_di_IOTABuildConfiguration BC, bool Abbreviate);
}	/* namespace Platformapi */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_PLATFORMAPI)
using namespace Platformapi;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// PlatformapiHPP
