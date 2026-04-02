#ifndef CATVRDispatcherOnIdle_H
#define CATVRDispatcherOnIdle_H

// COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */


#include "CATVRDispatcher.h"

/**
* Class that will dispatch on the main application Idle to the subscribed client objects.
* <b>Role</b> : Use this class to be called back on a specified method as soon as the application is
* on idle and some device driver events arrived.
*/
class ExportedByCATVisVR CATVRDispatcherOnIdle : public CATVRDispatcher
{
public:

  /**
  * Construct a CATVRDispatcherOnIdle.
  */
  CATVRDispatcherOnIdle();

  /**
  * Destruct the object.
  * Deleting this object will remove all remaining callbacks.
  */
  virtual ~CATVRDispatcherOnIdle();

private:

  void OnIdleEventCB(CATCallbackEvent   iPublishedEvent,void* iPublishingObject,
                     CATNotification  * iNotification,CATSubscriberData  iClientData,
                     CATCallback        iCallback);
};

#endif
