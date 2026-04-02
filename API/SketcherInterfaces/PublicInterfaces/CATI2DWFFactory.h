/* -*-c++-*- */
#ifndef CATI2DWFFactory_h
#define CATI2DWFFactory_h

// COPYRIGHT DASSAULT SYSTEMES 2011

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CAT2DCstType.h"
#include "CATLISTV_CATI2DWFGeometry.h"
#include "CATContourDefs.h"
#include "CATSketcherInterfaces.h"
#include "CATBooleanDef.h"
#include "CAT2DOffsetDefs.h"
#include "CAT2DCstPointDefs.h"
#include "CATIAV5Level.h"
/**
 * Provides the client with the functionality for creating 2D geometric elements.
 * <b>Role</b>: 
 */

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSketcherInterfaces IID IID_CATI2DWFFactory;
#else
extern "C" const IID IID_CATI2DWFFactory;
#endif

class CATMathPoint2D;
class CATMathTransformation2D;
class CATIContainer_var;
class CATISpecObject_var;
class CATI2DCurve_var;
class CATI2DCurve;
class CATI2DWFGeometry_var;
class CATCurve_var;
class CATI2DDetail;
class CATListValCATI2DPoint_var;
class CATListValCATBaseUnknown_var;
class IDMCurve2D;

class ExportedByCATSketcherInterfaces CATI2DWFFactory : public CATBaseUnknown
{
  CATDeclareInterface;

public: 
  /**
   * Creates a 2D point.
   * @param <tt>iPoint</tt>
   * [in] 2D point coordinates.
   * @returns a handler on the created object.
   */
  virtual CATISpecObject_var CreatePoint(const double *iPoint) = 0;
  /**
   * Creates a 2D control point.
   * @param <tt>iPoint</tt>
   * [in] 2D point coordinates.
   * @param <tt>iTangent</tt>
   * [in] 2D tangent coordinates or NULL.
   * @param <tt>iCurvature</tt>
   * [in] 2D curvature coordinates or NULL.
   * The curvature direction has to be orthogonal to the tangent.
   * Radius of curvature is 1/norm(curvature).
   * The curvature vector can be (0,0), indicating an infinite radius of curvature (line).
   * @returns a handler on the created object.
   */
  virtual CATISpecObject_var CreateCstPoint(const double *iPoint,const double *iTangent,const double *iCurvature) = 0;
  /**
   * Creates a 2D line.
   * @param <tt>iPoint</tt>
   * [in] 2D origin point coordinates.
   * @param <tt>iDirection</tt>
   * [in] 2D direction coordinates (will be normalized).
   * @param <tt>iStartParam</tt>
   * [in] Parameter of the start point (iPoint + iStartParam * iDirection).
   * @param <tt>iEndParam</tt>
   * [in] Parameter of the end point (iPoint + iEndParam * iDirection).
   * @returns a handler on the created object.
   */
  virtual CATISpecObject_var CreateLine(const double *iPoint,const double *iDirection,
                                        const double iStartParam,const double iEndParam) = 0;
  /**
   * Creates a 2D line.
   * @param <tt>iStartPoint</tt>
   * [in] 2D start point coordinates.
   * @param <tt>iEndPoint</tt>
   * [in] 2D end point coordinates.
   * @returns a handler on the created object.
   */
  virtual CATISpecObject_var CreateLine(const double *iStartPoint,const double *iEndPoint) = 0;
  /**
   * Creates a 2D axis line.
   * @param <tt>iPoint</tt>
   * [in] 2D origin point coordinates.
   * @param <tt>iDirection</tt>
   * [in] 2D direction coordinates (will be normalized).
   * @returns a handler on the created object.
   */
  virtual CATISpecObject_var CreateCenterLine(const double *iPoint,const double *iDirection) = 0;
  /**
   * Creates a 2D construction line.
   * @param <tt>iPoint</tt>
   * [in] 2D origin point coordinates.
   * @param <tt>iDirection</tt>
   * [in] 2D direction coordinates (will be normalized).
   * @returns a handler on the created object.
   */
  virtual CATISpecObject_var CreateConstructionLine(const double *iPoint,const double *iDirection) = 0;
  /**
   * Creates a 2D circle.
   * @param <tt>iPoint</tt>
   * [in] 2D center point coordinates.
   * @param <tt>iRadius</tt>
   * [in] Radius of the circle.
   * @returns a handler on the created object.
   */
  virtual CATISpecObject_var CreateCircle(const double *iPoint,const double iRadius) = 0;
  /**
   * Creates a 2D arc.
   * @param <tt>iPoint</tt>
   * [in] 2D center point coordinates.
   * @param <tt>iRadius</tt>
   * [in] Radius of the circle.
   * @param <tt>iStartParam</tt>
   * [in] Parameter of the start point (0<=iStartParam<2*PI).
   * @param <tt>iEndParam</tt>
   * [in] Parameter of the end point (iStartParam<iEndParam<4*PI).
   * @returns a handler on the created object.
   */
  virtual CATISpecObject_var CreateCircle(const double *iPoint,const double iRadius,
                                          const double iStartParam,const double iEndParam) = 0;
  /**
   * Creates a 2D arc with two points and a tangent.
   * @param <tt>iStartPoint</tt>
   * [in] 2D start point coordinates.
   * @param <tt>iStartTangent</tt>
   * [in] 2D tangent coordinates.
   * @param <tt>iEndPoint</tt>
   * [in] 2D end point coordinates.
   * @param <tt>iRelimit</tt>
   * [in] Trimming mode.
   * <dl>
   * <dt> <tt>1</tt>  <dd> The arc is trimmed on given points.
   * <dt> <tt>0</tt>  <dd> The arc is not trimmed.
   * </dl>
   * @returns a handler on the created object.
   */
  virtual CATISpecObject_var CreateCircleTgt(const double *iStartPoint,const double *iStartTangent,
                                             const double *iEndPoint,const int iRelimit=1) = 0;
  /**
   * Creates a 2D arc through three points.
   * @param <tt>iStartPoint</tt>
   * [in] 2D start point coordinates.
   * @param <tt>iPoint</tt>
   * [in] 2D second point coordinates.
   * @param <tt>iEndPoint</tt>
   * [in] 2D end point coordinates.
   * @param <tt>iRelimit</tt>
   * [in] Trimming mode.
   * <dl>
   * <dt> <tt>1</tt>  <dd> The arc is trimmed on given points.
   * <dt> <tt>0</tt>  <dd> The arc is not trimmed.
   * </dl>
   * @returns a handler on the created object.
   */
  virtual CATISpecObject_var CreateCircle(const double *iStartPoint,const double *iPoint,
                                          const double *iEndPoint,const int iRelimit=1) = 0;
  /**
   * Creates a 2D construction circle.
   * @param <tt>iPoint</tt>
   * [in] 2D center point coordinates.
   * @param <tt>iRadius</tt>
   * [in] Radius of the circle.
   * @returns a handler on the created object.
   */
  virtual CATISpecObject_var CreateConstructionCircle(const double *iPoint,const double iRadius) =0;
  /**
   * @nodoc
   * Creates a 2D axis circle.
   * @param <tt>iPoint</tt>
   * [in] 2D origin point coordinates.
   * @param <tt>iRadius</tt>
   * [in] Radius of the circle.
   * @returns a handler on the created object.
   */
  virtual CATISpecObject_var CreateCenterCircle(const double *iPoint,const double iRadius) = 0;
  /**
   * Creates a 2D ellipse.
   * @param <tt>iPoint</tt>
   * [in] 2D center point coordinates.
   * @param <tt>iMajorDirection</tt>
   * [in] 2D major axis direction coordinates.
   * @param <tt>iMajorRadius</tt>
   * [in] Major semi-axis of the ellipse.
   * @param <tt>iMinorRadius</tt>
   * [in] Minor semi-axis of the ellipse.
   * @returns a handler on the created object.
   */
  virtual CATISpecObject_var CreateEllipse(const double *iPoint,const double *iMajorDirection,
                                           const double iMajorRadius,const double iMinorRadius) = 0;
  /**
   * Creates a 2D arc of ellipse.
   * @param <tt>iPoint</tt>
   * [in] 2D center point coordinates.
   * @param <tt>iMajorDirection</tt>
   * [in] 2D major axis direction coordinates.
   * @param <tt>iMajorRadius</tt>
   * [in] Major semi-axis of the ellipse.
   * @param <tt>iMinorRadius</tt>
   * [in] Minor semi-axis of the ellipse.
   * @param <tt>iStartParam</tt>
   * [in] Parameter of the start point (0<=iStartParam<2*PI).
   * @param <tt>iEndParam</tt>
   * [in] Parameter of the end point (iStartParam<iEndParam<4*PI).
   * @returns a handler on the created object.
   */
  virtual CATISpecObject_var CreateEllipse(const double *iPoint,const double *iMajorDirection,
                                           const double iMajorRadius,const double iMinorRadius,
                                           const double iStartParam,const double iEndParam) = 0;
  /**
   * Creates a 2D parabola.
   * @param <tt>iPoint</tt>
   * [in] 2D center point coordinates.
   * @param <tt>iAxis</tt>
   * [in] 2D axis direction coordinates.
   * @param <tt>iFocalDistance</tt>
   * [in] Focal distance of the parabola.
   * @returns a handler on the created object.
   */
  virtual CATISpecObject_var CreateParabola(const double *iPoint,const double *iAxis,
                                            const double iFocalDistance) = 0;
  /**
   * Creates a 2D parabola.
   * @param <tt>iPoint</tt>
   * [in] 2D center point coordinates.
   * @param <tt>iAxis</tt>
   * [in] 2D axis direction coordinates.
   * @param <tt>iFocalDistance</tt>
   * [in] Focal distance of the parabola.
   * @param <tt>iStartParam</tt>
   * [in] Parameter of the start point.
   * @param <tt>iEndParam</tt>
   * [in] Parameter of the end point.
   * @returns a handler on the created object.
   */
  virtual CATISpecObject_var CreateParabola(const double *iPoint,const double *iAxis,
                                            const double iFocalDistance,
                                            const double iStartParam,const double iEndParam) = 0;
  /**
   * Creates a 2D hyperbola.
   * @param <tt>iPoint</tt>
   * [in] 2D center point coordinates.
   * @param <tt>iAxis</tt>
   * [in] 2D axis direction coordinates.
   * @param <tt>iRadius1</tt>
   * [in] Radius of the hyperbola.
   * @param <tt>iRadius2</tt>
   * [in] Imaginary radius of the hyperbola.
   * @returns a handler on the created object.
   */
  virtual CATISpecObject_var CreateHyperbola(const double *iPoint,const double *iAxis,
                                             const double iRadius1,const double iRadius2) = 0;
  /**
   * Creates a 2D hyperbola.
   * @param <tt>iPoint</tt>
   * [in] 2D center point coordinates.
   * @param <tt>iAxis</tt>
   * [in] 2D axis direction coordinates.
   * @param <tt>iRadius1</tt>
   * [in] Radius of the hyperbola.
   * @param <tt>iRadius2</tt>
   * [in] Imaginary radius of the hyperbola.
   * @param <tt>iStartParam</tt>
   * [in] Parameter of the start point.
   * @param <tt>iEndParam</tt>
   * [in] Parameter of the end point.
   * @returns a handler on the created object.
   */
  virtual CATISpecObject_var CreateHyperbola(const double *iPoint,const double *iAxis,
                                             const double iRadius1,const double iRadius2,
                                             const double iStartParam,const double iEndParam) = 0;
  /**
   * Creates a 2D quintic spline curve (degree = 5).
   * @param <tt>iPoints</tt>
   * [in] List of spline control points.
   * @param <tt>iEvaluationType</tt>
   * [in] Evaluation mode (NOT USED).
   * @returns a handler on the created object.
   */
  virtual CATISpecObject_var CreateSplineCurve(const CATListValCATI2DPoint_var &iPoints,const int iEvaluationType) = 0;
  /**
   * @nodoc
   * Dedicated to curve connectivity detection using CATIA V4 tolerance.
   */
  virtual CATISpecObject_var CreateContour(const CATI2DCurve_var &i2DGeom,
                                           const CATContourClass iClass=ContourClass_Undefined,
                                           const CATAutosearchMode iMode=AutosearchMode_NoMultipleSolutions) = 0;
  /**
   * Duplicates a set of 2D geometries and applies a transformation to the result.
   * @param <tt>iGeoms</tt>
   * [in] List of geometric elements to duplicate.
   * @param <tt>ioTransfo</tt>
   * [inout] 2D transformation to apply to the duplicated elements.
   * @returns a list of handlers on the created objects.
   */
  virtual CATListValCATI2DWFGeometry_var Duplicate(const CATListValCATI2DWFGeometry_var &iGeoms,
                                                   CATMathTransformation2D &ioTransfo) = 0;
  /**
   * @nodoc
   */
  virtual CATISpecObject_var CreateConstraint(const CATBaseUnknown_var &iFirstGeom,
                                              const CATBaseUnknown_var &iSecondGeom,
                                              const CATBaseUnknown_var &iThirdGeom,
                                              const CAT2DCstType iCstType=Cst2DType_ERROR,
                                              const int iDriven=0,const int iEvaluation=1) = 0;
  /**
   * @nodoc
   */
  virtual CATISpecObject_var CreateConstraint(const CATBaseUnknown_var &iFirstGeom,
                                              const CATBaseUnknown_var &iSecondGeom,
                                              const CATBaseUnknown_var &iThirdGeom,
                                              const CATIContainer_var &iContainer,
                                              const CAT2DCstType iCstType=Cst2DType_ERROR,
                                              const int iDriven=0,const int iEvaluation=1) = 0;
  /**
   * @nodoc
   */
  virtual CATISpecObject_var Import3DGeometry(const CATBaseUnknown_var &iGeom,
                                              CATListValCATI2DWFGeometry_var &oGeoms,
                                              const int EditSolutions=0,
                                              const int phantom=0,
                                              CATBaseUnknown *iNear=NULL,
                                              const double *iSelPt=NULL) = 0;
  /**
   * @nodoc
   */
  virtual CATISpecObject_var Import3DGeometryForConstraint(const CATBaseUnknown_var &iGeom,
                                                           CATBaseUnknown *iNear=NULL,
                                                           const double *iSelPt=NULL) = 0;
  /**
   * @nodoc
   */
  virtual CATISpecObject_var CreateProjectedCurve(const CATISpecObject_var &iGeom) = 0;
  /**
   * Creates a curve from a CATPCurve object.
   * @param <tt>iCurve</tt>
   * [in] CATPCurve (also a CATCurve) to create.
   * @returns a handler on the created object.
   */
  virtual CATISpecObject_var CreateUnspec(const CATCurve_var &iCurve) = 0;
  /**
   * Projects 3D or 2D external geometry on a sketch.
   * @param <tt>iGeom</tt>
   * [in] External geometric element to project on the sketch plane.
   * @param <tt>oGeoms</tt>
   * [out] List of handlers on the created objects.
   * @param <tt>iPhantom</tt>
   * [in] Creation mode.
   * <dl>
   * <dt> <tt>1</tt>  <dd> The geometric elements are created in phantom mode (invisible).
   * <dt> <tt>0</tt>  <dd> The geometric elements are created in standard mode (visible).
   * </dl>
   * @param <tt>iNearGeom</tt>
   * [in] Optional external geometric element to keep the nearest solution.
   * @param <tt>iSel2DPt</tt>
   * [in] Optional 2D point coordinates to keep only the nearest solution
   * for a canonical surface projection.
   * @param <tt>iDatum</tt>
   * [in] Datum mode.
   * <dl>
   * <dt> <tt>1</tt>  <dd> The generated geometric elements are not associative.
   * <dt> <tt>0</tt>  <dd> The generated geometric elements are associative.
   * </dl>
   * @param <tt>iCanonic</tt>
   * [in] To manage canonicity.
   * <dl>
   * <dt> <tt>1</tt>  <dd> If possible the final geometry will be canonical.
   * <dt> <tt>0</tt>  <dd> No canonicity management.
   * </dl>
   * @param <tt>iExtrapolMode</tt>
   * [in] To manage extrapolation.
   * <dl>
   * <dt> <tt>1</tt>  <dd> If possible the final geometry will support extrapolation.
   * <dt> <tt>0</tt>  <dd> No extrapolation management.
   * </dl>
   * @returns a handler on the created object.
   */
  virtual CATISpecObject_var ProjectGeometry(const CATBaseUnknown_var &iGeom,
                                             CATListValCATI2DWFGeometry_var &oGeoms,
                                             const int iPhantom=0,
                                             CATBaseUnknown *iNearGeom=NULL,
                                             const double *iSel2DPt=NULL,
                                             const int iDatum=0,
                                             const int iCanonic=1,
                                             const int iExtrapolMode=0) = 0;
  /**
   * Intersects 3D or 2D external geometry.
   * @param <tt>iGeom</tt>
   * [in] External geometric element to intersect with the sketch plane.
   * @param <tt>oGeoms</tt>
   * [out] List of handlers on the created objects.
   * @param <tt>iPhantom</tt>
   * [in] Creation mode.
   * <dl>
   * <dt> <tt>1</tt>  <dd> The geometric elements are created in phantom mode (invisible).
   * <dt> <tt>0</tt>  <dd> The geometric elements are created in standard mode (visible).
   * </dl>
   * @param <tt>iNearGeom</tt>
   * [in] Optional external geometric element to keep the nearest solution.
   * @param <tt>iSel2DPt</tt>
   * [in] Optional 2D point coordinates to keep only the nearest solution
   * for a canonical surface projection.
   * @param <tt>iDatum</tt>
   * [in] Datum mode.
   * <dl>
   * <dt> <tt>1</tt>  <dd> The generated geometric elements are not associative.
   * <dt> <tt>0</tt>  <dd> The generated geometric elements are associative.
   * </dl>
   * @param <tt>iCanonic</tt>
   * [in] To manage canonicity.
   * <dl>
   * <dt> <tt>1</tt>  <dd> If possible the final geometry will be canonical.
   * <dt> <tt>0</tt>  <dd> No canonicity management.
   * </dl>
   * @param <tt>iExtrapolMode</tt>
   * [in] To manage extrapolation.
   * <dl>
   * <dt> <tt>1</tt>  <dd> If possible the final geometry will support extrapolation.
   * <dt> <tt>0</tt>  <dd> No extrapolation management.
   * </dl>
   * @returns a handler on the created object.
   */
  virtual CATISpecObject_var IntersectGeometry(const CATBaseUnknown_var &iGeom,
                                               CATListValCATI2DWFGeometry_var &oGeoms,
                                               const int iPhantom=0,
                                               CATBaseUnknown *iNearGeom=NULL,
                                               const double *iSel2DPt=NULL,
                                               const int iDatum=0,
                                               const int iCanonic=1,
                                               const int iExtrapolMode=0) = 0;
  /**
   * Creates a bi-tangent arc.
   * @param <tt>iCurve1</tt>
   * [in] First geometric element.
   * @param <tt>iCurve2</tt>
   * [in] Second geometric element.
   * @param <tt>iPoint</tt>
   * [in] Indicated 2D point coordinates.
   * @param <tt>iRadius</tt>
   * [in] Optional radius of the arc (unspecified by default).
   * @returns a handler on the created object.
   */
  virtual CATISpecObject_var CreateCorner(CATI2DCurve *iCurve1,CATI2DCurve *iCurve2,
                                          const double *iPoint,
                                          const double *iRadius=NULL) = 0;
  /**
   * Creates a chamfer segment.
   * @param <tt>iCurve1</tt>
   * [in] First geometric element.
   * @param <tt>iCurve2</tt>
   * [in] Second geometric element.
   * @param <tt>iPoint</tt>
   * [in] Indicated 2D point coordinates.
   * @param <tt>iParam1</tt>
   * [in] Optional first parameter of the chamfer segment.
   * @param <tt>iParam2</tt>
   * [in] Optional second parameter of the chamfer segment.
   * @param <tt>iChamfer</tt>
   * [in] Indicates the computation mode of the chamfer,
   * thus the significance of the two parameters iParam1 and iParam2:
   *  If iChamfer == 1 (Length of the chamfer and its angle):
   *   iParam1 means the length of the chamfer segment.
   *   iParam2 means the angle of the chamfer segment with the tangent to the first curve
   *    at the nearest intersection point from the indicated 2D point.
   *  If iChamfer == 2 (Length1 and Length2 define the chamfer):
   *   iParam1 means the distance of the chamfer segment with either the intersecting point
   *    of the two curves, if it exists, or the end point of the first curve.
   *   iParam2 means the distance of the chamfer segment with either the intersecting point
   *    of the two curves, if it exists, or the end point of the second curve.
   *  If iChamfer == 3 (Length1 and Angle define the chamfer):
   *   iParam1 means the distance of the chamfer segment with either the intersecting point
   *    of the two curves, if it exists, or the end point of the first curve.
   *   iParam2 means the angle of the chamfer segment with the tangent of the first curve
   *    at the nearest intersection point from the indicated 2D point.
   * @returns a handler on the created object.
   */
  virtual CATISpecObject_var CreateChamfer(CATI2DCurve *iCurve1,CATI2DCurve *iCurve2,
                                           const double *iPoint,
                                           const double *iParam1=NULL,const double *iParam2=NULL,
                                           const int iChamfer=1) = 0;
  /**
   * @nodoc
   */
#ifdef CATIAR210
#else
  virtual CATISpecObject_var CreatePointOnCurve(IDMCurve2D *iCurve,const double iCrvParam) = 0;
#endif
  /**
   * Instanciate a ditto from a detail.
   * @param <tt>iDetail</tt>
   * [in] Address of the detail.
   * @param <tt>iIID</tt>
   * [in] Interface identifier for which a pointer is requested.
   * @param <tt>oDitto</tt>
   * [out] Address where the returned pointer to the interface is located.
   */
  virtual HRESULT InstanciateDitto(CATI2DDetail *iDetail,const IID &iid,IUnknown **oDitto) = 0;
  
#ifdef CATIAR210
#else
  /**
   * @nodoc
   */
  virtual CATISpecObject_var CreateConic(double *excentricity,const double *pPoint1,const double *pPoint2,const double *pPoint3=NULL,const double *pPoint4=NULL,const double *pPoint5=NULL,const double *pTangent1=NULL,const double *pTangent2=NULL) = 0;
  
