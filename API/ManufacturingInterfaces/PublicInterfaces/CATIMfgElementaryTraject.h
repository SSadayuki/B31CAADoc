/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  1998
//=============================================================================
#ifndef CATIMfgElementaryTraject_H
#define CATIMfgElementaryTraject_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"
#include "CATIMfgTraject.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgElementaryTraject;
#else
extern "C" const IID IID_CATIMfgElementaryTraject;
#endif

/**
 * Interface to define the ElementaryTraject type.
 * <b>Role</b>: This interface can be used to filter Elementary Trajects : Tool Motion and Tool Path Instruction.
 * @see CATIMfgTraject, CATIMfgToolMotion, CATIMfgToolPathInstruction
 */

class ExportedByMfgItfEnv CATIMfgElementaryTraject : public CATIMfgTraject
{
  CATDeclareInterface ;  

  public:

};

CATDeclareHandler(CATIMfgElementaryTraject, CATIMfgTraject);

#endif







