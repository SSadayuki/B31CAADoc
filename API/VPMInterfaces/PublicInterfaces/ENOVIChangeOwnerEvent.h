#ifndef ENOVIChangeOwnerEvent_H
#define ENOVIChangeOwnerEvent_H
// =================================================================   
// (c) Copyright Dassault Systemes 2002                            
// -----------------------------------------------------------------   
// Macro: ENOVIChangeOwnerEvent.h                                      
// -----------------------------------------------------------------   
// Content:  EV5 -> Call Back Interface 
// =================================================================   
// Historique:                                                          
// Creation : 02/02/06                                           LFE 
// =================================================================   
//
#include "CATBaseUnknown.h"
#include "GUIDVPMInterfaces.h"
//
class ENOVIEvent_var ;
// 
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_ENOVIChangeOwnerEvent ;
#else
extern "C" const IID IID_ENOVIChangeOwnerEvent ;
#endif
//
//
/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */
/**
 * Class to be implemented by a client who wants to subscribe to event ChangeOwner that VPMObject can raise.
 * CallBack Interface : when the publisher raises an event, the subscriber is called back on methods
 * of this interface.
 * <br><b>Role</b>: the Subscriber gives a pointer on the implementation of this interface for subscription.
 */
class ExportedByGUIDVPMInterfaces ENOVIChangeOwnerEvent: public CATBaseUnknown 
{
    //
    CATDeclareInterface;
    //
public:
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
    // ChangeOwner Event
    //
    /**
     *  Method called before the owner of a VPMObject is changed .
     * <br><b>Role</b>: to call back clients which subscribed to event ChangeOwner - step before -
     *  on any VPM Object Type.
     *  @param iRaisedEvent
     *   the instance of event which is currently raised.
     *  @param ioNotifyReturnCode
     *   the status to be returned by the method : <br>
     *   E_FAIL if there was a problem <br>
     *   S_OK   if everything was right<br>
     *   @see ENOVIEvent
     */
    virtual HRESULT onBeforeChangeOwner
        (const ENOVIEvent_var& iRaisedEvent,
         HRESULT&              ioNotifyReturnCode) = 0 ;
    
    /**
     *  Method called after the owner of a VPMObject was changed .
     * <br><b>Role</b>: to call back clients which subscribed to event ChangeOwner - step after -
     *  on any VPM Object Type.
     *  @param iRaisedEvent
     *   the instance of event which is currently raised.
     *  @param ioNotifyReturnCode
     *   the status to be returned by the method : <br>
     *   E_FAIL if there was a problem <br>
     *   S_OK   if everything was right<br>
     *   @see ENOVIEvent
     */
    virtual HRESULT onAfterChangeOwner
        (const ENOVIEvent_var& iRaisedEvent,
         HRESULT&              ioNotifyReturnCode) = 0 ;
    //
};
//-----------------------------------------------------------------
// Handler definition 
//-----------------------------------------------------------------
CATDeclareHandler(ENOVIChangeOwnerEvent, CATBaseUnknown);
//
#endif