  /**
   * @nodoc
   */
  virtual HRESULT GetConicPoints(const int iNbPts, const double *exc, const double *xP1,const double *xP2,const double *xP3,const double *xP4,const double *xP5,const double *xT1,const double *xT2, double *oPts) = 0;
  
#endif
  /**
   * @nodoc
   * Creates a 2D polyline.
   * @param <tt>nPoints</tt>
   * [in] number of 2D points.
   * @param <tt>pPoints</tt>
   * [in] 2D point coordinates.
   * @param <tt>isClosed</tt>
   * [in] if TRUE, an additional arc will be created between the last and the first points to close the polyline curve.
   * @returns a handler on the created object.
   */
  virtual CATISpecObject_var CreatePolyline(const unsigned long  nPoints,const double *pPoints,const boolean isClosed) =0;

  /**
   * Creates the silhouette of a surface.
   * @param <tt>iGeom</tt>
   * [in] External geometric element
   * @param <tt>oGeoms</tt>
   * [out] List of handlers on the created objects.
   * @param <tt>iPhantom</tt>
   * [in] Creation mode.
   * <dl>
   * <dt> <tt>1</tt>  <dd> The geometric elements are created in phantom mode (invisible).
   * <dt> <tt>0</tt>  <dd> The geometric elements are created in standard mode (visible).
   * </dl>
   * @param <tt>iNearGeom</tt>
   * [in] Optional external geometric element to keep the nearest solution.
   * @param <tt>iSel2DPt</tt>
   * [in] Optional 2D point coordinates to keep only the nearest solution
   * @param <tt>iDatum</tt>
   * [in] Datum mode.
   * <dl>
   * <dt> <tt>1</tt>  <dd> The generated geometric elements are not associative.
   * <dt> <tt>0</tt>  <dd> The generated geometric elements are associative.
   * </dl>
   * @returns a handler on the created object.
   */
  virtual CATISpecObject_var SilhouetteGeometry(const CATBaseUnknown_var &iGeom,
                                                CATListValCATI2DWFGeometry_var &oGeoms,
                                                const int iPhantom=0,
                                                CATBaseUnknown *iNearGeom=NULL,
                                                const double *iSel2DPt=NULL,
                                                const int iDatum=0) = 0;

