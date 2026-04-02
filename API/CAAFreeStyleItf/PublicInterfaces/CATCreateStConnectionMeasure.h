#ifndef CATCreateStConnectionMeasure_H
#define CATCreateStConnectionMeasure_H

/**
  * @CAA2Level L0
  * @CAA2Usage U0
  */

//==============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2002
//==============================================================================
//
// CATCreateStConnectionMeasure :
//
//==============================================================================
// Usage Notes :
//  --------------------------------------------------
//   IMPORTANT : DASSAULT SYSTEMES INTERNAL USE ONLY.
//  --------------------------------------------------
//
//==============================================================================
// Oct. 02   Creation                                             Thomas ECKERT
//==============================================================================

#include "CAAFreeStyleItf.h"

#include "IUnknown.h"

class CATIStConnectionMeasure;
class CATSoftwareConfiguration;

/**
 * @nodoc
 * Creates a CATFaaConnectionMeasureComponent operator.
 * @param opConnectionMeasure
 * The pointer to CATIStConnectionMeasure interface retrieve from the created component.
 * @param  iConfig
 * The pointer to the configuration. Must not be <tt>NULL</tt>.
 * @return
 * An HRESULT.
 * Release CATIStConnectionMeasure interface when it is not needed anymore.
 */

ExportedByCAAFreeStyleItf
HRESULT CATCreateStConnectionMeasure(CATIStConnectionMeasure  *& opConnectionMeasure,
                                     CATSoftwareConfiguration *  iConfig);

#endif


