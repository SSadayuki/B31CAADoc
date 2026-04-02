#ifndef CATScuFlipMode_H
#define CATScuFlipMode_H
// COPYRIGHT DASSAULT SYSTEMES 2004

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * The flip schematic component mode.
 * @param ScuFlipMode_FlipHoriz
 *  Flip horizental type
 * @param ScuFlipMode_FlipVert
 *  Flip vertical type
 * @param ScuFlipMode_FlipInLine
 *  Flip inline compoent type
 */
enum CATScuFlipMode
{
  ScuFlipMode_FlipHoriz  = 1,
  ScuFlipMode_FlipVert   = 2,
  ScuFlipMode_FlipInLine = 3
};
#endif

