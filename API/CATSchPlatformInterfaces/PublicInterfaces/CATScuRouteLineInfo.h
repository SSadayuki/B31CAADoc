#ifndef CATScuRouteLineInfo_H
#define CATScuRouteLineInfo_H
// COPYRIGHT DASSAULT SYSTEMES 2004

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATString.h"
#include "CATCommand.h"
#include "CATSchGeneralEnum2.h"


/**
  * Class used as input into Route lines command.
*/
class CATScuRouteLineInfo
{
  public: 
    /**
    * Default constructor.
    * 
    */
    CATScuRouteLineInfo() {}
	/**
    * Initialize CATScuRouteLineInfo with application name,route line type.
    * @param iApplName 
    *  Application names such as PID,HVAC..
    * @param iRouteCntrClassType 
    *  Route Connector class type
    * @param iAppRouteClassType 
    *  Application type.
    * @param iLogLineClassType 
    *  Route line class type.
    */
    CATScuRouteLineInfo(CATString &iApplName, CATString &iRouteCntrClassType,
                        CATString &iAppRouteClassType,
                        CATString &iLogLineClassType)

    { ApplName = iApplName; RouteCntrClassType = iRouteCntrClassType;
      AppRouteClassType = iAppRouteClassType;
      LogLineClassType = iLogLineClassType; }
    
	/**
    * Application name.
    */
    CATString ApplName;
	/**
    * Connector type.
    */
    CATString RouteCntrClassType;
	/**
    * Route type.
    */
    CATString AppRouteClassType;
	/**
    * Logline class type.
    */
    CATString LogLineClassType;
};

#endif
