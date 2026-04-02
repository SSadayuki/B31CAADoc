// COPYRIGHT LMS INTERNATIONAL  2000
// COPYRIGHT DASSAULT SYSTEMES  2000
//=============================================================================
//
// CATSamIEquidistantIntVector
//
//=============================================================================
//
// Usage Notes: 
//
//=============================================================================
// October 2000   Creation                                                   KD
//=============================================================================
#ifndef CATSamIEquidistantIntVector_H
#define CATSamIEquidistantIntVector_H

/**
 * @CAA2Level L0
 * @CAA2Usage U2
 */

#include "CATSamExpression.h"
#include "CATSamIIntVector.h"

class ExportedByCATSamExpression CATSamIEquidistantIntVector : public CATSamIIntVector
{
public:

   /**
    * Returns the int value at a given position in the Vector.
	* @return int.
	*/
	virtual int						GetIntValue( unsigned int iIndex ) const = 0;

   /**
    * Returns the length of the Vector.
	* @return Length.
	*/
	virtual unsigned int			GetAllocatedLength() const = 0;

   /**
    * Returns the value at the first position in the vector ( = Vector[0]).
	* @return int.
	*/
	virtual int						GetStart() const = 0;

   /**
    * Returns the step value ( = Vector[n+1]-Vector[n], for all n<Length-1 and n>=0).
	* @return int.
	*/
	virtual int						GetStep() const = 0;

   /**
    * Sets the start value.
	* @return HRESULT:
	*	S_OK if succeeded.
	*	E_FAIL is failed (e.g. Reference count > 1).
	*/
	virtual HRESULT					SetStart( int iStart ) = 0;

   /**
    * Sets the step value.
	* @return HRESULT:
	*	S_OK if succeeded.
	*	E_FAIL is failed (e.g. Reference count > 1).
	*/
	virtual HRESULT					SetStep( int iStep) = 0;

   /**
    * Sets the length.
	* @return HRESULT:
	*	S_OK if succeeded.
	*	E_FAIL is failed (e.g. Reference count > 1).
	*/
	virtual HRESULT					SetAllocatedLength( unsigned int iLength ) = 0;

};

#endif
