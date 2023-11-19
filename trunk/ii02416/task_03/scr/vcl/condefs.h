//---------------------------------------------------------------------------
// condefs.h - obsolete defines needed by Borland C++ Builder console apps
// $Rev: 48153 $
// Copyright (c) 1997, 2011 by Embarcadero Technologies, Inc.
//----------------------------------------------------------------------------
#ifndef CONDEFS_H
#define CONDEFS_H
//---------------------------------------------------------------------------
#if defined(_NO_VCL)

#define USEUNIT(ModName) \
   extern DummyThatIsNeverReferenced
//-----------------------------------------------------------------------
#define USEOBJ(FileName) \
   extern DummyThatIsNeverReferenced
//-----------------------------------------------------------------------
#define USERC(FileName) \
   extern DummyThatIsNeverReferenced
//-----------------------------------------------------------------------
#define USEASM(FileName) \
   extern DummyThatIsNeverReferenced
//-----------------------------------------------------------------------
#define USEDEF(FileName) \
   extern DummyThatIsNeverReferenced
//-----------------------------------------------------------------------
#define USERES(FileName) \
   extern DummyThatIsNeverReferenced
//-----------------------------------------------------------------------
#define USETLB(FileName) \
   extern DummyThatIsNeverReferenced
//-----------------------------------------------------------------------
#define USELIB(FileName) \
   extern DummyThatIsNeverReferenced
//-----------------------------------------------------------------------
#define USEFILE(FileName) \
   extern DummyThatIsNeverReferenced
//-----------------------------------------------------------------------
#define USEIDL(FileName) \
   extern DummyThatIsNeverReferenced
//-----------------------------------------------------------------------
#define USE(FileName, ContainerID) \
   extern DummyThatIsNeverReferenced
//-----------------------------------------------------------------------
#else // _NO_VCL
# include <System.hpp>
#endif // _NO_VCL

#endif // CONDEFS_H
