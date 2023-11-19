// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ExDispID.pas' rev: 35.00 (Windows)

#ifndef ExdispidHPP
#define ExdispidHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>

//-- user supplied -----------------------------------------------------------

namespace Exdispid
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
static const System::Int8 DISPID_BEFORENAVIGATE = System::Int8(0x64);
static const System::Int8 DISPID_NAVIGATECOMPLETE = System::Int8(0x65);
static const System::Int8 DISPID_STATUSTEXTCHANGE = System::Int8(0x66);
static const System::Int8 DISPID_QUIT = System::Int8(0x67);
static const System::Int8 DISPID_DOWNLOADCOMPLETE = System::Int8(0x68);
static const System::Int8 DISPID_COMMANDSTATECHANGE = System::Int8(0x69);
static const System::Int8 DISPID_DOWNLOADBEGIN = System::Int8(0x6a);
static const System::Int8 DISPID_NEWWINDOW = System::Int8(0x6b);
static const System::Int8 DISPID_PROGRESSCHANGE = System::Int8(0x6c);
static const System::Int8 DISPID_WINDOWMOVE = System::Int8(0x6d);
static const System::Int8 DISPID_WINDOWRESIZE = System::Int8(0x6e);
static const System::Int8 DISPID_WINDOWACTIVATE = System::Int8(0x6f);
static const System::Int8 DISPID_PROPERTYCHANGE = System::Int8(0x70);
static const System::Int8 DISPID_TITLECHANGE = System::Int8(0x71);
static const System::Int8 DISPID_TITLEICONCHANGE = System::Int8(0x72);
static const System::Byte DISPID_FRAMEBEFORENAVIGATE = System::Byte(0xc8);
static const System::Byte DISPID_FRAMENAVIGATECOMPLETE = System::Byte(0xc9);
static const System::Byte DISPID_FRAMENEWWINDOW = System::Byte(0xcc);
static const System::Byte DISPID_BEFORENAVIGATE2 = System::Byte(0xfa);
static const System::Byte DISPID_NEWWINDOW2 = System::Byte(0xfb);
static const System::Byte DISPID_NAVIGATECOMPLETE2 = System::Byte(0xfc);
static const System::Byte DISPID_ONQUIT = System::Byte(0xfd);
static const System::Byte DISPID_ONVISIBLE = System::Byte(0xfe);
static const System::Byte DISPID_ONTOOLBAR = System::Byte(0xff);
static const System::Word DISPID_ONMENUBAR = System::Word(0x100);
static const System::Word DISPID_ONSTATUSBAR = System::Word(0x101);
static const System::Word DISPID_ONFULLSCREEN = System::Word(0x102);
static const System::Word DISPID_DOCUMENTCOMPLETE = System::Word(0x103);
static const System::Word DISPID_ONTHEATERMODE = System::Word(0x104);
static const System::Word DISPID_ONADDRESSBAR = System::Word(0x105);
static const System::Word DISPID_WINDOWSETRESIZABLE = System::Word(0x106);
static const System::Word DISPID_WINDOWCLOSING = System::Word(0x107);
static const System::Word DISPID_WINDOWSETLEFT = System::Word(0x108);
static const System::Word DISPID_WINDOWSETTOP = System::Word(0x109);
static const System::Word DISPID_WINDOWSETWIDTH = System::Word(0x10a);
static const System::Word DISPID_WINDOWSETHEIGHT = System::Word(0x10b);
static const System::Word DISPID_CLIENTTOHOSTWINDOW = System::Word(0x10c);
static const System::Word DISPID_SETSECURELOCKICON = System::Word(0x10d);
static const System::Word DISPID_FILEDOWNLOAD = System::Word(0x10e);
static const System::Word DISPID_NAVIGATEERROR = System::Word(0x10f);
static const System::Word DISPID_PRIVACYIMPACTEDSTATECHANGE = System::Word(0x110);
static const System::Word DISPID_NEWWINDOW3 = System::Word(0x111);
static const System::Word DISPID_VIEWUPDATE = System::Word(0x119);
static const System::Word DISPID_SETPHISHINGFILTERSTATUS = System::Word(0x11a);
static const System::Word DISPID_WINDOWSTATECHANGED = System::Word(0x11b);
static const System::Word DISPID_NEWPROCESS = System::Word(0x11c);
static const System::Word DISPID_THIRDPARTYURLBLOCKED = System::Word(0x11d);
static const System::Word DISPID_REDIRECTXDOMAINBLOCKED = System::Word(0x11e);
static const System::Word DISPID_WEBWORKERSTARTED = System::Word(0x120);
static const System::Word DISPID_WEBWORKERFINISHED = System::Word(0x121);
static const System::Word DISPID_BEFORESCRIPTEXECUTE = System::Word(0x122);
static const System::Byte DISPID_PRINTTEMPLATEINSTANTIATION = System::Byte(0xe1);
static const System::Byte DISPID_PRINTTEMPLATETEARDOWN = System::Byte(0xe2);
static const System::Byte DISPID_UPDATEPAGESTATUS = System::Byte(0xe3);
static const System::Byte DISPID_WINDOWREGISTERED = System::Byte(0xc8);
static const System::Byte DISPID_WINDOWREVOKED = System::Byte(0xc9);
static const System::Int8 DISPID_RESETFIRSTBOOTMODE = System::Int8(0x1);
static const System::Int8 DISPID_RESETSAFEMODE = System::Int8(0x2);
static const System::Int8 DISPID_REFRESHOFFLINEDESKTOP = System::Int8(0x3);
static const System::Int8 DISPID_ADDFAVORITE = System::Int8(0x4);
static const System::Int8 DISPID_ADDCHANNEL = System::Int8(0x5);
static const System::Int8 DISPID_ADDDESKTOPCOMPONENT = System::Int8(0x6);
static const System::Int8 DISPID_ISSUBSCRIBED = System::Int8(0x7);
static const System::Int8 DISPID_NAVIGATEANDFIND = System::Int8(0x8);
static const System::Int8 DISPID_IMPORTEXPORTFAVORITES = System::Int8(0x9);
static const System::Int8 DISPID_AUTOCOMPLETESAVEFORM = System::Int8(0xa);
static const System::Int8 DISPID_AUTOSCAN = System::Int8(0xb);
static const System::Int8 DISPID_AUTOCOMPLETEATTACH = System::Int8(0xc);
static const System::Int8 DISPID_SHOWBROWSERUI = System::Int8(0xd);
static const System::Int8 DISPID_ADDSEARCHPROVIDER = System::Int8(0xe);
static const System::Int8 DISPID_RUNONCESHOWN = System::Int8(0xf);
static const System::Int8 DISPID_SKIPRUNONCE = System::Int8(0x10);
static const System::Int8 DISPID_CUSTOMIZESETTINGS = System::Int8(0x11);
static const System::Int8 DISPID_SQMENABLED = System::Int8(0x12);
static const System::Int8 DISPID_PHISHINGENABLED = System::Int8(0x13);
static const System::Int8 DISPID_BRANDIMAGEURI = System::Int8(0x14);
static const System::Int8 DISPID_SKIPTABSWELCOME = System::Int8(0x15);
static const System::Int8 DISPID_DIAGNOSECONNECTION = System::Int8(0x16);
static const System::Int8 DISPID_CUSTOMIZECLEARTYPE = System::Int8(0x17);
static const System::Int8 DISPID_ISSEARCHPROVIDERINSTALLED = System::Int8(0x18);
static const System::Int8 DISPID_ISSEARCHMIGRATED = System::Int8(0x19);
static const System::Int8 DISPID_DEFAULTSEARCHPROVIDER = System::Int8(0x1a);
static const System::Int8 DISPID_RUNONCEREQUIREDSETTINGSCOMPLETE = System::Int8(0x1b);
static const System::Int8 DISPID_RUNONCEHASSHOWN = System::Int8(0x1c);
static const System::Int8 DISPID_SEARCHGUIDEURL = System::Int8(0x1d);
static const System::Int8 DISPID_ADDSERVICE = System::Int8(0x1e);
static const System::Int8 DISPID_ISSERVICEINSTALLED = System::Int8(0x1f);
static const System::Int8 DISPID_ADDTOFAVORITESBAR = System::Int8(0x20);
static const System::Int8 DISPID_BUILDNEWTABPAGE = System::Int8(0x21);
static const System::Int8 DISPID_SETRECENTLYCLOSEDVISIBLE = System::Int8(0x22);
static const System::Int8 DISPID_SETACTIVITIESVISIBLE = System::Int8(0x23);
static const System::Int8 DISPID_CONTENTDISCOVERYRESET = System::Int8(0x24);
static const System::Int8 DISPID_INPRIVATEFILTERINGENABLED = System::Int8(0x25);
static const System::Int8 DISPID_SUGGESTEDSITESENABLED = System::Int8(0x26);
static const System::Int8 DISPID_ENABLESUGGESTEDSITES = System::Int8(0x27);
static const System::Int8 DISPID_NAVIGATETOSUGGESTEDSITES = System::Int8(0x28);
static const System::Int8 DISPID_SHOWTABSHELP = System::Int8(0x29);
static const System::Int8 DISPID_SHOWINPRIVATEHELP = System::Int8(0x2a);
static const System::Int8 DISPID_ISSITEMODE = System::Int8(0x2b);
static const System::Int8 DISPID_SETSITEMODEICONOVERLAY = System::Int8(0x2c);
static const System::Int8 DISPID_CLEARSITEMODEICONOVERLAY = System::Int8(0x2d);
static const System::Int8 DISPID_UPDATETHUMBNAILBUTTON = System::Int8(0x2e);
static const System::Int8 DISPID_SETTHUMBNAILBUTTONS = System::Int8(0x2f);
static const System::Int8 DISPID_ADDTHUMBNAILBUTTONS = System::Int8(0x30);
static const System::Int8 DISPID_ADDSITEMODE = System::Int8(0x31);
static const System::Int8 DISPID_SETSITEMODEPROPERTIES = System::Int8(0x32);
static const System::Int8 DISPID_SITEMODECREATEJUMPLIST = System::Int8(0x33);
static const System::Int8 DISPID_SITEMODEADDJUMPLISTITEM = System::Int8(0x34);
static const System::Int8 DISPID_SITEMODECLEARJUMPLIST = System::Int8(0x35);
static const System::Int8 DISPID_SITEMODEADDBUTTONSTYLE = System::Int8(0x36);
static const System::Int8 DISPID_SITEMODESHOWBUTTONSTYLE = System::Int8(0x37);
static const System::Int8 DISPID_SITEMODESHOWJUMPLIST = System::Int8(0x38);
static const System::Int8 DISPID_ADDTRACKINGPROTECTIONLIST = System::Int8(0x39);
static const System::Int8 DISPID_SITEMODEACTIVATE = System::Int8(0x3a);
static const System::Int8 DISPID_ISSITEMODEFIRSTRUN = System::Int8(0x3b);
static const System::Int8 DISPID_TRACKINGPROTECTIONENABLED = System::Int8(0x3c);
static const System::Int8 DISPID_ACTIVEXFILTERINGENABLED = System::Int8(0x3d);
static const System::Int8 DISPID_PROVISIONNETWORKS = System::Int8(0x3e);
static const System::Int8 DISPID_REPORTSAFEURL = System::Int8(0x3f);
static const System::Int8 DISPID_SITEMODEREFRESHBADGE = System::Int8(0x40);
static const System::Int8 DISPID_SITEMODECLEARBADGE = System::Int8(0x41);
static const System::Int8 DISPID_DIAGNOSECONNECTIONUILESS = System::Int8(0x42);
static const System::Int8 DISPID_LAUNCHNETWORKCLIENTHELP = System::Int8(0x43);
static const System::Int8 DISPID_CHANGEDEFAULTBROWSER = System::Int8(0x44);
static const System::Int8 DISPID_STOPPERIODICUPDATE = System::Int8(0x45);
static const System::Int8 DISPID_STARTPERIODICUPDATE = System::Int8(0x46);
static const System::Int8 DISPID_CLEARNOTIFICATION = System::Int8(0x47);
static const System::Int8 DISPID_ENABLENOTIFICATIONQUEUE = System::Int8(0x48);
static const System::Int8 DISPID_PINNEDSITESTATE = System::Int8(0x49);
static const System::Int8 DISPID_LAUNCHINTERNETOPTIONS = System::Int8(0x4a);
static const System::Int8 DISPID_STARTPERIODICUPDATEBATCH = System::Int8(0x4b);
static const System::Int8 DISPID_ENABLENOTIFICATIONQUEUESQUARE = System::Int8(0x4c);
static const System::Int8 DISPID_ENABLENOTIFICATIONQUEUEWIDE = System::Int8(0x4d);
static const System::Int8 DISPID_ENABLENOTIFICATIONQUEUELARGE = System::Int8(0x4e);
static const System::Int8 DISPID_SCHEDULEDTILENOTIFICATION = System::Int8(0x4f);
static const System::Int8 DISPID_REMOVESCHEDULEDTILENOTIFICATION = System::Int8(0x50);
static const System::Int8 DISPID_STARTBADGEUPDATE = System::Int8(0x51);
static const System::Int8 DISPID_STOPBADGEUPDATE = System::Int8(0x52);
static const System::Int8 DISPID_SHELLUIHELPERLAST = System::Int8(0x53);
static const System::Int8 DISPID_ADVANCEERROR = System::Int8(0xa);
static const System::Int8 DISPID_RETREATERROR = System::Int8(0xb);
static const System::Int8 DISPID_CANADVANCEERROR = System::Int8(0xc);
static const System::Int8 DISPID_CANRETREATERROR = System::Int8(0xd);
static const System::Int8 DISPID_GETERRORLINE = System::Int8(0xe);
static const System::Int8 DISPID_GETERRORCHAR = System::Int8(0xf);
static const System::Int8 DISPID_GETERRORCODE = System::Int8(0x10);
static const System::Int8 DISPID_GETERRORMSG = System::Int8(0x11);
static const System::Int8 DISPID_GETERRORURL = System::Int8(0x12);
static const System::Int8 DISPID_GETDETAILSSTATE = System::Int8(0x13);
static const System::Int8 DISPID_SETDETAILSSTATE = System::Int8(0x14);
static const System::Int8 DISPID_GETPERERRSTATE = System::Int8(0x15);
static const System::Int8 DISPID_SETPERERRSTATE = System::Int8(0x16);
static const System::Int8 DISPID_GETALWAYSSHOWLOCKSTATE = System::Int8(0x17);
static const System::Int8 DISPID_FAVSELECTIONCHANGE = System::Int8(0x1);
static const System::Int8 DISPID_SELECTIONCHANGE = System::Int8(0x2);
static const System::Int8 DISPID_DOUBLECLICK = System::Int8(0x3);
static const System::Int8 DISPID_INITIALIZED = System::Int8(0x4);
static const System::Int8 DISPID_MOVESELECTIONUP = System::Int8(0x1);
static const System::Int8 DISPID_MOVESELECTIONDOWN = System::Int8(0x2);
static const System::Int8 DISPID_RESETSORT = System::Int8(0x3);
static const System::Int8 DISPID_NEWFOLDER = System::Int8(0x4);
static const System::Int8 DISPID_SYNCHRONIZE = System::Int8(0x5);
static const System::Int8 DISPID_IMPORT = System::Int8(0x6);
static const System::Int8 DISPID_EXPORT = System::Int8(0x7);
static const System::Int8 DISPID_INVOKECONTEXTMENU = System::Int8(0x8);
static const System::Int8 DISPID_MOVESELECTIONTO = System::Int8(0x9);
static const System::Int8 DISPID_SUBSCRIPTIONSENABLED = System::Int8(0xa);
static const System::Int8 DISPID_CREATESUBSCRIPTION = System::Int8(0xb);
static const System::Int8 DISPID_DELETESUBSCRIPTION = System::Int8(0xc);
static const System::Int8 DISPID_SETROOT = System::Int8(0xd);
static const System::Int8 DISPID_ENUMOPTIONS = System::Int8(0xe);
static const System::Int8 DISPID_SELECTEDITEM = System::Int8(0xf);
static const System::Int8 DISPID_ROOT = System::Int8(0x10);
static const System::Int8 DISPID_DEPTH = System::Int8(0x11);
static const System::Int8 DISPID_MODE = System::Int8(0x12);
static const System::Int8 DISPID_FLAGS = System::Int8(0x13);
static const System::Int8 DISPID_TVFLAGS = System::Int8(0x14);
static const System::Int8 DISPID_NSCOLUMNS = System::Int8(0x15);
static const System::Int8 DISPID_COUNTVIEWTYPES = System::Int8(0x16);
static const System::Int8 DISPID_SETVIEWTYPE = System::Int8(0x17);
static const System::Int8 DISPID_SELECTEDITEMS = System::Int8(0x18);
static const System::Int8 DISPID_EXPAND = System::Int8(0x19);
static const System::Int8 DISPID_UNSELECTALL = System::Int8(0x1a);
}	/* namespace Exdispid */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_EXDISPID)
using namespace Exdispid;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// ExdispidHPP
