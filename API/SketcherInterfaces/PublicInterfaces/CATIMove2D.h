/* -*-c++-*- */
#ifndef CATIMove2D_h
#define CATIMove2D_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
class CATListValCATBaseUnknown_var;
class CATMathTransformation2D;

/**
 * Geometric transformation of 2D elements.
 * <b>Role</b>: This interface is used to transform 2D elements onto their
 * background plane. The method @href CATIMove2D#GetMovable gives the list
 * of elements which have to be transformated to transform the element
 * itself.
 * BeforeMove() and AfterMove() are new methods to improve behavior of 
 * 2D transformation. 
 */

#include "CATSketcherInterfaces.h"
ExportedByCATSketcherInterfaces extern IID IID_CATIMove2D;

class ExportedByCATSketcherInterfaces CATIMove2D : public CATBaseUnknown
{
  CATDeclareInterface;
  
public:

  /**
   * Allows to take any kind of measure before moving.
   */
  virtual HRESULT BeforeMove() = 0;
  /**
   * Geometric transformation of 2D elements.
   * @param <tt>CATMathTransformation2D &ioTransfo</tt>
   * [inout] The 2D transformation list of handlers corresponding to the expected family.
   */
  virtual void Move(CATMathTransformation2D &ioTransfo) = 0;
  /**
   * Allows to restore normal behavior after moving.
   */
  virtual HRESULT AfterMove() = 0;
  /**
   * Gives the list of elements which have to be transformated to transform the
   * element itself.
   * @return <tt>CATLISTV(CATBaseUnknown_var)</tt>
   * The list of handlers corresponds to the family which has to be transformed.
   */
  virtual CATListValCATBaseUnknown_var GetMovable() = 0;
  
  
};

CATDeclareHandler(CATIMove2D, CATBaseUnknown);

#endif
