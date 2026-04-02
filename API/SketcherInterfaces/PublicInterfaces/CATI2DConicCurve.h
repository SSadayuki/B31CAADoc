/* -*-c++-*- */
#ifndef CATI2DConicCurve_h
#define CATI2DConicCurve_h

// COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATSketcherInterfaces.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSketcherInterfaces IID IID_CATI2DConicCurve;
#else
extern "C" const IID IID_CATI2DConicCurve;
#endif

/**
 * Interface to 2D conic curve feature.
 * <b>Role</b>: Allows you to access data of the conic curve feature created by using 
 * start point, end point, tangencies, passing points, or parameter
 * Get, set the Conic definition elements
 * @see CATI2DWFFactory#CreateConicCurve
 */

class ExportedByCATSketcherInterfaces CATI2DConicCurve : public CATBaseUnknown
{
   CATDeclareInterface;
public: 

  /**
   * Gets the tangent at the start point.
   * @param <tt>iIID</tt>
   * [in] Interface identifier for which a pointer is requested.
   * @param <tt>oTangent</tt>
   * [out] Pointer to the start tangent curve.
   */ 
  virtual HRESULT GetStartTangent(const IID &iIID, CATBaseUnknown **oTangent) = 0;

  /**
   * Sets the start tangent.
   * @param <tt>iTangent</tt>
   * [in] Pointer to the start tangent curve.
   */ 
  virtual HRESULT SetStartTangent(CATBaseUnknown *iTangent) = 0;
  
  /**
   * Gets the tangent at the end point.
   * @param <tt>iIID</tt>
   * [in] Interface identifier for which a pointer is requested.
   * @param <tt>oTangent</tt>
   * [out] Pointer to the end tangent curve.
   */ 
  virtual HRESULT GetEndTangent(const IID &iIID, CATBaseUnknown **oTangent) = 0;

  /**
   * Sets the end tangent.
   * @param <tt>iTangent</tt>
   * [in] Pointer to the end tangent curve.
   */ 
  virtual HRESULT SetEndTangent(CATBaseUnknown *iTangent) = 0;

  /**
   * Gets the first intermediate passing thru point.
   * @param <tt>iIID</tt>
   * [in] Interface identifier for which a pointer is requested.
   * @param <tt>oPoint</tt>
   * [out] Pointer to the first intermediate passing thru point.
   */ 
  virtual HRESULT GetFirstIntermediatePoint(const IID &iIID, CATBaseUnknown **oPoint) = 0;

 /**
   * Sets the first intermediate passing thru point.
   * @param <tt>iPoint</tt>
   * [in] Pointer to the first intermediate passing thru point.
   */ 
  virtual HRESULT SetFirstIntermediatePoint(CATBaseUnknown *iPoint) = 0;
  
  /**
   * Gets the tangent at the first intermediate passing thru point.
   * @param <tt>iIID</tt>
   * [in] Interface identifier for which a pointer is requested.
   * @param <tt>oTangent</tt>
   * [out] Pointer to the tangent curve.
   */ 
  virtual HRESULT GetFirstIntermediateTangent(const IID &iIID, CATBaseUnknown **oTangent) = 0;

  /**
   * Sets the tangent at the first intermediate passing thru point.
   * @param <tt>iTangent</tt>
   * [in] Pointer to the tangent curve.
   */  
  virtual HRESULT SetFirstIntermediateTangent(CATBaseUnknown *iTangent) = 0;

  /**
   * Gets the second intermediate passing thru point.
   * @param <tt>iIID</tt>
   * [in] Interface identifier for which a pointer is requested.
   * @param <tt>oPoint</tt>
   * [out] Pointer to the second intermediate passing thru point.
   */ 
  virtual HRESULT GetSecondIntermediatePoint(const IID &iIID, CATBaseUnknown **oPoint) = 0;

 /**
   * Sets the second intermediate passing thru point.
   * @param <tt>iPoint</tt>
   * [in] Pointer to the second intermediate passing thru point.
   */ 
  virtual HRESULT SetSecondIntermediatePoint(CATBaseUnknown *iPoint) = 0;
  
