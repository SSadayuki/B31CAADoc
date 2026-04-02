/* -*-c++-*- */

#ifndef _CATIExchangeHyperbola_H
#define _CATIExchangeHyperbola_H

// COPYRIGHT DASSAULT SYSTEMES PROVENCE 2002

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

#include "CATBaseUnknown.h"
#include "DataExchangeBaseRepsItfCPP.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDataExchangeBaseRepsItfCPP IID IID_CATIExchangeHyperbola;
#else
extern "C" const IID IID_CATIExchangeHyperbola;
#endif

/**
 * Interface to exchange hyperbolas.
 * <b>Role</b>: This interface is dedicated to get hyperbolas information.
 * <br>Available from CATIA V5R10.
 */ 
class ExportedByDataExchangeBaseRepsItfCPP CATIExchangeHyperbola : public CATBaseUnknown
{
  CATDeclareInterface;

public: 

/**
 * Retrieves the hyperbola's parameters.
 * Angles are in radian (as usual for XCAD APIs).
 * Length are in millimeters (as usual for XCAD APIs).
 * @param oIntersectionPoint
 *				Get the intersection point of the asymptots.
 * @param oAxisVector
 *				Get the unit vector perpendicular to the plane of the hyperbola.
 * @param oMajorAxis
 *				Get the major axis of the hyperbola.
 * @param oLengthTopC
 *				Get the distance between the vertex and oIntersectionPoint.
 * @param oAxisASympAngle
 *				Get the angle between the focal axis and the asymptots.
 */
  virtual HRESULT GetHyperbolaData(double oIntersectionPoint[3], double oAxisVector[3], double oMajorAxis[3],
									double *oLengthTopC, double *oAxisASympAngle) const = 0;

/**
 * Retrieves the hyperbola's parameters.
 * @param oVertex
 *				Get the vertex/apex of the parabola.
 * @param oAxisVector
 *				Get the unit vector perpendicular to the plane of the hyperbola.
 * @param oMajorAxis
 *				Get the major axis of the hyperbola.
 * @param oSemi_axis
 *				Get the length of the semi axis of the hyperbola.
 * @param oSemi_imag_axis
 *				Get the length of the semi imaginary axis of hyperbola.
 */
  virtual HRESULT GetHyperbolaData2(double oVertex[3], double oAxisVector[3],
									double oMajorAxis[3], double* oSemi_axis,
									double *oSemi_imag_axis) const = 0;

};
CATDeclareHandler(CATIExchangeHyperbola,CATBaseUnknown);

#endif
