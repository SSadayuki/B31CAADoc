#ifndef CATEASchAppDeleteCheck2_H
#define CATEASchAppDeleteCheck2_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */

// this Framework
#include "CATSchItfCPP.h"

// System
#include "CATBaseUnknown.h"
#include "CATBooleanDef.h"
#include "CATUnicodeString.h"

/**
 * Super class to derive implementation for interface CATISchAppDeleteCheck2.
 * <b>Role</b>: Adaptor
 */

class ExportedByCATSchItfCPP CATEASchAppDeleteCheck2 : public CATBaseUnknown
{
  public:  

  CATDeclareClass;

  /**
   * Constructs an empty CATEASchAppDeleteCheck2.
   */
  CATEASchAppDeleteCheck2();
  virtual ~CATEASchAppDeleteCheck2();

  /**
   * Reports if an application object can be deleted.
   * @param oOK
   *   Pointer to the CATBoolean to receive the ok.
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
  virtual HRESULT AppOkToDelete(CATBoolean *oOk);

  /**
   * Reports if an application object can be deleted. 
   * Also returns the caption and message text to be used 
   * as a feedback message for the delete operation.
   *
   * @param oOK
   *   Pointer to the CATBoolean to receive the ok.
   * @param oCaption
   *   CATUnicodeString used for the caption of the message box.
   * @param oMessage
   *   CATUnicodeString used as the feedback message.
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
  virtual HRESULT AppOkToDeleteWithMessage (CATBoolean *oOk,
    CATUnicodeString &oUCaption, CATUnicodeString &oUMessage);

  private:
  // do not implement
  CATEASchAppDeleteCheck2 (CATEASchAppDeleteCheck2 &);
  CATEASchAppDeleteCheck2& operator=(CATEASchAppDeleteCheck2&);

};

#endif
