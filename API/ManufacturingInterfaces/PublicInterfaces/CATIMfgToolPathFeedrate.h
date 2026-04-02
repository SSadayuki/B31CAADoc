/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  1998
//=============================================================================
#ifndef CATIMfgToolPathFeedrate_H
#define CATIMfgToolPathFeedrate_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"
#include "CATIMfgToolPath.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByMfgItfEnv IID_CATIMfgToolPathFeedrate;
#else
extern "C" const IID IID_CATIMfgToolPathFeedrate;
#endif


/**
 * Interface to define the Tool Path Feedrate type.
 * <b>Role</b>: This interface can be used to filter Tool Path Feedrate.
 * @see CATIMfgToolPath
 */
class ExportedByMfgItfEnv CATIMfgToolPathFeedrate : public CATIMfgToolPath
{
  CATDeclareInterface ;  

  public:

};

CATDeclareHandler(CATIMfgToolPathFeedrate, CATIMfgToolPath);

#endif







