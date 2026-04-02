/** @CAA2Required */
/*---------------------------------------------------------------------*/
/* DON'T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS  */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPPEAR AT ANY TIME */
/*---------------------------------------------------------------------*/

//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES  1996
//=============================================================================
//
// CATSdaiSchemaDecl:
// initialize and delete a list of pointers for dict. init.
//
//=============================================================================
// Usage Notes:
//
// internal use only (called by generated code)
//=============================================================================
// Jul. 96   Creation                                   B. Marx
//=============================================================================

#ifndef CATSdaiSchemaDecl_H
#define CATSdaiSchemaDecl_H


#include <KS0LATE.h>

#include "SdaiMacro.h"
#include "CATDataType.h"

class ExportedByKS0LATE CATSdaiSchemaDecl
{
  public:
    //------
    // 'tors
    //------
    CATSdaiSchemaDecl();
    CATSdaiSchemaDecl(CATINTPTR);
    ~CATSdaiSchemaDecl();
  private:
    // data (function pointer)
    void (*_ptr) ();


};
#endif
