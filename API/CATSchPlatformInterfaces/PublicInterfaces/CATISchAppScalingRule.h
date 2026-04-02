#ifndef CATISchAppScalingRule_H
#define CATISchAppScalingRule_H

//	COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U4 CATEASchAppScalingRule
 */

// System
#include "IUnknown.h"

extern "C" const IID IID_CATISchAppScalingRule ;

/**
 * Interface to provide scaling rules.
 * Application must derived implementation of this interface 
 * from CATEASchAppScalingRule.
 * <b>Role</b>: Defines rules for scaling a component.
 * <p><b>BOA information</b>: this interface CANNOT be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page.
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 */
class CATISchAppScalingRule : public IUnknown
{
  public:
  
  /**
  * Get a priority number to indicate the adjustment (moving)
  * priority of this object during scaling.
  * @param oPriority
  *   1 to 99.  The lower the number, the higher the processing
  *   priority.  For example, an object with priority 1 is processed
  *   first and will not move while connected objects adjust. 
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
  virtual HRESULT AppGetScalingPriority (int *oPriority) = 0;

};
#endif
