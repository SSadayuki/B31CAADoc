/* -*-c++-*- */

#ifndef _CATIExchangePlane_H
#define _CATIExchangePlane_H

// COPYRIGHT DASSAULT SYSTEMES PROVENCE 2002

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

#include "CATBaseUnknown.h"
#include "DataExchangeBaseRepsItfCPP.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDataExchangeBaseRepsItfCPP IID IID_CATIExchangePlane;
#else
extern "C" const IID IID_CATIExchangePlane;
#endif

/**
 * Interface to exchange planes.
 * <b>Role</b>: This interface is dedicated to get planes information.
 * <br>Available from CATIA V5R10.
 */ 
class ExportedByDataExchangeBaseRepsItfCPP CATIExchangePlane : public CATBaseUnknown
{
  CATDeclareInterface;

public: 

/**
 * Retrieves the plane's parameters.
 * @param oRootPoint
 *				Get a point on the plane.
 * @param oNormalVector
 *				Get a unit vector perpendicular to the plane.
 * @param ioRelimitedOnFace
 *				Never use this argument. Let it at its NULL_var default value.
 */ 
  virtual HRESULT GetPlaneData(double *oRootPoint, double *oNormalVector,
							   CATBaseUnknown_var ioRelimitedOnFace = NULL_var) const = 0;

};
CATDeclareHandler(CATIExchangePlane,CATBaseUnknown);

#endif
