#ifndef CATIEdiWidePin_H
#define CATIEdiWidePin_H
//	COPYRIGHT DASSAULT SYSTEMES 2001

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "IUnknown.h"

class CATIUnknownList;
class CATIEdiWidePin;

extern "C" const IID IID_CATIEdiWidePin;

/**
 * Interface to manage an electrical schematic WidePin.
 * <b>Role</b>:This interfaces describes the electrical object WidePin.   
 */
class CATIEdiWidePin : public IUnknown
{
  
 public:

   /**
   * Removes WidePin connector.
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
   * Checks WidePin's IdNumber unicity on the current level
   *  (IdNumber can be checked and changed on all instance levels).
   * 
   * @param iEdiIdNumber
   *   identification number
   * @param oEdiIsUnique
   *   = 0 : is not unique  
   *   = 1 : is unique
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
  virtual HRESULT CheckIdNumber (const wchar_t *iEdiIdNumber, int* oEdiIsUnique) = 0;
  
  /**
   * Sets WidePin's IdNumber on the current level
   *  (IdNumber can be checked and changed on all instance levels).
   * 
   * @param iEdiIdNumber
   *   identification number
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
  virtual HRESULT SetIdNumber (const wchar_t *iEdiIdNumber) = 0; 

  /**
   * Gets Pin's Number on the current level.
   * 
   * @param oEdiNumber
   *   The identification number
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
   * Gets Pin's IdNumber on the current level.
   * 
   * @param oEdiIdNumber
   *   The identification number
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
  virtual HRESULT GetIdNumber (wchar_t **oEdiIdNumber) = 0;

  /**
   * Gets Associated Cables Extremities.
   * 
   * @param oLEdiCableExtremities
   *   The connected cable extremities
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
  virtual HRESULT ListConnectedCableExtremities (CATIUnknownList **oLCableExtremities) = 0;

   /**
   * Connects a plug and a Device through WidePin connectors.
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
  virtual HRESULT Connect (CATIEdiWidePin* iEdiWidePin) = 0;
  
   /**
   * List the Wide Pins Connected to this Wide Pin.
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
  virtual HRESULT ListAssociatedWidePins (CATIUnknownList **oLAssociatedWidePins) = 0;
};
#endif




