// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.VirtualImage.pas' rev: 35.00 (Windows)

#ifndef Vcl_VirtualimageHPP
#define Vcl_VirtualimageHPP

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
#include <System.Types.hpp>
#include <System.Messaging.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.BaseImageCollection.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Menus.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Virtualimage
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TCustomVirtualImage;
class DELPHICLASS TVirtualImage;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TCustomVirtualImage : public Vcl::Controls::TGraphicControl
{
	typedef Vcl::Controls::TGraphicControl inherited;
	
private:
	Vcl::Baseimagecollection::TCustomImageCollection* FImageCollection;
	bool FCenter;
	bool FProportional;
	int FImageWidth;
	int FImageHeight;
	System::UnicodeString FImageName;
	int FImageIndex;
	int FCollectionChangedMessageID;
	void __fastcall SetCenter(bool Value);
	void __fastcall SetProportional(bool Value);
	void __fastcall SetImageWidth(int Value);
	void __fastcall SetImageHeight(int Value);
	void __fastcall SetImageIndex(int Value);
	void __fastcall SetImageName(const System::UnicodeString Value);
	void __fastcall SetImageCollection(Vcl::Baseimagecollection::TCustomImageCollection* Value);
	void __fastcall CollectionChangedMessageHandler(System::TObject* const Sender, System::Messaging::TMessageBase* const Msg);
	
protected:
	System::Types::TRect __fastcall DestRect();
	virtual void __fastcall Paint();
	void __fastcall CheckImageIndex();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	DYNAMIC void __fastcall ChangeScale(int M, int D, bool isDpiChange)/* overload */;
	
public:
	__fastcall virtual TCustomVirtualImage(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomVirtualImage();
	__property bool Center = {read=FCenter, write=SetCenter, default=0};
	__property Vcl::Baseimagecollection::TCustomImageCollection* ImageCollection = {read=FImageCollection, write=SetImageCollection};
	__property int ImageWidth = {read=FImageWidth, write=SetImageWidth, nodefault};
	__property int ImageHeight = {read=FImageHeight, write=SetImageHeight, nodefault};
	__property int ImageIndex = {read=FImageIndex, write=SetImageIndex, nodefault};
	__property System::UnicodeString ImageName = {read=FImageName, write=SetImageName};
	__property bool Proportional = {read=FProportional, write=SetProportional, default=1};
	/* Hoisted overloads: */
	
protected:
	DYNAMIC inline void __fastcall  ChangeScale(int M, int D){ Vcl::Controls::TControl::ChangeScale(M, D); }
	
};


class PASCALIMPLEMENTATION TVirtualImage : public TCustomVirtualImage
{
	typedef TCustomVirtualImage inherited;
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property Center = {default=0};
	__property Constraints;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property ImageCollection;
	__property ImageWidth;
	__property ImageHeight;
	__property ImageIndex;
	__property ImageName = {default=0};
	__property Enabled = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property Proportional = {default=1};
	__property ShowHint;
	__property Touch;
	__property Visible = {default=1};
	__property OnClick;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnGesture;
	__property OnMouseActivate;
	__property OnMouseDown;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TCustomVirtualImage.Create */ inline __fastcall virtual TVirtualImage(System::Classes::TComponent* AOwner) : TCustomVirtualImage(AOwner) { }
	/* TCustomVirtualImage.Destroy */ inline __fastcall virtual ~TVirtualImage() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Virtualimage */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_VIRTUALIMAGE)
using namespace Vcl::Virtualimage;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_VirtualimageHPP
