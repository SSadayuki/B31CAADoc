/* -*-c++-*- */
#ifndef CATIGSMSplit_H
#define CATIGSMSplit_H
// 
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGitInterfacesExportedBy.h"
#include "CATISpecObject.h"
#include "CATGSMOrientation.h"
#include "CATIGSMUseSplit.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID  IID_CATIGSMSplit;
#else
extern "C" const IID IID_CATIGSMSplit;
#endif

	
/**
 * Interface to split feature.
 * <b>Role</b>: Allows you to access data of the Split feature created by using an element to cut 
 * (a curve or a surface),  one or several cutting elements (points, curves or surfaces)
 * and an orientation for each cutting element. 
 * <p>  LICENSING INFORMATION: Creation of volume result requires GSO License
 * <br> if GSO License is not granted , settting of Volume result has not effect 
 * <br> 
 * @see CATIGSMFactory#CreateSplit
 */
class ExportedByCATGitInterfaces CATIGSMSplit : public CATBaseUnknown
{
   CATDeclareInterface;
public:
 
   /**
    * Gets the feature to cut (a curve or a surface).
    *   @param oElem
    *      feature to cut
    */
 virtual    HRESULT GetElemToCut(CATISpecObject_var & oElem) = 0;
 
   /**
    * Sets the feature to cut (a curve or a surface).
    *   @param iElem
    *      new feature to cut
    */
 virtual    HRESULT SetElemToCut(const CATISpecObject_var iElem) = 0;
 
   /**
	 * Gets the cutting feature (a point, a curve or a surface).  
     *   @param oElem
     *      cutting feature 
     */
 virtual    HRESULT GetCuttingElem(CATISpecObject_var & oElem) = 0;

   /**
     * Sets the cutting feature (a point, a curve or a surface).  
     *   @param iElem
     *      new cutting feature
     */
 virtual    HRESULT SetCuttingElem(const CATISpecObject_var iElem) = 0;

   /**
     * Gets the number of cutting features.
     *   @param oNbCuttingElem
     *      Number of  cutting features  
     */
 virtual    HRESULT GetNbCuttingElem (int &oNbCuttingElem) = 0;

   /**
     * Adds a cutting feature.
     *   @param iElem
     *      cutting feature 
     *   @param iOrientation 
     *      Orientation 
     */
 virtual    HRESULT AddCuttingElem(CATISpecObject_var & iElem, 
          CATGSMOrientation  iOrientation = CATGSMSameOrientation) = 0;

   /**
     * Gets the cutting feature at a given index (a point, a curve or a surface).  
     *   @param oElem
     *      cutting feature 
     *   @param iRank
     *      Index of one of the cutting features  
     */
 virtual    HRESULT GetCuttingElem(CATISpecObject_var & oElem, int iRank) = 0;

   /**
     * Modifies the cutting feature at a given index (a point, a curve or a surface).  
	 * Use AddCuttingElem method to specify a new cutting element
     *   @param oElem
     *      cutting feature 
     *   @param iRank
     *      Index of one of the cutting features  
     */
 virtual    HRESULT SetCuttingElem(const CATISpecObject_var iElem, int iRank) = 0;
   
   /**
     * Removes a cutting feature.
     *   @param iElem
     *      cutting feature 
     */
 virtual    HRESULT RemoveCuttingElem (CATISpecObject_var &iElem) = 0; 

   /**
     * Removes a cutting feature at a given index.
     *   @param iRank 
     *      index of the cutting feature 
     */
 virtual    HRESULT RemoveCuttingElem (int iRank) = 0; 

