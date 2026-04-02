#ifndef CATCciCreateTesselationOper_H
#define CATCciCreateTesselationOper_H

/**
* @CAA2Level L0
* @CAA2Usage U0
*/

//==============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2003
//==============================================================================
//
// CATCciCreateTesselationOper :
//
//==============================================================================
// Usage Notes :
//  --------------------------------------------------
//   IMPORTANT : DASSAULT SYSTEMES INTERNAL USE ONLY.
//  --------------------------------------------------
//
//==============================================================================

#include "CAACompositesHMAItf.h"
#include "IUnknown.h"
#include "CATSoftwareConfiguration.h"
#include "CATICciRefineTesselationOper.h"

/**
* Creates a CATICciRefineTesselationOper operator.
* @param opRefineTess  [out, CATBaseUnknown#Release]
* The pointer to CATICciRefineTesselationOper interface obtained from the created component.
* @param iConfig
* The pointer to the configuration. Must not be <tt>NULL</tt>.
* @return
* An HRESULT value.
* Release CATICciRefineTesselationOper interface when it is no longer needed.
*/

ExportedByCAACompositesHMAItf
HRESULT CATCreateCciRefineTesselation (CATSoftwareConfiguration *  iConfig,
                                       CATICciRefineTesselationOper*& opRefineTess);

#endif


