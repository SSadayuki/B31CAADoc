#ifndef CATITPSReciprocity_H
#define CATITPSReciprocity_H

// COPYRIGHT DASSAULT SYSTEMES 2012

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATTPSItfCPP.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATTPSItfCPP IID IID_CATITPSReciprocity;
#else
extern "C" const IID IID_CATITPSReciprocity ;
#endif

/**
 * This interface is implemented by CATTPSToleranceWithDRF and CATTPSToleranceWithoutDRF features.
 * Interface to Reciprocity symbol.
 * <b>Role</b>: The Reciprocity symbol is placed just after M or L modifiers of the tolerance zone to modify the 
 * requirement on maximum material or least material. It's applicable only to the toleranced element, 
 * but not applicable to DRF.
 */

class ExportedByCATTPSItfCPP CATITPSReciprocity : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
     * Sets Reciprocity.
     *  @param iValue
     *   Reciprocity.
     *  returns S_OK when the value has been correctly set, 
     *  returns E_FAIL otherwise.
     */
    virtual HRESULT SetReciprocity (const CATBoolean iValue) = 0;

    /**
     * Retrieves Reciprocity.
     *  @param oValue
     *   Reciprocity.
     *  returns S_OK when the value has been correctly retrieved, 
     *  returns E_FAIL otherwise.
     */
    virtual HRESULT GetReciprocity (CATBoolean& oValue) const = 0;  

};

CATDeclareHandler (CATITPSReciprocity, CATBaseUnknown);

#endif