  /**
   * Creates a 2D cubic spline curve (degree = 3).
   * @param <tt>iPoints</tt>
   * [in] List of spline control points.
   * @param <tt>iEvaluationType</tt>
   * [in] Evaluation mode (NOT USED).
   * @returns a handler on the created object.
   */
  virtual CATISpecObject_var CreateCubicSplineCurve(const CATListValCATI2DPoint_var &iPoints,const int iEvaluationType) = 0;

  /**
   * Offsets 3D geometry.
   * @param <tt>iCornerType</tt>
   * [in] Corner computation mode.
   * @param <tt>iRefGeom</tt>
   * [in] External geometric element.
   * @param <tt>iValue</tt>
   * [in] Signed offset value.
   * @param <tt>iPropagType</tt>
   * [in] Optional propagation mode. See CAT2DOffsetDefs.
   * @param <tt>iInitGeom</tt>
   * [in] Optional external geometric element to keep the nearest solution.
   * @param <tt>iIniPt</tt>
   * [in] Optional 2D point coordinates to keep the nearest solution.
   * @param <tt>iCanonic</tt>
   * [in] To manage canonicity.
   * @param <tt>iExtrapolMode</tt>
   * [in] To manage extrapolation.
   * @returns a handler on the created object.
   */
  virtual CATISpecObject_var OffsetGeometry(const int         iCornerType,
                                            CATBaseUnknown   *iRefGeom, 
                                            const double      iValue,
                                            const int         iPropagType=OffsetPropagType_None,
                                            CATBaseUnknown   *iInitGeom=NULL,
                                            const double     *iInitPt=NULL,
                                            const int         iOperMode=0,
                                            const int         iCanonical=1,
                                            const int         iExtrapolMode=0) = 0;
  /**
   * Creates a 2D connecting curve between two 2D curves.
   * @param <tt>iCurve1</tt>
   * [in] First 2D curve to connect.
   * @param <tt>iPoint1</tt>
   * [in] 2D start point for the connecting curve.
   * @param <tt>iCurve2</tt>
   * [in] Second 2D curve to connect.
   * @param <tt>iPoint2</tt>
   * [in] 2D end point for the connecting curve.
   * @param <tt>iIID</tt>
   * [in] Interface identifier for which a pointer is requested.
   * @param <tt>oConnect</tt>
   * [out] Pointer to the created connecting curve
   * @param <tt>iContinuity1</tt>
   * [in] Optional: Continuity with first curve.
   * <br><b>Legal values</b>: 
   * <dl><dt>0</dt><dd>C0 - point continuity
   * <dt>1</dt><dd>C1 - tangent continuity
   * <dt>2</dt><dd>C2 - curvature continuity
   * </dl>
   * @param <tt>iContinuity2</tt>
   * [in] Optional: Continuity with second curve.
   * <br><b>Legal values</b>: 
   * <dl><dt>0</dt><dd>C0 - point continuity
   * <dt>1</dt><dd>C1 - tangent continuity
   * <dt>2</dt><dd>C2 - curvature continuity
   * </dl>
   * @param <tt>iOrientation1</tt>
   * [in] Optional: If same orientation, the connecting curve starts tangent to iCurve1 at iPoint1.
   * <br><b>Legal values</b>: 
   * <dl><dt>1</dt><dd>same orientation
   * <dt>-1</dt><dd>opposite orientation
   * </dl>
   * @param <tt>iOrientation2</tt>
   * [in] Optional: If same orientation, the connecting curve ends tangent to iCurve2 at iPoint2.
   * <br><b>Legal values</b>: 
   * <dl><dt>1</dt><dd>same orientation
   * <dt>-1</dt><dd>opposite orientation
   * </dl>
   * @param <tt>iTension1</tt>
   * [in] Optional: Standard tension = 1.0; increase this value to straighten the connecting curve.
   * @param <tt>iTension2</tt>
   * [in] Optional: Standard tension = 1.0; increase this value to straighten the connecting curve.
   * @see CATI2DConnectCurve
   */
  virtual HRESULT CreateConnectCurve(CATBaseUnknown  *iCurve1,
                                     CATBaseUnknown  *iPoint1,                                     
                                     CATBaseUnknown  *iCurve2,
                                     CATBaseUnknown  *iPoint2,
                                     const IID &      iid,
                                     CATBaseUnknown **oConnect,
                                     const int        iContinuity1=2,
                                     const int        iContinuity2=2,
                                     const int        iOrient1=1,
                                     const int        iOrient2=1,
                                     const double     iTension1=1.0,
                                     const double     iTension2=1.0) = 0;


/**
   * Creates a 2D conic curve.
   * @param <tt>iStartPoint</tt>
   * [in] Starting point of conic curve.
   * @param <tt>iEndPoint</tt>
   * [in] Ending point of conic curve.
   * @param <tt>iIID</tt>
   * [in] Interface identifier for which a pointer is requested.
   * @param <tt>oConic</tt>
   * [out] Pointer to the created conic curve.
   * @param <tt>iFirstIntermediatePoint</tt>
   * [in] Optional: First intermediate passing thru point.
   * @param <tt>iFirstIntermediateTangent</tt>
   * [in] Optional: Tangent at the first intermediate passing thru point.
   * @param <tt>iSecondIntermediatePoint</tt>
   * [in] Optional: Second intermediate passing thru point.
   * @param <tt>iSecondIntermediateTangent</tt>
   * [in] Optional: Tangent at the second intermediate passing thru point.
   * @param <tt>iThirdIntermediatePoint</tt>
   * [in] Optional: Third intermediate passing thru point.
   * @param <tt>iTangentIntersectionPoint</tt>
   * [in] Optional: Tangent intersection point.
   * @param <tt>iConicParm</tt>
   * [in] Optional: Conic parameter.
   * <br><b>Legal values</b>: 
   * <dl><dt>>0</dt><dd>should be greater than 0
   * <dt>0.5</dt><dd>default value
   * <dt><1</dt><dd>should be lower than 1
   * </dl>
   * @see CATI2DConicCurve
   */
  virtual HRESULT CreateConicCurve(CATBaseUnknown  *iStartPoint,
                                   CATBaseUnknown  *iEndPoint,    
                                   const IID &      iIID,
                                   CATBaseUnknown **oConic,
                                   CATBaseUnknown  *iStartTangent=NULL,    
                                   CATBaseUnknown  *iEndTangent=NULL,    
                                   CATBaseUnknown  *iFirstIntermediatePoint=NULL,
                                   CATBaseUnknown  *iFirstIntermediateTangent=NULL,
                                   CATBaseUnknown  *iSecondIntermediatePoint=NULL,
                                   CATBaseUnknown  *iSecondIntermediateTangent=NULL,
                                   CATBaseUnknown  *iThirdIntermediatePoint=NULL,
                                   CATBaseUnknown  *iTangentIntersectionPoint=NULL,
                                   const double     iConicParm=0.5) = 0;
  /**
   * Creates a 2D offset curve of a 2D curve.
   * @param <tt>iCornerType</tt>
   * [in] Corner computation mode.
   * @param <tt>iRefGeom</tt>
   * [in] Offseted curve.
   * @param <tt>iValue</tt>
   * [in] Signed offset value.
   * @returns a handler on the created object.
   */
  virtual CATISpecObject_var CreateOffsetCurve(const int         iCornerType,
                                               CATBaseUnknown   *iRefGeom, 
                                               const double      iValue) = 0;


