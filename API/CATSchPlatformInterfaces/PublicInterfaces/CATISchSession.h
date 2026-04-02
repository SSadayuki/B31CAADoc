#ifndef CATISchSession_H
#define CATISchSession_H

//	COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"
#include "CATString.h"

class CATDocument;

extern "C" const IID IID_CATISchSession ;

/**
 * Interface to manage document sessions with Schematic context. 
 * <b>Role</b>: To create schematic documents.
 */
class CATISchSession : public IUnknown
{
  public:   
  
  /**
  * Create a document with Schematic context.
  * @param iDocType
  *   Document type, if NULL "Product" is assumed. These are the types
  *   shown in the File+New list
  * @param iBInteractive
  *   If TRUE, document is created in interactive session with editor
  * @param oNewDoc
  *   Document created. DO NOT NEED TO RELEASE OUTPUT POINTER.
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
  virtual HRESULT CreateDocument (char * iDocType,
    CATBoolean iBInteractive, CATDocument **oNewDoc) = 0;

  /**
  * Get the schematic container (e.g. for CATISchBaseFactory implementation).
  * @param iDoc
  *   Document in the session to retreive the container from
  * @param oContainer 
  *   Schematic container
  *   shown in the File+New list
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
  virtual HRESULT GetSchExtContainer (CATDocument *iDoc,
    IUnknown **oContainer) = 0;

  /**
  * Get the specified interface for the requested object.
  * @param type
  *   Object name
  * @param iIID
  *   Interface identifier.
  * @param oIntf
  *   Interface pointer 
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
  virtual HRESULT GetSchObjInterface(CATClassId type,
    const IID &iIID,  void **oIntf) = 0;

  /**
  * Get the current application ID.
  * @param oApplicationID
  *   Application ID
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
  virtual HRESULT GetCurrentApplicationID (char **oApplicationID) = 0;

  /**
  * Set the current application ID.
  * @param iApplicationID
  *   Application ID
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
  virtual HRESULT SetCurrentApplicationID (const char *iApplicationID) = 0;

  /**
  * Get the current document.
  * @param oCurDoc
  *   Pointer to current document.  DO NOT NEED TO RELEASE OUTPUT POINTER.
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
  virtual HRESULT GetCurrentDocument (CATDocument *&oCurDoc) = 0;

  /**
  * Set the current document.
  * @param iCurDoc
  *   Pointer to current document.
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
  virtual HRESULT SetCurrentDocument (const CATDocument *iCurDoc) = 0;


};
#endif
