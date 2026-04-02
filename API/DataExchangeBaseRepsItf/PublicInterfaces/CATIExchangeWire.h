/* -*-c++-*- */

#ifndef CATIExchangeWire_H
#define CATIExchangeWire_H

//  COPYRIGHT DASSAULT SYSTEMES PROVENCE 2002

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

#include "CATBaseUnknown.h"
#include "DataExchangeBaseRepsItfCPP.h"
#include "CATListOfValCATIExchangeEdge.h"
#include "CATListOfValCATIExchangeEdgeUse.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDataExchangeBaseRepsItfCPP IID IID_CATIExchangeWire ;
#else
extern "C" const IID IID_CATIExchangeWire ;
#endif

/**
 * Interface to exchange wires.
 * <b>Role</b>: This interface is dedicated to get wire's edges.
 * <br>A wire is a 3D domain made of edges.
 * <br>Available from CATIA V5R10.
 */
class ExportedByDataExchangeBaseRepsItfCPP CATIExchangeWire: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * Returns the list of edges of a wire.
 */
  virtual CATLISTV(CATIExchangeEdge_var)* GetListOfEdge() const = 0;

/**
 * Returns the list of used edges of a wire.
 */
  virtual CATLISTV(CATIExchangeEdgeUse_var)* GetListOfEdgeUse() const = 0;

};
CATDeclareHandler( CATIExchangeWire, CATBaseUnknown );

#endif
