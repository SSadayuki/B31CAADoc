// COPYRIGHT LMS INTERNATIONAL  2000
// COPYRIGHT DASSAULT SYSTEMES  2000
//=============================================================================
//
// CATSamI3DSpace
//
//=============================================================================
//
// Usage Notes: Abstract Base Class
//
//=============================================================================
// October 2000   Creation                                                   KD
//=============================================================================
#ifndef CATSamI3DSpace_H
#define CATSamI3DSpace_H

/**
 * @CAA2Level L0
 * @CAA2Usage U2
 */

#include "CATSamExpression.h"
#include "CATSamISpace.h"

/**
 * A 3-dimensional space\n
 * Possible Derived classes:\n
 *      CATSamITensor       ( indexed through [0..m1,0..m2,0..m3] )\n
 *      CATSamI3DContinuous ( continuous indexed through [0-m1,0-m2,0-m3] )\n
 *      CATSamI3DSparse	    ( indexed through something else )\n
 */
class ExportedByCATSamExpression CATSamI3DSpace : public CATSamISpace
{
public:
   /**
    * Returns the type of 3D Space
	* @return Values are CATSamSpace3DType
	*/
	virtual CATSamSpace3DType	Space3DType() const = 0;

};

#endif
