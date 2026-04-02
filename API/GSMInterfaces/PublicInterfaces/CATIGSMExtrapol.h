/* -*-c++-*- */
#ifndef CATIGSMExtrapol_H
#define CATIGSMExtrapol_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGitInterfacesExportedBy.h"
#include "CATISpecObject.h"
#include "CATICkeParm.h"
#include "CATGSMExtrapolDef.h"

class CATTopData;
class CATBody_var;
class CATGeoFactory_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID  IID_CATIGSMExtrapol;
#else
extern "C" const IID IID_CATIGSMExtrapol;
#endif

/**
 * Extrapolation feature.
 * <b>Role</b>:  Allows to access data of the Extrapol feature created by using an element
 * (a curve or a surface), at least a boundary of this element (a point in case of curve
 * extrapolation or a curve in case of surface extrapolation), and a limit 
 * (which can be specified by a length or a limit element).<BR>  
 * Continuity between the extrapolated element and the extrapolation can be : 
 * tangent or curvature.<BR>  
 *
 * Extrapolation can be assembled or not with the extrapolated curve or surface.
 * In case of surface extrapolation, extrapolation borders can be :<BR>  
 * - normal to the boundary of the extrapolated surface, <BR>  
 * - tangent to the edges of the extrapolated surface, that are adjacent to 
 *   the boundary
 *
 * @see CATGSMExtrapolLimitType, CATGSMExtrapolContinuityType, CATGSMExtrapolBorderType
 * @see CATIGSMFactory#CreateExtrapol
 */
class ExportedByCATGitInterfaces CATIGSMExtrapol : public CATBaseUnknown
{
   CATDeclareInterface;
public: 
  /**
    * Gets the curve or surface feature to extrapolate.
    *   @param oElem
    *      curve or surface feature to extrapolate
    */ 
 virtual    HRESULT GetElemToExtrapol(CATISpecObject_var & oElem) = 0;
  
  /**
    * Sets the curve or surface feature to extrapolate.
    *   @param iElem
    *      curve or surface feature to extrapolate
    */ 
 virtual    HRESULT SetElemToExtrapol(const CATISpecObject_var iElem) = 0;

 /**
  * Gets the number of extrapolations set. An extrapolation is specified by a boundary of the element to extrapolate, a limit type, a limit and a continuity type.
  *   @param int oNumberOfExtrapolations
  *      number of elements in the list of extrapolations
  */
 virtual    HRESULT GetNumberOfExtrapolations(int & oNumberOfExtrapolations) = 0;

 /**
    * Removes any extrapolation that has been set.
    *   @param iPosition 
    *      position of the extrapolation in the list of extrapolations
    */ 
 virtual    HRESULT RemoveExtrapolation(const int & iPosition) = 0;

 /**
  * Removes extrapolations whose boundaries are in iListElements.
  *   @param CATLISTV iListElements
  *      list of the boundaries (vertices or edges) of the extrapolations that are intended to be removed
  */ 
 virtual    HRESULT RemoveExtrapolations(const CATLISTV(CATISpecObject_var) & iListElements) = 0;

  /**
    * Removes all extrapolations that may have been set, except the first one.
    */ 
 virtual    HRESULT RemoveAllExtrapolationsExceptTheFirstOne() = 0;
  
  /**
  * @deprecated V5R26 CATIGSMExtrapol#GetBoundary
  * <p>This method is deprecated because the model has changed to enable to set several boundaries.</p>
  * <p><b>Migration instructions</b>: use the signature that uses an integer as the first argument.</p>
  * Example: "GetBoundary(ospElem)" should be replaced with "GetBoundary(1, ospElem)".
  */ 
 virtual    HRESULT GetBoundary(CATISpecObject_var & ospElem) = 0;

    /**
    * Gets any boundary of extrapolated curve or surface from which extrapolation begins.
    *   @param iPosition 
    *      position of the boundary in the list of boundaries
    *   @param ospElem
    *      boundary point (or curve) of extrapolated curve (or surface)
    */ 
 virtual    HRESULT GetBoundary(const int & iPosition, CATISpecObject_var & ospElem) = 0;

