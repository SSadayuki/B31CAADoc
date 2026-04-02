/* -*-c++-*- */

#ifndef CATIExchangePLine_H
#define CATIExchangePLine_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

#include "DataExchangeBaseRepsItfCPP.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDataExchangeBaseRepsItfCPP IID IID_CATIExchangePLine ;
#else
extern "C" const IID IID_CATIExchangePLine ;
#endif

/**
 * Interface to exchange Plines.
 * <b>Role</b>: This interface is dedicated to get Plines information.
 */ 
class ExportedByDataExchangeBaseRepsItfCPP CATIExchangePLine: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * Retrieves informations that fully describe the infinite Pline.
 * @param oRootPoint
 *				Get a 2D point lying on the Pline.
 * @param oVector
 *				Get the 2D unit vector pointing in the direction of the Pline.
 */ 
  virtual HRESULT GetPLineData(double *oRootPoint, double *oVector) const = 0;

};
CATDeclareHandler( CATIExchangePLine, CATBaseUnknown );

#endif
