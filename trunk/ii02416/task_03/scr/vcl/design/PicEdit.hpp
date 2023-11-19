// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'PicEdit.pas' rev: 35.00 (Windows)

#ifndef PiceditHPP
#define PiceditHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.Buttons.hpp>
#include <DesignIntf.hpp>
#include <DesignEditors.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ExtDlgs.hpp>

//-- user supplied -----------------------------------------------------------

namespace Picedit
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TPictureEditorDlg;
class DELPHICLASS TPictureEditor;
class DELPHICLASS TPictureProperty;
class DELPHICLASS TGraphicProperty;
class DELPHICLASS TGraphicEditor;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TPictureEditorDlg : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
__published:
	Vcl::Extdlgs::TOpenPictureDialog* OpenDialog;
	Vcl::Extdlgs::TSavePictureDialog* SaveDialog;
	Vcl::Stdctrls::TButton* OKButton;
	Vcl::Stdctrls::TButton* CancelButton;
	Vcl::Stdctrls::TButton* HelpButton;
	Vcl::Stdctrls::TGroupBox* GroupBox1;
	Vcl::Extctrls::TPanel* ImagePanel;
	Vcl::Stdctrls::TButton* Load;
	Vcl::Stdctrls::TButton* Save;
	Vcl::Stdctrls::TButton* Clear;
	Vcl::Extctrls::TPaintBox* ImagePaintBox;
	Vcl::Extctrls::TShape* Shape1;
	Vcl::Extctrls::TPanel* pnRight;
	Vcl::Extctrls::TPanel* pnBottom;
	void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall FormDestroy(System::TObject* Sender);
	void __fastcall LoadClick(System::TObject* Sender);
	void __fastcall SaveClick(System::TObject* Sender);
	void __fastcall ClearClick(System::TObject* Sender);
	void __fastcall HelpButtonClick(System::TObject* Sender);
	void __fastcall ImagePaintBoxPaint(System::TObject* Sender);
	
private:
	Vcl::Graphics::TPicture* Pic;
public:
	/* TCustomForm.Create */ inline __fastcall virtual TPictureEditorDlg(System::Classes::TComponent* AOwner) : Vcl::Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TPictureEditorDlg(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TPictureEditorDlg() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TPictureEditorDlg(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TPictureEditor : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	Vcl::Graphics::TGraphicClass FGraphicClass;
	Vcl::Graphics::TPicture* FPicture;
	TPictureEditorDlg* FPicDlg;
	void __fastcall SetPicture(Vcl::Graphics::TPicture* Value);
	
public:
	__fastcall virtual TPictureEditor(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TPictureEditor();
	bool __fastcall Execute();
	__property Vcl::Graphics::TGraphicClass GraphicClass = {read=FGraphicClass, write=FGraphicClass};
	__property Vcl::Graphics::TPicture* Picture = {read=FPicture, write=SetPicture};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TPictureProperty : public Designeditors::TPropertyEditor
{
	typedef Designeditors::TPropertyEditor inherited;
	
public:
	virtual void __fastcall Edit();
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes();
	virtual System::UnicodeString __fastcall GetValue();
	virtual void __fastcall SetValue(const System::UnicodeString Value)/* overload */;
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TPictureProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TPropertyEditor(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TPictureProperty() { }
	
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  SetValue(const System::WideString Value){ Designeditors::TPropertyEditor::SetValue(Value); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TGraphicProperty : public Designeditors::TClassProperty
{
	typedef Designeditors::TClassProperty inherited;
	
public:
	virtual void __fastcall Edit();
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes();
	virtual System::UnicodeString __fastcall GetValue();
	virtual void __fastcall SetValue(const System::UnicodeString Value)/* overload */;
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TGraphicProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TClassProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TGraphicProperty() { }
	
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  SetValue(const System::WideString Value){ Designeditors::TPropertyEditor::SetValue(Value); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TGraphicEditor : public Designeditors::TDefaultEditor
{
	typedef Designeditors::TDefaultEditor inherited;
	
public:
	virtual void __fastcall EditProperty(const Designintf::_di_IProperty Prop, bool &Continue);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TGraphicEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : Designeditors::TDefaultEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TGraphicEditor() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Picedit */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_PICEDIT)
using namespace Picedit;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// PiceditHPP
