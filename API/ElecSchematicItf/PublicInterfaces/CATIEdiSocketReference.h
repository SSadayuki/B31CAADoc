#ifndef CATIEdiSocketReference_H
#define CATIEdiSocketReference_H
//	COPYRIGHT DASSAULT SYSTEMES 2001

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "IUnknown.h"

extern "C" const IID IID_CATIEdiSocketReference;

class CATIEdiWidePin;
class CATIEdiPin;
class CATIEdiAssemblyConnector;
class CATIEdiMatingConnector;

/**
 * Interface to manage an electrical schematic Socket reference.
 * <b>Role</b>:This interfaces describes the electrical object Socket.   
 */
class CATIEdiSocketReference : public IUnknown
{
  
 public:

  /**
   * Creates a wide pin connector.
   * 
   * @param iCntrId
   *   Wide pin user identifier
   * @param iIdNumber
   *   identification number
   * @param oWidePinCntr
   *   wide pin created
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
  virtual HRESULT AddWidePin (const int iEdiNumber, const wchar_t * iEdiId_Number, CATIEdiWidePin** oEdiWidePin) = 0;
  
  /**
   * Creates a pin connector.
   * 
   * @param iCntrId
   *   Wide pin user identifier
   * @param iIdNumber
   *   identification number
   * @param oWidePinCntr
   *   wide pin created
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
  virtual HRESULT AddPin (const int iEdiNumber, const wchar_t * iEdiId_Number, CATIEdiPin** oEdiPin) = 0;
    
  /**
   * Creates an assembly connector.
   * 
   * @param oEdiAssemblyCtr
   *   assembly connector created.
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
  virtual HRESULT AddAssemblyCtr (CATIEdiAssemblyConnector **oEdiAssemblyCtr) = 0;
      
  /**
   * Creates an mating connector.
   * 
   * @param oEdiMatingCtr
   *   mating connector created.
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
  virtual HRESULT AddMatingCtr (CATIEdiMatingConnector **oEdiMatingCtr) = 0;
};
#endif




