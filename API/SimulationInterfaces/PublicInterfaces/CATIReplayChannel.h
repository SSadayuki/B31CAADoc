// COPYRIGHT DASSAULT SYSTEMES 2000
//===================================================================
//
// CATIReplayChannel.h
//   This interface allows generic treatments on all kind of replay channel.
//
//===================================================================
#ifndef CATIReplayChannel_H
#define CATIReplayChannel_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "SimulationItfCPP.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedBySimulationItfCPP IID IID_CATIReplayChannel ;
#else
extern "C" const IID IID_CATIReplayChannel ;
#endif

//------------------------------------------------------------------

/**
 * Read general information on a replay channel.
 * <p>
 * A channel describes the evolution of one property over time.
 * It is made of samples : each sample contains the parameters of the property at a given time.
 */
class ExportedBySimulationItfCPP CATIReplayChannel: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
     * Read the number of samples referenced in the channel.
     * @param oNumber
     *    The number of samples.
     * @return
     *    HRESULT
     */
    virtual HRESULT GetNumberOfSample (int* oNumber) const=0;

    /**
     * Read the time of one channel's sample.
     * @param iIndex
     *    The index of the sample. This index must be greater or equal to 1 and lower or equal to the number of samples.
     * @param oTime
     *    Time of the sample.
     * @return
     *    HRESULT
     */
    virtual HRESULT GetSampleTime (int iIndex, double* oTime) const=0;

};

//------------------------------------------------------------------

CATDeclareHandler( CATIReplayChannel, CATBaseUnknown );

#endif
