#ifndef CATITPSAssociatedRefFrame_H
#define CATITPSAssociatedRefFrame_H

// COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"

extern "C" const IID IID_CATITPSAssociatedRefFrame;

class CATITPSReferenceFrame;

/**
 * Interface dedicated to manage Datum Reference Frame associated to a TPS.
 */
class CATITPSAssociatedRefFrame : public IUnknown
{
  public:

    /**
     * Sets the Datum Reference Frame associated to a TPS.
     */
    virtual HRESULT SetReferenceFrame (
                                const CATITPSReferenceFrame * ipiRefFrame) = 0;

    /**
     * Retrieves the Datum Reference Frame associated to a TPS.
     */
    virtual HRESULT GetReferenceFrame (
                               CATITPSReferenceFrame ** opiRefFrame) const = 0;

};
#endif

