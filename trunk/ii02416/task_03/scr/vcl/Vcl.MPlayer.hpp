// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.MPlayer.pas' rev: 35.00 (Windows)

#ifndef Vcl_MplayerHPP
#define Vcl_MplayerHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Graphics.hpp>
#include <Winapi.Messages.hpp>
#include <Winapi.MMSystem.hpp>
#include <Vcl.Dialogs.hpp>
#include <System.SysUtils.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Menus.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Mplayer
{
//-- forward type declarations -----------------------------------------------
struct TMPButton;
class DELPHICLASS EMCIDeviceError;
class DELPHICLASS TMediaPlayer;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TMPBtnType : unsigned char { btPlay, btPause, btStop, btNext, btPrev, btStep, btBack, btRecord, btEject };

typedef System::Set<TMPBtnType, TMPBtnType::btPlay, TMPBtnType::btEject> TButtonSet;

enum DECLSPEC_DENUM TMPGlyph : unsigned char { mgEnabled, mgDisabled, mgColored };

struct DECLSPEC_DRECORD TMPButton
{
public:
	bool Visible;
	bool Enabled;
	bool Colored;
	bool Auto;
	System::StaticArray<Vcl::Graphics::TBitmap*, 3> Bitmaps;
};


enum DECLSPEC_DENUM TMPDeviceTypes : unsigned char { dtAutoSelect, dtAVIVideo, dtCDAudio, dtDAT, dtDigitalVideo, dtMMMovie, dtOther, dtOverlay, dtScanner, dtSequencer, dtVCR, dtVideodisc, dtWaveAudio };

enum DECLSPEC_DENUM TMPTimeFormats : unsigned char { tfMilliseconds, tfHMS, tfMSF, tfFrames, tfSMPTE24, tfSMPTE25, tfSMPTE30, tfSMPTE30Drop, tfBytes, tfSamples, tfTMSF };

enum DECLSPEC_DENUM TMPModes : unsigned char { mpNotReady, mpStopped, mpPlaying, mpRecording, mpSeeking, mpPaused, mpOpen };

enum DECLSPEC_DENUM TMPNotifyValues : unsigned char { nvSuccessful, nvSuperseded, nvAborted, nvFailure };

enum DECLSPEC_DENUM TMPDevCaps : unsigned char { mpCanStep, mpCanEject, mpCanPlay, mpCanRecord, mpUsesWindow };

typedef System::Set<TMPDevCaps, TMPDevCaps::mpCanStep, TMPDevCaps::mpUsesWindow> TMPDevCapsSet;

typedef void __fastcall (__closure *EMPNotify)(System::TObject* Sender, TMPBtnType Button, bool &DoDefault);

typedef void __fastcall (__closure *EMPPostNotify)(System::TObject* Sender, TMPBtnType Button);

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EMCIDeviceError : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EMCIDeviceError(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EMCIDeviceError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EMCIDeviceError(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EMCIDeviceError(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EMCIDeviceError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EMCIDeviceError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EMCIDeviceError(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EMCIDeviceError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EMCIDeviceError(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EMCIDeviceError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EMCIDeviceError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EMCIDeviceError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EMCIDeviceError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef System::Word TMediaDevice;

class PASCALIMPLEMENTATION TMediaPlayer : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
private:
	System::StaticArray<TMPButton, 9> Buttons;
	TButtonSet FVisibleButtons;
	TButtonSet FEnabledButtons;
	TButtonSet FColoredButtons;
	TButtonSet FAutoButtons;
	bool Pressed;
	bool Down;
	TMPBtnType CurrentButton;
	System::Types::TRect CurrentRect;
	int ButtonWidth;
	System::Types::TPoint MinBtnSize;
	EMPNotify FOnClick;
	EMPPostNotify FOnPostClick;
	System::Classes::TNotifyEvent FOnNotify;
	TMPBtnType FocusedButton;
	bool MCIOpened;
	TMPDevCapsSet FCapabilities;
	bool FCanPlay;
	bool FCanStep;
	bool FCanEject;
	bool FCanRecord;
	bool FHasVideo;
	int FFlags;
	bool FWait;
	bool FNotify;
	bool FUseWait;
	bool FUseNotify;
	bool FUseFrom;
	bool FUseTo;
	System::Word FDeviceID;
	TMPDeviceTypes FDeviceType;
	int FTo;
	int FFrom;
	int FFrames;
	int FError;
	TMPNotifyValues FNotifyValue;
	Vcl::Controls::TWinControl* FDisplay;
	int FDWidth;
	int FDHeight;
	System::UnicodeString FElementName;
	bool FAutoEnable;
	bool FAutoOpen;
	bool FAutoRewind;
	bool FShareable;
	void __fastcall LoadBitmaps();
	void __fastcall DestroyBitmaps();
	void __fastcall SetEnabledButtons(TButtonSet Value);
	void __fastcall SetColored(TButtonSet Value);
	HIDESBASE void __fastcall SetVisible(TButtonSet Value);
	void __fastcall SetAutoEnable(bool Value);
	void __fastcall DrawAutoButtons();
	HIDESBASE void __fastcall DoMouseDown(int XPos, int YPos);
	HIDESBASE MESSAGE void __fastcall WMLButtonDown(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonDblClk(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMMouseMove(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonUp(Winapi::Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Message);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TWMKillFocus &Message);
	MESSAGE void __fastcall WMGetDlgCode(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Winapi::Messages::TMessage &Message);
	int __fastcall VisibleButtonCount();
	void __fastcall Adjust();
	void __fastcall DoClick(TMPBtnType Button);
	void __fastcall DoPostClick(TMPBtnType Button);
	void __fastcall DrawButton(TMPBtnType Btn, int X, int DPI = 0x0);
	void __fastcall CheckIfOpen();
	void __fastcall SetPosition(int Value);
	void __fastcall SetDeviceType(TMPDeviceTypes Value);
	void __fastcall SetWait(bool Flag);
	void __fastcall SetNotify(bool Flag);
	void __fastcall SetFrom(int Value);
	void __fastcall SetTo(int Value);
	void __fastcall SetTimeFormat(TMPTimeFormats Value);
	void __fastcall SetDisplay(Vcl::Controls::TWinControl* Value);
	void __fastcall SetOrigDisplay();
	void __fastcall SetDisplayRect(const System::Types::TRect &Value);
	System::Types::TRect __fastcall GetDisplayRect();
	void __fastcall GetDeviceCaps();
	System::Word __fastcall GetDeviceID();
	System::UnicodeString __fastcall GetFileName();
	int __fastcall GetStart();
	int __fastcall GetLength();
	TMPModes __fastcall GetMode();
	int __fastcall GetTracks();
	int __fastcall GetPosition();
	System::UnicodeString __fastcall GetErrorMessage();
	TMPTimeFormats __fastcall GetTimeFormat();
	int __fastcall GetTrackLength(int TrackNum);
	int __fastcall GetTrackPosition(int TrackNum);
	void __fastcall SetFileName(System::UnicodeString Value);
	
protected:
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall Loaded();
	DYNAMIC void __fastcall AutoButtonSet(TMPBtnType Btn);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	virtual void __fastcall Paint();
	MESSAGE void __fastcall MMNotify(Winapi::Messages::TMessage &Message);
	HIDESBASEDYNAMIC void __fastcall Click(TMPBtnType Button, bool &DoDefault);
	DYNAMIC void __fastcall PostClick(TMPBtnType Button);
	DYNAMIC void __fastcall DoNotify();
	DYNAMIC void __fastcall Updated();
	
public:
	__fastcall virtual TMediaPlayer(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TMediaPlayer();
	void __fastcall Open();
	void __fastcall Close();
	void __fastcall Play();
	void __fastcall Stop();
	void __fastcall Pause();
	void __fastcall Step();
	void __fastcall Back();
	void __fastcall Previous();
	void __fastcall Next();
	void __fastcall StartRecording();
	void __fastcall Eject();
	void __fastcall Save();
	void __fastcall PauseOnly();
	void __fastcall Resume();
	void __fastcall Rewind();
	__property int TrackLength[int TrackNum] = {read=GetTrackLength};
	__property int TrackPosition[int TrackNum] = {read=GetTrackPosition};
	__property TMPDevCapsSet Capabilities = {read=FCapabilities, nodefault};
	__property int Error = {read=FError, nodefault};
	__property System::UnicodeString ErrorMessage = {read=GetErrorMessage};
	__property int Start = {read=GetStart, nodefault};
	__property int Length = {read=GetLength, nodefault};
	__property int Tracks = {read=GetTracks, nodefault};
	__property int Frames = {read=FFrames, write=FFrames, nodefault};
	__property TMPModes Mode = {read=GetMode, nodefault};
	__property int Position = {read=GetPosition, write=SetPosition, nodefault};
	__property bool Wait = {read=FWait, write=SetWait, nodefault};
	__property bool Notify = {read=FNotify, write=SetNotify, nodefault};
	__property TMPNotifyValues NotifyValue = {read=FNotifyValue, nodefault};
	__property int StartPos = {read=FFrom, write=SetFrom, nodefault};
	__property int EndPos = {read=FTo, write=SetTo, nodefault};
	__property System::Word DeviceID = {read=GetDeviceID, nodefault};
	__property TMPTimeFormats TimeFormat = {read=GetTimeFormat, write=SetTimeFormat, nodefault};
	__property System::Types::TRect DisplayRect = {read=GetDisplayRect, write=SetDisplayRect};
	
__published:
	__property Align = {default=0};
	__property TButtonSet ColoredButtons = {read=FColoredButtons, write=SetColored, default=511};
	__property Enabled = {default=1};
	__property TButtonSet EnabledButtons = {read=FEnabledButtons, write=SetEnabledButtons, default=511};
	__property TButtonSet VisibleButtons = {read=FVisibleButtons, write=SetVisible, default=511};
	__property Anchors = {default=3};
	__property bool AutoEnable = {read=FAutoEnable, write=SetAutoEnable, default=1};
	__property bool AutoOpen = {read=FAutoOpen, write=FAutoOpen, default=0};
	__property bool AutoRewind = {read=FAutoRewind, write=FAutoRewind, default=1};
	__property Constraints;
	__property TMPDeviceTypes DeviceType = {read=FDeviceType, write=SetDeviceType, default=0};
	__property DoubleBuffered;
	__property Vcl::Controls::TWinControl* Display = {read=FDisplay, write=SetDisplay};
	__property System::UnicodeString FileName = {read=GetFileName, write=SetFileName};
	__property bool Shareable = {read=FShareable, write=FShareable, default=0};
	__property StyleName = {default=0};
	__property Visible = {default=1};
	__property ParentDoubleBuffered = {default=1};
	__property ParentShowHint = {default=1};
	__property ShowHint;
	__property PopupMenu;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property EMPNotify OnClick = {read=FOnClick, write=FOnClick};
	__property OnContextPopup;
	__property OnEnter;
	__property OnExit;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property EMPPostNotify OnPostClick = {read=FOnPostClick, write=FOnPostClick};
	__property System::Classes::TNotifyEvent OnNotify = {read=FOnNotify, write=FOnNotify};
public:
	/* TWinControl.CreateParented */ inline __fastcall TMediaPlayer(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Mplayer */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_MPLAYER)
using namespace Vcl::Mplayer;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_MplayerHPP
