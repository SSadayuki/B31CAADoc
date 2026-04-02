#ifndef CATISchAppReplace_H
#define CATISchAppReplace_H

//	COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1
 * @CAA2Usage U4 CATEASchAppReplace
 */

// System
#include "IUnknown.h"
#include "CATBoolean.h"


extern "C" const IID IID_CATISchAppReplace ;

/**
 * Interface to manage replacing existing application object with another. 
 * Application must derived implementation of this interface 
 * from CATEASchAppReplace.
 * <b>Role</b>: replace application object with another.
 * <p><b>BOA information</b>: this interface CANNOT be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page.
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 */
class CATISchAppReplace : public IUnknown
{
  public:  

  /**
  * Query whether it is OK to replace an existing object (component, route...)
  * with this object.
  * @param iSchObjectToBeReplacedByThis
  *   Pointer to the existing object to be replaced by this object. 
  * @param oBYes
  *   If TRUE, then it is OK to replace the object.
  */
  virtual HRESULT AppOKToReplace (const IUnknown *iSchObjectToBeReplacedByThis,
    CATBoolean *oBYes) = 0;

  /**
  * Post process after replacing an object.
  * @param iNewObject
  *   The new Application object
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
	virtual HRESULT AppPostReplaceProcess (const IUnknown *iSchObjectToBeReplacedByThis) = 0;
};
#endif
