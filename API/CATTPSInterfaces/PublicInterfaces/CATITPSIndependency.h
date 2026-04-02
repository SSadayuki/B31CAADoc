#ifndef CATITPSIndependency_H
#define CATITPSIndependency_H

// COPYRIGHT DASSAULT SYSTEMES 2012

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATTPSItfCPP.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATTPSItfCPP IID IID_CATITPSIndependency;
#else
extern "C" const IID IID_CATITPSIndependency ;
#endif

/**
 * This interface is implemented by CATTPSDimension feature.
 * Interface to manage Independency symbol.
 * <b>Role</b>: This symbol indicates that perfect form of a feature of size at MMC is not required. 
 * It shall be placed next to the appropriate dimension or text.
 */

class ExportedByCATTPSItfCPP CATITPSIndependency : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
     * Sets Independency symbol.
     *  @param iValue
     *   Independency.
     *  returns S_OK when the value has been correctly set, 
     *  returns E_FAIL otherwise.
     */
    virtual HRESULT SetIndependency (const CATBoolean iValue) = 0;

    /**
     * Retrieves Independency symbol.
     *  @param oValue
     *   Independency.
     *  returns S_OK when the value has been correctly retrieved, 
     *  returns E_FAIL otherwise.
     */
    virtual HRESULT GetIndependency (CATBoolean& oValue) const = 0;  

};

CATDeclareHandler (CATITPSIndependency, CATBaseUnknown);

#endif
