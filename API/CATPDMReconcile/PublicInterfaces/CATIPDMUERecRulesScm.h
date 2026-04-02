#ifndef CATIPDMUERecRulesScm_H
#define CATIPDMUERecRulesScm_H
// Reconciliator
// Version 1 Release 0
// COPYRIGHT DASSAULT SYSTEMES 2004-2010
//
/**
  * @CAA2Level L1
  * @CAA2Usage U5
  */
// *****************************************************************
//
//    Identification :
//    ---------------
//
//        RESPONSIBLE : Jean-Luc MEDIONI
//        FUNCTION    : Reconciliator
//        USE         : CATIA & ENOVIA
//
// *****************************************************************
//
//    Description :
//    ------------
//
// Header definition: CATEpeSession represents a Reconciliation session
//
// *****************************************************************
//
//    Remarks :
//    ---------
//
//
// ****************************************************************
//
//    Story :
//    -------
//
//    Revision 1.0  Oct 2003  Author:  Jean-Luc MEDIONI
//                            Purpose: Creation for Reconciliator
//
// ****************************************************************
//
// INSIDE class:
// -------------
//
//
// ****************************************************************

#include "CATPDMReconcileItfCPP.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATPDMReconcileItfCPP IID IID_CATIPDMUERecRulesScm;
#else
extern "C" const IID IID_CATIPDMUERecRulesScm ;
#endif

class CATScmObject ;

#include "CATBoolean.h"
//------------------------------------------------------------------

/**
  *  Interface to allow the user to decide if a reconciliation rule is applicable for an object to reconcile
  *  <b>Role</b>: This interface is a user exit, that allows an user to decide if a reconciliation rule is 
  *  applicable for an object to reconcile
  *  <br>You should implement it on the <tt>PDMUERecRules</tt> component by using 
  *  the CATObject mechanism.
  **/
class ExportedByCATPDMReconcileItfCPP CATIPDMUERecRulesScm: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

  // --------------------------------------------------------------
  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------

   /**
     * Allow the user to decide if a reconciliation rule is applicable for the object to reconcile 
     *   @param iRecObj
     *    The object to reconcile
     *   @param iRule
     *      The reconciliation rule (the list of recognized rules is available in CATRecSession::CATReconcileRule)
     *   @param oResult 
     *      TRUE  : The reconciliation rule is applicable for the object to reconcile
     *      FALSE : The reconciliation rule is not applicable for the object to reconcile
     *   @return HRESULT
     *     Error code of function.
     *      S_OK:   The user-exit has being executed successfully
     *      E_FAIL: An error occurred during the execution of the user exit
     */
     virtual HRESULT IsRuleValid( CATScmObject *iRecObj , int iRule, CATBoolean &oResult )=0;

} ;

//------------------------------------------------------------------

#endif
