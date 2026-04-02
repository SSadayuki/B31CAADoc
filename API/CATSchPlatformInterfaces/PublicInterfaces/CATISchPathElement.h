#ifndef CATISchPathElement_H
#define CATISchPathElement_H

//	COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"

class CATISchGRR;

extern "C" const IID IID_CATISchPathElement ;

/**
 * Interface to manage selected Schematic basic set of 
 * objects in CATPathElement.
 * <b>Role</b>: To find specific schematic interfaces from CATPathElement.
 */
class CATISchPathElement : public IUnknown
{
  public:   
  
  /**
  * Get the schematic object and its' graphical representation
  * that support a specific interface.
  * @param iIID
  *   Interface identifier.
  * @param oSchIntf
  *   Schematic basic set of objects that provides implementation
  *   to the input interface.
  * @param oGRR
  *   Graphic representation or primitives of Schematic basic set of objects 
  *   that provides implementation to the input interface.
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
  virtual HRESULT FindInterface (const IID &iIID, 
    void **oSchIntf, CATISchGRR **oGRR) = 0;
};
#endif
