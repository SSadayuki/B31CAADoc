/* -*-c++-*- */

#ifndef _CATIExchangePoint_H
#define _CATIExchangePoint_H

// COPYRIGHT DASSAULT SYSTEMES PROVENCE 2002

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

#include "CATBaseUnknown.h"
#include "DataExchangeBaseRepsItfCPP.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDataExchangeBaseRepsItfCPP IID IID_CATIExchangePoint;
#else
extern "C" const IID IID_CATIExchangePoint;
#endif

/**
 * Interface to exchange points.
 * <b>Role</b>: This interface is dedicated to get points information.
 * <br>Available from CATIA V5R10.
 */ 
class ExportedByDataExchangeBaseRepsItfCPP CATIExchangePoint : public CATBaseUnknown
{
  CATDeclareInterface;

public: 

/**
 * Retrieves the point's parameters.
 * @param oPoint
 *				Get the point.
 */
  virtual HRESULT GetPointData(double *oPoint) const = 0;

};
CATDeclareHandler(CATIExchangePoint,CATBaseUnknown);

#endif
