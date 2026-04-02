#ifndef CATISchZoneMembership_H
#define CATISchZoneMembership_H

//	COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// System
#include "IUnknown.h"

extern "C" const IID IID_CATISchZoneMembership ;

/**
 * Interface to manage a Schematic zone member object. 
 * <b>Role</b>: Defines Schematic zone member object behaviors
 */
class CATISchZoneMembership : public IUnknown
{
  public:
  
  /**
  * Check all zones geometric boundaries and put this element into the correct
  * zone membership lists.
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
  virtual HRESULT UpdateZoneMembership () = 0;

};
#endif
