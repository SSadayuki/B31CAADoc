#ifndef CATITPSProfileOfAnyLine_H
#define CATITPSProfileOfAnyLine_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"

extern "C" const IID IID_CATITPSProfileOfAnyLine;

/**
 * Interface to profile of any line tolerance without reference.
 * <b>Role</b>: Objects that implement this typing interface are profile of any
 * line tolerances. This type belongs to the form super type.
 * <p>
 * It defines the capability of each line element of the surfaces to entirely
 * be within the tolerance zone. This tolerance zone is a space limited by two
 * t-apart offset lines. A form tolerance is specified without any reference
 * frame.
 * <p>
 * Normative reference: ASME Y14.5M section 6.5.1/3/6/8.
 */

class CATITPSProfileOfAnyLine : public IUnknown
{
  public:

};
#endif

