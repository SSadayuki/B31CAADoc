/* -*-c++-*- */
#ifndef CATI2DConnectCurve_h
#define CATI2DConnectCurve_h

// COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATSketcherInterfaces.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSketcherInterfaces IID IID_CATI2DConnectCurve;
#else
extern "C" const IID IID_CATI2DConnectCurve;
#endif

/**
 * Interface to 2D connect curve feature.
 * <b>Role</b>: Allows you to access data of the Connect Curve feature created by using 
 * two curves, two points, orientations, continuity, tension options
 * Get, set the Connect definition elements
 * @see CATI2DWFFactory#CreateConnectCurve
 */

class ExportedByCATSketcherInterfaces CATI2DConnectCurve : public CATBaseUnknown
{
   CATDeclareInterface;
public: 
  
  /**
   * Gets the first reference curve.
   * @param <tt>iIID</tt>
   * [in] Interface identifier for which a pointer is requested.
   * @param <tt>oCurve</tt>
   * [out] Pointer to the first reference curve.
   */ 
 virtual HRESULT GetFirstCurve(const IID &iIID, CATBaseUnknown **oCurve) = 0;

  /**
   * Gets the second reference curve.
   * @param <tt>iIID</tt>
   * [in] Interface identifier for which a pointer is requested.
   * @param <tt>oCurve</tt>
   * [out] Pointer to the second reference curve.
   */ 
 virtual HRESULT GetSecondCurve(const IID &iIID, CATBaseUnknown **oCurve) = 0;
 
  /**
   * Gets the first reference point.
   * @param <tt>iIID</tt>
   * [in] Interface identifier for which a pointer is requested.
   * @param <tt>oPoint</tt>
   * [out] Pointer to the first reference point.
   */ 
 virtual HRESULT GetFirstPoint(const IID &iIID, CATBaseUnknown **oPoint) = 0;

  /**
   * Gets the second reference point.
   * @param <tt>iIID</tt>
   * [in] Interface identifier for which a pointer is requested.
   * @param <tt>oPoint</tt>
   * [out] Pointer to the second reference point.
   */ 
 virtual HRESULT GetSecondPoint(const IID &iIID, CATBaseUnknown **oPoint) = 0;

  /**
   * Gets the first orientation.
   * @param <tt>oOrient</tt>
   * [out] Orientation of the first reference curve.
   * <dl>
   * <dt> <tt>  1 </tt> <dd> Same orientation
   * <dt> <tt> -1 </tt> <dd> Opposite orientation
   * </dl>
   */ 
 virtual HRESULT GetFirstOrientation(int *oOrientation) = 0;

  /**
   * Gets the second orientation.
   * @param <tt>oOrient</tt>
   * [out] Orientation of the second reference curve.
   * <dl>
   * <dt> <tt>  1 </tt> <dd> Same orientation
   * <dt> <tt> -1 </tt> <dd> Opposite orientation
   * </dl>
   */ 
 virtual HRESULT GetSecondOrientation(int *oOrientation) = 0;

  /**
   * Gets the first continuity.
   * @param <tt>oContinuity</tt>
   * [out] Continuity of the first reference curve.
   * <dl>
   * <dt> <tt> 0 </tt> <dd> Continuity in point
   * <dt> <tt> 1 </tt> <dd> Continuity in tangency
   * <dt> <tt> 2 </tt> <dd> Continuity in curvature
   * </dl>
   */
 virtual HRESULT GetFirstContinuity(int *oContinuity) = 0;

  /**
   * Gets the second continuity.
   * @param <tt>oContinuity</tt>
   * [out] Continuity of the second reference curve.
   * <dl>
   * <dt> <tt> 0 </tt> <dd> Continuity in point
   * <dt> <tt> 1 </tt> <dd> Continuity in tangency
   * <dt> <tt> 2 </tt> <dd> Continuity in curvature
   * </dl>
   */
 virtual HRESULT GetSecondContinuity(int *oContinuity) = 0;

