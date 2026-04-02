#ifndef CATIEdiPlug_H
#define CATIEdiPlug_H
//	COPYRIGHT DASSAULT SYSTEMES 2001

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "IUnknown.h"

class CATIUnknownList;
class CATIEdiMatingConnector;

extern "C" const IID IID_CATIEdiPlug;

/**
 * Interface to manage an electrical schematic Plug.
 * <b>Role</b>:This interfaces describes the electrical object Plug.   
 */
class CATIEdiPlug : public IUnknown
{
  
 public:

  /**
   * Gets Associated Cables.
   * 
   * @param oLEdiCables
   *   The connected cables
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
  virtual HRESULT ListAssociatedCables (CATIUnknownList **oLEdiCables) = 0;

  /**
   * Gets Associated Device.
   * 
   * @param oLEdiDevice
   *   The connected Device
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
  virtual HRESULT ListAssociatedDevice (IUnknown** oEdiDevice) = 0;

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

  /**
   * Disconnect Plug & Device.
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
   * Get the Mating Connector.
   * 
   * @param oMatingCtrs
   *   The Mating Connector
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
  virtual HRESULT GetMatingCtr (CATIEdiMatingConnector **oMatingCtr) = 0;
};
#endif




