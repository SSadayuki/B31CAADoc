/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  1998
//=============================================================================
#ifndef CATIMfgToolPath_H
#define CATIMfgToolPath_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"
#include "CATBooleanDef.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByMfgItfEnv IID_CATIMfgToolPath;
#else
extern "C" const IID IID_CATIMfgToolPath;
#endif


/**
 * Interface to define the Tool Path type.
 * <b>Role</b>: This interface can be used to filter Tool Path.
 */
class ExportedByMfgItfEnv CATIMfgToolPath : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:

};

CATDeclareHandler(CATIMfgToolPath, CATBaseUnknown);

#endif







