#ifndef CATIPDMUERecEventScm_H
#define CATIPDMUERecEventScm_H
// Infrastructure
// Version 1 Release 0
// COPYRIGHT DASSAULT SYSTEMES 2004-2010
//
/**
  * @CAA2Level L1
  * @CAA2Usage U5
  */
// *****************************************************************
//
//   Identification :
//   ---------------
//
//      RESPONSIBLE : Jean-Luc MEDIONI
//      FUNCTION    : Reconciliator
//      USE         : CATIA & ENOVIA
//
// *****************************************************************
//
//   Description :
//   ------------
//
// Header definition of Reconciliator User Exit to implement callback
// (Ie to be called at some stages of reconciliation process)
//
// *****************************************************************
//
//   Remarks :
//   ---------
//
//
// ****************************************************************
//
//   Story :
//   -------
//
//   Revision 1.0  June 2004  JLM Creation
//
// ****************************************************************
//
// INSIDE class:
// -------------
//
//
// ****************************************************************
// Abstract class    : Yes
// Template code     : No
// Ilined   Function : No
// ****************************************************************

#include "CATPDMReconcileItfCPP.h"
#include "CATBaseUnknown.h"

// --- Definition of interface uid

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATPDMReconcileItfCPP IID IID_CATIPDMUERecEventScm;
#else
extern "C" const IID IID_CATIPDMUERecEventScm ;
#endif

class CATScmSession  ;
class CATScmInstance ;

#include "CATBoolean.h"

/**
  *  This interface allows the customer to be called back.
  *  <b>Role</b>: This interface allows the customer to be called back.
  *  at specific phases of the Reconciliation process (Reconciliation session initialization, etc…).
  *  <br>You should implement it on the <tt>PDMUERecEvent</tt> component by using 
  *  the CATObject mechanism.
  **/

class ExportedByCATPDMReconcileItfCPP CATIPDMUERecEventScm: public CATBaseUnknown
{
      CATDeclareInterface;

   public:

   // --------------------------------------------------------------
   // No constructors or destructors on this pure virtual base class
   // --------------------------------------------------------------

   /**
     * Allows to prepare Reconciliation session.
     *
     * <b>Role</b>: 
     * Allows to prepare Reconciliation session, by for instance preset automatically some
     * Reconciliation rules on objects to be reconciled.
     *
     *  @return HRESULT
     *     Error code of function.
     *     <ul>
     *     <li><b>S_OK</b>    The user-exit has being executed successfully.</li>
     *     <li><b>E_FAIL</b>  An error occurred during the execution of the user exit.</li>
     *     </ul>
     *
     *  @param ixScmSession
     *    The Reconciliation session.
     */
     virtual HRESULT OnSessionInitialization( CATScmSession * ixScmSession ) = 0 ;

   /**
     * Allows to refine Product structure comparison results.
     *
     * <b>Role</b>: 
     * Allows to refine Product structure comparison results to merge a couple of Product instances 
     * bellow with the same father and child Part.
     *
     *  @return HRESULT
     *     Error code of function.
     *     <ul>
     *     <li><b>S_OK</b>    The user-exit has being executed successfully.</li>
     *     <li><b>E_FAIL</b>  An error occurred during the execution of the user exit.</li>
     *     </ul>
     *
     *  @param ixScmSession
     *    The Reconciliation session.
     *
     *  @param ixRootInstance
     *    Root of the assembly after comparison (Instance tree structure).
     */

     virtual HRESULT OnAfterStructureComparison( CATScmSession  * ixScmSession
                                               , CATScmInstance * ixRootInstance ) = 0 ;

   /**
     * Allows to add specific control after synchronization.
     *
     * <b>Role</b>: 
     * Allows to implement customer validation after reconciliation.
     *
     *  @return HRESULT
     *     Error code of function.
     *     <ul>
     *     <li><b>S_OK</b>    The user-exit has being executed successfully.</li>
     *     <li><b>E_FAIL</b>  An error occurred during the execution of the user exit.</li>
     *     </ul>
     *
     *  @param ixScmSession
     *    The Reconciliation session.
     */

     virtual HRESULT OnAfterReconciliationApply( CATScmSession  * ixScmSession ) = 0 ;

} ;

//------------------------------------------------------------------

#endif
