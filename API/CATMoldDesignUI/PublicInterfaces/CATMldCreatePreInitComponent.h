// COPYRIGHT DASSAULT SYSTEMES 2000

/**
  * @CAA2Level L0
  * @CAA2Usage U1
  */

//=============================================================================
//
// CATMldCreatePreInitComponent.h
//
//=============================================================================
//
// Usage notes:
//
//================================================================================

#ifndef CATMldCreatePreInitComponent_H
#define CATMldCreatePreInitComponent_H

#include "CATMldComponentUI.h"

#include "CATIProduct.h"
#include "CATBoolean.h"
#include "CATUnicodeString.h"
#include "CATISpecObject.h"
#include "CATMldAssociateType.h"
#include "CATMathPoint.h"
#include "CATMathDirection.h"
#include "CATLine.h"
#include "CATPoint.h"

#include "CATIMldComponent.h"

#include "CATMldCreateFeatureMethod.h"

class CATDocument;


/**
 * structure type used to transfert pre init data for the component creation
 */
struct CATMldPreInitDataComponentStruct 
{

	/**
	 * the root product from root document. Mandatory parameters.
	 */
	CATIProduct_var		hDocRootProd;		

	/**
	 * the reference path component. Mandatory parameters.
	 */
	CATUnicodeString	PathRefComponent;	
	/**
	 * the reference product of the component. Mandatory parameters.
	 */
	CATUnicodeString	ReferenceComponent;		
	/**
	 * the component type or feature string. Mandatory parameters.
	 */
	CATUnicodeString	typeComponent;			
	/**
	 * the Math component position. Mandatory parameters.
	 */
	CATMathPoint		MathPt;				

	/**
	 * the component orientation. Mandatory parameters.
	 */
	CATMathDirection	V31;				
	/**
	 * the component orientation. Mandatory parameters.
	 */
	CATMathDirection	V32; 
	/**
	 * the component orientation. Mandatory parameters.
	 */
	CATMathDirection	V33;

	/**
	 * the Geometrical Point. Optional parameters [default value : NULL_var].
	 */
	CATPoint_var		hMyGeomPointSel;
	
	/**
	 * the instance part plate support of the Geometrical selected point. Optional parameters [default value : NULL_var].
	 */
	CATISpecObject_var  hMyPlatePart;			

	/**
	 * the selected axis. Optional parameters [default value : NULL_var].
	 */
	CATLine_var			hMySelectAxis;

	/**
	 * the From plate instance Part. Optional parameters [default value : NULL_var].
	 */
	CATISpecObject_var	MyFromPlateInstPart;	

	/**
	 * the To plate instance Part. Optional parameters [default value : NULL_var].
	 */
	CATISpecObject_var	MyToPlateInstPart;		
	/**
	 * the list of drilled Part (included From & To). Optional parameters [default value : NULL].
	 */
	CATLISTV( CATISpecObject_var ) *DrilledList;	
	/**
	 * the association type. Optional parameters [default value : MldAssNONE].
	 */
	CATMldAssociateType	isAssoc;	
	/**
	 * the product in which the component will be instanciated. Optional parameters [default value : NULL].
	 */
	CATISpecObject_var hFatherProduct;
};

//----------------------------------------------------------------------


class ExportedByCATMldComponentUI CATMldCreatePreInitComponent
{

  public :

// ===========================================================================
   /**
	* CreatePreInitDataComponent : Create a new component with pre init data without dialog
	*
	*	<b>Role</b> For the constraint creation the selected point , axis must be in the same Product as the component.
	*	This limitation is necessary to allow the kinematics.
	*
	*   @param pPreInitDataComponent
	*		the pre-init data component 
	*	@param 	ipCreateFeratureMethod
	*		the callback creation feature component method (optionnal).
	*	@param ohMyPartInstComponent 
	*		the instance part component created from the pre-init data component
	*   @param iComponentPointSel
	*		the component instance. Used for the many instances by reference
	*	@param iopDocComponent				
	*		the document component. Used for the many instances by reference 
	*   @return
	*		An HRESULT value. 
	*		<br><b>Legal values</b>:
	*		<dl>
	*			<dt>S_OK</dt>
	*			<dd>We can create the component </dd>
	*			<dt>E_FAIL </dt>
	*			<dd>We can't create the component </dd>
	*		</dl>	  
	*/
// ===========================================================================

