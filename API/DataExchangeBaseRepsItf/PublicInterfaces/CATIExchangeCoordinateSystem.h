/* -*-c++-*- */

#ifndef _CATIExchangeCoordinateSystem_H
#define _CATIExchangeCoordinateSystem_H

// COPYRIGHT DASSAULT SYSTEMES PROVENCE 2002

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

#include "DataExchangeBaseRepsItfCPP.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDataExchangeBaseRepsItfCPP IID IID_CATIExchangeCoordinateSystem ;
#else
extern "C" const IID IID_CATIExchangeCoordinateSystem ;
#endif

/**
 * Interface to exchange coordinates systems.
 * <b>Role</b>: This interface is dedicated to get the transformation matrix.
 * <br>Available from CATIA V5R10.
 */ 
class ExportedByDataExchangeBaseRepsItfCPP CATIExchangeCoordinateSystem: public CATBaseUnknown
{
  CATDeclareInterface;

  public:
/**
 * Retrieves the matrix content (rotation + translation).
 * @param oRot
 *				Get the rotation component.
 * @param oTrans
 *				Get the translation component.
 */
  virtual void GetElementOfUCS(double oRot[3][3], double oTrans[3]) const = 0;
};

CATDeclareHandler( CATIExchangeCoordinateSystem, CATBaseUnknown );
#endif