 /**
  * Gets all elements in the list of boundaries (vertices or edges).
  *   @param CATLISTV oListElements
  *      list of boundaries
  */
 virtual    HRESULT GetAllBoundaries(CATLISTV(CATISpecObject_var) & oListElements) = 0;
  
  /**
  * @deprecated V5R26 CATIGSMExtrapol#SetBoundary
  * <p>This method is deprecated because the model has changed to enable to set several boundaries.</p>
  * <p><b>Migration instructions</b>: use the signature that uses an integer as the first argument.</p>
  * Example: "SetBoundary(ispElem)" should be replaced with "SetBoundary(1, ispElem)".
  */ 
 virtual    HRESULT SetBoundary(const CATISpecObject_var ispElem) = 0;

    /**
    * Sets a boundary of extrapolated curve or surface from which extrapolation begins.
    *   @param iPosition 
    *      position of the boundary in the list of boundaries
    *      <br><b>Legal values</b> (given N is the number of extrapolations):
    *      <ul>
    *         <li>if iPosition equals 0, ispElem is appended to the list of boundaries.</li>
    *         <li>if 0 < iPosition < N+1, ispElem replaces the iPosition-th element the list of boundaries.</li>
    *         <li>if iPosition equals N+1, ispElem is appended to the list of boundaries.</li>
    *         <li>otherwise the method fails.</li>
    *      <ul>
    *   @param ispElem
    *      boundary point (or curve) of extrapolated curve (or surface)
    */ 
 virtual    HRESULT SetBoundary(const int & iPosition, const CATISpecObject_var & ispElem) = 0;
  
  /**
  * @deprecated V5R26 CATIGSMExtrapol#GetLimitType
  * <p>This method is deprecated because the model has changed to enable to set several boundaries.</p>
  * <p><b>Migration instructions</b>: use the signature that uses an integer as the first argument.</p>
  * Example: "GetLimitType(oLimitType)" should be replaced with "GetLimitType(1, oLimitType)".
  */ 
 virtual    HRESULT GetLimitType(CATGSMExtrapolLimitType & oLimitType) = 0;

 /**
    * Gets limit type of extrapolation (a length or a surface or volume) of any boundary.
    *   @param iPosition 
    *      position of the limit type in the list of limit types
    *   @param oLimitType
    *      limit type of extrapolation (CATGSMLengthLimit or CATGSMUpToElementLimit)
    */ 
 virtual    HRESULT GetLimitType(const int & iPosition, CATGSMExtrapolLimitType & oLimitType) = 0;
  
  /**
  * @deprecated V5R26 CATIGSMExtrapol#SetLimitType
  * <p>This method is deprecated because the model has changed to enable to set several boundaries.</p>
  * <p><b>Migration instructions</b>: use the signature that uses an integer as the first argument.</p>
  * Example: "SetLimitType(iLimitType)" should be replaced with "SetLimitType(1, iLimitType)".
  */ 
 virtual    HRESULT SetLimitType(CATGSMExtrapolLimitType iLimitType) = 0;
  
  /**
    * Sets limit type of extrapolation (a length or a surface or volume) of any boundary.
    *   @param iPosition 
    *      position of the limit type in the list of limit types
    *      <br><b>Legal values</b> (given N is the number of extrapolations):
    *      <ul>
    *         <li>if iPosition equals 0, iLimitType is appended to the list of limit types.</li>
    *         <li>if 0 < iPosition < N+1, iLimitType replaces the iPosition-th element the list of limit types.</li>
    *         <li>if iPosition equals N+1, iLimitType is appended to the list of limit types.</li>
    *         <li>otherwise the method fails.</li>
    *      <ul>
    *   @param iLimitType
    *      limit type of extrapolation (CATGSMLengthLimit or CATGSMUpToElementLimit)
    */ 
 virtual    HRESULT SetLimitType(const int & iPosition, const CATGSMExtrapolLimitType & iLimitType) = 0;
  
  /**
  * @deprecated V5R26 CATIGSMExtrapol#GetElemUntil
  * <p>This method is deprecated because the model has changed to enable to set several boundaries.</p>
  * <p><b>Migration instructions</b>: use the signature that uses an integer as the first argument.</p>
  * Example: "GetElemUntil(oElem)" should be replaced with "GetElemUntil(1, oElem)".
  */ 
 virtual    HRESULT GetElemUntil(CATISpecObject_var & oElem) = 0;

