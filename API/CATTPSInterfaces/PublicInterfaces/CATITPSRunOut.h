#ifndef CATITPSRunOut_H
#define CATITPSRunOut_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"

extern "C" const IID IID_CATITPSRunOut;

/**
 * Interface to runout tolerance.
 * <b>Role</b>: Objects that implement this typing interface are runout
 * tolerances. It is a super type.
 * <p>
 * The runout tolerance can be either an axial or a total runout specification.
 * It defines the capability of a circular line or cylindrical or planar 
 * surface to entirely be within the tolerance zone. This tolerance zone is a
 * surface limited with two t-apart elements whose common axis is coincident
 * with the datum axis(axes), or a volume limited with two t-apart parallel 
 * elements perpendicular to the datum axis(axes).
 * <p>
 * Normative reference: ISO 1101 section 14.13 & 14.14 and ASME Y14.5M section
 * 6.3.1.
 */

class CATITPSRunOut : public IUnknown
{
  public:

};
#endif

