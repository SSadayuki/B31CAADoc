// COPYRIGHT DASSAULT SYSTEMES 2000
//===================================================================
//
// CATIReplayChannelScalarObserverFactory.h
//   This interface enables the creation of a simulation Replay Channel.
//
//===================================================================
#ifndef CATIReplayChannelScalarObserverFactory_H
#define CATIReplayChannelScalarObserverFactory_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "SimulationItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATIReplayChannelScalarObserver.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedBySimulationItfCPP IID IID_CATIReplayChannelScalarObserverFactory ;
#else
extern "C" const IID IID_CATIReplayChannelScalarObserverFactory ;
#endif

//------------------------------------------------------------------

/**
 * Create a scalar observer replay channel.
 * <p>
 * A scalar observer channel describes the evolution of one scalar over time.
 */
class ExportedBySimulationItfCPP CATIReplayChannelScalarObserverFactory: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
     * Create a scalar observer replay channel.
     * @param iName
     *    The name of the scalar.
     * @param oChannel
     *    The created scalar observer replay channel.
     * @return
     *    HRESULT
     * @see CATIReplayChannelScalarObserver
     */
    virtual HRESULT CreateInstance (char* iName , CATIReplayChannelScalarObserver** oChannel) const=0;

};

//------------------------------------------------------------------

CATDeclareHandler( CATIReplayChannelScalarObserverFactory, CATBaseUnknown );

#endif