  /**
   * Creates a 2D Output Geometry from 2D Geometry.
   * @param <tt>iGeom</tt>
   * [in] 2D Geometry of the current sketch.
   * @param <tt>iIID</tt>
   * [in] Interface identifier for which a pointer is requested.
   * @param <tt>oOutput</tt>
   * [out] Pointer to the created Output Geometry
   */
  virtual HRESULT CreateOutput(CATBaseUnknown  *iGeom,
                               const IID &      iid,
                               CATBaseUnknown **oOutput) = 0;



  /**
   * Creates an Arc on a 2D Curve.
   * @param <tt>iCurve</tt>
   * [in] The curve on which the arc must be created.
   * @param <tt>iPoint1</tt>
   * [in] 2D start point for the arc.
   * @param <tt>iPoint2</tt>
   * [in] 2D end point for the arc.
   * @param <tt>iIID</tt>
   * [in] Interface identifier for which a pointer is requested.
   * @param <tt>oArc</tt>
   * [out] Pointer to the created Arc.
   */
  virtual HRESULT CreateArc(CATBaseUnknown  *iCurve1,
                            CATBaseUnknown  *iPoint1,                                     
                            CATBaseUnknown  *iPoint2,
                            const IID &      iid,
                            CATBaseUnknown **oArc) = 0;

#ifdef CATIAR210
#else
  /**
   * @nodoc
   */
  virtual HRESULT Convert3DGeometry(CATBaseUnknown                 *i3DGeom, 
                                    CATListValCATI2DWFGeometry_var& o2DGeoms,
                                    const int                       iCanonical=1) = 0;
#endif
  /**
   * Creates a Fix Together Constraint (rigid set) of 2D Geometries.
   * @param <tt>io2DGeoms</tt>
   * [in/out] The set of geometries on which the Fix Together must be created.
   * The list of geometries with/without dependencies is returned after creation.
   * @param <tt>iIID</tt>
   * [in] Interface identifier for which a pointer is requested.
   * @param <tt>oFixTogether</tt>
   * [out] Pointer to the created Fix Together Constraint.
   * @param <tt>iAddFamily</tt>
   * [in] Optional: Dependencies management.
   * <br><b>Legal values</b>: 
   * <dt>0</dt><dd>Not management of dependencies
   * <dt><1</dt><dd>default value: the geometries will be added with their dependencies 
   * </dl>
   * @see CATI2DFixTogether
   */

