#ifndef CATITPSStraightness_H
#define CATITPSStraightness_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"

extern "C" const IID IID_CATITPSStraightness;

/**
 * Interface to straightness tolerance.
 * <b>Role</b>: Objects that implement this typing interface are straightness
 * tolerances. This type belongs to the form super type.
 * <p>
 * It defines the capability of a line supposed straight, either extracted 
 * from a planar surface or corresponding to the axis of a cylindrical surface,
 * to entirely be within the tolerance zone.
 * This tolerance zone is a space limited with two t-apart parallel lines 
 * in the annotation plane or a volume limited with one t-diameter cylinder.
 * A form tolerance is specified without any reference frame.
 * <p>
 * Normative reference: ISO 1101 section 14.1 and ASME Y14.5M section 6.4.1.
 */

class CATITPSStraightness : public IUnknown
{
  public:

};
#endif

