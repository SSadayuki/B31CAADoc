/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  1998
//=============================================================================
#ifndef CATIMfgToolPathCycle_H
#define CATIMfgToolPathCycle_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"
#include "CATIMfgPPCommand.h"
#include "CATIMfgCompoundTraject.h"
#include "CATErrorDef.h"
#include "CATMathSetOfPoints.h"
#include "CATListOfCATUnicodeString.h"
#include "CATMathSetOfVectors.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByMfgItfEnv IID_CATIMfgToolPathCycle;
#else
extern "C" const IID IID_CATIMfgToolPathCycle;
#endif

 /**   
 * Interface for management of machining cycle inside tool path model.
 * <b>Role</b>: A CATIMfgToolPathCycle object is a specialized @href CATIMfgCompoundTraject object.<br>
 * As a @href CATIMfgCompoundTraject object, you can store on it reference values (feedrates,spindle,tool axis,....) and 
 * you can store the description of a tool path (using @href CATIMfgTPMultipleMotion, @href CATIMfgCompoundTraject,
 * @href CATIMfgToolPathCycle or @href CATIMfgToolPathMotionCommand objects).<br>
 * Specifically to this object, you have to store a NC_Command,NC_Instruction (compatible with current PP table)
 * or list of strings describing the cycle and the points of location to apply the machining cycle.<br>
 * Depending on environment, description of tool motions OR syntax of machining cycle will be generated in NC code file.<br>
 * Note that linking motions can be stored between cycle location points of the CATIMfgToolPathCycle object with 
 *   @href CATIMfgTPCycleLinkingMotion interface.
 * 
 * @see CATIMfgTPCycleLinkingMotion
 */

class ExportedByMfgItfEnv CATIMfgToolPathCycle : public CATIMfgCompoundTraject
{
  CATDeclareInterface ;  

  public:
 
  /**
   *   Sets location points coordinates. 
   *    @param iLocationPoints
   *	  The location points coordinates
   **/
  virtual CATBoolean SetCycleLocationPoints (CATMathSetOfPoints& iLocationPoints) =0 ;

  /**
   *   Sets axis relative to location points (Multi-axis machining). 
   *    @param iLocationAxis
   *	  The coordinates of axis relative to location points
   **/
  virtual CATBoolean SetCycleLocationAxis (CATMathSetOfVectors& iLocationAxis) =0 ;

  /**
   *   Retrieves location points coordinates.
   *   @param oLocationPoints
   *	The location points coordinates
   * 	The return code
   *   <br><b>Legal values</b>:
   *   <ul>
   *   <li>TRUE : Location points found.</li>
   *   <li>FALSE: No location points found.</li>
   *   </ul>
  **/
  virtual CATBoolean GetCycleLocationPoints (CATMathSetOfPoints& oLocationPoints) =0 ;

  /**
   *   Retrieves axis relative to location points (Multi-axis machining).
   *   @param oLocationAxis
   *	The coordinates of axis relative to location points
   *   @return
   * 	The return code
   *   <br><b>Legal values</b>:
   *   <ul>
   *   <li>TRUE : Axis relative to location points found.</li>
   *   <li>FALSE: No axis found.</li>
   *   </ul>
  **/
  virtual CATBoolean GetCycleLocationAxis (CATMathSetOfVectors& oLocationAxis) =0 ;

   /**
   *   Evaluates syntax relative to a NC_Command stored on the object.
   *   @param oSyntax
   *	 The value of syntax 
   *   @return
   * 	The return code
   *   <br><b>Legal values</b>:
   *   <ul>
   *   <li>TRUE : NC_command found and correctly evaluated.</li>
   *   <li>FALSE: No NC_command found.</li>
   *   </ul>
   **/
  virtual CATBoolean GetCommandEvaluation (CATListValCATUnicodeString& oSyntax) =0 ;


   /**
   *   Retrieves user syntax relative to NC_Command stored on the object. 
   *   @param oUserSyntax
   *	 The value of user syntax 
   *   @return
   * 	The return code
   *   <br><b>Legal values</b>:
   *   <ul>
   *   <li>TRUE : User syntax found.</li>
   *   <li>FALSE: No user syntax found.</li>
   *   </ul>
   **/ 
  virtual CATBoolean GetUserSyntax (      CATListValCATUnicodeString& oUserSyntax) = 0;

