#ifndef CATITPSPositionOfAnyLine_H
#define CATITPSPositionOfAnyLine_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"

extern "C" const IID IID_CATITPSPositionOfAnyLine;

/**
 * Interface to position of any line tolerance.
 * <b>Role</b>: Objects that implement this typing interface are position of
 * any line tolerances. This type belongs to the position super type.
 * <p>
 * It defines the capability of any line of the toleranced surfaces got
 * with the intersecting annotation plane to entirely be within the tolerance
 * zone. This tolerance zone is either cylindrical or made of two  offset
 * surfaces. The global offset corresponds to the tolerance value itself.
 * This tolerance zone has to be symmetricaly positioned regarding to the
 * corresponding simple datum or datum system. Use of the form symbol with 
 * datums.
 * <p>
 * Normative reference: ASME Y14.5M section 5.11.
 */ 

class CATITPSPositionOfAnyLine : public IUnknown
{
  public:

};
#endif

