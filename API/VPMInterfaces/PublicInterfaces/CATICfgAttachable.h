//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================
#ifndef CATICfgAttachable_h_
#define CATICfgAttachable_h_


/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// =================================================================
// Includes
// =================================================================

//System
#include "CATBaseUnknown.h"
//Interface ID
#include "GUIDVPMInterfaces.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATICfgAttachable;
#else
extern "C" const IID IID_CATICfgAttachable;
#endif

#include "CATListOfCATIConfigurable.h"
#include "CATListOfCATILinkableObject.h"


//-----------------------------------------------
class ExportedByGUIDVPMInterfaces CATICfgAttachable : public CATBaseUnknown 
{
   CATDeclareInterface;

   public:

   /**
     * Return the list of  Attached Configurable
   */
   virtual HRESULT QueryAttachedCfgable(CATListOfCATIConfigurable_var &oListCfgable) const = 0;

   /**
     * @nodoc
   */
   virtual HRESULT QueryAttachedObject(CATListOfCATILinkableObject &oListObj) const = 0;
    
};

CATDeclareHandler(CATICfgAttachable, CATBaseUnknown);

#endif
