//===================================================================
// COPYRIGHT DASSAULT SYSTEMES 2015
//===================================================================
/**
  * @CAA2Level L1
  * @CAA2Usage U5
  */

// CATIPDMSaveUERevisionVersion.cpp
// Header definition of class CATIPDMSaveUERevisionVersion
//===================================================================
//
// Usage notes: This UserExit is called when user selects
// the option 'Revision/Version All' in VPMNav save panel.
// It will allow user to filter out some documents and 
// their corresponding Part references from the 'Revision/Version All'
// command.
//
//===================================================================
#ifndef CATIPDMSaveUERevisionVersion_H
#define CATIPDMSaveUERevisionVersion_H

#include "CATPDMBaseItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATDocument.h"
#include "CATListOfInt.h"

class CATIPDMSaveInfo;
class CATIPDMSaveAction;


extern ExportedByCATPDMBaseItfCPP  IID IID_CATIPDMSaveUERevisionVersion ;


class ExportedByCATPDMBaseItfCPP CATIPDMSaveUERevisionVersion: public CATBaseUnknown
{
CATDeclareInterface;

public:

   /** Call to the User exit after selecting 'Revision/Version All' option in Save panel.
   *
   * @param iDocsToRevisionAll: List of documents that are being saved
   *
   * @param ipInfo:   Interface pointer to let the user exit acess information about the saving context.
   *                  Refer to the intf definition for available info
   *
   * @param ipAction: Interface pointer to let the user exit influence the save process
   *                  Refer to the intf definition for available action
   * 
   * @param oDocsToRevision: List of Integers indicating whether to revision or not the document and its 
   *                         corresponding part reference. 
   *                         Total number of elements of list should be equal to number of elements in iDocsToRevisionAll.
   *                         Each element can have only one of the two values:
   *                         0 : The document and its corressponding part reference will not be revisioned.
   *                         1 : The document should be revisioned and its corressponding part reference should be versioned.
   * 
   * @return
   *    S_OK:   Success returned from the User exit implementation.
   *    E_FAIL: Failure returned from the User exit implementation.
   */
   virtual HRESULT OnRevisionVersionAll( const CATLISTP(CATDocument) *iDocsToRevisionAll, CATIPDMSaveInfo *ipInfo, CATIPDMSaveAction *ipAction, CATListOfInt & oDocsToRevision) = 0;
   

   
};

//-----------------------------------------------------------------------
CATDeclareHandler( CATIPDMSaveUERevisionVersion, CATBaseUnknown );

#endif
