#ifndef CATEASchAppCntrColor_H
#define CATEASchAppCntrColor_H

// COPYRIGHT DASSAULT SYSTEMES  2001 +

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */

// System
#include "CATSchItfCPP.h"
#include "CATBaseUnknown.h"

/**
 * Super class to be derived for implementation of interface CATISchAppCntrColor.
 * <b>Role</b>: Adaptor
 */

class ExportedByCATSchItfCPP CATEASchAppCntrColor : public CATBaseUnknown
{
  public:

  CATDeclareClass;

  /**
   * Constructs an empty CATEASchAppCntrColor.
   */
  CATEASchAppCntrColor();
  virtual ~CATEASchAppCntrColor();
  
  /**
  * ISpecify the connector color of this connector type.
  * @param oColor
  *   Application connector color for "this" connector type
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
  virtual HRESULT AppGetConnectorColorByType (unsigned int *oColor);

  private:

  CATEASchAppCntrColor (const CATEASchAppCntrColor &);
  CATEASchAppCntrColor &operator = (const CATEASchAppCntrColor &);
};
#endif


