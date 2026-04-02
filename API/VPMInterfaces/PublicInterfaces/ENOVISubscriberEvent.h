#ifndef ENOVISubscriberEvent_H
#define ENOVISubscriberEvent_H
//------------------------------------------------------------------------------
// COPYRIGHT DASSAULT SYSTEMES 1999
// Interface  : ENOVISubscriberEvent LATE Mode invocation 
// Author     : AHC
// Date       : July/08/1999 revision on sep/08/99
//------------------------------------------------------------------------------
//
/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */


/**
 * Class to subscribe easily to events , without knowledge of explicit CallBack Interfaces.
 * <b>Role</b>: a client has 2 ways to  subscribe to emission of events , by implementing 
 * explicit event interfaces (EARLY mode) proposed by the Publishers, or to implement this generic interface (LATE mode). 
 * In that case, the information about the event must be decoded by the client in its implementation... 
 */

#include "GUIDVPMInterfaces.h"
#include "CATBaseUnknown.h"
#include "ENOVIEvent.h" 
//
// UUID definition
//
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_ENOVISubscriberEvent;
#else
extern "C" const IID IID_ENOVISubscriberEvent;
#endif

class ExportedByGUIDVPMInterfaces ENOVISubscriberEvent : public CATBaseUnknown 
   {

    CATDeclareInterface ;
    
    public :

    //================
    // Call Back 
    //================

	 /**
	  *  Callback method to be implemented for subscription.
	  * <b>Role</b>: this method is called by the event manager
	  *  for each subscriber which has implemented it, when an event
	  *  is published.
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
   virtual HRESULT onReceive ( const ENOVIEvent_var& iEvent, 
							   HRESULT&              ioNotifyReturnCode )=0;
    
	  /**
	  *  CallBack method when something was wrong for another subscriber.
	  * <b>Role</b>: this method is called by the event manager
	  *  when a next subscriber returns a failure code from it's callback method.
	  *  In that case, all the previous subscribers are called on their onKo() method.
	  *  @param iEvent
	  *   the instance of event which is currently raised
	  *  @param ioNotifyReturnCode
	  *   the status of the onKo callback action
	  *  
	  *  
	  */
   virtual HRESULT onKo      ( const ENOVIEvent_var& iEvent, 
							   HRESULT&              ioNotifyReturnCode )=0;
    

};

	/** @nodoc */
CATDeclareHandler(ENOVISubscriberEvent, CATBaseUnknown);

#endif 

