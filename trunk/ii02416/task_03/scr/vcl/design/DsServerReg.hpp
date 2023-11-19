// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DSServerReg.pas' rev: 35.00 (Windows)

#ifndef DsserverregHPP
#define DsserverregHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <ToolsAPI.hpp>
#include <DSSource.hpp>
#include <DesignEditors.hpp>
#include <DesignIntf.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dsserverreg
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TPEMFilePropertyEditor;
class DELPHICLASS TPEMKeyFilePropertyEditor;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TPEMFilePropertyEditor : public Designeditors::TStringProperty
{
	typedef Designeditors::TStringProperty inherited;
	
protected:
	virtual System::UnicodeString __fastcall GetFilter();
	
public:
	virtual void __fastcall Edit();
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes();
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TPEMFilePropertyEditor(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TStringProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TPEMFilePropertyEditor() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPEMKeyFilePropertyEditor : public TPEMFilePropertyEditor
{
	typedef TPEMFilePropertyEditor inherited;
	
protected:
	virtual System::UnicodeString __fastcall GetFilter();
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TPEMKeyFilePropertyEditor(const Designintf::_di_IDesigner ADesigner, int APropCount) : TPEMFilePropertyEditor(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TPEMKeyFilePropertyEditor() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE void __fastcall Register(void);
}	/* namespace Dsserverreg */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DSSERVERREG)
using namespace Dsserverreg;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DsserverregHPP
