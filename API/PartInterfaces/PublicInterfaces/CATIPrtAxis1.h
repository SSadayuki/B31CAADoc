/* -*-c++-*- */
#ifndef CATIPrtAxis1_H
#define CATIPrtAxis1_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include <PartItf.h>
#include <CATBaseUnknown.h>

#include <CATMathPoint.h>
#include <CATMathDirection.h>

class CATISpecObject_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPartItf IID IID_CATIPrtAxis1;
#else
extern "C" const IID IID_CATIPrtAxis1;
#endif

/**
 * Interface which provides a direction management behaviour to an axis feature.
 * <b>Role</b>: Some features contain an axis component which allows users to specify 
 * and use a direction. This internal feature is managed through this interface.
 */
class ExportedByPartItf CATIPrtAxis1 : public CATBaseUnknown
{
  CATDeclareInterface;

  public: 

/** 
 * @nodoc
 * Do not use.
 */
  virtual CATMathPoint GetOrigin() const = 0;

/** 
 * @nodoc 
 * Do not use.
 */
  virtual void SetOrigin(const CATMathPoint& Origin) = 0;


/**
 * Returns the mathematical direction.
 * @return
 *   The direction vector. 
 */
  virtual CATMathVector GetDirection() const = 0;

/**
 * Returns the reference element which specifies the direction.
 * @return
 *   The reference element.
 */
  virtual CATISpecObject_var GetDirReference() const = 0;

/**
 * Sets an absolute direction as specification.
 * @param iDirection
 *   The direction vector.
 */
  virtual void SetDirection(const CATMathVector& iDirection) = 0;

/**
 * Sets a reference element as direction specification.
 * @param ihDirection
 *   The reference element.
 */
  virtual void SetDirection(const CATISpecObject_var& ihDirection) = 0;


/**
 * Tests whether the direction is opposite to the reference one or not.
 * @return
 *   0 if the direction is the same,
 *   1 if the direction has been reversed.
 */
  virtual int IsReversed() = 0;

/**
 * Reverses the specified direction.
 */
  virtual void ReverseDirection() = 0;
};

CATDeclareHandler (CATIPrtAxis1, CATBaseUnknown); 

#endif // CATIPrtAxis1_H



