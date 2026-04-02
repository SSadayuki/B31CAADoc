/* -*-c++-*- */
#ifndef CATIGSMHealing_H
#define CATIGSMHealing_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGitInterfacesExportedBy.h"
#include "CATISpecObject.h"
#include "CATICkeParm.h"
#include "CATGSMHealingModeDef.h"
#include "CATGSMContinuityDef.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID  IID_CATIGSMHealing;
#else
extern "C" const IID IID_CATIGSMHealing;
#endif
/**
 * Interface to surface healing feature .
 * <b>Role</b>: Allows you to gets and/or sets the definition elements of a surface Healing: 
 * a surface, an orientation and an Healing value.
 * @see CATIGSMFactory#CreateHealing
 */
class ExportedByCATGitInterfaces CATIGSMHealing : public CATBaseUnknown
{
   CATDeclareInterface;
public: 

 /**
  * Gets the list of bodies to heal.
  *   @param CATLISTV oBodyToHeal
  *      List of Healing Bodies
  */ 
 virtual    HRESULT GetBodyToHeal(CATLISTV(CATISpecObject_var) & oBodyToheal) = 0;


 /**
  * Gets the list of elements to fix.
  *   @param CATLISTV oFixElements
  *      List of Fixed Elements
  */ 
 virtual    HRESULT GetFixElements(CATLISTV(CATISpecObject_var) & oFixElements) = 0;


 /**
  * Gets the list of edges to keep sharpness.
  *   @param CATLISTV oSharpEdges
  *      List of Sharp Edges
  */ 
 virtual    HRESULT GetSharpEdges(CATLISTV(CATISpecObject_var) & oSharpEdges) = 0;


 /**
  * Adds a body to heal.
  *   @param iBodyToHeal
  *      new body
  */
 virtual    HRESULT AddBodyToHeal(const CATISpecObject_var iBodyToHeal) = 0;


 /**
  * Adds an element to fix.
  *   @param iFixElement
  *      new Element
  */
 virtual    HRESULT AddFixElement(const CATISpecObject_var iFixElement) = 0;


 /**
  * Adds a sharp edge.
  *   @param iSharpEdge
  *      new Element
  */
 virtual    HRESULT AddSharpEdge(const CATISpecObject_var iSharpEdge) = 0;

 
 /**
  * Removes in the list the element which has the given position.
  *  @param iPos
  *      Position in the list of the element that will be erased
  */
 virtual HRESULT RemoveToHealElementAtPosition(int iPos) = 0;


 /**
  * Removes in the list the element which has the given position.
  *  @param iPos
  *      Position in the list of the element that will be erased
  */
 virtual HRESULT RemoveFixElementAtPosition(int iPos) = 0;


 /**
  * Removes in the list the element which has the given position.
  *  @param iPos
  *      Position in the list of the element that will be erased
  */
 virtual HRESULT RemoveSharpEdgeAtPosition(int iPos) = 0;


 /**
   * Gets the merging distance.
   *   @param oMergeDist
   *      Merging distance fixed by the user
   */   
 virtual    HRESULT  GetMergeDist(CATICkeParm_var & oMergeDist) = 0;

 /**
   * Sets the merging distance.
   *   @param iMergeDist
   *      Merging distance fixed by the user
   *      <br> Range of value :  >10E-3 mm(Internal distance tolerance of the system) 
   */ 
 virtual    HRESULT SetMergeDist(const CATICkeParm_var iMergeDist) = 0;


 /**
   * Gets the tangency angle.
   *   @param oTangencyAngle
   *      Tangency angle fixed by the user
   *      <br> Range of value 0.5(Internal angular tolerance of the system) deg to 10deg    
   */   
 virtual    HRESULT  GetTangencyAngle(CATICkeParm_var & oTangencyAngle) = 0;

 /**
   * Sets the tangency angle.
   *   @param iTangencyAngle
   *      Tangency angle fixed by the user
   */ 
 virtual    HRESULT SetTangencyAngle(const CATICkeParm_var iTangencyAngle) = 0;


 /**
   * Gets the curvature deviation.
   * <br> Note: Useless method reserved for future use 
   *   @param oCurvatureDev
   *      Curvature deviation fixed by the user
   */   
 virtual    HRESULT  GetCurvatureDev(CATICkeParm_var & oCurvatureDev) = 0;

 /**
   * Sets the curvature deviation.
   * <br> Note: Useless method reserved for future use 
   *   @param iCurvatureDev
   *      Curvature deviation fixed by the user
   */ 
 virtual    HRESULT SetCurvatureDev(const CATICkeParm_var iCurvatureDev) = 0;

 
 /**
   * Gets the healing constraints mode on canonic and planar elements.
   * <ul>
   * <li> CATGSMHealFrozen          : Planes and cannonics are frozen  (Dedault) 
   * <li> CATGSMHealFree            : Planes and cannonics are subject to be modified by healing
   * <li> CATGSMHealPlanFree        : Plans are subject to be modified by healing
   * <li> CATGSMHealCanonicFree     : Canonics are subject to be modified by healing
   * </ul> 
   *   @param oHealingMode
   *      Constraints on the geometry 
   */
 virtual HRESULT GetCanonicFreeMode(enum CATGSMHealingMode & oHealingMode) = 0;

