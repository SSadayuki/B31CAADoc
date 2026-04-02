// COPYRIGHT DASSAULT SYSTEMES 2000
//===================================================================
//
// CATIReplayChannelCameraMoveFactory.h
//   This interface enables the creation of a simulation Replay Channel.
//
//===================================================================
#ifndef CATIReplayChannelCameraMoveFactory_H
#define CATIReplayChannelCameraMoveFactory_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "SimulationItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATIReplayChannelCameraMove.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedBySimulationItfCPP IID IID_CATIReplayChannelCameraMoveFactory ;
#else
extern "C" const IID IID_CATIReplayChannelCameraMoveFactory ;
#endif

//------------------------------------------------------------------

/**
 * Create a camera move replay channel.
 * <p>
 * A camera move channel describes the evolution of the position and view factors of a camera over time.
 */
class ExportedBySimulationItfCPP CATIReplayChannelCameraMoveFactory: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
     * Create a camera move replay channel.
     * @param iCamera
     *    The camera to move.
     * @param oChannel
     *    The created Camera move replay channel.
     * @return
     *    HRESULT
     * @see CATICamera, CATIReplayChannelCameraMove
     */
    virtual HRESULT CreateInstance (CATBaseUnknown** iCamera , CATIReplayChannelCameraMove** oChannel) const=0;

};

//------------------------------------------------------------------

CATDeclareHandler( CATIReplayChannelCameraMoveFactory, CATBaseUnknown );

#endif
