/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES 2003
//=============================================================================

#ifndef CATIMfgCatalogFactories_H
#define CATIMfgCatalogFactories_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"
#include "CATIContainer.h"
#include "CATDocument.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgCatalogFactories;
#else
extern "C" const IID IID_CATIMfgCatalogFactories;
#endif

/**
* Interface to manage manufacturing factories.
* <br><b>Role</b>: CATIMfgCatalogFactories has methods to 
* manage manufacturing catalog factories.
*/

class ExportedByMfgItfEnv CATIMfgCatalogFactories: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
* Create the manufacturing activity container.
* <br><b>Role</b>: CreateActivityRootCont creates 
* the manufacturing activity container
*<br><b>Usage</b>:
*  CATIMfgCatalogFactories *piFact=NULL;
*
*  CATString ClassName("CATMfgCatalogFactories");
*  CATIInstanciateComponent (ClassName,
*                            CATIMfgCatalogFactories::ClassId(),
*                            piFact);
*   .....................
*
*   HRESULT Res = piFact->CreateActivityRootCont (iDoc,oActivityRootCont);
*
* @param iDoc
* Document in which you want to create the activity container
* @param oActivityRootCont
* The manufacturing activity container. 
*/

  virtual HRESULT CreateActivityRootCont(CATDocument* &iDoc,CATIContainer_var &oActivityRootCont)=0;



};

CATDeclareHandler(CATIMfgCatalogFactories, CATBaseUnknown);

#endif

