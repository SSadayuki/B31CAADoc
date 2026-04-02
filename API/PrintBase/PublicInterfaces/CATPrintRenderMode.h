#ifndef CATPRINTRENDERMODE_H
#define CATPRINTRENDERMODE_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * Rendering mode.
 * @param CATPRINTRENDER_DEFAULT
 *   The default rendering mode is vector.
 * @param CATPRINTRENDER_VECTOR
 *   The rendering mode is vector.
 * @param CATPRINTRENDER_RASTER
 *   The rendering mode is raster if it's possible to create the image raster.
 *   Otherwise the CATPRINTRENDER_VECTOR mode is applied.
 * @param CATPRINTRENDER_CAPTURE
 *   For the screen capture. Identical to CATPRINTRENDER_RASTER.
 * @param CATPRINTRENDER_HLR
 *   The rendering mode is hidden line removal vector mode.
 */

enum CATPrintRenderMode
{
    CATPRINTRENDER_DEFAULT,
    CATPRINTRENDER_VECTOR,
    CATPRINTRENDER_RASTER,
    CATPRINTRENDER_CAPTURE,
    CATPRINTRENDER_HLR
};

#endif
