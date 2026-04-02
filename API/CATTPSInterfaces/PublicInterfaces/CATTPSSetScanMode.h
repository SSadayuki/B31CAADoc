#ifndef CATTPSSetScanMode_H
#define CATTPSSetScanMode_H

// COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

/**
 * Defines the differents way to search for the tolerancing sets.
 * @see CATITPSDocument
 */
enum CATTPSSetScanMode
{
  CATTPSSSMUndefined = -1,
  CATTPSSSMLocal = 0,
  CATTPSSSMRecursive = 1
};

#endif
