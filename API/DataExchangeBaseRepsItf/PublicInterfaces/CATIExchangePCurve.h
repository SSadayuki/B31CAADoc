/* -*-c++-*- */

#ifndef CATIExchangePCurve_H
#define CATIExchangePCurve_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

#include "DataExchangeBaseRepsItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATIExchangeSurface.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDataExchangeBaseRepsItfCPP IID IID_CATIExchangePCurve ;
#else
extern "C" const IID IID_CATIExchangePCurve ;
#endif

/**
 * Interface to exchange Pcurves.
 * <b>Role</b>: This interface is dedicated to get Pcurves information.
 * @see CATIExchangeCurve
 */ 
class ExportedByDataExchangeBaseRepsItfCPP CATIExchangePCurve: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * Retrieves the end-points of the Pcurve, decided with respect to the logical flow imposed on the curve.
 * @param oStartPoint
 *				Get the start point.
 * @param oEndPoint
 *				Get the end point.
 */                                      
  virtual HRESULT GetEndPPoints(double oStartPoint[2], double oEndPoint[2]) const = 0;

/**
 * Retrieves the parametric extents of the Pcurve.
 * There are the parametric equivalents of the end-points.
 * @param oStartParam
 *				Get the start parameter.
 * @param oEndParam
 *				Get the end parameter.
 */
  virtual HRESULT GetPParamExtents(double *oStartParam, double *oEndParam) const = 0;

/**
 * Retrieves the parameters on the Pcurve corresponding to an array of space points lying near it.
 * @param iNbPoints
 *				Set the number of points.
 * @param iPoints
 *				Set the point themselves.
 * @param oParam
 *				Get the corresponding parameters.
 */
  virtual HRESULT GetPParamAtPoint(int iNbPoints, double *iPoints, double *oParam) const = 0;

/**
 * Retrieves the CATClassId of the interface that represents this type.
 * @param ouuid
 *				Get the CATClassId.
 */
  virtual HRESULT GetPCurveType( IID& ouuid) = 0;

/**
 * Returns the associated surface on which the Pcurve lies.
 */
  virtual CATIExchangeSurface_var GetSupportSurface() = 0;

};
CATDeclareHandler( CATIExchangePCurve, CATBaseUnknown );

#endif
