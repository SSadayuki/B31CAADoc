/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  1998
//=============================================================================
#ifndef CATIMfgToolPathUserSyntax_H
#define CATIMfgToolPathUserSyntax_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"
#include "CATUnicodeString.h"
#include "CATIMfgToolPathInstruction.h"
#include "CATBooleanDef.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByMfgItfEnv IID_CATIMfgToolPathUserSyntax;
#else
extern "C" const IID IID_CATIMfgToolPathUserSyntax;
#endif

/**
* Interface dedicated to the user syntax object inside tool path.<br>
* A user syntax is a syntax that is generated as it is in the APT file.<br>
* <b>Role</b>: This interface offers services to manage parameters of the user syntax object <br>
*
* PLEASE NOTE that you should use CATIMfgTPMultipleMotion interface instead of CATIMfgToolPathUserSyntax.<br>
* CATIMfgTPMultipleMotion interface allows to store linear motions, circular motions and PP Instructions
* (described by a string or by a NC_Command and a NC_Instruction described in PP Table). <br>
* It needs less memory and CPU time.<br>
* It is the recommended way to modelize tool motions.<br>
* 
* @see CATIMfgTPMultipleMotion
**/

class ExportedByMfgItfEnv CATIMfgToolPathUserSyntax : public CATIMfgToolPathInstruction
{
  CATDeclareInterface ;  

  public:

/**
*   Retrieves the value of the user syntax.
*   @param oString
*	The value of the user syntax
**/
  virtual CATBoolean GetInstruction (CATUnicodeString& oString)=0 ;

/**
*   Sets the value of the user syntax.
*   @param iString
*	The value of the user syntax
**/
  virtual CATBoolean SetInstruction (const CATUnicodeString& iString)=0 ;
};

CATDeclareHandler(CATIMfgToolPathUserSyntax, CATIMfgToolPathInstruction);

#endif







