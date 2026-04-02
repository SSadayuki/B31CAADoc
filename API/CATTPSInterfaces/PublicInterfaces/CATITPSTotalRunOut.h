#ifndef CATITPSTotalRunOut_H
#define CATITPSTotalRunOut_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"

extern "C" const IID IID_CATITPSTotalRunOut;

/**
 * Interface to total runout tolerance.
 * <b>Role</b>: Objects that implement this typing interface are total runout
 * tolerances. This type belongs to the runout super type.
 * <p>
 * It defines the capability of a surface supposed cylindrical or planar,
 * to entirely be within the tolerance zone.
 * This tolerance zone is a volume, limited by either two t-apart coaxial
 * cylinders, whose common axis is coincident with the datum axis(axes),
 * or two t-apart parallel planes, perpendicular to the datum axis(axes).
 * <p>
 * Normative reference: ISO 1101 section 14.14.1/2 and ASME Y14.5M section
 * 6.3.1.
 */

class CATITPSTotalRunOut : public IUnknown
{
  public:

};
#endif

