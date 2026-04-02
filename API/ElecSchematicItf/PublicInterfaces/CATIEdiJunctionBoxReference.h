#ifndef CATIEdiJunctionBoxReference_H
#define CATIEdiJunctionBoxReference_H
//	COPYRIGHT DASSAULT SYSTEMES 2001

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "IUnknown.h"

extern "C" const IID IID_CATIEdiJunctionBoxReference;

class CATIEdiWidePin;
class CATIEdiTerminalBoard;

/**
 * Interface to manage an electrical schematic JunctionBox reference.
 * <b>Role</b>:This interfaces describes the electrical object JunctionBox.   
 */
class CATIEdiJunctionBoxReference : public IUnknown
{
  
 public:

  /**
   * Creates a wide pin connector.
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
  virtual HRESULT AddWidePin (const int iEdiNumber, const wchar_t * iEdiId_Number, CATIEdiWidePin** oEdiWidePin) = 0;
  
  /**
   * Creates a terminal board.
   * 
   * @param iEdiInstanceName
   *   The Instance Name of the application component instance.
   * @param oEdiSocket
   *   The new application component object created 
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
  virtual HRESULT AddTerminalBoard (const wchar_t * iEdiInstanceName, CATIEdiTerminalBoard** oEdiTerminalBoard) = 0;
  
};
#endif




