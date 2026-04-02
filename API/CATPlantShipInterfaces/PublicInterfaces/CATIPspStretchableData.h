#ifndef CATIPspStretchableData_H
#define CATIPspStretchableData_H

// COPYRIGHT Dassault Systemes 2004
/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "IUnknown.h"
#include "CATListOfDouble.h"
#include "CATLISTV_CATMathPoint.h"

class CATIMovable;
class CATMathPoint;

extern "C" const IID IID_CATIPspStretchableData ;

/**
 * Interface to manage the technological data on stretchable objects.
 * <b>Role</b>: To access the technological data on stretchable objects.
 */

class CATIPspStretchableData: public IUnknown
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
  virtual HRESULT ListDefinitionPoints (const CATIMovable *iRelAxis, 
      CATListValCATMathPoint &oListPoints) = 0;

  /**
  * Retrieve the bend radii.
  * @param oListOfBendRadius
  *   List of bend radius.
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
  virtual HRESULT ListBendData (CATListOfDouble &oListOfBendRadius) = 0;

};

#endif