  virtual HRESULT FixTogether(CATListValCATI2DWFGeometry_var& io2DGeoms,
                              const IID&                      iIID,
                              CATBaseUnknown                **oFixTogether,
                              const int                       iAddFamily=1) = 0;

  /**
   * Creates a 2D Output Profile from 2D Geometries.
   * @param <tt>io2DGeoms</tt>
   * [in/out] The set of geometries that defines the profile domain.
   * @param <tt>iIID</tt>
   * [in] Interface identifier for which a pointer is requested.
   * @param <tt>oOutput</tt>
   * [out] Pointer to the created Output Profile
  */
  virtual HRESULT CreateOutputProfile(CATListValCATBaseUnknown_var& i2DGeoms,
                                      const IID &                   iIID,
                                      CATBaseUnknown              **oOutput) = 0;
  /**
   * @nodoc
   * Creates a 2D ConcatenatedCurve from 2D Geometries.
   * @param <tt>io2DGeoms</tt>
   * [in] The set of geometries that defines the concatenation domain.
   * @param <tt>iIID</tt>
   * [in] Interface identifier for which a pointer is requested.
   * @param <tt>oConcatenatedCurve</tt>
   * [out] Pointer to the created ConcatenatedCurve
  */
  virtual HRESULT CreateConcatenatedCurve(const CATListValCATBaseUnknown_var& i2DGeoms,
                                          const IID &                         iIID,
                                          CATBaseUnknown                    **oConcatenatedCurve) = 0;


