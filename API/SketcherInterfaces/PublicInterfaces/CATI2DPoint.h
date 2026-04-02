/* -*-c++-*- */
#ifndef CATI2DPoint_h
#define CATI2DPoint_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IDMPoint2D.h"
#include "CATSketcherInterfaces.h"

/**
 * 2D Point definition.
 * <b>Role</b>: This interface is used to modify 2D Point parameters.
 */

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSketcherInterfaces IID IID_CATI2DPoint;
#else
extern "C" const IID IID_CATI2DPoint;
#endif

class ExportedByCATSketcherInterfaces CATI2DPoint : public IDMPoint2D
{
  CATDeclareInterface;

public: 
  /**
   * Modifies the coordinates of 2D Point.
   * @param <tt>iPoint</tt>
   * [in] The new coordinates of the point.
   */
  virtual HRESULT SetPointData(const double *iPoint) = 0;
};

CATDeclareHandler(CATI2DPoint,IDMPoint2D);

#endif
