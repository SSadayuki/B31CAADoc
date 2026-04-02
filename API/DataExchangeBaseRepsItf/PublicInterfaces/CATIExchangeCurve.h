/* -*-c++-*- */

#ifndef _CATIExchangeCurve_H
#define _CATIExchangeCurve_H

// COPYRIGHT DASSAULT SYSTEMES PROVENCE 2002

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

#include "CATBaseUnknown.h"
#include "DataExchangeBaseRepsItfCPP.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDataExchangeBaseRepsItfCPP IID IID_CATIExchangeCurve;
#else
extern "C" const IID IID_CATIExchangeCurve;
#endif

/**
 * Interface to exchange curves.
 * <b>Role</b>: This interface is dedicated to get curves information.
 * <br>Available from CATIA V5R10.
 * @see CATIExchangePCurve
 */ 
class ExportedByDataExchangeBaseRepsItfCPP CATIExchangeCurve : public CATBaseUnknown
{
  CATDeclareInterface;

public:

/**
 * Retrieves the end-points of the curve, decided with respect to the logical flow imposed on the curve.
 * @param oStartPoint
 *				Get the start point.
 * @param oEndPoint
 *				Get the end point.
 */                                      
  virtual HRESULT GetEndPoints(double oStartPoint[3], double oEndPoint[3]) const = 0;

/**
 * Retrieves the parametric extents of the curve.
 * There are the parametric equivalents of the end-points.
 * @param oStartParam
 *				Get the start parameter.
 * @param oEndParam
 *				Get the end parameter.
 */
  virtual HRESULT GetParamExtents(double *oStartParam, double *oEndParam) const = 0;

/**
 * Retrieves the parameters on the curve corresponding to an array of space points lying near it.
 * @param iNbPoints
 *				Set the number of points.
 * @param iPoints
 *				Set the point themselves.
 * @param oParam
 *				Get the corresponding parameters.
 */
  virtual HRESULT GetParamAtPoint(int iNbPoints, double *iPoints, double *oParam) const = 0;

/**
 * Retrieves the CATClassId of the interface that represents this type.
 * @param ouuid
 *				Get the CATClassId.
 */
  virtual HRESULT GetCurveType( IID& ouuid) = 0;

};

CATDeclareHandler(CATIExchangeCurve,CATBaseUnknown);
#endif
