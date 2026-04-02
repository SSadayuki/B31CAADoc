#ifndef CATITPSOrientedDimension_H
#define CATITPSOrientedDimension_H

// COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"

class CATITTRS;

extern "C" const IID IID_CATITPSOrientedDimension;

/**
 * Interface to oriented dimension tolerance.
 * <b>Role</b>: Objects that implement this typing interface are oriented
 * dimension tolerances.
 * This interface gives access to base oriented TTRS.
 */

class CATITPSOrientedDimension : public IUnknown
{
  public:
    /**
     * @nodoc
     * Sets based TTRS.
     *  @param ipiTTRS
     *   One support TTRS which is part of dimension node TTRS.
     */
    virtual HRESULT SetBasedTTRS (const CATITTRS * ipiTTRS) = 0;

    /**
     * Retrieves based TTRS.
     *  @param opiTTRS
     *   Current activated based part of TTRS.
     */
    virtual HRESULT GetBasedTTRS (CATITTRS ** opiTTRS) const = 0;

    /**
     * Retrieves pointed TTRS.
     *  @param opiTTRS
     *   Current activated pointed part of TTRS.
     */
    virtual HRESULT GetPointedTTRS (CATITTRS ** opiTTRS) const = 0;
};
#endif
