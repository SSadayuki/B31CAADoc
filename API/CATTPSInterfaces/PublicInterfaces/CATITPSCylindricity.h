#ifndef CATITPSCylindricity_H
#define CATITPSCylindricity_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"

extern "C" const IID IID_CATITPSCylindricity;

/**
 * Interface to cylindricity tolerance.
 * <b>Role</b>: Objects that implement this typing interface are cylindricity
 *  tolerances. This type belongs to the form super type.
 * <p>
 * It defines the capability of an assimilated cylindrical surface (and all the 
 * points constituting this surface) to entirely be within the tolerance zone.
 * This tolerance zone is a volume limited by two t-apart coaxial cylinders.
 * A form tolerance is specified without any reference frame.
 * <p>
 * Normative reference: ISO 1101 section 14.4 and ASME Y14.5M section 6.4.3.
 */

class CATITPSCylindricity : public IUnknown
{
  public:

};
#endif

