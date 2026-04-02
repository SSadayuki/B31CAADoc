#ifndef CATIEdiWireExtremity_H
#define CATIEdiWireExtremity_H
//	COPYRIGHT DASSAULT SYSTEMES 2001

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "IUnknown.h"

class CATIEdiWire;
class CATIEdiPin;
class CATIEdiCableExtremity;

extern "C" const IID IID_CATIEdiWireExtremity;

/**
 * Interface to manage an electrical schematic Wire Extremity.
 * <b>Role</b>:This interfaces describes the electrical object Wire Extremity.   
 */
class CATIEdiWireExtremity : public IUnknown
{
  
 public:

  /**
   * Gets Wire electrical object.
   *
   * @param oEdiWire
   *   The Wire object
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
  virtual HRESULT GetWire (CATIEdiWire** oEdiWire) = 0;

  /**
   * Connects the wire extremity to a Pin Connector.
   *
   * @param iEdiPin
   *   The Pin Connector to connect
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
  virtual HRESULT Connect (CATIEdiPin* iEdiPin) = 0;
  
  /**
   * Disconnects the cable extremity.
   *
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
  virtual HRESULT Disconnect () = 0;

  /**
   *  Gets the calbe extremity in accordance with
   *  this wire extremity. The filter is based on Id_Number 
   *  Attribut value.
   *
   * @param oLCableExtremities
   *   The Cable extremities 
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
  virtual HRESULT GetCableExtremity (CATIEdiCableExtremity** oCableExtremity) = 0;

  /**
   * Gets Connected Pin connector.
   *
   * @param oEdiPin
   *   The Pin object
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
  virtual HRESULT GetConnectedPin (CATIEdiPin** oEdiPin) = 0;

  /**
   * Get the number of the wire extremity.
   *
   * @param oNumber
   *   The number of the wire extremity. 
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
  virtual HRESULT GetNumber (int *oNumber) = 0;

};
#endif




