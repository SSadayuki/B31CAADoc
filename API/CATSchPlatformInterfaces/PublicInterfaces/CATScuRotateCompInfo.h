#ifndef CATScuRouteCompInfo_H
#define CATScuRouteCompInfo_H
// COPYRIGHT DASSAULT SYSTEMES 2004

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */
#include "CATString.h"
#include "CATCommand.h"
#include "CATSchGeneralEnum2.h"
#include "CATScuRotateMode.h"
/**
* Class used as input into Rotate component command.
* 
*/
class CATScuRotateCompInfo
{
  public: 
   /**
    * Default constructor.
    * 
    */
    CATScuRotateCompInfo() {}

	/**
    * Initialize CATScuRotateCompInfo with application name,rotate mode.
    * @param iApplName 
    *  Application names such as PID,HVAC.
    * @param iRotateMode 
    *  Rotate component mode.
    */
    CATScuRotateCompInfo(CATString &iApplName, CATScuRotateMode iRotateMode)
    { ApplName = iApplName; RotateMode = iRotateMode; }

	/**
    * Application name.
    */
    CATString         ApplName;

	/**
    * Rotate mode type.
    */
    CATScuRotateMode  RotateMode;
};

#endif
