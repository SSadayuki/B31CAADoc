/* -*-c++-*- */

#ifndef _CATIExchangeOffsetSurface_H
#define _CATIExchangeOffsetSurface_H

// COPYRIGHT DASSAULT SYSTEMES PROVENCE 2002

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

#include "CATBaseUnknown.h"
#include "DataExchangeBaseRepsItfCPP.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDataExchangeBaseRepsItfCPP IID IID_CATIExchangeOffsetSurface;
#else
extern "C" const IID IID_CATIExchangeOffsetSurface;
#endif

/**
 * Interface to exchange offset surfaces.
 * <b>Role</b>: This interface is dedicated to get offset surfaces information.
 * <br>Available from CATIA V5R10.
 */ 
class ExportedByDataExchangeBaseRepsItfCPP CATIExchangeOffsetSurface : public CATBaseUnknown
{
  CATDeclareInterface;

public: 
  
/**
 * Returns the basis surface to offset.
 * @param ioRelimitedOnFace
 *				Never use this argument. Let it at its NULL_var default value.
 */ 
  virtual CATBaseUnknown_var GetOffsetSurfaceBasicSurface(CATBaseUnknown_var ioRelimitedOnFace = NULL_var)  const = 0;

/**
 * Retrieves the offset surface's parameters.
 * @param oNormalVector
 *				Get the unit vector perpendicular to the basis surface (unused).
 * @param oDistance
 *				Get the offset distance.
 * @param ioRelimitedOnFace
 *				Never use this argument. Let it at its NULL_var default value.
 */ 
  virtual HRESULT GetOffsetSurfaceTranslationVector(double oNormalVector[3], double *oDistance,
													CATBaseUnknown_var ioRelimitedOnFace = NULL_var) const = 0;

/**
 * Retrieves the offset surface's reference direction.
 * @param oRefDirection
 *				Get the unit vector perpendicular to the basis surface.
 */
  virtual HRESULT GetOffsetSurfaceInfo(double oRefDirection[3]) const = 0;

};
CATDeclareHandler(CATIExchangeOffsetSurface,CATBaseUnknown);

#endif
