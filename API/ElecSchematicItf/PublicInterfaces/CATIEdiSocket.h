#ifndef CATIEdiSocket_H
#define CATIEdiSocket_H
//	COPYRIGHT DASSAULT SYSTEMES 2001

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "IUnknown.h"

extern "C" const IID IID_CATIEdiSocket;

class CATIUnknownList;
class CATIEdiAssemblyConnector;
class CATIEdiMatingConnector;

/**
 * Interface to manage an electrical schematic Socket.
 * <b>Role</b>:This interfaces describes the electrical object Socket.   
 */
class CATIEdiSocket : public IUnknown
{
  
 public:

  /**
   * Gets Father Device
   * (Throw Aggregation links & Connections). 
   *
   * @param oEdiDevice
   *   The Device
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
  virtual HRESULT GetFatherDevice (IUnknown** oEdiDevice) = 0;

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
   * @param oLEdiPlugs
   *   The plugged connectors
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
  virtual HRESULT ListAssociatedPlugs (CATIUnknownList **oLEdiPlugs) = 0;

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
   * Get the Assembly Connector.
   * 
   * @param oAsmCtrs
   *   The Assembly Connector
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
  virtual HRESULT GetAssemblyCtr (CATIEdiAssemblyConnector **oAsmCtr) = 0;
      
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
  virtual HRESULT ListMatingCtrs(CATIUnknownList **oLMatingCtr) = 0;
};
#endif




