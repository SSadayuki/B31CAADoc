#ifndef CATTPSVisualizationHeadersServices_H
#define CATTPSVisualizationHeadersServices_H

// COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATTPSHeadersServices.h"

/**
 * The following method allow to create all the TPS command headers that are
 * needed for visualization of annotations.
 * This method can be called by a workbench of Part, Product or Process 
 * workshop that want to offer annotation visualization capabilities.
 */

ExportedByCATTPSHeadersServices void CreateTPSHeadersForVisualization();

#endif
