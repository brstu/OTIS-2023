// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'EditorViewAPI.pas' rev: 35.00 (Windows)

#ifndef EditorviewapiHPP
#define EditorviewapiHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <ToolsAPI.hpp>
#include <System.Classes.hpp>
#include <DesignIntf.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <System.IniFiles.hpp>
#include <ComponentDesigner.hpp>

//-- user supplied -----------------------------------------------------------

namespace Editorviewapi
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE INTAFileCustomEditorSubView;
typedef System::DelphiInterface<INTAFileCustomEditorSubView> _di_INTAFileCustomEditorSubView;
//-- type declarations -------------------------------------------------------
__interface  INTERFACE_UUID("{934069AC-A869-48A9-8092-B4F89BBE71D4}") INTAFileCustomEditorSubView  : public Toolsapi::INTACustomEditorSubView 
{
	virtual System::UnicodeString __fastcall GetViewFilename(const System::_di_IInterface AContext) = 0 ;
	virtual void __fastcall Load(const System::_di_IInterface AContext, bool Existing, const System::_di_IInterface ACreator = System::_di_IInterface()) = 0 ;
	virtual void __fastcall LoadFromStream(const System::_di_IInterface AContext, const Componentdesigner::_di_IDatedStream AStream) = 0 ;
	virtual void __fastcall Save(const System::_di_IInterface AContext) = 0 ;
	virtual void __fastcall SaveToStream(const System::_di_IInterface AContext, /* out */ Componentdesigner::_di_IDatedStream &AStream) = 0 ;
};

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Editorviewapi */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_EDITORVIEWAPI)
using namespace Editorviewapi;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// EditorviewapiHPP
