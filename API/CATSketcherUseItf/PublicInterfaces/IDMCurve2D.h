/* -*-c++-*- */
#ifndef IDMCurve2D_h
#define IDMCurve2D_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATBooleanDef.h"
#include "CATSketcherUseItf.h"

/**
 * OLE for Design and Modeling 2D Curve Definition.
 * <b>Role</b>: This interface is the 2D counterpart of IDMCurve. It serves to
 * provide the Client with the information related to the geometric content of
 * the object that is applicable to 2D curves of all types. When this interface 
 * occurs on an EdgeUse object, all the arguments returned are within the 
 * context of the associated IDMEdgeUse, respectively (eg: the flow direction 
 * is that of the EdgeUse object).<br>
 * The curve may have discontinuities. In which case, an evaluation request at 
 * such locations on the curve may either yield a failure or, at best, an 
 * approximation of the requested quantity. For example -- a request to evaluate 
 * the curvature at a discontinuity may result in the Server returning a failure 
 * code. Whereas, a request to evaluate a tangent at a discontinuity may result 
 * in the Server returning an average of the 'before' and 'after' tangents at 
 * that point. This interface does not attempt to provide the detailed information 
 * at the discontinuity. This is left as the task of some other interface that may 
 * be supported by the object. However, this interface does provide sufficient 
 * information for a Client to learn that this curve may give problems that arise 
 * from such situations.
 */

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSketcherUseItf IID IID_IDMCurve2D;
#else
extern "C" const IID IID_IDMCurve2D;
#endif

