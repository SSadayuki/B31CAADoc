#ifndef CATISchAppCompatible_H
#define CATISchAppCompatible_H

//	COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"

extern "C" const IID IID_CATISchAppCompatible ;

class CATIUnknownList;

/**
 * Interface to query an application component whether an application
 * route or component can be connected. 
 * <b>Role</b>: Defines connection rules.
 */
class CATISchAppCompatible : public IUnknown
{
  public:  

  /**
  * Query whether a route of the input class type
  * can be connected to "this" object (the target, which
  * can be a route or a component).
  * This method is used when routing a route.
  * @param iRouteCntrClassType
  *   Class type of a schematic route connector.
  * @param oLOKCntrs
  *   A list of compatible and available connectors on this object. 
  *   (members are CATISchAppConnector interface pointers)
  * @param oBYes
  *   If TRUE, the object is OK to be connected to a route.
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
  virtual HRESULT AppIsTargetOKForRoute (const char *iRouteCntrClassType,
    CATIUnknownList **oLOKCntrs, CATBoolean *oBYes) = 0;

  /**
  * Query whether a component (source) is compatible to be connected to "this" object 
  * (the target, which can be a route or a component).
  * This method is used when placing a component to be connected to another object.
  * @param iLCompSourceCntrs
  *   A list of connectors on the source component. The target (to be connected)
  *   is "this" component.
  * @param oLOKCntrs
  *   A list of compatible and available connectors on "this" component (the target)
  *   to be connected to the source component (the input source).
  *   (members are CATISchAppConnector interface pointers)
  * @param oBYes
  *   If TRUE, the object is OK to be connected to a route.
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
  virtual HRESULT AppIsTargetOKForPlace (CATIUnknownList *iLCompSourceCntrs,
    CATIUnknownList **oLTargetCntrs, CATBoolean *oBYes) = 0;

  /**
  * Query whether a component (source) is compatible to be inserted into this route.
  * This method is used when inserting a component into a route.
  * This mehtod should only be implemented on a route object. For a component
  * object, the method should simply returns oBYes=FALSE.
  * @param iLCompSourceCntrs
  *   A list of connectors on the source component. The target (to be connected)
  *   is "this" route.
  * @param oLSourceCntrs
  *   A list of compatible and available connectors on the source component (the input)
  *   that can be connected to the target ("this" route)
  *   (members are CATISchAppConnector interface pointers)
  * @param oBYes
  *   If TRUE, the object is OK to be connected to a route.
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
  virtual HRESULT AppIsTargetOKForInsert (CATIUnknownList *iLCompSourceCntrs,
    CATIUnknownList **oLSourceCntrs, CATBoolean *oBYes) = 0;

};
#endif
