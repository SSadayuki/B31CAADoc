// COPYRIGHT Dassault Systemes 2006
//===================================================================
//
// PLMSSOCredential.h
// Defines the PLMSSOCredential Object
//
//===================================================================
/**
* @CAA2Level L1
* @CAA2Usage U1
*/

#ifndef PLMSSOCredential_H
#define PLMSSOCredential_H

#include "PLMSSOCAAClient.h"
#include "CATUnicodeString.h"

/**
 * <b>Role</b>:
 * This Object represents a credential. 
 * It is a common name for any critical information used to authenticate
 * yourself on a given System.
 */

class ExportedByPLMSSOCAAClient PLMSSOCredential
{
public:

	/**
	* Construct an empty credential with a given name and value.
	*/
	PLMSSOCredential();
	

	/**
	* Construct a credential with a given name and value.
	* @param iName
	*	the name of the credential.
	* @param iValue
	*	the value of the credential.
	*/
	PLMSSOCredential(CATUnicodeString iName, CATUnicodeString iValue);


	/**
	* Retrieve the name of the credential.
	* @param oName
	*	the name of the credential.
	* @return
	*	return S_OK if succesfull, E_FAIL otherwise.	
	*/
	HRESULT GetCredentialName(CATUnicodeString &oName);


	/**
	* Retrieve the value of the credential.
	* @param oName
	*	the value of the credential.
	* @return
	*	return S_OK if succesfull, E_FAIL otherwise.	
	*/
	HRESULT GetCredentialValue(CATUnicodeString &oValue);


	/**
	* Equality operator.
	* @param iCredential
	*   The SSOCredential to compare with the current one.
	* @return 
	*   boolean
	*   <br><b>Legal values</b>: <tt>0: FALSE</tt> 
	*    or <tt>Other: TRUE</tt> 
	*   if both name and value are equal, credentials are equal.
	*/
	int operator==(const PLMSSOCredential& iCredential)const;

	/**
	* Inequality operator.
	* @param iCredential
	*   The SSOCredential to compare with the current one.
	* @return 
	*   boolean
	*   <br><b>Legal values</b>: <tt>0: FALSE</tt> 
	*    or <tt>Other: TRUE</tt> 
	*   if both name and value are not equal, credentials are different.
	*/
	int operator!=(const PLMSSOCredential& iCredential)const;



	/**
	* Assignment operator from a PLMSSOCredential instance.
	* @param iCredential
	*   The provided credential.
	* @return  
	*   The credential resulting from the assignment.
	*/
	PLMSSOCredential& operator=(const PLMSSOCredential& iCredential);

private:
	CATUnicodeString m_name;
	CATUnicodeString m_value;
};

//------------------------------------------------------------------

#endif
