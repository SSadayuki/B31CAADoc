#ifndef CATITPSNonSemanticDimension_H
#define CATITPSNonSemanticDimension_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"

extern "C" const IID IID_CATITPSNonSemanticDimension;

/**
 * Interface to non semantic dimension.
 * <b>Role</b>: Objects that implement this typing interface are non semantic 
 * tolerances. This type belongs to non semantic super type.
 * <p>
 * Non semantic means without respect of any norm. No check are performed on
 * the tolerance frame. It can contains invalid or inconsistent informations.
 */

class CATITPSNonSemanticDimension : public IUnknown
{
  public:

};
#endif
