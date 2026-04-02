/* -*-c++-*- */
#ifndef CATIGSMTrim_H
#define CATIGSMTrim_H
// 
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGitInterfacesExportedBy.h"
#include "CATISpecObject.h"
#include "CATGSMOrientation.h"
#include "CATListOfInt.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID  IID_CATIGSMTrim;
#else
extern "C" const IID IID_CATIGSMTrim;
#endif

/**
 * Interface to trim feature. 
 * <b>Role</b>: Allows you to access data of the Trim feature created by using 
 * two elements (two curves or two surfaces) and two orientations
 * @see CATIGSMFactory#CreateTrim
 */
class ExportedByCATGitInterfaces CATIGSMTrim : public CATBaseUnknown
{
   CATDeclareInterface;

public: 

  /**
    * @deprecated V5R17 CATIGSMTrim#GetElem
    * Gets the first feature to trim (a curve or surface).
    *   @param oElem
    *      first feature to trim
    */
 virtual    HRESULT GetFirstElem(CATISpecObject_var & oElem) = 0;

  /**
    * @deprecated V5R17 CATIGSMTrim#SetElem
    * Sets the first feature to trim (a curve or surface).
    *   @param iElem
    *      first feature to trim
    */
 virtual    HRESULT SetFirstElem(const CATISpecObject_var iElem) = 0;
 
  /**
    * @deprecated V5R17 CATIGSMTrim#GetElem
    * Gets the second feature to trim (a curve or surface).
    *   @param oElem
    *      second feature to cut
    */
 virtual    HRESULT GetSecondElem(CATISpecObject_var & oElem) = 0; 

  /**
    * @deprecated V5R17 CATIGSMTrim#SetElem
    * Sets the second feature to trim (a curve or surface).
    *   @param iElem
    *      second feature to cut
    */
 virtual    HRESULT SetSecondElem(const CATISpecObject_var iElem) = 0;

  /**
    * @deprecated V5R17 CATIGSMTrim#GetNextOrientation
    * Gets the first orientation used to compute the trim.
    * Orientation specifies kept parts of first feature.<BR> 
    *<BR> 
    * When trimming surfaces :<BR> 
    * - If CATGSMSameOrientation: Kept parts are specified by the "natural" normal to the second feature<BR> 
    * - If CATGSMInvertOrientation: Kept parts are specified by the inverse of the "natural" normal to the second feature<BR> 
    *<BR> 
    * When trimming curves (without support): <BR> 
    * - If CATGSMSameOrientation: Kept parts are from beginning of the curve to the first intersection, <BR> 
    * and ,if there is one, from the second to the third intersection and so on until the end of the curve...<BR> 
    * - If CATGSMInvertOrientation: Kept parts are from the first intersection to the second (if there is one), <BR> 
    * and, if there is one, from the third to the fourth and so on until the end of the curve...<BR> 
    *<BR> 
    * When trimming curves on support: <BR> 
    * - If CATGSMSameOrientation: <BR>
	*   Kept parts of the first curve are specified by the result of the cross product : normal(support surface)^tangent(second curve)<BR> 
    * - If CATGSMInvertOrientation:  <BR>
	*   Kept parts of the first curve are specified by the inverse of the result of the cross product : normal(support surface)^tangent(second curve)<BR> 
    *<BR> 
    *   @param oOrientation
    *      first orientation used to compute the trim
    */
 virtual    HRESULT GetFirstOrientation(CATGSMOrientation & oOrientation) = 0;
 
