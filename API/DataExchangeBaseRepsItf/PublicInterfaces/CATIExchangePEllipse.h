/* -*-c++-*- */

#ifndef CATIExchangePEllipse_H
#define CATIExchangePEllipse_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

#include "DataExchangeBaseRepsItfCPP.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDataExchangeBaseRepsItfCPP IID IID_CATIExchangePEllipse ;
#else
extern "C" const IID IID_CATIExchangePEllipse ;
#endif

/**
 * Interface to exchange Pellipses.
 * <b>Role</b>: This interface is dedicated to get Pellipses information.
 */ 
class ExportedByDataExchangeBaseRepsItfCPP CATIExchangePEllipse: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * Retrieves the Pellipse's parameters.
 * @param oCenterPoint
 *				Get the Pellipse's center point.
 * @param oMajorAxis
 *				Get the length of the major axis.
 * @param oMinorMajorRatio
 *				Get the ratio of the length of the minor axis over the major axis.
 */
  virtual HRESULT GetPEllipseData(double oCenterPoint[2], 			      
					  double oMajorAxis[2], double *oMinorMajorRatio) const = 0;

/**
 * Retrieves the Pellipse's parameters.
 * @param oOriginSystem
 *				Get the Pellipse's center point.
 * @param oVectUSystem
 *				Get the unit vector in U direction.
 * @param oVectVSystem
 *				Get the unit vector in V direction.
 * @param oMajorLength
 *				Get the length of the major axis.
 * @param oMinorLength
 *				Get the length of the minor axis.
 */
  virtual HRESULT GetPEllipseData(double oOriginSystem[2], double oVectUSystem[2],
			         double oVectVSystem[2], double *oMajorLength,
			         double *oMinorLength ) const = 0;

};
CATDeclareHandler( CATIExchangePEllipse, CATBaseUnknown );

#endif
