/* -*-c++-*- */
#ifndef CATI2DGeometricOperators_h
#define CATI2DGeometricOperators_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATListOfDouble.h"
#include "CATListOfInt.h"
#include "CATSketcherInterfaces.h"

class CATListValCATI2DCurve_var;
class CATListValCATBaseUnknown_var;

/**
 * Geometrical Operators Interface on 2D Geometry.
 */

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSketcherInterfaces IID IID_CATI2DGeometricOperators;
#else
extern "C" const IID IID_CATI2DGeometricOperators;
#endif

class CATMathPoint2D;
class CATMathDirection2D;

class ExportedByCATSketcherInterfaces CATI2DGeometricOperators : public CATBaseUnknown
{
  CATDeclareInterface;

public: 
  /**
   * Computes the intersection points between two curves, according to an eventual tolerance.
   *
   * @param <tt>iCurve1</tt>
   * [in] Inputs the first curve.
   * @param <tt>iCurve1</tt>
   * [in] Inputs the second curve.
   * @param <tt>oParams1</tt>
   * [out] sorted list of parameters on iCurve1
   * @param <tt>oParams2</tt>
   * [out] list of parameters on iCurve2 (corresponding to oParams1)
   * @param <tt>oConfusions</tt>
   * [out] list of confusion status (corresponding to oParams1 and oParams2):
   * <dl>
   * <dt> <tt>oConfusions[i] = 0</tt> : intersection
   * <dt> <tt>oConfusions[i] =-1</tt> : (oParams1[i],oParams2[i]) begin of confusion
   * <dt> <tt>oConfusions[i] =+1</tt> : (oParams1[i],oParams2[i]) end of confusion
   * </dl>
   * NB: if oConfusions[i] =-1, then oConfusions[i+1] =+1
   * @param <tt>iLimMode</tt>
   * [in]
   * <dl>
   * <dt> <tt>1</tt> intersection between trimmed curves
   * <dt> <tt>0</tt> intersection between curves (default)
   * @param <tt>iTolPt</tt>
   * [in] Inputs the (optional) tolerance to determine if two points are identical.
   * @param <tt>iTolAng</tt>
   * [in] Inputs the (optional) tolerance to determine if two vectors are identical.
   * @return
   * A <tt>HRESULT</tt>
   * <dl>
   * <dt> <tt>S_OK</tt>   <dd> Intersections found
   * <dt> <tt>S_FALSE</tt><dd> No intersection found
   * <dt> <tt>E_xxx</tt>  <dd> Problem occured.
   * </dl>
   */
  virtual HRESULT Intersection(CATBaseUnknown* iCurve1,
                               CATBaseUnknown* iCurve2,
                               CATListOfDouble& oParams1,
                               CATListOfDouble& oParams2,
                               CATListOfInt& oConfusions,
                               const int iLimMode=0,
                               double *iTolPt=NULL,
                               double *iTolAng=NULL) = 0;

  /**
   * Computes the nearest intersection point from a given point between two curves.
   * @param <tt>iCurve1</tt>
   * [in] Inputs the first curve.
   * @param <tt>iCurve2</tt>
   * [in] Inputs the second curve.
   * @param <tt>iGuessPoint</tt>
   * [in] Inputs a close point to compute the intersection.
   * @param <tt>oParamOnTheGeom</tt>
   * [out] Parameter on the element to retrieve the location where the minimal distance is computed.
   * @param <tt>oParamOnTheLine</tt>
   * [out] Parameter on the line to retrieve the location where the minimal distance is computed:
   * <tt>CATMathPoint2D</tt> PointSolution = iOrigin + (oParamOnTheLine*iDirection)
   */
  virtual HRESULT Intersection(CATBaseUnknown* iCurve1,
                               CATBaseUnknown* iCurve2,
                               const CATMathPoint2D& iGuessPoint,
                               double& oParam1,
                               double& oParam2) = 0;