  /**
   * Gets the tangent at the second intermediate passing thru point.
   * @param <tt>iIID</tt>
   * [in] Interface identifier for which a pointer is requested.
   * @param <tt>oTangent</tt>
   * [out] Pointer to the tangent curve.
   */ 
  virtual HRESULT GetSecondIntermediateTangent(const IID &iIID, CATBaseUnknown **oTangent) = 0;

  /**
   * Sets the tangent at the second intermediate passing thru point.
   * @param <tt>iTangent</tt>
   * [in] Pointer to the tangent curve.
   */  
  virtual HRESULT SetSecondIntermediateTangent(CATBaseUnknown *iTangent) = 0;

  /**
   * Gets the third intermediate passing thru point.
   * @param <tt>iIID</tt>
   * [in] Interface identifier for which a pointer is requested.
   * @param <tt>oPoint</tt>
   * [out] Pointer to the third intermediate passing thru point.
   */ 
  virtual HRESULT GetThirdIntermediatePoint(const IID &iIID, CATBaseUnknown **oPoint) = 0;

  /**
   * Sets the third intermediate passing thru point.
   * @param <tt>iPoint</tt>
   * [in] Pointer to the third intermediate passing thru point.
   */ 
  virtual HRESULT SetThirdIntermediatePoint(CATBaseUnknown *iPoint) = 0;
 
  /**
   * Gets the tangent intersection reference point.
   * @param <tt>iIID</tt>
   * [in] Interface identifier for which a pointer is requested.
   * @param <tt>oGeom</tt>
   * [out] Pointer to the tangent intersection reference point.
   */ 
  virtual HRESULT GetTangentIntersectionPoint(const IID &iIID, CATBaseUnknown **oPoint) = 0;

  /**
   * Sets the tangent intersection reference point.
   * @param <tt>iPoint</tt>
   * [in] Pointer to the tangent intersection reference point.
   */ 
  virtual HRESULT SetTangentIntersectionPoint(CATBaseUnknown *iPoint) = 0;

  /**
   * Gets the conic parameter.
   * @param <tt>oConicParm</tt>
   * [out] value of conic parameter.
   * <dl>
   * <dt> <tt> >0 </tt> <dd> should be greater than 0
   * <dt> <tt> <1 </tt> <dd> should be lower than 1
   * </dl>
   */ 
  virtual HRESULT GetConicParm(double *oConicParm) = 0;

  /**
   * Sets the conic parameter.
   * @param <tt>iConicParm</tt>
   * [in] value of conic parameter 
   * <dl>
   * <dt> <tt> >0 </tt> <dd> should be greater than 0
   * <dt> <tt> <1 </tt> <dd> should be lower than 1
   * </dl>
   */ 
  virtual HRESULT SetConicParm(const double iConicParm) = 0;

  /**
   * Gets the initial passing thru point.
   * @param <tt>iIID</tt>
   * [in] Interface identifier for which a pointer is requested.
   * @param <tt>oPoint</tt>
   * [out] Pointer to the initial passing thru point.
   */ 
  virtual HRESULT GetInitialPoint(const IID &iIID, CATBaseUnknown **oPoint) = 0;

  /**
   * Sets the initial passing thru point.
   * @param <tt>iPoint</tt>
   * [in] Pointer to the initial passing thru point.
   */ 
  virtual HRESULT SetInitialPoint(CATBaseUnknown *iPoint) = 0;

  /**
   * Gets the final passing thru point.
   * @param <tt>iIID</tt>
   * [in] Interface identifier for which a pointer is requested.
   * @param <tt>oPoint</tt>
   * [out] Pointer to the final passing thru point.
   */ 
  virtual HRESULT GetFinalPoint(const IID &iIID, CATBaseUnknown **oPoint) = 0;

  /**
   * Sets the final passing thru point.
   * @param <tt>iPoint</tt>
   * [in] Pointer to the final passing thru point.
   */ 
  virtual HRESULT SetFinalPoint(CATBaseUnknown *iPoint) = 0;
};
#endif
