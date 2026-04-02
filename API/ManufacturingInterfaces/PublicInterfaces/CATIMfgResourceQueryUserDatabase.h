#ifndef CATIMfgResourceQueryUserDatabase_H
#define CATIMfgResourceQueryUserDatabase_H

//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2000
//=============================================================================

/**
* @CAA2Level L1
* @CAA2Usage U5
*/

// module
#include "MfgItfEnv.h"

// inheritance
#include "CATIMfgResourceQuery.h"

// OLE iid
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgResourceQueryUserDatabase;
#else
extern "C" const IID IID_CATIMfgResourceQueryUserDatabase;
#endif

/**   
 * Interface dedicated to resource query management on user database.
 */
class ExportedByMfgItfEnv CATIMfgResourceQueryUserDatabase : public CATIMfgResourceQuery
{
  CATDeclareInterface ;
  public:
};

CATDeclareHandler(CATIMfgResourceQueryUserDatabase, CATBaseUnknown);
#endif