class ExportedByCATSketcherUseItf IDMCurve2D : public CATBaseUnknown
{
  CATDeclareInterface;

public:                                      

/**
 * There is a specific type associated with the curve geometry. This method 
 * returns the REFIID (GUID) of the interface that represents this type. The 
 * interfaces of the special types of the curve are defined elsewhere in this 
 * document. Examples of the type of curves are -- circle, ellipse, line, 
 * polyline, B-spline, etc. These specialized interfaces return the data that 
 * make up the underlying curve geometry.
 * It is possible that the Server decides not to expose it's underlying specific 
 * type. This may largely be due to the fact that the type is undocumented and 
 * proprietary. In this case, IID_IUnknown may be returned. 
 * @param <tt>CATClassId &pRefIID</tt>
 * [out] Outputs the REFIID of the specific geometry interface. IID_IUnknown 
 * may be output if a REFIID equivalent to the underlying specific type does 
 * not exist.
 */
  virtual HRESULT GetCurveType (GUID *pRefIID) = 0;

/**
 * The range box (also known as bounding box) is axially-aligned within the local 
 * coordinate system of the Server. The range box returned bounds the curve.
 * @param <tt>double *pMinPoint</tt>
 * [out] Outputs the minimum x,y point of the range box.
 * @param <tt>double *pMaxPoint</tt>
 * [out] Outputs the maximum x,y point of the range box.
 */
  virtual HRESULT GetRangeBox (double *pMinPoint,double *pMaxPoint) = 0;

/**
 * This method returns the end-points of the curve. The start point and the end 
 * point are decided with  respect to the logical flow imposed on the curve by 
 * the object.
 * @param <tt>double *pStartPoint</tt>
 * [out] Outputs the start point of the curve.
 * @param <tt>double *pEndPoint</tt>
 * [out] Outputs the end point of the curve.
 */
  virtual HRESULT GetEndPoints (double *pStartPoint,double *pEndPoint) = 0;

/**
 * This method returns the parametric extents of the curve. This is the parametric 
 * equivalent of the end-points.
 * @param <tt>double *pStartParam</tt>
 * [out] Outputs the parameter associated with the start point of the curve.
 * @param <tt>double *pEndParam</tt>
 * [out] Outputs the parameter associated with the end point of the curve.
 */
  virtual HRESULT GetParamExtents (double *pStartParam,double *pEndParam) = 0;

/**
 * Given an array of 2D points lying near the curve, in the local coordinate system 
 * (X, Y) of the curve,  this method computes the parameter on the curve that 
 * corresponds to them. It also returns the maximum deviation from the ideal that 
 * this computation may have involved. This can be regarded as the tolerance that 
 * the Server used in calculating the parameter.
 * It is possible that there are more than one possible parameters for a given point
 * that satisfy this criterion or perhaps infini€tely many (e.g.: if the centre of 
 * the circle is input). But this method will return just one such solution. A status 
 * indicator is output for each point evaluated, which tells the caller if there was 
 * any ambiguity. The caller should attempt to provide the input points ON or VERY 
 * NEAR the curve to prevent such ambiguity from arising.
 * The Client can provide initial guess parametric points, if these are known. This 
 * would speed up the computation in several cases. If such a guess is not known, the 
 * argument should be passed in as NULL. If the Client decides to provide a guess, it 
 * should do so for ALL the points or none at all.
 * @param <tt>ULONG nParams</tt>
 * [in] Inputs the number of points to be evaluated.
 * @param <tt>double *pPoints</tt>
 * [in] Inputs the array of 2D points lying close to the curve.
 * @param <tt>double *pGuessParams</tt>
 * [in] Inputs array of parameters that are the initial guesses from the caller. Can be NULL if not
 * known. Array, if passed in, must correspond to the <tt>pPoints</tt> array.
 * @param <tt>double *pMaxDeviations</tt>
 * [out] Outputs the array of maximum deviation that has been allowed from the true point. Can be
 * <tt>NULL</tt> if not required. Array to be allocated by the caller to hold nPoints doubles.
 * @param <tt>double *pParams</tt>
 * [out] Outputs the array of computed parameters. Array to be allocated by the caller to hold nPoints
 * parameters.
 * @param <tt>DWORD * pFlags</tt>
 * [in] Outputs the array of computed parameters. Array to be allocated by the caller to hold <tt>nPoints</tt>
 * parameters. Outputs the array of flags indicating if there was any ambiguity about the computation.
 * Can be <tt>NULL</tt> if not required. Array, if passed in, must be able to hold <tt>nPoints</tt> <tt>DWORD</tt>s.
 * Possible values of the flag are:
 * <dl>
 * <dt> <tt>0</tt>    <dd> the parameter is unique.
 * <dt> <tt>1</tt>    <dd> there are distinctly many solutions.
 * <dt> <tt>2</tt>    <dd> there are infinitely many solutions.
 * </dl>
 */
  virtual HRESULT GetParamAtPoint (ULONG nParams,double *pPoints,double *pGuessParams,double *pMaxDeviations,double *pParams,DWORD * pFlags) = 0;

/**
 * Given an array of parameters on the curve, this method computes the corresponding 2D 
 * space points (X, Y) in the curve's local coordinate system.
 * @param <tt>ULONG nParams</tt>
 * [in] Inputs the number of parameters to be evaluated.
 * @param <tt>double *pParams</tt>
 * [in] Inputs the array of parameters to be evaluated.
 * @param <tt>double *pPoints</tt>
 * [out] Outputs the array of computed 2D space points. Array must be able to hold <tt>nParams</tt>
 * 2D points.
 */
  virtual HRESULT GetPointAtParam (ULONG nParams,double *pParams,double *pPoints) = 0;

/**
 * Given an array of parameter values on the curve, this method computes the unit-vector 
 * tangent at each of the points. The tangent is alway pointed in the direction of the 
 * logical flow of the curve. If no inherent logical flow can be assigned, the direction 
 * is the direction of increasing parameterization.
 * <b>NOTE:</b>
 * If an input parameter lies at a discontinuity in the curve (eg: at the cusp-forming, 
 * multiple knot on a B-Spline curve), there may not be a unique tangent to output. The 
 * Server outputs an average tangent, rather than fail. The computation is the average of 
 * the unique 'before' and 'after' tangent at that point. 'Before' being the limit of the 
 * tangent as one approaches the discontinuity and 'after' being the limit as one departs 
 * it. See also the GetContinuity and GetPointAtParam methods of this interface -- these 
 * enable the client to learn more about curve continuity.
 * @param <tt>ULONG nParams</tt>
 * [in] Inputs the number of parameters to be evaluated.
 * @param <tt>double * pParams</tt>
 * [in] Inputs the array of parameters to be evaluated.
 * @param <tt>double * pTangents</tt>
 * [out] Outputs the array of unit tangent vectors in the logical flow direction. 
 * Array to be allocated by the caller to hold nParams 2D vectors.
 */
  virtual HRESULT GetTangent (ULONG nParams,double *pParams,double *pTangents) = 0;

/**
 * Given an array of  parameters on the curve, this method computes the curvature of the 
 * curve at that point. It outputs the curvature direction as the unit-vector to the centre
 * of curvature. Curvature returned is always positive.<br>
 * <b>NOTE:</b>
 * Curvature direction and value at a point on a curve are defined by the osculating circle 
 * that passes through the point. The osculating circle is the limit of circles that pass 
 * through the point and two points on the curve close to the given point.<br>
 * The curvature direction is the direction of the vector from the point to the centre of 
 * the osculating circle. The curvature direction is always orthogonal to the tangent. 
 * Radius of curvature is 1/curvature. The value of curvature can be 0, indicating an 
 * infinite radius of curvature (line).<br>
 * <b>NOTE:</b>
 * If an input parametric point lies at a discontinuity in the curve (eg: at the cusp-forming, 
 * multiple knot-line on a B-Spline curve), the curvature is undefined and no approximations 
 * make sense. In this case, the method will fail. Even if one of the points to be evaluated 
 * fails, the method returns a failure code. See also the GetContinuity and GetPointAtParam 
 * methods of this interface -- these enable the Client to learn more about curve continuity.
 * @param <tt>ULONG nParams</tt>
 * [in] Inputs the number of parameters to be evaluated.
 * @param <tt>double *pParams</tt>
 * [in] Inputs the array of parameters at which to evaluate the curvatures.
 * @param <tt>double *pDirections</tt>
 * [out] Outputs the array of unit vectors pointing toward the centre of curvature. Can 
 * be <tt>NULL</tt> if not required. Array, if passed in, must be able to hold nParams 2D vectors.
 * @param <tt>double *pCurvatures</tt>
 * [out] Outputs the array of positive curvature values. The value returned may be 0, if 
 * the radius of curvature is infinite. Can be <tt>NULL</tt> if not required. Array, if passed in, must 
 * be allocated by the caller to hold nParams doubles.
 */
  virtual HRESULT GetCurvature (ULONG nParams,double *pParams,double *pDirections,double *pCurvatures) = 0;

/**
 * Given an array of parameters on the curve, this method evaluates the derivatives of the curve 
 * at these points. The derivatives upto the third order can be output. The caller can choose to 
 * not obtain any of the derivatives by simply specifying a <tt>NULL</tt> in place of the corresponding 
 * output argument.<br>
 * The derivatives are computed with respect to the raw curve geometry and without regard to the 
 * logical direction imposed by, say, the EdgeUse or any object that supports this interface. A 
 * Client can thus choose to operate in the raw geometry mode if it so wishes. Information as to 
 * whether the parametric sense of this underlying curve is opposed to the logical sense is 
 * available from this object's topology interface, if one exists, and can be applied at will to 
 * the resulting computations from this method. But Clients are encouraged to use the other methods 
 * of this interface that return "sensed" information directly, whenever applicable.<br>
 * <b>NOTE:</b>
 * If an input parameter lies at a discontinuity in the curve (eg: at the cusp-forming, multiple 
 * knot-line on a B-Spline curve), some or all of the derivatives may be undefined and no 
 * approximations make sense in the semantics of this method. In this case, the method will fail. 
 * Even if one of the parameters fail to evaluate a requested output, the method returns a failure 
 * code. See also the GetContinuity and GetPointAtParam methods of this interface -- these enable 
 * the Client to learn more about curve continuity.
 * @param <tt>ULONG nParams</tt>
 * [in] Inputs the number of parameters to be evaluated.
 * @param <tt>double *pParams</tt>
 * [in] Inputs the array of parameters at which to evaluate the curve.
 * @param <tt>double *pFirstDerivs</tt>
 * [out] Inputs the array of parameters at which to evaluate the curve. Outputs the array of first
 * derivatives. Can be <tt>NULL</tt> if not required. Array, if passed in, must be allocated by the caller
 * to hold <tt>nParams</tt> 2D vectors.
 * @param <tt>double *pSecondDerivs</tt>
 * [out] Outputs the array of second derivatives. Can be <tt>NULL</tt> if not required. Array, 
 * if passed in, must be allocated by the caller to hold <tt>nParams</tt> 2D vectors.
 * @param <tt>double *pThirdDerivs</tt>
 * [out] Outputs the array of third derivatives. Can be <tt>NULL</tt> if not required. Array, 
 * if passed in, must be allocated by the caller to hold <tt>nParams</tt> 2D vectors.
 */
  virtual HRESULT GetDerivatives (ULONG nParams,double *pParams,double *pFirstDerivs,double *pSecondDerivs,double *pThirdDerivs) = 0;

/**
 * This method outputs the parameter at a given length, measured along the curve,  starting from 
 * a given parameter. The direction of measurement is always in the direction of the logical flow 
 * of the curve. If no inherent logical flow can be assigned, the direction is the direction of 
 * increasing parameterization.<br>
 * If the input starting parameter is out of the bounds of the curve's parametric range, the 
 * function 'snaps' the value to the closest end point, before performing any computation. If the 
 * length being measured exceeds the bounds of the curve, the end point parameter is returned.
 * @param <tt>double FromParam</tt>
 * [in] Inputs the parameter from which the Length needs to be measured.
 * @param <tt>double Length</tt>
 * [out] Inputs the length of the curve to ne measured from pFromParam in the logical flow 
 * direction of the curve.
 * @param <tt>double *pParam</tt>
 * [out] Outputs the computed parameter.
 */
  virtual HRESULT GetParamAtLength (double FromParam,double Length,double *pParam) = 0;

/**
 * This method outputs the length, measured along the curve,  from a given parameter to a given 
 * parameter.<br>
 * If either of the input parameters are out of the bounds of the curve's parametric range, the 
 * function 'snaps' the value to the closest end point, before performing the computation.
 * @param <tt>double FromParam</tt>
 * [in] Inputs the parameter from which the length is to be measured.
 * @param <tt>double ToParam</tt>
 * [in] Inputs the parameter to which the length is to be measured.
 * @param <tt>double *pLength</tt>
 * [out] Outputs the length between the parameters.
 */
  virtual HRESULT GetLengthAtParam (double FromParam,double ToParam,double *pLength) = 0;

/**
 * This method returns the highest level of geometric continuity, the curve possesses. For example, 
 * if the curve is G1 continuous everywhere, but not G2 continuous at a specific location, this 
 * method returns the level as 1, indicating a G1 continuous curve.<br>
 * Typically, a curve will not bother to count itself as any higher than G3 continuous even if 
 * it is continuously differentiable beyond the 3rd derivative. Methods in this interface deal 
 * with derivatives only as high as the third. Moreover, if the Server cannot determine or finds 
 * it difficult to determine its true, highest continuity rating, it will return a lower level of 
 * which it is certain.
 * @param <tt>DWORD *nLevel</tt>
 * [out] Outputs the maximum geometric continuity level, the Server can be certain this curve 
 * possesses.
 */
  virtual HRESULT GetContinuity (DWORD *nLevel) = 0;

/**
 * Typically, a curve's parametric space can be expected to be finite. That is, there is a one-to-one,
 * unique mapping between a point in the parametric space to a point in the 2D space. But in several 
 * situations a Server might find it best to implement a curve with a parameter space that does not 
 * conform to this rule. Parametric spaces with periodicity is the case in point. This method returns 
 * information to the Client, indicating any such periodicity that might exist.<br>
 * In the case of curves that degenerate to a point, the entire parametric space maps to the same 
 * 2D point. Such a singularity, if it exists, is indicated by an output Boolean flag.
 * <b>NOTE:</b>
 * A curve regarded as periodic will have the end-points of its primary parametric range, map to 
 * identical points in model space AND have the derivatives match up. The parameter space of such a 
 * curve can now be considered as infinite, formed by repeating the primary range, indefinitely. 
 * The length of the primary range is called the period of the curve. The curve continues to be 
 * defined for all values in this infinite space by reducing a given parameter modulo the period 
 * into this primary range. This method will return the period (0 if the parameter space is not 
 * periodic) and the origin of the primary periodic range (typically, 0).
 * HRESULT GetParamAnomaly (double pPeriodicity [2], boolean* pIsSingular)
 *   pPeriodicity	
 *   pIsSingular	Outputs TRUE if the parametric space is singular and the entire range maps to the 
 *               same point.
 * @param <tt>double *pPeriodicity</tt>
 * [out] Outputs the period in the first element of the array, when the curve is periodic.
 * The value will be identically 0 if the curve is non-periodic. The second element contains the origin
 * of the primary periodic range.
 * @param <tt>boolean *pIsSingular</tt>
 * [out] Outputs <tt>TRUE</tt> if the parametric space is singular and the entire range maps to the 
 * same point.
 */
  virtual HRESULT GetParamAnomaly (double *pPeriodicity,boolean *pIsSingular) = 0;

/**
 * This method returns high-level geometric property information that characterizes this curve-based 
 * object. The DWORD returned consists of properties that this object exhibits. The properties are 
 * selected out of the <tt>enum DMCVGEOMETRYFORM</tt>.
 * @param <tt>DWORD *pForm</tt>
 * [out] Outputs the union of the properties the Client might encounter on the object. The 
 * properties are selected from the <tt>enum DMCVGEOMETRYFORM</tt>.
 */
  virtual HRESULT GetGeometryForm (DWORD *pForm) = 0;

};

CATDeclareHandler(IDMCurve2D,CATBaseUnknown);

#endif
