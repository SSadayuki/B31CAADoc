#ifndef CATScuFlipCompInfo_H
#define CATScuFlipCompInfo_H
// COPYRIGHT DASSAULT SYSTEMES 2004

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */
#include "CATString.h"
#include "CATCommand.h"
#include "CATSchGeneralEnum2.h"
#include "CATScuFlipMode.h"


/**
* Class used as input into Flip Component Command.
*
*/
class CATScuFlipCompInfo
{
  public: 
   /**
    * Default constructor. 
    */
    CATScuFlipCompInfo() {}

	/**
    * Initialize CATScuFlipCompInfo with application name,flip mode.
    * @param iApplName 
    *  Application names such as PID,HVAC.
    * @param iFlipMode 
    *  Flip component mode.
    */
    CATScuFlipCompInfo(CATString &iApplName, CATScuFlipMode iFlipMode)
    { ApplName = iApplName; FlipMode = iFlipMode; }
    
	/**
    * Application name.
    */
    CATString       ApplName;

	/**
    * Flip mode type.
    */
    CATScuFlipMode  FlipMode;
};
#endif
