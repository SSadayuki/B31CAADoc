/* -*-c++-*- */
#ifndef CATIGSMCircle2PointsRad_H
#define CATIGSMCircle2PointsRad_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATBaseUnknown.h"
#include "CATGitInterfacesExportedBy.h"
#include "CATGSMOrientation.h"

class CATICkeParm_var; 
class CATISpecObject_var; 

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID  IID_CATIGSMCircle2PointsRad;
#else
extern "C" const IID IID_CATIGSMCircle2PointsRad;
#endif
/**
 * Interface to circle feature passing by two point with a given radius. 
 * <b>Role</b>: Allows you to access data of the circle feature created by using 
 * two passing points and a radius. 
 * @see CATIGSMFactory#CreateCircle
 */
class ExportedByCATGitInterfaces CATIGSMCircle2PointsRad : public CATBaseUnknown
{
   CATDeclareInterface;
public: 

 /**
 * Gets the first passing point.
 *   @param oFirsPoint 
 *      first point 
 */
 virtual HRESULT GetFirstPoint(CATISpecObject_var& oFirstPoint) = 0;

 /**
 * Sets the first passing point.
 *   @param iFirsPoint 
 *      first point 
 */
 virtual HRESULT SetFirstPoint(const CATISpecObject_var iFirstPoint) = 0;

 /**
 * Gets the second passing point.
 *   @param oSecondPoint 
 *      second point 
 */
 virtual HRESULT GetSecondPoint(CATISpecObject_var& oSecondPoint) = 0;

 /**
 * Sets the second passing point.
 *   @param iSecondPoint 
 *      second point 
 */
 virtual HRESULT SetSecondPoint(const CATISpecObject_var iSecondPoint) = 0;

 /**
 * Gets the support surface.
 *   @param oSupport 
 *      the support surface
 */
 virtual HRESULT GetSupport(CATISpecObject_var& oSupport) = 0;

 /**
 * Sets the support surface.
 *   @param iSupport 
 *      the support surface
 */
 virtual HRESULT SetSupport(const CATISpecObject_var iSupport) = 0;

 /**
 * Sets geodesic circle. 
 * <br> It puts the circle on the surface.
 *      S_OK if OK, E_FAIL if fail
 */
 virtual HRESULT SetGeodesic() = 0;

 /**
 * Inactivates geodesic circle. 
 * <br>Note: The circle becomes euclidean, and the surface is used to compute the circle axis.
 */
 virtual HRESULT UnsetGeodesic() = 0;

 /**
 * Queries whether the circle is geodesic or not.
 *   @param oGeod 
 *      geodesic type : when TRUE, the circle is geodesic.
 */
 virtual HRESULT IsGeodesic(CATBoolean & oGeod) = 0;

 /**
 * Gets the circle radius. Succeeds only if DiameterMode is set to FALSE
 *   @param oRadius
 *      circle radius
 */
 virtual HRESULT GetRadius(CATICkeParm_var& oRadius) = 0;

 /**
 * Sets DiameterMode to FALSE and then sets the radius.
 *   @param iRadius
 *      radius
 */
 virtual HRESULT SetRadius(const CATICkeParm_var iRadius) = 0;

 /**
 * Gets the diameter of the circle. Succeeds only if DiameterMode is set to TRUE
 *   @param ohDiameter
 *      diameter
 */
 virtual HRESULT GetDiameter(CATICkeParm_var & ohDiameter) = 0;
 
 /**
 * Sets DiameterMode to TRUE and then sets the diameter.
 *   @param ihDiameter
 *      diameter
 */
 virtual HRESULT SetDiameter(const CATICkeParm_var ihDiameter) = 0;
 
 /**
 * Gets DiameterMode. DiameterMode = FALSE implies radius (default), 
 * DiameterMode = TRUE implies diameter
 *   @param oDiameterMode
 *      Diameter Mode
 */
 virtual HRESULT GetDiameterMode(CATBoolean & oDiameterMode) = 0;
 
 /**
 * Sets DiameterMode. DiameterMode = FALSE implies radius (default), 
 * DiameterMode = TRUE implies diameter. When DiameterMode is changed, Radius/Diameter value,
 * which is stored will not be modified.
 *   @param iDiameterMode
 *      Diameter Mode
 */
 virtual HRESULT SetDiameterMode (const CATBoolean iDiameterMode) = 0;

 /**
 * Gets the circle orientation.
 *<br> Defines the side where circle is computed using the cross product of
 *      the direction of line between the 2 passing points and normal direction of the plane.
 *   @param oOrientation
 *      orientation
 */
 virtual HRESULT GetOrientation(CATGSMOrientation & oOrientation) = 0;

 /**
 * Sets the circle orientation. 
 *<br> Defines the side where circle is computed using the cross product of
 *      the direction of line between the 2 passing points and normal direction of the plane.
 *   @param iOrientation 
 *      orientation
 */
 virtual HRESULT SetOrientation(const CATGSMOrientation iOrientation) = 0;

 /**
 * Inverts the circle orientation.
 */
 virtual HRESULT InvertOrientation() = 0;
};
CATDeclareHandler (CATIGSMCircle2PointsRad, CATBaseUnknown);
#endif