   /**
    * @deprecated V5R17 CATIGSMTrim#SetNextOrientation(1)
    * Sets the first orientation used to compute the trim.
    * Orientation specifies kept parts of first feature.<BR> 
    *<BR> 
    * When trimming surfaces :<BR> 
    * - If CATGSMSameOrientation: Kept parts are specified by the "natural" normal to the second feature<BR> 
    * - If CATGSMInvertOrientation: Kept parts are specified by the inverse of the "natural" normal to the second feature<BR> 
    *<BR> 
    * When trimming curves (without support): <BR> 
    * - If CATGSMSameOrientation: Kept parts are from beginning of the curve to the first intersection, <BR> 
    * and ,if there is one, from the second to the third intersection and so on until the end of the curve...<BR> 
    * - If CATGSMInvertOrientation: Kept parts are from the first intersection to the second (if there is one), <BR> 
    * and, if there is one, from the third to the fourth and so on until the end of the curve...<BR> 
    *<BR> 
    * When trimming curves on support: <BR> 
    * - If CATGSMSameOrientation: <BR>
	*   Kept parts of the first curve are specified by the result of the cross product : normal(support surface)^tangent(second curve)<BR> 
    * - If CATGSMInvertOrientation:  <BR>
	*   Kept parts of the first curve are specified by the inverse of the result of the cross product : normal(support surface)^tangent(second curve)<BR> 
    *<BR> 
    *   @param iOrientation
    *      first orientation used to compute the trim
    */
 virtual    HRESULT SetFirstOrientation(CATGSMOrientation iOrientation) = 0;

  /**
    * @deprecated V5R17 CATIGSMTrim#GetPreviousOrientation
    * Gets the second orientation used to compute the trim.
    * Orientation specifies kept parts of second feature.<BR> 
    *<BR> 
    * When trimming surfaces :<BR> 
    * - If CATGSMSameOrientation: Kept parts are specified by the "natural" normal to the first feature<BR> 
    * - If CATGSMInvertOrientation: Kept parts are specified by the inverse of the "natural" normal to the first feature<BR> 
    *<BR> 
    * When trimming curves (without support):<BR> 
    * - If CATGSMSameOrientation: Kept parts are from beginning of the curve to the first intersection, <BR> 
    * and ,if there is one, from the second to the third intersection and so on until the end of the curve...<BR> 
    * - If CATGSMInvertOrientation: Kept parts are from the first intersection to the second (if there is one), <BR> 
    * and, if there is one, from the third to the fourth and so on until the end of the curve...<BR> 
    *<BR> 
    * When trimming curves on support: <BR> 
    * - If CATGSMSameOrientation: <BR>
	*   Kept parts of the second curve are specified by the result of the cross product : normal(support surface)^tangent(first curve)<BR> 
    * - If CATGSMInvertOrientation:  <BR>
	*   Kept parts of the second curve are specified by the inverse of the result of the cross product : normal(support surface)^tangent(first curve)<BR> 
    *<BR> 
    *   @param oOrientation
    *      second orientation used to compute the trim
    */
 virtual    HRESULT GetSecondOrientation(CATGSMOrientation & oOrientation) = 0;

  /**
    * @deprecated V5R17 CATIGSMTrim#SetPreviousOrientation(1)
    * Sets the second orientation used to compute the trim.
    * Orientation specifies kept parts of second feature.<BR> 
    *<BR> 
    * When trimming surfaces :<BR> 
    * - If CATGSMSameOrientation: Kept parts are specified by the "natural" normal to the first feature<BR> 
    * - If CATGSMInvertOrientation: Kept parts are specified by the inverse of the "natural" normal to the first feature<BR> 
    *<BR> 
    * When trimming curves  (without support): <BR> 
    * - If CATGSMSameOrientation: Kept parts are from beginning of the curve to the first intersection, <BR> 
    * and ,if there is one, from the second to the third intersection and so on until the end of the curve...<BR> 
    * - If CATGSMInvertOrientation: Kept parts are from the first intersection to the second (if there is one), <BR> 
    * and, if there is one, from the third to the fourth and so on until the end of the curve...<BR> 
    *<BR> 
    * When trimming curves on support: <BR> 
    * - If CATGSMSameOrientation: <BR>
	*   Kept parts of the second curve are specified by the result of the cross product : normal(support surface)^tangent(first curve)<BR> 
    * - If CATGSMInvertOrientation:  <BR>
	*   Kept parts of the second curve are specified by the inverse of the result of the cross product : normal(support surface)^tangent(first curve)<BR> 
    *<BR> 
    *   @param iOrientation
    *      second orientation used to compute the trim
    */
 virtual    HRESULT SetSecondOrientation(CATGSMOrientation iOrientation) = 0;

