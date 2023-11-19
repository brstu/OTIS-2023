// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'VCLSprigs.pas' rev: 35.00 (Windows)

#ifndef VclsprigsHPP
#define VclsprigsHPP

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
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <DesignIntf.hpp>
#include <DesignEditors.hpp>
#include <System.TypInfo.hpp>
#include <System.Contnrs.hpp>
#include <TreeIntf.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vclsprigs
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TControlSprig;
class DELPHICLASS TWinControlSprig;
class DELPHICLASS TFrameSprig;
class DELPHICLASS TWinControlRootSprig;
class DELPHICLASS TCustomFormRootSprig;
class DELPHICLASS TDataModuleRootSprig;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TControlSprig : public Treeintf::TComponentSprig
{
	typedef Treeintf::TComponentSprig inherited;
	
public:
	__fastcall virtual TControlSprig(System::Classes::TPersistent* AItem)/* overload */;
	__classmethod virtual bool __fastcall PaletteOverTo(Treeintf::TSprig* AParent, System::TClass AClass);
	virtual bool __fastcall DragOverTo(Treeintf::TSprig* AParent);
	virtual bool __fastcall DragDropTo(Treeintf::TSprig* AParent);
public:
	/* TComponentSprig.Create */ inline __fastcall TControlSprig(System::Classes::TPersistent* AItem, Treeintf::TSprig* AOwner)/* overload */ : Treeintf::TComponentSprig(AItem, AOwner) { }
	
public:
	/* TSprig.Destroy */ inline __fastcall virtual ~TControlSprig() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TWinControlSprig : public TControlSprig
{
	typedef TControlSprig inherited;
	
public:
	__fastcall virtual TWinControlSprig(System::Classes::TPersistent* AItem)/* overload */;
	virtual bool __fastcall DragOver(Treeintf::TSprig* AItem);
	virtual bool __fastcall DragDrop(Treeintf::TSprig* AItem);
	virtual bool __fastcall PaletteOver(Treeintf::TSprigClass ASprigClass, System::TClass AClass);
public:
	/* TComponentSprig.Create */ inline __fastcall TWinControlSprig(System::Classes::TPersistent* AItem, Treeintf::TSprig* AOwner)/* overload */ : TControlSprig(AItem, AOwner) { }
	
public:
	/* TSprig.Destroy */ inline __fastcall virtual ~TWinControlSprig() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TFrameSprig : public TWinControlSprig
{
	typedef TWinControlSprig inherited;
	
public:
	__fastcall virtual TFrameSprig(System::Classes::TPersistent* AItem)/* overload */;
	virtual void __fastcall FigureChildren();
public:
	/* TComponentSprig.Create */ inline __fastcall TFrameSprig(System::Classes::TPersistent* AItem, Treeintf::TSprig* AOwner)/* overload */ : TWinControlSprig(AItem, AOwner) { }
	
public:
	/* TSprig.Destroy */ inline __fastcall virtual ~TFrameSprig() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TWinControlRootSprig : public Treeintf::TRootSprig
{
	typedef Treeintf::TRootSprig inherited;
	
public:
	__fastcall virtual TWinControlRootSprig(System::Classes::TPersistent* AItem)/* overload */;
	virtual bool __fastcall DragOver(Treeintf::TSprig* AItem);
	virtual bool __fastcall DragDrop(Treeintf::TSprig* AItem);
	virtual bool __fastcall PaletteOver(Treeintf::TSprigClass ASprigClass, System::TClass AClass);
public:
	/* TRootSprig.Destroy */ inline __fastcall virtual ~TWinControlRootSprig() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCustomFormRootSprig : public TWinControlRootSprig
{
	typedef TWinControlRootSprig inherited;
	
public:
	__fastcall virtual TCustomFormRootSprig(System::Classes::TPersistent* AItem)/* overload */;
public:
	/* TRootSprig.Destroy */ inline __fastcall virtual ~TCustomFormRootSprig() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDataModuleRootSprig : public Treeintf::TRootSprig
{
	typedef Treeintf::TRootSprig inherited;
	
public:
	__fastcall virtual TDataModuleRootSprig(System::Classes::TPersistent* AItem)/* overload */;
	virtual bool __fastcall DragOver(Treeintf::TSprig* AItem);
	virtual bool __fastcall PaletteOver(Treeintf::TSprigClass ASprigClass, System::TClass AClass);
	virtual bool __fastcall AcceptsClass(System::TClass AClass);
public:
	/* TRootSprig.Destroy */ inline __fastcall virtual ~TDataModuleRootSprig() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Vclsprigs */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCLSPRIGS)
using namespace Vclsprigs;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// VclsprigsHPP
