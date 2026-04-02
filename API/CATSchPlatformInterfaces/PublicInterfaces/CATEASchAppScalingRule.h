#ifndef CATEASchAppScalingRule_H
#define CATEASchAppScalingRule_H

// COPYRIGHT DASSAULT SYSTEMES  2001 +

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */

// System
#include "CATSchItfCPP.h"
#include "CATBaseUnknown.h"

/**
 * Super class to be derived for implementation of interface CATISchAppScalingRule.
 * <b>Role</b>: Adaptor
 */

class ExportedByCATSchItfCPP CATEASchAppScalingRule : public CATBaseUnknown
{
  public:

  CATDeclareClass;

  /**
   * Constructs an empty CATEASchAppScalingRule.
   */
  CATEASchAppScalingRule();
  virtual ~CATEASchAppScalingRule();
  
  /**
  * Get a priority number to indicate the adjustment (moving)
  * priority of this object during scaling.  
  * @param oPriority
  *   1 to 99.  The lower the number, the higher the processing
  *   priority. For example, an object with priority 1 is processed
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
  virtual HRESULT AppGetScalingPriority (int *oPriority);

  private:

  CATEASchAppScalingRule (const CATEASchAppScalingRule &);
  CATEASchAppScalingRule &operator = (const CATEASchAppScalingRule &);
};
#endif
