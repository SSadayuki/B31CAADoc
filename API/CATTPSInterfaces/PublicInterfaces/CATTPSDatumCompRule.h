#ifndef CATTPSDatumCompRule_H
#define CATTPSDatumCompRule_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * Datum system composition rule values.
 * <ul> A|B : With Hierarchy, A is Primary and B is Secondary.
 * <r>  A-B : Without Hierarchy, A and B simultaneously.
 * <r>  A B : Indifferent Hierarchy, means A|B or B|A at choice.
 * </ul>
 * The value <tt>IndifferentHierarchy</tt> is valid only for ISO norm
 * and not for ASME. However it is not a recommanded notation.
 */
enum CATTPSDatumCompRule
{
  CATTPSDCRUnsupported = -1,
  CATTPSDCRNotDefined = 0,
  CATTPSDCRWithHierarchy = 1,
  CATTPSDCRWithoutHierarchy = 2,
  CATTPSDCRIndifferentHierarchy = 3
};

#endif
