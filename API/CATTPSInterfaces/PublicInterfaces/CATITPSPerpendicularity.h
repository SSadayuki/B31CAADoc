#ifndef CATITPSPerpendicularity_H
#define CATITPSPerpendicularity_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"

extern "C" const IID IID_CATITPSPerpendicularity;

/**
 * Interface to perpendicularity tolerance.
 * <b>Role</b>: Objects that implement this typing interface are 
 * perpendicularity tolerances. This type belongs to orientation super type.
 * <p>
 * The perpendicularity is an orientation specification. It defines the 
 * capability for a surfaces to entirely be  within the tolerance
 * zone. This tolerance zone is either cylindrical or made of two offset
 * surfaces. The global offset corresponds to the tolerance value itself.
 * This tolerance zone has to be perpendicularly oriented regarding to
 * the corresponding simple datum or datum system.
 * <p>
 * Normative reference: ISO 1101 section 14.7.3 / ASME Y14.5M section 6.6.4
 */

class CATITPSPerpendicularity : public IUnknown
{
  public:

};
#endif

