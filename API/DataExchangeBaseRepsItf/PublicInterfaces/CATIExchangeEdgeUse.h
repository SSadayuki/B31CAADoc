/* -*-c++-*- */

#ifndef _CATIExchangeEdgeUse_H
#define _CATIExchangeEdgeUse_H

// COPYRIGHT DASSAULT SYSTEMES PROVENCE 2002

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

#include "CATBaseUnknown.h"
#include "DataExchangeBaseRepsItfCPP.h"
#include "CATIExchangeEdge.h"
#include "CATIExchangePCurve.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDataExchangeBaseRepsItfCPP IID IID_CATIExchangeEdgeUse;
#else
extern "C" const IID IID_CATIExchangeEdgeUse;
#endif

/**
 * Interface to exchange edgeuses.
 * <b>Role</b>: This interface is dedicated to get edgeuses properties.
 * <br>An edgeuse is an edge (mono-dimensional topological entity) bounded by 2 vertex.
 * Its underlying geometry is a 3D curve.
 * <br>Available from CATIA V5R10.
 */
class ExportedByDataExchangeBaseRepsItfCPP CATIExchangeEdgeUse : public CATBaseUnknown
{
  CATDeclareInterface;

public:

/**
 * Returns the corresponding edge associated with this place in the loop.
 */
  virtual CATIExchangeEdge_var GetEdge() = 0;

/**
 * Returns TRUE if the edge associated with this object is to be viewed reversed in
 * orientation to conform to loop's directional flow, FALSE otherwise.
 */ 
  virtual int IsOpposedToEdge() = 0;

/**
 * Returns the Pcurve associated with this edgeuse.
 */
  virtual CATIExchangePCurve_var GetPCurve() = 0;

/**
 * Retrieves the start and end params of the Pcurve.
 * This is the parametric equivalents of the vertex.
 * @param oStartParam
 *				Get the Pcurve's start parameter.
 * @param oEndParam
 *				Get the Pcurve's end parameter.
 */
  virtual HRESULT GetPParams(double & oStartParam, double & oEndParam) const = 0;

/**
 * Retrieves the start and end points of the Pcurve.
 * @param oStartPoint
 *				Get the Pcurve's start point.
 * @param oEndPoint
 *				Get the Pcurve's end point.
 */
  virtual HRESULT GetPVertices(double oStartPoint[2],double oEndPoint[2]) const = 0;

};
CATDeclareHandler(CATIExchangeEdgeUse,CATBaseUnknown);

#endif
