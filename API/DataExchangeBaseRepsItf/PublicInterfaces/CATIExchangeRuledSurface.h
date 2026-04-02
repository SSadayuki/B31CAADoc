/* -*-c++-*- */

#ifndef _CATIExchangeRuledSurface_H
#define _CATIExchangeRuledSurface_H

// COPYRIGHT DASSAULT SYSTEMES PROVENCE 2002

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

#include "CATBaseUnknown.h"
#include "DataExchangeBaseRepsItfCPP.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDataExchangeBaseRepsItfCPP IID IID_CATIExchangeRuledSurface;
#else
extern "C" const IID IID_CATIExchangeRuledSurface;
#endif

/**
 * Interface to exchange ruled surfaces.
 * <b>Role</b>: This interface is dedicated to get ruled surfaces information.
 * <br>Available from CATIA V5R10.
 */
class ExportedByDataExchangeBaseRepsItfCPP CATIExchangeRuledSurface : public CATBaseUnknown
{
  CATDeclareInterface;

public: 
  
/**
 * Returns the first curve defining the surface and the direction flag.
 * @param oDirectionFlag
 *				0 join first to first and last to last.
 * <br>         1 join first to last and last to fisrt.
 * @param ioRelimitedOnFace
 *				Never use this argument. Let it at its NULL_var default value.
 */
  virtual CATBaseUnknown_var GetRuledSurfaceFirstCurve(short *oDirectionFlag, CATBaseUnknown_var ioRelimitedOnFace = NULL_var)  const = 0;

/**
 * Returns the second curve defining the surface and the developable flag.
 * @param oDevelopableSurfaceFlag
 *				0 developable.
 * <br>         1 possibly not.
 * @param ioRelimitedOnFace
 *				Never use this argument. Let it at its NULL_var default value.
 */
  virtual CATBaseUnknown_var GetRuledSurfaceSecondCurve(short *oDevelopableSurfaceFlag, CATBaseUnknown_var ioRelimitedOnFace = NULL_var) const = 0;

/**
 * Retrieves the ruled surface's reference direction.
 * @param oRefDirection
 *				Get the unit vector perpendicular to the basis surface.
 */
  virtual HRESULT GetRuledSurfaceInfo(double oRefDirection[3]) const = 0;

};
CATDeclareHandler(CATIExchangeRuledSurface,CATBaseUnknown);

#endif
