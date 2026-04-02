#ifndef CATEASchAppReplace_H
#define CATEASchAppReplace_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */

// System
#include "CATBaseUnknown.h"
#include "CATSchItfCPP.h"

#include "CATBooleanDef.h"

/**
 * Super class to derive implementation for interface CATISchAppReplace.
 * <b>Role</b>: Adaptor
 */

class ExportedByCATSchItfCPP CATEASchAppReplace : public CATBaseUnknown
{
  public:  

  CATDeclareClass;

  /**
   * Constructs an empty CATEASchAppReplace.
   */
  CATEASchAppReplace();
  virtual ~CATEASchAppReplace();

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
    CATBoolean *oBYes);

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
	virtual HRESULT AppPostReplaceProcess (const IUnknown *iSchObjectToBeReplacedByThis);

  private:
  // do not implement
  CATEASchAppReplace (CATEASchAppReplace &);
  CATEASchAppReplace& operator=(CATEASchAppReplace&);

};

#endif


