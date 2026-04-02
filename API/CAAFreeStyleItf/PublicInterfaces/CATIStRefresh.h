#ifndef CATIStRefresh_H
#define CATIStRefresh_H

//==============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2005
//==============================================================================
//
// CATIStRefresh :
//   Class defining basic behaviors for selection agent.
//
//==============================================================================
// Usage Notes :
//  --------------------------------------------------
//   IMPORTANT : DASSAULT SYSTEMES INTERNAL USE ONLY.
//  --------------------------------------------------
//
//------------------------------------------------------------------------------
//  Inheritance : CATIStRefresh (CAAFreeStyleItf FW)
//                  CATBaseUnknown     (System FW)
//==============================================================================
// May. 05   Creation                                     Jean-Michel PLOUHINEC
//==============================================================================

/**
 * @CAA2Level L0
 * @CAA2Usage U2
 */

#include "CAAFreeStyleItf.h"

#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
  extern  ExportedByCAAFreeStyleItf IID IID_CATIStRefresh;
#else
  extern "C" const IID IID_CATIStRefresh;
#endif

#include "CATISpecObject.h"

/**
 * Class defining basic behaviors for a refresh class
 * <br><b>Role</b>: Create an object that implement this interface
 * <li> Use it for instance in an MVC pattern inside 3D manipulator <tt>CATIStInteractor</tt>
 */ 

class ExportedByCAAFreeStyleItf CATIStRefresh : public CATBaseUnknown
{
    CATDeclareInterface;

public :
   
    /** 
	 * Method called to refresh some MVC object.
	 * @param iSpec
     *   A CATISpecObject_var object that trigger the action.
	 */
    virtual HRESULT Refresh(const CATISpecObject_var & iSpec = NULL_var) = 0;
};

CATDeclareHandler(CATIStRefresh, CATBaseUnknown);

#endif
