// COPYRIGHT DASSAULT SYSTEMES 2000

/**
  * @CAA2Level L0
  * @CAA2Usage U6
  */

//=============================================================================
//
// CATMldCreateFeatureMethod.h
//
//=============================================================================
//
// Usage notes:
//
//=============================================================================
//  14/08/2003 : fdm; Creation
//================================================================================

#ifndef CATMldCreateFeatureMethod_H
#define CATMldCreateFeatureMethod_H


#include "CATBoolean.h"
#include "CATUnicodeString.h"
#include "CATISpecObject.h"


/**
 * Prototype of the callback feature method. CATMldCreateFeatureMethod
 * @param hiMyPartInstComponent 
 *   the component instance.
 * @param iTypeComponent
 *   the component type or feature string.
 * @param hiFromPlate
 *   the From plate instance Part.
 * @param hiToPlate
 *   the To plate instance Part.
 * @param iStrIcon
 *   the icon name (not used)
 * @param iDrilledList
 *   the list of drilled Part (included From & To).
 * @param hoFeatComponent
 *   the feature component
 */ 

typedef HRESULT (*CATMldCreateFeatureMethod)(
				const CATISpecObject_var hiMyPartInstComponent,	
				const CATUnicodeString	iTypeComponent,	
				const CATISpecObject_var hiFromPlate,
				const CATISpecObject_var hiToPlate,
				const CATUnicodeString iStrIcon,
				const CATListValCATISpecObject_var iDrilledList,
				CATIMldComponent_var &hoFeatComponent);


#endif
