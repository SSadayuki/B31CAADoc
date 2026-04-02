#ifndef CATITPSNonSemanticGDT_H
#define CATITPSNonSemanticGDT_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"

extern "C" const IID IID_CATITPSNonSemanticGDT ;

/**
 * Interface to non semantic GDT (Geometrical Dimension and Tolerance).
 * <b>Role</b>: Objects that implement this typing interface are non semantic 
 * tolerances. This type belongs to non semantic super type.
 * <p>
 * Non semantic means without respect of any norm. No check are performed on
 * the tolerance frame. It can contains invalid or inconsistent informations.
 */

class CATITPSNonSemanticGDT: public IUnknown
{
  public:

};
#endif
