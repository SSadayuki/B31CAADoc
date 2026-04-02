// COPYRIGHT DASSAULT SYSTEMES 2000

/**
  * @CAA2Level L0
  * @CAA2Usage U0
  */

//=============================================================================
//								   
// CATMldServicesComponentManager :						   
// Implementation of different services of CATMldServicesComponentManager
//
//=============================================================================
//	03/05/20022 : fdm; Creation 
//=============================================================================
//
#ifndef CATMldServicesComponentManager_h
#define CATMldServicesComponentManager_h

#include "CATMldServicesUI.h"

#include "CATUnicodeString.h"

/**
 * Implementation of different services to mange the component properties
 * <b>Role</b>: This service is used to mange the component properties
 */

class ExportedByCATMldServicesUI CATMldServicesComponentManager
{
	public:

// ===========================================================================
   /**
	* Initialize : Initialize the data for the component properties
	*/
// ===========================================================================

static void Initialize();

// ===========================================================================
   /**
	* Close : Free the data for the component properties
	*/
// ===========================================================================

static void Close();

	private:


};

#endif