  /**
    * @deprecated V5R17 CATIGSMTrim#InvertNextOrientation
    * Inverts the first orientation used to compute the trim. 
    */
 virtual    HRESULT InvertFirstOrientation() = 0;

  /**
    * @deprecated V5R17 CATIGSMTrim#InvertPreviousOrientation
    * Inverts the second orientation used to compute the trim. 
    */
 virtual    HRESULT InvertSecondOrientation() = 0;
	
  /**
    * Queries whether resulting topology is simplified or not.
    *   @param oMode
    *      Simplification option on (TRUE) or off (FALSE)
    */
 virtual    HRESULT GetSimplify(CATBoolean & oMode) = 0;
	
  /**
    * Sets or unsets the simplification of the resulting topology.
    *   @param iMode
    *      Simplification option on (TRUE) or off (FALSE)
    */
 virtual    HRESULT  SetSimplify(CATBoolean iMode) = 0;
	
   /**
	 * Gets the support of the curves to trim (optional).
     *   @param oElem
     *      Support surface
     */
 virtual    HRESULT GetSupportElem(CATISpecObject_var & oElem) = 0;
	
   /**
     * Sets the support of the curves to trim (optional).
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
    * Gets the intersection.
    *    @param oElem
    *       Intersection
    */
 virtual    HRESULT GetIntersection(CATISpecObject_var & oElem) = 0;


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
    * Sets or unsets the automatic extrapolation mode.
    *   @param iMode
    *      Extrapolation mode on (TRUE) or off (FALSE)
    */
 virtual    HRESULT  SetAutomaticExtrapolationMode(CATBoolean iMode) = 0;

 /**
    * Queries whether automatic extrapolation mode is activated or not.
    *   @param oMode
    *      Extrapolation mode on (TRUE) or off (FALSE)
    */
 virtual    HRESULT GetAutomaticExtrapolationMode(CATBoolean & oMode) = 0;


 /**
 * Gets the number of elements: couple(element, index of portion to keep on element).
 *   @param oNbElem
 *      Number of elements  
 */
 virtual    HRESULT GetNbElem(int &oNbElem) = 0;

 /**
 * Gets the trimmed feature at a given index.  
 *   @param oElem
 *      trimmed feature 
 *   @param iRank
 *      Index of one of the trimmed features  
 */
 virtual    HRESULT GetElem(CATISpecObject_var & oElem, const int iRank) = 0;

/**
 * Gets the list of trimmed features, removing duplicated.
 * @param oElems
 *   The list of trimmed features
 */ 
 virtual    HRESULT GetElems(CATLISTV(CATISpecObject_var) & oElems) = 0;
 
 /**
 * Modifies the trimmed feature at a given index.  
 * Use AddElem method to specify a new trimmed element
 *   @param iElem
 *      trimmed feature 
 *   @param iRank
 *      Index of one of the trimmed features  
 */
 virtual    HRESULT SetElem(const CATISpecObject_var iElem, const int iRank) = 0;
 
 /**
 * Appends an element to trim.
 *   @param iElem
 *      feature to trim
 */
 virtual    HRESULT AddElem(const CATISpecObject_var & iElem) = 0;
 
 /**
 * Removes a feature at a given index.
 *   @param iRank 
 *      index of the feature 
 */
 virtual    HRESULT RemoveElem (const int iRank) = 0;
 
 /**
 * Inserts an element.
 * @param iPosition 
 *   The position of the element in the list of elements.
 * @param iElem
 *   the element. 
 */ 
 virtual HRESULT InsertElem(const CATISpecObject_var iElem, const int iPosition) = 0;
 
 /**
 * Gets Orientation used to compute the feature, referring to the previous trimmed element.
 *   @param oOrientation  
 *      Orientation
 *   @param iRank 
 *      index (of one of the trimmed features) - 1
 *      iRank must be greater than 1 and lower than the number of elements - 1 
 */
 virtual    HRESULT GetPreviousOrientation(CATGSMOrientation & oOrientation, const int iRank=1) = 0;
 
