#ifndef CATScuSelectiveUpdateInfo_H
#define CATScuSelectiveUpdateInfo_H
// COPYRIGHT DASSAULT SYSTEMES 2004

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATCommand.h"
class CATString;

/**
* Class used as input into Drafting's Update Selection Command.
* 
*/

class CATScuSelectiveUpdateInfo
{
  public: 
    /**
    * Default constructor. 
    */
    CATScuSelectiveUpdateInfo() {}

	/**
    * Initialize CATScuSelectiveUpdateInfo with application name,update mode.
    * @param iApplName 
    *  Application names such as PID,HVAC.
    * @param iUpdateMode 
    *  Update mode.
    * @param iCmdMode 
    *  Command mode.
    */
    CATScuSelectiveUpdateInfo(CATString &iApplName, CATString iUpdateMode,
                              CATCommandMode iCmdMode)
    { ApplName = iApplName; UpdateMode = iUpdateMode; CmdMode = iCmdMode; }
    
	/**
    * Application name.
    */
    CATString        ApplName;

	/**
    * Update Mode. 
    */
    CATString        UpdateMode;
	/**
    * Command Mode. 
    */
    CATCommandMode   CmdMode;
};

#endif