 /**
    * Gets the surface or volume specifying the extrapolation limit (when Limit type is CATGSMUpToElementLimit) of any boundary.
    *   @param iPosition 
    *      position of the up-to element in the list of up-to elements
    *   @param ospElem
    *      surface or volume specifying the extrapolation limit 
    */ 
 virtual    HRESULT GetElemUntil(const int & iPosition, CATISpecObject_var & ospElem) = 0;
  
  /**
  * @deprecated V5R26 CATIGSMExtrapol#SetElemUntil
  * <p>This method is deprecated because the model has changed to enable to set several boundaries.</p>
  * <p><b>Migration instructions</b>: use the signature that uses an integer as the first argument.</p>
  * Example: "SetElemUntil(iElem)" should be replaced with "SetElemUntil(1, iElem)".
  */ 
 virtual    HRESULT SetElemUntil(const CATISpecObject_var iElem) = 0;
  
  /**
    * Sets the surface or volume specifying the extrapolation limit (when Limit type is CATGSMUpToElementLimit) of any boundary.
    *   @param iPosition 
    *      position of the up-to element in the list of up-to elements
    *      <br><b>Legal values</b> (given N is the number of extrapolations):
    *      <ul>
    *         <li>if iPosition equals 0, ispElem is appended to the list of up-to elements.</li>
    *         <li>if 0 < iPosition < N+1, ispElem replaces the iPosition-th element the list of up-to elements.</li>
    *         <li>if iPosition equals N+1, ispElem is appended to the list of up-to elements.</li>
    *         <li>otherwise the method fails.</li>
    *      <ul>
    *   @param ispElem
    *      surface or volume specifying the extrapolation limit 
    */ 
 virtual    HRESULT SetElemUntil(const int & iPosition, const CATISpecObject_var & ispElem) = 0;
  
  /**
  * @deprecated V5R26 CATIGSMExtrapol#GetLength
  * <p>This method is deprecated because the model has changed to enable to set several boundaries.</p>
  * <p><b>Migration instructions</b>: use the signature that uses an integer as the first argument.</p>
  * Example: "GetLength(oLength)" should be replaced with "GetLength(1, oLength)".
  */ 
 virtual    HRESULT GetLength(double & oLength) = 0;

 /**
    * Gets the Length specifying the extrapolation limit (when Limit type is CATGSMLengthLimit) of any boundary.
    *   @param iPosition 
    *      position of the length in the list of lengths
    *   @param oLength
    *      length
    */ 
 virtual    HRESULT GetLength(const int & iPosition, double & oLength) = 0;
  
  /**
  * @deprecated V5R26 CATIGSMExtrapol#GetLength
  * <p>This method is deprecated because the model has changed to enable to set several boundaries.</p>
  * <p><b>Migration instructions</b>: use the signature that uses an integer as the first argument.</p>
  * Example: "GetLength(oLength)" should be replaced with "GetLength(1, oLength)".
  */ 
 virtual    HRESULT GetLength(CATICkeParm_var & oLength) = 0;

 /**
    * Gets the Length specifying the extrapolation limit (when Limit type is CATGSMLengthLimit) of any boundary.
    *   @param iPosition 
    *      position of the length in the list of lengths
    *   @param ospLength
    *      length
    *   @see CATICkeParm
 */ 
 virtual    HRESULT GetLength(const int & iPosition, CATICkeParm_var & ospLength) = 0;
  
  /**
  * @deprecated V5R26 CATIGSMExtrapol#SetLength
  * <p>This method is deprecated because the model has changed to enable to set several boundaries.</p>
  * <p><b>Migration instructions</b>: use the signature that uses an integer as the first argument.</p>
  * Example: "SetLength(iLength)" should be replaced with "SetLength(1, iLength)".
  */ 
 virtual    HRESULT SetLength(double iLength) = 0;

