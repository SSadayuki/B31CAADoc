#ifndef CATISPPProcessContainer_H
#define CATISPPProcessContainer_H

// COPYRIGHT DASSAULT SYSTEMES  1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "ProcessInterfaces.h"
#include "CATISPPContainer.h"
#include "CATSPPDeclarations.h"

class CATISPPActivityRoot_var ;
class CATListValCATBaseUnknown_var ;
class CATILinkableObject_var ;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByProcessInterfaces IID IID_CATISPPProcessContainer ;
#else
extern "C" const IID IID_CATISPPProcessContainer ;
#endif

/**
* Interface to manage process container which may be in several documents.
*/

class ExportedByProcessInterfaces CATISPPProcessContainer : public CATISPPContainer
{
  CATDeclareInterface ;  

  public:
    
	/**
	* This method will return the list of root processes available under the
    * ProcessList of the given CATProcess document.  There is only ONE Root
    * process available under the ProcessList of the CATProcess document in V5.
	* @return 
    * 	Handler to the list of such root processes
	*/
    virtual CATListValCATBaseUnknown_var*	GetAllProcess() const = 0 ;
	/**
	* Creates a process.
	* @param iTypeToCreate
	*       type of activity to create ( as a root ).
	* @return 
    * 	Handler on the process newly created.
	*/
    virtual CATISPPActivityRoot_var		CreateProcess(const CATUnicodeString& iTypeToCreate=NULL_string) const = 0 ;
	/**
	* Removes a process.
	* @param iProcessRoot
	*       activity to remove.
	* @return
	*    Warning: returns 0 if succeded only since CXR3SP4 ( before, returns 1 when succeded ).
	*/
    virtual int					RemoveProcess(const CATISPPActivityRoot_var & iProcess) const = 0 ;
    
	/**
	* This method returns the list of products directly underneath the 
    * “ProductList” node in the PPR tree of the CATProcess document.
	* @return 
    * 	Pointer to the list of such products.
	*/
    virtual CATListValCATBaseUnknown_var*	GetProductContext() const = 0 ;

	/**
	* This method inserts the given product reference in a CATProcess document.
    * This will add an instance of inserted product reference directly underneath
    * the  “ProductList” node of PPR Tree.
	* @param iLinkableObj
	*       the reference product whose instance is to be added as product
    *       context to the CATProcess document.
	*/
    virtual void AddProductContext(const CATILinkableObject_var& iLinkableObj ) = 0 ;

	/**
	* This method removes the given product reference from the CATProcess 
    * document. This will remove the product instance under the “ProductList”
    * node of PPR Tree.
	* @param iLinkableObj
	*       the reference product whose instance is to be removed from the
    *       CATProcess document
	*/
    virtual void RemoveProductContext(const CATILinkableObject_var& iLinkableObj ) = 0 ;

	/**
	* This method returns the list of resources directly underneath the
    * “ResourceList” node in the PPR tree of CATProcess document.
	* @return 
    * 	Pointer to the list of such resources.
	*/
    virtual CATListValCATBaseUnknown_var*	GetResourceContext() const = 0 ;

	/**
	* This method inserts the given resource (product) reference in a CATProcess
    * document.  This will add an instance of inserted resource reference
    * directly underneath the “ResourceList” node of PPR tree.
	* @param iLinkableObj
	*       the reference product to add as resource context.
	*/
    virtual void AddResourceContext(const CATILinkableObject_var& iLinkableObj ) = 0 ;

	/**
	* This method removes the given resource (product) reference in a CATProcess
    * document.  This will remove the product instance under the “ResourceList”
    * node of PPR Tree.
	* @param iLinkableObj
	*       the reference product whose instance is to be removed from the
    *       CATProcess document
	*/
    virtual void RemoveResourceContext(const CATILinkableObject_var& iLinkableObj ) = 0 ;


 	/**
	* @nodoc
	*/
   virtual CATISPPActivityRoot_var		CreateTypedProcess(const CATUnicodeString& iTypeToCreate,const CATUnicodeString& iLibrary) = 0 ;


};

CATDeclareHandler( CATISPPProcessContainer, CATISPPContainer) ;

#endif