 /**
   * Sets the healing constraints mode on canonic and planar elements.
   * <ul>
   * <li> CATGSMHealFrozen          : Planes and cannonics are frozen  (Dedault) 
   * <li> CATGSMHealFree            : Planes and cannonics are subject to be modified by healing
   * <li> CATGSMHealPlanFree        : Plans are subject to be modified by healing
   * <li> CATGSMHealCanonicFree     : Canonics are subject to be modified by healing
   * </ul> 
   *   @param iHealingMode
   *      Constraints on the geometry 
   */
 virtual HRESULT SetCanonicFreeMode(const enum CATGSMHealingMode iHealingMode) = 0;


 /**
   * Gets the continuity mode.
   *   @param oContinuity
   *      continuity between the elements of the healing
   */
 virtual HRESULT GetContinuity(enum CATGSMContinuity & oContinuity) = 0;

 /**
   * Sets the continuity mode.
   * <ul>
   * <li> CATGSMContinuity_Point        : continuity mode - default mode  
   * <li> CATGSMContinuity_Tangency     : tangency mode  
   * <li> CATGSMContinuity_Curvature    : curvature mode ,  unused reserved for the future 
   * </ul> 
   *   @param iContinuity
   *      continuity between the elements of the healing
   */
 virtual HRESULT SetContinuity(const enum CATGSMContinuity iContinuity) = 0;



 /**
   * Gets the computation mode.
   * <br> Note: Useless method reserved for future use 
   *   @param oComputeMode
   *      computation mode to keep existing continuity when the healing
   */
 virtual HRESULT GetComputeMode(enum CATGSMHealingMode & oComputeMode) = 0;

 /**
   * Sets the computation mode.
   * <br> Note: Useless method reserved for future use 
   *   @param iComputeMode
   *      computation mode to keep existing continuity when the healing
   *  
 */
 virtual HRESULT SetComputeMode(const enum CATGSMHealingMode iComputeMode) = 0;

 
 /**
   * Gets the point continuity objective (Distance objective).
   *   @param oG0Objective
   *      Point continuity objective fixed by the user 
   */   
 virtual    HRESULT  GetG0Objective(CATICkeParm_var & oG0Objective) = 0;

 /**
   * Sets the point continuity objective(Distance objective).
   *   @param iG0Objective
   *      Point continuity objective fixed by the user
   *      <br> Range of value 10E-3 mm(Internal distance tolerance of the system)  to 10E-1 mm     
   */ 
 virtual    HRESULT SetG0Objective(const CATICkeParm_var iG0Objective) = 0;


 /**
   * Gets the tangency continuity objective (Tangency objective).
   *   @param oG1Objective
   *      Tangency continuity objective fixed by the user
   */   
 virtual    HRESULT  GetG1Objective(CATICkeParm_var & oG1Objective) = 0;

 /**
   * Sets the tangency continuity objective(Tangency objective).
   *   @param iG1Objective
   *      Tangency continuity objective fixed by the user
   *      <br> Range of value 0.5(Internal angular tolerance of the system) deg to 2 deg    
   */ 
 virtual    HRESULT SetG1Objective(const CATICkeParm_var iG1Objective) = 0;

 /**
   * Gets the limit angle for Sharpness (Sharpness angle).
   *   @param oSharpnessAngle
   *      Limit angle for Sharpness fixed by the user
   */   
 virtual HRESULT GetSharpnessAngle(CATICkeParm_var & oSharpnessAngle) = 0;

 /**
   * Sets the limit angle for Sharpness(Sharpness angle).
   *   @param iSharpnessAngle
   *      Limit angle for Sharpness fixed by the user
   *  <br> Range of value 0.5 deg(Internal angular tolerance of the system)  to 10 deg 
   */ 
 virtual HRESULT SetSharpnessAngle(const CATICkeParm_var iSharpnessAngle) = 0;

 /**
  * Replaces an elements to heal.
  *   @param iIndex 
  *        The position of the element to replace.
  *   @param ihSpecObject 
  *        The new element.
  */ 
 virtual HRESULT ReplaceToHealElement(int iIndex, const CATISpecObject_var& ihSpecObject) =0;

 /**
   * Sets the Unfreeze Attribute
   *  @param  bUnfreeze
   *  unfreeze elements 
 */ 
 virtual HRESULT SetUnfreezeAttribute(int bUnfreeze) = 0;

 /**
   * Gets the Unfreeze Attribute
   *  @param  bUnfreeze
   *  unfreeze elements 
 */ 
 virtual HRESULT GetUnfreezeAttribute(int &bUnfreeze) = 0;

};
CATDeclareHandler (CATIGSMHealing, CATBaseUnknown);
#endif // CATIGSMHealing_H