   /**
     * Gets the orientation used to compute the split. 
     * <br>
     * Orientation specifies kept parts of cut feature.<BR>
     *<BR>
     * When splitting a surface by a surface :<BR> 
     * - If CATGSMSameOrientation: Kept parts are specified by the "natural" normal to the cutting feature<BR> 
     * - If CATGSMInvertOrientation: Kept parts are specified by the inverse of the "natural" normal to the cutting feature<BR> 
     *<BR> 
     * When splitting a surface by a curve :<BR> 
     * - If CATGSMSameOrientation:
            Kept parts are specified by the result of the cross product : normal(surface)^tangent(curve)<BR> 
     * - If CATGSMInvertOrientation: 
     *       Kept parts are specified by the inverse of the result of the cross product : normal(surface)^tangent(curve)<BR> 
     * <BR> 
     * When splitting a curve by a point or a curve (without support specified): <BR> 
     * - If CATGSMSameOrientation: 
     *       Kept parts are from beginning of the curve to the first intersection, <BR> 
     * and, if there is one, from the second to the third intersection and so on until the end of the curve...<BR> 
     * - If CATGSMInvertOrientation: 
     *       Kept parts are from the first intersection to the second (if there is one), <BR> 
     * and, if there is one, from the third to the fourth and so on until the end of the curve...<BR> 
     *<BR> 
     * When splitting a curve on support: <BR> 
     * - If CATGSMSameOrientation: 
	 *		 Kept parts are specified by the result of the cross product : normal(support surface)^tangent(cutting curve)<BR> 
     * - If CATGSMInvertOrientation: 
	 *       Kept parts are specified by the inverse of the result of the cross product : normal(support surface)^tangent(cutting curve)<BR> 
     *<BR> 
     * When splitting a curve by a surface: <BR> 
     * - If CATGSMSameOrientation: 
	 *		 Kept parts are specified by the inverse of the normal to the surface<BR> 
     * - If CATGSMInvertOrientation: 
	 *		 Kept parts are specified by the normal to the surface<BR> 
	 *<BR> 
     *   @param oOrientation
     *      Orientation used to compute the split (CATGSMSameOrientation or CATGSMInverseOrientation)
     */
  virtual    HRESULT GetOrientation(CATGSMOrientation & oOrientation) = 0;

   /**
     * Gets Orientation used to compute the split.
     *   @param oOrientation  
     *      Orientation
     *   @param iRank 
     *      index of the cutting feature 
     */
  virtual    HRESULT GetOrientation(CATGSMOrientation & oOrientation, int iRank) = 0;
 
   /**
     * Sets the orientation used to compute the split. 
     * <br>
     * Orientation specifies kept parts of cut feature.<BR>
     *<BR>
     * When splitting a surface by a surface :<BR> 
     * - If CATGSMSameOrientation: 
     *      Kept parts are specified by the "natural" normal to the cutting feature<BR> 
     * - If CATGSMInvertOrientation:
     *      Kept parts are specified by the inverse of the "natural" normal to the cutting feature<BR> 
     *<BR> 
     * When splitting a surface by a curve :<BR> 
     * - If CATGSMSameOrientation:
     *      Kept parts are specified by the result of the cross product : normal(surface)^tangent(curve)<BR> 
     * - If CATGSMInvertOrientation: 
     *      Kept parts are specified by the inverse of the result of the cross product : normal(surface)^tangent(curve)<BR> 
     * <BR> 
     * When splitting a curve (without support specified): <BR> 
     * - If CATGSMSameOrientation: 
     *      Kept parts are from beginning of the curve to the first intersection, <BR> 
     *      and, if there is one, from the second to the third intersection and so on until the end of the curve...<BR> 
     * - If CATGSMInvertOrientation:
     *   Kept parts are from the first intersection to the second (if there is one), <BR> 
     *   and, if there is one, from the third to the fourth and so on until the end of the curve...<BR> 
     *<BR> 
     * When splitting a curve on support: <BR> 
     * - If CATGSMSameOrientation: 
	 *		 Kept parts are specified by the result of the cross product : normal(support surface)^tangent(cutting curve)<BR> 
     * - If CATGSMInvertOrientation: 
	 *       Kept parts are specified by the inverse of the result of the cross product : normal(support surface)^tangent(cutting curve)<BR> 
	 *<BR> 
     *   @param iOrientation
     *      Orientation used to compute the split (CATGSMSameOrientation or CATGSMInverseOrientation)
     */
 virtual    HRESULT SetOrientation(CATGSMOrientation iOrientation) = 0;

