/* -*-c++-*- */
#ifndef CATIGSMLineBiTangent_H
#define CATIGSMLineBiTangent_H
// 
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGitInterfacesExportedBy.h"
#include "CATBaseUnknown.h"

#include "CATGSMLineDef.h"
#include "CATGSMOrientation.h"


class CATMathVector;
class CATICkeParm_var; 
class CATISpecObject_var; 

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID  IID_CATIGSMLineBiTangent;
#else
extern "C" const IID IID_CATIGSMLineBiTangent;
#endif


/**
 * Interface to line bitangent feature.
 * <b>Role</b>: Allows to access data of the line feature created to
 * be tangent to two elements.
 * @see CATIGSMLine
 * @see CATIGSMFactory#CreateLineBiTangent
 */
class ExportedByCATGitInterfaces CATIGSMLineBiTangent : public CATBaseUnknown
{
  CATDeclareInterface;
public: 
  
 /**
  * Get the first curve to which the line is tangent.
  */
  virtual HRESULT GetFirstTangentElement(CATISpecObject_var& Element1) = 0;
  /**
   * Set the first curve to which the line will be tangent.
   */
  virtual HRESULT SetFirstTangentElement(const CATISpecObject_var Element1) = 0;
  /**
   * Get the second element to which the line is tangent (curve or point).
   */
  virtual HRESULT GetSecondTangentElement(CATISpecObject_var& Element2) = 0;
  /**
   * Set the second element to which the line will be tangent (curve or point).
   */
  virtual HRESULT SetSecondTangentElement(const CATISpecObject_var Element2) = 0;
  /**
   * Get the support surface. The line lies on it.
   */
  virtual HRESULT GetSupport(CATISpecObject_var& Support) = 0;
  /**
   * Set the support surface. The line will lie on it.
   */
  virtual HRESULT SetSupport(const CATISpecObject_var Support) = 0;
   /**
    * Gets a sequence which identifies a solution among all possibilities
    * of curve/point or curve/curve tangent lines. 
    *   @param oNo
    *      Given the orientations, solution number in a distance ordered list.
    *   @param oOriTgt1
    *      This orientation allows to compute just the results that are tangent
    *      to a specific region of the first curve. It can take 3 values: <BR>
    *       CATGSMSameOrientation   : the result has the same orientation as the curve, <BR>
    *       CATGSMInvertOrientation : the result has the opposite orientation of the curve, <BR>
    *       CATGSMKoOrientation     : no orientation is specified. <BR>
    *   @param oOriCvt1
    *      This orientation allows to compute just the results that are tangent
    *      to a specific side of the first curve. It can take 3 values: <BR>
    *       CATGSMSameOrientation : curvature direction of curve and cross product of support normal and result direction 
	*				are in the same direction, <BR>
    *       CATGSMInvertOrientation : curvature direction of curve and cross product of support normal and result direction
	*				are in opposite directions, <BR>
    *       CATGSMKoOrientation  : no orientation is specified. <BR>
    *   @param oOriTgt2
    *      In case of curve/curve bitangent line, this orientation allows to compute just the results that are tangent
    *      to a specific region of the second curve . It can take 3 values: <BR>
    *       CATGSMSameOrientation   : the result has the same orientation as the curve, <BR>
    *       CATGSMInvertOrientation : the result has the opposite orientation of the curve, <BR>
    *       CATGSMKoOrientation     : no orientation is specified. <BR>
    *   @param oOriCvt2
    *      In case of curve/curve bitangent line this orientation allows to compute just the results that are tangent
    *      to a specific side of the second curve. It can take 3 values: <BR>
    *       CATGSMSameOrientation : curvature direction of curve and cross product of support normal and result direction 
	*				are in the same direction, <BR>
    *       CATGSMInvertOrientation : curvature direction of curve and cross product of support normal and result direction
	*				are in opposite directions, <BR>
    *       CATGSMKoOrientation  : no orientation is specified. <BR>
    */
	virtual HRESULT GetChoiceNo(int & oNo, CATGSMOrientation & oOriTgt1, CATGSMOrientation & oOriCvt1,
										   CATGSMOrientation & oOriTgt2, CATGSMOrientation & oOriCvt2) = 0;
   /**
    * Sets a sequence which identifies a solution (see above).
    *   @param iNo
    *      Given the orientations, solution number in a distance ordered list.
    *   @param iOriTgt1
    *      This orientation allows to compute just the results that are tangent
    *      to a specific region of the first curve. It can take 3 values: <BR>
    *       CATGSMSameOrientation   : the result has the same orientation as the curve, <BR>
    *       CATGSMInvertOrientation : the result has the opposite orientation of the curve, <BR>
    *       CATGSMKoOrientation     : no orientation is specified. <BR>
    *   @param iOriCvt1
    *      This orientation allows to compute just the results that are tangent
    *      to a specific side of the first curve. It can take 3 values: <BR>
    *       CATGSMSameOrientation : curvature direction of curve and cross product of support normal and result direction 
	*				are in the same direction, <BR>
    *       CATGSMInvertOrientation : curvature direction of curve and cross product of support normal and result direction
	*				are in opposite directions, <BR>
    *       CATGSMKoOrientation  : no orientation is specified. <BR>
    *   @param iOriTgt2
    *      In case of curve/curve bitangent line, this orientation allows to compute just the results that are tangent
    *      to a specific region of the second curve . It can take 3 values: <BR>
    *       CATGSMSameOrientation   : the result has the same orientation as the curve, <BR>
    *       CATGSMInvertOrientation : the result has the opposite orientation of the curve, <BR>
    *       CATGSMKoOrientation     : no orientation is specified. <BR>
    *   @param iOriCvt2
    *      In case of curve/curve bitangent line this orientation allows to compute just the results that are tangent
    *      to a specific side of the second curve. It can take 3 values: <BR>
    *       CATGSMSameOrientation : curvature direction of curve and cross product of support normal and result direction 
	*				are in the same direction, <BR>
    *       CATGSMInvertOrientation : curvature direction of curve and cross product of support normal and result direction
	*				are in opposite directions, <BR>
    *       CATGSMKoOrientation  : no orientation is specified. <BR>
    */
	virtual HRESULT SetChoiceNo(const int iNo, const CATGSMOrientation iOriTgt1, const CATGSMOrientation iOriCvt1, 
											   const CATGSMOrientation iOriTgt2=CATGSMKoOrientation, const CATGSMOrientation iOriCvt2=CATGSMKoOrientation) = 0;

 /**
  * Gets the length type : length or infinite or infinite start point or infinite end point.
  * <br>Note: Default is Length.
  * <br> Length means that the line is limited by its extremities
  * Infinite means that the line is infinite
  * InfStartPoint means that the line is infinite on the side of the start point
  * InfEndPoint means that the line is infinite on the side of the end point
  *   @param oType
  *    distance type  enum {Length, Infinite, InfStartPoint, InfEndPoint}
  */
 virtual HRESULT GetLengthType(CATGSMLineLengthType & oType) = 0;

 /**
  * Sets the length type : length or infinite or infinite start point or infinite end point.
  *   @param iType
  *    length type:   enum {Length, Infinite, InfStartPoint, InfEndPoint}
  */
 virtual HRESULT SetLengthType(CATGSMLineLengthType iType) = 0;

 
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
CATDeclareHandler (CATIGSMLineBiTangent, CATBaseUnknown);
#endif

