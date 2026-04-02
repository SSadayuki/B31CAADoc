/* -*-c++-*- */
#ifndef CATIGSMExtrude_H
#define CATIGSMExtrude_H
 
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGitInterfacesExportedBy.h"
#include "CATISpecObject.h"
#include "CATICkeParm.h"
#include "CATIGSMDirection.h"
#include "CATGSMContextDef.h"
#include "CATGSMFeatureLimitDef.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID  IID_CATIGSMExtrude;
#else
extern "C" const IID IID_CATIGSMExtrude;
#endif
/**
 * Interface to extrusion feature.
 * <b>Role</b>: Allows you to access data of the Extrusion feature
 * created by using  an element, a direction and two length values
 * <p>  LICENSING INFORMATION: Creation of volume result requires GSO License
 * <br> if GSO License is not granted , settting of volume context has not effect 
 * <br>  
 * @see CATIGSMFactory#CreateExtrude
 */
class ExportedByCATGitInterfaces CATIGSMExtrude : public CATBaseUnknown
{
   CATDeclareInterface;
   
public: 
  /**
    * Gets the feature that has been extruded.
    *   @return
    *      extruded feature 
    */
   virtual    CATISpecObject_var   GetProfil() = 0;

  /**
    * Gets the extrusion direction.
    *   @return
    *      direction 
    */
   virtual    CATIGSMDirection_var GetDir() = 0;

  /**
    * Gets the first length value. For surface extrude, if limit type is upto, limit's value is not used.
    * In case of Volume Extrude, if the up-to element is specified, value of Limit will act as offset value from that upto element
    *   @param Ofs1
    *      first length value
    */
   virtual    HRESULT  GetFirstLimitValue(double & oOfs1) = 0;

  /**
    * Gets the second length value. For surface extrude, if limit type is upto, limit's value is not used.
    * In case of Volume Extrude, if the up-to element is specified, value of Limit will act as offset value from that upto element
    *   @param Ofs2
    *      first length value
    */
   virtual    HRESULT  GetSecondLimitValue(double & oOfs2) = 0;

  /**
    * Gets the first length value. For surface extrude, if limit type is upto, limit's value is not used.
    * In case of Volume Extrude, if the up-to element is specified, value of Limit will act as offset value from that upto element
    *   @param Ofs1
    *      first length value
    *   @see CATICkeParm
    */
   virtual    HRESULT GetFirstLimitValue(CATICkeParm_var& oOfs1)=0;

  /**
    * Gets the second length value. For surface extrude, if limit type is upto, limit's value is not used.
    * In case of Volume Extrude, if the up-to element is specified, value of Limit will act as offset value from that upto element
    *   @param Ofs2
    *      second length value
    *   @see CATICkeParm
    */
   virtual    HRESULT GetSecondLimitValue(CATICkeParm_var& oOfs2)=0;

  /**
    * Gets First Limit Type.
    *   @param oLim1Type
    *      Limit Type specified
    * enum CATGSMFeatureLimitType { CATGSMFeatureLimitType_Unknown = 0,
                                  CATGSMFeatureLimitType_Dimension = 1,
                                  CATGSMFeatureLimitType_UptoElement = 2};
    */
   virtual    HRESULT GetFirstLimitType (CATGSMFeatureLimitType & oLim1Type) = 0;

  /**
    * Gets Second Limit Type.
    *   @param oLim2Type
    *      Limit Type specified
    * enum CATGSMFeatureLimitType { CATGSMFeatureLimitType_Unknown = 0,
                                  CATGSMFeatureLimitType_Dimension = 1,
                                  CATGSMFeatureLimitType_UptoElement = 2};
    */
   virtual    HRESULT GetSecondLimitType (CATGSMFeatureLimitType & oLim2Type) = 0;

  /**
    * Gets the up-to element used as Limit1.
    *   @param ohUptoElem1
    *      up-to element used to limit extrusion    
    */
   virtual    HRESULT GetFirstUptoElement  (CATISpecObject_var & ohUptoElem1) = 0;

  /**
    * Gets the up-to element used as Limit2.
    *   @param ohUptoElem2
    *      up-to element used to limit extrusion       
    */
   virtual    HRESULT GetSecondUptoElement  (CATISpecObject_var & ohUptoElem2) = 0;

  /**
    * Gets the orientation of the extrude.
    *  TRUE means that the natural  orientation of the direction
    *  is the right one. 
    *   @param oOrient
    *      Extrude orientation
    */
   virtual    HRESULT GetOrientation(CATBoolean & oOrient)=0;

  /**
    * Sets the element that will be extruded.
    *   @param iElem1
    *      Element to be extruded
    */
   virtual    HRESULT SetProfil  (const CATISpecObject_var iElem1) = 0;

  /**
    * Sets the direction of the extrusion.
    *   @param iElem1
    *      Direction of the extrusion
    *   @see CATIGSMDirection
    */
   virtual    HRESULT SetDir  (const CATIGSMDirection_var iElem1) = 0;

