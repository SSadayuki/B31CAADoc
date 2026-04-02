
#ifdef _WINDOWS_SOURCE
#ifdef __CATPspUtilities
/** @nodoc */
#define ExportedByCATPspUtilities  __declspec(dllexport)
#else
/** @nodoc */
#define ExportedByCATPspUtilities __declspec(dllimport)
#endif
#else
/** @nodoc */
#define ExportedByCATPspUtilities
#endif
// COPYRIGHT DASSAULT SYSTEMES  2002+ 
/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

/**
 * Services to query Plant Ship data.
 * <b>Role</b>: To query application and domain information.
 */

#ifndef CATPspServices_H
#define CATPspServices_H


#include "CATICStringList.h"

//-----------------------------------------------------------------------------
class ExportedByCATPspUtilities CATPspServices
{
  public:

  /**
  * List all known application names.
  * @param oListOfApplNames [out, IUnknown#Release]
  *   List of application names.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  static HRESULT ListAllApplicationNames ( CATICStringList **oListOfApplNames );
  
  /**
  * List all known domain names.
  * @param oListOfDomainNames [out, IUnknown#Release]
  *   List of domain names.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  static HRESULT ListAllDomainNames ( CATICStringList **oListOfDomainNames );

};
#endif
