/* -*-c++-*- */

#ifndef _CATIExchangeSphere_H
#define _CATIExchangeSphere_H

// COPYRIGHT DASSAULT SYSTEMES PROVENCE 2002

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

#include "CATBaseUnknown.h"
#include "DataExchangeBaseRepsItfCPP.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDataExchangeBaseRepsItfCPP IID IID_CATIExchangeSphere;
#else
extern "C" const IID IID_CATIExchangeSphere;
#endif

/**
 * Interface to exchange spheres.
 * <b>Role</b>: This interface is dedicated to get spheres information.
 * <br>Available from CATIA V5R10.
 */ 
class ExportedByDataExchangeBaseRepsItfCPP CATIExchangeSphere : public CATBaseUnknown
{
  CATDeclareInterface;
  
public: 

/**
 * Retrieves the sphere's parameters.
 * @param oCenterPoint
 *				Get the center of the sphere.
 * @param oRadius
 *				Get the radius of the sphere.
 * @param oAxisVector
 *				Get the unit vector defining the axis of the sphere.
 * @param ioRelimitedOnFace
 *				Never use this argument. Let it at its NULL_var default value.
 */
  virtual HRESULT GetSphereData(double oCenterPoint[3],double *oRadius, double oAxisvector[3],
                                CATBaseUnknown_var ioRelimitedOnFace = NULL_var) const = 0;

/**
 * Retrieves the sphere's reference direction.
 * @param oRefDirection
 *				Get the projection of oCenterPoint on the sphere along oAxisvector.
 *				Gives a point on the sewing edge.
 */
  virtual HRESULT GetSphereInfo(double oRefDirection[3]) const = 0;
};

CATDeclareHandler(CATIExchangeSphere,CATBaseUnknown);
#endif
