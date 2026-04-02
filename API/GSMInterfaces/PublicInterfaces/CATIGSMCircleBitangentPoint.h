/* -*-c++-*- */
#ifndef CATIGSMCircleBitangentPoint_H
#define CATIGSMCircleBitangentPoint_H
// 
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGitInterfacesExportedBy.h"
#include <CATICkeParm.h>
#include "CATGSMOrientation.h"
#include "CATGSMCornerDef.h"

class CATMathVector;
class CATISpecObject_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID  IID_CATIGSMCircleBitangentPoint;
#else
extern "C" const IID IID_CATIGSMCircleBitangentPoint;
#endif
/**
 * Interface to circle tangent to two curve and passing through a point feature .  
 * <b>Role</b>: Allows you to access data of the circle feature created to
 * be tangent to 2 curves with a passing point on the second curve. 
 * Note: The first curve can be degenerated into a point.
 * @see CATIGSMFactory#CreateCircle
 */
class ExportedByCATGitInterfaces CATIGSMCircleBitangentPoint : public CATBaseUnknown
{
   CATDeclareInterface;
public: 

 /**
  * Gets the first element to which the circle will be tangent.
  *   @param oFirstElem
  *      first element : a curve or a point
  */
 virtual HRESULT GetFirstCurve(CATISpecObject_var& oFirstElem) = 0;
 /**
  * Sets the first curve to which the circle will be tangent.
  *   @param iFirstElem
  *      first element : a curve or a point
  */
 virtual HRESULT SetFirstCurve(const CATISpecObject_var iFirstElem) = 0;

 /**
  * Gets the second curve to which the circle will be tangent.
  *   @param oSecondCurve
  *      second curve
  */
 virtual HRESULT GetSecondCurve(CATISpecObject_var& oSecondCurve) = 0;

 /**
  * Sets the second curve to which the circle will be tangent.
  *   @param iSecondCurve
  *      second curve
  */
 virtual HRESULT SetSecondCurve(const CATISpecObject_var iSecondCurve) = 0;

 /**
  * Gets the passing point. This point must lie on second curve.
  *   @param oPoint 
  *      passing point 
  */

 virtual HRESULT GetPoint(CATISpecObject_var& oPoint) = 0;
 /**
  * Sets the passing point. This point must lie on second curve.
  *   @param iPoint 
  *      passing point 
  */
 virtual HRESULT SetPoint(const CATISpecObject_var iPoint) = 0;

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
  *   @param oSecontOrient
  *      second orientation
  */
 virtual HRESULT GetSecondOrientation(CATGSMOrientation & oSecondOrient) = 0;

 /**
  * Sets the second curve orientation for circle computation.
  *   @param iSecondOrient
  *      second  orientation
  */
 virtual HRESULT SetSecondOrientation(const CATGSMOrientation iSecondOrient) = 0;

 /**
  * Inverts the second curve orientation for circle computation.
  */
 virtual HRESULT InvertSecondOrientation() = 0;

  /**
  * Get the Index of the solution.<br>
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
    * Gets the number of the beginning curve of the circle.
	* <br>Note:This parameter is used to stabilize the resulting circle
	*/
 virtual    HRESULT GetBeginOfCircle (int & NumWire) = 0;

  /**
    * Sets the number of the beginning curve of the circle.
	* <br>Note:This parameter is used to stabilize the resulting circle
	*/
 virtual    HRESULT SetBeginOfCircle (int NumWire) = 0;

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

 /**
  * Queries whether reference curves are trimmed or not.
  *   @param oTrimMode
  * @see CATGSMCornerTrimMode
  */
 virtual    HRESULT GetTrimMode(CATGSMCornerTrimMode & oTrimMode)= 0;

 /**
  * Sets the trim mode of the reference curves.
  *   @param iTrimMode
  * @see CATGSMCornerTrimMode
  */
 virtual    HRESULT  SetTrimMode(CATGSMCornerTrimMode iTrimMode) = 0;

};
CATDeclareHandler (CATIGSMCircleBitangentPoint, CATBaseUnknown);
#endif
