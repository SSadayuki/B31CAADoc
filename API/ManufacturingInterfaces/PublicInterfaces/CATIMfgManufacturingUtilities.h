/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES 2002
//=============================================================================

#ifndef CATIMfgManufacturingUtilities_H
#define CATIMfgManufacturingUtilities_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"
#include "CATString.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgManufacturingUtilities;
#else
extern "C" const IID IID_CATIMfgManufacturingUtilities;
#endif

/**
* Interface to manage manufacturing entities.
* <br><b>Role</b>: CATIMfgManufacturingUtilities has methods to 
* manage manufacturing entities.
*/

class ExportedByMfgItfEnv CATIMfgManufacturingUtilities: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
* Retrieves the manufacturing PPR root.
* <br><b>Role</b>: GetManufacturingPPRRoot retrieves 
* the manufacturing PPR root
*<br><b>Usage</b>:
*  CATIMfgManufacturingUtilities *piRoot=NULL;
*
*  CATString ClassName("CATMfgManufacturingUtilities");
*  CATIInstanciateComponent (ClassName,
*                            CATIMfgManufacturingUtilities::ClassId(),
*                            piRoot);
*   .....................
*
*   HRESULT Res = piRoot->GetManufacturingPPRRoot (oPPRRoot);
*
* @param oPPRRoot
* The manufacturing PPR Root. 
*/

  virtual HRESULT GetManufacturingPPRRoot(CATBaseUnknown_var &oPPRRoot)=0;

  /**
* Activates the Generic Mill Machine Extension.
* <br><b>Role</b>: ActivateGenericMillMachineExtension creates or activates
* the Generic Mill Machine Extension on a Product
*<br><b>Usage</b>:
*  CATIMfgManufacturingUtilities *piRoot=NULL;
*
*  CATString ClassName("CATMfgManufacturingUtilities");
*  CATIInstanciateComponent (ClassName,
*                            CATIMfgManufacturingUtilities::ClassId(),
*                            piRoot);
*   .....................
*
*   HRESULT Res = piRoot->ActivateGenericMillMachineExtension (iProduct);
*
* @param iProduct
* The product on which the extension is to activated.
* If iProduct is set to NULL_var, all extensions of the current document
* will be activated
*/

  virtual HRESULT ActivateGenericMillMachineExtension (const CATBaseUnknown_var &iProduct=NULL_var)=0;


  /**
* Activates the Machining Extension.
* <br><b>Role</b>: ActivateGenericMillMachineExtension creates or activates
* the Machining Extension on a Product
*<br><b>Usage</b>:
*  CATIMfgManufacturingUtilities *piRoot=NULL;
*
*  CATString ClassName("CATMfgManufacturingUtilities");
*  CATIInstanciateComponent (ClassName,
*                            CATIMfgManufacturingUtilities::ClassId(),
*                            piRoot);
*   .....................
*
*   HRESULT Res = piRoot->ActivateMachiningExtension (iProduct);
*
* @param iProduct
* The product on which the extension is to activated.
* If iProduct is set to NULL_var, all extensions of the current document
* will be activated
*/

  virtual HRESULT ActivateMachiningExtension (const CATString &iextensionName, const CATBaseUnknown_var &iProduct=NULL_var)=0;

};

CATDeclareHandler(CATIMfgManufacturingUtilities, CATBaseUnknown);

#endif

