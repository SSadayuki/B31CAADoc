//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================
#ifndef ENOVICutEvent_H
#define ENOVICutEvent_H

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
extern ExportedByGUIDVPMInterfaces IID IID_ENOVICutEvent;
#else
extern "C" const IID IID_ENOVICutEvent;
#endif

//------------------------------------------------------------------
/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */
/**
 * Class to be implemented by a client who wants to subscribe to event Cut which may be raised .
 * CallBack Interface : when the publisher raises an event Cut, the subscriber is called back on methods
 * of this interface.
 * <br><b>Role</b>: the Subscriber gives a pointer on the implementation of this interface for subscription.
 */
class ExportedByGUIDVPMInterfaces ENOVICutEvent : public CATBaseUnknown
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

//Cut event 
	 /**
	  *  Method called before a Cut action is done .
	  * <br><b>Role</b>: to call back clients which subscribed to Cut event - step before -
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
    virtual HRESULT onBeforeCut (const ENOVIEvent_var& iRaisedEvent, 
				 HRESULT& ioNotifyReturnCode) = 0 ; 
	 /**
	  *  Method called after a Cut action was done.
	  * <br><b>Role</b>: to call back clients which subscribed to Cut event -step after -
	  *  @param iRaisedEvent
	  *   the instance of event which is currently raised.
	  *  @param ioNotifyReturnCode
	  *   the status to be returned by the method : <br>
	  *   E_FAIL if there was a problem <br>
	  *   S_OK   if everything was right<br>
	  *   @see ENOVIEvent
	  */
    virtual HRESULT onAfterCut (const ENOVIEvent_var& iRaisedEvent, 
				HRESULT& ioNotifyReturnCode) = 0 ;

};
//-----------------------------------------------------------------
// Handler definition
//-----------------------------------------------------------------
CATDeclareHandler(ENOVICutEvent, CATBaseUnknown);

#endif

