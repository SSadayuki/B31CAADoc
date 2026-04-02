/* -*-c++-*- */

#ifndef _CATIExchangeParabola_H
#define _CATIExchangeParabola_H

// COPYRIGHT DASSAULT SYSTEMES PROVENCE 2002

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

#include "CATBaseUnknown.h"
#include "DataExchangeBaseRepsItfCPP.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDataExchangeBaseRepsItfCPP IID IID_CATIExchangeParabola;
#else
extern "C" const IID IID_CATIExchangeParabola;
#endif

/**
 * Interface to exchange parabolas.
 * <b>Role</b>: This interface is dedicated to get parabolas information.
 * <br>Available from CATIA V5R10.
 */ 
class ExportedByDataExchangeBaseRepsItfCPP CATIExchangeParabola : public CATBaseUnknown
{
  CATDeclareInterface;

public: 

/**
 * Retrieves the parabola's parameters.
 * The curve parametrization is :
 *   <tt>X(t) = t^2/(4*FD), Y(t) = t</tt>, where X and Y are relative to <tt>oFocusAxis</tt>.
 * @param oVertex
 *				Get the vertex/apex of the parabola.
 * @param oAxisVector
 *				Get the unit vector perpendicular to the plane of the parabola.
 * @param oFocusAxis
 *				Get the unit vector of the focal axis of the parabola with |pFocusAxis| = focal distance (FD).
 */
  virtual HRESULT GetParabolaData(double oVertex[3], double oAxisVector[3], double oFocusAxis[3] ) const = 0;
 
};
CATDeclareHandler(CATIExchangeParabola,CATBaseUnknown);

#endif
