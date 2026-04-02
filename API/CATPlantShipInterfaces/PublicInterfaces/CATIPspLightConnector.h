#ifndef CATIPspLightConnector_H
#define CATIPspLightConnector_H

//	COPYRIGHT DASSAULT SYSTEMES 2003
/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "IUnknown.h"

class CATIMovable;
class CATMathDirection;
class CATMathPoint;

extern "C" const IID IID_CATIPspLightConnector;

/**
 * Interface to manage light connectors.
 * <b>Role</b>: To access light connector data.
 */

class CATIPspLightConnector : public IUnknown
{
  public:  
  
  /**
  * Retrieve the CATMathPoint of the position of the connector.
  * @param iRelAxis
  *   The relative axis object (NULL means relative to parent).
  * @param oOrigin
  *   The position as CATMathPoint.
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
  virtual HRESULT GetOrigin (const CATIMovable *iRelAxis, 
	  CATMathPoint &oOrigin) = 0;

  /**
  * Set the position of the connector.
  * @param iRelAxis
  *   The relative axis object (NULL means relative to parent).
  * @param iOrigin
  *   The position as CATMathPoint.
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
  virtual HRESULT SetOrigin (const CATIMovable *iRelAxis, 
	  const CATMathPoint &iOrigin) = 0;

  /**
  * Retrieve the alignment direction of the connector.
  * @param iRelAxis
  *   The relative axis object (NULL means relative to parent).
  * @param oAlignmentDirection
  *   The align direction as CATMathDirection.
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
  virtual HRESULT GetAlignmentVector (const CATIMovable *iRelAxis, 
	  CATMathDirection &oAlignmentDirection) = 0;

  /**
  * Set the alignment direction of the connector.
  * @param iRelAxis
  *   The relative axis object (NULL means relative to parent).
  * @param iAlignmentDirection
  *   The alignment direction as CATMathDirection.
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
  virtual HRESULT SetAlignmentVector (const CATIMovable *iRelAxis, 
	  const CATMathDirection &iAlignmentDirection) = 0;

  /**
  * Retrieve the orientation direction of the connector.
  * @param iRelAxis
  *   The relative axis object (NULL means relative to parent).
  * @param oOrientationDirection
  *   The orientation direction as CATMathDirection.
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
  virtual HRESULT GetOrientationVector (const CATIMovable *iRelAxis, 
	  CATMathDirection &oOrientationVectorDirection) = 0;

  /**
  * Set the orientation direction of the connector.
  * @param iRelAxis
  *   The relative axis object (NULL means relative to parent).
  * @param iOrientationDirection
  *   The orientation direction as CATMathDirection.
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
  virtual HRESULT SetOrientationVector (const CATIMovable *iRelAxis, 
	  const CATMathDirection &iOrientationDirection) = 0;

};
#endif
