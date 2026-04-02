/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  1998
//=============================================================================

#ifndef CATIMfgToolPathCommand_H
#define CATIMfgToolPathCommand_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"
#include "CATIMfgToolPathInstruction.h"
#include "CATIMfgPPCommand.h"
#include "CATBooleanDef.h"
#include "CATListOfCATUnicodeString.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByMfgItfEnv IID_CATIMfgToolPathCommand;
#else
extern "C" const IID IID_CATIMfgToolPathCommand;
#endif

/**
* Interface which characterizes PP command object inside tool path.
*
* PLEASE NOTE that you should use CATIMfgTPMultipleMotion interface to modelize your tool motions.<br>
* CATIMfgTPMultipleMotion interface allows to store linear motions, circular motions and PP Instructions
* (described by a string or by a NC_Command and a NC_Instruction described in PP Table). <br>
* It needs less memory and CPU time.<br>
* It is the recommended way to modelize tool motions.<br>
**/

class ExportedByMfgItfEnv CATIMfgToolPathCommand : public CATIMfgToolPathInstruction
{
  CATDeclareInterface ;  

  public:

  /**
   *   @nodoc
   **/
  virtual CATBoolean GetPPCommand (CATIMfgPPCommand_var& oPPCommand) =0 ;

  /**
   *   @nodoc
   **/
  virtual CATBoolean SetPPCommand (const CATIMfgPPCommand_var& iPPCommand) =0 ;

  /**
   *   @nodoc
   **/
  virtual CATBoolean GetCommandEvaluation (CATListValCATUnicodeString& oSyntax) =0 ;

};

CATDeclareHandler(CATIMfgToolPathCommand, CATIMfgToolPathInstruction);

#endif







