// -*-C++-*-

#ifndef CATIAVPMIIProductSpec_h
#define CATIAVPMIIProductSpec_h

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// =================================================================
// Includes
// =================================================================
// System
#include "CATBaseUnknown.h"
#include "GUIDVPMInterfaces.h"
#include "CATIAVPMObject.h"
#include "CATCORBABoolean.h"
#include "CATLISTV_CATBaseUnknown.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIAVPMIIProductSpec;
#else
extern "C" const IID IID_CATIAVPMIIProductSpec;
#endif

//------------------------------------------------------------------
/**
 * Interface to retrieve ProductSpecs that qualify an item instance.
 * <b>Role</b>: The CATIAVPMIIProductSpec enables you to:
 * <ul>
 *   <li>Retrieves the ProductSpecifications for which an IIs effectivity is true</li>
 *   <li>This interface is implemented on the ItemInstance entity</li>
 * </ul>

 */

class ExportedByGUIDVPMInterfaces CATIAVPMIIProductSpec : public CATBaseUnknown //CATIAVPMObject
{
    CATDeclareInterface;

    public:
    //
    // =======================================================
    // Method(s) 
    // =======================================================

    /**
      * Retrieve the ProductSpecifications under which this ItemInstance is true.
      * @param olistPS
      *   List of ProductSpecifications
      *   @return S_OK in case of success,
      *           E_FAIL in case of error.
    */
    virtual HRESULT get_PSTrueForII(CATLISTV(CATBaseUnknown_var) & olistPS)=0;
};
//-----------------------------------------------------------------
// Handler definition
//-----------------------------------------------------------------
CATDeclareHandler(CATIAVPMIIProductSpec, CATBaseUnknown);

#endif

