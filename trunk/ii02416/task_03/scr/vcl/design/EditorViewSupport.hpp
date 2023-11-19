// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'EditorViewSupport.pas' rev: 35.00 (Windows)

#ifndef EditorviewsupportHPP
#define EditorviewsupportHPP

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
#include <System.Types.hpp>
#include <DesignIntf.hpp>
#include <Vcl.Forms.hpp>
#include <System.Contnrs.hpp>
#include <ComponentDesigner.hpp>
#include <StructureViewAPI.hpp>
#include <ToolsAPI.hpp>
#include <EditorViewAPI.hpp>

//-- user supplied -----------------------------------------------------------

namespace Editorviewsupport
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE INTACustomEditorEditSubView;
typedef System::DelphiInterface<INTACustomEditorEditSubView> _di_INTACustomEditorEditSubView;
class DELPHICLASS TCustomEditorViewInfo;
class DELPHICLASS TCustomEditorViewList;
class DELPHICLASS ERequiredInterfaceError;
class DELPHICLASS TCustomEditorView;
struct TEditorViewData;
//-- type declarations -------------------------------------------------------
__interface  INTERFACE_UUID("{EB5F6F27-CA22-4A82-9729-B66CCF3ADF53}") INTACustomEditorEditSubView  : public Toolsapi::INTACustomEditorSubView 
{
	virtual System::TObject* __fastcall GetEditView(const System::_di_IInterface AContext, System::TObject* AViewObject) = 0 ;
	virtual bool __fastcall GetIsReadOnly() = 0 ;
	__property bool IsReadOnly = {read=GetIsReadOnly};
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCustomEditorViewInfo : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Vcl::Forms::TCustomFrameClass FViewClass;
	Toolsapi::_di_INTACustomEditorSubView FCustomEditorSubView;
	int FGroup;
	Vcl::Forms::TCustomFrameClass __fastcall GetViewClass();
	
public:
	__fastcall TCustomEditorViewInfo(Vcl::Forms::TCustomFrameClass AViewClass, const Toolsapi::_di_INTACustomEditorSubView ACustomEditorView);
	__fastcall virtual ~TCustomEditorViewInfo();
	__property Toolsapi::_di_INTACustomEditorSubView CustomEditorSubView = {read=FCustomEditorSubView};
	__property Vcl::Forms::TCustomFrameClass ViewClass = {read=GetViewClass};
	__property int Group = {read=FGroup, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCustomEditorViewList : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	Vcl::Forms::TCustomFrameClass operator[](int Index) { return this->ViewClasses[Index]; }
	
private:
	System::Contnrs::TObjectList* FList;
	Editorviewapi::_di_INTAFileCustomEditorSubView __fastcall GetFileCustomEditorView(int Index);
	
protected:
	Vcl::Forms::TCustomFrameClass __fastcall GetViewClass(int Index);
	Toolsapi::_di_INTACustomEditorSubView __fastcall GetCustomEditorView(int Index);
	
public:
	__fastcall TCustomEditorViewList();
	__fastcall virtual ~TCustomEditorViewList();
	void __fastcall FreeEditorGroup(int AGroup);
	int __fastcall Count();
	void __fastcall Add(Vcl::Forms::TCustomFrameClass AFrame)/* overload */;
	void __fastcall Remove(Vcl::Forms::TCustomFrameClass AFrame)/* overload */;
	void * __fastcall Add(const Toolsapi::_di_INTACustomEditorSubView ACustomEditView)/* overload */;
	void __fastcall Remove(void * AView)/* overload */;
	__property Vcl::Forms::TCustomFrameClass ViewClasses[int Index] = {read=GetViewClass/*, default*/};
	__property Toolsapi::_di_INTACustomEditorSubView CustomEditorViews[int Index] = {read=GetCustomEditorView};
	__property Editorviewapi::_di_INTAFileCustomEditorSubView FileEditorViews[int Index] = {read=GetFileCustomEditorView};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION ERequiredInterfaceError : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ERequiredInterfaceError(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ERequiredInterfaceError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ERequiredInterfaceError(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ERequiredInterfaceError(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ERequiredInterfaceError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ERequiredInterfaceError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ERequiredInterfaceError(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ERequiredInterfaceError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ERequiredInterfaceError(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ERequiredInterfaceError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ERequiredInterfaceError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ERequiredInterfaceError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ERequiredInterfaceError() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCustomEditorView : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
protected:
	bool __fastcall Handles(const System::_di_IInterface AContext);
	bool __fastcall GetCanCloneView();
	System::UnicodeString __fastcall GetCaption();
	int __fastcall GetPriority();
	void __fastcall Display(const System::_di_IInterface AContext, System::TObject* AViewObject);
	Designintf::TEditState __fastcall GetEditState(const System::_di_IInterface AContext, System::TObject* AViewObject);
	bool __fastcall EditAction(const System::_di_IInterface AContext, Designintf::TEditAction Action, System::TObject* AViewObject);
	virtual void __fastcall Hide(const System::_di_IInterface AContext, System::TObject* AViewObject);
	virtual void __fastcall ViewClosed(const System::_di_IInterface AContext, System::TObject* AViewObject);
	virtual Vcl::Forms::TCustomFrameClass __fastcall GetFrameClass();
	virtual void __fastcall FrameCreated(Vcl::Forms::TCustomFrame* AFrame);
public:
	/* TObject.Create */ inline __fastcall TCustomEditorView() : System::TInterfacedObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TCustomEditorView() { }
	
};

#pragma pack(pop)

struct DECLSPEC_DRECORD TEditorViewData
{
public:
	System::UnicodeString ViewIdentifier;
	System::UnicodeString DataFileName;
	Componentdesigner::_di_IDatedStream DataStream;
};


typedef System::DynamicArray<TEditorViewData> TEditorViewDataArray;

typedef void __fastcall (*TCustomEditorViewNotify)(const Toolsapi::_di_INTACustomEditorSubView ACustomEditorSubView);

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE TCustomEditorViewNotify RegisterCustomEditorViewProc;
extern DELPHI_PACKAGE TCustomEditorViewNotify UnregisterCustomEditorViewProc;
extern DELPHI_PACKAGE void * __fastcall RegisterEditorSubView(const Toolsapi::_di_INTACustomEditorSubView ACustomEditorView);
extern DELPHI_PACKAGE void __fastcall UnregisterEditorSubView(void * AView);
extern DELPHI_PACKAGE TCustomEditorViewList* __fastcall RegisteredEditorSubViews();
extern DELPHI_PACKAGE bool __fastcall ContextToRootComponent(const System::_di_IInterface AContext, /* out */ System::Classes::TComponent* &ARootComponent);
extern DELPHI_PACKAGE bool __fastcall ContextToDesigner(const System::_di_IInterface AContext, /* out */ Designintf::_di_IDesigner &ADesigner);
extern DELPHI_PACKAGE bool __fastcall ContextToFormEditor(const System::_di_IInterface AContext, /* out */ Toolsapi::_di_IOTAFormEditor &AFormEditor);
extern DELPHI_PACKAGE bool __fastcall ContextToFormFilename(const System::_di_IInterface AContext, /* out */ System::UnicodeString &AFilename);
extern DELPHI_PACKAGE bool __fastcall ContextToFilename(const System::_di_IInterface AContext, /* out */ System::UnicodeString &AFilename);
extern DELPHI_PACKAGE bool __fastcall ContextToModule(const System::_di_IInterface AContext, /* out */ Toolsapi::_di_IOTAModule &AModule);
extern DELPHI_PACKAGE bool __fastcall ContextResurrect(const System::_di_IInterface AContext);
}	/* namespace Editorviewsupport */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_EDITORVIEWSUPPORT)
using namespace Editorviewsupport;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// EditorviewsupportHPP
