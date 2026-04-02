//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================
#ifndef ENOVIUpdateEvent_H
#define ENOVIUpdateEvent_H

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
extern ExportedByGUIDVPMInterfaces IID IID_ENOVIUpdateEvent;
#else
extern "C" const IID IID_ENOVIUpdateEvent;
#endif

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */
/**
 * Class to be implemented by a client who wants to subscribe to an event "Update" raised by any kind of object.
 * <b>Role</b>: the Subscriber gives a pointer on the implementation of this interface to subscribe.
 */


//------------------------------------------------------------------
class ExportedByGUIDVPMInterfaces ENOVIUpdateEvent : public CATBaseUnknown
{
    CATDeclareInterface;

    public:

	 /**
	  *  Method called when something failed after Call of onBeforeUpdate or onAfterUpdate
	  * <b>Role</b>: when a N-th subscriber returns a failure code, the 1st ... N-1 th subscribers
	  *  are warned that something was wrong...
	  *  @param iEvent
	  *   the instance of event which is currently raised.
	  *  @param ioNotifyReturnCode
	  *   the status of the last callback action : <br>
	  *   E_FAIL if there was a problem <br>
	  *   E_ACCESSDENIED if a veto was put on the event<br>
	  *  
	  */
    virtual HRESULT onKo (const ENOVIEvent_var& iRaisedEvent, 
			  HRESULT& ioNotifyReturnCode) = 0 ; 

//some events for Charlotte guys whose use our macro
//Update events

	 /**
	  *  method called before the "Update" method is executed , and implemented by each subscriber
	  * <b>Role</b>: this method is called by the event manager
	  *  for each subscriber which has implemented it, when an event "Update"
	  *  is about to be published.
	  *  @param iEvent
	  *   the instance of event which is currently raised.
	  *  @param ioNotifyReturnCode
	  *   the status of the callback action : <br>
	  *   S_OK if the callback execution had no problem<br>
	  *   E_FAIL if there was a problem <br>
	  *   E_ACCESSDENIED if a veto is put on the event<br>
	  *  it's a status on the event callback to be sent back to the publisher,
	  *  it has not the same meaning than the return code which is related to
	  *  the code execution...
	  *  
	  */
    virtual HRESULT onBeforeUpdate(const ENOVIEvent_var& iRaisedEvent,
				   HRESULT& ioNotifyReturnCode) = 0 ; 

	 /**
	  *  method called after the "Update" method was executed , and implemented by each subscriber
	  * <b>Role</b>: this method is called by the event manager
	  *  for each subscriber which has implemented it, when a method update was executed
	  *  @param iEvent
	  *   the instance of event which is currently raised.
	  *  @param ioNotifyReturnCode
	  *   the status of the callback action : <br>
	  *   S_OK if the callback execution had no problem<br>
	  *   E_FAIL if there was a problem <br>
	  *   E_ACCESSDENIED if a veto is put on the event<br>
	  *  it's a status on the event callback to be sent back to the publisher,
	  *  it has not the same meaning than the return code which is related to
	  *  the code execution...
	  *  
	  */
    virtual HRESULT onAfterUpdate(const ENOVIEvent_var& iRaisedEvent,
				  HRESULT& ioNotifyReturnCode) = 0 ;
};
//-----------------------------------------------------------------
// Handler definition
//-----------------------------------------------------------------
CATDeclareHandler(ENOVIUpdateEvent, CATBaseUnknown);

#endif

