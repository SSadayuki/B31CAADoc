// COPYRIGHT DASSAULT SYSTEMES 2003
#ifndef CATDESTRUCT_INCLUDE
#define CATDESTRUCT_INCLUDE
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/

// Copyright DASSAULT SYSTEMS 1996
//-----------------------------------------------------------------------------
// Abstract:	Wrapper to call destructor
//-----------------------------------------------------------------------------
// Usage:	Should only be used with the CATDestructOnExit macro
//-----------------------------------------------------------------------------

#include <string.h>
#include "CATErrorDefs.h"

#ifdef _IRIX_SOURCE
    // Workaround for SGI template processor bug:
    // Call Destructor which should in turn call ~class()
    #define DTOR(class)		Destructor()
#else
    #define DTOR(class)		~class()
#endif

//
// Destructor wrapper
//

//
// Base class to have a generic pointer and virtual method
//
class ExportedByJS0ERROR CATDestruct {

  public:
    CATDestruct (void *obj);
    virtual void Destruct () = 0;
    virtual ~CATDestruct();
    
    friend class CATXHContext;

  protected:
    void *obj2Destruct;		// the object to destruct
    CATDestruct *prevDestruct;	// previous destruct protect

};

//
// Class template for a virtual destruct
//
template <class T>
class CATDestruct_ : public CATDestruct {

  public:
    CATDestruct_ (T *toDestruct) : CATDestruct (toDestruct) {}
    void Destruct ();

};

template <class T>
void CATDestruct_<T>::Destruct ()
{
    if (obj2Destruct != NULL) {
	((T *) obj2Destruct)->DTOR(T); // call destructor
	obj2Destruct = NULL;
    }
}

#endif

    
