// COPYRIGHT LMS INTERNATIONAL  2000
// COPYRIGHT DASSAULT SYSTEMES  2000
//=============================================================================
//
// CATSamIComplexTensor
//
//=============================================================================
//
// Usage Notes: 
//
//=============================================================================
// October 2000   Creation                                                   KD
//=============================================================================
#ifndef CATSamIComplexTensor_H
#define CATSamIComplexTensor_H

/**
 * @CAA2Level L0
 * @CAA2Usage U2
 */

#include "CATSamExpression.h"
#include "CATSamITensor.h"

class CATMathComplex ;

class ExportedByCATSamExpression CATSamIComplexTensor : public CATSamITensor
{
public:
	
   /**
    * Returns the Complex value at a given position in the Tensor.
	* @return CATMathComplex.
	*/
	virtual CATMathComplex		GetComplexValue( unsigned int iIndex_X, unsigned int iIndex_Y, unsigned int iIndex_Z ) const = 0;

   /**
    * Sets the Complex value at a given position in the Tensor.
	* @return HRESULT:
	*   S_OK the set was done correctly.<br>
	*   E_FAIL the set could not be done because indices are out of bound or reference count is bigger than 1.
	*/
	virtual HRESULT				SetComplexValue( unsigned int iIndex_X, unsigned int iIndex_Y, unsigned int iIndex_Z, const CATMathComplex & iValue ) = 0;

};

#endif

