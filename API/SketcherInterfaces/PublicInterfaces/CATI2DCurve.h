/* -*-c++-*- */
#ifndef CATI2DCurve_h
#define CATI2DCurve_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IDMCurve2D.h"
#include "CATSketcherInterfaces.h"

class CATI2DPoint_var;
class CATISpecObject_var;

/**
 * 2D Curve Definition.
 * <b>Role</b>: This interface provides the client with the information related to 2D curves.
 */

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSketcherInterfaces IID IID_CATI2DCurve;
#else
extern "C" const IID IID_CATI2DCurve;
#endif

class ExportedByCATSketcherInterfaces CATI2DCurve : public IDMCurve2D
{
  CATDeclareInterface;

public:                                      
  /**
   * Tells if curve is closed.
   * @return <tt>int</tt>
   * <dl>
   * <dt> <tt>1</tt>  <dd> The curve is closed.
   * <dt> <tt>0</tt>  <dd> The curve is not closed.
   * </dl>
   */
  virtual int IsClosed() = 0;
  /**
   * Tells if curve is trimmed.
   * @return <tt>int</tt>
   * <dl>
   * <dt> <tt>1</tt>  <dd> The curve is timmed.
   * <dt> <tt>0</tt>  <dd> The curve is not trimmed.
   * </dl>
   */
  virtual int IsATrimmedCurve() = 0;
  /**
   * Returns the start point of the 2D curve.
   * @return <tt>CATI2DPoint_var</tt>
   * A handler on the start point or NULL_var if not defined.
   */
  virtual CATI2DPoint_var ReadStartPoint() = 0;
  /**
   * Returns (or create) the start point of the 2D curve.
   * @return <tt>CATI2DPoint_var</tt>
   * A handler on the start point.
   */
  virtual CATI2DPoint_var GetStartPoint() = 0;
  /**
   * Defines the start point coordinates of the 2D curve.
   * @param <tt>const double *iPoint</tt>
   * [in] The 2D point coordinates.
   * @return <tt>CATI2DPoint_var</tt>
   * A handler on the start point.
   */
  virtual CATI2DPoint_var SetStartPoint(const double *iPoint) = 0;
  /**
   * Defines the start point of the 2D curve.
   * @param <tt>const CATI2DPoint_var &iPoint</tt>
   * [in] The handler on the 2D point.
   * @param <tt>int *ioKeepPreviousLimitPoint</tt>
   * [in/out] This argument can be used to erase or keep the previous start point.
   * [in]
   * 1/ If the argument is omitted, or if its value is 0 (zero), the behavior is identical:
   * The preceding start point will be erased, if it existed and
   * if it is not used any more (no constraint references it,
   * it is not limit point of another element).
   * 2/ If the argument value is not zero, the preceding start point will not be erased.
   * [out]
   * 1/ If the input value of this argument was 0, or if it was omitted,
   * the value of output is not significant.
   * 2/ If the input value of this argument was 1, the output value indicates if the point could
   * have been erased or not:
   * Value 2 of output indicates that the previous start point is now isolated,
   *  and that it can be erased without consequence.
   * Value 3 of output indicates that the previous start point is not isolated,
   *  and that its erasure is not without consequence.
   * @return <tt>int</tt>
   *  EXIT_SUCCESS
   *  EXIT_FAILURE
   *
   */
  virtual int SetStartPoint(const CATI2DPoint_var &iPoint,int *ioKeepPreviousLimitPoint=NULL) = 0;
  /**
   * Returns the end point of the 2D curve.
   * @return <tt>CATI2DPoint_var</tt>
   * A handler on the end point or NULL_var if not defined.
   */
  virtual CATI2DPoint_var ReadEndPoint() = 0;  
  /**
   * Returns (or create) the end point of the 2D curve.
   * @return <tt>CATI2DPoint_var</tt>
   * A handler on the end point.
   */
  virtual CATI2DPoint_var GetEndPoint() = 0;  
  /**
   * Defines the end point coordinates of the 2D curve.
   * @param <tt>const double *iPoint</tt>
   * [in] The 2D point coordinates.
   * @return <tt>CATI2DPoint_var</tt>
   * A handler on the end point.
   */
  virtual CATI2DPoint_var SetEndPoint(const double *iPoint) = 0;
  /**
   * Defines the end point of the 2D curve.
   * @param <tt>const CATI2DPoint_var &iPoint</tt>
   * [in] The handler on the 2D point.
   * @param <tt>int *ioKeepPreviousLimitPoint</tt>
   * [in/out] This argument can be used to erase or keep the previous end point.
   * [in]
   * 1/ If the argument is omitted, or if its value is 0 (zero), the behavior is identical:
   * The preceding end point will be erased, if it existed and
   * if it is not used any more (no constraint references it,
   * it is not limit point of another element).
   * 2/ If the argument value is not zero, the preceding end point will not be erased.
   * [out]
   * 1/ If the input value of this argument was 0, or if it was omitted,
   * the value of output is not significant.
   * 2/ If the input value of this argument was 1, the output value indicates if the point could
   * have been erased or not:
   * Value 2 of output indicates that the previous end point is now isolated,
   *  and that it can be erased without consequence.
   * Value 3 of output indicates that the previous end point is not isolated,
   *  and that its erasure is not without consequence.
   * @return <tt>int</tt>
   *  EXIT_SUCCESS
   *  EXIT_FAILURE
   *
   */
  virtual int SetEndPoint(const CATI2DPoint_var &iPoint,int *ioKeepPreviousLimitPoint=NULL) = 0;
  virtual CATISpecObject_var GetGeneratingElement() = 0;
  /**
   * Returns a discretisation of the curve satisfying a given sag.
   * @param <tt>double iStartParam</tt>
   * [in] The parameter of the start point.
   * @param <tt>double iEndParam</tt>
   * [in] The parameter of the end point.
   * @param <tt>double iSag</tt>
   * [in] The sag (must be strictly greater than 0).
   * @param <tt>int *oSize</tt>
   * [out] The number of points computed.
   * @param <tt>double **oParams</tt>
   * [out] If not NULL, *oParams contains the computed parameters. Must be freeded by caller (delete [] *oParams).
   * @param <tt>double **oPoints</tt>
   * [out] If not NULL, *oPoints contains the computed points. Must be freeded by caller (delete [] *oPoints).
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT GetDiscretisation(double iStartParam,double iEndParam,double iSag,
                                    int *oSize,double **oParams,double **oPoints) = 0;
  /**
   * Tells if the edge chooses a specific direction of parameterization as its inerent one.
   * @param <tt>int *oReversed</tt>
   * [out] The edge's direction compared with the flow dictated by the parameterization of the underlying curve geometry.
   * <dl>
   * <dt> <tt>1</tt>  <dd> The edge's direction is opposed to underlying curve geometry.
   * <dt> <tt>0</tt>  <dd> The edge's direction is the same as underlying curve geometry.
   * </dl>
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT IsParamReversed(int *oReversed) = 0;
  /**
   * Reverses the direction of the parametrization.
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT ReverseParam() = 0;
  /**
   * This method returns the parametric extents of the specified arc of the curve, when it exists. 
   * It also returns the number of arcs defined on the curve.
   * @param <tt>int& ioArc</tt>
   * [in/out] This argument can be used to retrieve the number of arcs defined on the curve, or specify for which arc the parametric extent is retrieved.
   * [in]  If the argument value is not zero, it will be used to specify for which arc the parametric extent is retrieved.
   * [out] If the argument value is 0, it will be set to the number of arcs defined on the curve.
   * @param <tt>double *pStartParam</tt>
   * [out] Outputs the parameter associated with the start point of the specified arc.
   * @param <tt>double *pEndParam</tt>
   * [out] Outputs the parameter associated with the end point of the specified arc.
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT GetArcParamExtents(int& ioArc, double *pStartParam,double *pEndParam) = 0;
};

CATDeclareHandler(CATI2DCurve,IDMCurve2D);

#endif
