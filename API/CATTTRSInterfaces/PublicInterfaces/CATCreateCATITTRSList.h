#ifndef CATCreateCATITTRSList_H
#define CATCreateCATITTRSList_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATTTRSItf.h"
#include "CATBaseUnknown.h"

class CATITTRSList;

/**
 * Method to create a list of TTRS, from an optional initial list.
 *   @param iCopy
 *     List to be duplicated.
 *   @param oList
 *     Pointer to the new list.
 *   @see CATITTRSList
 *   @see CATITTRS
 */
HRESULT ExportedByCATTTRSItf CATCreateCATITTRSList (
                                        const CATITTRSList * iCopy,
                                        CATITTRSList ** oList);

#endif
