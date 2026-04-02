// COPYRIGHT DASSAULT SYSTEMES 2003
//===================================================================
//
// CATIPDMUEOnCancel..h
// This interface lets user exit participates the saving process, being called at precise point of this process
// The user exit should be of late type CATUEPDMSaveProcess and implement the current interface
// It could use the passed in argument of type CATIPDMSaveInfo to enquire information about the save context
// And communicate relevant action to the save process by the argument of type  CATIPDMSaveAction.
// All user-exits, called durrng save process (like "OnOK","BeforeSaveDialog"...etc) are available with
// interface "CATIPDMUESaveProcess". Since this interface can not be modified durring SPs new interface "CATIPDMUEOnCancel" is added
// to support new User-Exit "OnCancel"
//===================================================================
//
//===================================================================
//  Dec-08   Creation: VPW
//===================================================================

/**
* @CAA2Level L1
* @CAA2Usage U5
*/

#ifndef CATIPDMUEOnCancel_H
#define CATIPDMUEOnCancel_H

#include "CATPDMBaseItfCPP.h"
#include "CATBaseUnknown.h"
#include "sequence_octet.h"
#include "CATDocument.h"
class CATUnicodeString;
class CATIPDMSaveInfo;
class CATIPDMSaveAction;


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATPDMBaseItfCPP IID IID_CATIPDMUEOnCancel;
#else
extern "C" const IID IID_CATIPDMUEOnCancel ;
#endif

class ExportedByCATPDMBaseItfCPP CATIPDMUEOnCancel: public CATBaseUnknown
{
  CATDeclareInterface;

  public:   
	/** 
	* Method to implement user-exit on Canceling  “Save in ENOVIA” command.
	*
	* <br><b>Role</b>: When implemented, this method will be called when user clicks “Cancel” in the “Save in ENOVIA” command panel.
	*<p>
	* @param iDocsToSave
	*    (input) The list of documents involved in the Save process.
	* @param ipInfo
	*    (input) The list of information related to the documents given in first parameter.
	** @param ipAction
	*    (input) The list of actions related to the documents given in first parameter.
	*
	* @return 
	*   <ul>
	*     <li><tt>E_FAIL</tt>: Function has failed,).</li>
	*     <li><tt>Otherwise</tt>: Function is considered successfull.</li> 
	*  </ul>
	*/
	virtual HRESULT OnCancel(CATLISTP(CATDocument)* iDocsToSave, CATIPDMSaveInfo *ipInfo, CATIPDMSaveAction *ipAction) = 0;
  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};

//------------------------------------------------------------------
CATDeclareHandler( CATIPDMUEOnCancel, CATBaseUnknown );

#endif
