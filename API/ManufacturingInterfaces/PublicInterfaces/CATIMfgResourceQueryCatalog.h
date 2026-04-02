#ifndef CATIMfgResourceQueryCatalog_H
#define CATIMfgResourceQueryCatalog_H

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
extern ExportedByMfgItfEnv IID IID_CATIMfgResourceQueryCatalog;
#else
extern "C" const IID IID_CATIMfgResourceQueryCatalog;
#endif

/**   
 * Interface dedicated to Resource Query management on V5 Catalogs.
 * @see CATIMfgResourceQuery
 */
class ExportedByMfgItfEnv CATIMfgResourceQueryCatalog : public CATIMfgResourceQuery
{
  CATDeclareInterface ;  

  public:

};

CATDeclareHandler(CATIMfgResourceQueryCatalog, CATBaseUnknown);
#endif
