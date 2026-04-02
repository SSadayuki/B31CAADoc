#ifndef CATCreateCATITPSCaptureList_H
#define CATCreateCATITPSCaptureList_H

// COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATTPSItfCPP.h"
#include "IUnknown.h" // Get Unix HRESULT definition

class CATITPSCaptureList;

/**
 * Method to create a list of Captures object, from an optional initial list.
 *   @param ipiCopy
 *     List to be duplicated.
 *   @param opiList
 *     Pointer to the new list.
 *   @see CATITPSCapture
 *   @see CATITPSCaptureList
 */
HRESULT ExportedByCATTPSItfCPP CATCreateCATITPSCaptureList (
                                        const CATITPSCaptureList * ipiCopy,
                                        CATITPSCaptureList ** opiList);

#endif
