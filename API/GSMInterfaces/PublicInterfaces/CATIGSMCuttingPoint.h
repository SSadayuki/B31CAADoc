/* -*-c++-*- */
#ifndef CATIGSMCuttingPoint_H
#define CATIGSMCuttingPoint_H

// COPYRIGHT DASSAULT SYSTEMES 2007

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "CATGitInterfacesExportedBy.h"
#include "CATBaseUnknown.h"
#include "CATGSMSweepDef.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID  IID_CATIGSMCuttingPoint;
#else
extern "C" const IID IID_CATIGSMCuttingPoint;
#endif
/**
* Interface to cutting point feature.
* <b>Role</b>: Allows to access data of the cutting point feature used to manage twisted areas in sweep feature.
*/
class ExportedByCATGitInterfaces CATIGSMCuttingPoint : public CATBaseUnknown
{
	CATDeclareInterface;
public: 

	/**
	* Gets the fill twisted areas mode.
	*   @param oMode
	*		Fill mode.
	* @see CATGSMSweepFillMode
	*/
	virtual HRESULT GetFillMode(CATGSMSweepFillMode &oMode) = 0;

	/**
	* Sets the fill twisted areas mode.
	*   @param iMode
	*		Fill mode.
	* @see CATGSMSweepFillMode
	*/
	virtual HRESULT SetFillMode(const CATGSMSweepFillMode iMode) = 0;
};
CATDeclareHandler (CATIGSMCuttingPoint, CATBaseUnknown);
#endif
