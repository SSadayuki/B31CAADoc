#ifndef CATVRNotification_H
#define CATVRNotification_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
* @CAA2Level L1
* @CAA2Usage U1
*/


#include "CATVisVR.h"
#include "CATNotification.h"
#include "CATVRDeviceEvent.h"

class CATVRClientIterator;

/**
* This object is the basic event received from specific devices.
* <b>Role</b> :  After adding a callback method on a given device and events,
* the CATNotification received on the callback method is of type
* CATVRNotification.  
* The CATVRNotification behaves as an iterator on the newly arrived event set.
* This set only contains the events you did not already received in the callback.
* You access these events through the iterator. It also acts as a filter so that
* you can only access the events whose types were specifified in the callback declaration. 
* 
* @see CATVRDispatcherOnIdle#AddDeviceCallback
*/
class ExportedByCATVisVR CATVRNotification : public CATNotification
{
  CATDeclareClass;
  
public:
  
  /** 
  * Returns the current pointed event.
  */  
  CATVRDeviceEvent* Current();
  
  /** 
  * Returns the newest event you may access in the event set.
  */
  CATVRDeviceEvent* Newest();

  /** 
  * Returns the oldest event you may access in the event set.
  */
  CATVRDeviceEvent* Oldest();
  
  /** 
  * Returns the event immediatly more recent than the last pointed event.
  * <br><b>Legal values</b>: The returned event pointer may be NULL.
  */
  CATVRDeviceEvent* Newer();
  
  /** 
  * Returns the event immediatly older than the last pointed event.
  * <br><b>Legal values</b>: The returned event pointer may be NULL.
  */
  CATVRDeviceEvent* Older();
  


  /** @nodoc */
  CATVRNotification(CATVRDeviceEvent* DeviceEvent);
  
  /** @nodoc */
  CATVRNotification(CATVRClientIterator* iterator);
  
  virtual ~CATVRNotification();
  
protected :

  /** @nodoc */
  CATVRDeviceEvent*     _DeviceEvent;
  
private:

  /**
  * Returns the notification encased in this event.
  * Deprecated. 
  * You should migrate to the new device management interface.
  * @see CATVRDispatcherOnIdle#AddDeviceCallback
  * @return The underlying event as a CATVRDeviceEvent
  */
  // public
  //CATVRDeviceEvent* GetCATVRDeviceEvent();

  
  /** @nodoc */
  CATVRClientIterator*  _iterator;
};

#endif

