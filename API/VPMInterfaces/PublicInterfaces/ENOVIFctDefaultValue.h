//ENOVIFctDefaultValue
// COPYRIGHT DASSAULT SYSTEMES 1999
//=============================================================================
//
// VPMSecurity:
//   VPM Security Header for Programmers
//
//=============================================================================
// Usage Notes:
//
//=============================================================================
// May 99   Creation                                   J.Poitreau
//=============================================================================
//
#ifndef ENOVIFctDefaultValue_H_
#define ENOVIFctDefaultValue_H_

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

#include "CATBaseUnknown.h"
#include "GUIDVPMInterfaces.h"
#include "CATUnicodeString.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_ENOVIFctDefaultValue ;
#else
extern "C" const IID IID_ENOVIFctDefaultValue ;
#endif

/**
 * Interface to be implemented by a client who wants to customize mask attributes.
 * <br><b>Role</b>: This interface is used to define mask attributes functions
 * returning a default value for an attribute.
 * <br>The implementation code must be defined as an extension of:
 * ENOVFctDefVal_xxx , where xxx is the name of the function.
 * @see ENOVIFctAuthorizedValues
 **/
class ExportedByGUIDVPMInterfaces ENOVIFctDefaultValue : public CATBaseUnknown
{
    CATDeclareInterface;
public:
    /**
     *  Returns a default value for the attribute.
     *  @param  oDefaultValues
     *     the default value
     **/
    virtual HRESULT getValue(CATUnicodeString &oDefaultValue) = 0;
};


CATDeclareHandler(ENOVIFctDefaultValue,CATBaseUnknown);


#endif // ENOVIFctDefaultValue_H_
