#ifndef ENOVIObjectEvent_H
#define ENOVIObjectEvent_H
// =================================================================   
// VPM (c) Copyright Dassault Systemes 1999                           
// -----------------------------------------------------------------   
// Macro: ENOVIObjectEvent.h                                      
// -----------------------------------------------------------------   
// Content:  VPM -> Call Back Interface 
// =================================================================   
// Historique:                                                          
// Creation : 99/10/14                                           AHC 
// =================================================================   
//
#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATListOfCATUnicodeString.h"
#include "GUIDVPMInterfaces.h"
//
class ENOVIEvent_var ;
// 
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_ENOVIObjectEvent ;
#else
extern "C" const IID IID_ENOVIObjectEvent ;
#endif
//
//
/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */
/**
 * Class to be implemented by a client who wants to subscribe to events any VPMObject can raise.
 * CallBack Interface : when the publisher raises an event, the subscriber is called back on methods
 * of this interface.
 * <br><b>Role</b>: the Subscriber gives a pointer on the implementation of this interface for subscription.
 */
class ExportedByGUIDVPMInterfaces ENOVIObjectEvent: public CATBaseUnknown 
   {
   //
   CATDeclareInterface;
   //
   public:
   //
   // CreateObject Event
   //
	 /**
	  *  Method called before the creation of a VPM object. 
	  *  <br><b>Role</b>: to call back clients which subscribed to CreateObject - step before -
	  * on any VPM Object Type . 
	  *  @param iRaisedEvent
	  *   the instance of event which is currently raised.
	  *  @param ioNotifyReturnCode
	  *   the status to be returned by the method : <br>
	  *   E_FAIL if there was a problem <br>
	  *   S_OK   if everything was right<br>
	  *   @see ENOVIEvent
	  */
   virtual HRESULT onBeforeCreateObject
                  (const ENOVIEvent_var& iRaisedEvent,
                   HRESULT&              ioNotifyReturnCode) = 0 ;

	 /**
	  *  Method called after the creation of a VPM object. 
	  *  <br><b>Role</b>: to call back clients which subscribed to CreateObject - step after -
	  * on any VPM Object Type . 
	  *  @param iRaisedEvent
	  *   the instance of event which is currently raised.
	  *  @param ioNotifyReturnCode
	  *   the status to be returned by the method : <br>
	  *   E_FAIL if there was a problem <br>
	  *   S_OK   if everything was right<br>
	  *   @see ENOVIEvent
	  */
   virtual HRESULT onAfterCreateObject
                  (const ENOVIEvent_var& iRaisedEvent,
                   HRESULT&              ioNotifyReturnCode) = 0 ;
   //
   // DeleteObject Event
   //

	 /**
	  *  Method called before the deletion of any VPM object. 
	  *  <br><b>Role</b>: to call back clients which subscribed to event DeleteObject - step before -
	  * on any VPM Object Type . 
	  *  @param iRaisedEvent
	  *   the instance of event which is currently raised.
	  *  @param ioNotifyReturnCode
	  *   the status to be returned by the method : <br>
	  *   E_FAIL if there was a problem <br>
	  *   S_OK   if everything was right<br>
	  *   @see ENOVIEvent
	  */
   virtual HRESULT onBeforeDeleteObject
                  (const ENOVIEvent_var& iRaisedEvent,
                   HRESULT&              ioNotifyReturnCode) = 0 ;

	 /**
	  *  Method called after the deletion of any VPM object was performed. 
	  *  <br><b>Role</b>: to call back clients which subscribed to event DeleteObject - step after -
	  * on any VPM Object Type . 
	  *  @param iRaisedEvent
	  *   the instance of event which is currently raised.
	  *  @param ioNotifyReturnCode
	  *   the status to be returned by the method : <br>
	  *   E_FAIL if there was a problem <br>
	  *   S_OK   if everything was right<br>
	  *   @see ENOVIEvent
	  */
   virtual HRESULT onAfterDeleteObject
                  (const ENOVIEvent_var& iRaisedEvent,
                   HRESULT&              ioNotifyReturnCode) = 0 ;
   //
   // SetLock Event
   //

	 /**
	  *  Method called before the lock of any VPM object. 
	  *  <br><b>Role</b>: to call back clients which subscribed to event SetLock - step before -
	  * on any VPM Object Type . 
	  *  @param iRaisedEvent
	  *   the instance of event which is currently raised.
	  *  @param ioNotifyReturnCode
	  *   the status to be returned by the method : <br>
	  *   E_FAIL if there was a problem <br>
	  *   S_OK   if everything was right<br>
	  *   @see ENOVIEvent
	  */
   virtual HRESULT onBeforeSetLock
                  (const ENOVIEvent_var& iRaisedEvent,
                   HRESULT&              ioNotifyReturnCode) = 0 ;

	 /**
	  *  Method called after a lock was put on a VPM object. 
	  * <br><b>Role</b>: to call back clients which subscribed to event SetLock - step after -
	  * on any VPM Object Type . 
	  *  @param iRaisedEvent
	  *   the instance of event which is currently raised.
	  *  @param ioNotifyReturnCode
	  *   the status to be returned by the method : <br>
	  *   E_FAIL if there was a problem <br>
	  *   S_OK   if everything was right<br>
	  *   @see ENOVIEvent
	  */
   virtual HRESULT onAfterSetLock
                  (const ENOVIEvent_var& iRaisedEvent,
                   HRESULT&              ioNotifyReturnCode) = 0 ;
   //
   // UnsetLock Event
   //

	 /**
	  *  Method called before the unlock of any VPM object. 
	  * <br><b>Role</b>: to call back clients which subscribed to event unsetLock - step before -
	  * on any VPM Object Type . 
	  *  @param iRaisedEvent
	  *   the instance of event which is currently raised.
	  *  @param ioNotifyReturnCode
	  *   the status to be returned by the method : <br>
	  *   E_FAIL if there was a problem <br>
	  *   S_OK   if everything was right<br>
	  *   @see ENOVIEvent
	  */
   virtual HRESULT onBeforeUnsetLock
                  (const ENOVIEvent_var& iRaisedEvent,
                   HRESULT&              ioNotifyReturnCode) = 0 ;

	 /**
	  *  Method called after the unlock of any VPM object. 
	  * <br><b>Role</b>: to call back clients which subscribed to event unsetLock - step after -
	  * on any VPM Object Type . 
	  *  @param iRaisedEvent
	  *   the instance of event which is currently raised.
	  *  @param ioNotifyReturnCode
	  *   the status to be returned by the method : <br>
	  *   E_FAIL if there was a problem <br>
	  *   S_OK   if everything was right<br>
	  *   @see ENOVIEvent
	  */
   virtual HRESULT onAfterUnsetLock
                  (const ENOVIEvent_var& iRaisedEvent,
                   HRESULT&              ioNotifyReturnCode) = 0 ;

   //
   // ModifyAttribut Event
   //

	 /**
	  *  Method called before an attribute of a VPMObject is modified.
	  * <br><b>Role</b>: to call back clients which subscribed to event ModifyAttribute - step before -
	  * on any VPM Object Type . 
	  *  @param iRaisedEvent
	  *   the instance of event which is currently raised.
	  *  @param ioNotifyReturnCode
	  *   the status to be returned by the method : <br>
	  *   E_FAIL if there was a problem <br>
	  *   S_OK   if everything was right<br>
	  *   @see ENOVIEvent
	  */
   virtual HRESULT onBeforeModifyAttribut
                  (const ENOVIEvent_var& iRaisedEvent,
                   HRESULT&              ioNotifyReturnCode) = 0 ;

	 /**
	  *  Method called after an attribute of a VPMObject was modified.
	  * <br><b>Role</b>: to call back clients which subscribed to event ModifyAttribute - step after -
	  * on any VPM Object Type . 
	  *  @param iRaisedEvent
	  *   the instance of event which is currently raised.
	  *  @param ioNotifyReturnCode
	  *   the status to be returned by the method : <br>
	  *   E_FAIL if there was a problem <br>
	  *   S_OK   if everything was right<br>
	  *   @see ENOVIEvent
	  */
   virtual HRESULT onAfterModifyAttribut
                  (const ENOVIEvent_var& iRaisedEvent,
                   HRESULT&              ioNotifyReturnCode) = 0 ;

   //
   // ChangeStatus Event
   //
	 /**
	  *  Method called before the status of a VPMObject is changed .
	  * <br><b>Role</b>: to call back clients which subscribed to event ChangeStatus - step before -
	  * on any VPM Object Type . 
	  *  @param iRaisedEvent
	  *   the instance of event which is currently raised.
	  *  @param ioNotifyReturnCode
	  *   the status to be returned by the method : <br>
	  *   E_FAIL if there was a problem <br>
	  *   S_OK   if everything was right<br>
	  *   @see ENOVIEvent
	  */
   virtual HRESULT onBeforeChangeStatus
                  (const ENOVIEvent_var& iRaisedEvent,
                   HRESULT&              ioNotifyReturnCode) = 0 ;

	 /**
	  *  Method called after the status of a VPMObject was changed .
	  * <br><b>Role</b>: to call back clients which subscribed to event ChangeStatus - step after -
	  * on any VPM Object Type . 
	  *  @param iRaisedEvent
	  *   the instance of event which is currently raised.
	  *  @param ioNotifyReturnCode
	  *   the status to be returned by the method : <br>
	  *   E_FAIL if there was a problem <br>
	  *   S_OK   if everything was right<br>
	  *   @see ENOVIEvent
	  */
   virtual HRESULT onAfterChangeStatus
                  (const ENOVIEvent_var& iRaisedEvent,
                   HRESULT&              ioNotifyReturnCode) = 0 ;

   //
   // onKo Event
   //
	  /**
	  *  CallBack method when something was wrong for another subscriber.
	  * <br><b>Role</b>: this method is called by the event manager
	  *  when a next subscriber returns a failure code from it's callback method.
	  *  In that case, all the previous subscribers are called on their onKo() method.
	  *  @param iEvent
	  *   the instance of event which is currently raised
	  *  @param ioNotifyReturnCode
	  *   the status of the onKo callback action
	  *  
	  *  
	  */
   virtual HRESULT onKo
                  (const ENOVIEvent_var& iRaisedEvent,
                   HRESULT&              ioNotifyReturnCode) = 0 ;
   //
   };
//-----------------------------------------------------------------
// Handler definition 
//-----------------------------------------------------------------
   CATDeclareHandler(ENOVIObjectEvent, CATBaseUnknown);
//
#endif
