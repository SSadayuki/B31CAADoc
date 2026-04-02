/* -*-c++-*- */

#ifndef CATIExchangeOffsetPCurve_H
#define CATIExchangeOffsetPCurve_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

#include "DataExchangeBaseRepsItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATIExchangePCurve.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDataExchangeBaseRepsItfCPP IID IID_CATIExchangeOffsetPCurve ;
#else
extern "C" const IID IID_CATIExchangeOffsetPCurve ;
#endif

/**
 * Interface to exchange offset Pcurves.
 * <b>Role</b>: This interface is dedicated to get offset Pcurves information.
 */
class ExportedByDataExchangeBaseRepsItfCPP CATIExchangeOffsetPCurve: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * Retrieves the offset Pcurve's parameters.
 * @param oBasisCurve
 *				Get the Pcurve to offset.
 * @param oOffsetDistance
 *				Get the distance of the offset operation.
 * @param oOffsetLimits
 *				Get the limits on the curve to be offset.
 */
  virtual HRESULT GetOffsetPCurveData(CATIExchangePCurve_var & oBasisCurve, double *oOffsetDistance, double *oOffsetLimits) const = 0;

};
CATDeclareHandler( CATIExchangeOffsetPCurve, CATBaseUnknown );

#endif
