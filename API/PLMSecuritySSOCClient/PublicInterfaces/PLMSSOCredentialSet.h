// COPYRIGHT Dassault Systemes 2006
//===================================================================
//
// PLMSSOCredential.h
// Defines the PLMSSOCredentialSet Object.

/**
* @CAA2Level L1
* @CAA2Usage U1
*/

#ifndef PLMSSOCredentialSet_h
#define PLMSSOCredentialSet_h

#include "PLMSSOCAAClient.h"
#include "PLMSSOCredential.h"
#include "CATUnicodeString.h"
class CATListValPLMSSOCredential;

/**
 * <b>Role</b>:
 * This Object represents a credentialSet. 
 * It is a container for  a set of credentials for a given instance 
 * of application.
 */

class ExportedByPLMSSOCAAClient PLMSSOCredentialSet
{
public:

	/**
	* The default constructor of a PLMSSOCredentialSet.
	*/
	PLMSSOCredentialSet();
	~PLMSSOCredentialSet();

	/**
	* Add a PLMSSOCredential to this PLMSSOCredentialSet.
	* @param iCredential
	*	the credential to be added.
	* @return
	*	return S_OK if succesfull, E_FAIL otherwise.
	*/
	HRESULT AddCredential(PLMSSOCredential iCredential);

	/**
	* Remove a PLMSSOCredential to this PLMSSOCredentialSet.
	* @param iCredential
	*	the credential to be removed.
	* @return
	*	return S_OK if succesfull, E_FAIL otherwise.	
	*/
	HRESULT RemoveCredential(PLMSSOCredential iCredential);

	/**
	* Gives a credential added earlier from its name.
	* @param iName
	*	the name of the credential to be retrieved.
	* @param oCredential
	*	the returned PLMSSOCredential.
	* @return
	*	return S_OK if succesfull, E_FAIL otherwise.	
	*/
	HRESULT GetCredential(CATUnicodeString iName, PLMSSOCredential &oCredential);


	/**
	* Retrieve the name of the application for which the PLMSSOCredentialSet has been defined for.
	* @param oApplicationName
	*	the name of the application to be retrieved.
	* @return
	*	return S_OK if succesfull, E_FAIL otherwise.
	*/
	HRESULT GetApplicationName(CATUnicodeString &oApplicationName);

	/**
	* Retrieve the name of the instance of the application for which the PLMSSOCredentialSet has been defined for
	* @param oApplicationName
	*	the name of the application to be retrieved.
	* @return
	*	return S_OK if succesfull, E_FAIL otherwise.	
	*/
	HRESULT GetInstanceName(CATUnicodeString &oInstanceName);

	/**
	* Sets the name of the application for which the PLMSSOCredentialSet has been defined for.
	* @param iApplicationName
	*	the name of the application to be set.
	*/
	void SetApplicationName(CATUnicodeString& iApplicationName);

	/**
	* Sets the name of the instance of the application for which the PLMSSOCredentialSet has been defined for.
	* @param iInstanceName
	*	the name of the instance to be set.
	*/
	void SetInstanceName(CATUnicodeString& iInstanceName);

	/**
	* Retrieve the number of credentials contained in the PLMSSOCredentialSet.
	*@return
	*	the size of the PLMSSOCredentialSet.
	*/
	int Size();

	/**
	* Returns the PLMSSOCredential at the given iIndex. 
	* An index ranges from 1 to the size of the credentialSet.
	* @param iIndex
	*  the index of the PLMSSOCredential to retrieve.
	*/
	PLMSSOCredential& operator[] ( int iIndex )const ;

private:
	CATListValPLMSSOCredential *m_list;
	CATUnicodeString *m_application;
	CATUnicodeString *m_instance;
};

#endif
