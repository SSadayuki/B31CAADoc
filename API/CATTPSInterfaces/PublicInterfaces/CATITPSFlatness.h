#ifndef CATITPSFlatness_H
#define CATITPSFlatness_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"

extern "C" const IID IID_CATITPSFlatness;

/**
 * Interface to flatness tolerance.
 * <b>Role</b>: Objects that implement this typing interface are flatness
 * tolerances. This type belongs to the form super type.
 * <p>
 * It defines the capability of a surface supposed planar, to entirely be 
 * within the tolerance zone. This tolerance zone is a volume, limited by two
 * t-apart parallel planes. A form tolerance is specified without any 
 * reference frame.
 * <p>
 * Normative reference: ISO 1101 section 14.2 and ASME Y14.5M section 6.4.2.
 */

class CATITPSFlatness : public IUnknown
{
  public:

};
#endif

