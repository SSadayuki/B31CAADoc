#ifndef CATIEdiWireCtr_H
#define CATIEdiWireCtr_H
//	COPYRIGHT DASSAULT SYSTEMES 2002

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "IUnknown.h"

class CATIEdiPin;
class CATIEdiCableExtremity;

extern "C" const IID IID_CATIEdiWireCtr;

/**
 * Interface to manage an electrical schematic Wire connector. This interface will
 * replace CATIEdiWireExtremity.
 * <b>Role</b>:This interfaces describes the electrical object Wire connector. 
 */
class CATIEdiWireCtr : public IUnknown
{
  
 public:

  /**
   * Connects the wire connector to a Pin Connector.
   *
   * @param iEdiCableExtrCtr
   *   The Cable extremity connector whoes connection includes the next input: iEdiPin
   * @param iEdiPin
   *   The Pin Connector to connect
   */
  virtual HRESULT Connect (const CATIEdiCableExtremity *iEdiCableExtrCtr, 
    const CATIEdiPin *iEdiPin) = 0;
  
  /**
   * Disconnects the cable extremity.
   * @param iEdiPin
   *   The Pin Connector to disconnect
   */
  virtual HRESULT Disconnect (const CATIEdiPin *iEdiPin) = 0;

  /**
   *  Gets the cable extremity connectors.
   *
   * @param oCableExtremity1
   *   The Cable extremities connector 1
   * @param oCableExtremity1
   *   The Cable extremities connector 2
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
  virtual HRESULT GetCableExtremity (
    CATIEdiCableExtremity **oCableExtremity1,
    CATIEdiCableExtremity **oCableExtremity2) = 0;

  /**
   * Gets Connected Pin connector.
   *
   * @param iEdiCableExtrCtr
   *   The Cable extremity connector whoes connection includes this wire connector
   * @param oEdiPin
   *   The Pin object
   */ 
  virtual HRESULT GetConnectedPin (
    const CATIEdiCableExtremity *iEdiCableExtrCtr,
    CATIEdiPin **oEdiPin) = 0;

  /**
   * Get the number of the wire extremity connector.
   *
   * @param oNumber
   *   The number of the wire extremity connector. 
   */
  virtual HRESULT GetNumber (int *oNumber) = 0;

};
#endif