  /**
   * Computes the nearest intersection point from a given point between a curve and a circle.
   * @param <tt>iCurve</tt>
   * [in] Inputs the curve.
   * @param <tt>iCenter</tt>
   * [in] Inputs the center of the circle.
   * @param <tt>iRadius</tt>
   * [in] Inputs the radius of the circle.
   * @param <tt>iInit</tt>
   * [in] Inputs a close point to find the nearest intersection.
   * @param <tt>oWsCurve</tt>
   * [out] Parameter (optional) on the curve of the intersection point.
   * @param <tt>oWsCircle</tt>
   * [out] Parameter (optional) on the circle of the intersection point.
   * @param <tt>oPt</tt>
   * [out] Intersection point (optional).
   */
  virtual HRESULT Intersection(CATBaseUnknown* iCurve,const CATMathPoint2D& iCenter,const double iRadius,
                               const CATMathPoint2D& iInit,double *oWsCurve=NULL,double *oWsCircle=NULL,double *oPt=NULL) = 0;

  /**
   * @nodoc
   */
  virtual HRESULT Projection(CATBaseUnknown* iCurve,
                             const CATMathPoint2D& iPoint,const CATMathDirection2D& iDir,
                             double *oWsCurve=NULL,double *oWsLine=NULL,double *oPt=NULL) = 0;

  /**
   * Computes the distance between two geometric elements.
   * @param <tt>iGeom1</tt>
   * [in] Inputs the first element (point or curve).
   * @param <tt>iGeom2</tt>
   * [in] Inputs the second element (point or curve).
   * @param <tt>oDistance</tt>
   * [out] Minimal distance between the element and the line.
   * @param <tt>oParam1</tt>
   * [out] Parameter on the first element to retrieve the location where the minimal distance is computed.
   * @param <tt>oParam2</tt>
   * [out] Parameter on the second element to retrieve the location where the minimal distance is computed.
   */
  virtual HRESULT Distance(CATBaseUnknown* iGeom1,
                           CATBaseUnknown* iGeom2,
                           double& oDistance,
                           double& oParam1,
                           double& oParam2) = 0;

  /**
   * Computes the distance between two geometric elements.
   * @param <tt>iGeom1</tt>
   * [in] Inputs the first element (point or curve).
   * @param <tt>iGeom2</tt>
   * [in] Inputs the second element (point or curve).
   * @param <tt>iDir</tt>
   * [in] Inputs the (optional) direction to compute the distance.
   * @param <tt>iGuessParam1</tt>
   * [in] Inputs the (optional) help parameter on the first element to compute the distance.
   * This argument is usefull to find a local minimal distance, and for accelerer the convergence.
   * @param <tt>iGuessParam2</tt>
   * [in] Inputs the (optional) help parameter on the second element to compute the distance.
   * This argument is usefull to find a local minimal distance, and for accelerer the convergence.
   * @param <tt>oDistance</tt>
   * [out] Minimal distance between the two elements.
   * @param <tt>oParam1</tt>
   * [out] Parameter on the first element to retrieve the location where the minimal distance is computed.
   * @param <tt>oParam2</tt>
   * [out] Parameter on the second element to retrieve the location where the minimal distance is computed.
   */
  virtual HRESULT Distance(CATBaseUnknown* iGeom1,
                           CATBaseUnknown* iGeom2,
                           double* iDir,
                           double* iGuessParam1,
                           double* iGuessParam2,
                           double& oDistance,
                           double& oParam1,
                           double& oParam2) = 0;

  /**
   * Computes the distance between a geometry and a line.
   * @param <tt>iGeom</tt>
   * [in] Inputs the element (point or curve).
   * @param <tt>iOrigin</tt>
   * [in] A point on the line.
   * @param <tt>iDirection</tt>
   * [in] The direction vector of the line.
   * @param <tt>oDistance</tt>
   * [out] Minimal distance between the element and the line.
   * @param <tt>oParamOnTheGeom</tt>
   * [out] Parameter on the element to retrieve the location where the minimal distance is computed.
   * @param <tt>oParamOnTheLine</tt>
   * [out] Parameter on the line to retrieve the location where the minimal distance is computed:
   * <tt>CATMathPoint2D</tt> PointSolution = iOrigin + (oParamOnTheLine*iDirection)
   */
  virtual HRESULT Distance(CATBaseUnknown* iGeom,const CATMathPoint2D& iOrigin,const CATMathDirection2D& iDirection,
                           double& oDistance,double& oParamOnTheGeom,double& oParamOnTheLine) = 0;

  /**
   * @nodoc
   */
  virtual HRESULT IsPtInside(const double iPoint[2],
                             CATListValCATI2DCurve_var &iLoop,
                             CATListOfDouble& iStartParams,
                             CATListOfDouble& iEndParams,
                             int& oPointInside,double *iTolPt=NULL) = 0;

