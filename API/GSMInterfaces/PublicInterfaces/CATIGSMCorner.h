
/* -*-c++-*- */
#ifndef CATIGSMCorner_H
#define CATIGSMCorner_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGitInterfacesExportedBy.h"
#include "CATISpecObject.h"
#include "CATICkeParm.h"
#include "CATGSMOrientation.h"
#include "CATIGSMDirection.h"
#include "CATGSMCornerDef.h"

class CATMathVector;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID  IID_CATIGSMCorner;
#else
extern "C" const IID   IID_CATIGSMCorner;
#endif

/**
 * Corner feature. 
 * <b>Role</b>: Allows to access data of the Corner feature created by using two elements,
 * their orientation (same or inverse than the underlying curve), 
 * a support (only for Corner On Support), 
 * and a radius
 * @see CATIGSMFactory#CreateCorner 
 * @see CATIGSMFactory#Create3DCorner 
 */
class ExportedByCATGitInterfaces CATIGSMCorner : public CATBaseUnknown
{
   CATDeclareInterface;
public:
  /**
    * Gets the first reference element  (a curve or a point).
    *   @param oElem
    *      first reference element 
    * @see CATISpecObject
    */ 
 virtual    HRESULT GetFirstElem(CATISpecObject_var & oElem)= 0;

  /**
    * Sets the first reference element  (a curve or a point).
    *   @param iElem
    *      first reference element 
    * @see CATISpecObject
    */ 
 virtual    HRESULT  SetFirstElem(const CATISpecObject_var iElem) = 0;

  /**
    * Gets the second reference element (a curve).
    *   @param oElem
    *      second reference element 
    * @see CATISpecObject
    */
 virtual    HRESULT GetSecondElem(CATISpecObject_var & oElem)= 0;

  /**
    * Sets the second reference element (a curve).
    *   @param iElem
    *      second reference element 
    * @see CATISpecObject
    */
 virtual    HRESULT  SetSecondElem(const CATISpecObject_var iElem) = 0;

  /**
    * Gets the support of the corner (a plane or a surface).
    *   @param oElem
    *      support of the corner
    * @see CATISpecObject
    */
 virtual    HRESULT GetSupport(CATISpecObject_var & oElem)= 0;

  /**
    * Sets the support of the corner (a plane or a surface).
    *   @param iElem
    *      support of the corner
    * @see CATISpecObject
    */
 virtual    HRESULT  SetSupport(const CATISpecObject_var iElem) = 0;

  /**
    * Gets the radius of the corner.
    *   @param oRadius
    *      Radius
    */
 virtual    HRESULT  GetRadius(double & oRadius)= 0;

  /**
    * Gets the radius of the corner.
    *   @param oRadius
    *      Radius
    */
 virtual    HRESULT GetRadius(CATICkeParm_var & oRadius) = 0;
 
  /**
    * Sets the radius of the corner.
    *   @param iRadius
    *      Radius
    */ 
 virtual    HRESULT  SetRadius(double iRadius) = 0;

  /**
    * Sets the radius of the corner.
    *   @param Radius
    *      Radius
    * @see CATICkeParm
    */ 
 virtual    HRESULT  SetRadius(const CATICkeParm_var iRadius) = 0;
 
  /**
    * Gets the first reference element orientation used to compute the corner.
    * Orientation specifies corner center position
    *
    * Orientation is same or inverse than the result of the cross product:
    * Normal(support) ^ Tangent(FirstReferenceCurve)
    *
    *   @param oOrientation
    *      first orientation 
    * @see CATGSMOrientation
    */
 virtual    HRESULT GetFirstOrientation(CATGSMOrientation & oOrientation)= 0;

  /**
    * Sets the first reference element orientation used to compute the corner.
    * Orientation specifies corner center position
    *
    * Orientation is same or inverse than the result of the cross product:
    * Normal(support) ^ Tangent(FirstReferenceCurve)
    *
    *   @param iOrientation
    *      first orientation 
    * @see CATGSMOrientation
    */
 virtual    HRESULT  SetFirstOrientation (CATGSMOrientation iOrientation) = 0;

  /**
    * Gets the second reference element orientation used to compute the corner.
    * Orientation specifies corner center position
    *
    * Orientation is same or inverse than the result of the cross product:
    * Normal(support) ^ Tangent(SecondReferenceCurve)
    *
    *   @param oOrientation
    *      second orientation 
    * @see CATGSMOrientation
    */
 virtual    HRESULT GetSecondOrientation(CATGSMOrientation & oOrientation)= 0;


  /**
    * Sets the second reference element orientation used to compute the corner.
    * <br> 
    * Orientation specifies corner center position
    * Orientation is same or inverse than the result of the cross product:
    * Normal(support) ^ Tangent(SecondReferenceCurve)
    *
    *   @param iOrientation
    *      second orientation 
    * @see CATGSMOrientation
    */
 virtual    HRESULT  SetSecondOrientation(CATGSMOrientation iOrientation) = 0;
 
