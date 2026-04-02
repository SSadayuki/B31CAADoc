// COPYRIGHT DASSAULT SYSTEMES 2000

/**
  * @CAA2Level L0
  * @CAA2Usage U0
  */

//=============================================================================
//								   
// CATMldServicesCreationHoles :						   
// Implementation of different services of CATMldServicesCreationHoles
//
//=============================================================================
//	13/08/2003 : fdm; Creation 
//=============================================================================
//
#ifndef CATMldServicesCreationHoles_h
#define CATMldServicesCreationHoles_h

#include "CATMldServicesUI.h"

#include "CATUnicodeString.h"
#include "CATIProduct.h"
#include "CATISpecObject.h"

/**
 * Base class to manage the creation hole generation 
 * <b>Role</b>: This service is used to create the hole for a component.
 */

class ExportedByCATMldServicesUI CATMldServicesCreationHoles
{
	public:

// ===========================================================================
   /**
	* CreateHolesComponent : General Holes Management (Drill, Tape, Pocket and Pad)
	*   @param ihDocRootProd 
	*		the root product from root document
	*	@param ihMyComponentInstPart 
	*		the created instance product component
	*	@param ihMyFromPlateInstPart 
	*		the instance product of the From plate
	*	@param ihMyToPlateInstPart 
	*		the instance product of the To plate
	*	@param iListBetween 
	*		the list of the instance product between From / To
	*	@param itypeComponent 
	*		the component type
	*   @return
	*		An HRESULT value. 
	*		<br><b>Legal values</b>:
	*		<dl>
	*			<dt>S_OK</dt>
	*			<dd>we can create the hole </dd>
	*			<dt>E_FAIL </dt>
	*			<dd>we can't create the hole </dd>
	*		</dl>	  
	*/
// ===========================================================================

static HRESULT CreateHolesComponent(
			CATIProduct_var ihDocRootProd,
			const CATISpecObject_var ihMyComponentInstPart,
			const CATISpecObject_var ihMyFromPlateInstPart, 
			const CATISpecObject_var ihMyToPlateInstPart,
			const CATLISTV( CATISpecObject_var ) *iListBetween,
			const CATUnicodeString itypeComponent);

};

#endif












