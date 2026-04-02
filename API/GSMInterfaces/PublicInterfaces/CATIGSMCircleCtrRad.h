/* -*-c++-*- */
#ifndef CATIGSMCircleCtrRad_H
#define CATIGSMCircleCtrRad_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGitInterfacesExportedBy.h"
#include "CATIGSMDirection.h"

class CATMathDirection;
class CATICkeParm_var; 
class CATISpecObject_var; 

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID  IID_CATIGSMCircleCtrRad;
#else
extern "C" const IID IID_CATIGSMCircleCtrRad;
#endif
/**
 * Interface to circle feature defined by a center and a radius.  
 * <b>Role</b>: Allows you to access data of the circle feature created by using 
 * its center and a radius.
 * @see CATIGSMFactory#CreateCircle
 */
class ExportedByCATGitInterfaces CATIGSMCircleCtrRad : public CATBaseUnknown
{
   CATDeclareInterface;
public: 

 /**
  * Gets the circle center.
  *   @param oCenter
  *      center point
  */
 virtual HRESULT GetCenter(CATISpecObject_var& oCenter) = 0;

 /**
  * Sets the circle center.
  *   @param iCenter
  *      center point
  */
 virtual HRESULT SetCenter(const CATISpecObject_var iCenter) = 0;

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
  * Gets the circle radius. 
  * <br>Note: Succeeds only if DiameterMode is set to FALSE
  *   @param oRadius 
  *      radius positive value
  */
 virtual HRESULT GetRadius(CATICkeParm_var& oRadius) = 0;

 /**
  * Sets DiameterMode to FALSE and then sets the radius.
  *   @param iRadius 
  *      radius 
  */
 virtual HRESULT SetRadius(const CATICkeParm_var iRadius) = 0;

 /**
 * Gets the diameter of the circle. 
 * <br>Note: Succeeds only if DiameterMode is set to TRUE
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
 * Gets DiameterMode. 
 * <br>DiameterMode = FALSE implies radius (default), 
 * <br>DiameterMode = TRUE implies diameter
 *   @param oDiameterMode
 *      Diameter Mode
 */
 virtual HRESULT GetDiameterMode(CATBoolean & oDiameterMode) = 0;
 
 /**
 * Sets DiameterMode. 
 * <br>DiameterMode = FALSE implies radius (default), 
 * <br>DiameterMode = TRUE implies diameter. 
 * <br>Note: When DiameterMode is changed, Radius/Diameter value,
 * which is stored will not be modified.
 *   @param iDiameterMode
 *      Diameter Mode
 */
 virtual HRESULT SetDiameterMode (const CATBoolean iDiameterMode) = 0;

 /**
  * Sets the circle on the surface (Geodesic mode).
  */
 virtual HRESULT SetGeodesic() = 0;

 /**
  * Inactivates geodesic circle. 
  * <br>Note: The circle becomes euclidean, and the surface is used to compute the circle axis.
  */
 virtual HRESULT UnsetGeodesic() = 0;

 /**
  * Queries whether the circle is geodesic or not.
  *   @param oGeodesic 
  *      geodesic flag  (TRUE) 
  */
 virtual HRESULT IsGeodesic(CATBoolean & oGeodesic) = 0;
  /**
    * Gets the first direction.
    * <br>
    * The direction is used as angle reference.
    *   @param oElem
    *      first direction 
    * @see CATIGSMDirection
    */
 virtual    HRESULT GetFirstDirection(CATIGSMDirection_var & oElem) = 0;

  /**
    * Sets the first direction.
    * <br>
    * The direction is used as angle reference.
    *   @param iElem
    *      first direction 
    * @see CATIGSMDirection
    */
 virtual    HRESULT SetFirstDirection(const CATIGSMDirection_var iElem) = 0;

 /**
  * Gets the second direction on the plane to compute the point (for stability).
  * <br>This direction has to be kept perpendicular to the first direction
  *   @param oDir
  *      second direction
  *      @see CATMathDirection 
  */
 virtual HRESULT GetSecondDirection(CATMathDirection& oDir) = 0;

 /**
  * Sets the second direction on the plane to compute the point (for stability).
  * <br>This direction has to be kept perpendicular to the first direction
  *   @param iDir
  *      second direction
  *      @see CATMathDirection 
  */
 virtual HRESULT SetSecondDirection(const CATMathDirection & iDir) = 0;
 };
CATDeclareHandler (CATIGSMCircleCtrRad, CATBaseUnknown);
#endif




