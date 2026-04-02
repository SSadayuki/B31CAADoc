#ifndef CATISchEventManager_H
#define CATISchEventManager_H

//	COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// System
#include "IUnknown.h"
#include "CATEventSubscriberTypedefs.h"
#include "CATSchGeneralEnum.h"
#include "CATSchNotification.h"
#include "CATBaseUnknown.h"
class CATEventSubscriber;

extern "C" const IID IID_CATISchEventManager;

/**
 * Interface to manage the schematic application events.
 * <b>Role</b>: To provide a mechanism for communication between
 * the application-added user interactive dialogs and
 * Schematic Platform generic commands.
 */
class CATISchEventManager: public IUnknown
{
  public:   
  
  /**
  * Get schematic event.
  * @param iEventType
  *   type of schematic event
  * @param oEvent
  *   pointer to an event
  *   caller must allocate local memory for first level pointer (oEvent)
  */
  virtual HRESULT GetEvent (CATSchEvent iEventType,CATCallbackEvent *oEvent) = 0;

  /**
  * Get the event publisher. 
  * @param oEvent
  *   pointer to an event publisher
  *   The caller must allocate memory for 
  *   the first level pointer (i.e. oEventPublisher) and release the second level
  *   pointer (i.e. *oEventPublisher) after usage.
  */
  virtual HRESULT GetEventPublisher (CATEventSubscriber **oEventPublisher) = 0;

  /**
  * Dispatch schematic event.
  * @param iNotif
  *   the notification to be dispatched with the event
  */
  virtual HRESULT DispatchEvent (CATSchNotification *iNotif) = 0;

};

#endif

