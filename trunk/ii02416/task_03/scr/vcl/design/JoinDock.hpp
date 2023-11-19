// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'JoinDock.pas' rev: 35.00 (Windows)

#ifndef JoindockHPP
#define JoindockHPP

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
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Dialogs.hpp>
#include <BaseDock.hpp>
#include <DockForm.hpp>
#include <DeskForm.hpp>
#include <IDEMessages.hpp>
#include <System.IniFiles.hpp>
#include <Vcl.ActnList.hpp>

//-- user supplied -----------------------------------------------------------

namespace Joindock
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TJoinDockForm;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TJoinDockForm : public Basedock::TBaseDockHostForm
{
	typedef Basedock::TBaseDockHostForm inherited;
	
__published:
	void __fastcall FormUnDock(System::TObject* Sender, Vcl::Controls::TControl* Client, Vcl::Controls::TWinControl* NewTarget, bool &Allow);
	
private:
	MESSAGE void __fastcall CMDockNotification(Vcl::Controls::TCMDockNotification &Message);
	
protected:
	virtual Vcl::Controls::TWinControlClass __fastcall GetDialogCharParentClass();
	DYNAMIC void __fastcall ReloadDockedControl(const System::UnicodeString AControlName, Vcl::Controls::TControl* &AControl);
	DYNAMIC void __fastcall UnlockUpdates();
	
public:
	__fastcall virtual TJoinDockForm(System::Classes::TComponent* AOwner);
	virtual void __fastcall LoadWindowState(System::Inifiles::TCustomIniFile* Desktop);
	virtual void __fastcall SaveWindowState(System::Inifiles::TCustomIniFile* Desktop, bool isProject);
public:
	/* TBaseDockHostForm.Destroy */ inline __fastcall virtual ~TJoinDockForm() { }
	
public:
	/* TCustomForm.CreateNew */ inline __fastcall virtual TJoinDockForm(System::Classes::TComponent* AOwner, int Dummy) : Basedock::TBaseDockHostForm(AOwner, Dummy) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TJoinDockForm(HWND ParentWindow) : Basedock::TBaseDockHostForm(ParentWindow) { }
	
};


typedef System::TMetaClass* TJoinDockFormClass;

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Joindock */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_JOINDOCK)
using namespace Joindock;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// JoindockHPP
