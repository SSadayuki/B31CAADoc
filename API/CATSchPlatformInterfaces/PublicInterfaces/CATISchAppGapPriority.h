#ifndef CATISchAppGapPriority_H
#define CATISchAppGapPriority_H

//	COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"

// CATSchPlatformInterfaces
#include "CATSchGeneralEnum.h"
class CATISchRoute;

extern "C" const IID IID_CATISchAppGapPriority ;

/**
 * Interface to define the application route gap priority rules. 
 * <b>Role</b>: To identity the gap priority between 2 intersecting
 * routes.
 */

class CATISchAppGapPriority : public IUnknown
{
  public:  
  
  /**
  * Identify which of 2 intersecting routes should be gapped.
  * @param iTheOtherRoute
  *   The route intersecting This route.
  * @param oPriority
  *   Gap Priority.
  *   @see CATSchGapPriority
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
  virtual HRESULT AppChooseGapPriority (CATISchRoute *iTheOtherRoute,
    CATSchGapPriority *oPriority) = 0;
};

#endif