	/**
	* Creates a 2D Output axis Geometry from 2D point.
	* @param <tt>iGeom</tt>
	* [in] 2D Geometry of the current sketch.
	* @param <tt>iIID</tt>
	* [in] Interface identifier for which a pointer is requested.
	* @param <tt>oOutput</tt>
	* [out] Pointer to the created Output Geometry
	*/
	virtual HRESULT CreateOutputAxis(CATBaseUnknown  *iGeom,
		                                const IID &      iid,
	                                	CATBaseUnknown **oOutput) = 0;

	/**
	* Creates a 2D Output plane from 2D line.
	* @param <tt>iGeom</tt>
	* [in] 2D Geometry of the current sketch.
	* @param <tt>iIID</tt>
	* [in] Interface identifier for which a pointer is requested.
	* @param <tt>oOutput</tt>
	* [out] Pointer to the created Output Geometry
	*/
	virtual HRESULT CreateOutputPlane(CATBaseUnknown  *iGeom,
	                                	const IID &      iid,
	                                	CATBaseUnknown **oOutput) = 0;
  /**
   * Creates a 2D clothoid curve.
   * @param <tt>iInitialCurve</tt>
   * [in] Tangent curve at the initial extremity of the clothoid curve.
   * @param <tt>iInitialOrient</tt>
   * [in] Optional: Orientation to be applied to the initial tangent.
   * <br><b>Legal values</b>: 
   * <dl><dt>1</dt><dd>same orientation
   * <dt>-1</dt><dd>opposite orientation
   * </dl>
   * @param <tt>iInitialPoint</tt>
   * [in] Optional: Initial point. Useless when final extremity is defined with a circle.
   * @param <tt>iInitialSide</tt>
   * [in] Optional: Defines on which side of its initial oriented tangent the curve will turn. 
   * Useless when final extremity is defined with a circle or a point.
   * <br><b>Legal values</b>: 
   * <dl><dt>1</dt><dd>left side
   * <dt>0</dt><dd>undefined
   * <dt>-1</dt><dd>right side
   * </dl>
   * @param <tt>iFinalGeom</tt>
   * [in] Optional: 2D Geometry defining totally or partially the final extremity of the clothoid curve. 
   * It may be null, or a point, a line, or a circle. If null, both Param1 and Param2 are required.
   * A line specifies the tangent at the final extremity of the curve. Then Param1 is required and cannot be an angle.
   * A point or a circle does not require any additional parameter. 
   * @param <tt>iFinalOrient</tt>
   * [in] Optional: Orientation to be applied to the final tangent when iFinalGeom is a line.
   * <br><b>Legal values</b>: 
   * <dl><dt>1</dt><dd>same orientation
   * <dt>0</dt><dd>undefined
   * <dt>-1</dt><dd>opposite orientation
   * </dl>
   * @param <tt>iParam1Type</tt>
   * [in] Optional: Specifies which kind of parameter is used as first parameter. 
   * @see enum CAT2DClothoidParamType.
   * @param <tt>iParam1</tt>
   * [in] Optional: Value of the first parameter.
   * @param <tt>iParam2Type</tt>
   * [in] Optional: Specifies which kind of parameter is used as second parameter.
   * @see enum CAT2DClothoidParamType.
   * @param <tt>iParam2</tt>
   * [in] Optional: Value of the second parameter.
   * @returns a handler on the created object if any.
   * @see CATI2DClothoidCurve
   */
  virtual CATISpecObject_var CreateClothoid(CATBaseUnknown *iInitialCurve,
	                                          const int       iInitialOrient=1,
                                            CATBaseUnknown *iInitialPoint=NULL,
                                            const int       iInitialSide=0,    
                                            CATBaseUnknown *iFinalGeom=NULL, 
                                            const int       iFinalOrient=0,
                                            const int       iParam1Type=0,
                                            const double   *iParam1=NULL,
                                            const int       iParam2Type=0, 
                                            const double   *iParam2=NULL) = 0;
};

CATDeclareHandler(CATI2DWFFactory,CATBaseUnknown);

#endif
