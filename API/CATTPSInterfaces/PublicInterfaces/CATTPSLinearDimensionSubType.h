#ifndef CATTPSLinearDimensionSubType_H
#define CATTPSLinearDimensionSubType_H

// COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

/**
 * Enum to describe the sub type of  a linear dimension.
 */

enum CATTPSLinearDimensionSubType
{ 
  CATTPSDistanceDimension        = 0,
  CATTPSDiameterDimension        = 1,
  CATTPSRadiusDimension          = 2,
  CATTPSThreadDimension          = 3,

  CATTPSChamfDistDistDimension   = 4,
  CATTPSChamfDistAngDimension    = 5
};

#endif
