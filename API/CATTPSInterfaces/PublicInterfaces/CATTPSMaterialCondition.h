#ifndef CATTPSMaterialCondition_H
#define CATTPSMaterialCondition_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * Material Condition modifier values.
 * The value <tt>RegardlessOfFeatureSize</tt> is valid only for ASME norm
 * and not for ISO.
 */
enum CATTPSMaterialCondition
{
  CATTPSMCUnsupported = -1,
  CATTPSMCNoModifier = 0,
  CATTPSMCMaximumMaterialCondition = 1,
  CATTPSMCLeastMaterialCondition = 2,
  CATTPSMCRegardlessOfFeatureSize = 3
};

#endif
