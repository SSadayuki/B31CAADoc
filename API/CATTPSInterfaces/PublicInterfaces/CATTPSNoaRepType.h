#ifndef CATTPSNoaRepType_H
#define CATTPSNoaRepType_H

// COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

/**
 * Kind of graphical representation of Note Object Attribute (Text or Ditto).
 */
enum CATTPSNoaRepType
{
  CATTPSNRTUndefined       = 0,
  CATTPSNRTText            = 1,
  CATTPSNRTDitto           = 2,
  CATTPSNRTDittoOnGeometry = 3
};

#endif
