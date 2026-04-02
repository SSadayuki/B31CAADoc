#ifndef CATITPSTextContent_H
#define CATITPSTextContent_H

// COPYRIGHT DASSAULT SYSTEMES 2009

/**
 * @CAA2Level L0
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATTPSItfCPP.h"

class CATUnicodeString;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATTPSItfCPP IID IID_CATITPSTextContent;
#else
extern "C" const IID IID_CATITPSTextContent;
#endif

/**
 * Interface for 3D annotation edited as string.
 */
class ExportedByCATTPSItfCPP CATITPSTextContent : public CATBaseUnknown
{
  public:
    CATDeclareInterface;

    /**
    * Gets a global unicode string dedicated to provide list of internal
    * texts of one annotation.
    *   @param oValidationString
    *     Output string.
    */
    virtual HRESULT GetValidationString (CATUnicodeString &oValidationString) = 0;

};

#endif
