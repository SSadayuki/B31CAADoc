/* -*-c++-*- */
#ifndef CATI2DConstraint_h
#define CATI2DConstraint_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATISketch.h"
#include "CAT2DCstType.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSketcherInterfaces IID IID_CATI2DConstraint;
#else
extern "C" const IID IID_CATI2DConstraint;
#endif

class ExportedByCATSketcherInterfaces CATI2DConstraint : public CATBaseUnknown
{
  CATDeclareInterface;

public: 
  /**
   * @nodoc
   */
  virtual CATISketch_var GetSketch() = 0;
  /**
   * Returns the kind of the 2D constraint.
   * @return <tt>CAT2DCstType</tt>
   * [out] The expected 2D constraint type.
   */
  virtual CAT2DCstType Get2DCstType() = 0;
  /**
   * Swap the orientation 2D constraint.
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT SwapChirality() = 0;
};

CATDeclareHandler(CATI2DConstraint,CATBaseUnknown);

#endif
