/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================

#ifndef CATIMfgManufacturingFactories_H
#define CATIMfgManufacturingFactories_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"
#include "CATIContainer.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgManufacturingFactories;
#else
extern "C" const IID IID_CATIMfgManufacturingFactories;
#endif

/**
* Interface to manage manufacturing factories.
* <br><b>Role</b>: CATIMfgManufacturingFactories has methods to 
* manage manufacturing factories.
*/

class ExportedByMfgItfEnv CATIMfgManufacturingFactories: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
* Retrieves the manufacturing feature factory.
* <br><b>Role</b>: GetManufacturingFeatureFactory retrieves 
* the manufacturing feature factory
*<br><b>Usage</b>:
*  CATIMfgManufacturingFactories *piFact=NULL;
*
*  CATString ClassName("CATMfgManufacturingFactories");
*  CATIInstanciateComponent (ClassName,
*                            CATIMfgManufacturingFactories::ClassId(),
*                            piFact);
*   .....................
*
*   HRESULT Res = piFact->GetManufacturingFeatureFactory (oFeatureFactory);
*
* @param oFeatureFactory
* The manufacturing feature factory. 
*/

  virtual HRESULT GetManufacturingFeatureFactory(CATIContainer_var &oFeatureFactory)=0;

/**
* Retrieves the manufacturing activity factory.
* <br><b>Role</b>: GetManufacturingActivityFactory retrieves 
* the manufacturing activity factory
*<br><b>Usage</b>:
*  CATIMfgManufacturingFactories *piFact=NULL;
*
*  CATString ClassName("CATMfgManufacturingFactories");
*  CATInstantiateComponent (ClassName,
*                            CATIMfgManufacturingFactories::ClassId(),
*                            (void**) &piFact);
*   .....................
*
*   HRESULT Res = piFact->GetManufacturingActivityFactory (oActivityFactory)=0;
*
* @param oActivityFactory
* The manufacturing activity factory. 
*/

  virtual HRESULT GetManufacturingActivityFactory(CATIContainer_var &oActivityFactory)=0;

/**
* Retrieves the manufacturing Tool factory.
* <br><b>Role</b>: GetManufacturingToolFactory retrieves 
* the manufacturing Tool factory
*<br><b>Usage</b>:
*  CATIMfgManufacturingFactories *piFact=NULL;
*
*  CATString ClassName("CATMfgManufacturingFactories");
*  CATInstantiateComponent (ClassName,
*                            CATIMfgManufacturingFactories::ClassId(),
*                            (void**) &piFact);
*   .....................
*
*   HRESULT Res = piFact->GetManufacturingToolFactory (oToolFactory);
*
* @param oToolFactory
* The manufacturing Tool factory. 
*/

  virtual HRESULT GetManufacturingToolFactory(CATIContainer_var &oToolFactory)=0;

/**
* Retrieves the manufacturing Tool path factory.
* <br><b>Role</b>: GetManufacturingToolPathFactory retrieves 
* the manufacturing Tool path factory
*<br><b>Usage</b>:
*  CATIMfgManufacturingFactories *piFact=NULL;
*
*  CATString ClassName("CATMfgManufacturingFactories");
*  CATInstantiateComponent (ClassName,
*                            CATIMfgManufacturingFactories::ClassId(),
*                            (void**) &piFact);
*   .....................
*
*   HRESULT Res = piFact->GetManufacturingToolPathFactory (oToolFactory);
*
* @param oToolPathFactory
* The manufacturing Tool Path factory. 
*/

  virtual HRESULT GetManufacturingToolPathFactory (CATIContainer_var &oToolPathFactory)=0; 

};

CATDeclareHandler(CATIMfgManufacturingFactories, CATBaseUnknown);

#endif

