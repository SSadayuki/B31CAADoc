/* -*-c++-*- */

#ifndef _CATIExchangeLine_H
#define _CATIExchangeLine_H

// COPYRIGHT DASSAULT SYSTEMES PROVENCE 2002

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

#include "CATBaseUnknown.h"
#include "DataExchangeBaseRepsItfCPP.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDataExchangeBaseRepsItfCPP IID IID_CATIExchangeLine;
#else
extern "C" const IID IID_CATIExchangeLine;
#endif

/**
 * Interface to exchange lines.
 * <b>Role</b>: This interface is dedicated to get lines information.
 * <br>Available from CATIA V5R10.
 */ 
class ExportedByDataExchangeBaseRepsItfCPP CATIExchangeLine : public CATBaseUnknown
{
  CATDeclareInterface;

public: 

/**
 * Retrieves informations that fully describe the infinite line.
 * @param oRootPoint
 *				Get a 2D point lying on the line.
 * @param oVector
 *				Get the 2D vector pointing in the direction of the line (this vector is not necessarily normalized).
 */ 
  virtual HRESULT GetLineData(double *oRootPoint, double *oVector) const = 0;

};
CATDeclareHandler(CATIExchangeLine,CATBaseUnknown);

#endif
