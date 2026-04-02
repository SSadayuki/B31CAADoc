#ifndef CATITPSCaptureList_H
#define CATITPSCaptureList_H

// COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"

class CATITPSCapture;

extern "C" const IID IID_CATITPSCaptureList;

/**
 * Interface for lists of Captures CATITPSCapture.
 * This interface is similar to CATIUnknownList (same methods).
 *   @see CATCreateCATITPSCaptureList
 */
class CATITPSCaptureList : public IUnknown
{
  public:

    /**
     * Retrieves the number of Captures in the list.
     *   @param oCount
     *     Number of Captures.
     */
    virtual HRESULT Count (unsigned int * oCount) const = 0;

    /**
     * Retrieves the Capture number i. First Capture is at position 0.
     *   @param iPosition
     *     Position of returned Capture.
     *   @param opiItem
     *     Returned Capture.
     */
    virtual HRESULT Item (const unsigned int iPosition,
                          CATITPSCapture ** opiItem) const = 0;

    /**
     * Add a Capture at a given position in the list.
     *   @param iPosition
     *     Position of the added Capture.
     *   @param ipiItem
     *     Capture to be added.
     */
    virtual HRESULT Add (const unsigned int iPosition,
                         CATITPSCapture * ipiItem) = 0;

    /**
     * Remove a Capture from the list.
     *   @param ipiItem
     *     Capture to be removed.
     */
    virtual HRESULT Remove (CATITPSCapture * ipiItem) = 0;

};
#endif
