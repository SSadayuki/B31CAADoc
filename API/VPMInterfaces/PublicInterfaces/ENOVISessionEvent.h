#ifndef ENOVISessionEvent_H
#define ENOVISessionEvent_H
// =================================================================   
// VPM (c) Copyright Dassault Systemes 1999                           
// -----------------------------------------------------------------   
// Macro: ENOVISessionEvent.h                                      
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
extern ExportedByGUIDVPMInterfaces IID IID_ENOVISessionEvent ;
#else
extern "C" const IID IID_ENOVISessionEvent ;
#endif
//
/**
 * @CAA2Level L1
 * @CAA2Usage U4 ENOVPackageListener
 */
/**
 * Class to be implemented by a client who wants to subscribe to events that a Session and a LoginSession can raise.
 * CallBack Interface: when the publisher raises an event, the subscriber is called back on methods
 * of this interface.
 * <br><b>Role</b>: the Subscriber gives a pointer on the implementation of this interface for subscription.
 * Please note that libraries that provide an implementation of this
 * interface must link with as little dependencies as possible, as this
 * is loaded at the very beginning of the session.
 * <p><b>BOA information</b>: this interface CANNOT be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page.
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 */
class ExportedByGUIDVPMInterfaces ENOVISessionEvent: public CATBaseUnknown 
   {
   //
   CATDeclareInterface;
   //
   public:
   //
   // CreateLoginSession Event
   //
	 /**
          * @nodoc
	  *  This method is never called.
          *  Subscription on CreateLoginSession step BEFORE is not possible.
	  */
   virtual HRESULT onBeforeCreateLoginSession
                  (const ENOVIEvent_var& iRaisedEvent,
                   HRESULT&              ioNotifyReturnCode) = 0;

	 /**
	  *  Method called when the event CreateLoginSession is emitted at step AFTER.
	  * <br><b>Role</b>: used by event model to call back clients which subscribed to CreateLoginSession - step after -
	  * on the VPMSession . This step occurs after creation of the login session was performed.
    * <p>Note that up to V5R12 it is forbidden to perform licensed QueryInterface calls or call any licensed
    * code in your implementation of this method, since license acquisition might not have taken placed yet
    * at that point. Therefore you must defer such calls till after CATIVpmSCLogin::Login has been completed.
    * If you need to register a callback for a licensed event interface (such as ENOVIDocEvents), then you
    * should not do the QueryInterface, and pass ENOVIEventManager::Subscribe a pointer for the callback object
    * that is not the licensed interface pointer, but another pointer to the same object, then the event manager
    * code will perform the actual licensed QueryInterface call at event emission time.
    * It is of course forbidden to call CATIVpmSCLogin::Login in the implementation of this method, as this will
    * usually perform an automatic security login with the wrong parameters, breaking the whole product.
	  *  @param iRaisedEvent
	  *   the instance of event which is currently raised.
	  *  @param ioNotifyReturnCode
	  *   the status to be returned by the method : <br>
	  *   E_FAIL if there was a problem <br>
	  *   S_OK   if everything was right<br>
	  *   @see ENOVIEvent
	  */
   virtual HRESULT onAfterCreateLoginSession
                  (const ENOVIEvent_var& iRaisedEvent,
                   HRESULT&              ioNotifyReturnCode) = 0 ;
   //
   // SaveLoginSession Event
   //
	 /**
	  *  Method called before the Login Session is saved.
	  * <br><b>Role</b>: used by event model to call back clients which subscribed to event SaveLoginSession - step before -
	  * on the Login Session . 
	  *  @param iRaisedEvent
	  *   the instance of event which is currently raised.
	  *  @param ioNotifyReturnCode
	  *   the status to be returned by the method : <br>
	  *   E_FAIL if there was a problem <br>
	  *   E_ACESSDENIED if a veto is put on the save<br>
	  *   S_OK   if everything was right<br>
	  *   @see ENOVIEvent
	  */
   virtual HRESULT onBeforeSaveLoginSession
                  (const ENOVIEvent_var& iRaisedEvent,
                   HRESULT&              ioNotifyReturnCode) = 0 ;


	 /**
	  *  Method called after the Login Session was saved.
	  * <br><b>Role</b>: used by event model to call back clients which subscribed to event SaveLoginSession - step after -
	  * on the Login Session.
    * <p>It is forbidden to perform any model modifications or to raise other events in an implementation of this
    * method. Since it is called right after the transaction has been closed, transactional operations cannot be
    * invoked (notably, SDAI/VPMObjects model modification will not have any effet until the next commit).
    * It is strongly recommended that you avoid calling LCA code in your implementation of this method. 
	  *  @param iRaisedEvent
	  *   the instance of event which is currently raised.
	  *  @param ioNotifyReturnCode
	  *   the status to be returned by the method : <br>
	  *   E_FAIL if there was a problem <br>
	  *   S_OK   if everything was right<br>
	  *   @see ENOVIEvent
	  */
   virtual HRESULT onAfterSaveLoginSession
                  (const ENOVIEvent_var& iRaisedEvent,
                   HRESULT&              ioNotifyReturnCode) = 0 ;
   //
   // CloseLoginSession Event
   //
	 /**
	  *  Method called before the Login Session is closed.
	  * <br><b>Role</b>: used by event model to call back clients which subscribed to event CloseLoginSession - step before -
	  * on the Login Session . 
	  *  @param iRaisedEvent
	  *   the instance of event which is currently raised.
	  *  @param ioNotifyReturnCode
	  *   the status to be returned by the method : <br>
	  *   E_FAIL if there was a problem <br>
	  *   E_ACESSDENIED if a veto is put on the close<br>
	  *   S_OK   if everything was right<br>
	  *   @see ENOVIEvent
	  */
   virtual HRESULT onBeforeCloseLoginSession
                  (const ENOVIEvent_var& iRaisedEvent,
                   HRESULT&              ioNotifyReturnCode) = 0 ;

	 /**
	  *  Method called after the Login Session is closed.
	  * <br><b>Role</b>: used by event model to call back clients which subscribed to event CloseLoginSession - step after -
	  * on the Login Session . 
	  *  @param iRaisedEvent
	  *   the instance of event which is currently raised.
	  *  @param ioNotifyReturnCode
	  *   the status to be returned by the method : <br>
	  *   E_FAIL if there was a problem <br>
	  *   S_OK   if everything was right<br>
	  *   @see ENOVIEvent
	  */
   virtual HRESULT onAfterCloseLoginSession
                  (const ENOVIEvent_var& iRaisedEvent,
                   HRESULT&              ioNotifyReturnCode) = 0 ;
   //
   // AbortLoginSession Event
   //
	 /**
	  *  Method called before the Login Session is aborted.
	  * <br><b>Role</b>: used by event model to call back clients which subscribed to event AbortLoginSession - step before -
	  * on the Login Session . 
	  *  @param iRaisedEvent
	  *   the instance of event which is currently raised.
	  *  @param ioNotifyReturnCode
	  *   the status to be returned by the method : <br>
	  *   E_FAIL if there was a problem <br>
	  *   S_OK   if everything was right<br>
	  *   @see ENOVIEvent
	  */
   virtual HRESULT onBeforeAbortLoginSession
                  (const ENOVIEvent_var& iRaisedEvent,
                   HRESULT&              ioNotifyReturnCode) = 0 ;

	 /**
	  *  Method called after the Login Session was aborted.
	  * <br><b>Role</b>: used by event model to call back clients which subscribed to event AbortLoginSession - step after -
	  * on the Login Session . 
	  *  @param iRaisedEvent
	  *   the instance of event which is currently raised.
	  *  @param ioNotifyReturnCode
	  *   the status to be returned by the method : <br>
	  *   E_FAIL if there was a problem <br>
	  *   S_OK   if everything was right<br>
	  *   @see ENOVIEvent
	  */
   virtual HRESULT onAfterAbortLoginSession
                  (const ENOVIEvent_var& iRaisedEvent,
                   HRESULT&              ioNotifyReturnCode) = 0 ;

   //
   // UndoCommand Event
   //
	 /**
	  *  Method called before UndoCommand is done.
	  * <br><b>Role</b>: used by event model to call back clients which subscribed to event UndoCommand - step before -
	  * on the Login Session . 
	  *  @param iRaisedEvent
	  *   the instance of event which is currently raised.
	  *  @param ioNotifyReturnCode
	  *   the status to be returned by the method : <br>
	  *   E_FAIL if there was a problem <br>
	  *   S_OK   if everything was right<br>
	  *   @see ENOVIEvent
	  */
   virtual HRESULT onBeforeUndoCommand
                  (const ENOVIEvent_var& iRaisedEvent,
                   HRESULT&              ioNotifyReturnCode) = 0 ;

	 /**
	  *  Method called after the UndoCommand was executed.
	  * <br><b>Role</b>: used by event model to call back clients which subscribed to event UndoCommand - step after -
	  * on the Login Session . 
	  *  @param iRaisedEvent
	  *   the instance of event which is currently raised.
	  *  @param ioNotifyReturnCode
	  *   the status to be returned by the method : <br>
	  *   E_FAIL if there was a problem <br>
	  *   S_OK   if everything was right<br>
	  *   @see ENOVIEvent
	  */
   virtual HRESULT onAfterUndoCommand
                  (const ENOVIEvent_var& iRaisedEvent,
                   HRESULT&              ioNotifyReturnCode) = 0 ;

   //
   // StartCommand Event
   //
	 /**
	  *  Method called before a command starts.
	  * <br><b>Role</b>: used by event model to call back clients which subscribed to event StartCommand - step before -
	  * on the Login Session . 
	  *  @param iRaisedEvent
	  *   the instance of event which is currently raised.
	  *  @param ioNotifyReturnCode
	  *   the status to be returned by the method : <br>
	  *   E_FAIL if there was a problem <br>
	  *   S_OK   if everything was right<br>
	  *   @see ENOVIEvent
	  */
   virtual HRESULT onBeforeStartCommand
                  (const ENOVIEvent_var& iRaisedEvent,
                   HRESULT&              ioNotifyReturnCode) = 0 ;

	 /**
	  *  Method called after the command was executed.
	  * <br><b>Role</b>: used by event model to call back clients which subscribed to event StartCommand - step after -
	  * on the Login Session . 
	  *  @param iRaisedEvent
	  *   the instance of event which is currently raised.
	  *  @param ioNotifyReturnCode
	  *   the status to be returned by the method : <br>
	  *   E_FAIL if there was a problem <br>
	  *   S_OK   if everything was right<br>
	  *   @see ENOVIEvent
	  */
   virtual HRESULT onAfterStartCommand
                  (const ENOVIEvent_var& iRaisedEvent,
                   HRESULT&              ioNotifyReturnCode) = 0 ;

   //
   // ExecuteCommand Event
   //
	 /**
	  *  Method called before a command is executed.
	  * <br><b>Role</b>: used by event model to call back clients which subscribed to event ExecuteCommand - step before -
	  * on the Login Session . 
	  *  @param iRaisedEvent
	  *   the instance of event which is currently raised.
	  *  @param ioNotifyReturnCode
	  *   the status to be returned by the method : <br>
	  *   E_FAIL if there was a problem <br>
	  *   S_OK   if everything was right<br>
	  *   @see ENOVIEvent
	  */
   virtual HRESULT onBeforeExecuteCommand
                  (const ENOVIEvent_var& iRaisedEvent,
                   HRESULT&              ioNotifyReturnCode) = 0 ;

	 /**
	  *  Method called after the command was executed.
	  * <br><b>Role</b>: used by event model to call back clients which subscribed to event ExecuteCommand - step after -
	  * on the Login Session . 
	  *  @param iRaisedEvent
	  *   the instance of event which is currently raised.
	  *  @param ioNotifyReturnCode
	  *   the status to be returned by the method : <br>
	  *   E_FAIL if there was a problem <br>
	  *   S_OK   if everything was right<br>
	  *   @see ENOVIEvent
	  */
   virtual HRESULT onAfterExecuteCommand
                  (const ENOVIEvent_var& iRaisedEvent,
                   HRESULT&              ioNotifyReturnCode) = 0 ;

   //
   // AbortCommand Event
   //
	 /**
	  *  Method called before a command is aborted.
	  * <br><b>Role</b>: used by event model to call back clients which subscribed to event AbortCommand - step before -
	  * on the Login Session . 
	  *  @param iRaisedEvent
	  *   the instance of event which is currently raised.
	  *  @param ioNotifyReturnCode
	  *   the status to be returned by the method : <br>
	  *   E_FAIL if there was a problem <br>
	  *   S_OK   if everything was right<br>
	  *   @see ENOVIEvent
	  */
   virtual HRESULT onBeforeAbortCommand
                  (const ENOVIEvent_var& iRaisedEvent,
                   HRESULT&              ioNotifyReturnCode) = 0 ;

	 /**
	  *  Method called after a command was aborted.
	  * <br><b>Role</b>: used by event model to call back clients which subscribed to event AbortCommand - step after -
	  * on the Login Session . 
	  *  @param iRaisedEvent
	  *   the instance of event which is currently raised.
	  *  @param ioNotifyReturnCode
	  *   the status to be returned by the method : <br>
	  *   E_FAIL if there was a problem <br>
	  *   S_OK   if everything was right<br>
	  *   @see ENOVIEvent
	  */
   virtual HRESULT onAfterAbortCommand
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
	  */
    virtual HRESULT onKo
                  (const ENOVIEvent_var& iRaisedEvent,
                   HRESULT&              ioNotifyReturnCode) = 0 ;
   //
   };
//-----------------------------------------------------------------
// Handler definition 
//-----------------------------------------------------------------
   CATDeclareHandler(ENOVISessionEvent, CATBaseUnknown);
//
#endif
