// COPYRIGHT LMS INTERNATIONAL  2000
// COPYRIGHT DASSAULT SYSTEMES  2000
//=============================================================================
//
// CATSamIVector
//
//=============================================================================
//
// Usage Notes: 
//
//=============================================================================
// October 2000   Creation                                                   KD
//=============================================================================
#ifndef CATSamIVector_H
#define CATSamIVector_H

/**
 * @CAA2Level L0
 * @CAA2Usage U2
 */

#include "CATSamExpression.h"
#include "CATSamI1DSpace.h"

class ExportedByCATSamExpression CATSamIVector : public CATSamI1DSpace
{
public:

	enum MonotonuousStatus { Unknown, MonotonuousIncreasing, MonotonuousDecreasing, NoOrder };

   /**
    * Returns the length of the Vector.
	* @return Length.
	*/
	virtual unsigned int			GetLength() const = 0;

   /**
    * Returns the allocated length of the Vector.
	* @return Length.
	*/
	virtual unsigned int			GetAllocatedLength() const = 0;

   /**
    * Sets the length of the Vector.
	* @return HRESULT:
	*   S_OK the set was done correctly.<br>
	*   E_FAIL the set could not be done (e.g. reference count is bigger than 1).
	*/
	virtual HRESULT					SetLength(unsigned int iLength) = 0;

   /**
    * Sets the allocated length of the Vector.
	* @return HRESULT:
	*   S_OK the set was done correctly.<br>
	*   E_FAIL the set could not be done (e.g. reference count is bigger than 1).
	*/
	virtual HRESULT					SetAllocatedLength(unsigned int iLength) = 0;

   /**
    * Returns the SpaceVectorType of the Vector.
	* @return CATSamSpaceVectorType.
	*/
	virtual CATSamSpaceVectorType	VectorType() const = 0;

   /**
    * Sets the SpaceVectorType of the Vector.
	* @return HRESULT:
	*   S_OK the set was done correctly.<br>
	*   E_FAIL the set could not be done (e.g. reference count is bigger than 1).
	*/
	virtual HRESULT					SetVectorType(CATSamSpaceVectorType iVectorType) = 0;

   /**
    * Returns the MonotonuousStatus of the Vector.
	* @return MonotonuousStatus.
	*/
	virtual MonotonuousStatus		GetMonotonuousStatus() const = 0;

   /**
    * Sets MonotonuousStatus.
	* @return HRESULT:
	*   S_OK the set was done correctly.<br>
	*   E_FAIL the set could not be done (e.g. reference count is bigger than 1).
	*/
	virtual HRESULT					SetMonotonuousStatus(MonotonuousStatus = Unknown ) = 0;

};

#endif
