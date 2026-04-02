#ifndef CATITPSGeometryList_H
#define CATITPSGeometryList_H

// COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"

class CATITPSComponent;

extern "C" const IID IID_CATITPSGeometryList;

/**
 * Interface for lists of geometrical objects CATITPSComponent.
 * This interface is similar to CATIUnknownList (same methods).
 *   @see CATCreateCATITPSGeometryList
 */
class CATITPSGeometryList : public IUnknown
{
  public:

    /**
     * Retrieves the number of components in the list.
     *   @param oCount
     *     Number of components.
     */
    virtual HRESULT Count (unsigned int * oCount) const = 0;

    /**
     * Retrieves the component number i. First component is at position 0.
     *   @param iPosition
     *     Position of returned component.
     *   @param oItem
     *     Returned component.
     */
    virtual HRESULT Item (const unsigned int iPosition,
                          CATITPSComponent ** oItem) const = 0;

    /**
     * Add a component at a given position in the list.
     *   @param iPosition
     *     Position of the added component.
     *   @param iItem
     *     Component to be added.
     */
    virtual HRESULT Add (const unsigned int iPosition,
                         CATITPSComponent * iItem) = 0;

    /**
     * Remove an element from the list.
     *   @param iItem
     *     Component to be removed.
     */
    virtual HRESULT Remove (CATITPSComponent * iItem) = 0;

};
#endif
