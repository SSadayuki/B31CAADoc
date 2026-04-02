#ifndef CATITPSAngularDimension_H
#define CATITPSAngularDimension_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"

extern "C" const IID IID_CATITPSAngularDimension;

/**
 * Interface to angular dimension tolerance.
 * <b>Role</b>: Objects that implement this typing interface are angular
 * dimension tolerances. This type belongs to the dimension super type.
 * <p>
 * The angular dimension represents the deviation between two elements computed
 * along an arc. It defines the 't' range in which the dimension value will be
 * located.
 * <p>
 * Normative reference: ISO 406, ISO 8015 and ASME Y14.5M section 1.8.
 */

class CATITPSAngularDimension : public IUnknown
{
  public:

};
#endif

