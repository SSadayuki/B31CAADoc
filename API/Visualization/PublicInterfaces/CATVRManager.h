#ifndef CATVRManager_H
#define CATVRManager_H

// COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */


#include "CATListOfCATVRDeviceEvent.h"
#include "CATListOfInt.h"
#include "CATString.h"
#include "CATUnicodeString.h"

class CATDeviceManager;

/**
  * Class to provide global information on the devices management architecture.
  * <b>Role</b> : This class is the application interface for the
  *	management of devices.
  */
class ExportedByCATVisVR CATVRManager {

public:

  /**
  * Construct a CATVRManager.
  * You may delete this object as soon as you made your calls.
  */
  CATVRManager();

  
  virtual ~CATVRManager();


  /**
  * Return a list of ID number referring to each running device driver
  * plugged onto the system.
  */
  CATListOfInt GetDeviceDriverList();

  /**
  * Return a list of event the device driver can generate.
  * @param iDriverID
  *   The device driver ID. 
  *   @see CATVRManager#GetDeviceDriverList, CATVRDeviceEvent#GetDeviceDriverID
  * @return
  *   The list of event the device driver can generate.
  *   Notice that it is a list of value.
  */
  CATListOfCATVRDeviceEvent GetEventList(const int iDriverID);

  /**
  * Return a list of all the events with the specified name
  * the running device drivers plugged onto the system can generate.
  * @param iEventName
  *   The name of the events to retrieve.
  * @return
  *   The list of all the available events with the specified name.
  *   Notice that this list is a list of VALUE.
  */
  CATListOfCATVRDeviceEvent GetEventList(const CATString& iEventName);

  /**
  * Return the name of the device driver referred to by 
  * the specified ID number.
  * @param iDriverID
  *   The device driver ID number.
  * @return
  *   The name of the device driver.
  *   Return "" if no device driver has this ID number.
  */
  CATString GetDeviceDriverName(const int iDriverID);
  
  
  /**
  * Finds a specific event matching given information.
  * @param iDaemonName
  *   The device driver name
  * @param iEvent
  *   The event name
  * @param iNumber
  *   The event number
  * @param oOK
  *   set to TRUE if the event was found
  * @return
  *   The corresponding CATVRDeviceEvent
  *   Return CATVRDeviceEvent(NULL) if no event was found
  */
  CATVRDeviceEvent FindEvent(CATUnicodeString iDaemonName, CATUnicodeString iEvent, int iNumber, CATBoolean& oOK);

  /**
  * @nodoc
  * Rebuilds the management of devices.
  * Asks the broker about daemon that disappeared or appeared.
  */
  void ReBuild();

  /**
  * @nodoc
  * Return the Broker socket port number.
  */
  int GetBrokerPort();

  /**
  * @nodoc
  * Return the Broker host computer name.
  */
  CATUnicodeString GetBrokerHost();

private:

  /** @nodoc */
  CATDeviceManager*  _deviceManager;

};


#endif
