// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'IDEMessages.pas' rev: 35.00 (Windows)

#ifndef IdemessagesHPP
#define IdemessagesHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Messages.hpp>

//-- user supplied -----------------------------------------------------------

namespace Idemessages
{
//-- forward type declarations -----------------------------------------------
struct TCMZombieCommand;
//-- type declarations -------------------------------------------------------
struct DECLSPEC_DRECORD TCMZombieCommand
{
public:
	unsigned Msg;
	unsigned Command;
	
public:
	union
	{
		struct 
		{
			System::Word ParamLo;
			System::Word ParamHi;
		};
		struct 
		{
			int Param;
			int Result;
		};
		
	};
};


//-- var, const, procedure ---------------------------------------------------
static const System::Word TCI_BASE = System::Word(0x464);
static const System::Word TCI_GETITEMTEXTLENGTH = System::Word(0x465);
static const System::Word TCI_GETITEMTEXT = System::Word(0x466);
static const System::Word TCI_EXPANDED = System::Word(0x467);
static const System::Word TCI_ISVISIBLE = System::Word(0x468);
static const System::Word TCI_HASCHILDREN = System::Word(0x469);
static const System::Word TCI_LEVEL = System::Word(0x46a);
static const System::Word TCI_CURRENTINDEX = System::Word(0x46b);
static const System::Word TCI_COUNT = System::Word(0x46c);
static const System::Word TCI_DISPLAYRECT = System::Word(0x46d);
static const System::Word IDEM_FIRST = System::Word(0x500);
static const System::Word CM_WINDOWCOMMAND = System::Word(0x500);
static const System::Word CM_CONTROLCOMMAND = System::Word(0x501);
static const System::Word CM_ZOMBIECOMMAND = System::Word(0x502);
static const System::Word CM_POSTCREATEINIT = System::Word(0x503);
static const System::Word CM_DEFERMODIFY = System::Word(0x504);
static const System::Word CM_DOMODIFY = System::Word(0x505);
static const System::Word UM_FINALUNDOCK = System::Word(0x506);
static const System::Word UM_NEWCLIENTFOCUSED = System::Word(0x507);
static const System::Word CM_UPDATECALLSTACK = System::Word(0x508);
static const System::Word AM_HELPTESTFAILED = System::Word(0x509);
static const System::Word IDEM_BEGINDEPLOY = System::Word(0x50a);
static const System::Word IDEM_STARTPRINTING = System::Word(0x50b);
static const System::Word IDEM_VALIDATELANG = System::Word(0x50c);
static const System::Word IDEM_EVALUATEWATCHES = System::Word(0x50d);
static const System::Word UM_RESIZEDOCKSITE = System::Word(0x50e);
static const System::Word IDEM_STARTCOMPILE = System::Word(0x50f);
static const System::Word CM_DESTROYPROCESS = System::Word(0x510);
static const System::Word IDEM_LOADTOOLBARS = System::Word(0x511);
static const System::Word IDEM_UPDATE = System::Word(0x512);
static const System::Word IDEM_FOCUSNEXTON = System::Word(0x513);
static const System::Word CM_DEBUGMESSAGE = System::Word(0x514);
static const System::Word IDEM_REFRESHOTV = System::Word(0x515);
static const System::Word IDEM_DELAYEDBPENABLE = System::Word(0x516);
static const System::Word CM_DELAYACTIVATENODE = System::Word(0x517);
static const System::Word CM_EXECUTEAUTORUNS = System::Word(0x518);
static const System::Word CM_UPDATEVISVALUE = System::Word(0x519);
static const System::Word CM_DESIGNERACTIVATED = System::Word(0x51a);
static const System::Word IDEM_UNLOCKDRAWING = System::Word(0x51b);
static const System::Word CM_SWITCHTODESIGNER = System::Word(0x51c);
static const System::Word CM_PROPERTYERROR = System::Word(0x1400);
static const System::Word CM_CONTINUEINSPECT = System::Word(0x1401);
static const System::Word CM_CONTINUEUPDATE = System::Word(0x1402);
static const System::Word CM_COMPLETEINSPECT = System::Word(0x1403);
static const System::Word CM_COMPLETEREPLACE = System::Word(0x1404);
static const System::Word CM_COMPLETECHANGEPROPERTY = System::Word(0x1405);
static const System::Word CM_UPDATEINSPECTOR = System::Word(0x1407);
static const System::Word CM_UPDATEINSPECTOR2 = System::Word(0x1408);
static const System::Word CM_REEVALUATE = System::Word(0x1409);
static const System::Int8 zcGetCaretX = System::Int8(0x0);
static const System::Int8 zcGetCaretY = System::Int8(0x1);
static const System::Int8 zcGetCursorAttribute = System::Int8(0x2);
static const System::Int8 zcGetLineCount = System::Int8(0x3);
static const System::Int8 zcGetLinesInWindow = System::Int8(0x4);
static const System::Int8 zcGetLineText = System::Int8(0x5);
static const System::Int8 zcGetTopLine = System::Int8(0x6);
static const System::Int8 zcGetBinding = System::Int8(0x7);
static const System::Int8 zcGetLineAttrs = System::Int8(0x8);
static const System::Int8 zcGetDebuggerObject = System::Int8(0x9);
static const System::Int8 zcGetItemCount = System::Int8(0xa);
static const System::Int8 zcGetItemName = System::Int8(0xb);
static const System::Int8 zcGetItemRect = System::Int8(0xc);
extern DELPHI_PACKAGE unsigned DeferRecalcVisibleMsg;
extern DELPHI_PACKAGE unsigned DeferDoLayoutMsg;
}	/* namespace Idemessages */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IDEMESSAGES)
using namespace Idemessages;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IdemessagesHPP
