// COPYRIGHT DASSAULT SYSTEMES  2012

#ifndef CATTPSConstrainingDOF_H
#define CATTPSConstrainingDOF_H

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
* Enum to describe Constraining Degrees Of Freedom for a DRF.
* @param CATTPSConstrainX
*   Translation Movement in x direction is contrained
* @param CATTPSConstrainY
*   Translation Movement in y direction is contrained
* @param CATTPSConstrainZ
*   Translation Movement in z direction is contrained
* @param CATTPSConstrainU
*   Rotation Movement in x direction is contrained
* @param CATTPSConstrainV
*   Rotation Movement in y direction is contrained
* @param CATTPSConstrainW
*   Rotation Movement in z direction is contrained
*/
enum CATTPSConstrainingDOF
{
  CATTPSConstrainX = 1,
  CATTPSConstrainY = (1<<1),
  CATTPSConstrainZ = (1<<2),
  CATTPSConstrainU = (1<<3),
  CATTPSConstrainV = (1<<4),
  CATTPSConstrainW = (1<<5) 
};
#endif
