#ifndef CATPRINTMARKERATTRIBUTE_H
#define CATPRINTMARKERATTRIBUTE_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * Marker attribute.
 * @param CATPRINTMARKER_CROSS
 *   The markers are drawn as crosses (x).
 * @param CATPRINTMARKER_PLUS
 *   The markers are drawn as plus (+).
 * @param CATPRINTMARKER_CONCENTRIC
 *   The markers are drawn as circle (o).
 * @param CATPRINTMARKER_COINCIDENT
 *   The markers are drawn as two concentric circles.
 * @param CATPRINTMARKER_FULLCIRCLE
 *   The markers are drawn as full circles.
 * @param CATPRINTMARKER_FULLSQUARE
 *   The markers are drawn as full squares.
 * @param CATPRINTMARKER_STAR
 *   The markers are drawn as stars (*).
 * @param CATPRINTMARKER_DOT
 *   The markers are drawn as dots (.).
 * @param CATPRINTMARKER_SMALLDOT
 *   The markers are drawn as small dots.
 */
enum CATPrintMarkerAttribute
{
  CATPRINTMARKER_CROSS,
  CATPRINTMARKER_PLUS,
  CATPRINTMARKER_CONCENTRIC,
  CATPRINTMARKER_COINCIDENT,
  CATPRINTMARKER_FULLCIRCLE,
  CATPRINTMARKER_FULLSQUARE,
  CATPRINTMARKER_STAR,
  CATPRINTMARKER_DOT,
  CATPRINTMARKER_SMALLDOT
};

#endif
