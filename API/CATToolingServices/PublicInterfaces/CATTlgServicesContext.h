// COPYRIGHT DASSAULT SYSTEMES 2000

/**
  * @CAA2Level L0
  * @CAA2Usage U0
  */

//=============================================================================
//								   
// CATTlgServicesContext :						   
// Implementation of different services of CATTlgServicesContext
//
//=============================================================================
//	03/05/20022 : fdm; Creation 
//	14/05/2007 : ffj; Add DefineAsContextualInstance
//=============================================================================
//
#ifndef CATTlgServicesContext_h
#define CATTlgServicesContext_h

#include "CATTlgServices.h"

#include "CATIProduct.h"

/**
 * Base class to manage the change of context of a component
 * <b>Role</b>: This service is used to change the context of a component 
 * with an externalLink. The service find the best new context for the component.
 */

class ExportedByCATTlgServices CATTlgServicesContext
{
	public:

// ===========================================================================
   /**
	* ChangeContext : Modify the context of a component with an externalLink
	*   @param iTargetComponent
	*		the target component you want to change the context
	*	@param iExternalLinkComponent 
	*		the external link of the target component
	*   @return
	*		An HRESULT value. 
	*		<br><b>Legal values</b>:
	*		<dl>
	*			<dt>S_OK</dt>
	*			<dd>We can change the context </dd>
	*			<dt>E_FAIL </dt>
	*			<dd>We can't change the context </dd>
	*		</dl>	  
	*/
// ===========================================================================

static HRESULT ChangeContext(const CATIProduct_var iTargetComponent, 
							 const CATIProduct_var iExternalLinkComponent);

// ===========================================================================
   /**
	* DefineAsContextualInstance : management of contextual instance
	*   @param iospInstance
	*		xxx
	*		xxx
	*   @return
	*		An HRESULT value. 
	*		<br><b>Legal values</b>:
	*		<dl>
	*			<dt>S_OK</dt>
	*			<dd>xxx </dd>
	*			<dt>E_FAIL </dt>
	*			<dd>xxx </dd>
	*		</dl>	  
	*/
// ===========================================================================
static HRESULT DefineAsContextualInstance(const CATIProduct_var &iospInstance, const CATBoolean IsModeReplace);

	private:

};

#endif












