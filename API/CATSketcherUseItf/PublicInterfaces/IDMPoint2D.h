/* -*-c++-*- */
#ifndef IDMPoint2D_h
#define IDMPoint2D_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATSketcherUseItf.h"

/**
 * OLE for Design and Modeling 2D Point Definition.
 * <b>Role</b>: This interface describes the point in 2D space. The single method
 * provides access to the point's coordinates.
 */

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSketcherUseItf IID IID_IDMPoint2D;
#else
extern "C" const IID IID_IDMPoint2D;
#endif

class ExportedByCATSketcherUseItf IDMPoint2D : public CATBaseUnknown
{
  CATDeclareInterface;

public: 
/**
 * Returns the information that fully describe the point.
 * @param <tt>double *pPoint</tt>
 * [out] Outputs the point coordinates.
 */
  virtual HRESULT GetPointData(double *pPoint) = 0;
};

CATDeclareHandler(IDMPoint2D,CATBaseUnknown);

#endif
