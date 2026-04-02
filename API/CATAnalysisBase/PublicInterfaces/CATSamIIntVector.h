// COPYRIGHT LMS INTERNATIONAL  2000
// COPYRIGHT DASSAULT SYSTEMES  2000
//=============================================================================
//
// CATSamIIntVector
//
//=============================================================================
//
// Usage Notes: 
//
//=============================================================================
// October 2000   Creation                                                   KD
//=============================================================================
#ifndef CATSamIIntVector_H
#define CATSamIIntVector_H

/**
 * @CAA2Level L0
 * @CAA2Usage U2
 */

#include "CATSamExpression.h"
#include "CATSamIVector.h"

class CATSamStream ;

class ExportedByCATSamExpression CATSamIIntVector : public CATSamIVector
{
public:

   /**
    * Returns the int value at a given position in the Vector.
	* @return int.
	*/
	virtual int						GetIntValue( unsigned int iIndex ) const = 0;
	
   /**
    * Sets the int value at a given position in the Vector.
	* @return HRESULT:
	*   S_OK the set was done correctly.<br>
	*   E_FAIL the set could not be done because the index is out of bound or reference count is bigger than 1
	*	or Vector is an Equidistant Vector.
	*/
	virtual HRESULT					SetIntValue( unsigned int iIndex, int iValue ) =0;

};

#endif

