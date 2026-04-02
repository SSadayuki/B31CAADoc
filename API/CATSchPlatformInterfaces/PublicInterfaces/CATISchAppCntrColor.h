#ifndef CATISchAppCntrColor_H
#define CATISchAppCntrColor_H

//	COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U4 CATEASchAppCntrColor
 */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"

// CATSchPlatformInterfaces
#include "CATSchGeneralEnum.h"

extern "C" const IID IID_CATISchAppCntrColor ;

/**
 * Interface to define the application connector color. 
 * Applications must derive implementation of this interface 
 * from the adapter class CATEASchAppCntrColor.
 * <b>Role</b>: To specify the application connector by class type.
 * <p><b>BOA information</b>: this interface CANNOT be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page.
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 */

class CATISchAppCntrColor : public IUnknown
{
  public:  
  
  /**
  * Specify the connector color of this connector type.
  * @param oColor
  *   Application connector color for "this" connector type.
  *   Please refer to CATColorName.h of Visualization FW.
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
  virtual HRESULT AppGetConnectorColorByType (unsigned int *oColor) = 0;
};

#endif


