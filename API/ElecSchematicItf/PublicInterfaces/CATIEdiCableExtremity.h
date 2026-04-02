#ifndef CATIEdiCableExtremity_H
#define CATIEdiCableExtremity_H
//	COPYRIGHT DASSAULT SYSTEMES 2001

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "IUnknown.h"

class CATIEdiCable;
class CATIEdiWidePin;
class CATIUnknownList;

extern "C" const IID IID_CATIEdiCableExtremity;

/**
 * Interface to manage an electrical schematic Cable Extremity.
 * <b>Role</b>:This interfaces describes the electrical object Cable Extremity.   
 */
class CATIEdiCableExtremity : public IUnknown
{
  
 public:

  /**
   * Gets Cable electrical object.
   *
   * @param oEdiCable
   *   The Cable object
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
  virtual HRESULT GetCable (CATIEdiCable** oEdiCable) = 0;
  
   /**
   * Gets Connected Wide Pin connector.
   *
   * @param oEdiWidePin
   *   The Wide Pin object
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
  virtual HRESULT GetConnectedWidePin (CATIEdiWidePin** oEdiWidePin) = 0;

  /**
   * Connects the cable extremity to a Wide Pin Connector.
   *
   * This method allows to connect :
   *   - Cables to Equipments throw Sockets 
   *   - Cables to JunctionBoxes
   *   - Cables to Plugs
   *   - Cables to Switchs
   *
   * @param iEdiWidePin
   *   The Wide Pin Connector to connect
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
  virtual HRESULT Connect (CATIEdiWidePin* iEdiWidePin) = 0;

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
   * Gets the list of wire extremities in accordance with
   *  this cable extremity. The filter is based on Id_Number 
   *  Attribute value.
   *
   * @param oLWireExtremities
   *   The Wire extremities 
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
  virtual HRESULT ListWireExtremities (CATIUnknownList **oLWireExtremities) = 0;

  /**
   * Get the number of the cable extremity.
   *
   * @param oNumber
   *   The number of the cable extremity. 
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




