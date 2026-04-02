//ENOVIFctAuthorizedValues
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
#ifndef ENOVIFctAuthorizedValues_H_
#define ENOVIFctAuthorizedValues_H_

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

#include "CATBaseUnknown.h"
#include "GUIDVPMInterfaces.h"
#include "CATListOfCATUnicodeString.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_ENOVIFctAuthorizedValues ;
#else
extern "C" const IID IID_ENOVIFctAuthorizedValues ;
#endif

/**
 * Interface to be implemented by a client who wants to customize mask attributes.
 * <br><b>Role</b>: This interface is used to define mask attributes functions
 * returning an authorized values list for an attribute.
 * <br>The implementation code must be defined as an extension of:
 * ENOVFctAuthVal_xxx , where xxx is the name of the function.
 * @see ENOVIFctDefaultValue
 **/
class ExportedByGUIDVPMInterfaces ENOVIFctAuthorizedValues : public CATBaseUnknown
{
    CATDeclareInterface;
public:
    /**
     *  Returns a list of authorized values for the attribute.
     *  @param  oAuthorizedValues
     *     the list of values
     */
    virtual HRESULT getValues(CATListOfCATUnicodeString &oAuthorizedValues) = 0;

};


CATDeclareHandler(ENOVIFctAuthorizedValues,CATBaseUnknown);


#endif // ENOVIFctAuthorizedValues_H_