 /**
    * Sets the Length specifying the extrapolation limit (when Limit type is CATGSMLengthLimit) of any boundary.
    *   @param iPosition 
    *      position of the length in the list of lengths
    *      <br><b>Legal values</b> (given N is the number of extrapolations):
    *      <ul>
    *         <li>if iPosition equals 0, iLength is appended to the list of lengths.</li>
    *         <li>if 0 < iPosition < N+1, iLength replaces the iPosition-th element the list of lengths.</li>
    *         <li>if iPosition equals N+1, iLength is appended to the list of lengths.</li>
    *         <li>otherwise the method fails.</li>
    *      <ul>
    *   @param iLength
    *      length
    */ 
 virtual    HRESULT SetLength(const int & iPosition, const double & iLength) = 0;
  
  /**
  * @deprecated V5R26 CATIGSMExtrapol#SetLength
  * <p>This method is deprecated because the model has changed to enable to set several boundaries.</p>
  * <p><b>Migration instructions</b>: use the signature that uses an integer as the first argument.</p>
  * Example: "SetLength(iLength)" should be replaced with "SetLength(1, iLength)".
  */ 
 virtual    HRESULT SetLength(const CATICkeParm_var iLength) = 0;
  
  /**
    * Sets the Length specifying the extrapolation limit (when Limit type is CATGSMLengthLimit) of any boundary.
    *   @param iPosition 
    *      position of the length in the list of lengths
    *      <br><b>Legal values</b> (given N is the number of extrapolations):
    *      <ul>
    *         <li>if iPosition equals 0, ispLength is appended to the list of lengths.</li>
    *         <li>if 0 < iPosition < N+1, ispLength replaces the iPosition-th element the list of lengths.</li>
    *         <li>if iPosition equals N+1, ispLength is appended to the list of lengths.</li>
    *         <li>otherwise the method fails.</li>
    *      <ul>
    *   @param ispLength
    *      length
    *   @see CATICkeParm
 */ 
 virtual    HRESULT SetLength(const int & iPosition, const CATICkeParm_var & ispLength) = 0;
  
  /**
  * @deprecated V5R26 CATIGSMExtrapol#GetContinuityType
  * <p>This method is deprecated because the model has changed to enable to set several boundaries.</p>
  * <p><b>Migration instructions</b>: use the signature that uses an integer as the first argument.</p>
  * Example: "GetContinuityType(oContinuityType)" should be replaced with "GetContinuityType(1, oContinuityType)".
  */ 
 virtual    HRESULT GetContinuityType(CATGSMExtrapolContinuityType & oContinuityType) = 0;

 /**
    * Gets the continuity type between extrapolated element and any extrapolation.
    *     Continuity can be tangent or curvature
    *   @param iPosition 
    *      position of the continuity type in the list of continuity types
    *   @param oContinuityType
    *      Continuity Type (CATGSMTangentContinuity or CATGSMCurvatureContinuity)
    *   @see CATGSMExtrapolContinuityType
 */ 
 virtual    HRESULT GetContinuityType(const int & iPosition, CATGSMExtrapolContinuityType & oContinuityType) = 0;
    
  /**
  * @deprecated V5R26 CATIGSMExtrapol#SetContinuityType
  * <p>This method is deprecated because the model has changed to enable to set several boundaries.</p>
  * <p><b>Migration instructions</b>: use the signature that uses an integer as the first argument.</p>
  * Example: "SetContinuityType(iContinuityType)" should be replaced with "SetContinuityType(1, iContinuityType)".
  */ 
 virtual    HRESULT SetContinuityType(CATGSMExtrapolContinuityType iContinuityType) = 0;
    
  /**
    * Sets the continuity type between extrapolated element and any extrapolation.
    *     Continuity can be tangent or curvature
    *   @param iPosition 
    *      position of the continuity type in the list of continuity types
    *      <br><b>Legal values</b> (given N is the number of extrapolations):
    *      <ul>
    *         <li>if iPosition equals 0, iContinuityType is appended to the list of continuity types.</li>
    *         <li>if 0 < iPosition < N+1, iContinuityType replaces the iPosition-th element the list of continuity types.</li>
    *         <li>if iPosition equals N+1, iContinuityType is appended to the list of continuity types.</li>
    *         <li>otherwise the method fails.</li>
    *      <ul>
    *   @param iContinuityType
    *      Continuity Type (CATGSMTangentContinuity or CATGSMCurvatureContinuity)
    *   @see CATGSMExtrapolContinuityType
    */ 
 virtual    HRESULT SetContinuityType(const int & iPosition, const CATGSMExtrapolContinuityType & iContinuityType) = 0;
    
