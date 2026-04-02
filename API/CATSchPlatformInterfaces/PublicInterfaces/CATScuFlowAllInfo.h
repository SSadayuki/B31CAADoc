#ifndef CATScuFlowAllInfo_H
#define CATScuFlowAllInfo_H
// COPYRIGHT DASSAULT SYSTEMES 2004

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */
#include "CATString.h"
#include "CATCommand.h"
#include "CATSchGeneralEnum2.h"
#include "CATScuFlowAllMode.h"

/**
* Class used as input into Show Flows Command.
* 
*/
class CATScuFlowAllInfo
{
  public: 
   /**
    * Default constructor. 
    */
    CATScuFlowAllInfo() {}
	/**
    * Initialize CATScuFlowAllInfo with application name,rotate mode.
    * @param iApplName 
    *  Application names such as PID,HVAC.
    * @param iFlowMode 
    *  Flip component mode.
    */
    CATScuFlowAllInfo(CATString &iApplName, CATScuFlowAllMode iFlowMode)
    { ApplName = iApplName; FlowAllMode = iFlowMode; }
    
	/**
    * Application name.
    */
    CATString          ApplName;
	/**
    * Flip All Mode type.
    */
    CATScuFlowAllMode  FlowAllMode;
};
#endif
