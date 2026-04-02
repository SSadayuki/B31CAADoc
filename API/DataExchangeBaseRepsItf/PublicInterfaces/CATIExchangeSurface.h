/* -*-c++-*- */

#ifndef _CATIExchangeSurface_H
#define _CATIExchangeSurface_H

// COPYRIGHT DASSAULT SYSTEMES PROVENCE 2002

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

#include "CATBaseUnknown.h"
#include "DataExchangeBaseRepsItfCPP.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDataExchangeBaseRepsItfCPP IID IID_CATIExchangeSurface;
#else
extern "C" const IID IID_CATIExchangeSurface;
#endif

/**
 * Interface to exchange surfaces.
 * <b>Role</b>: This interface is dedicated to get surfaces information.
 * <br>Available from CATIA V5R10.
 */
class ExportedByDataExchangeBaseRepsItfCPP CATIExchangeSurface : public CATBaseUnknown
{
  CATDeclareInterface;

public:

/**
 * Retrieves unit vectors normal to surface at an array of parametric points (U,V).
 * The direction is always away from the volume side of the surface.
 * @param iNbParams
 *				Set the number of points to be evaluated.
 * @param iParams
 *				Set the array of parametric points at which to evaluate the surface normals.
 * @param oNormals
 *				Get the array of unit vectors.
 */
  virtual HRESULT GetNormal(int iNbParams, double *iParams, double *oNormals) const = 0;

/**
 * Retrieves the two unit vector tangents in the U and V direction at an array of parametric points (U,V) on the surface.
 * The tangent in the U direction is always pointed in the direction of increasing U value.
 * @param iNbParams
 *				Set the number of points to be evaluated.
 * @param iParams
 *				Set the array of parametric points at which to evaluate the surface tangents.
 * @param oUTangents
 *				Get the array of unit tangent vectors in the direction of increasing U.
 * @param oVTangents
 *				Get the array of unit tangent vectors in the direction of increasing V.
 */
  virtual HRESULT GetTangents(int iNbParams, double *iParams, double *oUTangents, double *oVTangents) const = 0;

/**
 * Retrieves the CATClassId of the specific geometry interface.
 * @param ouuid
 *				Get the CATClassId.
 */
  virtual HRESULT GetSurfaceType(IID& ouuid) const = 0;

/**
 * Retrieves relimitations of parameters U and V of the surface.
 * @param oMinParam
 *				Get the minimum u,v point of the range rectangle.
 * @param oMaxParam
 *				Get the maximum u,v point of the range rectangle.
 * @param ioRelimitedOnFace
 *				Never use this argument. Let it at its NULL_var default value.
 */
  virtual HRESULT GetParamRangeRect(double oMinParam[2], double oMaxParam[2],
									CATBaseUnknown_var ioRelimitedOnFace = NULL_var) const = 0;

/**
 * Retrieves the model space points in the local coordinate system corresponding to an array of parametric points (u,v) on the surface.
 * @param iNbParam
 *				Set the number of points to be evaluated.
 * @param iParams
 *				Set the array of parametric points at which to be evaluated.
 * @param oPoints
 *				Get the array of computed model space points.
 */
  virtual HRESULT GetPointAtParam(int iNbParam, double* iParams, double* oPoints) const = 0;

};
CATDeclareHandler(CATIExchangeSurface,CATBaseUnknown);

#endif
