// COPYRIGHT LMS INTERNATIONAL  2000
// COPYRIGHT DASSAULT SYSTEMES  2000
//=============================================================================
//
// CATSamIStringVector
//
//=============================================================================
//
// Usage Notes: 
//
//=============================================================================
// March 2001   Creation                                                     KD
//=============================================================================
#ifndef CATSamIStringVector_H
#define CATSamIStringVector_H

/**
 * @CAA2Level L0
 * @CAA2Usage U2
 */

#include "CATSamExpression.h"
#include "CATSamIVector.h"
#include "CATString.h"

class CATSamIStringVector : public CATSamIVector
{
public:

   /**
    * Returns the string at a given position in the Vector.
	* @return double.
	*/
	virtual const CATString			GetStringValue( unsigned int iIndex ) const = 0;

   /**
    * Sets the string at a given position in the Vector.
	* @return HRESULT:
	*   S_OK the set was done correctly.<br>
	*   E_FAIL the set could not be done because the index is out of bound or reference count is bigger than 1
	*/
	virtual HRESULT					SetStringValue( unsigned int iIndex, const CATString ) =0;

};

#endif
