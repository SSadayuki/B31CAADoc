// COPYRIGHT LMS INTERNATIONAL  2000
// COPYRIGHT DASSAULT SYSTEMES  2000
//=============================================================================
//
// CATSamIDoubleVector
//
//=============================================================================
//
// Usage Notes: 
//
//=============================================================================
// October 00   Creation                                                     KD
//=============================================================================
#ifndef CATSamIDoubleVector_H
#define CATSamIDoubleVector_H

/**
 * @CAA2Level L0
 * @CAA2Usage U2
 */

#include "CATSamExpression.h"
#include "CATSamIVector.h"

class ExportedByCATSamExpression CATSamIDoubleVector : public CATSamIVector
{
public:

   /**
    * Returns the double value at a given position in the Vector.
	* @return double.
	*/
	virtual double					GetDoubleValue( unsigned int iIndex ) const = 0;

   /**
    * Sets the double value at a given position in the Vector.
	* @return HRESULT:
	*   S_OK the set was done correctly.<br>
	*   E_FAIL the set could not be done because the index is out of bound or reference count is bigger than 1
	*	or Vector is an Equidistant Vector.
	*/
	virtual HRESULT					SetDoubleValue( unsigned int iIndex, double iValue ) =0;

};

#endif
