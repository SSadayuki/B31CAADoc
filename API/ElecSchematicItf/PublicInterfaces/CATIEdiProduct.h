#ifndef CATIEdiProduct_H
#define CATIEdiProduct_H
//	COPYRIGHT DASSAULT SYSTEMES 2001

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "IUnknown.h"

extern "C" const IID IID_CATIEdiProduct;

/**
 * Interface to manage an electrical schematic Product.
 * <b>Role</b>:This interfaces describes the electrical object Product.   
 */
class CATIEdiProduct : public IUnknown
{
  
 public:

  /**
   * Removes Product.
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
   * Set PartNumber on the reference level
   * (The names server is intergrated at this level,
   *  if the given name is not unique, a new one 
   *  is generated ...).
   *
   * @param iEdiPartNumber
   *   The PartNumber of the application component reference.
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
  virtual HRESULT SetPartNumber (const wchar_t * iEdiPartNumber) = 0;

  /**
   * Set InstanceName on the first instance level
   * (The names server is intergrated at this level,
   *  if the given name is not unique, a new one 
   *  is generated ...).
   *
   * @param iEdiInstanceName
   *   The InstanceName of the application component reference.
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
  virtual HRESULT SetInstanceName (const wchar_t * iEdiInstanceName) = 0;
};
#endif




