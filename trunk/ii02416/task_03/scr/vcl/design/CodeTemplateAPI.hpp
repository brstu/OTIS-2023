// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'CodeTemplateAPI.pas' rev: 35.00 (Windows)

#ifndef CodetemplateapiHPP
#define CodetemplateapiHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <ToolsAPI.hpp>
#include <System.Classes.hpp>

//-- user supplied -----------------------------------------------------------
DEFINE_GUID(IID_IOTACodeTemplateScript,0xA9385BEA,0x6CE9,0x457D,0xB3,0x6E,0x59,0x14,0xE3,0x4E,0x91,0x8F);
DEFINE_GUID(IID_IOTACodeTemplatePoint100,0xF94D1BBD,0x7ABD,0x4EA5,0x8B,0x4C,0xEB,0x30,0x2B,0x59,0x4D,0x98);
DEFINE_GUID(IID_IOTACodeTemplatePoint,0xB05C9A29,0x3A82,0x437F,0x9F,0x3B,0x2C,0x1E,0xE7,0x7F,0x4B,0x12);
DEFINE_GUID(IID_IOTATemplateCodeReference,0x4949AB6F,0x2659,0x44A4,0x89,0xD7,0x66,0x92,0x06,0x9E,0x2F,0xC2);
DEFINE_GUID(IID_IOTACodeTemplateObject,0xFB3B4C8C,0x5757,0x4E5A,0x90,0x91,0x54,0xFF,0x98,0x6D,0x6D,0x8D);
DEFINE_GUID(IID_IOTACodeTemplate,0xED1EBB0B,0xDDD8,0x4157,0xBB,0xFE,0xDD,0xAC,0x10,0x7B,0xD6,0x19);
DEFINE_GUID(IID_IOTATemplateReader,0x31F52EEB,0x290E,0x46D5,0x94,0x96,0x49,0xF2,0x16,0x38,0x0B,0xB0);
DEFINE_GUID(IID_IOTATemplateWriter,0x3EBA335E,0x61AB,0x4A75,0xBF,0x60,0xB8,0xFE,0x55,0x2B,0xD4,0xEB);
DEFINE_GUID(IID_IOTATemplateFactory,0xA1F52E3E,0xFD9F,0x4BC4,0xBE,0x80,0x28,0x48,0x89,0xF9,0x42,0x75);
DEFINE_GUID(IID_IOTATemplateReaderFactory,0x6EF4BEBB,0x32DB,0x4074,0x9B,0xA9,0x05,0x0E,0x4C,0xA0,0x93,0x9A);
DEFINE_GUID(IID_IOTATemplateWriterFactory,0x6EF4BEBB,0x32DB,0x4074,0x9B,0xA9,0x05,0x0E,0x4C,0xA0,0x93,0x9A);
DEFINE_GUID(IID_IOTACodeTemplateScriptEngine,0x49A9DED0,0x9B1B,0x425B,0x97,0x52,0x06,0xE8,0x5E,0xD9,0xAE,0x78);
DEFINE_GUID(IID_IOTATemplateArgs,0x94A1859F,0x79E7,0x4FBF,0xA2,0x86,0x13,0x15,0x20,0x9F,0x89,0x0C);
DEFINE_GUID(IID_IOTATemplateChangeNotifier,0x7F316770,0x186E,0x41E5,0x9C,0x91,0x87,0xD7,0x80,0x1B,0x2D,0x40);
DEFINE_GUID(IID_IOTACodeTemplateServices100,0xAF5A5EDA,0xDF66,0x4E07,0x8C,0xAF,0x19,0xBB,0xDC,0xF9,0x2D,0x82);
DEFINE_GUID(IID_IOTACodeTemplateServices,0x92E1F6C0,0x1273,0x4412,0x97,0x28,0xC8,0x3C,0xA9,0x4A,0xC9,0xD0);