   /**
     * Sets the orientation used to compute the split.
     *   @param iOrientation  
     *      Orientation
     *   @param iRank 
     *      index of the cutting feature 
     */
 virtual    HRESULT SetOrientation(CATGSMOrientation iOrientation, int iRank) = 0;

   /**
     * Inverts the orientation used to compute the split.
     *   @param iRank 
     *      index of the cutting feature 
     */
 virtual    HRESULT InvertOrientation(int iRank = 1) = 0;
	
   /**
	 * Gets the support of the curve to cut (optional). 
     *   @param oElem
     *      Support surface
     */
 virtual    HRESULT GetSupportElem(CATISpecObject_var & oElem) = 0;
	
   /**
     * Sets the support of the curve to cut (optional). 
     *   @param iElem
     *      Support surface
     */
 virtual    HRESULT SetSupportElem(const CATISpecObject_var iElem) = 0;

 
  /**
    * Sets or unsets the computation of intersection.
    *   @param iMode
    *      Computation option on (TRUE) or off (FALSE)
    */
 virtual    HRESULT  SetIntersectionComputation(CATBoolean iMode) = 0;

 /**
    * Queries whether intersection is computed or not.
    *   @param oMode
    *      Computation option on (TRUE) or off (FALSE)
    */
 virtual    HRESULT GetIntersectionComputation(CATBoolean & oMode) = 0;

 /**
     * Gets the intersection at a given index.
     *   @param oElem
     *      Intersection
     *   @param iRank
     *      Index of one of the intersection features  
     */
 virtual    HRESULT GetIntersection(CATISpecObject_var & oElem, const int iRank) = 0;

 
 /**
    * Sets or unsets the computation of both sides.
    *   @param iMode
    *      Computation option on (TRUE) or off (FALSE)
    */
 virtual    HRESULT  SetBothSidesMode(CATBoolean iMode) = 0;

 /**
    * Queries whether both sides are computed or not.
    *   @param oMode
    *      Computation option on (TRUE) or off (FALSE)
    */
 virtual    HRESULT GetBothSidesMode(CATBoolean & oMode) = 0;

 /**
     * Gets the other side.
     *   @param oElem
     *      Other side
     */
 virtual    HRESULT GetOtherSide(CATISpecObject_var & oElem) = 0;


 /**
  * Adds an element to specifications. This element will be removed.
  * @param iElement
  *   Element to remove.  
  */ 
 virtual HRESULT AddElementToRemove(const CATISpecObject_var iElement) = 0;

 /**
  * Removes an element from specifications.
  * @param iRank
  *   Index of the removed element.
  */ 
 virtual HRESULT RemoveElementToRemove(const int iRank) = 0;

 /**
  * Adds an element to specifications. This element will be kept.
  * @param iElement
  *   Element to keep.  
  */ 
 virtual HRESULT AddElementToKeep(const CATISpecObject_var iElement) = 0;

 /**
  * Removes an element from specifications.
  * @param iRank
  *   Index of the kept element.
  */ 
 virtual HRESULT RemoveElementToKeep(const int iRank) = 0;

 /**
  * Gets the number of elements to remove.
  *   @param oNbElementsToRemove
  *      Number of elements to remove
  */
 virtual    HRESULT GetNbElementsToRemove(int & oNbElementsToRemove) = 0;

 /**
  * Gets the number of elements to keep.
  *   @param oNbElementsToKeep
  *      Number of elements to keep
  */
 virtual    HRESULT GetNbElementsToKeep(int & oNbElementsToKeep) = 0;

