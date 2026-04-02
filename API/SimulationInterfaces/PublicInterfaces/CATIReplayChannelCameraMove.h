// COPYRIGHT DASSAULT SYSTEMES 2000
//===================================================================
//
// CATIReplayChannelCameraMove.h
//   This interface allows to edit a channel camera move.
//
//===================================================================
#ifndef CATIReplayChannelCameraMove_H
#define CATIReplayChannelCameraMove_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "SimulationItfCPP.h"
#include "CATIReplayChannel.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedBySimulationItfCPP IID IID_CATIReplayChannelCameraMove ;
#else
extern "C" const IID IID_CATIReplayChannelCameraMove ;
#endif

//------------------------------------------------------------------

/**
 * Edit a channel camera move.
 * <p>
 * A camera move channel describes the evolution of the position and view factors of a camera over time.
 * It is made of samples : each sample contains the position and view factors at a given time.
 */
class ExportedBySimulationItfCPP CATIReplayChannelCameraMove: public CATIReplayChannel
{
  CATDeclareInterface;

  public:

    /**
     * Get the camera which is moved.
     * @param oCamera
     *    The camera.
     * @return
     *    HRESULT
     * @see CATICamera
     */
    virtual HRESULT GetCamera (CATBaseUnknown** oCamera) const=0;

    /**
     * Add a sample to the channel.
     * @param iTime
     *    Time of the sample. This time must be greater or equal to 0.
     * @param iPosition
     *    Position of the camera at the time of the sample.
     *    The 9 first values control the orientation.
     *    The 3 following values control the translation.
     *    The 3 last values control the view factors.
     * @return
     *    HRESULT
     */
    virtual HRESULT AddSample (double iTime, double iPosition[15]) const=0;

    /**
     * Read the position of one sample of the channel.
     * @param iIndex
     *    The index of the sample. This index must be greater or equal to 1 and lower or equal to the number of samples.
     * @param oPosition
     *    Position of the camera at the time of the sample.
     *    The 9 first values control the orientation.
     *    The 3 following values control the translation.
     *    The 3 last values control the view factors.
     * @return
     *    HRESULT
     */
    virtual HRESULT GetSample (int iIndex, double oPosition[15]) const=0;

    /**
     * Remove one sample of the channel.
     * @param iIndex
     *    The index of the sample. This index must be greater or equal to 1 and lower or equal to the number of samples.
     * @return
     *    HRESULT
     */
    virtual HRESULT RemoveSample (int iIndex) const=0;

};

//------------------------------------------------------------------

CATDeclareHandler( CATIReplayChannelCameraMove, CATIReplayChannel );

#endif
