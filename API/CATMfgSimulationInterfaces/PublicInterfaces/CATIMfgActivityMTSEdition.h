//=====================================================================
// COPYRIGHT Dassault Systemes 2002
//=====================================================================
//
// CATIMfgActivityMTSEdition.h
// Define the CATIMfgActivityMTSEdition interface
//
//=====================================================================
#ifndef CATIMfgActivityMTSEdition_H
#define CATIMfgActivityMTSEdition_H

/**
 * @CAA2Level L0
 * @CAA2Usage U5
*/

// CATMfgSimulationInterfaces
#include "CATMfgSimulationItfCPP.h"

// System
#include "CATCORBABoolean.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMfgSimulationItfCPP IID IID_CATIMfgActivityMTSEdition;
#else
extern "C" const IID IID_CATIMfgActivityMTSEdition;
#endif

//------------------------------------------------------------------

/**
* Interface to edit the ToolPath of a Manufacturing Operation.
* <br><b>Role</b>: CATIMfgActivityMTSEdition has methods to 
* allow the Manufacturing Operation TP edition.
*/

class ExportedByCATMfgSimulationItfCPP CATIMfgActivityMTSEdition : public CATBaseUnknown
{
	CATDeclareInterface;

	public:

		/**
		* Authorizes the Manufacturing Operation TP edition.
		* <br><b>Role</b>: IsMOLocked allows the edition of the  
		* the ToolPath of a Manufacturing Operation after Simulation Teaching
		*
		* @param oIsLocked
		* The status of the Operation's tool path:
		*	FALSE : MO is UNlocked and TP is NOT editable
		*	TRUE : MO is locked and TP is editable with Teach
		*/

		virtual HRESULT IsMOLocked (boolean & oIsLocked) = 0;

		// No constructors or destructors on this pure virtual base class
		// --------------------------------------------------------------
};
CATDeclareHandler( CATIMfgActivityMTSEdition, CATBaseUnknown);
#endif
