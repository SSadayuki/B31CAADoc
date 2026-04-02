#ifndef CATIMfgInsert_H
#define CATIMfgInsert_H

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
#include "CATIMfgResource.h"

// OLE iid
#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByMfgItfEnv IID_CATIMfgInsert ;
#else
extern "C" const IID IID_CATIMfgInsert ;
#endif

/**
 * Interface dedicated to Insert objects management.
 * <b>Role</b>: This interface offers services to manage mainly the Inserts parameters.<br>
 * Common attributes are declared in CATMfgInsertConstant.<br>
 *
 * @see CATIMfgResource
 */
class ExportedByMfgItfEnv CATIMfgInsert : public CATIMfgResource
{
    CATDeclareInterface;
    
public:
    
    /**
    * @nodoc 
    * Returns a boolean: if TRUE, it means that the Insert is editable for the given Activity
    *                    if FALSE, the Insert can not be modified on this entity
    * @param iActivity
    *     The activity for which you want to know the edit capability of the insert
    */
    virtual CATBoolean GetEditableStatus(const CATBaseUnknown_var& iActivity) = 0;
    
    /**
    * @nodoc 
    */
   	virtual HRESULT GetAuthorizedToolList(CATListOfCATUnicodeString& oToolTypeList) = 0;
    
};

CATDeclareHandler(CATIMfgInsert, CATIMfgResource);

#endif