	static HRESULT	CreatePreInitDataComponent(
				CATMldPreInitDataComponentStruct *pPreInitDataComponent,
				CATMldCreateFeatureMethod ipCreateFeratureMethod,
				CATISpecObject_var &ohMyPartInstComponent,
				CATDocument	**iopDocComponent,
				const int iComponentPointSel = 1);								

// ===========================================================================
   /**
	* ReplaceReferenceComponent : Replace a selected Tooling Component reference 
	*							  by a new Tooling Component reference
	*
	*	<b>Role</b> If the replacing component doen't exist the action is not done.
	*
	*	@param iPathRefReplacingComponent;	
	*		the reference path replacing.
	*	@param iReferenceReplacingComponent;	
	*		the reference product of the replacing component in the Design Table
	*		Optionnal: only in case of Design Table.
	*	@param ihMyPartInstComponent 
	*		the instance Tooling Component to replace
	*	@param iTypeComponent 
	*		the Type of Tooling Component to replace
	*	@param 	ipCreateFeratureMethod
	*		the callback creation feature component method (optionnal).
	*	@param ohMyReplacedPartInstComponent 
	*		the replaced Tooling Component 
	*   @return
	*		An HRESULT value. 
	*		<br><b>Legal values</b>:
	*		<dl>
	*			<dt>S_OK</dt>
	*			<dd>We can replace the component </dd>
	*			<dt>E_FAIL </dt>
	*			<dd>We can't replace the component </dd>
	*		</dl>	  
	*	@example 
	*		CATUnicodeString BuildPathObjectName("E:\\Downloads\\CXR18\\intel_a\\startup\\
	*					components\\MoldCatalog\\CapScrew\\Dme\\CapScrew_M\\CapScrew_M.CATPart");
	*		HRESULT hr = CATMldCreatePreInitComponent::ReplaceReferenceComponent(
	*			BuildPathObjectName,"P1-R1-U1-B1",hMyPartInstComponent,"CAPScrew", (CATMldCreateFeatureMethod)NULL,
	*			&ohMyPartInstComponent);
	*/
// ===========================================================================

	static HRESULT	ReplaceReferenceComponent(
				CATUnicodeString	iPathRefReplacingComponent,
				CATUnicodeString	iReferenceReplacingComponent,
				CATISpecObject_var	ihMyPartInstComponent,
				CATUnicodeString	iTypeComponent,
				CATMldCreateFeatureMethod ipCreateFeratureMethod,
				CATISpecObject_var &ohMyReplacedPartInstComponent);	

// ===========================================================================
   /**
	* IsolateComponent : Isolate a selected Tooling Component instance 
	*
	*	<b>Role</b> If the instance Tooling Component to isolate is unique the action is not done.
	*
	*	@param ihMyPartInstComponent 
	*		the instance Tooling Component to isolate
	*	@param iTypeComponent 
	*		the Type of Tooling Component to isolate
	*	@param ipCreateFeratureMethod
	*		the callback creation feature component method (optionnal).
	*	@param ohMyIsolatedPartInstComponent 
	*		the isolated instance Tooling Component 
	*   @return
	*		An HRESULT value. 
	*		<br><b>Legal values</b>:
	*		<dl>
	*			<dt>S_OK</dt>
	*			<dd>We can isolate the component </dd>
	*			<dt>E_FAIL </dt>
	*			<dd>We can't isolate the component </dd>
	*		</dl>	  
	*	@example 
	*		HRESULT hr = CATMldCreatePreInitComponent::IsolateComponent(
	*			hMyPartInstComponent, "CAPScrew", (CATMldCreateFeatureMethod)NULL,
	*			&ohMyPartInstComponent);
	*/
// ===========================================================================

	static HRESULT	IsolateComponent(
		CATISpecObject_var &ihMyPartInstComponent,
		CATUnicodeString   iTypeComponent,
		CATMldCreateFeatureMethod ipCreateFeratureMethod,
		CATISpecObject_var &ohMyIsolatedPartInstComponent);									

  private:
	  static HRESULT	NewFromNewComponent(
		  const CATUnicodeString	iPathRefReplacingComponent,
		  const CATUnicodeString	iReferenceReplacingComponent,
		  CATIProduct_var		&ohReferenceProduct,
		  CATDocument*		&opDocComponent);

	static HRESULT	CreatePreInitDataComponentFromExisting(
				CATUnicodeString	iPathRefIsolatedComponent,
				CATUnicodeString	iReferenceIsolatedComponent,
				CATUnicodeString	iTypeComponent,
				CATISpecObject_var &ihMyPartInstComponent,
				CATMldCreateFeatureMethod ipCreateFeatureMethod,
				const int iComponentPointSel,
				const CATBoolean IsModeNewInstance,
				CATDocument	**iopDocComponent,
				CATISpecObject_var &ohMyPartInstComponent);
		static HRESULT	CreatePreInitDataComponent2(
				CATMldPreInitDataComponentStruct *pPreInitDataComponent,
				CATMldCreateFeatureMethod ipCreateFeratureMethod,
				CATISpecObject_var &ohMyPartInstComponent,
				CATDocument	**iopDocComponent,
				const int iComponentPointSel,
				const CATBoolean IsModeNewInstance);	
};

//----------------------------------------------------------------------

#endif
