#ifndef CATIMfgResourceQueryDocument_H
#define CATIMfgResourceQueryDocument_H

//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2000
//=============================================================================

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// module
#include "MfgItfEnv.h"

// inheritance
#include "CATIMfgResourceQuery.h"

// OLE iid
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgResourceQueryDocument;
#else
extern "C" const IID IID_CATIMfgResourceQueryDocument;
#endif

/**   
 * Interface dedicated to Resource Query management on V5 CATProcess documents.
 * @see CATIMfgResourceQuery
 */
class ExportedByMfgItfEnv CATIMfgResourceQueryDocument : public CATIMfgResourceQuery
{
  CATDeclareInterface;

  public:
  
    /**
     * Retrieves the handler of the corresponding entity.
     * @param iElem
     *     The object number 
     * @param ohResource
     *     The handler of the resource
     * @param iResourceType
     *     The type of the resource we want to retrieve
     */
    virtual HRESULT GetResource (const int                                  &iElem,
                                 CATBaseUnknown_var                         &ohBUResource,
                                 CATIMfgResourceQuery::MfgResourceQueryType  iResourceType=MfgCurrent)=0;
};
CATDeclareHandler(CATIMfgResourceQueryDocument, CATBaseUnknown);
#endif
