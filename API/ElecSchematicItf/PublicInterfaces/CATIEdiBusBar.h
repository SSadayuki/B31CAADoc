#ifndef CATIEdiBusBar_H
#define CATIEdiBusBar_H
//	COPYRIGHT DASSAULT SYSTEMES 2001

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

/**
 * @deprecated V5R14
 * <br> This interface has been deleted and not implemented.
 */
#include "IUnknown.h"

class CATIEdiWidePin;

extern "C" const IID IID_CATIEdiBusBar;

/**
 * Interface to manage an electrical schematic Cable Extremity.
 * <b>Role</b>:This interfaces describes the electrical object Cable Extremity.   
 */
class CATIEdiBusBar : public IUnknown
{
  
 public:

  /**
   * Gets Logical Wide Pin Connector.
   *
   * @param oEdiWidePin
   *   The Wide Pin
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
  virtual HRESULT GetWidePin (CATIEdiWidePin** oEdiWidePin) = 0;
};
#endif




