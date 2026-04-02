/* -*-c++-*- */

#ifndef _CATIExchangeCone_H
#define _CATIExchangeCone_H

// COPYRIGHT DASSAULT SYSTEMES PROVENCE 2002

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

#include "CATBaseUnknown.h"
#include "DataExchangeBaseRepsItfCPP.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDataExchangeBaseRepsItfCPP IID IID_CATIExchangeCone;
#else
extern "C" const IID IID_CATIExchangeCone;
#endif

/**
 * Interface to exchange cones.
 * <b>Role</b>: This interface is dedicated to get cones information.
 * <br>Available from CATIA V5R10.
 */ 
class ExportedByDataExchangeBaseRepsItfCPP CATIExchangeCone : public CATBaseUnknown
{
  CATDeclareInterface;
  
public: 

/**
 * Retrieves the cone's parameters.
 * Angles are in radian (as usual for XCAD APIs).
 * Length are in millimeters (as usual for XCAD APIs).
 * @param oBasePoint
 *				Get the center of the cone's base.
 * @param oAxisVector
 *				Get the unit vector defining the axis of the cone.
 * @param oRadius
 *				Get the radius of the cone's base circle.
 * @param oHalfAngle
 *				Get the acute angle subtended between the axis and a generator of the cone ( 0 < angle < PI/2 ).
 * @param oIsExpanding
 *				Get TRUE if the cone flares outward ( increases in radius ) progressing along the axis-vector from the base-point.
 * @param oStartAngle
 *				Get the cone's start angle.
 * @param oEndAngle
 *				Get the cone's end angle.
 * @param ioRelimitedOnFace
 *				Never use this argument. Let it at its NULL_var default value.
 */
  virtual HRESULT GetConeData(double oBasePoint[3], double oAxisVector[3],
								double *oRadius, double *oHalfAngle,
								int *oIsExpanding, double *oStartAngle, double *oEndAngle,
								CATBaseUnknown_var ioRelimitedOnFace = NULL_var ) const = 0;

/**
 * Retrieves if the cone's axis is direct.
 * @param oIsDirect
 *				1 if axis is direct, 0 otherwise.
 */
  virtual HRESULT IsAxisDirect(int *oIsDirect) const = 0;

/**
 * @nodoc
 * Do not use - Deprecated
 */
  virtual HRESULT GetAllConeData(double pBasePoint[3], double pAxisVector[3],
								double *pRadius, double *pHalfAngle,
								int *pIsExpanding, double *pStartAngle, double *pEndAngle,
								CATBaseUnknown_var RelimitedOnFace = NULL_var,
								double pRefDirection[3] = NULL) const = 0;

/**
 * Retrieves the cone's reference direction.
 * @param oRefDirection
 *				Get the projection of oBasePoint on the cone along oRefDirection.
 *				Gives a point on the sewing edge.
 */
  virtual HRESULT GetConeInfo(double oRefDirection[3]) const = 0;

};

CATDeclareHandler(CATIExchangeCone,CATBaseUnknown);
#endif
