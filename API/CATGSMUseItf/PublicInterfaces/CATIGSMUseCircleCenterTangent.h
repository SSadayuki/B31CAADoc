#ifndef CATIGSMUseCircleCenterTangent_H
#define CATIGSMUseCircleCenterTangent_H

// COPYRIGHT DASSAULT SYSTEMES 2002 

/**
* @CAA2Level L1
* @CAA2Usage U3
*/


#include "CATGSMUseItfExportedBy.h"
#include <CATICkeParm.h>
#include "CATGSMOrientation.h"

class CATIMmiMechanicalFeature_var;
class CATMathVector;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID IID_CATIGSMUseCircleCenterTangent;
#else
extern "C" const IID IID_CATIGSMUseCircleCenterTangent ;
#endif

//------------------------------------------------------------------

/**
* Interface  to the circle center tngent feature.
* <b>Role</b>: Allows you to access data of the circle center tangent feature.
* This circle is defined by a point/curve center and tangent to a curve.
* Several solution are provided and user has to choose the convinient one 
* It is created by using center element, a tangent curve and a support.  
* @see CATIGSMUseFactory#CreateTangentCircle
 */
class ExportedByCATGSMUseItf CATIGSMUseCircleCenterTangent: public CATBaseUnknown
{
  CATDeclareInterface;

public: 

 /**
  * Gets the Center Element on which the center of circle lies or its a center itself.
  *   @param oCenterElem
  *      Center Elem : a curve or a point
  */
 virtual HRESULT GetCenterElem(CATIMmiMechanicalFeature_var& oCenterElem) = 0;

 /**
  * Sets the Center Elemnet on which the center of circle lies or its a center itself.
  *   @param iCenterElem
  *      Center Elem : a curve or a point
  */
 virtual HRESULT SetCenterElem(const CATIMmiMechanicalFeature_var iCenterElem) = 0;

 /**
  * Gets the Tangent curve to which the circle will be tangent.
  *   @param oTangentCurve
  *      Tangent Curve
  */
 virtual HRESULT GetTangentCurve(CATIMmiMechanicalFeature_var& oTangentCurve) = 0;

 /**
  * Sets the Tangent Curve to which the circle will be tangent.
  *   @param iTangentCurve
  *      Tangent Curve
  */
 virtual HRESULT SetTangentCurve(const CATIMmiMechanicalFeature_var iTangentCurve) = 0;

 /**
  * Gets the support surface.
  *   @param oSupport 
  *      the support surface
  */
 virtual HRESULT GetSupport(CATIMmiMechanicalFeature_var& oSupport) = 0;

 /**
  * Sets the support surface.
  *   @param iSupport 
  *      the support surface
  */
 virtual HRESULT SetSupport(const CATIMmiMechanicalFeature_var iSupport) = 0;

/**
 * Gets the radius of the circle. 
 * <br>Note: Succeeds only if DiameterMode is set to FALSE
     *   @param oRadius
 *      radius
 */
 virtual HRESULT GetRadius(CATICkeParm_var & oRadius) = 0;

 /**
 * Sets DiameterMode to FALSE and then sets the radius.
        *   @param iRadius
 *      radius
 */
 virtual HRESULT SetRadius(const CATICkeParm_var iRadius) = 0;

 /**
 * Gets the diameter of the circle.
 * <br>Note:Succeeds only if DiameterMode is set to TRUE
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
 * <br>DiameterMode = TRUE implies diameter.
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
  * Get the Index of the solution.
  *<br>
  * Several resulting solutions produced by the operator can be same 
  * oriented regarding to the input wire bodies. 
  * In such a case, they are sorted in order to distinguish them.<br>
  * The Sequence FirstOrientation - SecondOrientation - IndexSol 
  * allows you to identifie a unique one-domain solution.<br>
  *   @param oIndexSol
  *     int oIndexSol
  */ 
 virtual    HRESULT GetDiscriminationIndex (int & oIndexSol) = 0;

 /**
  * Set the Index of the solution.
  * <br>
  * Several resulting solutions produced by the operator can be same 
  * oriented regarding to the input wire bodies. 
  * In such a case, they are sorted in order to distinguish them.<br>
  * The Sequence FirstOrientation - SecondOrientation - IndexSol
  * allows you to identifie a unique one-domain solution.<br>
  *   @param iIndexSol
  *     int iIndexSol
  */ 
 virtual    HRESULT SetDiscriminationIndex (int iIndexSol) = 0;

 /**
 * Gets the first curve orientation for circle computation.
        *   @param oFirstOrient
 *      first orientation 
 */
 virtual HRESULT GetFirstOrientation(CATGSMOrientation & oFirstOrient) = 0;

 /**
 * Sets the first curve orientation for circle computation.
        *   @param iFirstOrient
 *      first orientation 
 */
 virtual HRESULT SetFirstOrientation(const CATGSMOrientation iFirstOrient) = 0;

 /**
 * Inverts the first curve orientation for circle computation.
 */
 virtual HRESULT InvertFirstOrientation() = 0;
  
 /**
 * Gets the second curve orientation for circle computation.
        *   @param oSecondOrient
 *      second orientation 
 */
 virtual HRESULT GetSecondOrientation(CATGSMOrientation & oSecondOrient) = 0;
  
 /**
 * Sets the second curve orientation for circle computation.
        *   @param iSecondOrient
 *      second orientation 
 */
 virtual HRESULT SetSecondOrientation(const CATGSMOrientation iSecondOrient) = 0;

 /**
 * Inverts the second curve orientation for circle computation.
 */
 virtual HRESULT InvertSecondOrientation() = 0;

  /**
    * Gets the number of the beginning curve of the circle.
	* <br>This parameter is used to stabilize the resulting circle.
	*/
 virtual    HRESULT GetBeginOfCircle (int & oNumWire) = 0;

  /**
    * Sets the number of the beginning curve of the circle.
	* <br>This parameter is used to stabilize the resulting circle.
	*/
 virtual    HRESULT SetBeginOfCircle (int iNumWire) = 0;

  /**
  * Gets the first tangent curve orientation for circle computation.
  *   @param oFirstOrient
  *      first orientation
  */
 virtual HRESULT GetFirstTangentOrientation(CATGSMOrientation & oFirstOrient) = 0;

 /**
  * Sets the first tangent curve orientation for circle computation.
  *   @param iFirstOrient
  *      first orientation
  */
 virtual HRESULT SetFirstTangentOrientation(const CATGSMOrientation iFirstOrient) = 0;

 /**
  * Gets the second tangent curve orientation for circle computation.
  *   @param oSecontOrient
  *      second orientation
  */
 virtual HRESULT GetSecondTangentOrientation(CATGSMOrientation & oSecondOrient) = 0;

 /**
  * Sets the second tangent curve orientation for circle computation.
  *   @param iSecondOrient
  *      second  orientation
  */
 virtual HRESULT SetSecondTangentOrientation(const CATGSMOrientation iSecondOrient) = 0;

 /**
  * Get the Normal of the plane created when the Support of the curve is not specified.
  *   @param oNormal
  *    CATMathVector
  */
 virtual    HRESULT  GetPlaneNormal (CATMathVector & oNormal) = 0;
   
 /**
  * Set the Normal of the plane created when the Support of the curve is not specified.
  *   @param iNormal
  *    CATMathVector
  */
 virtual    HRESULT  SetPlaneNormal (const CATMathVector & iNormal) = 0;   
};
CATDeclareHandler (CATIGSMUseCircleCenterTangent, CATBaseUnknown);
//------------------------------------------------------------------

#endif
