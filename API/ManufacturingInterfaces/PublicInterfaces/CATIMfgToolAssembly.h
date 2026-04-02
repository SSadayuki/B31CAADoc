#ifndef CATIMfgToolAssembly_H
#define CATIMfgToolAssembly_H

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
extern IID ExportedByMfgItfEnv IID_CATIMfgToolAssembly ;
#else
extern "C" const IID IID_CATIMfgToolAssembly ;
#endif

/**
 * Interface dedicated to Tool Assembly objects management.
 * <b>Role</b>: This interface offers services to manage mainly the associated tool and insert.<br>
 * Common attributes are declared in CATMfgToolAssemblyConstant.<br>
 *
 * @see CATIMfgResource
 * @see CATIMfgTool
 * @see CATIMfgInsert
 */
class ExportedByMfgItfEnv CATIMfgToolAssembly : public CATIMfgResource
{
    CATDeclareInterface;

public:
    
    /**
    * Associates the tool with the tool assembly.
    * @param iTool
    *     The tool
    */
    virtual HRESULT SetTool(const CATBaseUnknown_var& iTool) = 0;

    /**
    * Returns the tool associated with the tool assembly.
    * @param oTool
    *     The tool
    */
    virtual HRESULT GetTool(CATBaseUnknown_var& oTool) = 0;

    /**
    * Removes the tool associated with this tool assembly.
    */
    virtual HRESULT RemoveTool() = 0;
    
    /**
    * Associates the insert with the tool assembly.
    * @param iInsert
    *     The insert
    */
    virtual HRESULT SetInsert(const CATBaseUnknown_var& iInsert) = 0;

    /**
    * Returns the insert associated with the tool assembly.
    * @param oInsert
    *     The insert
    */
    virtual HRESULT GetInsert(CATBaseUnknown_var& oInsert) = 0;

    /**
    * Removes the insert associated with this tool assembly.
    */
    virtual HRESULT RemoveInsert() = 0;
    
    /**
    * @nodoc 
    * Returns a boolean: if TRUE, it means that the Tool Assembly is editable for the given Activity
    *                    if FALSE, the Tool Assembly can not be modified on this entity
    * @param iActivity
    *     The activity for which you want to know the edit capability of the tool assembly
    */
    virtual CATBoolean GetEditableStatus(const CATBaseUnknown_var& iActivity) = 0;

	/**
    * @nodoc 
	* Returns a boolean: if TRUE, it means that current machine is a lathe multi turret machine
	*                    if FALSE no turret number management on this entity
	*  GetLatheMultiTurretContext
	*  Enable the management of turret number on assembly in multi-turret or multi-spindle context
	*/
	virtual CATBoolean GetLatheMultiTurretContext() = 0;

};

CATDeclareHandler(CATIMfgToolAssembly, CATIMfgResource);
#endif