  /**
    * Queries whether references curves are trimmed or not.
    *   @param Trim
    *      Trim Option on (TRUE) or off (FALSE)
    */
 virtual    HRESULT GetTrim(CATBoolean & oTrim)= 0;

  /**
    * Sets or unsets the trim option of the references curves.
    *   @param iTrim
    *      Trim Option on (TRUE) or off (FALSE)
    */
 virtual    HRESULT  SetTrim(CATBoolean iTrim) = 0;

  /**
    * Queries whether references curves are trimmed or not.
    *   @param oTrimMode
    * NB : For compatibility reasons, trimming options GSMCornerTrimElement1 & 2 
    * are active only if discrimination index is not null.
    * @see CATGSMCornerTrimMode
    */
 virtual    HRESULT GetTrimMode(CATGSMCornerTrimMode & oTrimMode)= 0;

  /**
    * Sets the trim mode of the references curves.
    *   @param iTrimMode
    * NB : For compatibility reasons, trimming options GSMCornerTrimElement1 & 2 
    * are active only if discrimination index is not null.
    * @see CATGSMCornerTrimMode
    */
 virtual    HRESULT  SetTrimMode(CATGSMCornerTrimMode iTrimMode) = 0;

  /**
  * Gets the Normal of the plane created when the Support of the curve is not specified
  *   @param oNormal
  *    CATMathVector
  */
 virtual    HRESULT  GetPlaneNormal (CATMathVector & oNormal) = 0;

 /**
  * Sets the Normal of the plane created when the Support of the curve is not specified
  *   @param iNormal
  *    CATMathVector
  */
 virtual    HRESULT  SetPlaneNormal (const CATMathVector & iNormal) = 0;

 /**
  * Gets the Direction of the 3D corner .
  * -- direction (only for 3D Corner) --- 
  * The 3D corner is seen as an arc of a circle along this Direction
  *   @param oDir
  * @see CATIGSMDirection
  * @see CATIGSMFactory#Create3DCorner
  */
 virtual    HRESULT  GetDirection (CATIGSMDirection_var & oDir) = 0;

 /**
  * Sets the Direction of the 3D corner .
  * -- direction (only for 3D Corner) --- 
  * The 3D corner is seen as an arc of a circle along this Direction
  *   @param iDir
  * @see CATIGSMDirection
  * @see CATIGSMFactory#Create3DCorner
  */
 virtual    HRESULT  SetDirection (const CATIGSMDirection_var & iDir) = 0;

 /**
  * Gets the Corner type . 
  *   @param oCornerType
  *     CATGSMCornerOnSupport = 0 : Corner On Support
  *     CATGSM3DCorner        = 1 : 3D Corner          ( == DO NOT USED == ) 
  * @see CATGSMCornerType
  */  
 virtual    HRESULT GetCornerType (enum CATGSMCornerType & oCornerType) = 0;
 
 /**
  * Sets the Corner type . 
  *   @param iCornerType
  *     CATGSMCornerOnSupport = 0 : Corner On Support     (required)    
  *     CATGSM3DCorner        = 1 : 3D Corner             ( == DO NOT USED == ) 
  * @see CATGSMCornerType
  */  
 virtual    HRESULT SetCornerType (const enum CATGSMCornerType iCornerType) = 0;

 /**
  * Gets the Index of the solution.
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
  * Sets the Index of the solution.
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
    * Inverts the first reference element orientation used to compute the corner.
    */
 virtual    HRESULT InvertFirstOrientation() = 0;

  /**
    * Inverts the second reference element orientation used to compute the corner.
    */
 virtual    HRESULT InvertSecondOrientation() = 0;

 /**
  * Gets the number of the beginning curve of the corner.
  * <br>This parameter is used to stabilize the resulting corner
  */
 virtual    HRESULT GetBeginOfCorner (int & NumWire) = 0;

 /**
  * Sets the number of the beginning curve of the corner.
  * <br>This parameter is used to stabilize the resulting corner
  */
 virtual    HRESULT SetBeginOfCorner (int NumWire) = 0;

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
  * Sets the on vertex creation mode.
  *   @param oOnVertex
  *      Mode creation mode on vertex (TRUE or FALSE)  
  */
 virtual    HRESULT  GetOnVertex(CATBoolean & oOnVertex)= 0;

  /**
   * Gets the creation mode : on vertex or not.
   *   @param iOnVertex
   *       creation mode on vertex (TRUE or FALSE)
   */
 virtual    HRESULT  SetOnVertex(CATBoolean iOnVertex) = 0;

  /**
  * Gets the number of remaining sharp vertices in case of corner on vertices of a curve.
  *   @param oNbSharpVertices
  *      The number of remaining sharp vertices  
  */
 virtual HRESULT GetNbRemainingSharpVertices(int & oNbSharpVertices) = 0;

  /**
  * Sets the number of remaining sharp vertices in case of corner on vertices of a curve.
  *   @param iNbSharpVertices
  *      The number of remaining sharp vertices  
  */
 virtual HRESULT SetNbRemainingSharpVertices(int iNbSharpVertices) = 0;

};
CATDeclareHandler (CATIGSMCorner, CATBaseUnknown);
#endif // CATIGSMCorner_H