 /**
 * Gets Orientation used to compute the feature, referring to the next trimmed element.
 *   @param oOrientation  
 *      Orientation
 *   @param iRank 
 *      index (of one of the trimmed features) - 1
 *      iRank must be greater than 1 and lower than the number of elements - 1 
 */
 virtual    HRESULT GetNextOrientation(CATGSMOrientation & oOrientation, const int iRank=1) = 0;
 
 /**
 * Sets the orientation used to compute the feature, referring to the previous trimmed element.
 *   @param iOrientation  
 *      Orientation
 *   @param iRank 
 *      index (of one of the trimmed features) - 1
 *      iRank must be greater than 1 and lower than the number of elements - 1 
 */
 virtual    HRESULT SetPreviousOrientation(CATGSMOrientation iOrientation, int iRank) = 0;

 /**
 * Sets the orientation used to compute the feature, referring to the next trimmed element.
 *   @param iOrientation  
 *      Orientation
 *   @param iRank 
 *      index (of one of the trimmed features) - 1
 *      iRank must be greater than 1 and lower than the number of elements - 1 
 */
 virtual    HRESULT SetNextOrientation(CATGSMOrientation iOrientation, int iRank) = 0;
 
 /**
 * Inverts the orientation used to compute the trim refering the previous trimmed element.
 */
 virtual    HRESULT InvertPreviousOrientation(const int iRank=1) = 0;
 /**
 * Inverts the orientation used to compute the trim refering the next trimmed element.
 */
 virtual    HRESULT InvertNextOrientation(const int iRank=1) = 0;

	
 /**
 * Sets Trim mode.
 *   @param iMode
 *      =1   Standard
 *      =2   Pieces
 */
 virtual    HRESULT  SetMode(const int iMode) = 0;

 /**
 * Gets Trim mode.
 *   @param oMode
 *      =1   Standard
 *      =2   Pieces
 */
 virtual    HRESULT  GetMode(int& oMode) = 0;
 
 /**
 * Sets a portion to keep number in Pieces mode.
 * Used for the trim pieces of wires only
 *   @param iPortionNumber
 *      Index of portion to keep on the element
 *   @param iRank
 *      Index of the trimmed element
 */
 virtual    HRESULT SetPortionToKeep( const int iPortionNumber, const int iRank) = 0;
 
 /**
 * Gets a portion to keep number, giving the index of the element.
 * Used for the trim pieces of wires only
 *   @param oPortionNumber
 *      Index of portion to keep on the element
 *   @param iRank
 *      Index of the trimmed element
 */
 virtual    HRESULT GetPortionToKeep( int& oPortionNumber, const int iRank) = 0;
 
 /**
 * Sets the number of intersections with the other elements, in Pieces mode.
 * Used for the trim pieces of wires only
 * If iNumberOfIntersections<0, No check of the number of intersections at Update
 *   @param iElem
 *      trimmed feature 
 *   @param iNumberOfIntersections
 *      Number of intersections
 */
 virtual    HRESULT SetNumberOfIntersections( const CATISpecObject_var iElem, const int iNbIntersections) = 0;
 
 /**
 * Gets the number of intersections with the other elements, the index of the element, in Pieces mode.
 * Used for the trim pieces of wires only
 * If iNumberOfIntersections<0, No check of the number of intersections at Update
 *   @param iElem
 *      trimmed feature 
 *   @param oNbIntersections
 *      Number of intersections
 */
 virtual    HRESULT GetNumberOfIntersections( const CATISpecObject_var iElem, int& oNbIntersections) =0;
 
 /**
 * Sets the pieces cutters.
 * Used for the trim pieces of shells only
 *   @param iRank
       Index of the trimmed element (piece)
 *   @param iListCuttersIndex
       List of index corresponding of input shell index in 'GetElems' list, that relimit the piece
       except in case of multiple intersection between shells
       where Index=IndexInputShell+NbInputShells*(1-iw) 
       (whith iw=1... : wire index in case of multiple intersection)
 *   @param iListOrientations
       list of corresponding orientations (list of CATGSMOrientation)
 */
 virtual    HRESULT SetPieceCutters(const int iRank, const CATListOfInt & iListCuttersIndex, const CATListOfInt & iListOrientations) = 0;

