/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES 2003
//=============================================================================
#ifndef CATIMfgApply_H
#define CATIMfgApply_H

/**
* @CAA2Level L1
* @CAA2Usage U5
*/

#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgApply ;
#else
extern "C" const IID IID_CATIMfgApply ;
#endif

/**
 * Interface to customize the check of a Machining Operation.
 * <b>Role</b>: This interface has to be implemented to change the default check behaviour.
 */
class ExportedByMfgItfEnv CATIMfgApply: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * This method is used to check a Machining Operation.
 * It is called in particular in the APPLY button of the Machining Operation editor.
 * If the check fails (operation not complete,...), the return code
 * is filled with the error message.
 */

    virtual HRESULT CheckParameter() = 0;

/**
 * This method is used to compute the machining domain of a Machining Operation.
 * It may return NULL_var.
 */

    virtual CATBaseUnknown_var ComputeMachiningDomain() = 0;
};

CATDeclareHandler( CATIMfgApply, CATBaseUnknown );

#endif
