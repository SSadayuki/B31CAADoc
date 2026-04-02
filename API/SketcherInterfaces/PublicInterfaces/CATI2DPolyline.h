#ifndef CATI2DPolyline_h
#define CATI2DPolyline_h
// COPYRIGHT DASSAULT SYSTEMES 2000
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IDMPolyline2D.h"
#include "CATSketcherInterfaces.h"

/**
 * The methods of this interface provide the client with the functionality
 * for managing 2DPolyline.
 * <b>Role</b>: 
 */

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSketcherInterfaces IID IID_CATI2DPolyline;
#else
extern "C" const IID IID_CATI2DPolyline;
#endif


class ExportedByCATSketcherInterfaces CATI2DPolyline : public IDMPolyline2D
{
  CATDeclareInterface;

public: 
   /**
   * Polyline management
   * @param <tt>const ULONG *nPoints</tt>
   * [in] The number of Points of polyline.
   * @param <tt>const double *pPoints</tt>
   * [in] The 2D points coordinates .
   * @param <tt>const boolean isClosed</tt>
   * [in] Closed parameter of polyline .
   */
  virtual HRESULT SetPolylineData(ULONG nPoints, double *pPoints,const boolean isClosed)=0;
  
};
CATDeclareHandler(CATI2DPolyline,IDMPolyline2D);

#endif
