/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  2001
/** @CAA2Required */
//**********************************************************************
//* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS *
//* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME *
//**********************************************************************
//=============================================================================

#ifndef CATIMfgTPLatheMachiningTime_H
#define CATIMfgTPLatheMachiningTime_H

#include "MfgItfEnv.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgTPLatheMachiningTime;
#else
extern "C" const IID IID_CATIMfgTPLatheMachiningTime;
#endif

#include "CATIMfgTPMachiningTime.h"
#include "CATMathLine.h"


/**
 * Interface for management of machining time for lathe.
 */

class ExportedByMfgItfEnv CATIMfgTPLatheMachiningTime : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

  /**
   *   Sets spindle axis on the current object.
   *   @param iSpindleAxis
   *      The spindle axis value
   */
    virtual  HRESULT SetSpindleAxisValue (const CATMathLine& iSpindleAxis)=0; 

  /**
   *   Retrieves spindle axis on the current object.
   *   @param oSpindleAxis
   *      The spindle axis value
   */
    virtual  HRESULT GetSpindleAxisValue (CATMathLine& oSpindleAxis)=0; 
};

CATDeclareHandler(CATIMfgTPLatheMachiningTime, CATBaseUnknown) ;

#endif
