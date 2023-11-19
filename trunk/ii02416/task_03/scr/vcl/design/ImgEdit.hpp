// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ImgEdit.pas' rev: 35.00 (Windows)

#ifndef ImgeditHPP
#define ImgeditHPP

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
#include <Vcl.Graphics.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Controls.hpp>
#include <System.Classes.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.ExtDlgs.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Imgedit
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TImageInfo;
class DELPHICLASS TImageListEditor;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TImageOperation : unsigned char { ioCrop, ioStretch, ioCenter };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TImageInfo : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Classes::TList* FOwner;
	TImageListEditor* FOwnerForm;
	TImageOperation FOperation;
	Vcl::Graphics::TGraphic* FGraphic;
	System::Uitypes::TColor FFillColor;
	System::Uitypes::TColor FTransparentColor;
	bool FCanChangeTransparent;
	bool FCanChangeFill;
	bool FCanChangeOperation;
	void __fastcall SetFillColor(const System::Uitypes::TColor Value);
	void __fastcall SetTransparentColor(const System::Uitypes::TColor Value);
	void __fastcall SetOperation(const TImageOperation Value);
	void __fastcall SetCanChangeFill(const bool Value);
	void __fastcall SetCanChangeTransparent(const bool Value);
	void __fastcall SetCanChangeOperation(const bool Value);
	void __fastcall Change();
	
