#ifndef CATRouSetPointNames_H
#define CATRouSetPointNames_H
// COPYRIGHT DASSAULT SYSTEMES 2000

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

/**
 * Position of Section relative to the support line.
 * @param CatRouSetPointTopLeft
 *   The top, left corner of the surrounding rectangle.
 * @param CatRouSetPointTopCenter
 *   The top, center position of the surrounding rectangle.
 * @param CatRouSetPointTopRight
 *   The top, right corner of the surrounding rectangle.
 * @param CatRouSetPointCenterLeft
 *   The vertical center, left position of the surrounding rectangle.
 * @param CatRouSetPointCenterCenter
 *   The vertical center, horizontal center position of the surrounding rectangle.
 * @param CatRouSetPointCenterRight
 *   The vertical center, right position of the surrounding rectangle.
 * @param CatRouSetPointBottomLeft
 *   The bottom, left corner of the surrounding rectangle.
 * @param CatRouSetPointBottomCenter
 *   The bottom, center position of the surrounding rectangle.
 * @param CatRouSetPointBottomRight
 *   The bottom, right corner of the surrounding rectangle.
 * @param CatRouSetPointFirst
 *   The first item in this enumeration, for traversing the list.
 * @param CatRouSetPointLast
 *   The last item in this enumeration, for traversing the list.
 */
enum   CATRouSetPointNames   
{ 
  CatRouSetPointTopLeft,    
  CatRouSetPointTopCenter,    
  CatRouSetPointTopRight,
  CatRouSetPointCenterLeft, 
  CatRouSetPointCenterCenter, 
  CatRouSetPointCenterRight,
  CatRouSetPointBottomLeft, 
  CatRouSetPointBottomCenter, 
  CatRouSetPointBottomRight 
};

/**
 * Position of Section relative to the support line for CatRouSetPointFirst.
 *   Assigned to as CatRouSetPointTopLeft.
 */
#define CatRouSetPointFirst CatRouSetPointTopLeft

/**
 * Position of Section relative to the support line for CatRouSetPointLast.
 *   Assigned to as CatRouSetPointBottomRight.
 */
#define CatRouSetPointLast  CatRouSetPointBottomRight

#endif
