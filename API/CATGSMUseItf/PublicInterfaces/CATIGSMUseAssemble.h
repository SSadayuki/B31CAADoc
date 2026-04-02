
/* -*-c++-*- */
#ifndef CATIGSMUseAssemble_H
#define CATIGSMUseAssemble_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGSMUseItfExportedBy.h"
#include "CATIMmiMechanicalFeature.h"
#include "CATLISTV_CATIMmiMechanicalFeature.h"
#include "CATBoolean.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID  IID_CATIGSMUseAssemble;
#else
extern "C" const IID IID_CATIGSMUseAssemble;
#endif

class CATICkeParm_var;

/**
 * Interface to join (also name assemble) feature. 
 * <b>Role</b>: Allows you to acess data of join feature:  that can be a set of curves or
 * a set of surfaces.  The orientation of the result is the same of the first element.
 * @see CATIGSMUseFactory#CreateAssemble
 */
class ExportedByCATGSMUseItf CATIGSMUseAssemble : public CATBaseUnknown
{
   CATDeclareInterface;
public: 

  // ---------------------------------------------------
  // GETS INFO ON ELEMENTS 
  // ---------------------------------------------------
   /**
	* Gets the size of the list of elements to assemble.
	*  @param oSize
	*      Size of the list
	*/
	virtual HRESULT GetElementsSize(int& oSize) =0;

	/**
	* Gets the list of elements to assemble.
	*   @param oSpecObjectsList
	*      a list of element
	* @see CATIMmiMechanicalFeature
	*/ 
	virtual HRESULT	GetElements(CATLISTV(CATIMmiMechanicalFeature_var)& oSpecObjectsList) = 0;

	/**
	* Gets the position of an element in the list.
	*  @param iElem
	*      Element in the list
	*  @param oPos
	*      Position of the previous element in the list
	*/
	virtual HRESULT GetPosition(CATIMmiMechanicalFeature_var& oElem,int & oPos) = 0;

	/**
	* Gets in the list the element which has the given position.
	*  @param oElem
	*      Element in the list that is a the given position
	*  @param iPos
	*      Position in the list
	*/
	virtual HRESULT GetElementAtPosition(CATIMmiMechanicalFeature_var& oElem,int iPos) = 0;

	// ---------------------------------------------------
	// APPEND 
	// ---------------------------------------------------
	/**
	* Appends an element to the list of elements to assemble.
	*   @param hSpecObject
	*      Element to append.
	*   @see CATIMmiMechanicalFeature
	*/ 
	virtual HRESULT	AppendElement(const CATIMmiMechanicalFeature_var ihSpecObject) =0;

	// ---------------------------------------------------
	// REMOVE 
	// ---------------------------------------------------
	/**
	* Removes an element to the list of elements to assemble.
	*   @param i
	*      Position of the element to remove.
	*/ 
	virtual HRESULT RemoveElement(int i) =0;

	/**
	* Removes the list of elements.
	*/
	virtual HRESULT RemoveAll() = 0;


	// ---------------------------------------------------
	// REPLACE
	// ---------------------------------------------------
	/**
	* Replace the element i by the element ihSpecObject.
	*   @param i
	*      Position of the element to remove.
	*   @param hSpecObject
	*      Element to Insert.
	*   @see CATIMmiMechanicalFeature
	*/ 
	virtual HRESULT ReplaceElement(int i, const CATIMmiMechanicalFeature_var& ihSpecObject) =0;



	// ---------------------------------------------------
	// DEVIATION & PARAMETERS 
	// ---------------------------------------------------
	/**
	* Gets the merging distance.
	*   @param oDevuser
	*      Merging distance.
	*   @see CATICkeParm
	*/   
	virtual    HRESULT  GetDevUser (CATICkeParm_var & oDevUser) = 0;
	/**
	* Gets the merging distance.
	*   @param oDevuser
	*      Merging distance.
	*/   
	virtual    HRESULT  GetDevUser (double & oDevUser) = 0;
	/**
	* Sets the merging distance.
	*   @param iDevuser
	*      Merging distance.
	*   @see CATICkeParm
	*/ 
	virtual    HRESULT SetDevUser  (const CATICkeParm_var iDevUser) = 0;

