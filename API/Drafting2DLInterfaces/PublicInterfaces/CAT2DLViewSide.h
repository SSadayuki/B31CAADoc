// COPYRIGHT Dassault Systemes 2007
/**
* @CAA2Level L1
* @CAA2Usage U1
*/
//===================================================================
#ifndef CAT2DLViewSide_H
#define CAT2DLViewSide_H


/**
 * CAT2DLViewSide is used in conjonction with a reference View2DL
 * and a ViewBox.
 * <br><b>Role</b>:It then determines precisely a View2DL type in the ViewBox.
 * example: with the default ViewBox:
 *  - Front + TopSide  = Top.
 *  - Right + LeftSide = Front.
 *  - Front + TRCorner = isometric on the corner near Front, Right, Top.
 */
enum CAT2DLViewSide { View2DLTopSide,
                      View2DLBottomSide,
                      View2DLLeftSide,
                      View2DLRightSide,
                      View2DLTLCorner,
                      View2DLTRCorner,
                      View2DLBLCorner,
                      View2DLBRCorner };
#endif
