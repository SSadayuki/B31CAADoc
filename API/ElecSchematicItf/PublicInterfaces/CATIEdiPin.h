#ifndef CATIEdiPin_H
#define CATIEdiPin_H
//	COPYRIGHT DASSAULT SYSTEMES 2001

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "IUnknown.h"

extern "C" const IID IID_CATIEdiPin;

class CATIUnknownList;

/**
 * Interface to manage an electrical schematic Pin.
 * <b>Role</b>:This interfaces describes the electrical object Pin.   
 */
class CATIEdiPin : public IUnknown
{
  
 public:

  /**
   * Removes Pin connector.
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
   * Checks Pin's IdNumber unicity on the current level
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
   * Sets Pin's IdNumber on the current level
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
   * Gets Associated Wires Extremities.
   * 
   * @param oLEdiWireExtremities
   *   The connected wire extremities
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
  virtual HRESULT ListConnectedWireExtremities (CATIUnknownList **oLWireExtremities) = 0;

  /**
   * Gets Associated Pins throw Id_Numbers Mapping & Connectivity (Potential).
   * 
   * @param oLEdiAssociatedPins
   *   The associated pins
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
  virtual HRESULT ListAssociatedPins (CATIUnknownList **oLAssociatedPins) = 0;

  /**
   * Gets Potential Name.
   * 
   * @param oPotential
   *   The potential
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
  virtual HRESULT GetPotential (wchar_t **oPotential) = 0;
  
  /**
   * Unset Potential (The potential will be unset on current level and references).
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
  virtual HRESULT UnsetPotential () = 0;  

};
#endif




