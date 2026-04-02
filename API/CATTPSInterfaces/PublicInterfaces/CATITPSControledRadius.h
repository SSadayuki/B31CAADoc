#ifndef CATITPSControledRadius_H
#define CATITPSControledRadius_H

// COPYRIGHT DASSAULT SYSTEMES 2018

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"
#include "CATTPSControledRadius.h"

extern "C" const IID IID_CATITPSControledRadius;

/**
 * Interface for accessing Controled Radius modifier on a linear TPS 
 * This interface is exposed only by radius linear TPS.
 *   @see CATTPSControledRadius
 */
class CATITPSControledRadius : public IUnknown
{
  public:

    /**
     * <br /><strong>Role</strong>: Sets Controled Radius modifier.
     * <br /><strong>Precondition</strong>: ASME norm only.
     */
    virtual HRESULT SetModifier (const CATTPSControledRadius iModifier) = 0;

    /**
     * <br /><strong>Role</strong>: Retrieves Controled Radius modifier.
     * <br /><strong>Precondition</strong>: ASME norm only.
     */
    virtual HRESULT GetModifier (CATTPSControledRadius* oModifier) const = 0;
};
#endif
