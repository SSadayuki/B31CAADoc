/* -*-c++-*- */

#ifndef _CATIExchangeBSplineCurve_H
#define _CATIExchangeBSplineCurve_H

//
// Modifications :
// 11/12/2003: DFB: Migration 64 bits (long) - utilisation du script perl de Claude.
//
//
// COPYRIGHT DASSAULT SYSTEMES PROVENCE 2002

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

#include "CATBaseUnknown.h" 
#include "DataExchangeBaseRepsItfCPP.h"

// Pour la migration 64 bits
#include "CATDataType.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDataExchangeBaseRepsItfCPP IID IID_CATIExchangeBSplineCurve;
#else
extern "C" const IID IID_CATIExchangeBSplineCurve;
#endif

/**
 * Interface to exchange BSpline curves.
 * <b>Role</b>: This interface is dedicated to get BSpline curves information.
 * <br>Available from CATIA V5R10.
 * @see CATIExchangeBSplinePCurve, CATIExchangeBSplineSurface
 */ 
class ExportedByDataExchangeBaseRepsItfCPP CATIExchangeBSplineCurve : public CATBaseUnknown
{
  CATDeclareInterface;
  
public:

/**
 * Retrieves overall information related to the BSpline curve.
 * @param oDegree
 *				Get the degree of the BSpline.(degree = order -1)
 * @param oNumPoles
 *				Get the number of poles.
 * @param oNumKnots
 *				Get the number of knots.
 * @param oIsRational
 *				Get TRUE if the curve is rational ( a weight is assigned to every pole ), FALSE otherwise.
 * @param oIsClosed
 *				Get TRUE if the curve is closed, FALSE otherwise.
 * @param oIsPeriodic
 *				Get TRUE if the curve is periodic, FALSE otherwise.
 * @param oIsPlanar
 *				Get TRUE if the curve is planar, FALSE otherwise.
 * @param oPlaneVector
 *				Get the normal to the plane of the polyline when pIsPlanar is TRUE, do not use otherwise.
 */
	virtual HRESULT GetBSplineInfo(CATLONG32 *oDegree, CATLONG32 *oNumPoles,
									 CATLONG32 *oNumKnots, short *oIsRational,
									 short *oIsClosed, short *oIsPeriodic,
									 short *oIsPlanar,
									 double oPlaneVector[3]) const = 0;
 // Les shorts devront etre modifies en booleans

/**
 * Retrieves the poles, knots and weights that fully define a non-uniform, rational BSpline curve.
 * @param iPoles
 *				Set the number of poles expected to be returned in the oPoles argument.
 *				The function is expecting iPoles*3*sizeof(double) bytes of memory allocated by the caller in oPoles.
 * @param iKnots
 *				Set the number of knots expected to be returned in the pKnots argument.
 *				The function is expecting iKnots*sizeof(double) bytes of memory allocated by the caller in oKnots.
 * @param iWeights
 *				Inputs the number of weights expected to be returned in the oWeights argument.
 *				The function is expecting iWeights*sizeof(double) bytes of memory allocated by the caller in oWeights.
 * @param oPoles
 *				Get the poles making up the curve. The memory is pre-allocated by the caller.
 * @param oKnots
 *				Get the knots making up the curve. The memory is pre-allocated by the caller.
 * @param oWeights
 *				Get the weights per pole when the curve is rational. The memory is pre-allocated by the caller.
 */
  virtual HRESULT GetBSplineData(CATLONG32 iPoles, CATLONG32 iKnots, CATLONG32 iWeights,
									double *oPoles, double *oKnots,
									double *oWeights) const = 0;
};

CATDeclareHandler(CATIExchangeBSplineCurve,CATBaseUnknown);
#endif
