#ifndef CATITPSPositionOfASurface_H
#define CATITPSPositionOfASurface_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"

extern "C" const IID IID_CATITPSPositionOfASurface;

/**
 * Interface to position of a surface tolerance.
 * <b>Role</b>: Objects that implement this typing interface are position of a
 * surface tolerances. This type belongs to the position super type.
 * <p>
 * It defines the capability of the toleranced surfaces to entirely be within
 * the tolerance zone. This tolerance zone is either cylindrical or made of two
 * offset surfaces. The global offset corresponds to the tolerance  value
 * itself. This tolerance zone has to be symmetricaly positioned regarding to
 * the corresponding simple datum or datum system. Use of the form symbol with
 * datums.
 * <p>
 * Normative reference: ASME Y14.5M section 5.11.
 */ 

class CATITPSPositionOfASurface : public IUnknown
{
  public:

};
#endif

