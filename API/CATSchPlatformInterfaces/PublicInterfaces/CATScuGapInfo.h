#ifndef CATScuGapInfo_H
#define CATScuGapInfo_H
// COPYRIGHT DASSAULT SYSTEMES 2004

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATScuGapAllMode.h"
class CATString;
/**
* Class used as input into Gap All Command.
* 
*/
class CATScuGapInfo
{
  public: 
   /**
    * Default constructor. 
    */
    CATScuGapInfo() {}
	/**
    * Initialize CATScuGapInfo with application name,gap mode.
    * @param iApplName 
    *  Application names such as PID,HVAC.
    * @param iGapMode 
    *  show gap or noshow gap mode.
    */
    CATScuGapInfo(CATString &iApplName, CATScuGapAllMode iGapMode)
    { ApplName = iApplName; GapMode = iGapMode; }

	/**
    * Application name.
    */
    CATString         ApplName;

	/**
    * Gap All Mode type.
    */
    CATScuGapAllMode  GapMode;
};
#endif
