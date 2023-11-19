// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'EditIntf.pas' rev: 35.00 (Windows)

#ifndef EditintfHPP
#define EditintfHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#if !defined(_NO_DEPRECATED_UNIT_MSG)
#pragma message("Unit 'EditIntf' is deprecated")
#endif
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <VirtIntf.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Editintf
{
//-- forward type declarations -----------------------------------------------
struct TEditPos;
struct TCharPos;
class DELPHICLASS TIEditReader;
class DELPHICLASS TIEditWriter;
class DELPHICLASS TIEditView;
class DELPHICLASS TIEditorInterface;
class DELPHICLASS TIComponentInterface;
class DELPHICLASS TIFormInterface;
class DELPHICLASS TIResourceEntry;
class DELPHICLASS TIResourceFile;
class DELPHICLASS TIModuleNotifier;
class DELPHICLASS TIModuleInterface;
class DELPHICLASS TIProjectCreator;
class DELPHICLASS TIProjectCreatorEx;
class DELPHICLASS TIModuleCreator;
class DELPHICLASS TIModuleCreatorEx;
//-- type declarations -------------------------------------------------------
#pragma pack(push,1)
struct DECLSPEC_DRECORD TEditPos
{
public:
	short Col;
	int Line;
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TCharPos
{
public:
	short CharIndex;
	int Line;
};
#pragma pack(pop)


#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEditReader : public Virtintf::TInterface
{
	typedef Virtintf::TInterface inherited;
	
public:
	virtual int __stdcall GetText(int Position, System::WideChar * Buffer, int Count) = 0 ;
public:
	/* TInterface.Create */ inline __fastcall TIEditReader() : Virtintf::TInterface() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TIEditReader() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEditWriter : public Virtintf::TInterface
{
	typedef Virtintf::TInterface inherited;
	
public:
	virtual bool __stdcall CopyTo(int Pos) = 0 ;
	virtual bool __stdcall DeleteTo(int Pos) = 0 ;
	virtual bool __stdcall Insert(System::WideChar * Text) = 0 ;
	virtual int __stdcall Position() = 0 ;
	virtual TCharPos __stdcall GetCurrentPos() = 0 ;
	__property TCharPos CurrentPos = {read=GetCurrentPos};
public:
	/* TInterface.Create */ inline __fastcall TIEditWriter() : Virtintf::TInterface() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TIEditWriter() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEditView : public Virtintf::TInterface
{
	typedef Virtintf::TInterface inherited;
	
public:
	virtual TEditPos __stdcall GetPos(int Index) = 0 ;
	virtual void __stdcall SetPos(int Index, TEditPos Value) = 0 ;
	virtual System::Types::TSize __stdcall GetViewSize() = 0 ;
	virtual TCharPos __stdcall PosToCharPos(int Pos) = 0 ;
	virtual int __stdcall CharPosToPos(TCharPos CharPos) = 0 ;
	virtual void __stdcall ConvertPos(bool EdPosToCharPos, TEditPos &EditPos, TCharPos &CharPos) = 0 ;
	virtual void __stdcall GetAttributeAtPos(const TEditPos &EdPos, int &Element, int &LineFlag) = 0 ;
	__property TEditPos CursorPos = {read=GetPos, write=SetPos, index=0};
	__property TEditPos TopPos = {read=GetPos, write=SetPos, index=1};
	__property System::Types::TSize ViewSize = {read=GetViewSize};
public:
	/* TInterface.Create */ inline __fastcall TIEditView() : Virtintf::TInterface() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TIEditView() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TSyntaxHighlighter : unsigned char { shNone, shPascal, shC, shSQL, shQuery };

enum DECLSPEC_DENUM TBlockType : unsigned char { btInclusive, btLine, btColumn, btNonInclusive, btUnknown };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIEditorInterface : public Virtintf::TInterface
{
	typedef Virtintf::TInterface inherited;
	
public:
	virtual TIEditReader* __stdcall CreateReader() = 0 ;
	virtual TIEditWriter* __stdcall CreateWriter() = 0 ;
	virtual System::UnicodeString __stdcall FileName() = 0 ;
	virtual int __stdcall LinesInBuffer() = 0 ;
	virtual bool __stdcall BufferModified() = 0 ;
	virtual bool __stdcall MarkModified() = 0 ;
	virtual TSyntaxHighlighter __stdcall SetSyntaxHighlighter(TSyntaxHighlighter SyntaxHighlighter) = 0 ;
	virtual int __stdcall GetViewCount() = 0 ;
	virtual TIEditView* __stdcall GetView(int Index) = 0 ;
	virtual TIEditWriter* __stdcall CreateUndoableWriter() = 0 ;
	virtual TCharPos __stdcall GetBlockAfter() = 0 ;
	virtual TCharPos __stdcall GetBlockStart() = 0 ;
	virtual TBlockType __stdcall GetBlockType() = 0 ;
	virtual bool __stdcall GetBlockVisible() = 0 ;
	virtual void __stdcall SetBlockAfter(TCharPos Value) = 0 ;
	virtual void __stdcall SetBlockStart(TCharPos Value) = 0 ;
	virtual void __stdcall SetBlockType(TBlockType Value) = 0 ;
	virtual void __stdcall SetBlockVisible(bool Value) = 0 ;
	__property TCharPos BlockStart = {read=GetBlockStart, write=SetBlockStart};
	__property TCharPos BlockAfter = {read=GetBlockAfter, write=SetBlockAfter};
	__property TBlockType BlockType = {read=GetBlockType, write=SetBlockType, nodefault};
	__property bool BlockVisible = {read=GetBlockVisible, write=SetBlockVisible, nodefault};
public:
	/* TInterface.Create */ inline __fastcall TIEditorInterface() : Virtintf::TInterface() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TIEditorInterface() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TPropertyType : unsigned char { ptUnknown, ptInteger, ptChar, ptEnumeration, ptFloat, ptString, ptSet, ptClass, ptMethod, ptWChar, ptLString, ptLWString, ptVariant };

typedef bool __stdcall (*TGetChildCallback)(void * Param, TIComponentInterface* ComponentInterface);

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIComponentInterface : public Virtintf::TInterface
{
	typedef Virtintf::TInterface inherited;
	
public:
	virtual System::UnicodeString __stdcall GetComponentType() = 0 ;
	virtual void * __stdcall GetComponentHandle() = 0 ;
	virtual TIComponentInterface* __stdcall GetParent() = 0 ;
	virtual bool __stdcall IsTControl() = 0 ;
	virtual int __stdcall GetPropCount() = 0 ;
	virtual System::UnicodeString __stdcall GetPropName(int Index) = 0 ;
	virtual TPropertyType __stdcall GetPropType(int Index) = 0 ;
	virtual TPropertyType __stdcall GetPropTypeByName(const System::UnicodeString Name) = 0 ;
	virtual bool __stdcall GetPropValue(int Index, void *Value) = 0 ;
	virtual bool __stdcall GetPropValueByName(const System::UnicodeString Name, void *Value) = 0 ;
	virtual bool __stdcall SetProp(int Index, const void *Value) = 0 ;
	virtual bool __stdcall SetPropByName(const System::UnicodeString Name, const void *Value) = 0 ;
	virtual bool __stdcall GetChildren(void * Param, TGetChildCallback Proc) = 0 ;
	virtual int __stdcall GetControlCount() = 0 ;
	virtual TIComponentInterface* __stdcall GetControl(int Index) = 0 ;
	virtual int __stdcall GetComponentCount() = 0 ;
	virtual TIComponentInterface* __stdcall GetComponent(int Index) = 0 ;
	virtual bool __stdcall Select() = 0 ;
	virtual bool __stdcall Focus() = 0 ;
	virtual bool __stdcall Delete() = 0 ;
public:
	/* TInterface.Create */ inline __fastcall TIComponentInterface() : Virtintf::TInterface() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TIComponentInterface() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIFormInterface : public Virtintf::TInterface
{
	typedef Virtintf::TInterface inherited;
	
public:
	virtual System::UnicodeString __stdcall FileName() = 0 ;
	virtual bool __stdcall FormModified() = 0 ;
	virtual bool __stdcall MarkModified() = 0 ;
	virtual TIComponentInterface* __stdcall GetFormComponent() = 0 ;
	virtual TIComponentInterface* __stdcall FindComponent(const System::UnicodeString Name) = 0 ;
	virtual TIComponentInterface* __stdcall GetComponentFromHandle(void * ComponentHandle) = 0 ;
	virtual int __stdcall GetSelCount() = 0 ;
	virtual TIComponentInterface* __stdcall GetSelComponent(int Index) = 0 ;
	virtual TIComponentInterface* __stdcall GetCreateParent() = 0 ;
	virtual TIComponentInterface* __stdcall CreateComponent(TIComponentInterface* Container, const System::UnicodeString TypeName, int X, int Y, int W, int H) = 0 ;
public:
	/* TInterface.Create */ inline __fastcall TIFormInterface() : Virtintf::TInterface() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TIFormInterface() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TResHeaderValue : unsigned char { hvFlags, hvLanguage, hvDataVersion, hvVersion, hvCharacteristics };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIResourceEntry : public Virtintf::TInterface
{
	typedef Virtintf::TInterface inherited;
	
public:
	virtual System::WideChar * __stdcall GetResourceType() = 0 ;
	virtual System::WideChar * __stdcall GetResourceName() = 0 ;
	virtual bool __stdcall Change(System::WideChar * NewType, System::WideChar * NewName) = 0 ;
	virtual bool __stdcall GetHeaderValue(TResHeaderValue HeaderValue, int &Value) = 0 ;
	virtual bool __stdcall SetHeaderValue(TResHeaderValue HeaderValue, int Value) = 0 ;
	virtual void * __stdcall GetData() = 0 ;
	virtual int __stdcall GetDataSize() = 0 ;
	virtual bool __stdcall SetDataSize(int NewSize) = 0 ;
	virtual void * __stdcall GetEntryHandle() = 0 ;
public:
	/* TInterface.Create */ inline __fastcall TIResourceEntry() : Virtintf::TInterface() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TIResourceEntry() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIResourceFile : public Virtintf::TInterface
{
	typedef Virtintf::TInterface inherited;
	
public:
	virtual System::UnicodeString __stdcall FileName() = 0 ;
	virtual int __stdcall GetEntryCount() = 0 ;
	virtual TIResourceEntry* __stdcall GetEntry(int Index) = 0 ;
	virtual TIResourceEntry* __stdcall GetEntryFromHandle(void * EntryHandle) = 0 ;
	virtual TIResourceEntry* __stdcall FindEntry(System::WideChar * ResType, System::WideChar * Name) = 0 ;
	virtual bool __stdcall DeleteEntry(void * EntryHandle) = 0 ;
	virtual TIResourceEntry* __stdcall CreateEntry(System::WideChar * ResType, System::WideChar * Name, System::Word Flags, System::Word LanguageId, int DataVersion, int Version, int Characteristics) = 0 ;
public:
	/* TInterface.Create */ inline __fastcall TIResourceFile() : Virtintf::TInterface() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TIResourceFile() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TNotifyCode : unsigned char { ncModuleDeleted, ncModuleRenamed, ncEditorModified, ncFormModified, ncEditorSelected, ncFormSelected, ncBeforeSave, ncAfterSave, ncFormSaving, ncProjResModified };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIModuleNotifier : public Virtintf::TInterface
{
	typedef Virtintf::TInterface inherited;
	
public:
	virtual void __stdcall Notify(TNotifyCode NotifyCode) = 0 ;
	virtual void __stdcall ComponentRenamed(System::Classes::TComponent* const AComponent, const System::UnicodeString OldName, const System::UnicodeString NewName) = 0 ;
public:
	/* TInterface.Create */ inline __fastcall TIModuleNotifier() : Virtintf::TInterface() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TIModuleNotifier() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIModuleInterface : public Virtintf::TInterface
{
	typedef Virtintf::TInterface inherited;
	
public:
	virtual TIEditorInterface* __stdcall GetEditorInterface() = 0 ;
	virtual TIFormInterface* __stdcall GetFormInterface() = 0 ;
	virtual TIModuleInterface* __stdcall GetAncestorModule() = 0 ;
	virtual TIResourceFile* __stdcall GetProjectResource() = 0 ;
	virtual bool __stdcall IsProjectModule() = 0 ;
	virtual bool __stdcall Close() = 0 ;
	virtual bool __stdcall Save(bool ForceSave) = 0 ;
	virtual bool __stdcall Rename(const System::UnicodeString NewName) = 0 ;
	virtual bool __stdcall GetFileSystem(System::UnicodeString &FileSystem) = 0 ;
	virtual bool __stdcall SetFileSystem(const System::UnicodeString FileSystem) = 0 ;
	virtual bool __stdcall ShowSource() = 0 ;
	virtual bool __stdcall ShowForm() = 0 ;
	virtual bool __stdcall AddNotifier(TIModuleNotifier* AModuleNotifier) = 0 ;
	virtual bool __stdcall RemoveNotifier(TIModuleNotifier* AModuleNotifier) = 0 ;
	virtual TIEditorInterface* __stdcall GetAuxEditorInterface() = 0 ;
public:
	/* TInterface.Create */ inline __fastcall TIModuleInterface() : Virtintf::TInterface() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TIModuleInterface() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIProjectCreator : public Virtintf::TInterface
{
	typedef Virtintf::TInterface inherited;
	
public:
	virtual bool __stdcall Existing() = 0 ;
	virtual System::UnicodeString __stdcall GetFileName() = 0 ;
	virtual System::UnicodeString __stdcall GetFileSystem() = 0 ;
	virtual System::UnicodeString __stdcall NewProjectSource(const System::UnicodeString ProjectName) = 0 ;
	virtual void __stdcall NewDefaultModule() = 0 ;
	virtual void __stdcall NewProjectResource(TIModuleInterface* Module) = 0 ;
public:
	/* TInterface.Create */ inline __fastcall TIProjectCreator() : Virtintf::TInterface() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TIProjectCreator() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIProjectCreatorEx : public TIProjectCreator
{
	typedef TIProjectCreator inherited;
	
public:
	virtual System::UnicodeString __stdcall GetOptionName() = 0 ;
	virtual System::UnicodeString __stdcall NewOptionSource(const System::UnicodeString ProjectName) = 0 ;
public:
	/* TInterface.Create */ inline __fastcall TIProjectCreatorEx() : TIProjectCreator() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TIProjectCreatorEx() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIModuleCreator : public Virtintf::TInterface
{
	typedef Virtintf::TInterface inherited;
	
public:
	virtual bool __stdcall Existing() = 0 ;
	virtual System::UnicodeString __stdcall GetAncestorName() = 0 ;
	virtual System::UnicodeString __stdcall GetFileName() = 0 ;
	virtual System::UnicodeString __stdcall GetFileSystem() = 0 ;
	virtual System::UnicodeString __stdcall GetFormName() = 0 ;
	virtual System::UnicodeString __stdcall NewModuleSource(const System::UnicodeString UnitIdent, const System::UnicodeString FormIdent, const System::UnicodeString AncestorIdent) = 0 ;
	virtual void __stdcall FormCreated(TIFormInterface* Form) = 0 ;
public:
	/* TInterface.Create */ inline __fastcall TIModuleCreator() : Virtintf::TInterface() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TIModuleCreator() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TIModuleCreatorEx : public TIModuleCreator
{
	typedef TIModuleCreator inherited;
	
public:
	virtual System::UnicodeString __stdcall GetIntfName() = 0 ;
	virtual System::UnicodeString __stdcall NewIntfSource(const System::UnicodeString UnitIdent, const System::UnicodeString FormIdent, const System::UnicodeString AncestorIdent) = 0 ;
public:
	/* TInterface.Create */ inline __fastcall TIModuleCreatorEx() : TIModuleCreator() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TIModuleCreatorEx() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const int cursorPos = int(0);
static const int ViewTopPos = int(1);
static const System::Int8 atWhiteSpace = System::Int8(0x0);
static const System::Int8 atComment = System::Int8(0x1);
static const System::Int8 atReservedWord = System::Int8(0x2);
static const System::Int8 atIdentifier = System::Int8(0x3);
static const System::Int8 atSymbol = System::Int8(0x4);
static const System::Int8 atString = System::Int8(0x5);
static const System::Int8 atNumber = System::Int8(0x6);
static const System::Int8 atFloat = System::Int8(0x7);
static const System::Int8 atOctal = System::Int8(0x8);
static const System::Int8 atHex = System::Int8(0x9);
static const System::Int8 atCharacter = System::Int8(0xa);
static const System::Int8 atPreproc = System::Int8(0xb);
static const System::Int8 atIllegal = System::Int8(0xc);
static const System::Int8 atAssembler = System::Int8(0xd);
static const System::Int8 SyntaxOff = System::Int8(0xe);
static const System::Int8 MarkedBlock = System::Int8(0xf);
static const System::Int8 SearchMatch = System::Int8(0x10);
static const System::Int8 lfCurrentCSIP = System::Int8(0x1);
static const System::Int8 lfBreakpointEnabled = System::Int8(0x2);
static const System::Int8 lfBreakpointDisabled = System::Int8(0x4);
static const System::Int8 lfBreakpointInvalid = System::Int8(0x8);
static const System::Int8 lfErrorLine = System::Int8(0x10);
static const System::Int8 lfBreakpointVerified = System::Int8(0x20);
}	/* namespace Editintf */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_EDITINTF)
using namespace Editintf;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// EditintfHPP
