/* -*-c++-*- */
#ifndef CATIGSMRevol_H
#define CATIGSMRevol_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGitInterfacesExportedBy.h"
#include "CATISpecObject.h"
#include "CATICkeParm.h"
#include "CATGSMContextDef.h"
#include "CATGSMFeatureLimitDef.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID  IID_CATIGSMRevol;
#else
extern "C" const IID IID_CATIGSMRevol;
#endif
/**
 * Interface to revolution feature.
 * <b>Role</b>: Allows you to access data of the Revolution feature created by using 
 * an element, an axis and two angle values
 * <p>  LICENSING INFORMATION: Creation of volume result requires GSO License
 * <br> if GSO License is not granted , settting of Volume context has not effect 
 * <br> 
 * @see CATIGSMFactory#CreateRevol
 */
class ExportedByCATGitInterfaces CATIGSMRevol : public CATBaseUnknown
{
   CATDeclareInterface;
public: 
    /**
    * Gets the profile of revolution.
    * <br>The profile must not cross the revolution axis
    *   @return
    *      profile
    */
   virtual    CATISpecObject_var GetProfil()= 0;
    /**
    * Gets the  revolution axis.
    * <br>TThe profile must not cross the revolution axis
    *   @return
    *      revolution axis
    */
   virtual    CATISpecObject_var        GetAxisOfRevolution()= 0;
    /**
    * Gets the first angle value.
    *   @param oAng1
    *      first angle value.
    */
   virtual    HRESULT   GetBeginAngle( double & oAng1) = 0;
   /**
    * Gets the second angle value.
    *   @param oAng2
    *      second angle value.
    */
   virtual    HRESULT   GetEndAngle(double & oAng2) = 0;
    /**
    * Gets the first angle value.
    *   @param oAng1
    *      first angle value.
    */
   virtual    HRESULT GetBeginAngle (CATICkeParm_var & oAng1) = 0;
    /**
    * Gets the second angle value.
    *   @param oAng2
    *      second angle value.
    */
   virtual    HRESULT GetEndAngle (CATICkeParm_var & oAng2) = 0;  

   /**
    * Gets First Limit Type.
    *   @param oLim1Type
    *      Limit Type specified (Dimension or UptoElement)
	*   @see CATGSMFeatureLimitType
    */
   virtual    HRESULT GetFirstLimitType (CATGSMFeatureLimitType & oLim1Type) = 0;

  /**
    * Gets Second Limit Type.
    *   @param oLim2Type
    *      Limit Type specified (Dimension or UptoElement)
	*   @see CATGSMFeatureLimitType
    */
   virtual    HRESULT GetSecondLimitType (CATGSMFeatureLimitType & oLim2Type) = 0;

  /**
    * Gets the up-to element used as Limit1.
    *   @param ohUptoElem1
    *      up-to element used to limit revolution   
    */
   virtual    HRESULT GetFirstUptoElement  (CATISpecObject_var & ohUptoElem1) = 0;

  /**
    * Gets the up-to element used as Limit2.
    *   @param ohUptoElem2
    *      up-to element used to limit revolution       
    */
   virtual    HRESULT GetSecondUptoElement  (CATISpecObject_var & ohUptoElem2) = 0;

    /**
    * Sets the profile.
    *   @param iElem1
    *      New Profile.
    */
   virtual    HRESULT SetProfil(const CATISpecObject_var iElem1) = 0;
    /**
    * Sets the revolution axis.
    *   @param iElem1
    *      New revoution axis.
    */
   virtual    HRESULT SetAxisOfRevolution(const CATISpecObject_var iElem1) = 0;
    /**
    * Sets the firt angle value.
    *   @param iElem1
    *      New first angle value.
    */
   virtual    HRESULT SetBeginAngle(double iElem1) = 0;
    /**
    * Sets the second angle value.
    *   @param iElem1
    *      New second angle value.
    */
   virtual    HRESULT SetEndAngle(double iElem1) = 0;
    /**
    * Sets the firt angle value.
    *   @param iAng1
    *      New first angle value.
    */
   virtual    HRESULT SetBeginAngle(const CATICkeParm_var iAng1) =0;
    /**
    * Sets the second angle value.
    *   @param iAng2
    *      New second angle value.
    */
   virtual    HRESULT SetEndAngle  (const CATICkeParm_var iAng2) =0; 
    /**
    * Sets First Limit Type.
    *   @param iLim1Type
    *      Limit Type specified (Dimension or UptoElement)
	*   @see CATGSMFeatureLimitType
    */
   virtual    HRESULT SetFirstLimitType (const CATGSMFeatureLimitType & iLim1Type) = 0;

