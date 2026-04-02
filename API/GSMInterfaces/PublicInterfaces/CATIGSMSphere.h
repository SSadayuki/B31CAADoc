/* -*-c++-*- */
#ifndef CATIGSMSphere_H
#define CATIGSMSphere_H

// COPYRIGHT DASSAULT SYSTEMES 2001

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGitInterfacesExportedBy.h"
#include "CATISpecObject.h"
#include "CATICkeParm.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID  IID_CATIGSMSphere;
#else
extern "C" const IID IID_CATIGSMSphere;
#endif
/**
 * Interface to sphere feature.
 * <b>Role</b>: Allows you to access data of the sphere feature created by using 
 * a center, an axis, a radius and four angle values
 * @see CATIGSMFactory#CreateSphere
 */
class ExportedByCATGitInterfaces CATIGSMSphere : public CATBaseUnknown
{
   CATDeclareInterface;
public: 

  /**
    * Types of sphere limitation.
    * @param Angles 
    *    The sphere is limited by given angles.
    * @param  Whole 
    *    The sphere is entire.
    * <br>This is the complementary circle of the previous one.
    */
    enum CATIGSMSphereLimitation {Angles = 0,Whole = 1};

   /**
    * Gets the sphere center.
    *   @param oCenter
    *      center point
    */
    virtual HRESULT GetCenter(CATISpecObject_var& oCenter) = 0;
    /**
    * Gets the  sphere axis.
	*   @param oAxis
    *   @return
    *      sphere axis
    */
    virtual HRESULT GetAxis(CATISpecObject_var& oAxis) = 0;
    /**
    * Gets the sphere radius.
    *   @param oRadius 
    *      radius positive value
    */
    virtual HRESULT GetRadius(CATICkeParm_var& oRadius) = 0;
    /**
    * Gets the first parallel angle value.
    *   @param oAng1
    *      first parallel angle value.
    */
   virtual    HRESULT   GetBeginParallelAngle( double & oAng1) = 0;
   /**
    * Gets the second parallel angle value.
    *   @param oAng2
    *      second parallel angle value.
    */
   virtual    HRESULT   GetEndParallelAngle(double & oAng2) = 0;
    /**
    * Gets the first parallel angle value.
    *   @param oAng1
    *      first parallel angle value.
    */
   virtual    HRESULT GetBeginParallelAngle (CATICkeParm_var & oAng1) = 0;
    /**
    * Gets the second parallel angle value.
    *   @param oAng2
    *      second parallel angle value.
    */
   virtual    HRESULT GetEndParallelAngle (CATICkeParm_var & oAng2) = 0;
    /**
    * Gets the first meridian angle value.
    *   @param oAng3
    *      first meridian angle value.
    */
   virtual    HRESULT   GetBeginMeridianAngle( double & oAng3) = 0;
   /**
    * Gets the second meridian angle value.
    *   @param oAng4
    *      second meridian angle value.
    */
   virtual    HRESULT   GetEndMeridianAngle(double & oAng4) = 0;
    /**
    * Gets the first meridian angle value.
    *   @param oAng3
    *      first meridian angle value.
    */
   virtual    HRESULT GetBeginMeridianAngle (CATICkeParm_var & oAng3) = 0;
    /**
    * Gets the second meridian angle value.
    *   @param oAng4
    *      second meridian angle value.
    */
   virtual    HRESULT GetEndMeridianAngle (CATICkeParm_var & oAng4) = 0;  

   /**
    * Sets the sphere center. 
    *  @param iCenter
    *      center point
    */
   virtual HRESULT SetCenter(const CATISpecObject_var iCenter) = 0;
    /**
    * Sets the sphere axis.
    *   @param iAxis
    *      New sphere axis.
    */
   virtual    HRESULT SetAxis(const CATISpecObject_var iAxis) = 0;
    /**
    * Sets the sphere radius.
    *   @param iRadius 
    *      radius 
    */
    virtual HRESULT SetRadius(const CATICkeParm_var iRadius) = 0;
    /**
    * Sets the firt parallel angle value.
    *   @param iAng1
    *      New first parallel angle value.
    */
   virtual    HRESULT SetBeginParallelAngle(double iAng1) = 0;
    /**
    * Sets the second parallel angle value.
    *   @param iAng2
    *      New second parallel angle value.
    */
   virtual    HRESULT SetEndParallelAngle(double iAng2) = 0;
    /**
    * Sets the firt parallel angle value.
    *   @param iAng1
    *      New first parallel angle value.
    */
   virtual    HRESULT SetBeginParallelAngle(const CATICkeParm_var iAng1) =0;
    /**
    * Sets the second parallel angle value.
    *   @param iAng2
    *      New second parallel angle value.
    */
   virtual    HRESULT SetEndParallelAngle  (const CATICkeParm_var iAng2) =0; 
    /**
    * Sets the firt meridian angle value.
    *   @param iAng3
    *      New first meridian angle value.
    */
   virtual    HRESULT SetBeginMeridianAngle(double iAng3) = 0;
    /**
    * Sets the second meridian angle value.
    *   @param iAng4
    *      New second meridian angle value.
    */
   virtual    HRESULT SetEndMeridianAngle(double iAng4) = 0;
    /**
    * Sets the firt meridian angle value.
    *   @param iAng3
    *      New first meridian angle value.
    */
   virtual    HRESULT SetBeginMeridianAngle(const CATICkeParm_var iAng3) =0;
    /**
    * Sets the second meridian angle value.
    *   @param iAng4
    *      New second meridian angle value.
    */
   virtual    HRESULT SetEndMeridianAngle  (const CATICkeParm_var iAng4) =0; 
    /**
      * Gets the limitation type for the sphere (see CATIGSMSphereLimitation enumeration).
      *   @param oLimit 
      *      sphere limitation
      */
   virtual HRESULT GetLimitation(CATIGSMSphereLimitation & oLimit) = 0;
    /**
      * Sets the limitation type for the sphere (see CATIGSMSphereLimitation enumeration). 
      *   @param iLimit  
      *         enum CATIGSMSphereLimitation {Angles, Whole};
      */
   virtual HRESULT SetLimitation(const CATIGSMSphereLimitation  iLimit) = 0;


};
CATDeclareHandler (CATIGSMSphere, CATBaseUnknown);
#endif // CATIGSMSphere_H
