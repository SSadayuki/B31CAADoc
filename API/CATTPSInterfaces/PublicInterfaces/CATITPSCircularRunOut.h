#ifndef CATITPSCircularRunOut_H
#define CATITPSCircularRunOut_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"

extern "C" const IID IID_CATITPSCircularRunOut;

/**
 * Interface to circular runout tolerance.
 * <b>Role</b>: Objects that implement this typing interface are circular
 * runout tolerances. This type belongs to the runout super type.
 * <p>
 * It defines the capability of a circular line extracted from a cylindrical
 * surface or a planar line extracted from a planar surface to entirely be
 * within the tolerance zone. This tolerance zone is for any rotation limited
 * by either two t-apart concentric circles whose center is coincident with the
 * datum axis(axes), or two t-apart parallel planes perpendicular to the datum
 * axis(axes).
 * <p>
 * Normative reference: ISO 1101 section 14.13.1/2 and ASME Y14.5M section 
 * 6.3.1.
 */

class CATITPSCircularRunOut : public IUnknown
{
  public:

};
#endif

