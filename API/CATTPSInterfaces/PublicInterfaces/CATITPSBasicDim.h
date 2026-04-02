#ifndef CATITPSBasicDim_H
#define CATITPSBasicDim_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"

extern "C" const IID IID_CATITPSBasicDim;

class CATITPSList;

/**
 * Interface for Basic Dim TPS (dimension tolerance) also 
 * named Framed Dimension in ISO.
 * TPS for Technological Product Specifications.
 */
class CATITPSBasicDim : public IUnknown
{
  public:

    /**
     * Retrieves a CATITPSList to read the TPSs associated to a 
     * Basic Dim. All objects of the list adhere to CATITPS.
     */
    virtual HRESULT GetAssociatedTPS (CATITPSList ** oTPSList) const = 0;

};
#endif

