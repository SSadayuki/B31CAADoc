#ifndef CATCreateCoCoreSampleOper_H
#define CATCreateCoCoreSampleOper_H

/**
* @CAA2Level L0
* @CAA2Usage U0
*/

//==============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2003
//==============================================================================
//
// CATCreateCoCoreSampleOper :
//
//==============================================================================
// Usage Notes :
//  --------------------------------------------------
//   IMPORTANT : DASSAULT SYSTEMES INTERNAL USE ONLY.
//  --------------------------------------------------
//
//==============================================================================

#include "CAACompositesItf.h"

#include "IUnknown.h"

#include "CATSoftwareConfiguration.h"
class CATICciCoreSample;
class CATICoCoreSampleOper;

/**
* Creates a CATICciCoreSample operator.
* @param opCoreSample [out,  CATBaseUnknown#Release]
* The pointer to CATICciCoreSample interface obtained from the created component.
* @param iConfig
* The pointer to the configuration. Must not be <tt>NULL</tt>.
* @return
* An HRESULT value.
* Release CATICciCoreSample interface when it is no longer needed.
*/

ExportedByCAACompositesItf
HRESULT CATCreateCciCoreSample (CATICciCoreSample*& opCoreSample,
                                CATSoftwareConfiguration* ipConfig);

/**
* @deprecated V5R18
* Creates a CATICoCoreSampleOper operator.
* @param opCoreSampleOper  [out,  CATBaseUnknown#Release]
* The pointer to CATICoCoreSampleOper interface obtained from the created component.
* @param iConfig
* The pointer to the configuration. Must not be <tt>NULL</tt>.
* @return
* An HRESULT.
* Release CATICoCoreSampleOper interface when it is no longer needed.
*/

ExportedByCAACompositesItf
HRESULT CATCreateCoCoreSampleOper(CATICoCoreSampleOper  *& opCoreSampleOper,
                                  CATSoftwareConfiguration *  iConfig);
#endif


