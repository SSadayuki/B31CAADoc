// COPYRIGHT Dassault Systemes 2006
//===================================================================
//
// ICAASSOCClient.h
// Define the ICAASSOCClient interface
//
//===================================================================
/**
* @CAA2Level L1
* @CAA2Usage U1
*/

#ifndef PLMSSOCClient_H
#define PLMSSOCClient_H

#include "PLMSSOCAAClient.h"
#include "PLMSSOCredential.h"
#include "PLMSSOCredentialSet.h"
#include "CATUnicodeString.h"

/**
* <b>Role</b>:
* This interface enables a CAA application running within VPM Navigator
* to retrieve credentials when an SSO Authentication has been already 
* performed in VPM Navigator.
*/

class ExportedByPLMSSOCAAClient PLMSSOClient
{

  public:
	/**
	* the default Constructor.
	*/
	PLMSSOClient();

	/**
	* the destructor.
	*/
	~PLMSSOClient();


	/**
	* Test if the SSO runtime has been turned on.
	* @return 
	*	TRUE if SSO has been activated else return FALSE.
	*/
	HRESULT IsSSOActivated(CATBoolean &oIsActivated);


	/**
	* Test if the there have been an SSO authentication already.
	* @return 
	*	TRUE if yes FALSE otherwise.
	* @error CATResourceError PLMSSOClient_0003
	*	ERROR Impossible to retrieve internal SSOClient.
	*/
	HRESULT IsAlreadyAuthenticated(CATBoolean &oIsAuthenticated);

	/**
	 * Get the authenticated username.
	 * @param 
	 *	oUserName: the authenticated username.
	 * @return 
	 *	S_OK if successful return E_FAIL otherwise.
	 * @error CATResourceError PLMSSOClient_0003
	 *	ERROR Impossible to retrieve internal SSOClient.
	 * @error CATResourceError PLMSSOClient_0009
	 *	 ERROR while retrieving SSO User.
	 */
	HRESULT GetAuthenticatedUsername(CATUnicodeString& oUserName);

	 /**
	 * Retrieve all credentials for a given instance of a given application.
	 * for the authenticated user.
	 * @param iApplicationType
	 *		The name of the application you want to 
	 *		retrieve credentials for. this name must me the same as the one 
     *		used in the .CredentialSet file in $os/resources/credentials/ folder
	 *		it is name the of the attribute applicationType of the the 
	 *		Element Node SSOCredentialSet.
	 * @param iApplicationInstanceName
     *		The name used for credentialSet instance name in the SSO 
	 *		Administration Console.
	 *      if a blank string is passed, the default instance of credentialSet will be 
	 *		returned for the given iApplicationType for the authenticatedUser.
	 * @return 
	 *	S_OK if successful return E_FAIL otherwise.
	 * @error CATResourceError PLMSSOClient_0003
	 *	ERROR Impossible to retrieve internal SSOClient.
 	 * @error CATResourceError PLMSSOClient_0013
	 *	ERROR while retrieving CredentialSet for authenticated User.
	 */
	HRESULT GetCredentialSetForApplication(
			const CATUnicodeString iApplicationType,
			const CATUnicodeString iApplicationInstanceName,
			PLMSSOCredentialSet& pCredentials);

private:
	HRESULT SendError(int iNumber);
};

//------------------------------------------------------------------

#endif
