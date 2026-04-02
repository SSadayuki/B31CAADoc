/* -*-c++-*- */

#ifndef _CATIExchangeOffsetCurve_H
#define _CATIExchangeOffsetCurve_H

// COPYRIGHT DASSAULT SYSTEMES PROVENCE 2002

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

#include "DataExchangeBaseRepsItfCPP.h"
#include "CATIExchangeCurve.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDataExchangeBaseRepsItfCPP IID IID_CATIExchangeOffsetCurve;
#else
extern "C" const IID IID_CATIExchangeOffsetCurve;
#endif

/**
 * Interface to exchange offset curves.
 * <b>Role</b>: This interface is dedicated to get offset curves information.
 * <br>Available from CATIA V5R10.
 */ 
class ExportedByDataExchangeBaseRepsItfCPP CATIExchangeOffsetCurve : public CATBaseUnknown
{
  CATDeclareInterface;

public:

/**
 * Retrieves the offset curve's parameters.
 * @param oBasisCurve
 *				Get the curve to offset.
 * @param oOffsetDistance
 *				Get the distance of the offset operation.
 * @param oNormalVector
 *				Get the unit vector perpendicular to the plane of the curve to offset.
 * @param oOffsetLimits
 *				Get the limits on the curve to be offset.
 */
  virtual HRESULT GetOffsetCurveData(CATIExchangeCurve_var & oBasisCurve, double *oOffsetDistance,
	                                double *oNormalVector, double *oOffsetLimits) const = 0;

};
CATDeclareHandler(CATIExchangeOffsetCurve,CATBaseUnknown);

#endif
