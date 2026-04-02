//===================================================================
// COPYRIGHT DASSAULT SYSTEMES 2000
//===================================================================
//
// CATIEdiMatingConnector.h
//
//===================================================================
#ifndef CATIEdiMatingConnector_H
#define CATIEdiMatingConnector_H

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "IUnknown.h"

extern "C" const IID IID_CATIEdiMatingConnector ;

class CATIUnknownList;

/**
 * Interface to manage an electrical schematic Mating Connector.
 * <b>Role</b>:This interfaces describes the electrical object Mating Connector.   
 */
class CATIEdiMatingConnector: public IUnknown
{
  
 public:

   
  /**
   * Gets Associated Device.
   * 
   * @param oEdiDevice
   *   The Device application object
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
  virtual HRESULT GetDevice (IUnknown** oEdiDevice) = 0;

  /**
   * Gets Pin's Number on the current level.
   * 
   * @param oEdiNumber
   *   The identification number.
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
  virtual HRESULT GetNumber (int *oEdiNumber) = 0;
  
  /**
   * Gets Connected Assembly Connector.
   * 
   * @param oConnectedAsmCtr
   *   The connected assembly connector.
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
  virtual HRESULT ListConnectedMatingConnectors (CATIUnknownList **oLConnectedMatingCtrs) = 0;


  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};


#endif
