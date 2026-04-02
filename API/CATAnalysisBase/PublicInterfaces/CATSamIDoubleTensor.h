// COPYRIGHT LMS INTERNATIONAL  2000
// COPYRIGHT DASSAULT SYSTEMES  2000
//=============================================================================
//
// CATSamIDoubleTensor
//
//=============================================================================
//
// Usage Notes: 
//
//=============================================================================
// October 2000   Creation                                                   KD
//=============================================================================
#ifndef CATSamIDoubleTensor_H
#define CATSamIDoubleTensor_H

/**
 * @CAA2Level L0
 * @CAA2Usage U2
 */

#include "CATSamExpression.h"
#include "CATSamITensor.h"

class ExportedByCATSamExpression CATSamIDoubleTensor : public CATSamITensor
{
public:
	
   /**
    * Returns the double value at a given position in the Tensor.
	* @return double.
	*/
	virtual double				GetDoubleValue( unsigned int iIndex_X, unsigned int iIndex_Y, unsigned int iIndex_Z ) const = 0;

   /**
    * Sets the double value at a given position in the Tensor.
	* @return HRESULT:
	*   S_OK the set was done correctly.<br>
	*   E_FAIL the set could not be done because indices are out of bound or reference count is bigger than 1.
	*/
	virtual HRESULT				SetDoubleValue( unsigned int iIndex_X, unsigned int iIndex_Y, unsigned int iIndex_Z, double iValue ) = 0;

};

#endif

