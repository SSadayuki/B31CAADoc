// COPYRIGHT Dassault Systemes 2003
//===================================================================
#ifndef CATIMfgActivityMultiSpindle_H
#define CATIMfgActivityMultiSpindle_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

// Export
#include "MfgItfEnv.h"

#include "CATBaseUnknown.h"
#include "CATBooleanDef.h"

class CATDialog;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgActivityMultiSpindle;
#else
extern "C" const IID IID_CATIMfgActivityMultiSpindle ;
#endif

//------------------------------------------------------------------

/**
* This interface aims at managing the spindle assignation on activities
*/
class ExportedByMfgItfEnv CATIMfgActivityMultiSpindle: public CATBaseUnknown
{
	CATDeclareInterface;

public:

	/**
	* Checks whether the machine supports several spindles.
	*   @return
	* TRUE in case the machine support several spindles
	* FALSE otherwise
	*/
	virtual boolean IsInContextMultiSpindles()=0;

	/**
	* Unset the spindle form the ativity.
	*/
	virtual HRESULT RemoveSpindle()=0;

	/**
	* Set the specified spindle to the ativity.
	*  @param ihSpindleBU
	*   The spindle to set on the activity
	*/
	virtual HRESULT SetSpindle(const CATBaseUnknown_var & ihSpindleBU )=0;

	/**
	* Return the spindle set on the ativity.
	*  @param ohSpindleBU
	*   The spindle set on the activity
	*/
	virtual HRESULT	GetSpindle (CATBaseUnknown_var & ohSpindleBU )=0;

	/**
	* Insert Spindle chooser.
	* @returns S_FALSE, if the context is not multi-turret
	*/
	virtual HRESULT InsertSpindleChooser( CATDialog * ipFather,
		int iHorizontalPos,
		int iVerticalPos,
		boolean iEditableStatus = TRUE ) = 0;


	// No constructors or destructors on this pure virtual base class
	// --------------------------------------------------------------
};

//------------------------------------------------------------------

CATDeclareHandler(CATIMfgActivityMultiSpindle, CATBaseUnknown) ;
#endif
