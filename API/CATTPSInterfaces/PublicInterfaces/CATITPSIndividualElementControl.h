#ifndef CATITPSIndividualElementControl_H
#define CATITPSIndividualElementControl_H

// COPYRIGHT DASSAULT SYSTEMES 2012

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATTPSItfCPP.h"
#include "CATTPSIndividualElementControl.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATTPSItfCPP IID IID_CATITPSIndividualElementControl;
#else
extern "C" const IID IID_CATITPSIndividualElementControl ;
#endif

/**
 * This interface is implemented by CATTPSToleranceWithDRF feature.
 * Interface to manage Individual Element Control.
 * <b>Role</b>: Tolerance zones apply to the full extent of the feature, unless otherwise indicated. 
 * Where it is a requirement to control only individual line elements of a surface, a qualifying 
 * notation, such as "EACH ELEMENT" or "EACH RADIAL ELEMENT", is added to the annotation. This 
 * permits control of individual elements of the surface independently in relation to the datum and 
 * does not limit the total surface to an encompassing zone..
 */

class ExportedByCATTPSItfCPP CATITPSIndividualElementControl : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
     * Sets the control of individual elements of the surface.
     *  @param iValue
     *   Individual Element Control.
     *  returns S_OK when the value has been correctly set, 
     *  returns E_FAIL otherwise.
     */
    virtual HRESULT SetControl (
                              const CATTPSIndividualElementControl iValue) = 0;

    /**
     * Retrieves the control of individual elements of the surface.
     *  @param oValue
     *   Individual Element Control.
     *  returns S_OK when the value has been correctly retrieved, 
     *  returns E_FAIL otherwise.
     */
    virtual HRESULT GetControl (
                            CATTPSIndividualElementControl& oValue) const = 0; 
};

CATDeclareHandler (CATITPSIndividualElementControl, CATBaseUnknown);

#endif