 /**
  * Gets the removed feature at a given index.
  *   @param oElem
  *      Removed feature 
  *   @param iRank
  *      Index of one of the removed features  
  */
 virtual    HRESULT GetRemovedElem(CATISpecObject_var & oElem, const int iRank) = 0;

 /**
  * Gets the kept feature at a given index.
  *   @param oElem
  *      Kept feature 
  *   @param iRank
  *      Index of one of the kept features  
  */
 virtual    HRESULT GetKeptElem(CATISpecObject_var & oElem, const int iRank) = 0;


 /**
    * @deprecated CXR26 CATIGSMSplit#SetExtrapolationType
    * <p>This method is deprecated because the model has changed to enable to extrapol in curvature.</p>
    * <p><b>Migration instructions</b>: use the signature SetExtrapolationType.</p>
    * Example: "SetAutomaticExtrapolationMode(iMode)" should be replaced with "SetExtrapolationType(iExtrapolationType)".
    */ 
 virtual    HRESULT  SetAutomaticExtrapolationMode(CATBoolean iMode) = 0;

 /**
    * @deprecated CXR26 CATIGSMSplit#GetExtrapolationType
    * <p>This method is deprecated because the model has changed to enable to extrapol in curvature.</p>
    * <p><b>Migration instructions</b>: use the signature GetExtrapolationType.</p>
    * Example: "GetAutomaticExtrapolationMode(oMode)" should be replaced with "GetExtrapolationType(oExtrapolationType)".
    */ 
 virtual    HRESULT GetAutomaticExtrapolationMode(CATBoolean & oMode) = 0;

 /**
    * Sets the extrapolation type.
    *   @param iExtrapolationType
    *      Extrapolation mode 0 (None), 1 (Tangent) or 2 (Curvature)
    */
 virtual    HRESULT  SetExtrapolationType(const CATGSMExtrapolationType & iExtrapolationType) = 0;

 /**
    * Queries whether extrapolation type.
    *   @param oExtrapolationType
    *      Extrapolation mode 0 (None), 1 (Tangent) or 2 (Curvature)
    */
 virtual    HRESULT GetExtrapolationType(CATGSMExtrapolationType & oExtrapolationType) = 0;

 /**
    * Sets the type of the geometrical result.
    *   @param iResultType
    *   FALSE : Result type is surface
    *   TRUE  : Result type is volume.(Option is effective only in case of volumes, requires GSO License).
    */
 virtual    HRESULT  SetVolumeResult(const CATBoolean iResultType) = 0;

 /**
    * Gets the type of the geometrical result.
    *   @param oResultType
    *   FALSE : Result type is surface
    *   TRUE  : Result type is volume.(Option is effective only in case of volumes)
    */
 virtual    HRESULT GetVolumeResult(CATBoolean & oResultType) = 0;

 
 /**
    * Sets or unsets the 'Ignore no intersecting elements' mode.
    *   @param iMode
    *      Mode on (TRUE) or off (FALSE)
    */
 virtual    HRESULT  SetIgnoreNoIntersectingMode(CATBoolean iMode) = 0;
 /**
    * Queries whether 'Ignore no intersecting elements' mode is activated or not.
    *   @param oMode
    *      Mode on (TRUE) or off (FALSE)
    */
 virtual    HRESULT GetIgnoreNoIntersectingMode(CATBoolean & oMode) = 0;

 /**
    * Sets or unsets the 'Keep elements in half space' mode.
    *   @param iMode
    *      Mode on (TRUE) or off (FALSE)
    */
 virtual    HRESULT  SetKeepHalfSpaceMode(CATBoolean iMode) = 0;
 /**
    * Queries whether 'Keep elements in half space' mode is activated or not.
    *   @param oMode
    *      Mode on (TRUE) or off (FALSE)
    */
 virtual    HRESULT GetKeepHalfSpaceMode(CATBoolean & oMode) = 0;
 
};
CATDeclareHandler (CATIGSMSplit, CATBaseUnknown);
#endif // CATIGSMSplit_H
