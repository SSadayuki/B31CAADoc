#ifndef CATISchAppCntrDocLink_H
#define CATISchAppCntrDocLink_H

//  COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L1
 * @CAA2Usage U4 CATEASchAppCntrDocLink
 */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"
#include "CATUnicodeString.h"
#include "CATListOfCATUnicodeString.h"
#include "CATLISTPIUnknown.h"
#include "CATListOfInt.h"

class CATISchAppConnector;
class CATICStringList;
class CATIUnknownList;
class CATDocument;

extern "C" const IID IID_CATISchAppCntrDocLink ;

/**
 * Interface to manage the link of connectors across documents.
 * Applications must derive implementation of this interface 
 * from the adapter class CATEASchAppCntrDocLink.
 * <b>Role</b>: To modify or query a connector's link.
 * <p><b>BOA information</b>: this interface CANNOT be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page.
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 */

class CATISchAppCntrDocLink : public IUnknown
{
  public:  

  /**
  * Create an external link to another connector.
  * @param iSchConnector
  *   The connector to link to.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT AppLink (const CATISchAppConnector *iSchConnector) = 0;

  /**
  * Remove external link to another connector.
  * @param iUnpublish
  *   iUnpublish = 0, do not delete publication connector (default)
  *   iUnpublish > 0, delete publication connector
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT AppUnLink (const int iUnpublish = 0) = 0;

  /**
  * @deprecated V5R15 
  * Use @href CATISchAppCntrDocLink#AppGetLink2 instead.
  * Get a list of linked connector(s) and its document names or publication
  * name.
  * @param oLCntrs
  *   A list of connectors that are linked to this connector.
  * @param oLDocumentNames
  *   A list of document names containing the linked connector.
  * @param oPublicationName
  *   The publication name of the connector(s) linked to this connector.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT AppGetLink (CATIUnknownList **oLCntrs,
    CATICStringList **oLDocumentNames, char **oPublicationName) = 0;

  /**
  * Query whether this connector and input connector can be linked.
  * @param iSchConnector
  *   The connector to link to.
  * @param oBYes
  *   If TRUE, connectors can be linked.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT AppIsLinkable (const CATISchAppConnector *iSchConnector,
    CATBoolean *oBYes) = 0;

  /**
  * @deprecated V5R15 
  * Use @href CATISchAppCntrDocLink#AppLinkInit2 instead.
  * Publish this connector to make it available for linking.
  * @param iPublicationName
  *   The publication name of connector.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT AppLinkInit (const char *iPublicationName = NULL) = 0;

  /**
  * @deprecated V5R18 
  * Use @href CATISchAppCntrDocLink#AppGetLinkedDocs instead.
  * Get a list of linked connector(s) and its document names or publication
  * name.
  * @param oLCntrs
  *   A list of connectors that are linked to this connector.
  * @param oLDocumentNames
  *   A list of document names containing the linked connector.
  * @param oPublicationName
  *   The publication name of the connector(s) linked to this connector.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT AppGetLink2 (CATIUnknownList **oLCntrs,
    CATListOfCATUnicodeString &oLDocumentNames, CATUnicodeString &oPublicationName) = 0;

  /**
  * Publish this connector to make it available for linking.
  * @param iPublicationName
  *   The publication name of connector.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt> 
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT AppLinkInit2 (CATUnicodeString *iPublicationName = NULL) = 0;

  /**
  * Get a list of linked connectors, their documents' names, uuids, and
  * 'open in session' statuses, and a publication name of the connectors.
  * @param oPublicationName
  *   The publication name of the connector(s) linked to this connector.
  * @param oLDocumentName
  *   A list of document names of the documents containing the linked connector(s).
  * @param oLDocumentUuid
  *   A list of document UUIDs of the documents containing the linked connector(s).
  * @param oLOpenStatus
  *   A list of integer flags specifying whether a linked document is open 
  *   in the session or not (1 - yes; 0 - no).
  * @param oLCntr
  *   A list of connectors that are linked to this connector. Release every
  *   member (AddRef has been done).
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT AppGetLinkedDocs (CATUnicodeString          &oPublicationName,
                                    CATListOfCATUnicodeString &oLDocumentName, 
                                    CATListOfCATUnicodeString &oLDocumentUuid,
                                    CATListOfInt              &oLOpenStatus,
                                    CATLISTP(IUnknown)        &oLCntr) = 0;

  /**
  * Open a linked document.
  * @param iDocumentName
  *   Name of the document (from oLDocumentName list in AppGetLinkedDocs()).
  * @param iDocumentUuid
  *   Uuid of the document (from oLDocumentUuid list in AppGetLinkedDocs()).
  * @param oDocument
  *   Pointer to the document. Do not release (no AddRef is done).
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT AppOpenLinkedDoc (const CATUnicodeString  &iDocumentName,
                                    const CATUnicodeString  &iDocumentUuid,
                                    CATDocument            *&oDocument) = 0;

};
#endif
