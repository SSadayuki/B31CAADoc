// COPYRIGHT LMS INTERNATIONAL  2000
// COPYRIGHT DASSAULT SYSTEMES  2000
//=============================================================================
//
// CATSamIComplexVector
//
//=============================================================================
//
// Usage Notes: 
//
//=============================================================================
// October 2000   Creation                                                   KD
//=============================================================================
#ifndef CATSamIComplexVector_H
#define CATSamIComplexVector_H

/**
 * @CAA2Level L0
 * @CAA2Usage U2
 */

#include "CATSamExpression.h"
#include "CATSamIVector.h"

class CATMathComplex ;

class ExportedByCATSamExpression CATSamIComplexVector : public CATSamIVector
{
public:

   /**
    * Returns the Complex value at a given position in the Vector.
	* @return CATMathComplex.
	*/
	virtual CATMathComplex			GetComplexValue( unsigned int iIndex ) const = 0;

   /**
    * Sets the Complex value at a given position in the Vector.
	* @return HRESULT:
	*   S_OK the set was done correctly.<br>
	*   E_FAIL the set could not be done because the index is out of bound or reference count is bigger than 1
	*	or Vector is an Equidistant Vector.
	*/
	virtual HRESULT					SetComplexValue( unsigned int iIndex, const CATMathComplex & iValue ) = 0;

};

#endif
