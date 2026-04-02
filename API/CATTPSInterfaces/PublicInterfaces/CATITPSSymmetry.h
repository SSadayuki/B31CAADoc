#ifndef CATITPSSymmetry_H
#define CATITPSSymmetry_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"

extern "C" const IID IID_CATITPSSymmetry;

/**
 * Interface to symmetry tolerance.
 * <b>Role</b>: Objects that implement this typing interface are symmetry
 * tolerances. This type belongs to the position super type.
 * <p>
 * It defines the capability of the points constituting the ERG of the
 * toleranced surfaces to entirely be within the tolerance zone.
 * This tolerance zone is either cylindrical or made of two offset surfaces.
 * The global offset corresponds to the tolerance value itself.
 * This tolerance zone has to be symmetrically positioned regarding to the
 * corresponding simple datum or datum system.
 * <p>
 * Normative reference: ISO 1101 section 14.12.2 and ASME Y14.5M section 5.11.
 */

class CATITPSSymmetry : public IUnknown
{
  public:

};
#endif

