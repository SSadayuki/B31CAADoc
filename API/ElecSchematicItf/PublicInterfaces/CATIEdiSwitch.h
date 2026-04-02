#ifndef CATIEdiSwitch_H
#define CATIEdiSwitch_H
//	COPYRIGHT DASSAULT SYSTEMES 2001

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "IUnknown.h"
class CATIUnknownList;

extern "C" const IID IID_CATIEdiSwitch;

/**
 * Interface to manage an electrical schematic Switch.
 * <b>Role</b>:This interfaces describes the electrical object Switch.   
 */
class CATIEdiSwitch : public IUnknown
{
  
 public:

  /**
   * Gets the list of Sockets for the Switch
   * (aggregated Sockets). 
   *
   * @param oLSockets
   *   List of Sockets
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
  virtual HRESULT ListSockets (CATIUnknownList **oLSockets) = 0;

  /**
   * List of Wide Pin connectors.
   * 
   * @param oLWidePins
   *   The Wide Pin connectors
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
  virtual HRESULT ListWidePins (CATIUnknownList **oLWidePins) = 0;
  
  /**
   * List of Pin connectors.
   * 
   * @param oLPins
   *   The Pin connectors
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
  virtual HRESULT ListPins (CATIUnknownList **oLPins) = 0;

};
#endif




