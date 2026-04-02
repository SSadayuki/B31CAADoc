/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  1998
//=============================================================================

/**
* @CAA2Level L1
* @CAA2Usage U3
*/


#ifndef CATIMfgToolPathToolAssembly_H
#define CATIMfgToolPathToolAssembly_H

#include "MfgItfEnv.h"

#include "CATIMfgToolPath.h"

#include "CATBooleanDef.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByMfgItfEnv IID_CATIMfgToolPathToolAssembly;
#else
extern "C" const IID IID_CATIMfgToolPathToolAssembly;
#endif

/**
* Interface dedicated to management of tool or tool assembly inside tool path.<br>
*
* A tool axis object can be linked to a "compound traject" (CATIMfgCompoundTraject) or the the description of a cycle (CATIMfgToolPathCycle).<br>
*
* @see CATIMfgCompoundTraject
* @see CATIMfgToolPathCycle
* @see CATIMfgToolPathFactory
**/

class ExportedByMfgItfEnv CATIMfgToolPathToolAssembly : public CATIMfgToolPath
{
  CATDeclareInterface ;  

  public:
	  
 /**
   *	Retrieves the tool or tool assembly.
   *   @param oToolAssembly
   *	 The value of tool     
   **/
  virtual CATBoolean GetTool (CATBaseUnknown_var& oToolAssembly) =0;

 /**
   *	Sets the tool or tool assembly.
   *   @param iToolAssembly
   *	 The value of tool     
   **/
  virtual CATBoolean SetTool (const CATBaseUnknown_var& oToolAssembly) =0;
};

CATDeclareHandler(CATIMfgToolPathToolAssembly, CATIMfgToolPath);

#endif







