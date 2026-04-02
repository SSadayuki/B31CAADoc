#ifndef CATCreateTopStNetSurfaceOp_H
#define CATCreateTopStNetSurfaceOp_H

/**
  * @CAA2Level L0
  * @CAA2Usage U1
  */

//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2008
//=============================================================================
//
// CATCreateTopStNetSurfaceOp
//
//=============================================================================
// Implementation Notes :
//  --------------------------------------------------
//   IMPORTANT : DASSAULT SYSTEMES INTERNAL USE ONLY.
//  --------------------------------------------------
//
//=============================================================================
// May. 08   Creation                                           Thomas ECKERT
//=============================================================================

#include "CAAFreeStyleItf.h"

class CATIStNetSurfaceOp;

class CATGeoFactory;
class CATTopData;

#include "IUnknown.h"

/**
 * Creates a topological operator to build a Net Surface.
 * @param ipFactory
 * The pointer to the factory of the geometry.
 * @param ipTopData
 * The pointer to the data defining the software configuration and the journal. If the journal inside <tt>iData</tt> 
 * is <tt>NULL</tt>, it is not filled.
 * @param opNetSurfaceOp
 * The pointer to the interface of the created operator.
 * @return
 * HRESULT.
 * Release CATIStNetSurfaceOp interface when it is not needed anymore.
 */
ExportedByCAAFreeStyleItf HRESULT CATCreateTopStNetSurfaceOp(CATGeoFactory      *  ipFactory,
								                             CATTopData         *  ipTopData,                                   
                                                             CATIStNetSurfaceOp *& opNetSurfaceOp);

#endif
