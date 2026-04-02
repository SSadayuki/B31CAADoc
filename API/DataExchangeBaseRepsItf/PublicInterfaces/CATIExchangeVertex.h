/* -*-c++-*- */

#ifndef _CATIExchangeVertex_H
#define _CATIExchangeVertex_H

//  COPYRIGHT DASSAULT SYSTEMES PROVENCE 2002

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

#include "CATBaseUnknown.h" 
#include "DataExchangeBaseRepsItfCPP.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDataExchangeBaseRepsItfCPP IID IID_CATIExchangeVertex;
#else
extern "C" const IID IID_CATIExchangeVertex;
#endif

/**
 * Interface to exchange vertex.
 * <b>Role</b>: This interface is dedicated to describe vertex.
 * <br>A vertex is a topological entity without dimension. Its underlying geometry is a 3D point.
 * <br>Available from CATIA V5R10.
 */
class ExportedByDataExchangeBaseRepsItfCPP CATIExchangeVertex : public CATBaseUnknown
{
  CATDeclareInterface;

public:

/**
 * Retrieves the geometric information of the vertex (its point data).
 * @param oPoint
 *				Get the geometric point of the vertex.
 */
  virtual HRESULT GetPoint(double oPoint[3]) const = 0;

};
CATDeclareHandler(CATIExchangeVertex,CATBaseUnknown);

#endif
