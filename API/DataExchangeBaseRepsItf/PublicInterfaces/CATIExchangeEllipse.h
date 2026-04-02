/* -*-c++-*- */

#ifndef _CATIExchangeEllipse_H
#define _CATIExchangeEllipse_H

// COPYRIGHT DASSAULT SYSTEMES PROVENCE 2002

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

#include "CATBaseUnknown.h"
#include "DataExchangeBaseRepsItfCPP.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDataExchangeBaseRepsItfCPP IID IID_CATIExchangeEllipse;
#else
extern "C" const IID IID_CATIExchangeEllipse;
#endif

/**
 * Interface to exchange ellipses.
 * <b>Role</b>: This interface is dedicated to get ellipses information.
 * <br>Available from CATIA V5R10.
 */ 
class ExportedByDataExchangeBaseRepsItfCPP CATIExchangeEllipse : public CATBaseUnknown
{
  CATDeclareInterface;

public: 

/**
 * Retrieves the ellipse's parameters.
 * @param oCenterPoint
 *				Get the ellipse's center point.
 * @param oAxisVector
 *				Get the unit vector perpendicular to the plane of the ellipse.
 * @param oMajorAxis
 *				Get the length of the major axis.
 * @param oMinorMajorRatio
 *				Get the ratio of the length of the minor axis over the major axis.
 */
  virtual HRESULT GetEllipseData(double oCenterPoint[3], double oAxisVector[3],
								double oMajorAxis[3], double *oMinorMajorRatio) const = 0;

/**
 * Retrieves the ellipse's parameters.
 * @param oOriginSystem
 *				Get the ellipse's center point.
 * @param oVectUSystem
 *				Get the unit vector in U direction.
 * @param oVectVSystem
 *				Get the unit vector in V direction.
 * @param oMajorLength
 *				Get the length of the major axis.
 * @param oMinorLength
 *				Get the length of the minor axis.
 */
  virtual HRESULT GetEllipseData(double oOriginSystem[3], double oVectUSystem[3],
								double oVectVSystem[3], double *oMajorLength,
								double *oMinorLength ) const = 0;

};
CATDeclareHandler(CATIExchangeEllipse,CATBaseUnknown);

#endif