   /**
   *   Sets output mode.
   *   @param iOutputMode
   *     The output mode
   *   <br><b>Legal values</b>:
   *   <ul>
   *   <li>0 (default) : undefined (will be determined later, during generation of NC code, from attributes of operation).</li>
   *   <li>1           : tools motions, children of the object, are generated in NC code.</li>
   *   <li>2           : syntax of NC Command or user syntax stored on the object has to be generated in NC code</li>
   *   </ul>
   **/
  virtual CATBoolean SetOutputMode (const int iOutputMode=0) =0 ;

   /**
   *   Retrieves output mode.
   *   @param oOutputMode
   *     The output mode
   *   <br><b>Legal values</b>:
   *   <ul>
   *   <li>0 (default) : undefined (will be determined later, during generation of NC code, from attributes of operation).</li>
   *   <li>1           : tools motions, children of the object, are generated in NC code.</li>
   *   <li>2           : syntax of NC Command or user syntax stored on the object has to be generated in NC code</li>
   *   </ul>
   **/
  virtual CATBoolean GetOutputMode (int& oOutputMode) =0 ;

   /**
   * @nodoc
   **/
   virtual CATBoolean SetHoleNumber (int iOutputMode) =0 ;

   /**
   * @nodoc
   **/
   virtual CATBoolean GetHoleNumber (int& iOutputMode) =0 ;

   /**
   * @nodoc
   */
   virtual CATBoolean GetPPCommand (CATIMfgPPCommand_var& oPPCommand) =0 ;

  /**
  *  @nodoc  
  **/
  virtual CATBoolean SetPPCommand (const CATIMfgPPCommand_var& iPPCommand) =0 ;

  /**
  *  @nodoc  
  **/
  virtual CATBoolean SetUserSyntax (const CATListValCATUnicodeString& iUserSyntax) = 0;


  /**
   *  Set the End PPCommand of the Cycle (NC_CYCLE_OFF by default)
   *   @param iPPCommand
   *     The PPCommand
  **/
  virtual CATBoolean SetEndPPCommand (const CATIMfgPPCommand_var& iPPCommand) =0 ;

  /**
   *   Create and Set the End PPCommand of the Cycle (NC_CYCLE_OFF by default)
   *   @param iPPCommandName
   *     The name of the PPCommand
   **/
  virtual CATBoolean SetEndPPCommand (const CATUnicodeString& iPPCommandName) =0 ;

   /**
   *   Retrieves the End PPCommand of the Cycle (NC_CYCLE_OFF by default)
   *   @param oPPCommand
   *     The PPCommand
   */
   virtual CATBoolean GetEndPPCommand (CATIMfgPPCommand_var& oPPCommand) =0 ;

  /**
   *   Evaluates syntax relative to a End NC_Command stored on the object.
   *   @param oSyntax
   *	 The value of syntax 
   *   @return
   * 	The return code
   *   <br><b>Legal values</b>:
   *   <ul>
   *   <li>TRUE : NC_command found and correctly evaluated.</li>
   *   <li>FALSE: No NC_command found.</li>
   *   </ul>
   **/
  virtual CATBoolean GetEndPPCommandEvaluation (CATListValCATUnicodeString& oSyntax) =0 ;

  /**
   *  Set the End UserSyntax of the Cycle (PPCommand NC_CYCLE_OFF by default)
   *   @param iUserSyntax
   *     The PPCommand
  **/
  virtual CATBoolean SetEndUserSyntax (const CATListValCATUnicodeString& iUserSyntax) = 0;

   /**
   *   Retrieves user syntax relative to NC_Command stored on the object. 
   *   @param oUserSyntax
   *	 The value of user syntax 
   *   @return
   * 	The return code
   *   <br><b>Legal values</b>:
   *   <ul>
   *   <li>TRUE : User syntax found.</li>
   *   <li>FALSE: No user syntax found.</li>
   *   </ul>
   **/ 
  virtual CATBoolean GetEndUserSyntax (CATListValCATUnicodeString& oUserSyntax) = 0;

};

CATDeclareHandler(CATIMfgToolPathCycle, CATIMfgCompoundTraject);

#endif







