#ifndef CATISchCntrDocLink_H
#define CATISchCntrDocLink_H

//	COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// System
#include "IUnknown.h"
#include "CATUnicodeString.h"

class CATISchAppConnector;

extern "C" const IID IID_CATISchCntrDocLink ;

/**
 * Interface to manage the external link of connectors
 * across documents.
 * <b>Role</b>: To modify or query a connector's external link. 
 */
class CATISchCntrDocLink : public IUnknown
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
  virtual HRESULT Link (CATISchAppConnector *iSchConnector) = 0;

  /**
  * Remove external link to another connector.
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
  virtual HRESULT UnLink () = 0;

  /**
  * @deprecated V5R15 
  * Use @href CATISchCntrDocLink#GetLink2 instead.
  * Get the linked connector and its document name.
  * @param oSchConnector
  *   The connector that is linked to this connector.
  * @param oDocumentName
  *   Name of document containing the linked connector.
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
  virtual HRESULT GetLink (CATISchAppConnector **oSchConnector,
    char **oDocumentName) = 0;

  /**
  * Get the linked connector and its document name.
  * @param oSchConnector
  *   The connector that is linked to this connector.
  * @param oDocumentName
  *   Name of document containing the linked connector.
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
  virtual HRESULT GetLink2 (CATISchAppConnector **oSchConnector,
    CATUnicodeString &oDocumentName) = 0;
};
#endif
