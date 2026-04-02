#ifndef CATITPSOrientation_H
#define CATITPSOrientation_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"

extern "C" const IID IID_CATITPSOrientation;

/**
 * Interface to orientation tolerance.
 * <b>Role</b>: Objects that implement this typing interface are orientation
 * tolerances. It is a super type.
 * <p>
 * An orientation specification may be either parallelism or perpendicularity
 * or angularity. It defines the capability for a surfaces to entirely be 
 * within the tolerance zone. This tolerance zone is either cylindrical or made
 * of two offset surfaces. The global offset corresponds to the tolerance value
 * itself. This tolerance zone has to be oriented regarding to the
 * corresponding simple datum or datum system.
 * <p>
 * Normative reference: ISO 1101 section 14.9/ ASME Y14.5M section 6.6.
 */

class CATITPSOrientation : public IUnknown
{
  public:

};
#endif

