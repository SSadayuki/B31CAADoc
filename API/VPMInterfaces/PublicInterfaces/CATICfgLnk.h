#ifndef CATICfgLnk_h_
#define CATICfgLnk_h_

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

//System
#include "CATBaseUnknown.h"
//Interface ID
#include "GUIDVPMInterfaces.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATICfgLnk;
#else
extern "C" const IID IID_CATICfgLnk;
#endif

class CATIConfigurable_var;
class CATICfgAttachable_var;

//-----------------------------------------------
class ExportedByGUIDVPMInterfaces CATICfgLnk : public CATBaseUnknown 
{
    CATDeclareInterface;
    public:
    /**
     * Get the CATIConfigurable owning an attachment link.
     * @param &oCO
     *   CATIConfigurable owning the attachment link.
     */
    virtual HRESULT GetCO(CATIConfigurable_var &oCO) const = 0;

    /**
     * Get the CATICfgAttachable (Specification, Category, Program, Milestone ...) pointed by the CATICfgLnk
     *  @param iAttachable
     *    CATICfgAttachable pointed by this attachment link.
     */
    virtual HRESULT GetAttachable(CATICfgAttachable_var &oAttachable) const = 0;
};

CATDeclareHandler(CATICfgLnk, CATBaseUnknown);

#endif
