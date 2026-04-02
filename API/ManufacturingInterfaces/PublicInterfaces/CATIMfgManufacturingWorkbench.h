/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================

#ifndef CATIMfgManufacturingWorkbench_H
#define CATIMfgManufacturingWorkbench_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"
#include "CATString.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgManufacturingWorkbench;
#else
extern "C" const IID IID_CATIMfgManufacturingWorkbench;
#endif

/**
* Interface to manage manufacturing workbench.
* <br><b>Role</b>: CATIMfgManufacturingWorkbench has methods to 
* manage manufacturing workbench.
*/

class ExportedByMfgItfEnv CATIMfgManufacturingWorkbench: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
* Initializes the manufacturing workbench.
* <br><b>Role</b>: InitManufacturingWorkbench initializes 
* the manufacturing workbench
*<br><b>Usage</b>:
*  CATIMfgManufacturingWorkbench *piWkb=NULL;
*
*  CATString ClassName("CATMfgManufacturingWorkbench");
*  CATIInstanciateComponent (ClassName,
*                            CATIMfgManufacturingWorkbench::ClassId(),
*                            piWkb);
*   .....................
*
*   HRESULT Res = piWkb->InitManufacturingWorkbench ();
*
*/

  virtual HRESULT InitManufacturingWorkbench()=0;

/**
* Disposes the manufacturing workbench.
* <br><b>Role</b>: DisposeManufacturingWorkbench disposes 
* the manufacturing workbench
*<br><b>Usage</b>:
*  CATIMfgManufacturingWorkbench *piWkb=NULL;
*
*  CATString ClassName("CATMfgManufacturingWorkbench");
*  CATIInstanciateComponent (ClassName,
*                            CATIMfgManufacturingWorkbench::ClassId(),
*                            piWkb);
*   .....................
*
*   HRESULT Res = piWkb->DisposeManufacturingWorkbench ();
*
*/

  virtual HRESULT DisposeManufacturingWorkbench()=0;

/**
*  Handles or not the transition between workbenches.
* <br><b>Role</b>: DoTransition handles or not the transition
* between the current and the selected worbenches and workshops.*<br><b>Usage</b>:
*  CATIMfgManufacturingWorkbench *piWkb=NULL;
*
*  CATString ClassName("CATMfgManufacturingWorkbench");
*  CATIInstanciateComponent (ClassName,
*                            CATIMfgManufacturingWorkbench::ClassId(),
*                            piWkb);
*   .....................
*
*   int Res = piWkb->DoManufacturingTransition (iFromWS,iFromWB,iToWS,iToWB);
*
* @param iFromWS
* The current workbench. 
* @param iFromWB
* The current workshop. 
* @param iToWS
* The selected workbench. 
* @param iToWB
* The selected workshop. 
* @return
* 1 if handled, 0 otherwise.
*/

  virtual int DoManufacturingTransition (const CATString &iFromWS, const CATString &iFromWB,
                                                   const CATString &iToWS, const CATString &iToWB)=0;

};

CATDeclareHandler(CATIMfgManufacturingWorkbench, CATBaseUnknown);

#endif


