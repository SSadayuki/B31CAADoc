#ifndef CATITPSForm_H
#define CATITPSForm_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"

extern "C" const IID IID_CATITPSForm;

/**
 * Interface to form tolerance.
 * <b>Role</b>: Objects that implement this typing interface are form
 * tolerances. It is a super type.
 * <p>
 * A form specification may be straighness, flatness, circularity, cylindricity
 * line profile or surface profile. It defines the capability of each 
 * toleranced lines or surfaces to entirely be within the tolerance zone. This
 * tolerance zone is a space or a volume limited by two  t-apart offset
 * elements which can be placed in the corresponding annotation plane.
 * A form tolerance is specified without any reference frame.
 * <p>
 * Normative reference: ASME Y14.5M section 6.5.1/3/6/8.
 */

class CATITPSForm : public IUnknown
{
  public:

};
#endif

