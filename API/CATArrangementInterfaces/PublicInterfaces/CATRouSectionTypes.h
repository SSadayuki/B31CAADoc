#ifndef CATRouSectionTypes_H
#define CATRouSectionTypes_H
// COPYRIGHT DASSAULT SYSTEMES 2000

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

/**
 * Section shape.
 * @param CatRouSectionNone
 *   There is no section shape (it is considered a point).
 * @param CatRouSectionRect
 *   The section is rectangular.
 * @param CatRouSectionRound
 *   The section is round (circular).
 * @param CatRouSectionFlatOval
 *   The section is flat-oval (flat top/bottom, round sides).
 *
 * @param CatRouSectionFirst
 *   The first item in this enumeration, for traversing the list.
 * @param CatRouSectionLast
 *   The last item in this enumeration, for traversing the list.
 */
enum CATRouSectionTypes { CatRouSectionNone,
                          CatRouSectionRect,
                          CatRouSectionRound,
                          CatRouSectionFlatOval, 
                          CatRouSectionRadiusCorner, 
                          CatRouSectionDoubleRidge };

/**
 * Section shape for CatRouSectionFirst.
 *   Assigned to as CatRouSectionNone.
 */
#define CatRouSectionFirst CatRouSectionNone

/**
 * Section shape for CatRouSectionLast.
 *   Assigned to as CatRouSectionDoubleRidge.
 */
#define CatRouSectionLast  CatRouSectionDoubleRidge

#endif
