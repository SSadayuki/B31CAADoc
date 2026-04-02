// COPYRIGHT DASSAULT SYSTEMES 2003
#ifndef CATXHCONTEXT_INCLUDE
#define CATXHCONTEXT_INCLUDE
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/

// Copyright DASSAULT SYSTEMS 1996
//-----------------------------------------------------------------------------
// Abstract:	Context save/restore for exception handling
//-----------------------------------------------------------------------------
// Usage:	Internal class used only by the exception macros
//-----------------------------------------------------------------------------

#include <setjmp.h>
#include "CATError.h"
#include "CATErrorDefs.h"

class CATDestruct;

// For setjmp/longjmp
class ExportedByJS0ERROR CATXHContext {

  public:
    CATXHContext ();
    ~CATXHContext ();
    jmp_buf *GetJmpbuf () { return &jmpbuf; }
    CATError *GetError ()  { return error; }
    static CATXHContext *PopContext ();
    
    friend class CATError;
    friend class CATDestruct;
    
  protected:
    
    // Members
    jmp_buf jmpbuf;			// jmp_buf used by setjmp/longjmp
    CATXHContext *prevContext;		// Previous jmp_buf setup
    CATDestruct  *destructList;		// All protected destructs
    CATError     *error;
    
    // Methods
    CATError *SetError (CATError *err) { return error = err; }
    CATXHContext *Prepare2Longjmp  ();
    static void PushDestruct(CATDestruct *destruct);
    static void PopDestruct (CATDestruct *destruct);
};
    
#endif