  /**
    * Gets the Border type of extrapolation (in case of surface extrapolation).
    *   In case of surface extrapolation, extrapolation borders can be :
    *    - normal to the boundary of the extrapolated surface, 
    *    - tangent to the edges of the extrapolated surface, that are adjacent to the boundary
    *   @param oBorderType
    *      Border Type (CATGSMNormalBorder or CATGSMTangentBorder)
 *   @see CATGSMExtrapolBorderType
    */ 
 virtual    HRESULT GetBorderType(CATGSMExtrapolBorderType & oBorderType) = 0;
    
  /**
    * Sets the Border type of extrapolation (in case of surface extrapolation).
    *   In case of surface extrapolation, extrapolation borders can be :
    *    - normal to the boundary of the extrapolated surface, 
    *    - tangent to the edges of the extrapolated surface, that are adjacent to the boundary
    *   @param iBorderType
    *      Border Type (CATGSMNormalBorder or CATGSMTangentBorder)
 *   @see CATGSMExtrapolBorderType
    */ 
 virtual    HRESULT SetBorderType(CATGSMExtrapolBorderType iBorderType) = 0;
    
  /**
    * Queries whether extrapolation is assembled with extrapolated curve or surface.
    *   @param oAssemble
    *      Assemble option (TRUE or FALSE)
    */
 virtual    HRESULT IsAssemble(CATBoolean & oAssemble) = 0;
   
  /**
    * Sets ,if needed, the assemble option in extrapolation.
    * <br> i.e: assemble of extrapolation with extrapolated element.
    *   @param iAssemble
    *      Assemble option on (TRUE) or off (FALSE)
    */
 virtual    HRESULT SetAssemble(CATBoolean iAssemble) = 0;

  /**
  * Gets the support surface (in case of tangent extrapolation of a wire).
  * If a support surface is given, the extrapolation will lie on it.
  * @param oSupport 
  *         support 
  */
 virtual HRESULT GetSupport(CATISpecObject_var& oSupport) = 0;

 /**
  * Sets the support surface (in case of tangent extrapolation of a wire).
  * If a support surface is given, the extrapolation will lie on it.
  * @param iSupport 
  *         support 
  */
 virtual HRESULT SetSupport(const CATISpecObject_var iSupport) = 0;

 /**
  * Gets the propagation mode (in case of curvature extrapolation of a shell).
  * 
  * @param oPropagationMode 
  *         propagation mode  
  */
 virtual HRESULT GetPropagationMode(CATGSMExtrapolPropagationMode& oPropagationMode) = 0;

 /**
  * Sets the support surface (in case of curvature extrapolation of a shell).
  * 
  * @param iPropagationMode 
  *         propagation mode 
  */
 virtual HRESULT SetPropagationMode(const CATGSMExtrapolPropagationMode iPropagationMode) = 0;

 /**
  * Gets the extended boundary in case of tangency propagation of the boundary. 
  *@param ioBodyExtendedBoundary 
  *         the extended boundary
   *@parami BodyToExtrapol
  *		the surface to be extrapolated
  *@param iFactory
  *      Geometric factory   
  *@param  iTopData
  *      The topological data 
  */
 virtual HRESULT GetExtendedBoundary (CATBody_var& ioBodyExtendedBoundary,CATBody_var& iBodyToExtrapol,CATGeoFactory_var iFactory, CATTopData* iTopData, CATGSMExtrapolPropagationMode iPropagationMode = CATGSMNoPropagation)=0;

 /**
  * Gets all elements in the list of internal elements (vertex or edges).
  *   @param CATLISTV oInternalElements
  *      list of internal elements
  */
 virtual HRESULT GetInternalEdgesElements( CATLISTV(CATISpecObject_var) & oInternalElements) =0;