  /*
   * Returns a discretisation of the curve between two given parameters.
   * The result can be in the form of parameters and/or of points.
   * @param <tt>iCurve</tt>
   * [in] Inputs the curve.
   * @param <tt>iParam1</tt>
   * [in] Parameter of begining of the discretisation.
   * @param <tt>iParam2</tt>
   * [in] Parameter of ending of the discretisation.
   * @param <tt>iTol_arrow</tt>
   * [in] Maximal arrow between two discretisation points.
   * @param <tt>oNbParams</tt>
   * [out] Number of discretisation points found.
   * @param <tt>oParams</tt>
   * [out] (Optional) Array of the discretisation parameters.
   * <b>NOTE1 : </b> This argument can be NULL if these parameters aren't desired.
   * <b>NOTE2 : </b> The desallocation of this arry is in charge of the appealing software.
   * @param <tt>oPoints</tt>
   * [out] (Optional) Array of the coordinates of the discretisation points.
   * <b>NOTE1 : </b> This argument can be NULL if these points coordinates aren't desired.
   * <b>NOTE2 : </b> The desallocation of this arry is in charge of the appealing software.
   * @return
   * A <tt>HRESULT</tt>
   * <dl>
   * <dt> <tt>S_OK</tt>          <dd> The discretisation is computed
   * <dt> <tt>E_INVALIDARG</tt>  <dd> The provided discretisation parameters don't define a significant interval,
   * or no valid argument has been provided.
   * </dl>
   */
  virtual HRESULT Discretisation(CATBaseUnknown *iCurve,const double& iParam1,const double& iParam2,
                                 const double &iTolArrow,
                                 int *oNbParams,double **oParams,double **oPoints) = 0;

  /**
   * Computes the directed projection of a point on a courbe.
   * It is the same as computing the nearest intersection point from a given point between a curve and a line.
   * @param <tt>iCurve</tt>
   * [in] Inputs the curve.
   * @param <tt>iPoint</tt>
   * [in] Inputs the point to project.
   * @param <tt>iDir</tt>
   * [in] Inputs the direction to project the point. Can be NULL if orthogonal projection is specified.
   * @param <tt>oWsCurve</tt>
   * [out] Parameter (optional) on the curve of the projected point.
   * @param <tt>oWsLine</tt>
   * [out] Parameter (optional) on the line of the projected point.
   * @param <tt>oPt</tt>
   * [out] Projected point (optional).
   */
  virtual HRESULT Projection(CATBaseUnknown* iCurve,
                             const CATMathPoint2D& iPoint,const double* iDir,
                             double *oWsCurve=NULL,double *oWsLine=NULL,double *oPt=NULL) = 0;
  /**
   * Checks if a point is inside a contour.
   * @param <tt>iPoint[2]</tt>
   * [in] Inputs the Point Coordinates
   * @param <tt>iLoop</tt>
   * [in] Contour defined as a list of curves
   * @param <tt>iStartParams</tt>
   * [in] Start parameters of the curves
   * @param <tt>iEndParams</tt>
   * [in] End parameters of the curves
   * @param <tt>oPointInside</tt>
   * [out]
   * <dl>
   * <dt> <tt>1</tt> when iPoint is inside the contour (without ambiguity),
   * <dt> <tt>0</tt> otherwise
   * </dl>
   * @param <tt>iTolPt</tt>
   * [in] Inputs the (optional) tolerance to determine if the given curves are consecutive.
   */
  virtual HRESULT IsPtInside(const double iPoint[2],
                             CATListValCATBaseUnknown_var &iLoop,
                             CATListOfDouble& iStartParams,
                             CATListOfDouble& iEndParams,
                             int& oPointInside,double *iTolPt=NULL) = 0;
  /**
   * Checks if a curve is closed.
   * @param <tt>iCurve</tt>
   * [in] Inputs the curve
   * @param <tt>oClosed</tt>
   * [out]
   * <dl>
   * <dt> <tt>1</tt> when the curve is closed,
   * <dt> <tt>0</tt> otherwise
   * </dl>
   */
  virtual HRESULT IsClosed(CATBaseUnknown *iCurve,int &oClosed) = 0;
};

CATDeclareHandler(CATI2DGeometricOperators,CATBaseUnknown);

#endif
