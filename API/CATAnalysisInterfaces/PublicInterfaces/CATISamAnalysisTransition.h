#ifndef CATISamAnalysisTransition_H
#define CATISamAnalysisTransition_H
//===================================================================
// COPYRIGHT DASSAULT SYSTEMES 1999
/**
  * @CAA2Level L1
  * @CAA2Usage U5
  */
//===================================================================
#include "CATAnalysisInterface.h"
#include "CATBaseUnknown.h"

class CATDocument;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISamAnalysisTransition ;
#else
extern "C" const IID IID_CATISamAnalysisTransition ;
#endif

//------------------------------------------------------------------

/**
 * Interface to Analysis Transitions.
 * <b>Role:</b> Interface designed to manage <b>Analysis transitions</b>.<br>
 * <p>
 * The transition is specific code that need to be called in order 
 * to initialize an Analysis Model, for a specific domain, solver or activity.<br>
 * For example, specific feature catalog should be loaded, default sets can created.<br>
 * All the transitions are retreived by the application by scanning the <br> 
 * Object Modeler dictionary file.
 */ 
class ExportedByCATAnalysisInterface CATISamAnalysisTransition: public CATBaseUnknown
	{
	CATDeclareInterface;

	public:
/**
 * Launches the software associated with a transition.
 * @param iDocument
 * The active document for transition execution.
 */

		virtual HRESULT ExecuteTransition(const CATDocument* iDocument) = 0;
	};

//------------------------------------------------------------------

CATDeclareHandler( CATISamAnalysisTransition, CATBaseUnknown );

#endif
