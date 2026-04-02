// COPYRIGHT LMS INTERNATIONAL  2000
// COPYRIGHT DASSAULT SYSTEMES  2000
//=============================================================================
//
// CATSamIMatrix
//
//=============================================================================
//
// Usage Notes: 
//
//=============================================================================
// October 2000   Creation                                                   KD
//=============================================================================
#ifndef CATSamIMatrix_H
#define CATSamIMatrix_H

/**
 * @CAA2Level L0
 * @CAA2Usage U2
 */

#include "CATSamExpression.h"
#include "CATSamI2DSpace.h"

class ExportedByCATSamExpression CATSamIMatrix : public CATSamI2DSpace
{
public:

   /**
    * Returns the X length of the Matrix.
	* @return Length.
	*/
	virtual unsigned int		GetLengthX() const = 0;

   /**
    * Returns the allocated X length of the Matrix.
	* @return Length.
	*/
	virtual unsigned int		GetAllocatedLengthX() const = 0;

   /**
    * Returns the Y length of the Matrix.
	* @return Length.
	*/
	virtual unsigned int		GetLengthY() const = 0;

   /**
    * Returns the allocated Y length of the Matrix.
	* @return Length.
	*/
	virtual unsigned int		GetAllocatedLengthY() const = 0;

   /**
    * Sets the length X of the Matrix.
	* @return HRESULT:
	*   S_OK the set was done correctly.<br>
	*   E_FAIL the set could not be done (e.g. reference count is bigger than 1).
	*/
	virtual HRESULT				SetLengthX(unsigned int iLength) = 0;

   /**
    * Sets the allocated X length of the Matrix.
	* @return HRESULT:
	*   S_OK the set was done correctly.<br>
	*   E_FAIL the set could not be done (e.g. reference count is bigger than 1).
	*/
	virtual HRESULT				SetAllocatedLengthX(unsigned int iLength) = 0;

   /**
    * Sets the length Y of the Matrix.
	* @return HRESULT:
	*   S_OK the set was done correctly.<br>
	*   E_FAIL the set could not be done (e.g. reference count is bigger than 1).
	*/
	virtual HRESULT				SetLengthY(unsigned int iLength) = 0;

   /**
    * Sets the allocated Y length of the Matrix.
	* @return HRESULT:
	*   S_OK the set was done correctly.<br>
	*   E_FAIL the set could not be done (e.g. reference count is bigger than 1).
	*/
	virtual HRESULT				SetAllocatedLengthY(unsigned int iLength) = 0;

   /**
    * Returns the SpaceType of the Matrix.
	* @return CATSamSpace2DType.
	*/
	virtual CATSamSpace2DType	Space2DType() const = 0;

};

#endif
