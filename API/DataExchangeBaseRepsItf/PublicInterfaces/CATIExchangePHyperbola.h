/* -*-c++-*- */

#ifndef CATIExchangePHyperbola_H
#define CATIExchangePHyperbola_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

#include "DataExchangeBaseRepsItfCPP.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDataExchangeBaseRepsItfCPP IID IID_CATIExchangePHyperbola ;
#else
extern "C" const IID IID_CATIExchangePHyperbola ;
#endif

/**
 * Interface to exchange Phyperbolas.
 * <b>Role</b>: This interface is dedicated to get Phyperbolas information.
 */ 
class ExportedByDataExchangeBaseRepsItfCPP CATIExchangePHyperbola: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * Retrieves the Phyperbola's parameters.
 * @param oIntersectionPoint
 *				Get the intersection point of the asymptots.
 * @param oMajorAxis
 *				Get the major axis of the hyperbola.
 * @param oLengthTopC
 *				Get the distance between the vertex and oIntersectionPoint.
 * @param oAxisASympAngle
 *				Get the angle between the focal axis and the asymptots.
 */
  virtual HRESULT GetPHyperbolaData(double oIntersectionPoint[2], double oMajorAxis[2],
									double *oLengthTopC, double *oAxisASympAngle) const = 0;

};
CATDeclareHandler( CATIExchangePHyperbola, CATBaseUnknown );

#endif
