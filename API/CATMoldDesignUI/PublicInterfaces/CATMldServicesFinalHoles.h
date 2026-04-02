// COPYRIGHT DASSAULT SYSTEMES 2000

/**
  * @CAA2Level L0
  * @CAA2Usage U0
  */

//=============================================================================
//								   
// CATMldServicesFinalHoles :						   
// Implementation of different services of CATMldServicesFinalHoles
//
//=============================================================================
//	13/06/2003 : fdm; Creation 
//=============================================================================
//
#ifndef CATMldServicesFinalHoles_h
#define CATMldServicesFinalHoles_h

#include "CATMldServicesUI.h"

#include "CATUnicodeString.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "CATBoolean.h"

/**
 * Final generating mode
 * @param CATMldFinalHolesParam
 *   Final generating on the Holes only (Drill, Tap, Pocket) 
 * @param CATMldFinalPadParam
 *   Final generating on the Pad only
 * @param CATMldFinalHolesPadParam
 *   Final generating on the Holes & Pad
 */

typedef enum {
	CATMldFinalHolesParam,		
	CATMldFinalPadParam,		
	CATMldFinalHolesPadParam	
} CATMldFinalMode;

/**
 * Base class to manage the final hole generation 
 * <b>Role</b>: This service is used to create the final hole of a component list.
 */

class ExportedByCATMldServicesUI CATMldServicesFinalHoles
{
	public:

// ===========================================================================
   /**
	* FinalHolesGeneration : create the final hole of a component list
	*   @param iListOfSelection 
	*		the component list to manage 
	*	@param iFinalParam 
	*		the final generating mode
	*	@param iFlagWarningMessage 
	*		the Warning message flag displayed
	*		<br><b>Legal values</b>:
	*		<dl>
	*			<dt>TRUE</dt>
	*			<dd>we displayed the warning message during the operation(default value) </dd>
	*			<dt>FALSE </dt>
	*			<dd>we don't displayed the warning message during the operation </dd>
	*		</dl>	  
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

static HRESULT FinalHolesGeneration(CATLISTV(CATBaseUnknown_var) & iListOfSelection, 
									const CATMldFinalMode iFinalParam,
									CATBoolean iFlagWarningMessage=TRUE);

};

#endif












