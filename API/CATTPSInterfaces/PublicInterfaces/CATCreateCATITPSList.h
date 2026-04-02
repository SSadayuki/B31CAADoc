#ifndef CATCreateCATITPSList_H
#define CATCreateCATITPSList_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATTPSItfCPP.h"
#include "IUnknown.h" // Get Unix HRESULT definition

class CATITPSList;

/**
 * Method to create a list of Tolerancing object,from an optional initial list.
 *   @param ipiCopy
 *     List to be duplicated. Can be NULL.
 *   @param opiList
 *     Pointer to the new list.
 *   @see CATITPSList
 *   @see CATITPSComponent
 */
HRESULT ExportedByCATTPSItfCPP CATCreateCATITPSList (
                                        const CATITPSList * ipiCopy,
                                        CATITPSList ** opiList);

#endif