namespace Codetemplateapi
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IOTACodeTemplateScript;
typedef System::DelphiInterface<IOTACodeTemplateScript> _di_IOTACodeTemplateScript;
__interface DELPHIINTERFACE IOTACodeTemplatePoint100;
typedef System::DelphiInterface<IOTACodeTemplatePoint100> _di_IOTACodeTemplatePoint100;
__interface DELPHIINTERFACE IOTACodeTemplatePoint;
typedef System::DelphiInterface<IOTACodeTemplatePoint> _di_IOTACodeTemplatePoint;
__interface DELPHIINTERFACE IOTATemplateCodeReference;
typedef System::DelphiInterface<IOTATemplateCodeReference> _di_IOTATemplateCodeReference;
__interface DELPHIINTERFACE IOTACodeTemplateObject;
typedef System::DelphiInterface<IOTACodeTemplateObject> _di_IOTACodeTemplateObject;
__interface DELPHIINTERFACE IOTACodeTemplate;
typedef System::DelphiInterface<IOTACodeTemplate> _di_IOTACodeTemplate;
__interface DELPHIINTERFACE IOTATemplateReader;
typedef System::DelphiInterface<IOTATemplateReader> _di_IOTATemplateReader;
__interface DELPHIINTERFACE IOTATemplateWriter;
typedef System::DelphiInterface<IOTATemplateWriter> _di_IOTATemplateWriter;
__interface DELPHIINTERFACE IOTATemplateFactory;
typedef System::DelphiInterface<IOTATemplateFactory> _di_IOTATemplateFactory;
__interface DELPHIINTERFACE IOTATemplateReaderFactory;
typedef System::DelphiInterface<IOTATemplateReaderFactory> _di_IOTATemplateReaderFactory;
__interface DELPHIINTERFACE IOTATemplateWriterFactory;
typedef System::DelphiInterface<IOTATemplateWriterFactory> _di_IOTATemplateWriterFactory;
__interface DELPHIINTERFACE IOTACodeTemplateScriptEngine;
typedef System::DelphiInterface<IOTACodeTemplateScriptEngine> _di_IOTACodeTemplateScriptEngine;
__interface DELPHIINTERFACE IOTATemplateArgs;
typedef System::DelphiInterface<IOTATemplateArgs> _di_IOTATemplateArgs;
__interface DELPHIINTERFACE IOTATemplateChangeNotifier;
typedef System::DelphiInterface<IOTATemplateChangeNotifier> _di_IOTATemplateChangeNotifier;
__interface DELPHIINTERFACE IOTACodeTemplateServices100;
typedef System::DelphiInterface<IOTACodeTemplateServices100> _di_IOTACodeTemplateServices100;
__interface DELPHIINTERFACE IOTACodeTemplateServices;
typedef System::DelphiInterface<IOTACodeTemplateServices> _di_IOTACodeTemplateServices;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TOTATemplateInvokeKind : unsigned char { ikNone, ikManual, ikAuto };

enum DECLSPEC_DENUM TOTATemplateKind : unsigned char { skNone, skMethodBody, skMethodDecl, skMemberDecl, skDecl, skTypeDecl, skComment, skStringLiteral, skPage, skFile, skAny, skAnyNoMemberRef, skMemberRef };

enum DECLSPEC_DENUM TOTATemplateTypes : unsigned char { stRefactoring, stSurroundsWith, stExpansion };

typedef System::Set<TOTATemplateTypes, TOTATemplateTypes::stRefactoring, TOTATemplateTypes::stExpansion> TOTATemplateType;

enum DECLSPEC_DENUM TOTATemplateScriptExecutions : unsigned char { sseOnValidate, sseOnEnter, sseOnLeave, sseOnExit };

typedef System::Set<TOTATemplateScriptExecutions, TOTATemplateScriptExecutions::sseOnValidate, TOTATemplateScriptExecutions::sseOnExit> TOTATemplateScriptExecution;

