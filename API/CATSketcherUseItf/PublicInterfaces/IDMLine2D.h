/* -*-c++-*- */
#ifndef IDMLine2D_h
#define IDMLine2D_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATSketcherUseItf.h"

/**
 * OLE for Design and Modeling 2D Line Definition.
 * <b>Role</b>: This interface describes the line in 2D space. The single method
 * provides access to the line's parameters, which fully describe the line.
 */

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSketcherUseItf IID IID_IDMLine2D;
#else
extern "C" const IID IID_IDMLine2D;
#endif

class ExportedByCATSketcherUseItf IDMLine2D : public CATBaseUnknown
{
  CATDeclareInterface;

public:                                      

/**
 * Returns the information that fully describe the infinite line
 * @param <tt>double *pRootPoint</tt>
 * [out] Outputs a point lying on the line.
 * @param <tt>double *pDirection</tt>
 * [out] Outputs the unit vector pointing in the direction of the line.
 */
  virtual HRESULT GetLineData(double *pRootPoint, double *pDirection) = 0;
};

CATDeclareHandler(IDMLine2D,CATBaseUnknown);

#endif
