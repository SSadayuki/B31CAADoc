#ifndef CATITPSParallelism_H
#define CATITPSParallelism_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"

extern "C" const IID IID_CATITPSParallelism;

/**
 * Interface to parallelism tolerance.
 * <b>Role</b>: Objects that implement this typing interface are parallelism
 * tolerances. This type belongs to orientation super type.
 * <p>
 * The parallelism is an orientation specification. It defines the capability
 * for a surfaces to entirely be  within the tolerance zone. This tolerance
 * zone is either cylindrical or made of two offset surfaces. The global offset
 * corresponds to the tolerance value itself. This tolerance zone has to be 
 * parallel oriented regarding to the corresponding simple datum or datum
 * system.
 * <p>
 * Normative reference: ISO 1101 section 14.7.3 / ASME Y14.5M section 6.6.3.
 */

class CATITPSParallelism : public IUnknown
{
  public:

};
#endif


