// COPYRIGHT DASSAULT SYSTEMES 2000

/**
  * @CAA2Level L0
  * @CAA2Usage U0
  */

//=============================================================================
//								   
// CATMldServicesRep2D :						   
// Implementation of different services of CATMldServicesRep2D
//
//=============================================================================
//	03/05/20022 : fdm; Creation 
//  06/09/2002 : fdm; Separation du type enum CATMldType de CATMldTCN.h
//  01/10/2002 : fdm; R11: Replace enum component type by the feature string (CATMldString.h)
//=============================================================================
//
#ifndef CATMldServicesRep2D_h
#define CATMldServicesRep2D_h

#include "CATMldServicesUI.h"

#include "CATUnicodeString.h"

/**
 * Base class to manage the change of representation 2D and 3D
 * <b>Role</b>: This service is used to change the representation of the Part
 * from 3D representation to 2D representation and the reverse.
 * The 3D representation is defined by the ParBody
 * The 2D representation is defined by the OpenBody "Symbol"
 */

class ExportedByCATMldServicesUI CATMldServicesRep2D
{
	public:

// ===========================================================================
   /**
	* SetRepresentation2D : Set the default value for the representation 2D
	*   @param iType 
	*		the component type (feature string)
	*	@param iFlag 
	*		activation of representation 2D
	*/
// ===========================================================================

static void SetRepresentation2D(const CATUnicodeString iType,const CATBoolean iFlag);

// ===========================================================================
   /**
	* GetRepresentation2D : Get the default value for the representation 2D
	*   @param iType
	*      the component type (feature string)
	*/
// ===========================================================================

static boolean GetRepresentation2D(const CATUnicodeString iType);

	private:


};

#endif












