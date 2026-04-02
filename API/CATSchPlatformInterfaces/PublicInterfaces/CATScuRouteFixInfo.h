#ifndef CATScuRouteFixInfo_H
#define CATScuRouteFixInfo_H
// COPYRIGHT DASSAULT SYSTEMES 2004

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */
#include "CATString.h"
#include "CATCommand.h"
#include "CATSchGeneralEnum2.h"


/**
* Class used as input into the Route Fix Command.
* 
*/
class CATScuRouteFixInfo
{
  public: 
   /**
    * Default constructor. 
    */
    CATScuRouteFixInfo() {}

	/**
    * Initialize CATScuRouteFixInfo with application name,reshape mode.
    * @param iApplName 
    *  Application names such as PID,HVAC.
    * @param iReshapeMode 
    *  Reshape route mode.
    */
    CATScuRouteFixInfo(CATString &iApplName, 
                          CATSchGRRRouteReshapeMode iReshapeMode)
    { ApplName = iApplName; ReshapeMode = iReshapeMode; }

	/**
    * Application name.
    */
    CATString                  ApplName;

	/**
    * Reshape mode type.
    */
    CATSchGRRRouteReshapeMode  ReshapeMode;
};
#endif
