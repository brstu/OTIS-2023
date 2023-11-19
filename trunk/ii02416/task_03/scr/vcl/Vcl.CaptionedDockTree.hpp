// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.CaptionedDockTree.pas' rev: 35.00 (Windows)

#ifndef Vcl_CaptioneddocktreeHPP
#define Vcl_CaptioneddocktreeHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Graphics.hpp>
#include <Winapi.Messages.hpp>
#include <Vcl.Themes.hpp>
#include <System.UITypes.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Captioneddocktree
{
//-- forward type declarations -----------------------------------------------
struct TParentFormState;
class DELPHICLASS TDockCaptionDrawer;
class DELPHICLASS TCaptionedDockTree;
//-- type declarations -------------------------------------------------------
struct DECLSPEC_DRECORD TParentFormState
{
public:
	System::UnicodeString Caption;
	System::Uitypes::TColor StartColor;
	System::Uitypes::TColor EndColor;
	System::Uitypes::TColor FontColor;
	bool Focused;
	Vcl::Graphics::TIcon* Icon;
};


enum DECLSPEC_DENUM TDockCaptionOrientation : unsigned char { dcoHorizontal, dcoVertical };

typedef unsigned TDockCaptionHitTest;

enum DECLSPEC_DENUM TDockCaptionPinButton : unsigned char { dcpbNone, dcpbUp, dcpbDown };

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TDockCaptionDrawer : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TDockCaptionOrientation FDockCaptionOrientation;
	TDockCaptionPinButton FDockCaptionPinButton;
	System::Types::TRect __fastcall GetCloseRect(const System::Types::TRect &CaptionRect);
	System::Types::TRect __fastcall GetPinRect(const System::Types::TRect &CaptionRect);
	int __fastcall CalcButtonSize(const System::Types::TRect &CaptionRect);
	
protected:
	__property TDockCaptionOrientation DockCaptionOrientation = {read=FDockCaptionOrientation, nodefault};
	
public:
	virtual int __fastcall GetGrabberSize(Vcl::Controls::TWinControl* ADockSite);
	virtual void __fastcall DrawDockCaption(Vcl::Graphics::TCanvas* const Canvas, const System::Types::TRect &CaptionRect, const TParentFormState &State);
	virtual unsigned __fastcall DockCaptionHitTest(const System::Types::TRect &CaptionRect, const System::Types::TPoint &MousePos);
	__fastcall virtual TDockCaptionDrawer(TDockCaptionOrientation DockCaptionOrientation);
	__property TDockCaptionPinButton DockCaptionPinButton = {read=FDockCaptionPinButton, write=FDockCaptionPinButton, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDockCaptionDrawer() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TDockCaptionDrawerClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TDockCaptionDrawerClass);
#endif /* _WIN64 */

class PASCALIMPLEMENTATION TCaptionedDockTree : public Vcl::Controls::TDockTree
{
	typedef Vcl::Controls::TDockTree inherited;
	
private:
	int FGrabberSize;
	TDockCaptionOrientation FDockCaptionOrientation;
	TDockCaptionDrawer* FDockCaptionDrawer;
	
protected:
	void __fastcall InvalidateDockSite(Vcl::Controls::TControl* const Client);
	virtual System::Types::TRect __fastcall AdjustCaptionRect(const System::Types::TRect &ARect);
	virtual void __fastcall AdjustDockRect(Vcl::Controls::TControl* Control, System::Types::TRect &ARect);
	unsigned __fastcall InternalCaptionHitTest(Vcl::Controls::TDockZone* const Zone, const System::Types::TPoint &MousePos);
	virtual void __fastcall PaintDockFrame(Vcl::Graphics::TCanvas* Canvas, Vcl::Controls::TControl* Control, const System::Types::TRect &ARect);
	virtual bool __fastcall ZoneCaptionHitTest(Vcl::Controls::TDockZone* const Zone, const System::Types::TPoint &MousePos, int &HTFlag);
	__property TDockCaptionOrientation DockCaptionOrientation = {read=FDockCaptionOrientation, nodefault};
	__property TDockCaptionDrawer* DockCaptionDrawer = {read=FDockCaptionDrawer};
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	virtual int __fastcall GetGrabberSize();
	
public:
	__fastcall virtual TCaptionedDockTree(Vcl::Controls::TWinControl* DockSite)/* overload */;
	__fastcall TCaptionedDockTree(Vcl::Controls::TWinControl* DockSite, TDockCaptionOrientation ADockCaptionOrientation)/* overload */;
	__fastcall virtual ~TCaptionedDockTree();
	__classmethod virtual TParentFormState __fastcall GetParentFormState(Vcl::Controls::TControl* const Control);
	__classmethod virtual TDockCaptionDrawerClass __fastcall GetDockCaptionDrawer();
};


#ifndef _WIN64
typedef System::TMetaClass* TCaptionedDockTreeClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TCaptionedDockTreeClass);
#endif /* _WIN64 */

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 dchtNone = System::Int8(0x0);
static const System::Int8 dchtCaption = System::Int8(0x1);
static const System::Int8 dchtClose = System::Int8(0x2);
static const System::Int8 dchtPin = System::Int8(0x3);
static const System::Int8 dchtCustom = System::Int8(0xa);
static const System::Int8 cDockCaptionDefaultGrabberSize = System::Int8(0x17);
}	/* namespace Captioneddocktree */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_CAPTIONEDDOCKTREE)
using namespace Vcl::Captioneddocktree;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_CaptioneddocktreeHPP
