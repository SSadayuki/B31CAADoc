#ifndef CATIMmiMechanicalImportApplicative_h
#define CATIMmiMechanicalImportApplicative_h

// COPYRIGHT DASSAULT SYSTEMES 2006

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MecModItfCPP.h"
#include "CATBaseUnknown.h"  
class CATISpecObject_var;
class CATUnicodeString;

#ifndef LOCAL_DEFINITION_FOR_IID
extern  ExportedByMecModItfCPP IID IID_CATIMmiMechanicalImportApplicative;
#else
extern "C" const IID IID_CATIMmiMechanicalImportApplicative;
#endif

/**
* Interface to manage an applicative mechanical import (or external reference).
* <b>Role</b>: This interface is implemented on external references.
* It is used to retrieve link information on a mechanical import (which is obtained by copy with link between two parts).
* <br>An authentication process is required prior to retrieving link information.
* <br> Before calling any method of this interface, you have to init the authentication mechanism in either of two ways :
* <ul>
* <li>if the import was created using @href CATMmrInterPartCopy#SetImportApplicativeId or @href CATFeatureImportAgent#SetImportApplicativeId 
* to set an applicative identifier (computer-generated UID)
* you have to give it using @href #SetApplicativeId :
* then this interface allows the user to retrieve the pointed element or the source product of the mechanical import, or
* to retrieve the loading status, or to load the pointed element.
* <li>if the StartUp definition of the pointed element of the import is in a catalog (CATFct), 
* you have to give the correct catalog client id (using @href #SetPointedElementClientId)
* : a pre-requisite for this authentication is that the pointed element is already loaded.
* It allows the user to retrieve only the pointed element or the source product.
* <br>(since the pointed element is already loaded, it explains the irrelevance of retrieving the loading status or to load the pointed element, in this context.)
* </ul>
*/
class  ExportedByMecModItfCPP CATIMmiMechanicalImportApplicative : public CATBaseUnknown
{
	CATDeclareInterface;

public:


	/**
	* Sets the applicative identifier.
	* <br><b>Role:</b> Inits the authentication mechanism allowing to retrieve informations on the mechanical import.
	* You have to give here the identifier of the mechanical import.
	* If you don't give the correct identifier, all methods of this interface will fail.
	* @param iApplicativeId
	* a unique identifier : the applicative identifier 
	* @return
	* S_OK if the applicative identifier matches the identifier of the mechanical import
	* <br> E_FAIL otherwise
	*/
	virtual HRESULT SetApplicativeId(const GUID& iApplicativeId) = 0;


	/**
	* Sets the client identifier of the pointed element.
	* <br><b>Role:</b> Inits the authentication mechanism allowing to retrieve informations on the mechanical import.
	* You have to give here the client id of the catalog of the pointed element.
	* If you don't give the correct identifier, all methods of this interface will fail.
	* <br> The pointed element must be loaded before calling this method. 
	* In order to load it, you have to know the pointed component and open it (you cannot use @href #LoadPointedElement to load it).
	* @param iClientId
	* the client id of the catalog corresponding to the pointed element.
	* @return
	* S_OK if the client id matches the identifier of the StartUp Catalog of the pointed element
	* <br> E_FAIL if it does not or if the pointed element is not loaded
	*/
	virtual HRESULT SetPointedElementClientId(const CATUnicodeString &iClientId) = 0;

	/**
	* Retrieves the pointed element.
	* @param oPointedElement
	*   A pointer to the pointed element. It may be a subelement or a feature.
	* @return
	* S_OK if pointed element is returned
	* <br> E_FAIL  <ul><li>if @href #SetApplicativeId or @href #SetPointedElementClientId was not previously successfully called.
	*      <li>if the pointed element is deleted
	*      <li>if the pointed element is not loaded in session.
	*      </ul>
	*/
	virtual HRESULT GetPointedElement(CATBaseUnknown_var& oPointedElement) = 0 ;  

	/**
	* Retrieves the loading status of the pointed document.
	* <br><b>Role:</b> This method is used to retrieve the loading status of the pointed document when @href #SetApplicativeId is called before.
	* <br> It always fails if @href #SetPointedElementClientId is used instead of @href #SetApplicativeId.
	* @param oLoaded
	*   TRUE if the pointed document is loaded otherwise <tt>FALSE</tt> 
	* @return
	* S_OK if the information is correctly retrieved.
	* <br> E_FAIL  if @href #SetApplicativeId was not previously successfully called.
	* For @href #SetPointedElementClientId, irrespective of its success or failure.
	*/
	virtual HRESULT IsPointedElementLoaded(CATBoolean& oLoaded) = 0 ;  

	/**
	* Loads the pointed document containing the pointed element.
	* <br><b>Role:</b> This method is used to load the document that contains the pointed element when @href #SetApplicativeId is called before.
	* <br> It always fails if @href #SetPointedElementClientId is used instead of @href #SetApplicativeId.
	* @return
	* S_OK if the document is effectively loaded.
	* <br> S_FALSE if the document is already loaded.
	* <br> E_FAIL  if @href #SetApplicativeId was not previously successfully called.
	* For @href #SetPointedElementClientId, irrespective of its success or failure.
	*/
	virtual HRESULT LoadPointedElement() = 0 ;  

	/**
	* Retrieves the product instance which aggregates an instance of the representation of the pointed element.
	* @param oSourceProduct
	* a pointer to the source product instance
	* @return
	* S_OK if the source product is found
	* <br> E_FAIL  <ul>
	*      <li>if @href #SetApplicativeId or @href #SetPointedElementClientId was not previously successfully called.
	*      <li> if it is not a contextual link. 
	*      <li>if the source product instance is not loaded in session.
	*      </ul>
	*/
	virtual HRESULT GetSourceProduct(CATBaseUnknown_var& oSourceProduct) = 0 ;

	/**
	* Breaks a link associated to an applicative mechanical import.
	* <br><b>Role:</b> Removes the link between the external reference and its reference.
	* @param iApplicativeId
	* the applicative identifier that is associated to the mechanical import
	* @return
	*   <dl><dt><tt>S_OK</tt></dt><dd>The link has been successfully removed.</dd>
	*   <dt><tt>E_FAIL</tt></dt><dd>The applicative identifier isn't valid or the method has unexpectedly failed.</dd></dl>
	*/
	virtual HRESULT BreakLink(const GUID& iApplicativeId) = 0;
};

CATDeclareHandler(CATIMmiMechanicalImportApplicative,CATBaseUnknown);

#endif

