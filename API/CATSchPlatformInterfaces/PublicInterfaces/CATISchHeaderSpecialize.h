#ifndef CATISchHeaderSpecialize_H
#define CATISchHeaderSpecialize_H

//	COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"

extern "C" const IID IID_CATISchHeaderSpecialize ;

/**
 * Interface to manage callback associated to command header.
 * <b>Role</b>: To start and clean callback.
 */
class CATISchHeaderSpecialize : public IUnknown
{
  public:

  /**
  * Set callback in order to intercept events as soon as the command header
  * is activated.
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
  virtual HRESULT StartCallback ()  = 0 ;

  /**
  * Remove all the callbacks when the command header is deactivated.
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
  virtual HRESULT CleanCallback ()  = 0 ;
};
#endif
