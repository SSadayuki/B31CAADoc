#ifndef CATITPSCaptureFactory_H
#define CATITPSCaptureFactory_H

// COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"

class CATITPSCapture;

extern "C" const IID IID_CATITPSCaptureFactory;

/**
 * Interface for the TPS Factory of Capture. This factory is implemented on the
 * Set object. All the created Captures belongs to the Set from which this 
 * interface is retrieved.
 */
class CATITPSCaptureFactory : public IUnknown
{
  public:

    /**
     * Create a new TPS Capture in the set. 
     *   @param opiCapture
     *      The new created Capture.
     */
    virtual HRESULT CreateCapture (CATITPSCapture ** opiCapture) = 0;

};
#endif
