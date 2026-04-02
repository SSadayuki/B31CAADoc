/* -*-c++-*- */
#ifndef CATIGSMOffset_H
#define CATIGSMOffset_H
// 
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

//=============================================================================
//
// Class CATIGSMOffset:
// This interface is used to set/change the definition elements of 
//   a surface offset.
//
//
//=============================================================================
// Usage Note:  Date: 25/01 - Objet: Export IID - Author: Pey
//
//
//=============================================================================
#include "CATGitInterfacesExportedBy.h"
#include "CATISpecObject.h"
#include "CATICkeParm.h"
#include "CATGSMOffsetDef.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID  IID_CATIGSMOffset;
#else
extern "C" const IID IID_CATIGSMOffset;
#endif
/**
 * Interface to offset surface feature.
 * <b>Role</b>: Allows you to gets or/and sets the definition elements of a surface offset:
 * a surface, an orientation and an offset value.
 * <br> Note: Methodolpgy of remove of "tricky" face at offset update : 
 * Use of the suppress mode has to be handle carefully in Offset 
 * 
 * <br>- If Supppress mode is active:
 *    Each time the offset is updated, the operator will identify automatically the "tricky" faces and removes them  
 *    Example: This mode is the standard behaviour in Part Design (Offset is used in "Thick" operator)  
 *               
 * <br>- If Supppress mode is in-active:
 *    Each time the offset is update, if a face has to be removed and this face is not declared in the "tricky" faces 
 *    the update failed 
 *    Example: This mode is the standard behaviour in Gsd in Offset : 
 *      Each time some face has to be removed,  the offset failed if it is not declared as tricky face 
 *      In the Gsd interactive offset command, a pop-up window is proposed in order to validate the insertion of "tricky" identified faces in the list 
 *      The list of all tricky face are then kept in the offset data , and are reused at update
 *  
 * @see CATIGSMFactory#CreateOffset
 */
class ExportedByCATGitInterfaces CATIGSMOffset : public CATBaseUnknown
{
   CATDeclareInterface;
public: 

  /**
   * Gets the reference surface.
   *   @param oElem
   *      Offset Surface
   */ 
 virtual    HRESULT GetProfil (CATISpecObject_var & oElem) = 0;
  /**
   * Gets the offset value.
   *   @param oOffValue
   *      Offset value
   */
 virtual    HRESULT   GetOffsetValue    (double & oOffValue)   = 0;
  /**
   * Gets the offset value.
   *   @param oOffValue
   *      Offset value
   */
 virtual    HRESULT   GetCkeOffsetValue (CATICkeParm_var & oOffValue)      = 0;
  /**
   * Gets the orientation.
   *   @param oInvert
   *      : False   means that there is no invertion of the surface orientation 
   *       (orientation is the normal on the surface)
   *      : True    to invert this orientation
   */
 virtual    HRESULT    GetInvertDirection  (CATBoolean & oInvert)     = 0;

 /**
  * Sets the reference surface.
  *   @param iElem
  *      new reference surface
  */
 virtual    HRESULT SetProfil    (const CATISpecObject_var iElem) = 0;
        
 /**
  * Sets the offset value.
  *   @param iOffValue
  *      Offset value
  */
 virtual    HRESULT SetOffsetValue   (double iOffValue) = 0;

 /**
  * Sets the offset value.
  *   @param iOffValue
  *      Offset value
  */
 virtual    HRESULT SetOffsetValue     (const CATICkeParm_var iOffValue) = 0;

 /**
  * Sets the orientation.
  *   @param iInvert
  *     :  False means that there is no invertion of the curve orientation 
  *         (orientation is the product of the tangent of the curve by the normal on the support)
  *     :  True  to invert this orientation
  */
 virtual    HRESULT SetInvertDirection  (CATBoolean iInvert) = 0;


/**
 * Returns the tricky faces object on the object. 
 * @param oTrickyFaces 
 *   Offset invalid faces
 */ 
 virtual     HRESULT GetTrickyFaces  (CATLISTV(CATISpecObject_var) & oTrickyFaces) = 0;

 /**
 * Adds a tricky face object on the object. 
 * @param iTrickyFace 
 *   Offset invalid face 
 */ 
 virtual     HRESULT AddTrickyFace  (const CATISpecObject_var  iTrickyFace) = 0;

 /**
 * Remove the tricky face object on the object. 
 * @param iRank
 *   position of the face in the list of TrickyFaces
 */ 
 virtual     HRESULT RemoveTrickyFaces (int iRank) = 0;


