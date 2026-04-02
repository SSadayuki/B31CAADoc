// COPYRIGHT LMS INTERNATIONAL  2000
// COPYRIGHT DASSAULT SYSTEMES  2000
//=============================================================================
//
// CATSamITensor
//
//=============================================================================
//
// Usage Notes: 
//
//=============================================================================
// October 2000   Creation                                                   KD
//=============================================================================
#ifndef CATSamITensor_H
#define CATSamITensor_H

/**
 * @CAA2Level L0
 * @CAA2Usage U2
 */

#include "CATSamExpression.h"
#include "CATSamI3DSpace.h"

class ExportedByCATSamExpression CATSamITensor : public CATSamI3DSpace
{
public:

   /**
    * Returns the X length of the Tensor.
	* @return Length.
	*/
	virtual unsigned int		GetLengthX() const = 0;

   /**
    * Returns the allocated X length of the Tensor.
	* @return Length.
	*/
	virtual unsigned int		GetAllocatedLengthX() const = 0;

   /**
    * Returns the Y length of the Tensor.
	* @return Length.
	*/
	virtual unsigned int		GetLengthY() const = 0;

   /**
    * Returns the allocated Y length of the Tensor.
	* @return Length.
	*/
	virtual unsigned int		GetAllocatedLengthY() const = 0;

   /**
    * Returns the Z length of the Tensor.
	* @return Length.
	*/
	virtual unsigned int		GetLengthZ() const = 0;

   /**
    * Returns the allocated Z length of the Tensor.
	* @return Length.
	*/
	virtual unsigned int		GetAllocatedLengthZ() const = 0;

   /**
    * Sets the length X of the Tensor.
	* @return HRESULT:
	*   S_OK the set was done correctly.<br>
	*   E_FAIL the set could not be done (e.g. reference count is bigger than 1).
	*/
	virtual HRESULT				SetLengthX(unsigned int iLength) = 0;

   /**
    * Sets the allocated X length of the Tensor.
	* @return HRESULT:
	*   S_OK the set was done correctly.<br>
	*   E_FAIL the set could not be done (e.g. reference count is bigger than 1).
	*/
	virtual HRESULT				SetAllocatedLengthX(unsigned int iLength) = 0;

   /**
    * Sets the length X of the Tensor.
	* @return HRESULT:
	*   S_OK the set was done correctly.<br>
	*   E_FAIL the set could not be done (e.g. reference count is bigger than 1).
	*/
	virtual HRESULT				SetLengthY(unsigned int iLength) = 0;

   /**
    * Sets the allocated Y length of the Tensor.
	* @return HRESULT:
	*   S_OK the set was done correctly.<br>
	*   E_FAIL the set could not be done (e.g. reference count is bigger than 1).
	*/
	virtual HRESULT				SetAllocatedLengthY(unsigned int iLength) = 0;

   /**
    * Sets the length X of the Tensor.
	* @return HRESULT:
	*   S_OK the set was done correctly.<br>
	*   E_FAIL the set could not be done (e.g. reference count is bigger than 1).
	*/
	virtual HRESULT				SetLengthZ(unsigned int iLength) = 0;

   /**
    * Sets the allocated Z length of the Tensor.
	* @return HRESULT:
	*   S_OK the set was done correctly.<br>
	*   E_FAIL the set could not be done (e.g. reference count is bigger than 1).
	*/
	virtual HRESULT				SetAllocatedLengthZ(unsigned int iLength) = 0;

   /**
    * Returns the SpaceType of the Tensor.
	* @return CATSamSpace3DType.
	*/
	virtual CATSamSpace3DType	Space3DType() const = 0;

};

#endif