__interface  INTERFACE_UUID("{A9385BEA-6CE9-457D-B36E-5914E34E918F}") IOTACodeTemplateScript  : public System::IInterface 
{
	virtual void __fastcall SetScriptLanguage(const System::WideString Value) = 0 ;
	virtual System::WideString __fastcall GetScriptLanguage() = 0 ;
	virtual TOTATemplateScriptExecution __fastcall GetExecution() = 0 ;
	virtual void __fastcall SetExecution(TOTATemplateScriptExecution Value) = 0 ;
	virtual System::WideString __fastcall GetScript() = 0 ;
	virtual void __fastcall SetScript(const System::WideString Value) = 0 ;
	__property TOTATemplateScriptExecution Execution = {read=GetExecution, write=SetExecution};
	__property System::WideString Script = {read=GetScript, write=SetScript};
	__property System::WideString ScriptLanguage = {read=GetScriptLanguage, write=SetScriptLanguage};
};

__interface  INTERFACE_UUID("{F94D1BBD-7ABD-4EA5-8B4C-EB302B594D98}") IOTACodeTemplatePoint100  : public System::IInterface 
{
	virtual bool __fastcall GetEditable() = 0 ;
	virtual void __fastcall SetEditable(bool Value) = 0 ;
	virtual System::WideString __fastcall GetValue() = 0 ;
	virtual void __fastcall SetValue(const System::WideString Value) = 0 ;
	virtual System::WideString __fastcall GetID() = 0 ;
	virtual void __fastcall SetID(const System::WideString Value) = 0 ;
	virtual System::WideString __fastcall GetToolTip() = 0 ;
	virtual void __fastcall SetToolTip(const System::WideString Value) = 0 ;
	virtual void __fastcall SetIsDefault(bool Value) = 0 ;
	virtual bool __fastcall GetIsDefault() = 0 ;
	virtual _di_IOTACodeTemplateScript __fastcall GetScripts(int Index) = 0 ;
	virtual void __fastcall AddScript(const _di_IOTACodeTemplateScript Script) = 0 ;
	virtual int __fastcall GetScriptCount() = 0 ;
	__property int ScriptCount = {read=GetScriptCount};
	__property _di_IOTACodeTemplateScript Scripts[int Index] = {read=GetScripts};
	__property bool Editable = {read=GetEditable, write=SetEditable};
	__property System::WideString Value = {read=GetValue, write=SetValue};
	__property bool IsDefault = {read=GetIsDefault, write=SetIsDefault};
	__property System::WideString ID = {read=GetID, write=SetID};
	__property System::WideString ToolTip = {read=GetToolTip, write=SetToolTip};
};

__interface  INTERFACE_UUID("{B05C9A29-3A82-437F-9F3B-2C1EE77F4B12}") IOTACodeTemplatePoint  : public IOTACodeTemplatePoint100 
{
	virtual bool __fastcall GetMultiLine() = 0 ;
	virtual void __fastcall SetMultiLine(bool Value) = 0 ;
	__property bool MultiLine = {read=GetMultiLine, write=SetMultiLine};
};

__interface  INTERFACE_UUID("{4949AB6F-2659-44A4-89D7-6692069E2FC2}") IOTATemplateCodeReference  : public System::IInterface 
{
	virtual System::WideString __fastcall GetReference() = 0 ;
	virtual void __fastcall SetReference(const System::WideString Value) = 0 ;
	virtual System::WideString __fastcall GetUrl() = 0 ;
	virtual void __fastcall SetUrl(const System::WideString Value) = 0 ;
	__property System::WideString Reference = {read=GetReference, write=SetReference};
	__property System::WideString Url = {read=GetUrl, write=SetUrl};
};

__interface  INTERFACE_UUID("{FB3B4C8C-5757-4E5A-9091-54FF986D6D8D}") IOTACodeTemplateObject  : public IOTACodeTemplatePoint 
{
	virtual System::WideString __fastcall GetType() = 0 ;
	virtual void __fastcall SetType(const System::WideString Value) = 0 ;
	__property System::WideString _Type = {read=GetType, write=SetType};
};

