//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2006
//=============================================================================
// DFV 2006-02-15 IR A0522812 Created New event file.
#ifndef ENOVINewVersionEvent_H
#define ENOVINewVersionEvent_H

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
extern ExportedByGUIDVPMInterfaces IID IID_ENOVINewVersionEvent;
#else
extern "C" const IID IID_ENOVINewVersionEvent;
#endif

//------------------------------------------------------------------
/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */
/**
 * Class to be implemented by a client who wants to subscribe to events PartNewVersion which may be raised .
 * CallBack Interface : when the publisher raises an event NewVersion, the subscriber is called back on methods
 * of this interface.
 * <br><b>Role</b>: the Subscriber gives a pointer on the implementation of this interface for subscription.
 */
//------------------------------------------------------------------
class ExportedByGUIDVPMInterfaces ENOVINewVersionEvent : public CATBaseUnknown
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

//ENOVIPSNewVersionEvent event
	 /**
	  *  Method called before a NewVersion action on ProductSpecification is done.
	  * <br><b>Role</b>: to call back clients which subscribed to PartNewVersion event - step before -
	  *  @param iRaisedEvent
	  *   the instance of event which is currently raised. It is a ProductSpecification: the current LastVersion of the PS.
	  *  @param ioNotifyReturnCode
	  *   the status to be returned by the method : <br>
	  *   E_FAIL if there was a problem <br>
	  *   E_ACCESSDENIED if the subscriber wants to put a veto . This code will be taken into account
	  *   only if the event on the object type was declared veto able.
	  *   S_OK   if everything was right<br>
	  *   @see ENOVIEvent
	  */
    virtual HRESULT onBeforeNewVersion(const ENOVIEvent_var& iRaisedEvent,
					      HRESULT& ioNotifyReturnCode) = 0 ; 

	 /**
	  *  Method called after a NewVersion action on PS is done.
	  * <br><b>Role</b>: to call back clients which subscribed to PartNewVersion event -step after -
	  *  @param iRaisedEvent
	  *   the instance of event which is currently raised. It is a PS: the old LastVersion, since a new PS has been created.
	  *  @param ioNotifyReturnCode
	  *   the status to be returned by the method : <br>
	  *   E_FAIL if there was a problem <br>
	  *   S_OK   if everything was right<br>
	  *   @see ENOVIEvent
	  */
    virtual HRESULT onAfterNewVersion(const ENOVIEvent_var& iRaisedEvent,
					     HRESULT& ioNotifyReturnCode) = 0 ;

};
//-----------------------------------------------------------------
// Handler definition
//-----------------------------------------------------------------
CATDeclareHandler(ENOVINewVersionEvent, CATBaseUnknown);

#endif