	/**
	* Gets the angular tolerance mode.
	*   @param oValue
	*      The angular tolerance.
	*   @see CATBoolean
	*/   
	virtual    HRESULT  GetAngularToleranceMode (CATBoolean & oValue) = 0;
	/**
	* Sets the angular tolerance mode.
	*   @param iValue
	*      The angular tolerance.
	*   @see CATBoolean
	*/ 
	virtual    HRESULT SetAngularToleranceMode  (const CATBoolean iValue) = 0;

	/**
	* Gets the angular tolerance.
	*   @param oValue
	*      The angular tolerance.
	*   @see CATICkeParm
	*/   
	virtual    HRESULT  GetAngularTolerance (CATICkeParm_var & oValue) = 0;
	/**
	* Gets the angular tolerance.
	*   @param oValue
	*      The angular tolerance.
	*/   
	virtual    HRESULT  GetAngularTolerance (double & oValue) = 0;
	/**
	* Sets the angular tolerance.
	*   @param iValue
	*      The angular tolerance.
	*   @see CATICkeParm
	*/ 
	virtual    HRESULT SetAngularTolerance  (const CATICkeParm_var iValue) = 0;

	/**
	* Gets the connected mode.
	*   @param oConnex
	*      CATFalse = non connected elements,
	*      CATTrue  = only connected elements
	*   @see CATBoolean
	*/   
	virtual    HRESULT GetConnex (CATBoolean & oConnex) = 0;
	/**
	* Sets the connected mode.
	*   @param iConnex
	*      CATTrue  = the check of connexity is enable,
	*      CATFalse = the check of connexity is disable.
	*   @see CATBoolean
	*/ 
	virtual    HRESULT SetConnex    (CATBoolean iConnex) = 0;
	/**
	* Gets the Manifold mode.
	*   @param oIsManifold
	*      CATFalse = the check is not performed (non manifold result is allowed),
	*      CATTrue  = the check is performed.
	*   @see CATBoolean
	*/   
	virtual    HRESULT GetManifold (CATBoolean & oIsManifold) = 0;
	/**
	* Sets the Manifold mode.
	*   @param iIsManifold
	*      CATFalse = the check is not performed (non manifold result is allowed),
	*      CATTrue  = the check is performed.
	*   @see CATBoolean
	*/ 
	virtual    HRESULT SetManifold   (CATBoolean iIsManifold) = 0;

	/**
	* Gets the Tangency Continuity mode.
	*   @param oTangencyContinuity
	*      CATFalse = the check is not performed (non G1 result is allowed),
	*      CATTrue  = the check is performed.
	*   @see CATBoolean
	*/   
	virtual    HRESULT GetTangencyContinuity(CATBoolean & oTangencyContinuity) = 0;
	/**
	* Sets the Tangency Continuity mode.
	*   @param iTangencyContinuity
	*      CATFalse = the check is not performed (non G1 result is allowed),
	*      CATTrue  = the check is performed.
	*   @see CATBoolean
	*/ 
	virtual    HRESULT SetTangencyContinuity(CATBoolean iTangencyContinuity) = 0;
	/**
	* Gets the simplified mode.
	*   @param oSimplify
	*      CATTrue  = the topology of the result is simplified,
	*      CATFalse = the topology of the result is not simplified.
	*   @see CATBoolean
	*/   
	virtual    HRESULT GetSimplify (CATBoolean & oSimplify) = 0;
	/**
	* Sets the simplified mode.
	*   @param iSimplify
	*      CATTrue  = the topology of the result is simplified,
	*      CATFalse = the topology of the result is not simplified.
	*   @see CATBoolean
	*/ 
	virtual    HRESULT SetSimplify (CATBoolean iSimplify) = 0;


	/**
	* Gets 'suppress mode'.
	*   @param oSuppressMode
	*      CATTrue  = 
	*      CATFalse = 
	*   @see CATBoolean
	*/   
	virtual    HRESULT GetSuppressMode (CATBoolean & oSuppressMode) = 0;
	/**
	* Sets the suppress mode.
	*   @param iSuppressMode
	*      CATTrue  = 
	*      CATFalse = 
	*   @see CATBoolean
	*/ 
	virtual    HRESULT SetSuppressMode (CATBoolean iSuppressMode) = 0;


	/**
	* Gets the invert mode.
	*   @param oInvert
	*      CATTrue  = the result is inverted,
	*      CATFalse = the result is not inverted,
	*   @see CATBoolean
	*/   
	virtual    HRESULT IsInverted (CATBoolean & oInvert) = 0;
	/**
	* Sets the invert mode.
	*   @param iInvert
	*      CATTrue  = the result is inverted,
	*      CATFalse = the result is not inverted,
	*   @see CATBoolean
	*/ 
	virtual    HRESULT SetInvert(CATBoolean iInvert) = 0;
	/**
	* Invert the invert mode.
	*/ 
	virtual    HRESULT Invert () = 0;

