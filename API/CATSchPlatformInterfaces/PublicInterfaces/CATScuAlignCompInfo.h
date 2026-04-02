#ifndef CATScuAlignCompInfo_H
#define CATScuAlignCompInfo_H
// COPYRIGHT DASSAULT SYSTEMES 2004

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATScuAlignMode.h"
class CATString;
/**
* CATScuAlignCompInfo is class used as input into the Schematic interactive command:
* align  schematic  components command.
*/

class CATScuAlignCompInfo
{
  public: 
  /**
    * Default constructor. 
    */
    CATScuAlignCompInfo() {}
	/**
    * Initialize CATScuAlignCompInfo with application name,update mode.
    * @param iApplName 
    *  Application names such as PID,HVAC.
    * @param iAlignMode 
    *  Reshap alignment mode.
    */
	
    CATScuAlignCompInfo(CATString &iApplName, CATScuAlignMode iAlignMode)
    { ApplName = iApplName; AlignMode = iAlignMode; }
    
	/**
    * Application name.
    */

    CATString        ApplName;

	/**
    * Align mode type.
    */
    CATScuAlignMode  AlignMode;
};

#endif
