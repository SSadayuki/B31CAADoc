/* -*-c++-*- */
#ifndef CATI2DSplineCurve_h
#define CATI2DSplineCurve_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATSketcherInterfaces.h"
class CATListValCATI2DCstPoint_var;
class CATI2DPoint;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSketcherInterfaces IID IID_CATI2DSplineCurve;
#else
extern "C" const IID IID_CATI2DSplineCurve;
#endif

class ExportedByCATSketcherInterfaces CATI2DSplineCurve : public CATBaseUnknown
{
  CATDeclareInterface;

public: 
  /**
   *  Inserts control point in the spline at the last position.<br>
   *  If a 2D point is given (and not a control point), a new control point is created
   *  and aggregated in the spline.<br>
   *  If a 2D control point is given, it will be aggregated in the spline.<br>
   *  If the 2D control point is previously aggregated in a spline, the return code will be E_FAIL.
   *  @param iPoint
   *  The new point to be inserted. (@see CATI2DPoint and CATI2DCstPoint for more information).
   *  @param iEvaluationType
   *  Unused.
   */
  virtual HRESULT AddLastPoint(CATI2DPoint *iPoint, const int iEvaluationType) = 0;

  /**
   *  Removes control point in the spline.
   *  @param iPoint
   *  The point to be removed. (@see CATI2DPoint and CATI2DCstPoint for more information).
   *  @param iEvaluationType
   *  Unused.
   */
  virtual HRESULT RemovePoint (CATI2DPoint *iPoint, const int iEvaluationType) = 0;

  /**
   *  Computes the spline, according to the recorded control points.
   *  @param iEvaluationType
   *  Unused.
   */
  virtual HRESULT Compute(const int iEvaluationType) = 0;

  /**
   *  Gives the list of the control points of the spline.
   *  @param oCstPointsList
   *  The list of the control points. (@see CATI2DPoint and CATI2DCstPoint for more information).
   */
  virtual HRESULT GetCstPoints(CATListValCATI2DCstPoint_var &oCstPointsList) = 0;

  /**
   *  Inserts control point in the spline.<br>
   *  If a 2D point is given (and not a control point), a new control point is created
   *  and aggregated in the spline.<br>
   *  If a 2D control point is given, it will be aggregated in the spline.<br>
   *  If the 2D control point is previously aggregated in a spline, the return code will be E_FAIL.
   *  @param iPoint
   *  The new point to be inserted. (@see CATI2DPoint and CATI2DCstPoint for more information).
   *  @param iPosition
   *  The position at which to insert the point.
   *  To insert a new control point as the first element, set iPosition to 0.
   *  @param iEvaluationType
   *  Unused.
   */
  virtual HRESULT InsertControlPointAfter(CATI2DPoint* iPoint,const unsigned long iPosition,const int iEvaluationType) = 0;

  /**
   *  Gives the degree of the curve (3 or 5)
   *  @param oDegree
   *  The degree of the spline curve
   */
  virtual HRESULT GetDegree(int *oDegree) = 0;

  /**
    * Sets whether the curve is closed.
    *   @param iClosed
    *       Closing flag
    *<dl><dt>1</dt><dd> for a closed curve</dd>
    *    <dt>0</dt><dd> for an open curve</dd>
    *</dl>
    */
  virtual HRESULT SetClosure(const int iClosed) = 0;

  /**
    * Gets whether the curve is closed.
    *   @param oClosed
    *       Closing flag
    *<dl><dt>1</dt><dd> for a closed curve</dd>
    *    <dt>0</dt><dd> for an open curve</dd>
    *</dl>
    */
  virtual HRESULT GetClosure(int *oClosed) = 0;
};

CATDeclareHandler(CATI2DSplineCurve,CATBaseUnknown);

#endif
