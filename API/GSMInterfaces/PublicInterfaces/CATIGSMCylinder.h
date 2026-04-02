#ifndef CATIGSMCylinder_H
#define CATIGSMCylinder_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */



#include "CATGitInterfacesExportedBy.h"
#include "CATISpecObject.h"
#include "CATICkeParm.h"
#include "CATIGSMDirection.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID IID_CATIGSMCylinder;
#else
extern "C" const IID IID_CATIGSMCylinder ;
#endif

/**
 * Interface to cylinder feature.
 * <b>Role</b>: Allows you to access data of the Cylinder feature
 * created by using  an element, a direction and two length values
 * @see CATIGSMFactory#CreateCylinder
 */
class ExportedByCATGitInterfaces CATIGSMCylinder: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

     /**
    * Gets the center of the cylinder.
    *   @return
    *      Center of cylinder
    */
   virtual    CATISpecObject_var   GetCenter() = 0;

  /**
    * Gets the cylinder direction.
    *   @return
    *      direction 
    */
   virtual    CATIGSMDirection_var GetDir() = 0;

  /**
    * Gets the first length value.
    *   @param oRadius
    *      Radius value
    */
   virtual    HRESULT  GetRadius(double & oRadius) = 0;

   /**
    * Gets the first length value.
    *   @param oLength1
    *      first length value
    */
   virtual    HRESULT  GetFirstLimitValue(double & oLength1) = 0;

  /**
    * Gets the second length value.
    *   @param oLength2
    *      first length value
    */
   virtual    HRESULT  GetSecondLimitValue(double & oLength2) = 0;

  /**
    * Gets the radius value.
    *   @param ohRadius
    *      Radius value
    *   @see CATICkeParm
    */
   virtual    HRESULT GetRadius(CATICkeParm_var& ohRadius)=0;

   /**
    * Gets the first length value.
    *   @param ohLength1
    *      first length value
    *   @see CATICkeParm
    */
   virtual    HRESULT GetFirstLimitValue(CATICkeParm_var& ohLength1)=0;

  /**
    * Gets the second length value.
    *   @param ohLength2
    *      second length value
    *   @see CATICkeParm
    */
   virtual    HRESULT GetSecondLimitValue(CATICkeParm_var& ohLength2)=0;

  /**
    * Gets the orientation of the extrude.
    *  TRUE means that the natural  orientation of the direction
    *  is the right one. 
    *   @param oOrient
    *      Extrude orientation
    */
   virtual    HRESULT GetOrientation(CATBoolean & oOrient)=0;

  /**
    * Sets the center of the cylinder.
    *   @param ihCenter
    *      Center of the Cylinder
    */
   virtual    HRESULT SetCenter  (const CATISpecObject_var ihCenter) = 0;

  /**
    * Sets the direction of the cylinder.
    *   @param ihDir
    *      Direction of the cylinder
    *   @see CATIGSMDirection
    */
   virtual    HRESULT SetDir  (const CATIGSMDirection_var ihDir) = 0;

  /**
    * Sets the radius value.
    *   @param iRadius
    *      New first radius
    */
   virtual    HRESULT SetRadius(double iRadius) = 0;

  /**
    * Sets the first length value.
    *   @param iLength1
    *      New first length value
    */
   virtual    HRESULT SetFirstLimitValue(double iLength1) = 0;
    /**
    * Sets the second length value.
    *   @param iLength2
    *      New second length value
    */
   virtual    HRESULT SetSecondLimitValue(double iLength2) = 0;

  /**
    * Sets the radius value.
    *   @param ihRadius
    *      New radius value
    *   @see CATICkeParm
    */
   virtual    HRESULT SetRadius (const CATICkeParm_var ihRadius) = 0;

  /**
    * Sets the first length value.
    *   @param ihLength1
    *      New first length value
    *   @see CATICkeParm
    */
   virtual    HRESULT SetFirstLimitValue (const CATICkeParm_var ihLength1) = 0;

  /**
    * Sets the second length value.
    *   @param ihLength2
    *      New second length value
    *   @see CATICkeParm
    */
   virtual    HRESULT SetSecondLimitValue(const CATICkeParm_var iOfs2) = 0;

   
   /**
    * Sets  the orientation of the extrude.
    * <br>TRUE means that the direction is inverted
    *   @param iOrient
    *      TRUE or FALSE
    */
   virtual    HRESULT SetOrientation(CATBoolean iOrient)=0;

  /**
    * Inverts the orientation of the extrude.
    * <br>TRUE means that the direction is inverted
    */
   virtual    HRESULT InvertOrientation()=0; 

  /**
	 * Sets the symmetrical extension on Cylinder Length (Lenght 2 = -Lenght 1).
	 *   @param iSym
	 *       Symetry flag  
	 */
	 virtual HRESULT SetSymmetricalExtension(CATBoolean iSym) = 0;

	 /**
	 * Gets whether the symmetrical extension on Cylinder Length is active.
	 *   @param oSym
	 *       Symetry flag  
	 */
	 virtual HRESULT GetSymmetricalExtension(CATBoolean& oSym) = 0;
};

CATDeclareHandler (CATIGSMCylinder, CATBaseUnknown);
//------------------------------------------------------------------

#endif
