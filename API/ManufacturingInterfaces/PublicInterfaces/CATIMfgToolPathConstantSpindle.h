/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  1998
//=============================================================================

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#ifndef CATIMfgToolPathConstantSpindle_H
#define CATIMfgToolPathConstantSpindle_H

#include "MfgItfEnv.h"
#include "CATIMfgToolPathSpindle.h"
#include "CATBooleanDef.h"
#include "CATICkeParm.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByMfgItfEnv IID_CATIMfgToolPathConstantSpindle;
#else
extern "C" const IID IID_CATIMfgToolPathConstantSpindle;
#endif

/**
* Interface dedicated to the spindle feedrate object inside tool path.
* <b>Role</b>: This interface offers services to manage parameters of the spindle feedrate object <br>
* A spindle object can be linked to a "compound traject" (CATIMfgCompoundTraject), the description of a cycle (CATIMfgToolPathCycle),
* or to a tool motion (CATIMfgTPMultipleMotion).<br>
*
* @see CATIMfgTPMultipleMotion
* @see CATIMfgCompoundTraject
* @see CATIMfgToolPathCycle
* @see CATIMfgToolPathFactory
**/

class ExportedByMfgItfEnv CATIMfgToolPathConstantSpindle : public CATIMfgToolPathSpindle
{
  CATDeclareInterface ;  

  public:

  /**
   *	Sets value of spindle feedrate.
   *   @param iSpindle
   *	 The spindle feedrate value modelized by a @href CATICkeParm
   **/
  virtual CATBoolean SetSpindle (const CATICkeParm_var& iSpindle) =0 ;

  /**
   *	Retrieves value of spindle feedrate.
   *   @param oSpindle
   *	 The spindle feedrate value modelized by a @href CATICkeParm
   **/
  virtual CATBoolean GetSpindle (CATICkeParm_var& Spindle) =0 ;

  /**
   *	@nodoc
   **/
  virtual CATBoolean GetSpindle (double& Spindle) =0 ;
};

CATDeclareHandler(CATIMfgToolPathConstantSpindle, CATIMfgToolPathSpindle);

#endif







