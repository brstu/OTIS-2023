// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DrpCtrls.pas' rev: 35.00 (Windows)

#ifndef DrpctrlsHPP
#define DrpctrlsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <Data.DB.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <DesignIntf.hpp>

//-- user supplied -----------------------------------------------------------

namespace Drpctrls
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TCandidateList;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TCandidateList : public System::Classes::TList
{
	typedef System::Classes::TList inherited;
	
private:
	Designintf::_di_IDesigner FDesigner;
	void __fastcall AddComponent(const System::UnicodeString ComponentName);
	
public:
	__fastcall TCandidateList(System::Classes::TComponentClass CandidateClass, const Designintf::_di_IDesigner Designer);
public:
	/* TList.Destroy */ inline __fastcall virtual ~TCandidateList() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE void __fastcall RegisterFieldControl(Data::Db::TFieldClass FieldClass, const System::UnicodeString ControlClass);
extern DELPHI_PACKAGE void __fastcall SetClassProp(System::TObject* Instance, const System::UnicodeString PropName, System::TClass ClassType, void * Value);
extern DELPHI_PACKAGE Data::Db::TDataSource* __fastcall GetDataSource(const Designintf::_di_IDesigner Designer, Data::Db::TDataSet* Dataset);
extern DELPHI_PACKAGE Vcl::Controls::TControlClass __fastcall CreateControlClass(Data::Db::TDataSet* Dataset, const System::UnicodeString FieldName, System::UnicodeString ControlClassName);
extern DELPHI_PACKAGE Vcl::Controls::TControl* __fastcall CreateFieldControl(const Designintf::_di_IDesigner Designer, Data::Db::TField* Field, System::UnicodeString ControlClassName, System::Classes::TComponent* Parent, int X, int Y, bool WithLabel);
}	/* namespace Drpctrls */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DRPCTRLS)
using namespace Drpctrls;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DrpctrlsHPP
