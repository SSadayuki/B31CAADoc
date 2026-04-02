/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================

#ifndef CATIMfgManufacturingBatch_H
#define CATIMfgManufacturingBatch_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"
class CATCommand;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgManufacturingBatch;
#else
extern "C" const IID IID_CATIMfgManufacturingBatch;
#endif

/**
* Interface to manage manufacturing batch.
* <br><b>Role</b>: CATIMfgManufacturingBatch has methods to 
* manage manufacturing batch.
*/

class ExportedByMfgItfEnv CATIMfgManufacturingBatch: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
* Lauch the batch.
* <br><b>Role</b>: Lauch the batch.
*<br><b>Usage</b>:
*  CATCommand* TheLauncher = NULL;
*  char **argv=NULL;
*  char **env=NULL ;
*  int argc=0;
*  int Status = 0;
*  GetMainArguments(  &argc, &argv, &env);
*   .....................
*
*   HRESULT Res = piSet->LaunchCATMFG (TheLauncher,argc,argv,env,Status);
*
* @param iTheLauncher 
* MUST be NULL;. 
* @param argc, argv, env : arguments of the main
* (env is specific for CATIA V5 environement)
* @param oStatus : return value as a standard main . ststaus of the batch
* use them as int oStatus =  main (int argc, char* argv[])
* HRESULT : status of the Launch
*/

  virtual HRESULT LaunchCATMFG (CATCommand* iTheLauncher,int iNbArgs, const char *iArgs[], const char *iEnv[], int &oStatus)=0;


};

CATDeclareHandler(CATIMfgManufacturingBatch, CATBaseUnknown);

#endif


