#ifndef CATManageReplays_H
#define CATManageReplays_H
#include "CATIAV5Level.h"

// COPYRIGHT DASSAULT SYSTEMES 2000

#ifndef CATIAV5R5
/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */
#endif

#include "G90CAA2.h"
#include "CATDocument.h"
#include "CATIReplay.h"
#include "CATIReplayList.h"

/**
 * Functions to manage simulation replays in a document.
 * <p>
 * These functions enable the creation of simulation replays
 * in a document and scan the document to list all the simulation replays.
 * Use these functions as is to create a replay or to list replays in a document.
 */

/**
 * Create a simulation replay.
 * <br>This function initializes the environment (if it was not done before)
 * and creates a replay feature in the document.
 * @param iDocument
 *    The document where the replay will be created.
 * @param oReplay
 *    The created simulation replay.
 * @return
 *    HRESULT
 * @see CATIReplay
 */
extern ExportedByG90CAA2 HRESULT CATCreateReplay ( CATDocument*  iDocument, CATIReplay** oReplay );

/**
 * List all simulation replays in a document.
 * @param iDocument
 *    The document where the replay will be created.
 * @param oListOfReplays
 *    The list of all replays belonging to the document.
 *    The list must be empty before entering.
 * @return
 *    HRESULT
 * @see CATIReplayList 
 */
extern ExportedByG90CAA2 HRESULT CATListReplays ( CATDocument* iDocument, CATIReplayList* oListOfReplays );
#endif
