#ifndef CATIElbUipDevices_H
#define CATIElbUipDevices_H

// COPYRIGHT DASSAULT SYSTEMES 2002

/** 
 * @CAA2Level L1
 * @CAA2Usage U5
 */

// module declaration
#include "ExportedByCATElbInterfaces.h"

// inherited from
#include "CATBaseUnknown.h"

// for class variable declaration
#include "CATUnicodeString.h"
#include "CATElbDevice.h"

// forward declaration
class CATListValCATUnicodeString;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATElbInterfaces IID IID_CATIElbUipDevices;
#else
extern "C" const IID IID_CATIElbUipDevices;
#endif

/**
 * Interface dedicated to devices.
 * <b>Role</b>: This interface is used to list the devices and their compositions.
 */
class ExportedByCATElbInterfaces CATIElbUipDevices : public CATBaseUnknown
{
  CATDeclareInterface;
  
public:
  /**
   * Retrieves the list of devices to install related to the given list of systems.
   * @param iListOfSystems
   *  The list of systems.
   * @param oDevicesCount
   *  The number of devices.
   * @param oListOfDevices
   *  The list of devices to place in the 3D mockup.
   * @return
   *   An HRESULT value. 
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The devices have been retrieved.</dd>
   *     <dt>E_FAIL </dt>
   *     <dd>Error while retrieving the devices.</dd>
   *   </dl>
   */
  virtual HRESULT ListDevices(const CATListValCATUnicodeString *iListOfSystems, CATLONG32 &oDevicesCount, CATElbDevice *&oListOfDevices) = 0;

  /**
   * Retrieves for a given device the list of its sub-elements.
   * @param iDeviceId
   *  The identifier of the device.
   * @param oDevicesCount
   *  The number of devices.
   * @param oListOfDevices
   *  The list of devices under the given device.
   * @return
   *   An HRESULT value. 
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The composition of the device has been retrieved.</dd>
   *     <dt>E_FAIL </dt>
   *     <dd>Error while retrieving the composition of the device.</dd>
   *   </dl>
   */
  virtual HRESULT ListDeviceComposition(const CATUnicodeString iDeviceId, CATLONG32 &oDevicesCount, CATElbDevice *&oListOfDevices) = 0;

  /**
   * Retrieves the mating connector of a given connector.
   * @param iConnectorId
   *  The identifier of the connector.
   * @param oMatingConnectorId
   *  The identifier of the mating connector.
   * @return
   *   An HRESULT value. 
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The identifier of the mating connector has been retrieved.</dd>
   *     <dt>E_FAIL </dt>
   *     <dd>Error while retrieving the identifier of the mating connector.</dd>
   *   </dl>
   */
  virtual HRESULT GetMatingConnector(const CATUnicodeString iConnectorId, CATUnicodeString &oMatingConnectorId) = 0;
};

#endif
