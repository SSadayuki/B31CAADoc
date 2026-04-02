// COPYRIGHT DASSAULT SYSTEMES 2000

/**
  * @CAA2Level L0
  * @CAA2Usage U0
  */

//=============================================================================
//								   
// CATMldServicesRepHoles :						   
// Implementation of different services of CATMldServicesRepHoles
//
//=============================================================================
//	03/05/20022 : fdm; Creation 
//  06/09/2002 : fdm; Separation du type enum CATMldType de CATMldTCN.h
//  01/10/2002 : fdm; R11: Replace enum component type by the feature string (CATMldString.h)
//  22/10/2002 : fdm; R11: Simplified Holes & Pad
//  13/12/2002 : fdm; R11: Use of CATMldWksOption
//=============================================================================
//
#ifndef CATMldServicesRepHoles_h
#define CATMldServicesRepHoles_h

#include "CATMldServicesUI.h"

#include "CATUnicodeString.h"

/**
 * Base class to manage the change of representation of the holes 
 * <b>Role</b>: This service is used to change the representation of holes
 * there are two kind of representation:
 * <ul>
 * <li>the representation simplified holes without the holes creation </li>
 * <li>the representation with the holes creation </li>
 * </ul>
 */

class ExportedByCATMldServicesUI CATMldServicesRepHoles
{
	public:

// ===========================================================================
   /**
	* SetRepresentation2DHoles : Set the default value for the representation of the holes
	*   @param iType 
	*		the component type (feature string)
	*	@param iFlag 
	*   <br><b>Legal values</b>:
	*   <dl>
	*     <dt>TRUE</dt>
	*     <dd>the representation simplified holes without the holes creation </dd>
	*     <dt>FALSE </dt>
	*     <dd>the representation with the holes creation </dd>
	*   </dl>	  
	*/
// ===========================================================================

static void SetRepresentation2DHoles(const CATUnicodeString iType,const CATBoolean iFlag);


// ===========================================================================
   /**
	* GetRepresentation2DHoles : Get the default value for the representation of the holes
	*   @param iType
	*      the component type (feature string)
	* @return
    *   An boolean value. 
	*   <br><b>Legal values</b>:
	*   <dl>
	*     <dt>TRUE</dt>
	*     <dd>the representation simplified holes without the holes creation </dd>
	*     <dt>FALSE </dt>
	*     <dd>the representation with the holes creation </dd>
	*   </dl>	  
	*/
// ===========================================================================

static boolean GetRepresentation2DHoles(const CATUnicodeString iType);


// ===========================================================================
   /**
	* SetRepresentation2DPad : Set the default value for the representation of the pad
	*   @param iType 
	*		the component type (feature string)
	*	@param iFlag 
	*   <br><b>Legal values</b>:
	*   <dl>
	*     <dt>TRUE</dt>
	*     <dd>the representation simplified pad without the pad creation </dd>
	*     <dt>FALSE </dt>
	*     <dd>the representation with the Pad creation </dd>
	*   </dl>	  
	*/
// ===========================================================================

static void SetRepresentation2DPad(const CATUnicodeString iType,const CATBoolean iFlag);


// ===========================================================================
   /**
	* GetRepresentation2DPad : Get the default value for the representation of the Pad
	*   @param iType
	*      the component type (feature string)
	* @return
    *   An boolean value. 
	*   <br><b>Legal values</b>:
	*   <dl>
	*     <dt>TRUE</dt>
	*     <dd>the representation simplified pad without the pad creation </dd>
	*     <dt>FALSE </dt>
	*     <dd>the representation with the Pad creation </dd>
	*   </dl>	  
	*/
// ===========================================================================

static boolean GetRepresentation2DPad(const CATUnicodeString iType);


};

#endif