__interface  INTERFACE_UUID("{ED1EBB0B-DDD8-4157-BBFE-DDAC107BD619}") IOTACodeTemplate  : public System::IInterface 
{
	virtual void __fastcall Clear() = 0 ;
	virtual System::WideString __fastcall GetDelimiter() = 0 ;
	virtual void __fastcall SetDelimiter(const System::WideString Value) = 0 ;
	virtual TOTATemplateKind __fastcall GetKind() = 0 ;
	virtual void __fastcall SetKind(TOTATemplateKind Value) = 0 ;
	virtual System::WideString __fastcall GetLanguage() = 0 ;
	virtual void __fastcall SetLanguage(const System::WideString Value) = 0 ;
	virtual System::WideString __fastcall GetEditorOpts() = 0 ;
	virtual void __fastcall SetEditorOpts(const System::WideString Value) = 0 ;
	virtual System::WideString __fastcall GetCode() = 0 ;
	virtual void __fastcall SetCode(const System::WideString Value) = 0 ;
	virtual System::WideString __fastcall GetDescription() = 0 ;
	virtual void __fastcall SetDescription(const System::WideString Value) = 0 ;
	virtual int __fastcall GetReferencesCount() = 0 ;
	virtual System::WideString __fastcall GetImportedNamespaces(int I) = 0 ;
	virtual void __fastcall SetImportedNamespaces(int I, const System::WideString Value) = 0 ;
	virtual _di_IOTATemplateCodeReference __fastcall GetReferences(int I) = 0 ;
	virtual void __fastcall SetReferences(int I, const _di_IOTATemplateCodeReference Value) = 0 ;
	virtual System::WideString __fastcall GetAuthor() = 0 ;
	virtual void __fastcall SetAuthor(const System::WideString Value) = 0 ;
	virtual _di_IOTACodeTemplatePoint __fastcall FindPoint(const System::WideString AName) = 0 ;
	virtual _di_IOTACodeTemplatePoint __fastcall GetPoints(int I) = 0 ;
	virtual System::WideString __fastcall GetKeywords(int I) = 0 ;
	virtual void __fastcall SetKeywords(int I, const System::WideString Value) = 0 ;
	virtual System::WideString __fastcall GetShortcut() = 0 ;
	virtual void __fastcall SetShortcut(const System::WideString Value) = 0 ;
	virtual TOTATemplateType __fastcall GetTemplateType() = 0 ;
	virtual void __fastcall SetTemplateType(TOTATemplateType Value) = 0 ;
	virtual bool __fastcall GetIsDirty() = 0 ;
	virtual void __fastcall SetIsDirty(bool Value) = 0 ;
	virtual void __fastcall SetFileName(const System::WideString Value) = 0 ;
	virtual System::WideString __fastcall GetFileName() = 0 ;
	virtual System::WideString __fastcall GetHelpUrl() = 0 ;
	virtual System::WideString __fastcall GetTitle() = 0 ;
	virtual int __fastcall GetNamespaceCount() = 0 ;
	virtual int __fastcall GetPointsCount() = 0 ;
	virtual int __fastcall GetKeywordsCount() = 0 ;
	virtual System::WideString __fastcall GetTemplateFormat() = 0 ;
	virtual void __fastcall SetTemplateFormat(const System::WideString Value) = 0 ;
	virtual void __fastcall SetTitle(const System::WideString Value) = 0 ;
	virtual void __fastcall SetUrl(const System::WideString Value) = 0 ;
	virtual void __fastcall AddNamespace(const System::WideString Value) = 0 ;
	virtual void __fastcall AddReference(const _di_IOTATemplateCodeReference Value) = 0 ;
	virtual void __fastcall AddPoint(const _di_IOTACodeTemplatePoint Value) = 0 ;
	virtual void __fastcall AddKeyword(const System::WideString Value) = 0 ;
	virtual void __fastcall AddScript(const _di_IOTACodeTemplateScript Value) = 0 ;
	virtual int __fastcall GetScriptCount() = 0 ;
	virtual _di_IOTACodeTemplateScript __fastcall GetScript(int I) = 0 ;
	virtual void __fastcall SetInvokeKind(TOTATemplateInvokeKind Value) = 0 ;
	virtual TOTATemplateInvokeKind __fastcall GetInvokeKind() = 0 ;
	__property int ScriptCount = {read=GetScriptCount};
	__property _di_IOTACodeTemplateScript Script[int I] = {read=GetScript};
	__property System::WideString Format = {read=GetTemplateFormat, write=SetTemplateFormat};
	__property System::WideString Title = {read=GetTitle, write=SetTitle};
	__property System::WideString HelpUrl = {read=GetHelpUrl, write=SetUrl};
	__property System::WideString Delimiter = {read=GetDelimiter, write=SetDelimiter};
	__property TOTATemplateKind Kind = {read=GetKind, write=SetKind};
	__property System::WideString Language = {read=GetLanguage, write=SetLanguage};
	__property System::WideString EditorOpts = {read=GetEditorOpts, write=SetEditorOpts};
	__property System::WideString Code = {read=GetCode, write=SetCode};
	__property System::WideString Description = {read=GetDescription, write=SetDescription};
	__property int ReferencesCount = {read=GetReferencesCount};
	__property int NamespaceCount = {read=GetNamespaceCount};
	__property System::WideString ImportedNamespaces[int I] = {read=GetImportedNamespaces, write=SetImportedNamespaces};
	__property _di_IOTATemplateCodeReference References[int I] = {read=GetReferences, write=SetReferences};
	__property System::WideString Author = {read=GetAuthor, write=SetAuthor};
	__property int PointsCount = {read=GetPointsCount};
	__property _di_IOTACodeTemplatePoint Points[int I] = {read=GetPoints};
	__property int KeywordsCount = {read=GetKeywordsCount};
	__property System::WideString Keywords[int I] = {read=GetKeywords, write=SetKeywords};
	__property System::WideString Shortcut = {read=GetShortcut, write=SetShortcut};
	__property TOTATemplateType TemplateType = {read=GetTemplateType, write=SetTemplateType};
	__property bool IsDirty = {read=GetIsDirty, write=SetIsDirty};
	__property TOTATemplateInvokeKind InvokeKind = {read=GetInvokeKind, write=SetInvokeKind};
	__property System::WideString FileName = {read=GetFileName, write=SetFileName};
};

