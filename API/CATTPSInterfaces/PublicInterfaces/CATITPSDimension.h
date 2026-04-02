#ifndef CATITPSDimension_H
#define CATITPSDimension_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"

extern "C" const IID IID_CATITPSDimension;

/**
 * Interface to dimension tolerance.
 * <b>Role</b>: Objects that implement this typing interface are dimension
 * tolerances. It is a super type.
 * <p>
 * The dimension tolerance can be: linear, angular, second linear, chamfer, 
 * framed (ISO) or basic (ASME). It defines the range in which the dimension
 * value will be located.
 * <p>
 * Normative reference: ISO 406, ISO 8015, ISO 1101 and ASME Y14.5M section 1.8
 * and 1.3.9.
 */

class CATITPSDimension : public IUnknown
{
  public:

};
#endif

