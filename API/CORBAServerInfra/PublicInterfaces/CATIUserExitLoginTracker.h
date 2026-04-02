
#ifndef CATIUserExitLoginTracker_H 
#define CATIUserExitLoginTracker_H

// COPYRIGHT DASSAULT SYSTEMES 2015

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */
 
#include "IUnknown.h"
#include "GW0EXIT.h"


extern "C" const IID IID_CATIUserExitLoginTracker;

class CATUnicodeString;

/**
 *  Interface to track user login attempt.
 *  <b>Role</b>: This interface is a user exit interface. The methods from this
 *  interface  will be triggered during the login process on failed/successful 
 *  attempts
 *  <br>You should implement it on the <tt>CATUserExitLoginTracker</tt> component by
 *  creating a data extension.
**/

class ExportedByGW0EXIT CATIUserExitLoginTracker : public IUnknown
{
public:

    /**
     * Additionnal information to indicate the type of error during the ENOVIA login
     * process.
     * <br><b>Role</b>: This will be used as an input parameter in 
     * @href #UETrackUserAuthentication, @href #UETrackUserLogin and 
     * @href #UEBuildLoginMessage methods.
     *
     * @param ENOVLoginError_NoError
     *   No error during the login process
     * @param ENOVLoginError_RootUser
     *   Login attempt is with root user
     * @param ENOVLoginError_UserBlocked
     *   User is blocked from login because of number of invalid attempts
     * @param ENOVLoginError_UserUnrecognized
     *   User is not a system recognized user id
     * @param ENOVLoginError_IncorrectPassword
     *   Input password is incorrect
     * @param ENOVLoginError_PasswordExpired
     *   Password is an expired one and login is not allowed
     * @param ENOVLoginError_FileSystemFull
     *   File system is full and VDO0OrbServer process can't be launched
     * @param ENOVLoginError_NotPnOUser
     *   User is not defined in the P&O
     * @param ENOVLoginError_NoPnORole
     *   User does not have any role assigned in the P&O
     * @param ENOVLoginError_NoLoginPrivilege
     *   User does not have any role which has the login to ENOVIA privilege
     */
    enum ENOVLoginError
    {
        ENOVLoginError_NoError,
        ENOVLoginError_RootUser,
        ENOVLoginError_UserBlocked,
        ENOVLoginError_UserUnrecognized,
        ENOVLoginError_IncorrectPassword,
        ENOVLoginError_PasswordExpired,
        ENOVLoginError_FileSystemFull,
        ENOVLoginError_NotPnOUser,
        ENOVLoginError_NoPnORole,
        ENOVLoginError_NoLoginPrivilege
    };

    /**
     * User exit method to track the authentication of the user attempting to login
     * <br><b>Role</b> : This method will be triggered on a successful or failed
     * authentication of the user trying to login. 
     * @param iUserID
     *   the user id used for login
     * @param err_code
     *   error code to indicate the type of failure of user authentication 
     *   (@href ENOVLoginError)
     *   When the method is triggered on a successful user authentication, this input 
     *   value will be ENOVLoginError_NoError. In case of a failed user 
     *   authentication, this input value will indicate the relevant reason
     */
    virtual void UETrackUserAuthentication( const CATUnicodeString & iUserID, 
        ENOVLoginError err_code ) = 0;

    /**
     * User exit method to track the login attempt of the user while fetching and 
     * applying roles
     * <br><b>Role</b> : This method will be triggered in two cases - 1.) When there 
     * are no roles available for the user trying to login (failed attempt to get 
     * roles applicable for this user) 2.) At the end of applying the role (successful 
     * or failed attempt) being requested for the user login
     * @param iUserID
     *   the user id used for login
     * @param iUserRole
     *   the P&O role to be applied for the user
     *   This input parameter will be an empty string in case the method is triggered 
     *   on failure while trying to fetch the applicable roles for the user
     * @param err_code
     *   error code to indicate the type of failure in the login process 
     *   (@href ENOVLoginError)
     *   When the method is triggered on a successful login attempt, this input value 
     *   will be ENOVLoginError_NoError. In case of a failed login attempt, this input 
     *   value will indicate the relevant reason
     */
    virtual void UETrackUserLogin( const CATUnicodeString & iUserID, 
        const CATUnicodeString & iUserRole, 
        ENOVLoginError err_code ) = 0;

    /**
     * User exit method to allow building a message to be displayed to the user on a 
     * failed/successful login attempt
     * <br><b>Role</b> : This method will be triggered at the end of the entire login 
     * process when the role requested by the user is applied. This method will be 
     * triggered in both cases of success and failure. The purpose of the method is to 
     * allow the user to build a custom message that will be displayed on the client 
     * at the end of the login process.
     * @param iUserID
     *   the user id used for login
     * @param iUserRole
     *   the P&O role to be applied for the user
     *   This input parameter will be an empty string in case the method is triggered 
     *   on failure while trying to fetch the applicable roles for the user
     * @param err_code
     *   error code to indicate the type of failure in the login process 
     *   (@href ENOVLoginError)
     *   When the method is triggered on a successful login attempt, this input value 
     *   will be ENOVLoginError_NoError. In case of a failed login attempt, this input 
     *   value will indicate the relevant reason
     * @param oOutMessage
     *   Message string that needs to be displayed at the end of the login attempt 
     */
    virtual void UEBuildLoginMessage( const CATUnicodeString & iUserID, 
        const CATUnicodeString & iUserRole, 
        ENOVLoginError err_code,
        CATUnicodeString & oOutMessage) = 0;

};

#endif