  /**
    * Sets Second Limit Type.
    *   @param iLim2Type
    *      Limit Type specified (Dimension or UptoElement)
	*   @see CATGSMFeatureLimitType
    */
   virtual    HRESULT SetSecondLimitType (const CATGSMFeatureLimitType & iLim2Type) = 0;

  /**
    * Sets the up-to element to be used as Limit1.
    *   @param ihUptoElem1
    *      up-to element which is used to limit revolution       
    */ 
   virtual    HRESULT SetFirstUptoElement  (const CATISpecObject_var & ihUptoElem1) = 0;

  /**
    * Sets the up-to element to be used as Limit2.
    *   @param ihUptoElem2
    *      up-to element which is used to limit revolution  
    */
   virtual    HRESULT SetSecondUptoElement  (const CATISpecObject_var & ihUptoElem2) = 0;

    /**
    * Gets the orientation of the revolution.
    *   @param oOrient
    *      TRUE means that the natural orientation of the axis is taken.
    *      FALSE means that the opposite orientation is taken
    */
   virtual    HRESULT GetOrientation ( CATBoolean & oOrient)=0;
    /**
    * Sets the orientation of the revolution.
    *   @param oOrient
    *      TRUE means that the natural orientation of the axis is taken.
    *      FALSE means that the opposite orientation is taken
    */
   virtual    HRESULT SetOrientation ( CATBoolean iOrient)=0;
    /**
    * Inverts the orientation of the revolution. 
    */
   virtual    HRESULT InvertOrientation()=0; 

  /**
    * Gets context type for existing feature.
    *   @param oContextType
    *      CATGSMSurfaceCtxt if the result is surface, CATGSMVolumeCtxt if it is volume
    *   @see CATGSMFeatureContextType
    */
   virtual    HRESULT GetContext (CATGSMFeatureContextType & oContextType) = 0;
  

  /**
    * Sets context type to generate a Surface or Volume.
    *   @param iContextType
    *      CATGSMSurfaceCtxt to generate a surface, CATGSMVolumeCtxt (requires GSO License) to generate a volume
    *   @see CATGSMFeatureContextType
    */
   virtual    HRESULT SetContext (const CATGSMFeatureContextType iContextType) = 0;
   /**
   * Gets the first angle offset value of first upto element.
   *   @param oAng1
   *      first angle offset value.
   */
   virtual    HRESULT GetBeginAngleOffset(CATICkeParm_var & oAng1) = 0;

	 /**
	 * Sets the first angle offset value of first upto element.
	 *   @param iAng1
	 *      New first angle offset value.
	 */
	 virtual    HRESULT SetBeginAngleOffset(const CATICkeParm_var iAng1) = 0;

   /**
   * Gets the second angle offset value of second upto element.
   *   @param oAng2
   *      second angle offset value.
   */
   virtual    HRESULT GetEndAngleOffset(CATICkeParm_var & oAng2) = 0;
  
   /**
   * Sets the second angle offset value of second upto element.
   *   @param iAng2
   *      New second angle offset value.
   */
   virtual    HRESULT SetEndAngleOffset(const CATICkeParm_var iAng2) = 0;


};
CATDeclareHandler (CATIGSMRevol, CATBaseUnknown);
#endif // CATIGSMRevol_H

