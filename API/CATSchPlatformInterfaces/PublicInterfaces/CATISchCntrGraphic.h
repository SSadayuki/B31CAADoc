#ifndef CATISchCntrGraphic_H
#define CATISchCntrGraphic_H

//	COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// System
#include "IUnknown.h"

class CATIUnknownList;
class CATISchGRR;

extern "C" const IID IID_CATISchCntrGraphic ;

/**
 * Interface to manage Schematic connector's association with its
 * graphic representation objects.  
 * <b>Role</b>: To modify connector's links to its
 * graphical representations.
 */
class CATISchCntrGraphic : public IUnknown
{
  public:  
  
  /**
  * Add a graphical primitive to a connector.
  * @param iGRRToAdd
  *   The connector graphical primitive to be added to the connector.
  * @param iGRR
  *   The component or route graphical representation that points to 
  *   the connector graphical primitive.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT AddGraphicalPrimitive (CATISchGRR *iGRRToAdd,
    CATISchGRR *iGRR) = 0;

  /**
  * Remove a graphical primitive from a connector.
  * @param iGRRToRemove
  *   The connector graphical primitive to be removed from the connector.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT RemoveGraphicalPrimitive (CATISchGRR *iGRRToRemove) = 0;

  /**
  * List all graphical primitives of a connector.
  * @param oLGRR
  *   A list of graphical primitives
  *   (members are CATISchGRR interface pointers).
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT ListGraphicalPrimitives (CATIUnknownList **oLGRR) = 0;
};
#endif
