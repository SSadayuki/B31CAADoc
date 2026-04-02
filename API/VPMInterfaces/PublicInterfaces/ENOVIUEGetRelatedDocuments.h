//
// COPYRIGHT DASSAULT SYSTEMES 2007
//------------------------------------------------------------------------------
// Interface  : ENOVIUEGetRelatedDocuments 
// Author     : 
// Date       : 
//------------------------------------------------------------------------------
#ifndef ENOVIUEGetRelatedDocuments_H
#define ENOVIUEGetRelatedDocuments_H

/**
 *      @CAA2Level L0
 *      @CAA2Usage U5
 */

#include "CATBaseUnknown.h"
#include "GUIDVPMInterfaces.h"
#include "CATLISTV_CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_ENOVIUEGetRelatedDocuments;
#else
extern "C" const IID IID_ENOVIUEGetRelatedDocuments ;
#endif


/**
* Interface to execute user-exit code allowing to filter out WP constituent documents 
*
* <br><b>Role:</b>Enable customers to filter out the list of the documents to be cloned from a WP
* <br>
* The list of documents to be filtered out are those which are related to the root WP thru doc-doc links.
*
**/
class ExportedByGUIDVPMInterfaces ENOVIUEGetRelatedDocuments : public CATBaseUnknown
{

    CATDeclareInterface;

    public:
// No constructors or destructors on this pure virtual base class
// --------------------------------------------------------------

/**
* Enable to filter out a list a documents given as input.
*
*  @param iListInObjs
*    (input) The initial list of objects computed from the WP and from which sub-set is to be selected.
*
*  @param oListOutObjs
*    (output) The result list of selected objects.
*
* @return 
*   <ul>
*     <li><tt>S_OK</tt>: Function executed successfully</li> 
*     <li><tt>E_FAIL</tt>: Error occurred during execution failed</li>
*  </ul>
*/

virtual HRESULT Select(const CATLISTV(CATBaseUnknown_var)& iListInObs, CATLISTV(CATBaseUnknown_var)& iListOutObs)=0;
};
//-----------------------------------------------------------------
// Handler definition
//-----------------------------------------------------------------
//CATDeclareHandler(ENOVIUEGetRelatedDocuments, CATBaseUnknown);
//
#endif
