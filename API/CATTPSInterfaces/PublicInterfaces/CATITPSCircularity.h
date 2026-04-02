#ifndef CATITPSCircularity_H
#define CATITPSCircularity_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"

extern "C" const IID IID_CATITPSCircularity;

/**
 * Interface to circularity (or roundness) tolerance.
 * <b>Role</b>: Objects that implement this typing interface are circularity
 *  tolerances. This type belongs to the form super type.
 * <p>
 * It defines the capability of a circular line (and all the points
 * constituting this line) extracted from a cylindrical surface, to entirely
 * be within the tolerance zone. This tolerance zone is a space limited by two
 * t-apart concentric circles. A form tolerance is specified without any 
 * reference frame.
 * <p>
 * Normative reference: ISO 1101 section 14.3 and ASME Y14.5M section 6.4.3.
 */

class CATITPSCircularity : public IUnknown
{
  public:

};
#endif

