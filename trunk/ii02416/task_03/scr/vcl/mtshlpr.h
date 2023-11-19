////////////////////////////////////////////////////////////////////////////
// MTSHLPR.H - MTS wrapper class
//
// MTS and COM+ expose functions with similar signatures that are implemented
// in different DLLs. For an object to work correctly under both, it needs
// to dynamically load the appropriate DLL and call the underlying function.
//
// This class wraps those functions, hiding the work, and presenting an
// interface which will work against either platform.
//
// $Rev: 95347 $
//
// Copyright(c) 1995-2011 Embarcadero Technologies, Inc.
///////////////////////////////////////////////////////////////////////////

#ifndef MTSHLPR_H
#define MTSHLPR_H

#include <comsvcs.h>  // IObjectContext
#include <utilcls.h>

class TMtsDll
{
private:
   TDll* Library;
   int Type;
   bool init_com();
   bool init_mts();
public:
   TMtsDll();
   ~TMtsDll();
   HRESULT Get_ObjectContext(IObjectContext** pIntanceContext);

   void* SafeRef(REFIID rid, IUnknown* pUnknown);
};

#endif
