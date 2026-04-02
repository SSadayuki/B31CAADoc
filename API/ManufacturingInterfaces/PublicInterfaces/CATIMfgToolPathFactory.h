/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  1998
//=============================================================================
#ifndef CATIMfgToolPathFactory_H
#define CATIMfgToolPathFactory_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"
#include "CATIMfgCompoundTraject.h"
#include "CATIMfgPolyLineTraject.h"
#include "CATIMfgCircularTraject.h"
#include "CATIMfgToolPathConstantFeedrate.h"
#include "CATIMfgToolPathConstantSpindle.h"
#include "CATIMfgToolPathConstantToolAxis.h"
#include "CATIMfgToolPathToolAssembly.h"
#include "CATIMfgToolPathUserSyntax.h"
#include "CATIMfgToolPathCommand.h"
#include "CATIMfgToolPathCycle.h"
#include "CATIMfgToolPathMotionCommand.h"
#include "CATIMfgTPMultipleMotion.h"
#include "CATIMfgPPCommand.h"
#include "CATMathVector.h"
#include "CATICkeParm.h"
#include "CATIMfgTPMultipleMotionWithProfileData.h"
#include "CATIMfgTPMachiningTime.h"
#include "CATIMfgTPLatheMachiningTime.h"
#include "CATIMfgTPNurbsDescription.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByMfgItfEnv IID_CATIMfgToolPathFactory;
#else
extern "C" const IID IID_CATIMfgToolPathFactory;
#endif

/**
* Interface to create tool path objects.
*/

class ExportedByMfgItfEnv CATIMfgToolPathFactory : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:
    
/**
*	Creates a compound traject inside the tool path container. 
*   @return
* 	The compound traject object 
**/
  virtual CATIMfgCompoundTraject_var CreateMfgCompoundTraject ()  = 0 ;

/**
*	Creates a tool path cycle inside the tool path container.
*   @param iUserSyntax
*	  The list of strings describing the syntax of cycle
*   @return
* 	  The tool path cycle object 
**/
  virtual CATIMfgToolPathCycle_var	CreateMfgToolPathCycle (const CATListValCATUnicodeString& iUserSyntax)  = 0;

/**
*	Creates a tool path cycle inside the tool path container.
*   @param iCommandName
*	  The name of NC_Command relative to the cycle
*   @return
* 	  The tool path cycle object 
**/
  virtual CATIMfgToolPathCycle_var	CreateMfgToolPathCycle (const CATUnicodeString& iCommandName)  = 0;

/**
* Creates a multiple motion inside the tool path container. 
*   @return
* 	The multiple motion object 
*/
  virtual CATIMfgTPMultipleMotion_var CreateMfgTPMultipleMotion ()  = 0 ;

/**
* Creates a specialized multiple motion in which it is possible to store cutter profile datas. 
*   @return
* 	The multiple motion object in which it is possible to store cutter profile datas
*/
  virtual CATIMfgTPMultipleMotionWithProfileData_var CreateMfgTPMultipleMotionWithProfileData ()  = 0 ;

/**
*	Creates a constant feedrate inside the tool path container. 
*   @param iFeedrate
*	  The feedrate modelized by a @href CATICkeParm   
*   @return
* 	  The constant feedrate object
**/
  virtual CATIMfgToolPathConstantFeedrate_var	CreateMfgToolPathConstantFeedrate (const CATICkeParm_var& iFeedrate)  = 0 ;


/**
*	Creates a constant spindle inside the tool path container. 
*   @param iSpindle
*	 The spindle feedrate modelied by a @href CATICkeParm    
*   @return
* 	 The constant spindle object
**/
  virtual CATIMfgToolPathConstantSpindle_var	CreateMfgToolPathConstantSpindle (const CATICkeParm_var& iSpindle)  = 0 ;

/**
*	Creates a constant tool axis object inside the tool path container. 
*   @param iToolAxis
*     The value of tool axis
*   @return
* 	  The tool axis object
**/
  virtual CATIMfgToolPathConstantToolAxis_var	CreateMfgToolPathConstantToolAxis (CATMathVector& iToolAxis)  = 0 ;

/**
*	Creates a tool assembly object inside the tool path container. 
*   @param iToolAssembly
*	 The tool     
*   @return
* 	 The tool assembly object
**/
  virtual CATIMfgToolPathToolAssembly_var	CreateMfgToolPathToolAssembly (CATBaseUnknown_var& iToolAssembly)  = 0;