  /**
    * Sets the first length value. For surface extrude, if limit type is upto, limit's value is not used.
    * In case of Volume Extrude, if the up-to element is specified, value of Limit will act as offset value from that upto element
    *   @param iElem1
    *      New first length value
    */
   virtual    HRESULT SetFirstLimitValue(double iElem1) = 0;
    /**
    * Sets the second length value. For surface extrude, if limit type is upto, limit's value is not used.
    * In case of Volume Extrude, if the up-to element is specified, value of Limit will act as offset value from that upto element
    *   @param iElem1
    *      New second length value
    */
   virtual    HRESULT SetSecondLimitValue(double iElem1) = 0;

  /**
    * Sets the first length value. For surface extrude, if limit type is upto, limit's value is not used.
    * In case of Volume Extrude, if the up-to element is specified, value of Limit will act as offset value from that upto element
    *   @param iOfs1
    *      New first length value
    *   @see CATICkeParm
    */
   virtual    HRESULT SetFirstLimitValue (const CATICkeParm_var iOfs1) = 0;

  /**
    * Sets the second length value. For surface extrude, if limit type is upto, limit's value is not used.
    * In case of Volume Extrude, if the up-to element is specified, value of Limit will act as offset value from that upto element
    *   @param iOfs2
    *      New second length value
    *   @see CATICkeParm
    */
   virtual    HRESULT SetSecondLimitValue(const CATICkeParm_var iOfs2) = 0;

  /**
    * Sets First Limit Type.
    *   @param iLim1Type
    *      Limit Type specified
    * enum CATGSMFeatureLimitType { CATGSMFeatureLimitType_Unknown = 0,
                                  CATGSMFeatureLimitType_Dimension = 1,
                                  CATGSMFeatureLimitType_UptoElement = 2};
    */
   virtual    HRESULT SetFirstLimitType (const CATGSMFeatureLimitType & iLim1Type) = 0;

  /**
    * Sets Second Limit Type.
    *   @param iLim2Type
    *      Limit Type specified
    * enum CATGSMFeatureLimitType { CATGSMFeatureLimitType_Unknown = 0,
                                  CATGSMFeatureLimitType_Dimension = 1,
                                  CATGSMFeatureLimitType_UptoElement = 2};
    */
   virtual    HRESULT SetSecondLimitType (const CATGSMFeatureLimitType & iLim2Type) = 0;

  /**
    * Sets the up-to element to be used as Limit1.
    *   @param ihUptoElem1
    *      up-to element which is used to limit extrusion       
    */ 
   virtual    HRESULT SetFirstUptoElement  (const CATISpecObject_var & ihUptoElem1) = 0;

  /**
    * Sets the up-to element to be used as Limit2.
    *   @param ihUptoElem2
    *      up-to element which is used to limit extrusion  
    */
   virtual    HRESULT SetSecondUptoElement  (const CATISpecObject_var & ihUptoElem2) = 0;

  /**
    * Sets  the orientation of the extrude.
    * TRUE means that the direction is inverted
    *   @param iOrient
    *      TRUE or FALSE
    */
   virtual    HRESULT SetOrientation(CATBoolean iOrient)=0;

  /**
    * Inverts the orientation of the extrude.
    * TRUE means that the direction is inverted
    */
   virtual    HRESULT InvertOrientation()=0; 

  /**
    * Gets the context of the extrude.
    *   @param oContextType
    *      CATGSMSurfaceCtxt if the result is surface, CATGSMVolumeCtxt if it is volume
    *   @see CATGSMFeatureContextType
    */
   virtual    HRESULT GetContext(CATGSMFeatureContextType & oContext)=0; 

   /**
    * Sets the context of the extrude.
    *   @param iContextType
    *      CATGSMSurfaceCtxt to generate a surface, CATGSMVolumeCtxt (requires GSO License) to generate a volume
    *   @see CATGSMFeatureContextType
    */
   virtual    HRESULT SetContext(const CATGSMFeatureContextType iContext)=0; 

	 /**
	 * Sets the symmetrical extension of Extrude Lengths (Limit 2 = -Limit 1).
	 *   @param iSym
	 *       Symetry flag  
	 */
	 virtual    HRESULT SetSymmetricalExtension(CATBoolean iSym) = 0;

	 /**
	 * Gets whether the symmetrical extension of Extrude Lengths is active.
	 *   @param oSym
	 *       Symetry flag  
	 */
	 virtual    HRESULT GetSymmetricalExtension(CATBoolean& oSym) = 0;

	 	/* Gets the Automatic.
	*     @Param oAutomatic
	*        1 = Extrude created with default normal direction
	*		 0 = Extrude created with explicit direction
	*/
	virtual HRESULT GetAutomaticDirection(int & oAutomatic) = 0;

	/* Sets the Automatic.
	*     @Param iAutomatic
	*        1 = Extrude created with default normal direction
	*		 0 = Extrude created with explicit direction
	*/
	virtual HRESULT SetAutomaticDirection(const int & iAutomatic) = 0;

};
CATDeclareHandler (CATIGSMExtrude, CATBaseUnknown);
#endif // CATIGSMExtrude_H








