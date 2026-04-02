/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  1998
//=============================================================================
#ifndef CATIMfgToolPathConstantToolAxis_H
#define CATIMfgToolPathConstantToolAxis_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"
#include "CATIMfgToolPathToolAxis.h"
#include "CATMathVector.h"
#include "CATBooleanDef.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByMfgItfEnv IID_CATIMfgToolPathConstantToolAxis;
#else
extern "C" const IID IID_CATIMfgToolPathConstantToolAxis;
#endif

/**
* Interface dedicated to the tool axis object inside tool path.
* <b>Role</b>: This interface offers services to manage parameters of the tool axis object <br>
* A tool axis object can be linked to a "compound traject" (CATIMfgCompoundTraject), the description of a cycle (CATIMfgToolPathCycle),
* or to a tool motion (CATIMfgTPMultipleMotion).<br>
*
* @see CATIMfgTPMultipleMotion
* @see CATIMfgCompoundTraject
* @see CATIMfgToolPathCycle
* @see CATIMfgToolPathFactory
**/

class ExportedByMfgItfEnv CATIMfgToolPathConstantToolAxis : public CATIMfgToolPathToolAxis
{
  CATDeclareInterface ;

  public:
    
  /**
   *	Sets value of tool axis.
   *   @param iToolAxis
   *	The tool axis value
   **/
  virtual CATBoolean SetToolAxis (CATMathVector& iToolAxis) =0 ;

  /**
   *	Retrieves value of tool axis.
   *   @param oToolAxis
   *	The tool axis value
   **/
  virtual CATBoolean GetToolAxis (CATMathVector& oToolAxis) =0 ;

};

CATDeclareHandler(CATIMfgToolPathConstantToolAxis, CATIMfgToolPathToolAxis);

#endif
