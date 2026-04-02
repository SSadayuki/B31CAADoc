#ifndef CATISchZone_H
#define CATISchZone_H

//	COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// System
#include "IUnknown.h"

extern "C" const IID IID_CATISchZone ;

/**
 * Interface to manage a Schematic zone object. 
 * <b>Role</b>: Defines Schematic zone object behaviors
 */
class CATISchZone : public IUnknown
{
  public:
  
  /**
  * Update the zone members based on the current zone boundaries.
  * @param iGRRToAdd
  *   The graphical representation to be added to the zone.
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
  virtual HRESULT UpdateBoundedElements () = 0;

};
#endif
