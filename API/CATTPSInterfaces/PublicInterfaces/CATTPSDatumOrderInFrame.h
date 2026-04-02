#ifndef CATTPSDatumOrderInFrame_H
#define CATTPSDatumOrderInFrame_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * To define the order of precedence of the datum
 * inside the reference frame it belongs to.
 * ex: A|B|C with Primary|Secondary|Tertiary 
 */
enum CATTPSDatumOrderInFrame
{
  CATTPSDOIFUnsupported = -1,
  CATTPSDOIFNotDefined = 0,
  CATTPSDOIFPrimary = 1,
  CATTPSDOIFSecondary = 2,
  CATTPSDOIFTertiary = 3
};

#endif
