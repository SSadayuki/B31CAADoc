// COPYRIGHT LMS INTERNATIONAL  2000
// COPYRIGHT DASSAULT SYSTEMES  2000
//=============================================================================
//
// CATSamI2DSpace
//
//=============================================================================
//
// Usage Notes: Abstract Base Class
//
//=============================================================================
// October 2000   Creation                                                   KD
//=============================================================================
#ifndef CATSamI2DSpace_H
#define CATSamI2DSpace_H

/**
 * @CAA2Level L0
 * @CAA2Usage U2
 */

#include "CATSamExpression.h"
#include "CATSamISpace.h"

/**
 * A 2-dimensional space\n
 * Possible Derived classes:\n
 *      CATSamIMatrix       ( indexed through [0..m1,0..m2] )\n
 *      CATSamI2DContinuous ( continuous indexed through [0-m1,0-m2] )\n
 *      CATSamI2DSparse	    ( indexed through something else )\n
 */
class ExportedByCATSamExpression CATSamI2DSpace : public CATSamISpace
{
public:
   /**
    * Returns the type of 2D Space
	* @return Values are CATSamSpace2DType
	*/
	virtual CATSamSpace2DType	Space2DType() const = 0;
};

#endif