__interface  INTERFACE_UUID("{31F52EEB-290E-46D5-9496-49F216380BB0}") IOTATemplateReader  : public System::IInterface 
{
	virtual _di_IOTACodeTemplate __fastcall GetTemplate() = 0 ;
	virtual void __fastcall SetTemplate(const _di_IOTACodeTemplate Value) = 0 ;
	virtual void __fastcall Load(const System::WideString AFileName, const _di_IOTACodeTemplate ATemplate) = 0 ;
	__property _di_IOTACodeTemplate Template = {read=GetTemplate, write=SetTemplate};
};

__interface  INTERFACE_UUID("{3EBA335E-61AB-4A75-BF60-B8FE552BD4EB}") IOTATemplateWriter  : public System::IInterface 
{
	virtual _di_IOTACodeTemplate __fastcall GetTemplate() = 0 ;
	virtual void __fastcall SetTemplate(const _di_IOTACodeTemplate Value) = 0 ;
	virtual void __fastcall Save(const _di_IOTACodeTemplate ATemplate) = 0 ;
	__property _di_IOTACodeTemplate Template = {read=GetTemplate, write=SetTemplate};
};

__interface  INTERFACE_UUID("{A1F52E3E-FD9F-4BC4-BE80-284889F94275}") IOTATemplateFactory  : public System::IInterface 
{
	
};

