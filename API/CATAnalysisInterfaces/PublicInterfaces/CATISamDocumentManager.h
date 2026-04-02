#ifndef CATISamDocumentManager_h
#define CATISamDocumentManager_h
//===================================================================
// COPYRIGHT DASSAULT SYSTEMES 1999  

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */
//===================================================================
#include "CATBaseUnknown.h"
#include "CATAnalysisInterface.h"
#include "CATDocumentsInSession.h"
#include "CATLISTV_CATISpecObject.h"
#include "CATLISTV_sequence_octet.h"
#include "CATString.h"
#include "CATUnicodeString.h"

class CATListPtrCATBaseUnknown;
class CATDocument;
class CATISpecObject;
class CATAnalysisDocManager;
class CATIDocId;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISamDocumentManager;
#else
extern "C" const IID IID_CATISamDocumentManager;
#endif

/**
 * Interface to link a CATAnalysis Document with another document.
 * <b>Role:</b>Interface designed to manage links to external document such as
 * <b>.CATPart</b>,<b>.CATProduct</b>,<b>CATIA model</b>,,etc... .<br>
 * This links will be created at the level of the Links manager Object.
 */ 

class ExportedByCATAnalysisInterface CATISamDocumentManager : public CATBaseUnknown
{
	CATDeclareInterface;

	public:
/**
 * Adds a external link from the Document manager to an external document.
 * @param iDocumentToAdd  The document to be linked.
 * @param iLinkType       The document type (Extension).
 * @param iFeatureLink    Optional if a specific feature is required for the link.<br>
 * This feature may be created by derivation of the SAMFeatureLink startup.
 * If not valuated, a default "SAMFeatureLink" will be created.
 * @param iTypeLink    Optional: Allow to specify a link behavoir for SMARTeam integration for a For non CATIA Document.
 * <br><b>Legal values</b>: 
 * <ul> <li><b>1</b>: will customize an output link (Result attached to an Analysis).</li>
 *      <li><b>0</b>: will customize an input link (Import of data inside V5). This is the default value.</li></ul>
 */
		virtual HRESULT InsertDocument(const CATDocument* iDocumentToAdd,
                                   CATString iLinkType = "SAMLink",
                                   CATISpecObject *iFeatureLink = NULL ,const int iTypeLink=0) = 0;
/**
 * Removes a external link from the Document manager to an external document.
 * @param iDocumentToRemove  The document to be unlinked.
 */
		virtual HRESULT RemoveDocument(const CATDocument* iDocumentToRemove) = 0;
/**
 * Retrieves all the external links from the CATAnalysis.
 * @param oList  The collection of CATDocument pointed by .CATAnalysis document.
 * @see CATDocument
 */
		virtual HRESULT GetPointedDocuments(CATLISTP(CATDocument)& oList) = 0;

/**
 * Retrieves all the external links from the CATAnalysis.
 * @param oList  The collection of CATISpecObject pointed by .CATAnalysis document.
 */
		virtual HRESULT GetPointingLinks(CATLISTV(CATISpecObject_var)& oList) = 0;

/**
 * Retrieves the pointed document fom an external links of a CATAnalysis.
 * @param iSpec  The CATISpecObject use to link an external document.
 * @param opDoc  The CATDocument that is linked.
 * @param iLoad 
 * <br><b>Legal values</b>: 
 * <ul> <li><b>1</b>: Force the loading of the document.</li>
 *      <li><b>0</b>: Do not load the pointed document.</li></ul>
 */

    virtual HRESULT GetDocument(const CATISpecObject* iSpec,CATDocument *&opDoc, const int iForceLoad=0) = 0;

/**
 * Adds a external link from the Document manager to an external document.
 * @param iDocIDToAdd     The documentID to be linked.
 * @param iLinkType       The document type (Extension).
 * @param iFeatureLink    Optional if a specific feature is required for the link.<br>
 * This feature may be created by derivation of the SAMFeatureLink startup.
 * If not valuated, a default "SAMFeatureLink" will be created.
 * @param iTypeLink    Optional: Allow to specify a link behavoir for SMARTeam integration for a For non CATIA Document.
 * <br><b>Legal values</b>: 
 * <ul> <li><b>1</b>: will customize an output link (Result attached to an Analysis).</li>
 *      <li><b>0</b>: will customize an input link (Import of data inside V5). This is the default value.</li></ul>
 */
		virtual HRESULT InsertDocument(const CATIDocId* iDocIDToAdd,
                                   CATString iLinkType = "SAMLink",
                                   CATISpecObject *iFeatureLink = NULL ,const int iTypeLink=0) = 0;

};

CATDeclareHandler(CATISamDocumentManager,CATBaseUnknown);

#endif
