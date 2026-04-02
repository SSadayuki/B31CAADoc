#ifndef CATISchRouteGraphic_H
#define CATISchRouteGraphic_H

//	COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"

class CATIUnknownList;
class CATISchGRRRoute;

extern "C" const IID IID_CATISchRouteGraphic ;

/**
 * Interface to manage Schematic component's association with its
 * graphic representation objects.  
 * <b>Role</b>: To modify component's links to its
 * graphical representations.
 */
class CATISchRouteGraphic : public IUnknown
{
  public:  
  
  /**
  * Add a graphical primitive to a route.
  * @param iGRRToAdd
  *   The route graphical primitive to be added to the route.
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
  virtual HRESULT AddGraphicalPrimitive (CATISchGRRRoute *iGRRToAdd) = 0;

  /**
  * Remove a graphical primitive from a route.
  * @param iGRRToRemove
  *   The route graphical primitive to be removed from the component.
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
  virtual HRESULT RemoveGraphicalPrimitive (CATISchGRRRoute *iGRRToRemove) = 0;

  /**
  * List all graphical primitives of a route.
  * @param oLGRR
  *   A list of graphical primitives
  *   (members are CATISchGRRRoute interface pointers).
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

  /**
  * Remove all graphical primitives of a route, including alternate 
  * graphical primitives.
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
  virtual HRESULT RemoveAllGraphicalPrimitives() = 0;
};
#endif
