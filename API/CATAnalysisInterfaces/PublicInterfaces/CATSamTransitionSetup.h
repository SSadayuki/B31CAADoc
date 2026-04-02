#ifndef CATSamTransitionSetup_h
#define CATSamTransitionSetup_h
//=============================================================================
// COPYRIGHT Dassault Systemes 2000
//=============================================================================
/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */
#include "CATAnalysisInterface.h"
#include "CATError.h"

class CATDocument;
class CATUnicodeString;
/**
 * Initialize an Analysis Document with a CATISamAnalysisTransition Object.<br>
 *
 * Set up a document with predefined analysis objects.
 * @param ipDoc Document for initialization. This documement may be a CATAnalysis document.
 * @param iTransitionType Late Type of the transition as defined in the dictionary.
 * @see CATISamAnalysisTransition
 */
ExportedByCATAnalysisInterface 
HRESULT CATSamTransitionSetup (CATDocument *ipDoc,CATUnicodeString iTransitionType);


#endif