public:
	__fastcall TImageInfo(System::Classes::TList* AOwner, TImageListEditor* AOwnerForm, Vcl::Graphics::TGraphic* AGraphic, int OwnerIndex);
	__fastcall virtual ~TImageInfo();
	__property TImageOperation Operation = {read=FOperation, write=SetOperation, nodefault};
	__property Vcl::Graphics::TGraphic* Graphic = {read=FGraphic};
	__property System::Uitypes::TColor TransparentColor = {read=FTransparentColor, write=SetTransparentColor, nodefault};
	__property System::Uitypes::TColor FillColor = {read=FFillColor, write=SetFillColor, nodefault};
	__property bool CanChangeTransparent = {read=FCanChangeTransparent, write=SetCanChangeTransparent, nodefault};
	__property bool CanChangeFill = {read=FCanChangeFill, write=SetCanChangeFill, nodefault};
	__property bool CanChangeOperation = {read=FCanChangeOperation, write=SetCanChangeOperation, nodefault};
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TImageListEditor : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
__published:
	Vcl::Stdctrls::TButton* OK;
	Vcl::Stdctrls::TButton* Cancel;
	Vcl::Stdctrls::TButton* Apply;
	Vcl::Stdctrls::TButton* Help;
	Vcl::Extdlgs::TOpenPictureDialog* OpenDialog;
	Vcl::Extctrls::TTimer* DragTimer;
	Vcl::Extdlgs::TSavePictureDialog* SaveDialog;
	Vcl::Stdctrls::TGroupBox* ImageListGroup;
	Vcl::Comctrls::TListView* ImageView;
	Vcl::Stdctrls::TButton* Add;
	Vcl::Stdctrls::TButton* Delete;
	Vcl::Stdctrls::TButton* Clear;
	Vcl::Stdctrls::TButton* ExportBtn;
	Vcl::Stdctrls::TButton* ReplaceBtn;
	Vcl::Stdctrls::TGroupBox* ImageGroup;
	Vcl::Stdctrls::TLabel* TransparentLabel;
	Vcl::Stdctrls::TLabel* FillLabel;
	Vcl::Extctrls::TRadioGroup* OptionsGroup;
	Vcl::Extctrls::TPanel* MainPanel;
	Vcl::Extctrls::TImage* MainImage;
	Vcl::Extctrls::TPanel* OptionsPanel;
	Vcl::Extctrls::TColorBox* TransparentColor;
	Vcl::Extctrls::TColorBox* FillColor;
	Vcl::Extctrls::TShape* Shape1;
	Vcl::Extctrls::TPanel* PanelBottom;
	void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall ImageViewDragOver(System::TObject* Sender, System::TObject* Source, int X, int Y, System::Uitypes::TDragState State, bool &Accept);
	void __fastcall DragTimerTimer(System::TObject* Sender);
	void __fastcall ImageViewEndDrag(System::TObject* Sender, System::TObject* Target, int X, int Y);
	void __fastcall ImageViewDragDrop(System::TObject* Sender, System::TObject* Source, int X, int Y);
	void __fastcall ClearClick(System::TObject* Sender);
	void __fastcall ApplyClick(System::TObject* Sender);
	void __fastcall DeleteClick(System::TObject* Sender);
	void __fastcall AddClick(System::TObject* Sender);
	void __fastcall FormDestroy(System::TObject* Sender);
	void __fastcall ImageViewSelectItem(System::TObject* Sender, Vcl::Comctrls::TListItem* Item, bool Selected);
	void __fastcall OptionsGroupClick(System::TObject* Sender);
	void __fastcall MainImageMouseDown(System::TObject* Sender, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall MainImageMouseUp(System::TObject* Sender, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall MainImageMouseMove(System::TObject* Sender, System::Classes::TShiftState Shift, int X, int Y);
	void __fastcall TransparentColorChange(System::TObject* Sender);
	void __fastcall FillColorChange(System::TObject* Sender);
	void __fastcall ExportBtnClick(System::TObject* Sender);
	void __fastcall ImageViewCompare(System::TObject* Sender, Vcl::Comctrls::TListItem* Item1, Vcl::Comctrls::TListItem* Item2, int Data, int &Compare);
	void __fastcall FormResize(System::TObject* Sender);
	void __fastcall HelpClick(System::TObject* Sender);
	
private:
	bool FUpdating;
	bool FPickingColor;
	Vcl::Controls::TImageList* FEditingList;
	Vcl::Controls::TImageList* FScaledImages;
	Vcl::Controls::TImageList* FImages;
	bool FOldMasked;
	System::Uitypes::TColor FOldBkColor;
	System::Uitypes::TColor FOldBlendColor;
	Vcl::Imglist::TDrawingStyle FOldDrawingStyle;
	Vcl::Imglist::TImageType FOldImageType;
	System::Classes::TList* FImageInfo;
	int FItemHeight;
	int __fastcall DoAdd(Vcl::Graphics::TIcon* Icon, int Index)/* overload */;
	int __fastcall DoAdd(Vcl::Graphics::TGraphic* Graphic, int Index)/* overload */;
	int __fastcall DoAdd(Vcl::Graphics::TGraphic* Graphic, int Index, int DivX, int DivY)/* overload */;
	void __fastcall Replace(int Index, Vcl::Graphics::TGraphic* Graphic, System::Uitypes::TColor Transparent, System::Uitypes::TColor Fill, TImageOperation Operation);
	void __fastcall MoveImage(int FromIndex, int ToIndex);
	void __fastcall AddColor(const System::UnicodeString S);
	void __fastcall DeleteSelectedImages();
	void __fastcall ClearAllImages();
	void __fastcall ResizeImageGroup();
	bool __fastcall UpdateUI(bool Changed);
	void __fastcall UpdatePickColor(int X, int Y);
	void __fastcall SetImageFillColor(System::Uitypes::TColor Color);
	void __fastcall SetImageOperation(TImageOperation Operation);
	void __fastcall SetImageTransparentColor(System::Uitypes::TColor Color);
	TImageInfo* __fastcall GetImageInfo(int Index);
	
public:
	__property TImageInfo* Items[int Index] = {read=GetImageInfo};
public:
	/* TCustomForm.Create */ inline __fastcall virtual TImageListEditor(System::Classes::TComponent* AOwner) : Vcl::Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TImageListEditor(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TImageListEditor() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TImageListEditor(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE bool __fastcall EditImageList(Vcl::Controls::TImageList* AImageList);
}	/* namespace Imgedit */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IMGEDIT)
using namespace Imgedit;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// ImgeditHPP