 /**
  * Adds an internal element like vertex or edge to the Extrapol
  * The element is added at the end of the list.
  *   @param InternalElement
  *      element vertex or edge from the spec to extrapol
  */
 virtual HRESULT AddInternalEdgesElement(CATISpecObject_var & InternalElement) = 0;


/**
 * Removes an internal element to the Extrapol.
 *   @param iElem
 *      internal element to be removed
 */
 virtual HRESULT RemoveInternalEdgesElement(const CATISpecObject_var iElem) = 0;

/**
 * Removes all internal elements.
 */
 virtual HRESULT RemoveAllInternalEdgesElement() = 0;

  /**
	* Gets the extension of extrapolated edges mode in case of tangent continuity mode, tangent border mode and assembled result.
	*   @param oExtendMode
	*      Extend edges option (TRUE or FALSE)
	*/
 virtual HRESULT GetExtendEdgesMode(CATBoolean & oExtendMode) = 0;
   
  /**
    * Sets the extension of extrapolated edges mode in case of tangent continuity mode, tangent border mode and assembled result.
    *   @param iExtendMode
    *      Extend edges option on (TRUE) or off (FALSE)
    */
 virtual HRESULT SetExtendEdgesMode(const CATBoolean iExtendMode) = 0;

   /**
	* Gets the constant distance extrapolation mode in case of Length extrapolation limit.
	*   @param oConstantLengthMode
	*      Constant length option (TRUE or FALSE)
	*/
 virtual HRESULT GetConstantLengthMode(CATBoolean & oConstantLengthMode) = 0;
   
  /**
    * Sets the constant distance extrapolation mode in case of Length extrapolation limit.
    *   @param iConstantLengthMode
    *      Constant length option on (TRUE) or off (FALSE)
    */
 virtual HRESULT SetConstantLengthMode(const CATBoolean iConstantLengthMode) = 0;

 /**
 * Gets the boolean telling if the second side is extrapolated according to the first side's settings or to its own ones,
 * in case the element to extrapol is a wire.
 *   @param oExtrapolBothSidesIdentically
 *      <b>Legal values</b>:
 *      <ul>
 *         <li>CATTrue:  The second side is extrapolated as the first one is.</li>
 *         <li>CATFalse: The second side is extrapolated according to its own settings.</li>
 *      </ul>
 */
 virtual HRESULT GetExtrapolBothSidesIdentically(CATBoolean & oExtrapolBothSidesIdentically) = 0;
   
 /**
 * Sets the boolean telling if the second side is extrapolated according to the first side's settings or to its own ones,
 * in case the element to extrapol is a wire.
 *   @param iExtrapolBothSidesIdentically
 *      <b>Legal values</b>:
 *      <ul>
 *         <li>CATTrue:  The second side is extrapolated as the first one is.</li>
 *         <li>CATFalse: The second side is extrapolated according to its own settings.</li>
 *      </ul>
 */
 virtual HRESULT SetExtrapolBothSidesIdentically(const CATBoolean & iExtrapolBothSidesIdentically) = 0;

  /**
 * Gets the integer telling if the exact boundaries mode is activated for the skin exrapolate operator.
 *   @param iExactBoundariesMode
 *      <b>Legal values</b>:
 *      <ul>
 *         <li>1: the exact boundaries mode is activated.</li>
 *         <li>0: the approximate boundaries mode is activated.</li>
 *      </ul>
 */
 virtual HRESULT GetExactBoundariesMode(CATGSMExtrapolExactBoundariesMode & oExactBoundariesMode) = 0;

  /**
 * Sets the integer telling if the exact boundaries mode is activated for the skin exrapolate operator.
 *   @param iExactBoundariesMode
 *      <b>Legal values</b>:
 *      <ul>
 *         <li>1: the exact boundaries mode is activated.</li>
 *         <li>0: the approximate boundaries mode is activated.</li>
 *      </ul>
 */
 virtual HRESULT SetExactBoundariesMode(const CATGSMExtrapolExactBoundariesMode  iExactBoundariesMode) = 0;

};
CATDeclareHandler (CATIGSMExtrapol, CATBaseUnknown);
#endif // CATIGSMExtrapol_H
