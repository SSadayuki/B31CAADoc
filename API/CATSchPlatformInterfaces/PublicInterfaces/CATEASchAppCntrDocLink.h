#ifndef CATEASchAppCntrDocLink_H
#define CATEASchAppCntrDocLink_H

// COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */

#include "CATSchItfCPP.h"
#include "CATISchAppConnector.h"

// System
#include "CATBaseUnknown.h"
#include "CATICStringList.h"
#include "CATIUnknownList.h"
#include "CATBooleanDef.h"
#include "CATUnicodeString.h"
#include "CATListOfCATUnicodeString.h"
#include "CATLISTPIUnknown.h"
#include "CATDocument.h"

/**
 * Super class to derive implementation for interface CATISchAppCntrDocLink.
 * <b>Role</b>: Adaptor
 */

class ExportedByCATSchItfCPP CATEASchAppCntrDocLink : public CATBaseUnknown
{
  public:  

  CATDeclareClass;

  /**
   * Constructs an empty CATEASchAppCntrDocLink.
   */
  CATEASchAppCntrDocLink();
  virtual ~CATEASchAppCntrDocLink();

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
  virtual HRESULT AppLink (const CATISchAppConnector *iSchConnector);

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
  virtual HRESULT AppUnLink (const int iUnpublish = 0);

  /**
  * @deprecated V5R15 
  * Use @href CATEASchAppCntrDocLink#AppGetLink2 instead.
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
    CATICStringList **oLDocumentNames, char **oPublicationName);

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
    CATBoolean *oBYes);

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
  virtual HRESULT AppLinkInit (const char *iPublicationName = NULL);

  /**
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
    CATListOfCATUnicodeString &oLDocumentNames, CATUnicodeString &oPublicationName);

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
  virtual HRESULT AppLinkInit2 (CATUnicodeString *iPublicationName = NULL);

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
                                    CATLISTP(IUnknown)        &oLCntr);

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
                                    CATDocument            *&oDocument);

  private:
  // do not implement
  CATEASchAppCntrDocLink (CATEASchAppCntrDocLink &);
  CATEASchAppCntrDocLink& operator=(CATEASchAppCntrDocLink&);

};

#endif
