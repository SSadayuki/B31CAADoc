/* -*-c++-*- */
#ifndef CATI2DLine_h
#define CATI2DLine_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IDMLine2D.h"
#include "CATSketcherInterfaces.h"

class CATI2DCurve;

/**
 * Interface of 2D Line.
 * <b>Role</b>: This interface is used to modify 2D Line parameters.
 */

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSketcherInterfaces IID IID_CATI2DLine;
#else
extern "C" const IID IID_CATI2DLine;
#endif

class ExportedByCATSketcherInterfaces CATI2DLine : public IDMLine2D
{
  CATDeclareInterface;

public:                                      
  /**
   * Modifies a 2D Line.
   * @param <tt>pRootPoint</tt>
   * [in] The new coordinates of the root point of the line.
   * @param <tt>pDirection</tt>
   * [in] The new coordinates of the direction of the line.
   */
  virtual HRESULT SetLineData(const double *pRootPoint, const double *pDirection) = 0;
  
  /**
   * Modifies a chamfer segment.
   * @param <tt>iCurve1</tt>
   * [in] The first geometric element.
   * @param <tt>iCurve2</tt>
   * [in] The second geometric element.
   * @param <tt>pPoint</tt>
   * [in] The 2D indicate point coordinates.
   * @param <tt>iParam1</tt>
   * [in] The optional first parameter of the chamfer segment.
   * @param <tt>iParam2</tt>
   * [in] The optional second parameter of the chamfer segment.
   * @param <tt>iChamfer</tt>
   * [in] Indicates the computation mode of the chamfer,
   * thus the significant of the two parameters iParam1 and iParam2:
   *  If iChamfer == 1 (Length of the chamfer and its angle):
   *   iParam1 means the length of the chamfer segment.
   *   iParam2 means the angle of the chamfer segment with the tangent of the first curve
   *    at the nearest intersection point from the 2D indicate point.
   *  If iChamfer == 2 (Length1 and Length2 define the chamfer):
   *   iParam1 means the distance of the chamfer segment with either the intersecting point
   *    between the two curves, if it exists, either the end point of the first curve.
   *   iParam2 means the distance of the chamfer segment with either the intersecting point
   *    between the two curves, if it exists, either the end point of the second curve.
   *  If iChamfer == 3 (Length1 and Angle define the chamfer):
   *   iParam1 means the distance of the chamfer segment with either the intersecting point
   *    between the two curves, if it exists, either the end point of the first curve.
   *   iParam2 means the angle of the chamfer segment with the tangent of the first curve
   *    at the nearest intersection point from the 2D indicate point.
   */
  virtual HRESULT SetChamfer(const CATI2DCurve *iCurve1,const CATI2DCurve *iCurve2,const double *pPoint,const double *iParam1=NULL,const double *iParam2=NULL, const int iChamfer=1) = 0;
};

CATDeclareHandler(CATI2DLine,IDMLine2D);

#endif
