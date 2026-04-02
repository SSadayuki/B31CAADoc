/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  1998
//=============================================================================
#ifndef CATIMfgToolPathToolAxis_H
#define CATIMfgToolPathToolAxis_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"
#include "CATIMfgToolPath.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByMfgItfEnv IID_CATIMfgToolPathToolAxis;
#else
extern "C" const IID IID_CATIMfgToolPathToolAxis;
#endif


/**
 * Interface to define the Tool Path Tool Axis type.
 * <b>Role</b>: This interface can be used to filter Tool Path Tool Axis.
 * @see CATIMfgToolPath
 */
class ExportedByMfgItfEnv CATIMfgToolPathToolAxis : public CATIMfgToolPath
{
  CATDeclareInterface ;  

  public:

};

CATDeclareHandler(CATIMfgToolPathToolAxis, CATIMfgToolPath);

#endif







