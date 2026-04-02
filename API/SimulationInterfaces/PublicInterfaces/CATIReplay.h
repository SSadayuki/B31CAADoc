// COPYRIGHT DASSAULT SYSTEMES 2000
//===================================================================
//
// CATIReplay.h
//   This interface allows the edition of a simulation Replay.
//
//===================================================================
#ifndef CATIReplay_H
#define CATIReplay_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "SimulationItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATIReplayChannel.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedBySimulationItfCPP IID IID_CATIReplay ;
#else
extern "C" const IID IID_CATIReplay ;
#endif

//------------------------------------------------------------------

/**
 * Edit a simulation Replay.
 * <p>
 * A replay enables the end-user to play a simulation which was recorded before.
 * It is made of several channels : each channel describes the evolution of one property over
 * time (the position of a part or the distance between two parts are examples of properties).
 */
class ExportedBySimulationItfCPP CATIReplay: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
     * Read the number of channels referenced in the replay.
     * @param oNumber
     *    The number of channels.
     * @return
     *    HRESULT
     */
    virtual HRESULT GetNumberOfChannel (int* oNumber) const=0;

    /**
     * Read one of the replay's channel.
     * @param iIndex
     *    The index of the channel. This index must be greater or equal to 1 and lower or equal to the number of channels.
     * @param oChannel
     *    The channel.
     * @return
     *    HRESULT
     * @see CATIReplayChannel
     */
    virtual HRESULT GetChannel (int iIndex, CATIReplayChannel** oChannel) const=0;
};

//------------------------------------------------------------------

CATDeclareHandler( CATIReplay, CATBaseUnknown );

#endif
