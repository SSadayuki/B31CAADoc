/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  2003
//=============================================================================
#ifndef CATIMfgToolPathMotionCommand_H
#define CATIMfgToolPathMotionCommand_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"

#include "CATIMfgCompoundTraject.h"

#include "CATIMfgPPCommand.h"
#include "CATBooleanDef.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByMfgItfEnv IID_CATIMfgToolPathMotionCommand;
#else
extern "C" const IID IID_CATIMfgToolPathMotionCommand;
#endif

/**
* Interface on object dedicated to management of rotations in tool path model.<br>
*/

class ExportedByMfgItfEnv CATIMfgToolPathMotionCommand : public CATIMfgCompoundTraject
{
  CATDeclareInterface ;  

  public:

/**
*   Evaluates the syntax of the object.
*   @param oSyntax
*	 The value of syntax
**/
  virtual CATBoolean GetCommandEvaluation (CATListValCATUnicodeString& oSyntax) =0 ; 

/**
* @nodoc
*/     
  virtual CATBoolean GetPPCommand (CATIMfgPPCommand_var& oPPCommand) =0 ;

/**
* @nodoc
*/     
  virtual CATBoolean SetPPCommand (const CATIMfgPPCommand_var& iPPCommand) =0 ;
};

CATDeclareHandler(CATIMfgToolPathMotionCommand, CATIMfgCompoundTraject);

#endif







