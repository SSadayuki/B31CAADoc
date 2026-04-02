// COPYRIGHT Dassault Systemes 2008
/**
* @CAA2Level L1
* @CAA2Usage U1
*/
//===================================================================
#ifndef CAT2DLClippingProfileMode_H
#define CAT2DLClippingProfileMode_H


/**
 * Clipping mode for 2DLayout View.
 *   @param Layout2DProfileOff
 *    No clipping profile applied.
 *   @param Layout2DProfileRectangle
 *    Frame clipping profile is applied.
 *   @param Layout2DProfileCircle
 *    Circular clipping profile is applied.
 *   @param Layout2DProfilePolygon
 *    Polygon clipping profile is applied.
 */
enum CAT2DLClippingProfileMode {Layout2DProfileOff,
                                Layout2DProfileRectangle,
                                Layout2DProfileCircle,
                                Layout2DProfilePolygon};
#endif
