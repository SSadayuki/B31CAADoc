
#ifndef CATIGSMCircleCenterAxis_H
#define CATIGSMCircleCenterAxis_H

// COPYRIGHT Dassault Systemes 2003

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGitInterfacesExportedBy.h"
#include "CATICkeParm.h"
#include "CATISpecObject.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID IID_CATIGSMCircleCenterAxis;
#else
extern "C" const IID IID_CATIGSMCircleCenterAxis ;
#endif


/**
 * Interface to circle feature defined by a center and an axis.   
 * <b>Role</b>: Allows you to acess data of circle feature created from the center 
 * and axis/line specified.
 * @see CATIGSMFactory#CreateCircle
 */

class ExportedByCATGitInterfaces CATIGSMCircleCenterAxis: public CATBaseUnknown
{
 CATDeclareInterface;

  public:

   /**
    * Gets the point.
    *   @param ohPoint
    *      Element used for center computation       
    */
   virtual HRESULT GetPoint(CATISpecObject_var& ohPoint) = 0;

   /**
    * Sets the point.
    *   @param ihPoint
    *      Element used for center computation
    */
   virtual HRESULT SetPoint(const CATISpecObject_var ihPoint) = 0;

   /**
    * Gets the axis.
    *   @param ohAxis
    *       Axis of plane in which circle is lying
    */
   virtual HRESULT GetAxis(CATISpecObject_var& ohAxis) = 0;

   /**
    * Sets the axis.
    *   @param ihAxis
    *       Axis of plane in which circle is lying
    */
   virtual HRESULT SetAxis(const CATISpecObject_var ihAxis) = 0;
   
   /**
   * Gets the radius of the circle.
   * <br> Note: Succeeds only if DiameterMode is set to FALSE
   *   @param ohRadius
   *      radius
   */
   virtual HRESULT GetRadius(CATICkeParm_var & ohRadius) = 0;
   
   /**
   * Sets DiameterMode to FALSE and then sets the radius.
   *   @param ihRadius
   *      radius
   */
   virtual HRESULT SetRadius(const CATICkeParm_var ihRadius) = 0;

   /**
   * Gets the diameter of the circle. 
   * <br> Note: Succeeds only if DiameterMode is set to TRUE
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
   * <br> DiameterMode = FALSE implies radius (default), 
   * <br> DiameterMode = TRUE implies diameter.
   *   @param oDiameterMode
   *      Diameter Mode
   */
   virtual HRESULT GetDiameterMode(CATBoolean & oDiameterMode) = 0;

   /**
   * Sets DiameterMode.
   * <br>DiameterMode = FALSE implies radius (default), 
   * <br>DiameterMode = TRUE implies diameter. 
   * <br>Note: When DiameterMode is changed, Radius/Diameter value which is stored will not be modified.
   *   @param iDiameterMode
   *      Diameter Mode
   */
   virtual HRESULT SetDiameterMode (const CATBoolean iDiameterMode) = 0;

   /**
   * Gets ProjectionMode. 
   * <br>ProjectionMode = TRUE (default) implies point will be projected on to axis/line, 
   * <br>ProjectionMode = FALSE implies that point will be center of the circle. 
   *   @param oProjection
   *      Projection Mode
   */
   virtual HRESULT GetProjectionMode(CATBoolean & oProjection) = 0;

   /**
   * Sets ProjectionMode. 
   * <br>ProjectionMode = TRUE (default) implies point will be projected on to axis/line, 
   * <br>ProjectionMode = FALSE implies that point will be center of the circle. 
   *   @param iProjection
   *      Projection Mode
   */
   virtual HRESULT SetProjectionMode(const CATBoolean iProjection) = 0;

};
CATDeclareHandler (CATIGSMCircleCenterAxis, CATBaseUnknown);
#endif
