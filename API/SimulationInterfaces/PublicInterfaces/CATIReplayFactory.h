// COPYRIGHT DASSAULT SYSTEMES 2000
//===================================================================
//
// CATIReplayFactory.h
//   This interface enables the management of simulation Replays.
//
//===================================================================
#ifndef CATIReplayFactory_H
#define CATIReplayFactory_H
#include "CATIAV5Level.h"

#ifdef CATIAV5R5
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */
#endif

#include "SimulationItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATIReplay.h"
#include "CATIReplayList.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedBySimulationItfCPP IID IID_CATIReplayFactory ;
#else
extern "C" const IID IID_CATIReplayFactory ;
#endif

//------------------------------------------------------------------

/**
 * Manage simulation Replays.
 * <p>
 * A replay enables the end-user to play a simulation which was recorded before.
 * <p>
 * This interface enables the creation of simulation replays
 * in a document and scan the document to list all the simulation replays.
 * Use this interface as is to create a replay or to list replays in a document.
 */
class ExportedBySimulationItfCPP CATIReplayFactory: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
     * Create a simulation Replay.
     * @param oReplay
     *    The created simulation Replay.
     * @return
     *    HRESULT
     * @see CATIReplay
     */
    virtual HRESULT CreateInstance (CATIReplay** oReplay) const=0;

    /**
     * List all simulation replays in a document.
     * @param oListOfReplays
     *    The list of all replays belonging to the document.
     *    The list must be empty before entering.
     * @return
     *    HRESULT
     * @see CATIReplayList 
     */
    virtual HRESULT ListReplays (CATIReplayList* oListOfReplays) const=0;
};

//------------------------------------------------------------------

CATDeclareHandler( CATIReplayFactory, CATBaseUnknown );

#endif
