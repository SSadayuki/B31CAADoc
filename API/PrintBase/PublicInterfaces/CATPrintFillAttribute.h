#ifndef CATPRINTFILLATTRIBUTE_H
#define CATPRINTFILLATTRIBUTE_H
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/

// COPYRIGHT DASSAULT SYSTEMES 2002


/**
 * Fill mode attribute.
 * @param CATPRINTFILL_EMPTY
 *   The closed primitive is not filled.
 * @param CATPRINTFILL_SOLID
 *   The closed primitive is painted with color.
 * @param CATPRINTFILL_PATTERN
 *   The closed primitive is painted with pattern.
 */
enum CATPrintFillMode
{
    CATPRINTFILL_EMPTY,
    CATPRINTFILL_SOLID,
    CATPRINTFILL_PATTERN
};	

/**
 * Edge mode attribute.
 * @param CATPRINTEDGE_NONE
 *   The closed primitive edges are not drawn.
 * @param CATPRINTEDGE_SOLID
 *   The closed primitive edges are drawn with color.
 */
enum CATPrintEdgeMode
{
    CATPRINTEDGE_NONE,
    CATPRINTEDGE_SOLID
};	

/**
 * Polygon fill rule attribute.
 * @param CATPrintFill_EvenOdd,
 *   Parts of polygon with odd winding number to be filled
 * @param CATPrintFill_NonZero,
 *   Parts of polygon with non-zero winding number to be filled
 */
enum CATPrintFillRule
{
  CATPrintFill_EvenOdd=0, 
  CATPrintFill_NonZero,   
};


#endif
