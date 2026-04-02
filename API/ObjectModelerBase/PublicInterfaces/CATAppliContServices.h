/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES 2000

/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */
  
#ifndef CATAppliContServices_H
#define CATAppliContServices_H


#include "AC0XXLNK.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATIContainer.h"
class CATDocument;

/**
  * Creates an applicative container in a given document.
  * <br><b>Role:</b>This method creates an applicative container. After the creation, you 
  * must in this order:
  *  <ul>
  *  <li>Initialize the applicative container thanks to the <tt>CATInit</tt> interface, 
  *       if it implements it. </li>
  *  <li>Initialize the undo/redo mechanism for it thanks to the 
  *   @href CATOmbPerformAfterContainerCreation global function.</li>
  * @param oApplicativeContainer
  *      the created applicative container.
  * @param iDocument 
  *      the document inside which the applicative container has to be created.
  * @param iContainerType
  *      a string representing the type of the applicative container.
  * @param iInterfaceId
  *      the interface type returned through oApplicativeContainer parameter.
  * @param iContainerSuperType
  *      the supertype of the applicative container.
  *      <br> "": default value, the applicative container has no supertype.
  *      <br> otherwise must be set to the feature container type (CATFeatCont).
  * @param iIdentifier
  *      name of the applicative container, useful to get it later.
  *	 <br> "": default value, the name is set to the container type iContainerType.
  *      <br><b> Note: </b> If you want to create several applicative containers of
  *      <br> the same type, the parameter iIdentifier becomes mandatory, because
  *      <br> two applicative containers can not have the same name.
  * @return
  *      <tt>S_OK</tt>: the applicative container has been successfuly created.
  *	 <br><tt> E_FAIL</tt>: the operation has failed.
  */
  
ExportedByAC0XXLNK
HRESULT CATCreateApplicativeContainer(CATBaseUnknown ** oApplicativeContainer,
				      CATDocument * iDocument,
				      const CATIdent iContainerType,
				      const IID& iInterfaceId,
				      const CATIdent iContainerSuperType="",
				      const CATUnicodeString& iIdentifier="");


/**
  * This service should be called after a container creation to declare this new container in the undo/redo mechanism.
  * It should be called either directly after @href CATCreateApplicativeContainer if
  * no initialization is done for this container, either after initializing 
  * this container. For example:
  * <br><br>
  * <b>Without initialization :</b>
  * <pre>
  *   CATBaseUnknown * pAppliContainer = NULL;
  *   CATDocument *pDocument = ... ;
  *   CATIdent AppliContainerType = "....";
  *   CATIdent AppliContainerSuperType = "....";
  *   CATUnicodeString AppliContainerIdentifier = "...";
  * 
  *   HRESULT hr = ::<b>CATCreateApplicativeContainer</b>(&pAppliContainer,
  *                                                 pDocument,
  *                                                 AppliContainerType,
  *                                                 IID_CATIContainer,
  *                                                 AppliContainerSuperType
  *                                                 AppliContainerIdentifier);
  *
  *   CATIContainer * pIContainer = (CATIContainer*) pAppliContainer ;
  *
  *   if( SUCCEEDED(hr) && ( NULL!=pIContainer) )
  *      hr = ::<b>CATOmbPerformAfterContainerCreation</b>( pIContainer );
  * </pre>
  * 
  * <b>With initialization</b>
  *
  * <pre>
  *   CATBaseUnknown * pAppliContainer = NULL;
  *   CATDocument *pDocument = ... ;
  *   CATIdent AppliContainerType = "....";
  *   CATIdent AppliContainerSuperType = "....";
  *   CATUnicodeString AppliContainerIdentifier = "...";
  * 
  *   HRESULT hr = ::<b>CATCreateApplicativeContainer</b>(&pAppliContainer,
  *                                                 pDocument,
  *                                                 AppliContainerType,
  *                                                 IID_CATIContainer,
  *                                                 AppliContainerSuperType
  *                                                 AppliContainerIdentifier);
  *
  *   CATIContainer * pIContainer = (CATIContainer*) pAppliContainer ;
  *
  *   if( SUCCEEDED(hr) && ( NULL!=pIContainer))
  *   {
  *      CATInit_var MyContInit(pIContainer);
  *      if(MyContInit != NULL_var)
  *      {
  *        MyContInit-><b>Init</b>(FALSE);
  *      }
  *      hr = ::<b>CATOmbPerformAfterContainerCreation</b>( pIContainer );
  *   }
  * </pre>
  * @param iContainer
  *      The created applicative container.       
  * @return
  *      <tt>S_OK</tt>: The created applicative container has been successfuly declared
  *       in undo/redo mechanism.
  *	 <br><tt> E_FAIL</tt>: the operation has failed.
  */

ExportedByAC0XXLNK
HRESULT CATOmbPerformAfterContainerCreation(CATIContainer* iContainer);

/**
  * Gets an applicative container in a given document.
  * @param oApplicativeContainer
  *      applicative container.
  * @param iDocument 
  *      the document inside which the applicative container has to be retrieved.
  * @param iInterfaceId
  *      the interface type returned through oApplicativeContainer parameter.
  * @param iIdentifier
  *      name of the applicative container.
  * @return
  *      <tt>S_OK</tt>: the applicative container has been successfuly retrieved.
  *	 <br><tt> E_FAIL</tt>: the operation has failed.
  */

ExportedByAC0XXLNK
HRESULT CATGetApplicativeContainer(CATBaseUnknown ** oApplicativeContainer,
				   CATDocument* iDocument,
				   const IID& iInterfaceId,
				   const CATUnicodeString& iIdentifier);

#endif