__interface  INTERFACE_UUID("{6EF4BEBB-32DB-4074-9BA9-050E4CA0939A}") IOTATemplateReaderFactory  : public IOTATemplateFactory 
{
	virtual _di_IOTATemplateReader __fastcall CreateReader() = 0 ;
	virtual bool __fastcall HandlesFile(const System::WideString AFileName) = 0 ;
};

__interface  INTERFACE_UUID("{6EF4BEBB-32DB-4074-9BA9-050E4CA0939A}") IOTATemplateWriterFactory  : public IOTATemplateFactory 
{
	virtual _di_IOTATemplateWriter __fastcall CreateWriter() = 0 ;
};

__interface  INTERFACE_UUID("{49A9DED0-9B1B-425B-9752-06E85ED9AE78}") IOTACodeTemplateScriptEngine  : public System::IInterface 
{
	virtual System::WideString __fastcall GetIDString() = 0 ;
	virtual System::WideString __fastcall GetLanguage() = 0 ;
	virtual void __fastcall Execute(const _di_IOTACodeTemplate ATemplate, const _di_IOTACodeTemplatePoint APoint, const Toolsapi::_di_IOTASyncEditPoints ASyncPoints, const _di_IOTACodeTemplateScript AScript, bool &Cancel) = 0 ;
	__property System::WideString Language = {read=GetLanguage};
};

__interface  INTERFACE_UUID("{94A1859F-79E7-4FBF-A286-1315209F890C}") IOTATemplateArgs  : public System::IInterface 
{
	
public:
	System::WideString operator[](System::WideString Name) { return this->Value[Name]; }
	virtual void __fastcall SetValue(System::WideString Name, System::WideString AValue) = 0 ;
	virtual System::WideString __fastcall GetValue(System::WideString Name) = 0 ;
	__property System::WideString Value[System::WideString Name] = {read=GetValue, write=SetValue/*, default*/};
};

typedef System::DynamicArray<int> TTemplateIndexArray;

enum DECLSPEC_DENUM TOTATemplateNotificationType : unsigned char { ntAdded, ntRemoved, ntModified };

__interface  INTERFACE_UUID("{7F316770-186E-41E5-9C91-87D7801B2D40}") IOTATemplateChangeNotifier  : public System::IInterface 
{
	virtual void __fastcall ChangeNotification(TOTATemplateNotificationType AType, const _di_IOTACodeTemplate ATemplate) = 0 ;
};

