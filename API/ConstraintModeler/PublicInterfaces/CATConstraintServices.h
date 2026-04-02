// COPYRIGHT Dassault Systemes 2005 

#ifndef CATConstraintServices_H
#define CATConstraintServices_H

#include "CATConstraintModeler.h"

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "IUnknown.h" // for HRESULT definition

#include "CATLISTV_CATBaseUnknown.h"
#include "CATLISTV_CATICst.h"

#include "CATCstDefs.h"

class CATBaseUnknown_var;
class CATICst_var;

/**
 * Class dedicated to Constraints services.
 */
class ExportedByCATConstraintModeler CATConstraintServices
{
  public:

    /**
    * Creates a constraint.
    * @param iOwner
    * The owner of the created constraint, can be a Part or a Sketch.
    * @param iType
    * The constraint type as enumeration.
    * @param iElemList
    * The list of geometry involvded in the constraint, can contain from 1 to 3 elements.
    * @param iValue
    * The numerical value as double.
    * @param iMode
    * The creation mode.
    * @param oCreatedConstraint
    * The created constraint.
    * @return
    *   <dl>
    *   <dt><tt>S_OK</tt>          <dd>if the constraint is successfully created
    *   <dt><tt>E_INVALIDARG</tt>  <dd>if iElemList has more than 3 or less than 1 elements
    *   <dt><tt>E_FAIL</tt>        <dd>elsewhere.
    *   </dl>
    */
    static HRESULT CreateConstraintIn( const CATBaseUnknown_var & iOwner, 
                                       const CATCstType iType, 
                                       const CATLISTV(CATBaseUnknown_var) & iElemList, 
                                       double iValue, 
                                       const CATCstMode iMode,
                                       CATICst_var & oCreatedConstraint );

    /**
    * Gets the list of constraints under a given Part or Sketch.
    * @param iOwner
    *    The Part or Sketch where the constraints are created.
    * @param oConstraintsList
    *    The resulting constraints list
    * @return
    *   <dl>
    *   <dt><tt>S_OK</tt>          <dd>if at least one constraint is found
    *   <dt><tt>E_FAIL</tt>        <dd>elsewhere.
    *   </dl>
    */
    static HRESULT ListConstraints( const CATBaseUnknown_var & iOwner, 
                                    CATLISTV(CATICst_var) & oConstraintsList );

    /**
    * Removes a constraint.
    * @param iCst
    *    The constraint to remove. 
    *    The constraint has to be defined in a Part or a Sketch.
    * @return
    *   <dl>
    *   <dt><tt>S_OK</tt>          <dd>if the constraint is removed
    *   <dt><tt>E_FAIL</tt>        <dd>elsewhere.
    *   </dl>
    */
    static HRESULT RemoveConstraint( const CATICst_var & iCst );
};


#endif
