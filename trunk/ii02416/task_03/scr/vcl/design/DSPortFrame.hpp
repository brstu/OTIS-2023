// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSPortFrame.pas' rev: 35.00 (Windows)

#ifndef DsportframeHPP
#define DsportframeHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.SysUtils.hpp>
#include <System.Variants.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.StdCtrls.hpp>
#include <IPPeerAPI.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dsportframe
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TDSPortFram;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TDSPortFram : public Vcl::Forms::TFrame
{
	typedef Vcl::Forms::TFrame inherited;
	
__published:
	Vcl::Stdctrls::TLabel* LabelPort;
	Vcl::Stdctrls::TEdit* EditPort;
	Vcl::Stdctrls::TButton* ButtonTest;
	Vcl::Stdctrls::TButton* ButtonNextAvailable;
	void __fastcall ButtonTestClick(System::TObject* Sender);
	void __fastcall ButtonNextAvailableClick(System::TObject* Sender);
	
private:
	int __fastcall GetPort();
	void __fastcall SetPort(const int Value);
	void __fastcall OnExecute(Ippeerapi::_di_IIPContext AContext);
	
public:
	__property int Port = {read=GetPort, write=SetPort, nodefault};
public:
	/* TCustomFrame.Create */ inline __fastcall virtual TDSPortFram(System::Classes::TComponent* AOwner) : Vcl::Forms::TFrame(AOwner) { }
	
public:
	/* TScrollingWinControl.Destroy */ inline __fastcall virtual ~TDSPortFram() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TDSPortFram(HWND ParentWindow) : Vcl::Forms::TFrame(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Dsportframe */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DSPORTFRAME)
using namespace Dsportframe;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsportframeHPP
