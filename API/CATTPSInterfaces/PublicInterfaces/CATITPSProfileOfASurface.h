#ifndef CATITPSProfileOfASurface_H
#define CATITPSProfileOfASurface_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"

extern "C" const IID IID_CATITPSProfileOfASurface;

/**
 * Interface to profile of a surface tolerance without reference.
 * <b>Role</b>: Objects that implement this typing interface are profile of a
 * surface tolerances. This type belongs to the form super type.
 * <p>
 * It defines the capability of the surfaces to entirely be within the 
 * tolerance zone. This tolerance zone is a space limited by two t-apart offset
 * surfaces. A form tolerance is specified without any reference frame.
 * <p>
 * Normative reference: ASME Y14.5M section 6.5.1/3/6/8
 */

class CATITPSProfileOfASurface : public IUnknown
{
  public:

};
#endif

