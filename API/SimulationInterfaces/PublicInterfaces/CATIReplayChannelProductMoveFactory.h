// COPYRIGHT DASSAULT SYSTEMES 2000
//===================================================================
//
// CATIReplayChannelProductMoveFactory.h
//   This interface enables the creation of a simulation Replay Channel.
//
//===================================================================
#ifndef CATIReplayChannelProductMoveFactory_H
#define CATIReplayChannelProductMoveFactory_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "SimulationItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATIReplayChannelProductMove.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedBySimulationItfCPP IID IID_CATIReplayChannelProductMoveFactory ;
#else
extern "C" const IID IID_CATIReplayChannelProductMoveFactory ;
#endif

//------------------------------------------------------------------

/**
 * Create a product move replay channel.
 * <p>
 * A product move channel describes the evolution of the position of a product over time.
 */
class ExportedBySimulationItfCPP CATIReplayChannelProductMoveFactory: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
     * Create a product move replay channel.
     * @param iProduct
     *    The product to move.
     * @param oChannel
     *    The created product move replay channel.
     * @return
     *    HRESULT
     * @see CATIProduct, CATIReplayChannelProductMove
     */
    virtual HRESULT CreateInstance (CATBaseUnknown** iProduct , CATIReplayChannelProductMove** oChannel) const=0;

};

//------------------------------------------------------------------

CATDeclareHandler( CATIReplayChannelProductMoveFactory, CATBaseUnknown );

#endif
