#ifndef CATIPspLightPart_H
#define CATIPspLightPart_H

//  COPYRIGHT DASSAULT SYSTEMES 2003
/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "IUnknown.h"
#include "CATLISTV_CATMathPoint.h"

class CATIMovable;

extern "C" const IID IID_CATIPspLightPart;

/**
 * Interface to manage light objects.
 * <b>Role</b>: To access light object data.
 */

class CATIPspLightPart : public IUnknown
{
  public:  
  
  /**
  * Retrieve the points defining the object.
  * @param iRelAxis
  *   The relative axis object (NULL means relative to parent).
  * @param oListPoints
  *   List of points defining object.
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
  virtual HRESULT GetDefinition (const CATIMovable *iRelAxis, 
      CATListValCATMathPoint &oListPoints) = 0;

  /**
  * Set the points defining the light object.
  * @param iRelAxis
  *   The relative axis object (NULL means relative to parent).
  * @param iListPoints
  *   List of points defining object.
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
  virtual HRESULT SetDefinition (const CATIMovable *iRelAxis, 
      const CATListValCATMathPoint &iListPoints) = 0;

};
#endif
