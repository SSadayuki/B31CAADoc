#ifndef CATITPSAssociatedBasicDim_H
#define CATITPSAssociatedBasicDim_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"

class CATITPSList;

extern "C" const IID IID_CATITPSAssociatedBasicDim;

/**
 * Interface designed to manage Basic Dim associated to a TPS.
 */
class CATITPSAssociatedBasicDim : public IUnknown
{
  public:

    /**
     * Sets Basic Dim associated to a TPS.
     * All objects of the list must adhere to CATITPSBasicDim.
     */
    virtual HRESULT SetBasicDim (const CATITPSList * iBasicDim) = 0;

    /**
     * Retrieves a CATITPSList to manage/read(?) the Basic Dim associated
     * to a TPS. All objects of the list adhere to CATITPSBasicDim.
     */
    virtual HRESULT GetBasicDim (CATITPSList ** oBasicDim) const = 0;

};
#endif

