#ifndef CATIEdiEquipment_H
#define CATIEdiEquipment_H
//	COPYRIGHT DASSAULT SYSTEMES 2001

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "IUnknown.h"
#include "CATIUnknownList.h"

extern "C" const IID IID_CATIEdiEquipment;

/**
 * Interface to manage an electrical schematic Equipment.
 * <b>Role</b>:This interfaces describes the electrical object Equipment.   
 */
class CATIEdiEquipment : public IUnknown
{
  
 public:
  
  /**
   * Gets the list of Sockets for the Equipment
   * (Aggregated Sockets & Connected throw a connection).
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
	
  
  /**
   * List of AssemblyCtr connectors.
   * 
   * @param oLAsmCtrs
   *   The AssemblyCtr connectors
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
  virtual HRESULT ListAssemblyCtr (CATIUnknownList **oLAsmCtrs) = 0;

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

};
#endif




