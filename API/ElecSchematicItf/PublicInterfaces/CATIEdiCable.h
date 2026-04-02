#ifndef CATIEdiCable_H
#define CATIEdiCable_H
//	COPYRIGHT DASSAULT SYSTEMES 2001

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "IUnknown.h"

extern "C" const IID IID_CATIEdiCable;

class CATIEdiCableExtremity;
class CATIUnknownList;
// --> SCU
class CATILinkableObject;
// <-- SCU

/**
 * Interface to manage an electrical schematic Cable.
 * <b>Role</b>:This interfaces describes the electrical object Cable.   
 */
class CATIEdiCable : public IUnknown
{
  
 public:
  
  /**
   * Gets cable extremities.
   *
   * If a cable extremity does not exist, she will be 
   * created on the fly, on the first instance level.
   * 
   * @param oCableExtremity1
   *   First Cable extremity
   * @param oCableExtremity2
   *   Second Cable extremity
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
  virtual HRESULT GetExtremities (CATIEdiCableExtremity** oExtremity1, 
				  CATIEdiCableExtremity** oExtremity2) = 0;  

  /**
   * List Associated Devices.
   * 
   * @param oLDevices
   *   List of connected devices
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
  virtual HRESULT ListAssociatedDevices (CATIUnknownList **oLDevices) = 0;

  /**
   * List Cable's conductors.
   * 
   * @param oLWires
   *   List of wires
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
  virtual HRESULT ListWires (CATIUnknownList **oLWires) = 0;

};
#endif





