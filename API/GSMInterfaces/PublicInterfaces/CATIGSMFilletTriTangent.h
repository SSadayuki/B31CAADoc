/* -*-c++-*- */
#ifndef CATIGSMFilletTriTangent_H
#define CATIGSMFilletTriTangent_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGitInterfacesExportedBy.h"
#include "CATISpecObject.h"
#include "CATICkeParm.h"
#include "CATGSMFilletDef.h"
#include "CATGSMOrientation.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID  IID_CATIGSMFilletTriTangent;
#else
extern "C" const IID IID_CATIGSMFilletTriTangent;
#endif
/** 
 * Fillet Tri-Tangent feature. 
 * <b>Role</b>: Allows to access data of the Fillet Bi-Tangent feature created by using two 
 * support surfaces, their orientation, a radius, and options 
 * (supports trimming and fillet extremities type)
 * 
 * Note: 
 *  enum CATGSMFilletSupportsTrimMode { CATGSMNoTrim=0, CATGSMTrim=1, CATGSMTrimSupport1=2, CATGSMTrimSupport2=3};
 *  enum CATGSMFilletExtremitiesMode  { CATGSMSmooth=0, CATGSMStraight=1,  CATGSMMaximum=2, CATGSMMinimum=3 };
 * @see CATIGSMFactory#CreateFillet
 */
class ExportedByCATGitInterfaces CATIGSMFilletTriTangent : public CATBaseUnknown
{
   CATDeclareInterface;
public:  
    
  /**
    * Gets the first support surface feature.
    *   @param oElem
    *      first support surface feature
    */ 
 virtual    HRESULT GetFirstElem(CATISpecObject_var & oElem) = 0;
  
  /**
    * Sets the first support surface feature.
    *   @param iElem
    *      first support surface feature
    */ 
 virtual    HRESULT SetFirstElem(const CATISpecObject_var iElem) = 0;
  
  /**
    * Gets the second support surface feature.
    *   @param oElem
    *      second support surface feature
    */ 
 virtual    HRESULT GetSecondElem(CATISpecObject_var & oElem) = 0;
  
  /**
    * Sets the second support surface feature.
    *   @param iElem
    *      second support surface feature
    */ 
 virtual    HRESULT SetSecondElem(const CATISpecObject_var iElem) = 0;
 
 /**
    * Gets the third support surface feature called remove element.
    *   @param oElem
    *      Remove support surface feature
    */ 
 virtual    HRESULT GetRemoveElem(CATISpecObject_var & oElem) = 0;
  
  /**
    * Sets the third support surface feature called remove element.
    *   @param iElem
    *      Remove support surface feature
    */ 
 virtual    HRESULT SetRemoveElem(const CATISpecObject_var iElem) = 0;
 
  /**
    * Gets the first orientation used to specify fillet center position.<BR>
    * Orientation is same or inverse than the normal to the first surface support<BR>
    *   @param oOrientation
    *      first orientation 
    */
 virtual    HRESULT GetFirstOrientation(CATGSMOrientation & oOrientation) = 0;
  
  /**
    * Sets the first orientation used to specify fillet center position.<BR>
    * Orientation is same or inverse than the normal to the first surface support<BR>
    *   @param iOrientation
    *      first orientation 
    */
 virtual    HRESULT SetFirstOrientation(CATGSMOrientation iOrientation) = 0;
  
  /**
    * Gets the second orientation used to specify fillet center position.<BR>
    * Orientation is same or inverse than the normal to the second surface support<BR>
    *   @param Orientation
    *      second oOrientation 
    */
 virtual    HRESULT GetSecondOrientation(CATGSMOrientation & oOrientation) = 0;
  
  /**
    * Sets the second orientation used to specify fillet center position.<BR>
    * Orientation is same or inverse than the normal to the second surface support<BR>
    *   @param iOrientation
    *      second orientation 
    */
 virtual    HRESULT SetSecondOrientation(CATGSMOrientation iOrientation) = 0; 

 /**
    * Gets the third orientation used to specify fillet center position.<BR>
    * Orientation is same or inverse than the normal to the remove surface support<BR>
    *   @param Orientation
    *      second oOrientation 
    */
 virtual    HRESULT GetRemoveOrientation(CATGSMOrientation & oOrientation) = 0;
  
  /**
    * Sets the third orientation used to specify fillet center position.<BR>
    * Orientation is same or inverse than the normal to the remove surface support<BR>
    *   @param iOrientation
    *      second orientation 
    */
 virtual    HRESULT SetRemoveOrientation(CATGSMOrientation iOrientation) = 0; 
 
  /**
    * Inverts first orientation used to specify fillet center position.
    */
 virtual    HRESULT InvertFirstOrientation() = 0;
  
  /**
    * Inverts second orientation used to specify fillet center position.
    */
 virtual    HRESULT InvertSecondOrientation() = 0;

  /**
    * Inverts remove orientation used to specify fillet center position.
    */
 virtual    HRESULT InvertRemoveOrientation() = 0;  

 /**
    * Gets  whether support surfaces are trimmed or not.
    *   @param oMode
    *    CATGSMTrim or CATGSMNoTrim 
    *      if CATGSMTrim the 2 supports are trimmed and assembled with the fillet ribbon.
    */
 virtual    HRESULT GetSupportsTrimMode(CATGSMFilletSupportsTrimMode & oMode) = 0;
  
  /**
    * Sets trim mode for bitangent fillet.
    * <br> It allows to activate the trim of the 2 support surfaces
    *   @param iMode
    *    CATGSMTrim or CATGSMNoTrim 
    *      if CATGSMTrim the 2 supports are trimmed and assembled with the fillet ribbon.
    */ 
 virtual    HRESULT SetSupportsTrimMode(CATGSMFilletSupportsTrimMode iMode) = 0; 
  
  /**
    * Gets fillet ribbon relimitation mode (or fillet extremities mode).
    *   @param oMode
    *  Fillet extremities mode 
    *  CATGSMSmooth or CATGSMStraight or CATGSMMaximum or CATGSMMinimum
    */
 virtual    HRESULT GetRibbonRelimitationMode(CATGSMFilletExtremitiesMode & oMode) = 0;
 
  /**
    * Sets fillet ribbon relimitation mode (or fillet extremities mode).
    *   @param iMode
    *  Fillet extremities mode 
    *  CATGSMSmooth or CATGSMStraight or CATGSMMaximum or CATGSMMinimum
    */
 virtual    HRESULT SetRibbonRelimitationMode(CATGSMFilletExtremitiesMode iMode) = 0; 

};
CATDeclareHandler (CATIGSMFilletTriTangent, CATBaseUnknown);
#endif // CATIGSMFilletTriTangent_H