__interface  INTERFACE_UUID("{AF5A5EDA-DF66-4E07-8CAF-19BBDCF92D82}") IOTACodeTemplateServices100  : public System::IInterface 
{
	
public:
	_di_IOTACodeTemplate operator[](int I) { return this->CodeObjects[I]; }
	virtual int __fastcall GetCodeObjectCount() = 0 ;
	virtual _di_IOTACodeTemplate __fastcall GetCodeObjects(int I) = 0 ;
	virtual System::Sysutils::TSysCharSet __fastcall GetTemplateCharSet(System::UnicodeString EdOpts) = 0 ;
	virtual void __fastcall RegisterExtension(System::WideString AExt, System::WideString AFormat) = 0 ;
	virtual void __fastcall RegisterReader(_di_IOTATemplateReaderFactory AReader, System::WideString AFormat) = 0 ;
	virtual void __fastcall RegisterWriter(_di_IOTATemplateWriterFactory AWriter, System::WideString AFormat) = 0 ;
	virtual int __fastcall AddNotifier(const _di_IOTATemplateChangeNotifier ANotifier) = 0 ;
	virtual void __fastcall RemoveNotifier(int AIndex) = 0 ;
	virtual void __fastcall RegisterScriptEngine(const _di_IOTACodeTemplateScriptEngine AEngine) = 0 ;
	virtual _di_IOTACodeTemplateScriptEngine __fastcall FindEngine(const System::WideString ALanguage) = 0 ;
	virtual bool __fastcall ValidTemplates(System::UnicodeString EdOpts) = 0 ;
	virtual void __fastcall ValidateTemplates() = 0 ;
	virtual bool __fastcall InsertCodeByShortcut(const System::WideString AShortcut, const System::WideString AEditorOpts, const Toolsapi::_di_IOTAEditView AEditor, bool Remove, const _di_IOTATemplateArgs Args = _di_IOTATemplateArgs()) = 0 ;
	virtual bool __fastcall InsertCode(int Index, const Toolsapi::_di_IOTAEditView AEditor, bool Remove, _di_IOTATemplateArgs Args = _di_IOTATemplateArgs()) = 0 ;
	virtual bool __fastcall AutoComplete(const Toolsapi::_di_IOTAEditView View, System::WideChar Key) = 0 ;
	virtual void __fastcall LoadTemplates(const System::WideString Dir) = 0 ;
	virtual void __fastcall RemoveTemplate(const _di_IOTACodeTemplate Template) = 0 ;
	virtual int __fastcall FindByID(const System::WideString AShortcut, const System::WideString AEditorOpts) = 0 ;
	virtual void __fastcall ReloadTemplate(const _di_IOTACodeTemplate Template) = 0 ;
	virtual void __fastcall SaveTemplate(const _di_IOTACodeTemplate Template) = 0 ;
	virtual void __fastcall MatchTemplates(const System::WideString Token, System::UnicodeString EdOpts, /* out */ TTemplateIndexArray &Indecies) = 0 ;
	virtual void __fastcall ReloadTemplates() = 0 ;
	virtual void __fastcall SaveTemplates() = 0 ;
	virtual void __fastcall RegisterLanguage(const System::WideString ALang, System::WideString AOptionID) = 0 ;
	virtual void __fastcall UnregisterLanguage(const System::WideString ALang) = 0 ;
	virtual System::WideString __fastcall LanguageToOptionID(const System::WideString ALang) = 0 ;
	virtual System::WideChar __fastcall GetAutoCompleteKey() = 0 ;
	virtual void __fastcall SetAutoCompleteKey(System::WideChar Value) = 0 ;
	virtual System::WideChar __fastcall GetManualCompleteKey() = 0 ;
	virtual void __fastcall SetManualCompleteKey(System::WideChar Value) = 0 ;
	__property System::WideChar AutoCompleteKey = {read=GetAutoCompleteKey, write=SetAutoCompleteKey};
	__property System::WideChar ManualCompleteKey = {read=GetManualCompleteKey, write=SetManualCompleteKey};
	__property int CodeObjectCount = {read=GetCodeObjectCount};
	__property _di_IOTACodeTemplate CodeObjects[int I] = {read=GetCodeObjects/*, default*/};
};

__interface  INTERFACE_UUID("{92E1F6C0-1273-4412-9728-C83CA94AC9D0}") IOTACodeTemplateServices  : public IOTACodeTemplateServices100 
{
	virtual System::_di_IInterface __fastcall CreateClass(const GUID &GUID) = 0 ;
};

//-- var, const, procedure ---------------------------------------------------
static const System::WideChar sDefaultDelimiter = (System::WideChar)(0x24);
#define sTemplateLanguageCSharp L"CSharp"
#define sTemplateLanguageVB L"VB"
#define sTemplateLanguageJsharp L"Jsharp"
#define sTemplateLanguageHTML L"HTML"
#define sTemplateLanguageXML L"XML"
#define sTemplateLanguageDelphi L"Delphi"
static const System::WideChar sTemplateLanguageC = (System::WideChar)(0x43);
#define sTemplateLanguageIDE L"IDE"
#define sTemplateLanguageSQL L"SQL"
#define sTemplateLanguageIDL L"IDL"
#define sTemplateLanguageJavaScript L"JavaScript"
#define sTemplateLanguageCSS L"CSS"
#define sTemplateLanguageINI L"INI"
#define sTemplateLanguagePHP L"PHP"
}	/* namespace Codetemplateapi */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_CODETEMPLATEAPI)
using namespace Codetemplateapi;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// CodetemplateapiHPP
