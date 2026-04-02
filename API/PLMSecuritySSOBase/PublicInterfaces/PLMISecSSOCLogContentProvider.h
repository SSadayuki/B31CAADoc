/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

// COPYRIGHT Dassault Systemes 2004

#ifndef PLMISecSSOCLogContentProvider_H
#define PLMISecSSOCLogContentProvider_H

#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"


#ifdef  _WINDOWS_SOURCE
#ifdef  __PLMSecSSOBaseCpp
#define ExportedByPLMSecSSOBaseCpp     __declspec(dllexport)
#else
#define ExportedByPLMSecSSOBaseCpp     __declspec(dllimport)
#endif
#else
#define ExportedByPLMSecSSOBaseCpp
#endif

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPLMSecSSOBaseCpp IID IID_PLMISecSSOCLogContentProvider;
#else
extern "C" const IID IID_PLMISecSSOCLogContentProvider ;
#endif

/**
 * This interface allows to customize
 * the content of the audit log on authentication events wihtin a c++ process.
 *
 * It must be reimplemented on the SSOCLogContentProvider late type as shown bellow:
 *
 * SSOCLogContentProvider	PLMISecSSOCLogContentProvider	libName
 *
 */

class ExportedByPLMSecSSOBaseCpp PLMISecSSOCLogContentProvider: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * Writes to the authentication audit log when autentication is successful.
 * <br>This method is called whenever an autentication has been performed succesfully.
 * @param iUsername
 *   The SSO username used to perform the authentication
 * @param oLogContent
 *   Authentication data to be logged
 * @return
 *   S_OK if the method succeeded,a nd E_FAIL otherwise
 */
     virtual HRESULT onAuthenticationSuccess(const CATUnicodeString&  iUsername, CATUnicodeString&  oLogContent )=0;

/**
 * Writes to the authentication audit log when autentication failed.
 * <br>This method is called whenever an autentication has failed.
 * @param iUsername
 *   The SSO username used to perform the authentication
 * @param oLogContent
 *   Authentication data to be logged
 * @return
 *   S_OK if the method succeeded,a nd E_FAIL otherwise
 */
    virtual HRESULT onAuthenticationFailure(const CATUnicodeString&  iUsername, CATUnicodeString&  oLogContent )=0;
};

//------------------------------------------------------------------

#endif
