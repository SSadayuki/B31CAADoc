/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  2001
/** @CAA2Required */
//**********************************************************************
//* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS *
//* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME *
//**********************************************************************
//=============================================================================

#ifndef CATIMfgTPMachiningTime_H
#define CATIMfgTPMachiningTime_H

// Export
#include "MfgItfEnv.h"

// Heritage
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgTPMachiningTime;
#else
extern "C" const IID IID_CATIMfgTPMachiningTime;
#endif

#include "CATErrorDef.h"

 /**   
 * Interface for management of machining time.
 */

class ExportedByMfgItfEnv CATIMfgTPMachiningTime : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:

  /**
   *   Sets machining time and total time on the current object.
   *   @param iMachiningTime
   *      The machining time value (in MKS unit)
   *   @param iTotalTime
   *	  The total time value (in MKS unit)
   **/
    virtual  HRESULT SetMachiningTime      (const double iMachiningTime,const double iTotalTime)=0; 

  /**
   *   Retrieves machining time and total time on the current object.
   *   @param oMachiningTime
   *      The machining time value (in MKS unit)
   *   @param oTotalTime
   *	  The total time value (in MKS unit)
   **/
    virtual  HRESULT GetMachiningTime      (double& oMachiningTime,double& oTotalTime)=0; 
};

CATDeclareHandler(CATIMfgTPMachiningTime, CATBaseUnknown) ;

#endif
