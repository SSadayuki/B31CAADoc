/* -*-c++ -*- */
#ifndef CATIElbDeviceInstance_h
#define CATIElbDeviceInstance_h

// COPYRIGHT DASSAULT SYSTEMES 2002

/** 
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"

#include "ExportedByCATElbInterfaces.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATElbInterfaces IID IID_CATIElbDeviceInstance;
#else
extern "C" const IID IID_CATIElbDeviceInstance;
#endif

/**
 * Interface to manage Equipments.
 */
class ExportedByCATElbInterfaces CATIElbDeviceInstance: public CATBaseUnknown
{
  CATDeclareInterface;
  
public:
  
 /**
 *
 * @param ipDeviceInstance
 *   The instance of the device to be disconnected 	
 * @return
  *   An HRESULT value. 
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>no error. </dd>
  *     <dt>E_FAIL </dt>
  *     <dd>Error occured while disconnecting devices.</dd>
  *   </dl>
  */
  virtual HRESULT Disconnect (CATIElbDeviceInstance * ipDeviceInstance ) = 0;  //UOK

  /**
 *
 * @param ipCnctPt
 *   The connection point on which the searched device is connected 
 *   The connection point can  be a Cavity,  a ShellCnctPt, a ConnectorCnctPt or  a BackShellCnctPt. 
 * @param opDevice
 *   The device instance connected to the current device.
 * @param opCnctPt
 *   The connection point reference of the searched device implied in the 'connection'.
 * @return
  *   An HRESULT value. 
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>no error. </dd>
  *     <dt>E_FAIL </dt>
  *     <dd>Error occured while retrieving connected device.</dd>
  *   </dl>
  */
  virtual HRESULT GetConnectedDevice (CATBaseUnknown* 	ipCnctPt,
                                      CATBaseUnknown*&  opDevice,
	                                    CATBaseUnknown*&  opCnctPt ) = 0; //UOK

};

CATDeclareHandler(CATIElbDeviceInstance, CATBaseUnknown);
#endif
