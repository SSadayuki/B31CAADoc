/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  1998
//=============================================================================
#ifndef CATIMfgToolPathInstruction_H
#define CATIMfgToolPathInstruction_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"
#include "CATIMfgElementaryTraject.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByMfgItfEnv IID_CATIMfgToolPathInstruction;
#else
extern "C" const IID IID_CATIMfgToolPathInstruction;
#endif


/**
 * Interface to define the Tool Path Instruction type.
 * <b>Role</b>: This interface can be used to filter Tool Path Instruction.
 * @see CATIMfgTraject, CATIMfgElementaryTraject
 */
class ExportedByMfgItfEnv CATIMfgToolPathInstruction : public CATIMfgElementaryTraject
{
  CATDeclareInterface ;  

	public :
};

CATDeclareHandler(CATIMfgToolPathInstruction, CATIMfgElementaryTraject);

#endif







