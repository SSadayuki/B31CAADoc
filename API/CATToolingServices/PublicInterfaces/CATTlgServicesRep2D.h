// COPYRIGHT DASSAULT SYSTEMES 2000

/**
  * @CAA2Level L0
  * @CAA2Usage U0
  */

//=============================================================================
//								   
// CATTlgServicesRep2D :						   
// Implementation of different services of CATTlgServicesRep2D
//
//=============================================================================
//	03/05/20022 : fdm; Creation 
//=============================================================================
//
#ifndef CATTlgServicesRep2D_h
#define CATTlgServicesRep2D_h

#include "CATTlgServices.h"

#include "CATLISTV_CATBaseUnknown.h"
#include <CATISpecObject.h>

/**
 * Base class to manage the change of representation 2D and 3D
 * <b>Role</b>: This service is used to change the representation of the Part
 * from 3D representation to 2D representation and the reverse.
 * The 3D representation is defined by the ParBody
 * The 2D representation is defined by the OpenBody "Symbol"
 */

class ExportedByCATTlgServices CATTlgServicesRep2D
{
	public:

// ===========================================================================
   /**
	* ChangeRep3Dto2D : Change representation 3D to simplified 2D
	*   @param ihRefPart
	*      is the reference of the part 
	*   @return
	*      returns TRUE if all is OK, FALSE on the contrary
	*/
// ===========================================================================

static boolean ChangeRep3Dto2D(const CATISpecObject_var ihRefPart);

// ===========================================================================
   /**
	* ChangeRep2Dto3D : Change representation simplified 2D to 3D
	*   @param ihRefPart
	*      is the reference of the part 
	*   @return
	*      returns TRUE if all is OK, FALSE on the contrary
	*/
// ===========================================================================

static boolean ChangeRep2Dto3D(const CATISpecObject_var ihRefPart);

	private:

};

#endif












