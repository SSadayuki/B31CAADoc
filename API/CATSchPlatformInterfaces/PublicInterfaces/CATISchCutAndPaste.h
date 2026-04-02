#ifndef CATISchCutAndPaste_H
#define CATISchCutAndPaste_H

//	COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"

class CATRep;

extern "C" const IID IID_CATISchCutAndPaste ;

/**
 * Interface to provide Cut/Delete/Copy/Paste behavior on 
 * Schematic basic set of objects. 
 * <b>Role</b>: To be called by CATICutAndPastable implementation on the
 * base object with Schematic extensions
 */
class CATISchCutAndPaste : public IUnknown
{
  public:   
  
  /**
  * LifeCycleObject interface: remove object behavior of Schematic object.
  * @param iForCloseContext
  *   refer to LifeCycleObject interface
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
  virtual HRESULT remove ( int iForCloseContext ) = 0;

};
#endif
