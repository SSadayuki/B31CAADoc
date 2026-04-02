#ifndef CATITPSComponent_H
#define CATITPSComponent_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"

extern "C" const IID IID_CATITPSComponent;

/**
 * Interface to Tolerance or TPS (Technological Product Specification).
 * <b>Role</b>: Objects that implement this interface belongs to tolerancing
 * domain. This interface allows to manipulate all tolerancing objects with 
 * the same interface (polymorphism).
 */

class CATITPSComponent : public IUnknown
{
  public:

};
#endif
