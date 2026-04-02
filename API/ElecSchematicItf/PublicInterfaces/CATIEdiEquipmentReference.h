#ifndef CATIEdiEquipmentReference_H
#define CATIEdiEquipmentReference_H
//	COPYRIGHT DASSAULT SYSTEMES 2001

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "IUnknown.h"

extern "C" const IID IID_CATIEdiEquipmentReference;

class CATIEdiPin;
class CATIEdiSocket;
class CATIEdiWidePin;
class CATIEdiAssemblyConnector;

/**
 * Interface to manage an electrical schematic Equipment reference.
 * <b>Role</b>:This interfaces describes the electrical object Equipment.   
 */
class CATIEdiEquipmentReference : public IUnknown
{
  
 public:

  /**
   * Creates a socket.
   * 
   * @param iEdiInstanceName
   *   The Instance Name of the application component instance.
   * @param oEdiSocket
   *   The new application component object created 
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
  virtual HRESULT AddSocket (const wchar_t *iEdiInstanceName, CATIEdiSocket** oEdiSocket) = 0;

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
   * Creates an assembly connector.
   * 
   * @param oEdiAssemblyCtr
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
  virtual HRESULT AddAssemblyCtr (CATIEdiAssemblyConnector **oEdiAssemblyCtr) = 0;
  
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
};
#endif




