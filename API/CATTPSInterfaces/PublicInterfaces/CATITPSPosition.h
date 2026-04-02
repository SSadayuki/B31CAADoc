#ifndef CATITPSPosition_H
#define CATITPSPosition_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"

extern "C" const IID IID_CATITPSPosition;

/**
 * Interface to position tolerance.
 * <b>Role</b>: Objects that implement this typing interface are position
 * tolerances. It is a super type.
 * <p>
 * A position specification may be location, concentricity, symmetry, a
 * line position or surface position. It defines the capability for a surfaces
 * to entirely be  within the tolerance zone. This tolerance zone is either
 * cylindrical or made of two offset surfaces. The global offset corresponds
 * to the tolerance value itself. This tolerance zone has to be positioned
 * regarding to the corresponding simple datum or datum system.
 * <p>
 * Normative reference: ISO 1101 section 14.11/ ASME Y14.5M section 5.13.
 */

class CATITPSPosition : public IUnknown
{
  public:

};
#endif