/**
* Creates a polyline traject inside the tool path container.<br>
* PLEASE NOTE that you should use CATIMfgTPMultipleMotion interface to modelize your tool motions.<br>
* CATIMfgTPMultipleMotion interface allows to store linear motions, circular motions and PP Instructions
* (described by a string or by a NC_Command and a NC_Instruction described in PP Table). <br>
* It needs less memory and CPU time.<br>
* It is the recommended way to modelize tool motions.<br>
* @param iTrajectType
*   The traject type : use constants of CATMfgToolPathDefs.h
* @param iFeedrate
*   The traject feedrate : use constants of CATMfgToolPathDefs.h
* @param iTipPoints
*	 The tip points
* @return
* 	 The polyline traject object
*/
  virtual CATIMfgPolyLineTraject_var CreateMfgPolyLineTraject (const CATUnicodeString& iTrajectType,
							                                   const CATUnicodeString& iFeedrate,
							                                   CATMathSetOfPoints& iTipPoints)  = 0 ;
  
/**
* Creates a circular traject inside the tool path container.<br>
* PLEASE NOTE that you should use CATIMfgTPMultipleMotion interface to modelize your tool motions.<br>
* CATIMfgTPMultipleMotion interface allows to store linear motions, circular motions and PP Instructions
* (described by a string or by a NC_Command and a NC_Instruction described in PP Table). <br>
* It needs less memory and CPU time.<br>
* It is the recommended way to modelize tool motions.<br>
* @param iTrajectType
*   The traject type : use constants of CATMfgToolPathDefs.h
* @param iFeedrate
*   The traject feedrate : use constants of CATMfgToolPathDefs.h
* @param iTipPoints
*	 The tip points
* @param iNormale
*	 The normal to plane containing the circle
* @param iCenter
*	 The coordinates of the circle's center
* @param iRadius
*	 The radius of the circle
* @return
* 	 The circular traject object
**/
  virtual CATIMfgCircularTraject_var CreateMfgCircularTraject (const CATUnicodeString& iTrajectType,
									                           const CATUnicodeString& iFeedrate,
									                           CATMathSetOfPoints& iTipPoints,
									                           CATMathVector& iNormale,
															   CATMathPoint& iCenter,
															   double& iRadius)  = 0 ;


/**
*	Creates a user syntax object inside the tool path container.<br> 
* PLEASE NOTE that you should use CATIMfgTPMultipleMotion interface to modelize your tool motions.<br>
* CATIMfgTPMultipleMotion interface allows to store linear motions, circular motions and PP Instructions
* (described by a string or by a NC_Command and a NC_Instruction described in PP Table). <br>
* It needs less memory and CPU time.<br>
* It is the recommended way to modelize tool motions.<br>
*   @param iInstruction
*	The value of user syntax (this syntax is generated as it is in the APT file)    
*   @return
* 	The user syntax object
**/
  virtual CATIMfgToolPathUserSyntax_var	CreateMfgToolPathUserSyntax (const CATUnicodeString& iInstruction)  = 0;

/**
*	Creates a PP Command object inside the tool path container.<br>
* PLEASE NOTE that you should use CATIMfgTPMultipleMotion interface to modelize your tool motions.<br>
* CATIMfgTPMultipleMotion interface allows to store linear motions, circular motions and PP Instructions
* (described by a string or by a NC_Command and a NC_Instruction described in PP Table). <br>
* It needs less memory and CPU time.<br>
* It is the recommended way to modelize tool motions.<br>
*   @param iCommandName
*	 the name of NC_Command   
*   @return
* 	 the PP Command object
**/
  virtual CATIMfgToolPathCommand_var	CreateMfgToolPathCommand (const CATUnicodeString& iCommandName)  = 0;

/**
*	@nodoc
**/
  virtual CATIMfgToolPathCycle_var	CreateMfgToolPathCycle (const CATIMfgPPCommand_var& iPPCommand)  = 0;

/**
*	@nodoc
**/
  virtual CATIMfgToolPathCommand_var	CreateMfgToolPathCommand (const CATIMfgPPCommand_var& iPPCommand)  = 0;

/**
*	@nodoc
**/
  virtual CATIMfgToolPathMotionCommand_var	CreateMfgToolPathMotionCommand (const CATIMfgPPCommand_var& iPPCommand)  = 0;

/**
*	@nodoc
**/
  virtual CATIMfgToolPathMotionCommand_var	CreateMfgToolPathMotionCommand (const CATUnicodeString& iCommandName)  = 0;

/**
 * @nodoc
 * Create a Machining Time Object for milling operations
 */

  virtual CATIMfgTPMachiningTime_var CreateMfgTPMachiningTime() = 0;

/**
* @nodoc
 * Create a Machining Time Object for Lathe operations
*/
  virtual CATIMfgTPLatheMachiningTime_var CreateMfgTPLatheMachiningTime ()  = 0 ;

/**
* @nodoc
*/
  virtual CATIMfgTPNurbsDescription_var CreateMfgTPNurbsDescription ()  = 0 ;
};

CATDeclareHandler(CATIMfgToolPathFactory, CATBaseUnknown);

#endif







