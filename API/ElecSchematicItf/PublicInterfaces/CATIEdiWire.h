#ifndef CATIEdiWire_H
#define CATIEdiWire_H
//	COPYRIGHT DASSAULT SYSTEMES 2001

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "IUnknown.h"

extern "C" const IID IID_CATIEdiWire;

class CATIEdiWireExtremity;
class CATIEdiCable;

/**
 * Interface to manage an electrical schematic wire.
 * <b>Role</b>:This interfaces describes the electrical object wire.   
 */
class CATIEdiWire : public IUnknown
{
  
 public:
  
  /**
   * Removes Wire.
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
  virtual HRESULT Remove () = 0;

  /**
   * Gets Cable.
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
  virtual HRESULT GetCable (CATIEdiCable** oEdiCable) = 0;

  /**
   * Gets wire extremities.
   * 
   * @param oWireExtremity1
   *   First wire extremity
   * @param oWireExtremity2
   *   Second wire extremity
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
  virtual HRESULT GetExtremities (CATIEdiWireExtremity** oExtremity1, 
				  CATIEdiWireExtremity** oExtremity2) = 0;  
};
#endif