 /**
 * Gets the pieces cutters.
 * Used for the trim pieces of shells only
 *   @param iRank
       Index of the trimmed element (piece)
 *   @param oListCuttersIndex
       List of index corresponding of input shell index in 'GetElems' list, that relimit the piece
       except in case of multiple intersection between shells
       where Index=IndexInputShell+NbInputShells*(1-iw) 
       (whith iw=1... : wire index in case of multiple intersection)
 *   @param oListOrientations
       list of corresponding orientations (list of CATGSMOrientation)
 */
 virtual    HRESULT GetPieceCutters(const int iRank, CATListOfInt & oListCuttersIndex, CATListOfInt & oListOrientations) = 0;

 /**
 * Gets the discrimination index.
 * Used for the trim pieces of shells only
 *   @param iRank
 *    Index of the trimmed element (piece)
 *   @param oIndex
 *    Discrimination Index
 *    Used to discrimine pieces when cutters orientations are not enough
 */
 virtual    HRESULT GetPieceDiscriminationIndex(const int iRank, int & oIndex) = 0;

 /**
 * Sets the discrimination index.
 * Used for the trim pieces of shells only
 *   @param iRank
 *    Index of the trimmed element (piece)
 *   @param iIndex
 *    Discrimination Index
 *    Used to discrimine pieces when cutters orientations are not enough
 */
 virtual    HRESULT SetPieceDiscriminationIndex(const int iRank, int iIndex) = 0;

 /**
 * Sets keep all pieces mode.
 * Used for the trim pieces of shells only
 *   @param iKeepAllPieces
 *      CATTrue : all the pieces are kept during update,
 *      CATFalse : only chosen pieces are kept during update (default).
 *   @see CATBoolean
 */ 
 virtual  HRESULT SetKeepAllPiecesMode(CATBoolean iKeepAllPieces) = 0;

 /**
 * Gets keep all pieces mode.
 * Used for the trim pieces of shells only
 *   @param oKeepAllPieces
 *      CATTrue : all the pieces are kept during update,
 *      CATFalse : only chosen pieces are kept during update (default).
 *   @see CATBoolean
 */ 
 virtual  HRESULT GetKeepAllPiecesMode(CATBoolean & oKeepAllPieces) = 0;

 /**
 * Sets the connected mode.
 *   @param iConnex
 *      CATTrue  = the check of connexity is enable,
 *      CATFalse = the check of connexity is disable.
 *   @see CATBoolean
 */ 
 virtual    HRESULT SetConnexMode(CATBoolean iConnex) = 0;
 /**
 * Gets the connected mode.
 *   @param oConnex
 *      CATFalse = non connected elements,
 *      CATTrue  = only connected elements
 *   @see CATBoolean
 */   
 virtual    HRESULT GetConnexMode(CATBoolean & oConnex) = 0;
 
 /**
 * Sets the Manifold mode.
 *   @param iIsManifold
 *      CATFalse = the check is not performed (non manifold result is allowed),
 *      CATTrue  = the check is performed.
 *   @see CATBoolean
 */ 
 virtual    HRESULT SetManifoldMode(CATBoolean iIsManifold) = 0;
 /**
 * Gets the Manifold mode.
 *   @param oIsManifold
 *      CATFalse = the check is not performed (non manifold result is allowed),
 *      CATTrue  = the check is performed.
 *   @see CATBoolean
 */   
 virtual    HRESULT GetManifoldMode(CATBoolean & oIsManifold) = 0;


 /**
 * Migrate binary feature to Standard mode.
 */
 virtual    HRESULT MigrateFromBinary() = 0;


};

CATDeclareHandler (CATIGSMTrim, CATBaseUnknown);
#endif // CATIGSMTrim_H
