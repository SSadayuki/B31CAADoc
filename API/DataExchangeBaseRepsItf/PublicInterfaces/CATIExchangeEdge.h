/* -*-c++-*- */

#ifndef _CATIExchangeEdge_H
#define _CATIExchangeEdge_H

// COPYRIGHT DASSAULT SYSTEMES PROVENCE 2002

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

#include "CATBaseUnknown.h"
#include "DataExchangeBaseRepsItfCPP.h"
#include "CATIExchangeCurve.h"
#include "CATIExchangeVertex.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDataExchangeBaseRepsItfCPP IID IID_CATIExchangeEdge;
#else
extern "C" const IID IID_CATIExchangeEdge;
#endif

/**
 * Interface to exchange edges.
 * <b>Role</b>: This interface is dedicated to get edges properties.
 * <br>An edge is a mono-dimensional topological entity. Its underlying geometry is a 3D curve.
 * <br>Available from CATIA V5R10.
 */
class ExportedByDataExchangeBaseRepsItfCPP CATIExchangeEdge : public CATBaseUnknown
{
  CATDeclareInterface;

public:

/**
 * Returns the geometric 3D curve corresponding to the edge.
 */
  virtual CATIExchangeCurve_var GetCurve() = 0;

/**
 * Returns the vertex occuring at the start of the edge.
 */
  virtual CATIExchangeVertex_var GetStartVertex() = 0;

/**
 * Returns the vertex occuring at the end of the edge.
 */
  virtual CATIExchangeVertex_var GetEndVertex() = 0;

/**
 * Retrieves the parameters at each edge's extremity.
 * @param oValue
 *					oValue[0] : StartParameter.
 *					oValue[1] : EndParameter.
 */
  virtual HRESULT GetLimitsOnCv(double * oValue) = 0;

/**
 * Returns TRUE if the edge's direction is opposed to the flow dictated by the
 * parametrization of the underlying curve geometry, FALSE otherwise.
 */
  virtual int IsParamReversed() = 0;

/**
 * Retrieves the length of the edge.
 * @param oLength
 *				Get the edge's length.
 */ 
  virtual HRESULT GetGeometricProperties
                  (double & oLength) const = 0;

};
CATDeclareHandler(CATIExchangeEdge,CATBaseUnknown);

#endif
