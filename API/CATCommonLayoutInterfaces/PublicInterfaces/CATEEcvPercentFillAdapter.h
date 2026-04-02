#ifndef CATEEcvPercentFillAdapter_H
#define CATEEcvPercentFillAdapter_H

// COPYRIGHT DASSAULT SYSTEMES  2008
/**
  * @CAA2Level L1
  * @CAA2Usage U2
  */

#include "CATCommonLayoutItfCPP.h"
//  System
#include "CATBaseUnknown.h"
#include "CATEcwLightNwkNodeForPercentFill.h"
#include "CATEcwLightNwkArcForPercentFill.h"
#include "CATEcwLightNwkCableForPercentFill.h"
#include "CATLISTP_CATEcwLightNwkCableForPercentFill.h"
#include "CATLISTP_CATEcwLightNwkArcForPercentFill.h"

/**
 * Super class to derive implementation for interface CATIEcvPercentFill.
 * <b>Role</b>: Adapter
 */

class ExportedByCATCommonLayoutItfCPP CATEEcvPercentFillAdapter : public CATBaseUnknown
{
  public: 
      
    CATEEcvPercentFillAdapter();
    virtual ~CATEEcvPercentFillAdapter();  


  static HRESULT ComputePercentFillValue
  ( CATEcwLightNwkNodeForPercentFill          * pNwkNode, 
    CATEcwLightNwkArcForPercentFill           * pNwkArc,
    CATLISTP(CATEcwLightNwkArcForPercentFill)   pListOfCATEcwLightNwkArcForPercentFill,
    CATEcwLightNwkCableForPercentFill         * pNwkCable,
    CATLISTP(CATEcwLightNwkCableForPercentFill) pListOfCATEcwLightNwkCableForPercentFill,
    int                                         iRoutingMode,
    int                                         iRouteToolsOptionStackCableOption,
    int                                         iPFToBeSetOnNode,
    double                                    & odComputedPercentFill );

  private:

    // do not implement
    CATEEcvPercentFillAdapter (CATEEcvPercentFillAdapter &);
    CATEEcvPercentFillAdapter& operator=(CATEEcvPercentFillAdapter&);
};

#endif
