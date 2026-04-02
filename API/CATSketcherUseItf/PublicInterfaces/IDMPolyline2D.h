/* -*-c++-*- */
#ifndef IDMPolyline2D_h
#define IDMPolyline2D_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATBooleanDef.h"
#include "CATSketcherUseItf.h"

/**
 * OLE for Design and Modeling 2D Polyline Definition.
 * <b>Role</b>: This interface describes a 2D polyline.
 * This is a geometric construct consisting of an ordered set of points that are connected
 * by line segments. The methods provide access to the point geometry, which fully describe
 * the polyline. Some special properties are also returned by the methods. Some of the output
 * arguments consist of arrays, the memory for which has to be supplied by the caller. The
 * size of the memory is computable from the call to one of the methods of this interface.
 */

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSketcherUseItf IID IID_IDMPolyline2D;
#else
extern "C" const IID IID_IDMPolyline2D;
#endif

class ExportedByCATSketcherUseItf IDMPolyline2D : public CATBaseUnknown
{
  CATDeclareInterface;

public: 
/**
 * Returns overall information related to the polyline. It is to be used in order to
 * determine the amount of memory needed to obtain the variable length information that
 * fully defines the polyline. When the polyline is closed, the endpoints are not repeated.
 * So a rectangle will return 4 points.
 * @param <tt>ULONG *pNumPoints</tt>
 * [out] Outputs the number of points in the polyline.
 * @param <tt>boolean *pIsClosed</tt>
 * [out] Outputs TRUE if the polyline is closed. The first point connects to the last point.
 */
  virtual HRESULT GetPolylineInfo (ULONG *pNumPoints, boolean *pIsClosed) = 0;

/**
 * Obtains the points that fully define the polyline.
 * The memory is allocated and freed by the caller.
 * @param <tt>ULONG nPoints</tt>
 * [in] Inputs the number of points expected to be returned in the pPoints argument.
 *      The function is expecting nPoints * 2 * sizeof (double) bytes of memory allocated by
 *      the caller in pPoints.
 * @param <tt>double *pPoints</tt>
 * [out] Outputs the points making up the polyline.
 *       The memory is pre-allocated by the caller and is assumed to be able to hold upto
 *       nPoints. If the size falls short of what is required, an error is returned.
 */
  virtual HRESULT GetPolylineData (ULONG nPoints, double *pPoints) = 0;
};

CATDeclareHandler(IDMPolyline2D,CATBaseUnknown);

#endif
