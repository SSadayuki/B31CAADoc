#ifndef CATITPSConcentricity_H
#define CATITPSConcentricity_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"

extern "C" const IID IID_CATITPSConcentricity;

/**
 * Interface to concentricity and coaxiality tolerance.
 * <b>Role</b>: Objects that implement this typing interface are concentricity
 * tolerances. This type belongs to the position super type. Coaxiality
 * tolerance exist only for ISO and not for ASME.
 * <p>
 * It defines the capability of the points constituting the ERG of the
 * toleranced surfaces to entirely be within the tolerance zone.
 * This tolerance zone is either cylindrical or made of two offset surfaces.
 * The global offset corresponds to the tolerance value itself.
 * This tolerance zone has to be coaxialy positioned regarding to the 
 * corresponding simple datum or datum system.
 * <p>
 * Normative reference: ISO 1101 section 14.11.1 and ASME Y14.5M section 5.12.
 */

class CATITPSConcentricity : public IUnknown
{
  public:

};
#endif

