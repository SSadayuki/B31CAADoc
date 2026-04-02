/* -*-c++-*- */
#ifndef IDMCircle2D_h
#define IDMCircle2D_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATSketcherUseItf.h"

/**
 * OLE for Design and Modeling 2D Circle Definition.
 * <b>Role</b>: This interface describes a circle in 2D space. Its single method
 * provides access to the circle's parameters, which fully describe the circle.
 */

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSketcherUseItf IID IID_IDMCircle2D;
#else
extern "C" const IID IID_IDMCircle2D;
#endif

class ExportedByCATSketcherUseItf IDMCircle2D : public CATBaseUnknown
{
  CATDeclareInterface;

public:                                      

/**
 * Returns the circle's parameters.
 * @param <tt>double *pCenterPoint</tt>
 * [out] Outputs the centre of the circle.
 * @param <tt>double *pRadius</tt>
 * [out] Outputs the radius of the circle.
 */
  virtual HRESULT GetCircleData(double *pCenterPoint, double *pRadius) = 0;
};

CATDeclareHandler(IDMCircle2D,CATBaseUnknown);

#endif
