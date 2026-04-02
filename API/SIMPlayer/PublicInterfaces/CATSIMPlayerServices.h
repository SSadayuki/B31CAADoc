#ifndef CATSIMPlayerServices_H_
#define CATSIMPlayerServices_H_
// CATIA Version 5 Release 7 Framework SimulationBase 
// COPYRIGHT DASSAULT SYSTEMES 2001
//===================================================================
/**
 * @CAA2Level L0
 * @CAA2Usage U3
 */
#include "CATSIMPlayerCommand.h"
#include "CATBaseUnknown.h"

class CATIASIMPlayer;
class CATISIMPlayer;
class CATDocument;

/**
 * Returns a handler on the Simulation Player associated to a document
 * @param iDoc
 *   The document to consider;
 *   One might use (CATFrmEditor::GetCurrentEditor())->GetDocument()
 *   to get doc.
 * @param oSimulationPlayer
 *   The function create the Simulation Player if it not pre-exist,
 *   otherwise it return a handler on the Simulation Player currently
 *   associated to the document
 * Nota : a Addref is done by this function on the handler of the Simulation 
 *        Player
 */

extern ExportedByCATSIMPlayerCommand 
HRESULT CATIASIM_GetSimulationPlayerFromDocument (CATDocument * idoc, 
                                                  CATIASIMPlayer *& oSimulationPlayer);

/**
 * Returns a handler on the Simulation Player associated to a document
 * @param iDoc
 *   The document to consider;
 *   One might use (CATFrmEditor::GetCurrentEditor())->GetDocument()
 *   to get doc.
 * @param oSimulationPlayer
 *   The function create the Simulation Player if it not pre-exist,
 *   otherwise it return a handler on the Simulation Player currently
 *   associated to the document
 * Nota : a Addref is done by this function on the handler of the Simulation 
 *        Player
 */

extern ExportedByCATSIMPlayerCommand 
HRESULT CATISIM_GetSimulationPlayerFromDocument (CATDocument * idoc, 
                                                 CATISIMPlayer *& oSimulationPlayer);

// CATSIMPlayerServices_H_
#endif
