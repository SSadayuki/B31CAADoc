#ifndef CATRouNodeGeomStatus_H
#define CATRouNodeGeomStatus_H
// COPYRIGHT DASSAULT SYSTEMES 2000

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

/**
 * The validity status of the string geometry at a node.
 * @param NoStatus
 *   The ...
 * @param SuprtLinesIntAndCntrLinesInt
 *   The ...
 * @param SuprtLinesColinearAndCntrLinesColinear
 *   The ...
 * @param SuprtLinesIntAndCntrLinesSkew
 *   The ...
 * @param SuprtLinesInt
 *   The ...
 * @param SuprtLinesSkew
 *   The ...
 * @param ExtremityNodeConnected
 *   The ...
 * @param ExtremityNodeNotConnected
 *   The ...
 * @param TurnRadiusFits
 *   The ...
 * @param TurnRadiusTooLarge
 *   The ...
 */
enum CATRouNodeGeomStatus 
{
  NoStatus,
  SuprtLinesIntAndCntrLinesInt,
  SuprtLinesColinearAndCntrLinesColinear,
  SuprtLinesIntAndCntrLinesSkew,
  SuprtLinesInt,
  SuprtLinesSkew,
  ExtremityNodeConnected,
  ExtremityNodeNotConnected,
  TurnRadiusFits,   
  TurnRadiusTooLarge   
};

#endif
