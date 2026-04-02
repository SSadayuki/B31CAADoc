// COPYRIGHT Dassault Systemes 2001
//===================================================================
//
// CATIKweActivable.h
// This interface is implemented by objects that can be activated.
//
//===================================================================
//
// Usage notes:
// use this interface to activate, deactivate an object or to know its activated status
//
//===================================================================
#ifndef CATIKweActivable_H
#define CATIKweActivable_H

/** 
 * @CAA2Level L1
 * @CAA2Usage U3 
 */

#include "KnowledgeItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATICkeParm.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByKnowledgeItf IID IID_CATIKweActivable;
#else
extern "C" const IID IID_CATIKweActivable ;
#endif

//------------------------------------------------------------------

/**
 * This interface can be used to activate or deactivate a Knowledge feature.
 * <p>

 */
class ExportedByKnowledgeItf CATIKweActivable: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * Activates or Deactivates the relation.
 * if iStatus = 0, the relation is deactivated, nor it is activated.
 * This method may raise activation error (CATKWELifLoopDetected). No ability to catch them in CAA.<br>
 */
virtual HRESULT    SetActivationStatus(const int& iStatus) = 0;

/**
 * Tests if the relation is activated.
 * @return 
 * <br><b>Legal values</b>: 
 * <tt>CATCke::True</tt> if it is activated
 * <tt>CATCke::False</tt> if it isn't.
 */
virtual HRESULT IsActivated(int& oResult) const = 0;

/**
 * Returns the parameter managing relations activity.
 * @return activity (Boolean literal)
 */
virtual HRESULT ActivityFacet (CATICkeParm_var& oActivity) const = 0;

};

CATDeclareHandler(CATIKweActivable, CATBaseUnknown);

#endif
