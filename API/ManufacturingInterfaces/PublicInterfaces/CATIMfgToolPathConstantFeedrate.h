/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  1998
//=============================================================================

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#ifndef CATIMfgToolPathConstantFeedrate_H
#define CATIMfgToolPathConstantFeedrate_H

#include "MfgItfEnv.h"
#include "CATIMfgToolPathFeedrate.h"
#include "CATBooleanDef.h"
#include "CATICkeParm.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByMfgItfEnv IID_CATIMfgToolPathConstantFeedrate;
#else
extern "C" const IID IID_CATIMfgToolPathConstantFeedrate;
#endif

/**
* Interface dedicated to the feedrate object inside tool path.
* <b>Role</b>: This interface offers services to manage parameters of the feedrate object <br>
*
* A feedrate object can be linked to a "compound traject" (CATIMfgCompoundTraject), the description of a cycle (CATIMfgToolPathCycle),
* or to a tool motion (CATIMfgTPMultipleMotion).
*
* @see CATIMfgTPMultipleMotion
* @see CATIMfgCompoundTraject
* @see CATIMfgToolPathCycle
* @see CATIMfgToolPathFactory
**/

class ExportedByMfgItfEnv CATIMfgToolPathConstantFeedrate : public CATIMfgToolPathFeedrate
{
  CATDeclareInterface ;  

  public:
    
  /**
   *	Sets value of feedrate.
   *   @param iFeedrate 
   *	The feedrate value modelized by a @href CATICkeParm
   **/
  virtual CATBoolean SetFeedrate (const CATICkeParm_var& iFeedrate) =0 ;

  /**
   *	Retrieves value of feedrate.
   *   @param oFeedrate 
   *	The feedrate value modelized by a @href CATICkeParm
   **/
  virtual CATBoolean GetFeedrate (CATICkeParm_var& oFeedrate) =0 ;

  /**
   *   @nodoc
   **/
  virtual CATBoolean GetFeedrate (double& oFeedrate) =0 ;

};

CATDeclareHandler(CATIMfgToolPathConstantFeedrate, CATIMfgToolPathFeedrate);

#endif







