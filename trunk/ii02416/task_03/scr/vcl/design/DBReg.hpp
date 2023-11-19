// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DBReg.pas' rev: 35.00 (Windows)

#ifndef DbregHPP
#define DbregHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <DesignIntf.hpp>
#include <DesignEditors.hpp>
#include <DSDesign.hpp>
#include <System.WideStrings.hpp>

//-- user supplied -----------------------------------------------------------

namespace Dbreg
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TDBStringProperty;
class DELPHICLASS TDataFieldProperty;
class DELPHICLASS TDataFieldAggProperty;
class DELPHICLASS TDataSetEditor;
class DELPHICLASS TIndexFieldNamesProperty;
class DELPHICLASS TIndexNameProperty;
class DELPHICLASS TListFieldProperty;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TDBStringProperty : public Designeditors::TStringProperty
{
	typedef Designeditors::TStringProperty inherited;
	
public:
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes();
	virtual void __fastcall GetValueList(System::Classes::TStrings* List);
	virtual void __fastcall GetValues(System::Classes::TGetStrProc Proc);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TDBStringProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TStringProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TDBStringProperty() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDataFieldProperty : public TDBStringProperty
{
	typedef TDBStringProperty inherited;
	
public:
	virtual System::UnicodeString __fastcall GetDataSourcePropName();
	virtual void __fastcall GetValueList(System::Classes::TStrings* List);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TDataFieldProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : TDBStringProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TDataFieldProperty() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDataFieldAggProperty : public TDBStringProperty
{
	typedef TDBStringProperty inherited;
	
public:
	virtual System::UnicodeString __fastcall GetDataSourcePropName();
	virtual void __fastcall GetValueList(System::Classes::TStrings* List);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TDataFieldAggProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : TDBStringProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TDataFieldAggProperty() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TDataSetEditor : public Designeditors::TComponentEditor
{
	typedef Designeditors::TComponentEditor inherited;
	
protected:
	virtual Dsdesign::TDSDesignerClass __fastcall GetDSDesignerClass();
	
public:
	virtual void __fastcall ExecuteVerb(int Index);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual int __fastcall GetVerbCount();
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TDataSetEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : Designeditors::TComponentEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDataSetEditor() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIndexFieldNamesProperty : public TDBStringProperty
{
	typedef TDBStringProperty inherited;
	
public:
	virtual void __fastcall GetValueList(System::Classes::TStrings* List);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TIndexFieldNamesProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : TDBStringProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TIndexFieldNamesProperty() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIndexNameProperty : public TDBStringProperty
{
	typedef TDBStringProperty inherited;
	
public:
	virtual void __fastcall GetValueList(System::Classes::TStrings* List);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TIndexNameProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : TDBStringProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TIndexNameProperty() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TListFieldProperty : public TDataFieldProperty
{
	typedef TDataFieldProperty inherited;
	
public:
	virtual System::UnicodeString __fastcall GetDataSourcePropName();
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TListFieldProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : TDataFieldProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TListFieldProperty() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE void __fastcall Register();
}	/* namespace Dbreg */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DBREG)
using namespace Dbreg;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DbregHPP
