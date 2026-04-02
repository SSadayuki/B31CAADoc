// COPYRIGHT DASSAULT SYSTEMES 2000
//===================================================================
//
// CATIReplayChannelProductMove.h
//   This interface allows to edit a channel product move.
//
//===================================================================
#ifndef CATIReplayChannelProductMove_H
#define CATIReplayChannelProductMove_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "SimulationItfCPP.h"
#include "CATIReplayChannel.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedBySimulationItfCPP IID IID_CATIReplayChannelProductMove ;
#else
extern "C" const IID IID_CATIReplayChannelProductMove ;
#endif

//------------------------------------------------------------------

/**
 * Edit a channel product move.
 * <p>
 * A product move channel describes the evolution of the position of a product over time.
 * It is made of samples : each sample contains the position of the product at a given time.
 */
class ExportedBySimulationItfCPP CATIReplayChannelProductMove: public CATIReplayChannel
{
  CATDeclareInterface;

  public:

    /**
     * Get the product which is moved.
     * @param oProduct
     *    The product.
     * @return
     *    HRESULT
     * @see CATIProduct
     */
    virtual HRESULT GetProduct (CATBaseUnknown** oProduct) const=0;

    /**
     * Add a sample to the channel.
     * @param iTime
     *    Time of the sample. This time must be greater or equal to 0.
     * @param iPosition
     *    Position of the product at the time of the sample.
     *    The 9 first values control the orientation.
     *    The 3 last values control the translation.
     * @return
     *    HRESULT
     */
    virtual HRESULT AddSample (double iTime, double iPosition[12]) const=0;

    /**
     * Read the position of one sample of the channel.
     * @param iIndex
     *    The index of the sample. This index must be greater or equal to 1 and lower or equal to the number of samples.
     * @param oPosition
     *    Position of the product at the time of the sample.
     *    The 9 first values control the orientation.
     *    The 3 last values control the translation.
     * @return
     *    HRESULT
     */
    virtual HRESULT GetSample (int iIndex, double oPosition[12]) const=0;

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

CATDeclareHandler( CATIReplayChannelProductMove, CATIReplayChannel );

#endif
