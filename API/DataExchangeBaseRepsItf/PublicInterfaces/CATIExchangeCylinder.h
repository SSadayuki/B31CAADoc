/* -*-c++-*- */

#ifndef _CATIExchangeCylinder_H
#define _CATIExchangeCylinder_H

// COPYRIGHT DASSAULT SYSTEMES PROVENCE 2002

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

#include "CATBaseUnknown.h"
#include "DataExchangeBaseRepsItfCPP.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDataExchangeBaseRepsItfCPP IID IID_CATIExchangeCylinder;
#else
extern "C" const IID IID_CATIExchangeCylinder;
#endif

/**
 * Interface to exchange cylinders.
 * <b>Role</b>: This interface is dedicated to get cylinders information.
 * <br>Available from CATIA V5R10.
 */ 
class ExportedByDataExchangeBaseRepsItfCPP CATIExchangeCylinder : public CATBaseUnknown
{
  CATDeclareInterface;
  
public: 

/**
 * Retrieves the cylinder's parameters.
 * @param oBasePoint
 *				Get the center of the cylinder's base.
 * @param oAxisVector
 *				Get the unit vector defining the axis of the cylinder.
 * @param oRadius
 *				Get the radius of the cylinder's base circle.
 * @param ioRelimitedOnFace
 *				Never use this argument. Let it at its NULL_var default value.
 */
  virtual HRESULT GetCylinderData(double oBasePoint[3], double oAxisVector[3],
								  double *oRadius, CATBaseUnknown_var ioRelimitedOnFace = NULL_var) const = 0;

/**
 * Retrieves the cylinder's reference direction.
 * @param oRefDirection
 *				Get the projection of oBasePoint on the cylinder along oRefDirection.
 *				Gives a point on the sewing edge.
 */
  virtual HRESULT GetCylinderInfo(double oRefDirection[3]) const = 0;

};
CATDeclareHandler(CATIExchangeCylinder,CATBaseUnknown);

#endif
