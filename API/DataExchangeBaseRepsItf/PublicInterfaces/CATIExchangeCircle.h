/* -*-c++-*- */

#ifndef _CATIExchangeCircle_H
#define _CATIExchangeCircle_H

// COPYRIGHT DASSAULT SYSTEMES PROVENCE 2002

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

#include "CATBaseUnknown.h"
#include "DataExchangeBaseRepsItfCPP.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDataExchangeBaseRepsItfCPP IID IID_CATIExchangeCircle;
#else
extern "C" const IID IID_CATIExchangeCircle;
#endif

/**
 * Interface to exchange circles.
 * <b>Role</b>: This interface is dedicated to get circles information.
 * <br>Available from CATIA V5R10.
 */ 
class ExportedByDataExchangeBaseRepsItfCPP CATIExchangeCircle : public CATBaseUnknown
{
  CATDeclareInterface;
  
public: 

/**
 * Retrieves the circle's parameters.
 * @param oCenterPoint
 *				Get the center point of the circle.
 * @param oAxisVector
 *				Get the unit vector perpendicular to the plane of the circle.
 * @param oRadius
 *				Get the radius of the circle.
 */
  virtual HRESULT GetCircleData(double *oCenterPoint, double *oAxisVector, double *oRadius) const = 0;

/**
 * Retrieves the corresponding model space points in the Server's local coordinate system, given an array of parameters on the circle.
 * @param iParam
 *				Set the number of points to be evaluated.
 * @param iParams
 *				Set the array of parameters to be evaluated.
 * @param oPoints
 *				Get the array of computed model space points.
 */
  virtual HRESULT GetPointAtParam(int iParam, double* iParams, double* oPoints) const = 0;
};

CATDeclareHandler(CATIExchangeCircle,CATBaseUnknown);
#endif