	/**
	* Gets the list of sub-elements to remove. 
	*   @param oSpecObjectsList
	*      List of elements.
	*   @see CATIMmiMechanicalFeature
	*/ 
	virtual HRESULT	GetSubElements(CATLISTV(CATIMmiMechanicalFeature_var)& oSpecObjectsList) = 0;
	/**
	* Gets the size of the list of sub-elements to remove.
	*  @param oSize
	*      Size of the list.
	*/
	virtual HRESULT GetSubElementsSize(int& oSize) =0;
	/**
	* Append an element to the list of sub-elements to remove.
	*   @param hSpecObject
	*      Element to append.
	*   @see CATIMmiMechanicalFeature
	*/ 
	virtual HRESULT	AppendSubElement(const CATIMmiMechanicalFeature_var ihSpecObject) =0;
	/**
	* Remove an sub-element to the list of sub-elements to remove.
	*   @param i
	*      Position of the sub element (start at 1)
	*/ 
	virtual HRESULT RemoveSubElement(int i) =0;



	// ---------------------------------------------------
	// FEDERATION 
	// ---------------------------------------------------
	/**
	* Gets the propagation mode of the federation.
	*   @param i
	*      type of propagation (0: No, 1: All, 2: Continuity, 3:Tangency).
	*/ 
	virtual HRESULT GetFederationPropagation(int& i) =0;
	/**
	* Sets the propagation mode of federation.
	*   @param i
	*      type of propagation (0: No, 1: All, 2: Continuity, 3:Tangency).
	*/ 
	virtual HRESULT SetFederationPropagation(int i)=0;
	/**
	* Gets the list of elements to federate.
	*   @param oSpecObjectsList
	*      List of elements.
	*   @see CATIMmiMechanicalFeature
	*/ 
	virtual HRESULT	GetFederatedElements(CATLISTV(CATIMmiMechanicalFeature_var)& oSpecObjectsList) =0;
	/**
	* Gets the size of the list of elements to federate.
	*   @param Size
	*      Number of elements.
	*/ 
	virtual HRESULT GetFederatedElementsSize(int& Size) =0;
	/**
	* Appends an element to the list of elements to federate.
	*   @param ihSpecObject
	*      Element to append.
	*   @see CATIMmiMechanicalFeature
	*/ 
	virtual HRESULT	AppendFederatedElement(const CATIMmiMechanicalFeature_var ihSpecObject) =0;
	/**
	* Removes an element to the list of elements to federate.
	*   @param i
	*      Position of the element to remove.
	*/ 
	virtual HRESULT RemoveFederatedElement(int i) =0;


	/**
	* Replaces an element in the list at the given position.
	*  @param iElem
	*      New element
	*  @param Pos
	*      Position in the list of the element that will be replaced
	*/
	virtual HRESULT ReplaceElementAtPosition(CATIMmiMechanicalFeature_var& iElem,int iPos) = 0;

	/**
	* Gets the size of the list (number of elements to assemble).
	*  @param oSize
	*      Size of the list
	*/
	virtual HRESULT GetSize(int & oSize) = 0;

	/**
	* Gets all the elements of the list. 
	*  @param oElems
	*      List of the elements
	*/
	virtual HRESULT GetAllElements(CATLISTV(CATIMmiMechanicalFeature_var) & oElems)=0;

	// ---------------------------------------------------
	// TOPOLOGICAL HEALING 
	// ---------------------------------------------------
	/**
	* Gets the healing mode for merged cells.
	*   @param oHeal
	*      True  = merged cells are healed,
	*      False = merged cells are not healed.
	*   @see CATBoolean
	*/
	virtual    HRESULT GetHealingMode(CATBoolean & oHeal) = 0;

	/**
	* Sets the healing mode for merged cells.
	*   @param iHeal
	*      True  = merged cells are healed,
	*      False = merged cells are not healed.
	*   @see CATBoolean
	*/
	virtual    HRESULT SetHealingMode(CATBoolean iHeal) = 0;
};
CATDeclareHandler (CATIGSMUseAssemble, CATBaseUnknown);
#endif
