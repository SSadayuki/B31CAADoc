#ifndef _VPMSecurityUE_H_
#define _VPMSecurityUE_H_
// COPYRIGHT DASSAULT SYSTEMES 1999
//=============================================================================
//
// VPMSecurityUE:
//   VPM Security Header for UNSECURED User-Exit Programmers
//
//=============================================================================
// Jul 00   Creation                                   JPA
//=============================================================================
/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "VPMSecurity.h"

/**
 * VPM Security Macros for Unsecured User-Exit Programming purpose.
 *
 * <p><b>Role:</b> Desactivates all potential security checks done
 * in called secured methods.
 *
 * <p><b>Usage:</b>
 * <table bgcolor=#fefedf><tr>
 * <td><tt><pre>myUserExitClass::myUserExitMethod(...)
 * {
 *     VPMUnsecuredUserExit;
 *     ...
 * }</pre></tt></tr></table>
**/

#define VPMUnsecuredUserExit \
VPMSCControl __varUUE_((const char*)NULL,(const char*)NULL,NULL)

#endif



