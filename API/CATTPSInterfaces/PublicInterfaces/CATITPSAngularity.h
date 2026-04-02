#ifndef CATITPSAngularity_H
#define CATITPSAngularity_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"

extern "C" const IID IID_CATITPSAngularity;

/**
 * Interface to angularity tolerance.
 * <b>Role</b>: Objects that implement this typing interface are angularity
 * tolerances. This type belongs to the orientation super type.
 * <p>
 * The angularity is an orientation specification. It defines the capability
 * for a surfaces to entirely be within the tolerance zone.
 * This tolerance zone is either cylindrical or made of two offset surfaces.
 * The global offset corresponds to the tolerance value itself. This 
 * tolerance zone has to be inclined regarding to the corresponding
 * simple datum or datum system.
 * <p>
 * Normative reference: ISO 1101 section 14.9.4 / ASME Y14.5M section 6.6.2.
 */

class CATITPSAngularity : public IUnknown
{
  public:

};
#endif

