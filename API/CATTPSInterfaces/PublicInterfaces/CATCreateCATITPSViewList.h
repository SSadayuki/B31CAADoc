#ifndef CATCreateCATITPSViewList_H
#define CATCreateCATITPSViewList_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATTPSItfCPP.h"
#include "IUnknown.h" // Get Unix HRESULT definition

class CATITPSViewList;

/**
 * Method to create a list of TPS views object, from an optional initial list.
 *   @param ipiCopy
 *     List to be duplicated.
 *   @param opiList
 *     Pointer to the new list.
 *   @see CATITPSView
 *   @see CATITPSViewList
 */
HRESULT ExportedByCATTPSItfCPP CATCreateCATITPSViewList (
                                        const CATITPSViewList * ipiCopy,
                                        CATITPSViewList ** opiList);

#endif
