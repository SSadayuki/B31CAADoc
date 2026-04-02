/* -*-c++-*- */

#ifndef _CATIExchangeTorus_H
#define _CATIExchangeTorus_H

// COPYRIGHT DASSAULT SYSTEMES PROVENCE 2002

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

#include "CATBaseUnknown.h"
#include "DataExchangeBaseRepsItfCPP.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDataExchangeBaseRepsItfCPP IID IID_CATIExchangeTorus;
#else
extern "C" const IID IID_CATIExchangeTorus;
#endif

class CATIExchangeBSplineCurve_var;

/**
 * Interface to exchange torus.
 * <b>Role</b>: This interface is dedicated to get torus information.
 * <br>Available from CATIA V5R10.
 */ 
class ExportedByDataExchangeBaseRepsItfCPP CATIExchangeTorus : public CATBaseUnknown
{
  CATDeclareInterface;
  
public: 

/**
 * Retrieves the torus' parameters.
 * @param oCenterPoint
 *				Get the center of the major circle.
 * @param oAxisVector
 *				Get the unit vector perpendicular to the plane of the major circle.
 * @param oMajorRadius
 *				Get the radius of the major circle.
 * @param oMinorRadius
 *				Get the radius of the minor circle.
 * @param ioRelimitedOnFace
 *				Never use this argument. Let it at its NULL_var default value.
 */
  virtual HRESULT GetTorusData(double oCenterPoint[3], double oAxisVector[3], double *oMajorRadius,
								double *oMinorRadius, CATBaseUnknown_var ioRelimitedOnFace = NULL_var) const = 0;

/**
 * Retrieves if the axis is direct.
 * @param oIsDirect
 *				= 1 if the axis is direct.
 *				= 0 otherwise.
 */
  virtual HRESULT IsAxisDirect(int *oIsDirect) const = 0;

/**
 * Retrieves the torus' parameters.
 * @param oRefDirection
 *				Projection of oCenterPoint on the torus along oRefDirection gives a point on the sewing edge.
 *<br>			See ref_direction definition in STEP Part42.
 */
  virtual HRESULT GetTorusInfo(double oRefDirection[3]) const = 0;

/**
 * Return the type of the torus.
 * @return
 *				S_OK :		degenerated torus : apple type.
 *<br>			S_FALSE :	degenerated torus : lemon type.
 *<br>			E_FAIL :	unknown type :		(no information from the sending system).
 */
  virtual HRESULT IsAppleType() const = 0;

/**
 * Retrieves the relimited generatrix as a BSplineCurve.
 * @param oCurve
 *				Get the relimited generatrix.
 */
  virtual HRESULT GetRelimitedGeneratrix(CATIExchangeBSplineCurve_var& oCurve) const = 0;

};
CATDeclareHandler(CATIExchangeTorus,CATBaseUnknown);

#endif
