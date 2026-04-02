#ifndef CATITPSViewList_H
#define CATITPSViewList_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"

class CATITPSView;

extern "C" const IID IID_CATITPSViewList;

/**
 * Interface for lists of TPSView objects CATITPSView.
 * This interface is similar to CATIUnknownList (same methods).
 */
class CATITPSViewList : public IUnknown
{
  public:

    /**
     * Retrieves the number of views in the list.
     *   @param oCount
     *     Number of views.
     */
    virtual HRESULT Count (unsigned int * oCount) const = 0;

    /**
     * Retrieves the view number i. First view is at position 0.
     *   @param iPosition
     *     Position of returned view.
     *   @param opiItem
     *     Returned view.
     */
    virtual HRESULT Item (const unsigned int iPosition,
                          CATITPSView ** opiItem) const = 0;

    /**
     * Add a view at a given position in the list.
     *   @param iPosition
     *     Position of the added view.
     *   @param ipiItem
     *     View to be added.
     */
    virtual HRESULT Add (const unsigned int iPosition,
                         CATITPSView * ipiItem) = 0;

    /**
     * Remove a view from the list.
     *   @param ipiItem
     *     View to be removed.
     */
    virtual HRESULT Remove (CATITPSView * ipiItem) = 0;

};
#endif