 /**
  * Gets 'suppress mode'.
  *   @param oSuppressMode
  *      CATTrue  = erroneous elements are removed from the result automatically at update 
  *      CATFalse = error if erroneous elements, (not declared tricky faces) 
  *   @see CATBoolean
  */   
  virtual    HRESULT GetSuppressMode (CATBoolean & oSuppressMode) = 0;
 /**
  * Sets the suppress mode.
  *   @param iSuppressMode
  *      CATTrue  = erroneous elements are removed from the result automatically at update 
  *      CATFalse = error if erroneous elements, (not declared tricky faces) 
  * <br> Note: 
  * <br>- If Supppress mode is active:
  *    Each time the offset is updated, the operator will identify automatically the "tricky" faces and removes them  
  *    Example: This mode is the standard behaviour in Part Design (Offset is used in "Thick" operator)  
  *               
  * <br>- If Supppress mode is in-active:
  *    Each time the offset is update, if a face has to be removed and this face is not declared in the "tricky" faces 
  *    the update failed 
  *    Example: This mode is the standard behaviour in Gsd in Offset : 
  *      Each time some face has to be removed,  the offset failed if it is not declared as tricky face 
  *      In the Gsd interactive offset command, a pop-up window is proposed in order to validate the insertion of "tricky" identified faces in the list 
  *      The list of all tricky face are then kept in the offset data , and are reused at update
  *   @see CATBoolean
  */ 
  virtual    HRESULT SetSuppressMode (CATBoolean iSuppressMode) = 0;

  /**
    * Sets the type of Offset. 
    * <br> It modifies the Offset type either "Normal" or "Rough" or "Smooth"
    *   @param iType
    *      Offset type
    *       : CATGSMOffset_Constant (=0) -> Normal
    *       : CATGSMOffset_Rough (=1) -> Rough
    *       : CATGSMOffset_Smooth  (=2) -> Smooth
    * @see CATGSMOffsetType
    */
	  virtual    HRESULT SetOffsetType(CATGSMOffsetType iType) = 0;

  /**
    * Gets Offset type.
    * <br>
    * Normal or smooth tyoe.
    *   @param oType
    *      Offset type
    *       : CATGSMOffset_Constant (=0) -> Normal
    *       : CATGSMOffset_Rough (=1) -> Rough
    *       : CATGSMOffset_Smooth  (=2) -> Smooth
    * @see CATGSMOffsetType
    */
	  virtual    HRESULT GetOffsetType(CATGSMOffsetType & oType) = 0;

  /**
   * Gets the offset deviation value.
   *   @param oOffDeviation
   *      Offset deviation value
   */
  virtual    HRESULT GetOffsetDeviation(double & oOffDeviation) = 0;
  /**
   * Gets the offset deviation value.
   *   @param oOffDeviation
   *      Offset deviation value (Cke Parameter)
   */
  virtual    HRESULT GetCkeOffsetDeviation(CATICkeParm_var & oOffDeviation)  = 0;

  /**
  * Sets the offset deviation  value.
  *   @param iOffDeviation
  *      Offset deviation value
  */
  virtual    HRESULT SetOffsetDeviation(const double iOffDeviation) = 0;
 /**
  * Sets the offset deviation  value.
  *   @param iOffDeviation
  *      Offset deviation value (Cke Parameter)
  */
  virtual    HRESULT SetOffsetDeviation(const CATICkeParm_var iOffDeviation) = 0;

  /** 
	* Sets the regularization type
	*   @param oRegul
	*      CATGSMRegularization_Undefined if the regularization is not defined
	*	   CATGSMRegularization_Local if the regularization is local
	*	   CATGSMRegularization_Global if the regularization is global
	*/
    virtual HRESULT SetRegularizationType(const CATGSMOffsetRegularisationType &iRegul) = 0;
	

   /** 
	* Gets the regularization type
	*   @param oRegul
	*      CATGSMRegularization_Undefined if the regularization is not defined
	*	   CATGSMRegularization_Local if the regularization is local
	*	   CATGSMRegularization_Global if the regularization is global
	*/
    virtual HRESULT GetRegularizationType(CATGSMOffsetRegularisationType &oRegul) = 0;

  /**
	* Gets the suppress mode.
	*   @param oSuppressMode
	*      0 = error if erroneous elements, (not declared tricky faces)
	*      1 = erroneous elements are removed from the result automatically at update (For Part Design)
	*	   2 = erroneous elements are removed from the result automatically at update (For GSD)
   */
	virtual HRESULT GetSuppressModeValue(int & oSuppressMode) = 0;

   /**
	* Sets the suppress mode.
	*   @param iSuppressMode
	*      0 = error if erroneous elements, (not declared tricky faces)
	*      1 = erroneous elements are removed from the result automatically at update (For Part Design)
	*	   2 = erroneous elements are removed from the result automatically at update (For GSD)
   */ 
	virtual HRESULT	SetSuppressModeValue(const int & iSuppressMode) = 0;
	
};
CATDeclareHandler (CATIGSMOffset, CATBaseUnknown);
#endif // CATIGSMOffset_H

