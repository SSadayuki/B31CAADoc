/* -*-c++-*- */

#ifndef _CATIExchangeBSplineSurface_H
#define _CATIExchangeBSplineSurface_H

//
// Modifications :
// 11/12/2003: DFB: Migration 64 bits (long) - utilisation du script perl de Claude.
//
//
// COPYRIGHT DASSAULT SYSTEMES PROVENCE 2002

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

#include "CATBaseUnknown.h"
#include "DataExchangeBaseRepsItfCPP.h"

// Pour la migration 64 bits
#include "CATDataType.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDataExchangeBaseRepsItfCPP IID IID_CATIExchangeBSplineSurface;
#else
extern "C" const IID IID_CATIExchangeBSplineSurface;
#endif

/**
 * Interface to exchange BSpline surfaces.
 * <b>Role</b>: This interface is dedicated to get BSpline surfaces information.
 * <br>Available from CATIA V5R10.
 * @see CATIExchangeBSplineCurve, CATIExchangeBSplinePCurve
 */ 
class ExportedByDataExchangeBaseRepsItfCPP CATIExchangeBSplineSurface : public CATBaseUnknown
{
  CATDeclareInterface;
  
public: 

/**
 * Retrieves overall information related to the BSpline surface.
 * @param oDegree
 *				Get the degree in the U and V directions, respectively of the BSpline.(degree = order -1)
 * @param oNumPoles
 *				Get the number of poles in the U and V directions, respectively.
 * @param oNumKnots
 *				Get the number of knots in the U and V directions, respectively.
 * @param oIsRational
 *				Get TRUE if the surface is rational ( a weight is assigned to every pole ), FALSE otherwise.
 * @param oIsClosed
 *				Get TRUE if the surface is closed in the U and V directions, respectively, FALSE otherwise.
 * @param oIsPeriodic
 *				Get TRUE if the surface is periodic in the U and V directions, respectively, FALSE otherwise.
 * @param oIsPlanar
 *				Get TRUE if the surface is planar, FALSE otherwise.
 * @param ioRelimitedOnFace
 *				Set the CATIExchangeFace pointer, to apply its limits to the BSpline surface (if the input document can support such a relimitation). NULL_var otherwise.
 */
  virtual HRESULT GetBSplineInfo(CATLONG32 oDegree[2], CATLONG32 oNumPoles[2],
									CATLONG32 oNumKnots[2], short *oIsRational,
									short oIsClosed[2], short oIsPeriodic[2],
									short *oIsPlanar, CATBaseUnknown_var ioRelimitedOnFace = NULL_var ) const = 0;
 // Les shorts devront etre modifies en booleans

/**
 * Retrieves BSpline surface datas.
 * @param iPoles
 *				Set the number of poles expected to be returned in the oPoles argument.
 *				The function is expecting iPoles*3*sizeof(double) bytes of memory allocated by the caller in oPoles.
 * @param iKnotsU
 *				In the U direction, set the number of knots expected to be returned in the oKnotsU argument.
 *				The function is expecting iKnotsU*sizeof(double) bytes of memory allocated by the caller in oKnotsU.
 * @param iKnotsV
 *				In the V direction, set the number of knots expected to be returned in the oKnotsV argument.
 *				The function is expecting iKnotsV*sizeof(double) bytes of memory allocated by the caller in oKnotsV.
 * @param iWeights
 *				Set the number of weights expected to be returned in the oWeights argument.
 *				The function is expecting iWeights*sizeof(double) bytes of memory allocated by the caller in oWeights.
 * @param oPoles
 *				Get the poles making up the surface. The memory is pre-allocated by the caller.
 * @param oKnotsU
 *				Get the knots making up the surface in the U direction. The memory is pre-allocated by the caller.
 * @param oKnotsV
 *				Get the knots making up the surface in the V direction. The memory is pre-allocated by the caller.
 * @param oWeights
 *				Get the weights per pole when the surface is rational. The memory is pre-allocated by the caller.
 * @param ioRelimitedOnFace
 *				Set the CATIExchangeFace pointer, to apply its limits to the BSpline surface (if the input document can support such a relimitation). NULL_var otherwise.
 */  
  virtual HRESULT GetBSplineData(CATLONG32 iPoles, CATLONG32 iKnotsU, CATLONG32 iKnotsV,
								CATLONG32 iWeights, double *oPoles,
								double *oKnotsU, double *oKnotsV,
								double *oWeights, CATBaseUnknown_var ioRelimitedOnFace = NULL_var ) const = 0;
};

CATDeclareHandler(CATIExchangeBSplineSurface,CATBaseUnknown);
#endif
