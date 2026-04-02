#ifndef CATISchMovable_H
#define CATISchMovable_H

//	COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"

class CATIUnknownList;

extern "C" const IID IID_CATISchMovable ;

/**
 * Interface to transform Schematic component objects. 
 * <b>Role</b>: To do transformation such as tranlate, rotate and
 * scale a schematic object.
 */
class CATISchMovable : public IUnknown
{
  public:  
  
  /**
  * Transform a schematic object with a transformation matrix.
  * @param iDb6TransMatrix
  *   Transformation matrix.
  *   See @href CATISchCompLocation#GetTransformation2D 
  *   for explanation of this argument.
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
  virtual HRESULT Transform (const double iDb6TransMatrix[6]) = 0;

  /**
  * Translate a schematic object with a vector.
  * @param iDb2Vector
  *   X-Y components of a translation vector.
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
  virtual HRESULT Translate (const double iDb2Vector[2]) = 0;

  /**
  * Rotate a schematic object with an angle in radian.
  * @param iDb1RotationAngleInRadian
  *   Rotation angle (from x-axis) in radian.
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
  virtual HRESULT Rotate (const double iDb1RotationAngleInRadian) = 0;

  /**
  * Scale a schematic object with a scale factor.
  * @param oDb1ScaleFactor
  *   The current scale factor of the component.
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
  virtual HRESULT Scale (const double iDb1ScaleFactor) = 0;

  /**
  * Scale a list of schematic objects with a scale factor.
  * @param iLCntblToScale
  *   List of selected objects to scale.
  * @param oDb1ScaleFactor
  *   The current scale factor.
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
  virtual HRESULT ScaleSelectedObjects (CATIUnknownList *iLCntblToScale,
    const double iDb1ScaleFactor) = 0;

};
#endif
