/* -*-c++-*- */

#ifndef CATIExchangePCircle_H
#define CATIExchangePCircle_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

#include "DataExchangeBaseRepsItfCPP.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDataExchangeBaseRepsItfCPP IID IID_CATIExchangePCircle ;
#else
extern "C" const IID IID_CATIExchangePCircle ;
#endif

/**
 * Interface to exchange Pcircles.
 * <b>Role</b>: This interface is dedicated to get Pcircles information.
 */ 
class ExportedByDataExchangeBaseRepsItfCPP CATIExchangePCircle: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * Retrieves the circle's parameters.
 * @param oCenterPoint
 *				Get the centre point of the circle.
 * @param oRadius
 *				Get the radius of the circle.
 */
  virtual HRESULT GetPCircleData(double *oCenterPoint, double *oRadius) const = 0;

};
CATDeclareHandler( CATIExchangePCircle, CATBaseUnknown );

#endif
