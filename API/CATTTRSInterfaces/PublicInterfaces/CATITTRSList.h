#ifndef CATITTRSList_H
#define CATITTRSList_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATTTRSItf.h"
#include "CATBaseUnknown.h"

class CATITTRS;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATTTRSItf IID IID_CATITTRSList;
#else
extern "C" const IID IID_CATITTRSList;
#endif

/**
 * Interface for list of CATITTRS.
 * This interface is similar to CATIUnknownList (same methods).
 */
class ExportedByCATTTRSItf CATITTRSList : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
     * Retrieves the number of elements in the list.
     *   @param oCount
     *     Number of elements.
     */
    virtual HRESULT Count (unsigned int * oCount) const = 0;

    /**
     * Retrieves the element number i. First element is at position 0.
     *   @param iPosition
     *     Position of returned element.
     *   @param oItem
     *     Returned element.
     */
    virtual HRESULT Item (const unsigned int iPosition,
                          CATITTRS ** oItem) const = 0;

    /**
     * Add an element at a given position in the list.
     *   @param iPosition
     *     Position of the added element.
     *   @param iItem
     *     Element to be added.
     */
    virtual HRESULT Add (const unsigned int iPosition,
                         CATITTRS * iItem) = 0;

    /**
     * Remove an element from the list.
     *   @param iItem
     *     Element to be removed.
     */
    virtual HRESULT Remove (CATITTRS * iItem) = 0;

};
#endif
