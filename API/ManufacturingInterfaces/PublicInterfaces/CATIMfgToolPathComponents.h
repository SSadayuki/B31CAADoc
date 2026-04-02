/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  1998
//=============================================================================
#ifndef CATIMfgToolPathComponents_H
#define CATIMfgToolPathComponents_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"
#include "CATIMfgAgregate.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByMfgItfEnv IID_CATIMfgToolPathComponents;
#else
extern "C" const IID IID_CATIMfgToolPathComponents;
#endif

/**
 * Interface to manage elements in a tool path.
 * <b>Role</b>: CATIMfgToolPathComponents has methods to add, remove, insert children
 * in a tool path.<br>
 * 
 * @see CATIMfgCompoundTraject
 */

class ExportedByMfgItfEnv CATIMfgToolPathComponents : public CATIMfgAgregate
{
  CATDeclareInterface ;  

public:

};

CATDeclareHandler( CATIMfgToolPathComponents, CATIMfgAgregate) ;

#endif

