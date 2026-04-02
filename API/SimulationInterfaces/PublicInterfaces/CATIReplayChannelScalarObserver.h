// COPYRIGHT DASSAULT SYSTEMES 2000
//===================================================================
//
// CATIReplayChannelScalarObserver.h
//   This interface allows to edit a channel scalar observer.
//
//===================================================================
#ifndef CATIReplayChannelScalarObserver_H
#define CATIReplayChannelScalarObserver_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "SimulationItfCPP.h"
#include "CATIReplayChannel.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedBySimulationItfCPP IID IID_CATIReplayChannelScalarObserver ;
#else
extern "C" const IID IID_CATIReplayChannelScalarObserver ;
#endif

//------------------------------------------------------------------

/**
 * Edit a channel scalar observer.
 * <p>
 * A scalar observer channel describes the evolution of one scalar over time.
 * It is made of samples : each sample contains the value of the scalar at a given time.
 */
class ExportedBySimulationItfCPP CATIReplayChannelScalarObserver: public CATIReplayChannel
{
  CATDeclareInterface;

  public:

    /**
     * Get the name of the scalar value.
     * @param oName
     *    The name.
     * @return
     *    HRESULT
     */
    virtual HRESULT GetName (char** oName) const=0;

    /**
     * Add a sample to the channel.
     * @param iTime
     *    Time of the sample. This time must be greater or equal to 0.
     * @param iValue
     *    Value of the scalar at the time of the sample.
     * @return
     *    HRESULT
     */
    virtual HRESULT AddSample (double iTime, double iValue) const=0;

    /**
     * Read the value of one sample of the channel.
     * @param iIndex
     *    The index of the sample. This index must be greater or equal to 1 and lower or equal to the number of samples.
     * @param oValue
     *    Value of the scalar at the time of the sample.
     * @return
     *    HRESULT
     */
    virtual HRESULT GetSample (int iIndex, double* oValue) const=0;

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

CATDeclareHandler( CATIReplayChannelScalarObserver, CATIReplayChannel );

#endif
