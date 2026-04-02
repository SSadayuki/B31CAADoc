//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================
#ifndef ENOVIPasteEvent_H
#define ENOVIPasteEvent_H

// =================================================================
// Includes
// =================================================================
// System
#include "GUIDVPMInterfaces.h"
#include "CATBaseUnknown.h"

// =================================================================
// Forward classes declaration
// =================================================================
class ENOVIEvent_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_ENOVIPasteEvent;
#else
extern "C" const IID IID_ENOVIPasteEvent;
#endif

//------------------------------------------------------------------
/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */
/**
 * Class to be implemented by a client who wants to subscribe to event Paste which may be raised .
 * CallBack Interface : when the publisher raises an event Paste, the subscriber is called back on methods
 * of this interface.
 * <br><b>Role</b>: the Subscriber gives a pointer on the implementation of this interface for subscription.
 */
class ExportedByGUIDVPMInterfaces ENOVIPasteEvent : public CATBaseUnknown
{
    CATDeclareInterface;

    public:
    //
    // =======================================================
    // Method(s) 
    // =======================================================
	  /**
	  *  CallBack method when something was wrong for another subscriber.
	  * <br><b>Role</b>: this method is called by the event manager
	  *  when a next subscriber returns a failure code from it's callback method.
	  *  In that case, all the previous subscribers are called on their onKo() method.
	  *  @param iEvent
	  *   the instance of event which is currently raised
	  *  @param ioNotifyReturnCode
	  *   the status of the onKo callback action
	  *   @see ENOVIEvent
	  */
    virtual HRESULT onKo (const ENOVIEvent_var& iRaisedEvent, 
			  HRESULT& ioNotifyReturnCode) = 0 ; 

//Paste event 
	 /**
	  *  Method called before a Paste action is done .
	  * <br><b>Role</b>: to call back clients which subscribed to Paste event - step before -
	  *  @param iRaisedEvent
	  *   the instance of event which is currently raised.
	  *  @param ioNotifyReturnCode
	  *   the status to be returned by the method : <br>
	  *   E_FAIL if there was a problem <br>
	  *   E_ACCESSDENIED if the subscriber wants to put a veto . This code will be taken into account
	  *   only if the event on the object type was declared veto able.
	  *   S_OK   if everything was right<br>
	  *   @see ENOVIEvent
	  */
    virtual HRESULT onBeforePaste (const ENOVIEvent_var& iRaisedEvent, 
				   HRESULT& ioNotifyReturnCode) = 0 ; 
	 /**
	  *  Method called after a Paste action was done.
	  * <br><b>Role</b>: to call back clients which subscribed to Paste event -step after -
	  *  @param iRaisedEvent
	  *   the instance of event which is currently raised.
	  *  @param ioNotifyReturnCode
	  *   the status to be returned by the method : <br>
	  *   E_FAIL if there was a problem <br>
	  *   S_OK   if everything was right<br>
	  *   @see ENOVIEvent
	  */
    virtual HRESULT onAfterPaste (const ENOVIEvent_var& iRaisedEvent, 
				  HRESULT& ioNotifyReturnCode) = 0 ;

};
//-----------------------------------------------------------------
// Handler definition
//-----------------------------------------------------------------
CATDeclareHandler(ENOVIPasteEvent, CATBaseUnknown);

#endif

