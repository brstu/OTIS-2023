// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.Bind.ControlList.pas' rev: 35.00 (Windows)

#ifndef Vcl_Bind_ControllistHPP
#define Vcl_Bind_ControllistHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <Data.Bind.Components.hpp>
#include <Data.Bind.Editors.hpp>
#include <Data.Bind.Grid.hpp>
#include <Vcl.ControlList.hpp>

//-- user supplied -----------------------------------------------------------
#pragma link "Vcl.Bind.ControlList"

namespace Vcl
{
namespace Bind
{
namespace Controllist
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TBindListControlListEditor;
class DELPHICLASS TBindListControlEditorFactory;
class DELPHICLASS TLinkControlListToDataSourceControlManager;
class DELPHICLASS TLinkControlListToDataSourceColumnFactory;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TBindListControlListEditor : public Data::Bind::Editors::TBindListEditorCommon
{
	typedef Data::Bind::Editors::TBindListEditorCommon inherited;
	
private:
	Vcl::Controllist::TCustomControlList* FControlList;
	
protected:
	virtual bool __fastcall GetPositionGetter(System::UnicodeString &AGetter, int &ABase);
	virtual bool __fastcall GetPositionSetter(System::UnicodeString &ASetter, int &ABase);
	virtual void __fastcall BeginUpdate();
	virtual void __fastcall EndUpdate();
	virtual int __fastcall GetRowCount();
	virtual void __fastcall ClearList();
	virtual System::UnicodeString __fastcall GetSelectedText();
	void __fastcall SetRowCount(int AValue);
	void __fastcall SetOnCallbackEvaluateFormat(Data::Bind::Components::_di_TBindGridOnCallbackEvaluateFormat AOnCallbackEvaluateFormat);
	void __fastcall UpdateCell(int Col);
	void __fastcall BeforeRecordUpdate();
	void __fastcall AfterRecordUpdate();
	bool __fastcall CanCache();
	void __fastcall GetColumnNames(System::Classes::TStrings* ANames);
	void __fastcall GetColumnIndices(System::Classes::TStrings* ANames);
	
public:
	__fastcall TBindListControlListEditor(Vcl::Controllist::TCustomControlList* AControlList);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TBindListControlListEditor() { }
	
private:
	void *__IBindListVirtualEditorScope;	// Data::Bind::Components::IBindListVirtualEditorScope 
	void *__IBindGridEditor;	// Data::Bind::Components::IBindGridEditor 
	void *__IBindListRecordVirtualEditor;	// Data::Bind::Components::IBindListRecordVirtualEditor 
	void *__IBindListVirtualEditor;	// Data::Bind::Components::IBindListVirtualEditor 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {E4E25A70-9D29-4B46-BB7B-E3A07DC676B0}
	operator Data::Bind::Components::_di_IBindListVirtualEditorScope()
	{
		Data::Bind::Components::_di_IBindListVirtualEditorScope intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Data::Bind::Components::IBindListVirtualEditorScope*(void) { return (Data::Bind::Components::IBindListVirtualEditorScope*)&__IBindListVirtualEditorScope; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {FDE1D9BA-4277-4549-945F-ABFC5E61A56D}
	operator Data::Bind::Components::_di_IBindGridEditor()
	{
		Data::Bind::Components::_di_IBindGridEditor intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Data::Bind::Components::IBindGridEditor*(void) { return (Data::Bind::Components::IBindGridEditor*)&__IBindGridEditor; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3DE056BC-0DC9-40B0-AB32-2B4FE7AFDCF5}
	operator Data::Bind::Components::_di_IBindListRecordVirtualEditor()
	{
		Data::Bind::Components::_di_IBindListRecordVirtualEditor intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Data::Bind::Components::IBindListRecordVirtualEditor*(void) { return (Data::Bind::Components::IBindListRecordVirtualEditor*)&__IBindListRecordVirtualEditor; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {826B10CB-AD17-4D60-830C-7912B6ED6712}
	operator Data::Bind::Components::_di_IBindListVirtualEditor()
	{
		Data::Bind::Components::_di_IBindListVirtualEditor intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Data::Bind::Components::IBindListVirtualEditor*(void) { return (Data::Bind::Components::IBindListVirtualEditor*)&__IBindListVirtualEditor; }
	#endif
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TBindListControlEditorFactory : public Data::Bind::Components::TBindEditorFactory
{
	typedef Data::Bind::Components::TBindEditorFactory inherited;
	
public:
	virtual bool __fastcall Supports(const GUID &AIntf, System::TObject* AObject);
	virtual System::_di_IInterface __fastcall CreateEditor(const GUID &AIntf, System::TObject* AObject);
	virtual bool __fastcall ReleaseEditor(const System::_di_IInterface AEditor);
public:
	/* TBindEditorFactory.Create */ inline __fastcall virtual TBindListControlEditorFactory() : Data::Bind::Components::TBindEditorFactory() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TBindListControlEditorFactory() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TLinkControlListToDataSourceControlManager : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	Vcl::Controllist::TControlList* FControlList;
	
protected:
	int __fastcall GetDefaultColumnWidth();
	void __fastcall SetDefaultColumnWidth(int AWidth);
	void __fastcall BeginUpdate();
	void __fastcall EndUpdate();
	void __fastcall ClearColumns();
	bool __fastcall CanAddColumn(Data::Bind::Grid::TBaseLinkGridToDataSourceColumn* AColumn)/* overload */;
	bool __fastcall CanAddColumn(Data::Bind::Components::TBaseLinkingBindSource* ADataSource, const System::UnicodeString AMemberName)/* overload */;
	int __fastcall AddColumn(Data::Bind::Grid::TBaseLinkGridToDataSourceColumn* AColumn)/* overload */;
	int __fastcall AddColumn(Data::Bind::Components::TBaseLinkingBindSource* ADataSource, const System::UnicodeString AMemberName)/* overload */;
	void __fastcall UpdateColumn(int AIndex, Data::Bind::Grid::TBaseLinkGridToDataSourceColumn* AColumn)/* overload */;
	void __fastcall UpdateColumn(int AIndex, Data::Bind::Components::TBaseLinkingBindSource* ADataSource, const System::UnicodeString AMemberName)/* overload */;
	Data::Bind::Grid::TLinkGridColumnDescription* __fastcall DescribeColumn(int AIndex, Data::Bind::Grid::TBaseLinkGridToDataSourceColumn* AColumn)/* overload */;
	Data::Bind::Grid::TLinkGridColumnDescription* __fastcall DescribeColumn(int AIndex, Data::Bind::Components::TBaseLinkingBindSource* ADataSource, const System::UnicodeString AMemberName)/* overload */;
	
public:
	__fastcall TLinkControlListToDataSourceControlManager(Vcl::Controllist::TControlList* AControlList);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TLinkControlListToDataSourceControlManager() { }
	
private:
	void *__ILinkGridToDataSourceControlManager;	// Data::Bind::Grid::ILinkGridToDataSourceControlManager 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {F631C178-78F7-4164-A532-6F335760A26A}
	operator Data::Bind::Grid::_di_ILinkGridToDataSourceControlManager()
	{
		Data::Bind::Grid::_di_ILinkGridToDataSourceControlManager intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Data::Bind::Grid::ILinkGridToDataSourceControlManager*(void) { return (Data::Bind::Grid::ILinkGridToDataSourceControlManager*)&__ILinkGridToDataSourceControlManager; }
	#endif
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TLinkControlListToDataSourceColumnFactory : public Data::Bind::Grid::TLinkGridToDataSourceColumnFactory
{
	typedef Data::Bind::Grid::TLinkGridToDataSourceColumnFactory inherited;
	
public:
#ifndef _WIN64
	virtual System::DynamicArray<System::UnicodeString> __fastcall UsesUnits();
#else /* _WIN64 */
	virtual System::TArray__1<System::UnicodeString> __fastcall UsesUnits();
#endif /* _WIN64 */
	virtual System::UnicodeString __fastcall FrameworkExt();
#ifndef _WIN64
	virtual System::DynamicArray<System::Classes::TComponentClass> __fastcall GridClasses();
#else /* _WIN64 */
	virtual System::TArray__1<System::Classes::TComponentClass> __fastcall GridClasses();
#endif /* _WIN64 */
	virtual bool __fastcall Supports(const GUID &AIntf, System::Classes::TComponent* AGrid);
	virtual System::_di_IInterface __fastcall CreateFactory(const GUID &AIntf, System::Classes::TComponent* AGrid);
public:
	/* TLinkGridToDataSourceColumnFactory.Create */ inline __fastcall virtual TLinkControlListToDataSourceColumnFactory() : Data::Bind::Grid::TLinkGridToDataSourceColumnFactory() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TLinkControlListToDataSourceColumnFactory() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Controllist */
}	/* namespace Bind */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_BIND_CONTROLLIST)
using namespace Vcl::Bind::Controllist;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_BIND)
using namespace Vcl::Bind;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_Bind_ControllistHPP