  /**
   * Gets the first tension.
   * @param <tt>oTension</tt>
   * [out] Tension of the first reference curve.
   * <dl>
   * Must be strictly greater than 0
   * </dl>
   */
 virtual HRESULT GetFirstTension(double *oTension) = 0;

  /**
   * Gets the second tension.
   * @param <tt>oTension</tt>
   * [out] Tension of the second reference curve.
   * <dl>
   * Must be strictly greater than 0
   * </dl>
   */
 virtual HRESULT GetSecondTension(double *oTension) = 0;

  /**
   * Sets the first reference curve.
   * @param <tt>iCurve</tt>
   * [in] Pointer to the first reference curve.
   */ 
 virtual HRESULT SetFirstCurve(CATBaseUnknown *iCurve) = 0;

  /**
   * Sets the second reference curve.
   * @param <tt>iCurve</tt>
   * [in] Pointer to the second reference curve.
   */ 
 virtual HRESULT SetSecondCurve(CATBaseUnknown *iCurve) = 0;

  /**
   * Sets the first reference point.
   * @param <tt>iPoint</tt>
   * [in] Pointer to the first reference point.
   */ 
 virtual HRESULT SetFirstPoint(CATBaseUnknown *iPoint)  = 0;

  /**
   * Sets the second reference point.
   * @param <tt>iPoint</tt>
   * [in] Pointer to the second reference point.
   */ 
 virtual HRESULT SetSecondPoint(CATBaseUnknown *iPoint)  = 0;

  /**
   * Sets the first orientation.
   * @param <tt>iOrientation</tt>
   * [in] Orientation of the first reference curve.
   * <dl>
   * <dt> <tt>  1 </tt> <dd> Same orientation
   * <dt> <tt> -1 </tt> <dd> Opposite orientation
   * </dl>
   */ 
 virtual HRESULT SetFirstOrientation(const int iOrientation) = 0;

  /**
   * Sets the second orientation.
   * @param <tt>iOrientation</tt>
   * [in] Orientation of the second reference curve.
   * <dl>
   * <dt> <tt>  1 </tt> <dd> Same orientation
   * <dt> <tt> -1 </tt> <dd> Opposite orientation
   * </dl>
   */
 virtual HRESULT SetSecondOrientation(const int iOrientation) = 0;

  /**
   * Sets the first continuity.
   * @param <tt>iContinuity</tt>
   * [in] Continuity of the first reference curve.
   * <dl>
   * <dt> <tt> 0 </tt> <dd> Continuity in point
   * <dt> <tt> 1 </tt> <dd> Continuity in tangency
   * <dt> <tt> 2 </tt> <dd> Continuity in curvature
   * </dl>
   */
 virtual HRESULT SetFirstContinuity(const int iContinuity) = 0;
 
  /**
   * Sets the second continuity.
   * @param <tt>iContinuity</tt>
   * [in] Continuity of the second reference curve.
   * <dl>
   * <dt> <tt> 0 </tt> <dd> Continuity in point
   * <dt> <tt> 1 </tt> <dd> Continuity in tangency
   * <dt> <tt> 2 </tt> <dd> Continuity in curvature
   * </dl>
   */ 
 virtual HRESULT SetSecondContinuity(const int iContinuity) = 0;

  /**
   * Gets the first tension.
   * @param <tt>iTension</tt>
   * [in] Tension of the first reference curve.
   * <dl>
   * Strictly greater than 0
   * </dl>
   */
 virtual HRESULT SetFirstTension(const double iTension) = 0;

  /**
   * Gets the first tension.
   * @param <tt>iTension</tt>
   * [in] Tension of the second reference curve.
   * <dl>
   * Strictly greater than 0
   * </dl>
   */
 virtual HRESULT SetSecondTension(const double iTension) = 0;

};
#endif
