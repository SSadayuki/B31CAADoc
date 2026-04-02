/* -*-c++-*- */
//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES  1998
//=============================================================================

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#ifndef CATIMfgToolPathSpindle_H
#define CATIMfgToolPathSpindle_H

#include "MfgItfEnv.h"
#include "CATIMfgToolPath.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByMfgItfEnv IID_CATIMfgToolPathSpindle;
#else
extern "C" const IID IID_CATIMfgToolPathSpindle;
#endif


/**
 * Interface to define the Tool Path Spindle type.
 * <b>Role</b>: This interface can be used to filter Tool Path Spindle.
 * @see CATIMfgToolPath
 */
class ExportedByMfgItfEnv CATIMfgToolPathSpindle : public CATIMfgToolPath
{
  CATDeclareInterface ;  

  public:

};

CATDeclareHandler(CATIMfgToolPathSpindle, CATIMfgToolPath);

#endif







