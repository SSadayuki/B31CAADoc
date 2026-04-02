#ifndef CATISchMovable2_H
#define CATISchMovable2_H

//	COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"

class CATIUnknownList;

extern "C" const IID IID_CATISchMovable2 ;

/**
 * Interface to transform Schematic component objects. 
 * <b>Role</b>: To do transformation such as rotate schematic
 * objects at point.
 */
class CATISchMovable2 : public IUnknown
{
  public:  

  /**
  * Rotate a schematic object with an angle in radian at a point.
  * @param iDb1RotationAngleInRadian
  *   Rotation angle (from x-axis) in radian.
  * @param iDb2CenterPoint
  *   X-Y components of a center point of rotation.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>CATReturnSuccess</dt>
  *     <dd>operation is successful</dd>
  *     <dt>CATReturnFailure</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT RotateAtPoint (const double iDb1RotationAngleInRadian, 
    const double iDb2CenterPoint[2]) = 0;

};
#endif
