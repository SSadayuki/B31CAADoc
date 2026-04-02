// COPYRIGHT LMS INTERNATIONAL  2000
// COPYRIGHT DASSAULT SYSTEMES  2000
//=============================================================================
//
// CATSamI1DSpace
//
//=============================================================================
//
// Usage Notes: Abstract Base Class
//
//=============================================================================
// October 2000   Creation                                                   KD
//=============================================================================
#ifndef CATSamI1DSpace_H
#define CATSamI1DSpace_H

/**
 * @CAA2Level L0
 * @CAA2Usage U2
 */

#include "CATSamExpression.h"
#include "CATSamISpace.h"

/**
 * A 1-dimensional space\n
 * Possible Derived classes:\n
 *      CATSamIVector		( indexed through [0,1,2..m] )\n
 *      CATSamI1DContinuous ( continuous indexed through [0-m] )\n
 *      CATSamI1DSparse		( indexed through something else )\n
 */
class ExportedByCATSamExpression CATSamI1DSpace : public CATSamISpace
{
public:
   /**
    * Returns the type of 1D Space
	* @return Values are CATSamSpace1DType
	*/
	virtual CATSamSpace1DType	Space1DType() const = 0;
};

#endif
