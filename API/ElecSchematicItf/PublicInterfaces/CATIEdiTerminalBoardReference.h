#ifndef CATIEdiTerminalBoardReference_H
#define CATIEdiTerminalBoardReference_H
//	COPYRIGHT DASSAULT SYSTEMES 2001

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "IUnknown.h"

extern "C" const IID IID_CATIEdiTerminalBoardReference;

class CATIEdiWidePin;
class CATIEdiPin;

/**
 * Interface to manage an electrical schematic Socket reference.
 * <b>Role</b>:This interfaces describes the electrical object Socket.   
 */
class CATIEdiTerminalBoardReference : public IUnknown
{
  
 public:
  
  /**
   * Creates a pin connector.
   * 
   * @param iCntrId
   *   Wide pin user identifier
   * @param iIdNumber
   *   identification number
   * @param oWidePinCntr
   *   wide pin created
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
  virtual HRESULT AddPin (const int iEdiNumber, const wchar_t * iEdiId_Number, CATIEdiPin** oEdiPin) = 0;
};
#endif





