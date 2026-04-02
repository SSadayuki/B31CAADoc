// COPYRIGHT Dassault Systemes 2009

/**
* @CAA2Level L1
* @CAA2Usage U1
*/

//===================================================================
//
// CATIGSMUseMultiSelType.h
// Define the CATIGSMUseMultiSelType interface
//
//==============================================================================
#ifndef CATIGSMUseMultiSelType_H
#define CATIGSMUseMultiSelType_H

#include "CATGSMUseItfExportedBy.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID IID_CATIGSMUseMultiSelType;
#else
extern "C" const IID IID_CATIGSMUseMultiSelType;
#endif

/**
* Interface to MultiSel feature. 
* <b>Role</b>: Allows you to recognize a MultiSel feature by the query interface
* @see CATIGSMUseMultiSelAccess, CATIGSMUseMultiSelManager
*/

class ExportedByCATGSMUseItf CATIGSMUseMultiSelType: public CATBaseUnknown
{
	CATDeclareInterface;

public: 

};
CATDeclareHandler (CATIGSMUseMultiSelType, CATBaseUnknown);

#endif
