#ifndef CATCreateCATITPSGeometryList_H
#define CATCreateCATITPSGeometryList_H

// COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATTPSItfCPP.h"
#include "IUnknown.h" // Get Unix HRESULT definition

class CATITPSGeometryList;

/**
 * Method to create a list of Tolerancing object,from an optional initial list.
 *   @param ipiCopy
 *     List to be duplicated. Can be NULL.
 *   @param opiList
 *     Pointer to the new list.
 *   @see CATITPSGeometryList
 *   @see CATITPSComponent
 */
HRESULT ExportedByCATTPSItfCPP CATCreateCATITPSGeometryList (
                                        const CATITPSGeometryList * ipiCopy,
                                        CATITPSGeometryList ** opiList);

#endif
