#ifndef CATITPSWeld_H
#define CATITPSWeld_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"

extern "C" const IID IID_CATITPSWeld ;

/**
 * Interface to Weld object.
 * <b>Role</b>: Objects that implement this typing interface are non semantic 
 * weld informations. This type belongs to non semantic super type.
 * <p>
 * Non semantic means without respect of any norm. No check are performed on
 * the weld frame. It can contains invalid or inconsistent informations.
 */
class CATITPSWeld : public IUnknown
{
  public:

};
#endif
