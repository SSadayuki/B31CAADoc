#ifndef CATIUExitServerAdmin_H 
#define CATIUExitServerAdmin_H

/* COPYRIGHT DASSAULT SYSTEMES 2000 */

#include "IUnknown.h"
#include "GW0EXIT.h"

#include <stdlib.h>

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */
 
extern "C" const IID IID_CATIUExitServerAdmin;

     
  /**
   *  Interface to retrieve user information.
   *  <b>Role</b>: This interface is a user exit. The server manager needs this
   *  information to run an applicative server for the user.
   *  <br>You should implement it on the <tt>CATUExitServerAdmin</tt> component by creating
   *  a data extension.
   *  @see CATIUExitServerSecurity
   **/


 class ExportedByGW0EXIT CATIUExitServerAdmin : public IUnknown
 {
   public:

    /**
     * Operating system attribute.
     * <br><b>Role</b>: Indicate the operating system on which the attribute 
     * is required.
     * @param CATSystemUnix
     *   Unix operating system.
     * @param CATSystemWindows
     *   Windows operating system.
     */
   enum CATSystem  { CATSystemUnix=1, CATSystemWindows=2 };
   

   /** @nodoc */
   #define CATAttributeUser   "User"
   

   /** @nodoc */ 
   #define CATAttributeDomain "Domain"

   /** @nodoc */ 
   #define CATAttributePassword "Password"
   
   /** @nodoc */ 
   #define CATAttributeServerCredential "ServerCredential"
   
   /** @nodoc */ 
   #define CATAttributeDistributedServerCredential "CredentialPropagated"

   /** @nodoc */ 
   #define CATAttributeRealName "RealName"
   
   /**
     * Additionnal information when the method getApplicationInfo fails.
     * <br><b>Role</b>: It is returned by penultimate argument of @href #getApplicationInfo
     * @param CATErrInvalidUser
     *   The input parameter <tt>iUser</tt> is invalid.
     * @param CATErrInvalidApplication
     *   The input parameter <tt>iApplication</tt> is invalid.
     * @param CATErrInvalidAttribute
     *   The input attribute <tt>iAttribute</tt> is invalid.
     * @param CATErrInvalidEnvironment
     *   Environment variables incorrectly set  
     * @param CATErrLDAPNotActive
     *   The LDAP environment is not active
     * @param CATErrOthers
     *   Otherwise
     */

   enum CATErr { CATErrInvalidUser ,
                 CATErrInvalidApplication,
                 CATErrLDAPNotActive,
                 CATErrInvalidAttribute,
                 CATErrInvalidEnvironment,
                 CATErrOthers };     

   /**
     * Retrieves information for a specified user and application. 
     * @param iUser
     *  The user name
     * @param  iApplication
     *  The application name
     * @param  iSystem
     *  The operating system
     * @param iAttribute
     *  The attribute scope
     *  <br><b>Legal values:</b>
	 *  <dl>
     *    <dt>CATAttributeUser     <dd>User attribute
     *    <dt>CATAttributePassword <dd>Password attribute
	 *    <dt>CATAttributeDomain   <dd>Domain attribute
	 *  </dl>
     * @param oValue
     *  The attribute retrieved value
     * @param  oReason
     *  Additional information when the return code is not S_OK
     * @param iUserCredential
     *  Credential that identifies the user
     * @return
     *  E_FAIL if the user, the application, or the attribute is unknown, and S_OK otherwise
     */

    virtual HRESULT getApplicationInfo ( const char *iUser, 
                                         const char *iApplication,
                                         CATSystem iSystem,
                                         const char *iAttribute,
                                         char **oValue ,
                                         CATErr *oReason,
                                         const char *iUserCredential = NULL )=0;
 };

#endif
