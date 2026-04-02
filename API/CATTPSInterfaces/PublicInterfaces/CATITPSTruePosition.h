#ifndef CATITPSTruePosition_H
#define CATITPSTruePosition_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"

extern "C" const IID IID_CATITPSTruePosition;

/**
 * Interface to true position (or location) tolerance.
 * <b>Role</b>: Objects that implement this typing interface are true position
 * tolerances. This type belongs to the position super type.
 * <p>
 * It defines the capability for a surfaces to entirely be  within
 * the tolerance zone. This tolerance zone is either cylindrical or made of two
 * offset surfaces. The global offset corresponds to the tolerance value
 * itself. This tolerance zone has to be positioned regarding to the
 * corresponding simple datum or datum system.
 * <p>
 * Normative reference: ISO 1101 section 14.10.1/2/3 and ASME Y14.5M section
 * 5.11.1 and 5.13.
 */

class CATITPSTruePosition : public IUnknown
{
  public:

};
#endif

