#ifndef CATIUExitServerSecurity_H 
#define CATIUExitServerSecurity_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */
 
#include "IUnknown.h"
#include "GW0EXIT.h"


extern "C" const IID IID_CATIUExitServerSecurity;

  /**
   *  Interface to manage the user security.
   *  <b>Role</b>: This interface is a user exit. The server manager needs to 
   *  authenticate the client and to control its access.
   *  <br>You should implement it on the <tt>CATUExitServerSecurity</tt> component by creating
   *  a data extension.
   *  @see CATIUExitServerAdmin
   **/


 class ExportedByGW0EXIT CATIUExitServerSecurity : public IUnknown
 {
   public:
  
   /**
     * Additionnal information when the methods fail.
     * <br><b>Role</b>: It is returned by the @href #authenticate, 
     * @href #check or @href #isAuthorised
     * methods.
     * @param CATErrInvalidUser
     *   The input parameter <tt>iUser</tt> is invalid
     * @param CATErrInvalidCredential
     *   The input parameter <tt>iCredentialClient</tt> is invalid
     * @param CATErrInvalidApplication
     *   The input parameter <tt>iApplication</tt> is invalid
     * @param CATErrInvalidEnvironment
     *   Environment variables incorrectly set.
     * @param CATWngCheckSystemUser
     *   The caller wants to do a system control
     * @param CATErrOthers
     *   Otherwise
     */

   enum CATErr { CATErrInvalidUser ,
                 CATErrInvalidCredential ,
                 CATErrInvalidApplication ,
                 CATErrInvalidEnvironment ,
                 CATWngCheckSystemUser ,
                 CATErrOthers };
                 
   /**
     * Authenticates a user.
     * <br><b>Role</b>: Retrieve the user credential.
     * @param iUser
     *  The user name 
     * @param oUserCredential
     *  Credential that identifies the user
     * @param  iUserPassword
     *  The user password
     * @param  oReason
     *  Additional information when the return code is not S_OK
     * @return
     *  E_FAIL if the user is not valid. In this case,
	 *  <tt>oUserCredential</tt> is NULL 
     */

    virtual HRESULT authenticate ( const char *iUser,
                                   char **oUserCredential,
                                   const char *iUserPassword,
                                   CATErr *oReason  )=0;

    /**
      * Check the user credential  
      * <br><b>Role</b>: Check the credential validity of the user. 
      * @param iUser 
      *  The user name
      * @param iUserCredential
      *  The user credential
      * @param  iInfo
      *  For future use. Currently set to null.
      * @param  oReason
      *  Additional information when the return code is not S_OK
      * @return
      *  E_FAIL if <tt>iUserCredential</tt> is not valid
      * 
      */

    virtual HRESULT check ( const char *iUser,
                            const char *iUserCredential,
                            const char *iInfo,
                            CATErr *oReason)=0;

    /**
      * Indicates whether a user is authorized to access the application specified.
      * @param iUserCredential
      *  The user credential
      * @param iApplication
      *  The application name
      * @param  oReason
      *   Additional information when the return code is not S_OK
      * @return
      *  S_OK if the user is authorized and E_FAIL/S_FALSE otherwise 
      */

    virtual HRESULT isAuthorised ( const char *iUserCredential,
                                   const char *iApplication,
                                   CATErr *oReason  )=0; 
 };



#endif
