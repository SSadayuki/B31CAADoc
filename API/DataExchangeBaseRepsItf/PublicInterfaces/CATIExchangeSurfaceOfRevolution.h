/* -*-c++-*- */

#ifndef _CATIExchangeSurfaceOfRevolution_H
#define _CATIExchangeSurfaceOfRevolution_H

// COPYRIGHT DASSAULT SYSTEMES PROVENCE 2002

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

#include "CATBaseUnknown.h"
#include "DataExchangeBaseRepsItfCPP.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDataExchangeBaseRepsItfCPP IID IID_CATIExchangeSurfaceOfRevolution;
#else
extern "C" const IID IID_CATIExchangeSurfaceOfRevolution;
#endif

/**
 * Interface to exchange surfaces of revolution.
 * <b>Role</b>: This interface is dedicated to get surfaces of revolution information.
 * <br>Available from CATIA V5R10.
 */
class ExportedByDataExchangeBaseRepsItfCPP CATIExchangeSurfaceOfRevolution : public CATBaseUnknown
{
  CATDeclareInterface;

public:
  
/**
 * Retrieves the revolution surface's parameters.
 * Angles are in radian.
 * @param oAxisOfRevolution
 *				Get the surface's revolution axis.
 * @param oPointOnAxis
 *				Get a point on the axis.
 * @param oStartAngle
 *				Get the start angle.
 * @param oEndAngle
 *				Get the end angle.
 * @param oGeneratrix
 *				Get the generatrix.
 */
  virtual HRESULT GetSurfaceOfRevolutionData(double oAxisOfRevolution[3], double oPointOnAxis[3],
														   double *oStartAngle, double *oEndAngle,
														   CATBaseUnknown_var &oGeneratrix) const = 0;

 /**
 * @nodoc
 * Do not use
 */
  virtual HRESULT ActiveGeneratrixTrim(CATBaseUnknown_var iRelimitedOnFace,
                                       short iIsFittingRequested = 0) const = 0;

/**
 * Retrieves the surface of revolution's reference direction.
 * @param oRefDirection
 *				Get the unit vector perpendicular to the basis surface.
 */
  virtual HRESULT GetSurfaceOfRevolutionInfo(double oRefDirection[3]) const = 0;

};
CATDeclareHandler(CATIExchangeSurfaceOfRevolution,CATBaseUnknown);

#endif
