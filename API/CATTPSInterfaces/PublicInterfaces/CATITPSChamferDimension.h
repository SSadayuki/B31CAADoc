#ifndef CATITPSChamferDimension_H
#define CATITPSChamferDimension_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"

extern "C" const IID IID_CATITPSChamferDimension;

/**
 * Interface to chamfer dimension tolerance.
 * <b>Role</b>: Objects that implement this typing interface are chamfer
 * dimension tolerances. This type belongs to the dimension super type.
 * <p>
 * The chamfer dimension represents the lengths of the elements constituting
 * the chamfer and computed either along a line or an arc. It defines the 't'
 * range in which the dimension value will be located.
 * <p>
 * Normative reference: ISO 406, ISO 8015 and ASME Y14.5M section 1.8.15.
 */

class CATITPSChamferDimension : public IUnknown
{
  public:

};
#endif

