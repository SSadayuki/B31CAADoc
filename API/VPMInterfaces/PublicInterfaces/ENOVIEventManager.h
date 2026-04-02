//
// COPYRIGHT DASSAULT SYSTEMES 1999
//------------------------------------------------------------------------------
// Interface  : ENOVIEventManager 
// Author     : RCB/AHC
// Date       : July/08/1999 revision on sep/08/99
//------------------------------------------------------------------------------
#ifndef ENOVIEventManager_H
#define ENOVIEventManager_H
//
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATLISTPIUnknown.h"
#include "GUIDVPMInterfaces.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "ENOVIStream.h"
#include "CATVpmType.h"
#include "ENOVIEvent.h" 
#include "CATListOfInt.h"
#include "CATListOfCATUnicodeString.h"

// for event fire...
typedef HRESULT (CATBaseUnknown::*BaseTypMet)
    ( const ENOVIEvent_var& e, HRESULT& R);



class ENOVISubscriberEvent_var ;
class ENOVIPublisher_var ;
//
// UUID definition
//
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_ENOVIEventManager;
#else
extern "C" const IID IID_ENOVIEventManager;
#endif

/**
 * Interface to manage Event Model (subscription, information about events).
 * <b>Role</b>: <br> This class managers all the actions around the Enovia Event Model:<br>
 * -Subscription/Unsubscription to/from events by clients.<br>
 * -information about subscribers, raised events.<br>
 * -information about the events clients can subscribe to<br>
 */
class ExportedByGUIDVPMInterfaces ENOVIEventManager : public CATBaseUnknown 
{
	 
	 CATDeclareInterface ;
	 
public :
     
     //==============================================
     // get  Events a Publisher can raise, according to
     // Subscriber Identity...
     //==============================================
	 
	 /**
	  * Gives the list of events a type of object can raise.
	  *<br><b>Role</b> : According to the nature of the subscriber, gives back the list of events it can subscribe to.
	  * @param iPublisherType
	  *   string giving the type of publisher
	  * @param iSubscriber
	  *  the client instance which wants to subscribe.
	  * @param oAvailableEvents
	  *  the list of events which may be raised by the publisher type.
	  */
	 virtual HRESULT GetListOfRaisableEvents (const CATUnicodeString& iPublisherType,
											  const CATBaseUnknown_var& iSubscriber,
											  CATListOfCATUnicodeString& oAvailableEvents)=0;
	 
	 /**
	  * Gives the list of events a publisher instance can raise.
	  *<br><b>Role</b> : According to the nature of the subscriber, gives back the list of events it can subscribe to,
	  * @param iPublisherinstance
	  *   a publisher instance
	  * @param iSubscriber
	  *  the client instance which wants to subscribe.
	  * @param oAvailableEvents
	  *  the list of events which may be raised by the publisher type.
	  */
	 virtual HRESULT GetListOfRaisableEvents (const ENOVIPublisher_var& iPublisherinstance,
											  const CATBaseUnknown_var& iSubscriber,
											  CATListOfCATUnicodeString& oAvailableEvents)=0;
	 
	 
	 //================
	 // SUBSCRIPTION
	 //================
	 

	 //            Subscribe to Event(==method) on ObjectType  (ex: "Lock on Part")
	 //                      to Event (==method) on a given instance...
	 //  two ways for subscribing : EARLY or LATE
	 //                              |        |____ give an interface "ENOVISubscriber" .
	 //                              |_____________ give an interface for direct CallBacks  AND its IID




    /**
     * @nodoc
     */  
    enum EvtSubscriptionMode{EarlyMode,LateMode,BothModes};
    
    
    /**   Subscribes to an event on a given type of object.
	 *<br><b>Role</b> : subscribe in EARLY mode, i.e. by implementing an explicit CallBack interface,
	 *    delivered by the publisher side.
     *    @param  iMethodName 
	 *         event name you want to subscribe to.
     *    @param  iObjectType 
	 *         object type you want to subscribe to.  
     *    @param  iCallBackInterface 
	 *         interface for the callback methods, implemented by the client which subscribes.
     *    @param  iIDOfInterface  
	 *          Real ID of iCallBackInterface
     *   @param oSubscriberCookie 
	 *         given by the event manager. to be kept to unsubscribe with.
     *    @param  iFireMode
	 *          step you want to subscribe to (before/after or both).
     *    @param  iPriority
	 *          priority of subscription. from 1 to 9 - standard = 5.
	 *    @param WithPersistency
	 *          flag to store a persistent subscription.
	 *          not used.
     */
    virtual HRESULT Subscribe(const CATUnicodeString&             iMethodName,
			      const CATUnicodeString&             iObjectType,
			      const CATBaseUnknown_var&           iCallBackInterface,
			      const IID&                          iIDOfInterface,                           
			      unsigned long*                      oSubscriberCookie,
			      const ENOVIEvent::VPMEventFireMode& iFireMode = ENOVIEvent::EventFireStandard,
			      const int&                          iPriority  = 5,
			      VPM_Boolean                         WithPersistency=bFalse)=0;
    
    /**   Subscribes to an event for a given instance.
	 *<br><b>Role</b> : subscribe in EARLY mode, i.e. by implementing an explicit CallBack interface,
	 *    delivered by the publisher side.
     *
     *    @param  iMethodName 
	 *         event name you want to subscribe to.
     *    @param  iObjectInstance
	 *         object type you want to subscribe to.  
     *    @param  iCallBackInterface 
	 *         interface for the callback methods, implemented by the client which subscribes.
     *    @param  iIDOfInterface  
	 *          Real ID of iCallBackInterface
     *   @param oSubscriberCookie 
	 *         given by the event manager. to be kept to unsubscribe with.
     *    @param  iFireMode
	 *          step you want to subscribe to (before/after or both).
     *    @param  iPriority
	 *          priority of subscription. from 1 to 9 - standard = 5.
	 *
	 *    @param WithPersistency
	 *          flag to store a persistent subscription.
	 *          not used.
     */
    virtual HRESULT Subscribe(const CATUnicodeString&             iMethodName,
			      const ENOVIPublisher_var&           iObjectInstance,
			      const CATBaseUnknown_var&           iCallBackInterface,
			      const IID&                          iIDOfInterface,
			      unsigned long *                     oSubscriberCookie,
			      const ENOVIEvent::VPMEventFireMode& iFireMode = ENOVIEvent::EventFireStandard ,
			      const int&                          iPriority  = 5,
			      VPM_Boolean                         WithPersistency=bFalse)=0;
    

    /**   Subscribes to an event on a given type of object.
	 *<br><b>Role</b> : subscribe in LATE mode, i.e. by implementing a unique standard  interface @href ENOVISubscriberEvent
     *    @param  iMethodName 
	 *         event name you want to subscribe to.
     *    @param  iObjectType 
	 *         object type you want to subscribe to.  
     *    @param  iCallBackInterface 
	 *         an implementation of the standard callback interface ENOVISubscriberEvent
     *   @param oSubscriberCookie 
	 *         given by the event manager. to be kept to unsubscribe with.
     *    @param  iFireMode
	 *          step you want to subscribe to (before/after or both).By default both.
     *    @param  iPriority
	 *          priority of subscription. from 1 to 9 - standard = 5.
	 *    @param WithPersistency
	 *          flag to store a persistent subscription.
	 *          not used.
	 *
     */
    virtual HRESULT Subscribe(const CATUnicodeString&             iMethodName,
							  const CATUnicodeString&             iObjectType,
							  const ENOVISubscriberEvent_var&     iCallBackInterface,
							  unsigned long *                     oSubscriberCookie,
							  const ENOVIEvent::VPMEventFireMode& iFireMode = ENOVIEvent::EventFireStandard,
							  const int&                          iPriority  = 5,
							  VPM_Boolean                         WithPersistency=bFalse)=0;
	 

    /**   Subscribes to an event on a given instance.
	 *<br><b>Role</b> : subscribe in LATE mode, i.e. by implementing a unique standard  interface @href ENOVISubscriberEvent
     *    @param  iMethodName 
	 *         event name you want to subscribe to.
     *    @param  iObjectInstance
	 *         the object instance you want to subscribe to.  
     *    @param  iCallBackInterface 
	 *         an implementation of the standard callback interface ENOVISubscriberEvent
     *   @param oSubscriberCookie 
	 *         given by the event manager. to be kept to unsubscribe with.
     *    @param  iFireMode
	 *          step you want to subscribe to (before/after or both).By default both.
     *    @param  iPriority
	 *          priority of subscription. from 1 to 9 - standard = 5.
	 *    @param WithPersistency
	 *          flag to store a persistent subscription.
	 *          not used.
	 *
     */
    virtual HRESULT Subscribe(const CATUnicodeString&             iMethodName,
							  const ENOVIPublisher_var&           iObjectInstance,
							  const ENOVISubscriberEvent_var&     iCallBackInterface,
							  unsigned long *                     oSubscriberCookie,
							  const ENOVIEvent::VPMEventFireMode& iFireMode = ENOVIEvent::EventFireStandard ,
							  const int&                          iPriority  = 5,
							  VPM_Boolean                         WithPersistency=bFalse)=0;
 
    /**   Adds a filter to a given subscription referred to by its cookie.
	 *<br><b>Role</b> : Allow to more precisely determine events you are interested in
         *    @param  iCookie
	 *         given by the event manager to identify a subscription
         *    @param  iCategory
	 *         the category of the filter: either "ON_EVENT" or "ON_PUBLISHER".
         *    ON_EVENT filters allow to select events according to their
         *    associated @href ENOVIStream.
         *    ON_PUBLISHER filters allow to select events according to a condition
         *    on the object that published them. This condition can be built from
         *    an existing extended data group.
         *    @param  iName
	 *         the name of the filter.
         *    For ON_EVENT filters, iName refers to the name of the argument of the @href ENOVIStream.
         *    For ON_PUBLISHER filters, it refers to the condition name (whatsoever or existing data group).
         *    @param  iValue
	 *         the value of the filter.
         *    For ON_EVENT filters, iValue refers to the value of the argument of the @href ENOVIStream.
         *    For ON_PUBLISHER filters, it refers to the condition value itself (a character string).
	 *
    */
    virtual HRESULT AddSubscriptionFilter ( unsigned long iCookie,
                               const CATUnicodeString & iCategory,
                               const CATUnicodeString & iName,
                               const CORBAAny & iValue )=0;

	 /**   Unsubscribes  a client.
	  * <br><b>Role</b> : unsubscription using the cookie given at subscription time.
	  * @param iCookie
	  *   the cookie given at subscription time
	  */
	 virtual HRESULT Unsubscribe( unsigned long iCookie)=0;


    
    //=========================
    // GET THE RAISED EVENTS
    //==========================

    
    /**   Gets the events raised during the session.
     *    @param  oListOfRaisedEvents
	 *        the list of events raised since the beginning.    
     */
    virtual HRESULT  GetRaisedEvents (CATLISTV(CATBaseUnknown_var) & oListOfRaisedEvents) =0;
    
    /**   Gets the event of a given name raised by a type of object during the session.
     *    @param  iEventName
	 *            name of the wanted event
     *    @param  iObjectType
	 *            type of the object wanted
     *    @param  oListOfRaisedEvents
	 *        the list of events raised since the beginning.    
	 *            
	 *
     */ 
	 virtual HRESULT  GetRaisedEvents(const CATUnicodeString         & iEventName,
									  const CATUnicodeString         & iObjectType,
									  CATLISTV(CATBaseUnknown_var)   & oListOfRaisedEvents) =0;
	 
    /**   Gets the events of a given name  raised during the session.
     *    @param  iEventName
	 *            name of the wanted event
     *    @param  oListOfRaisedEvents
	 *        the list of events raised since the beginning.    
	 *            
	 *
     */ 
	 virtual HRESULT  GetRaisedEvents(const CATUnicodeString       & iEventName,
									  CATLISTV(CATBaseUnknown_var) & oListOfRaisedEvents) =0;
	 
    /**   Gets the events of a given name  raised by a given publisher during the session.
     *    @param  iEventName
	 *            name of the wanted event
	 *    @param  iPublisher
	 *            The publisher instance
     *    @param  oListOfRaisedEvents
	 *        the list of events raised since the beginning.    
	 *            
	 *
     */ 
	 virtual HRESULT  GetRaisedEvents(const CATUnicodeString        & iEventName,
									  const ENOVIPublisher_var       & iPublisher,
									  CATLISTV(CATBaseUnknown_var)   & oListOfRaisedEvents) =0;
	 
    /**   Gets all the events raised by a given publisher during the session.
	 *    @param  iPublisher
	 *            The publisher instance
     *    @param  oListOfRaisedEvents
	 *        the list of events raised since the beginning.    
	 *            
	 *
     */ 
	 virtual HRESULT  GetEventsRaised (const ENOVIPublisher_var           & iPublisher,
									   CATLISTV(CATBaseUnknown_var) & oListOfRaisedEvents) =0;
	 
    /**   Gets all the events raised by a given type of object during the session.
     *    @param  iObjectType
	 *            type of the object wanted
     *    @param  oListOfRaisedEvents
	 *        the list of events raised since the beginning.    
	 *            
	 *
     */ 
	 virtual HRESULT  GetRaisedEventsOnType(const CATUnicodeString   & iObjectType,
											CATLISTV(CATBaseUnknown_var) & oListOfRaisedEvents) =0;
	 
	 /**
	  * @nodoc
	  */  
	 virtual HRESULT  PurgeRaisedEvents()=0;
	 
	 /**
	  * @nodoc
	  */  
	 virtual HRESULT  PurgeRaisedEvents(const ENOVIPublisher_var       & iPublisher)=0;
	 
	 //==================================
    // GET THE SUBSCRIPTION INFORMATION
    //==================================

    
    /**
     * @nodoc
     */  
    virtual HRESULT GetSubscribers
                   (const CATUnicodeString       & iObjectType,
		    CATLISTV(CATBaseUnknown_var) & oListOfSubscribers,
		    const VPM_Boolean            & OnlyType = bTrue)=0;
    
    /**
     * @nodoc
     */  
    virtual HRESULT GetSubscribers
                  (const CATUnicodeString& iObjectType,
		   const CATUnicodeString& EventType,
		   CATLISTV(CATBaseUnknown_var)& oListOfSubscribers,
		   const ENOVIEvent::VPMEventFireMode& iFireMode= ENOVIEvent::EventFireStandard,
	           const VPM_Boolean           & OnlyType = bTrue )=0;

    /**
     * @nodoc
     */  
    virtual HRESULT GetSubscribers
                  (const CATUnicodeString& iObjectType,
		   const CATUnicodeString& EventType,
		   const CATUnicodeString& iFireMode,
		   CATLISTV(CATBaseUnknown_var)& oListOfSubscribers,
		   const VPM_Boolean           & OnlyType = bTrue,
		   const ENOVIEventManager::EvtSubscriptionMode & iSubMode = ENOVIEventManager::BothModes)=0;

    /**
     * @nodoc
     */  
    virtual HRESULT GetSubscribers
                   (const ENOVIPublisher_var     & iPublisher,
		    CATLISTV(CATBaseUnknown_var) & oListOfSubscribers)=0;

    /**
     * @nodoc
     */  
    virtual HRESULT GetSubscribers
                   (const ENOVIPublisher_var    & iPublisher,
		   const CATUnicodeString       & iEventType,
		   CATLISTV(CATBaseUnknown_var)& oListOfSubscribers,
		   const ENOVIEvent::VPMEventFireMode& iFireMode= ENOVIEvent::EventFireStandard,
		   const ENOVIEventManager::EvtSubscriptionMode & iSubMode = ENOVIEventManager::BothModes)=0;
    

    /**
     * @nodoc
     */  
    virtual HRESULT  GetSubscriberCookies(CATListOfInt& oListOfSubscriberCookies,
										  const ENOVIEventManager::EvtSubscriptionMode & iSubMode = ENOVIEventManager::BothModes)=0;
    


    /**
     * @nodoc
     */  
	 virtual HRESULT GetCookieInformation(unsigned long  iCookie,
										  CATUnicodeString&   oTypeOfObject,
										  CATUnicodeString&   oEventName,
										  CATBaseUnknown_var& oCallBackInterface,
										  IID&                oIDOfInterface,
										  boolean&            oIsEarlyType,
										  boolean&            oIsOnInstance,
										  ENOVIPublisher_var& oPublisher,
										  int&                oPriority)=0; 
					 
					
    

    //=============================
    // To queue events raising...
    //=============================

    /**
     * @nodoc
     */  
   virtual HRESULT SetQueueMode( const VPM_Boolean& iQueueFlag) = 0;

    /**
     * @nodoc
     */  
   virtual HRESULT GetQueueMode( VPM_Boolean& oQueueFlag) = 0;

    /**
     * @nodoc
     */  
   virtual HRESULT GetListOfQueuedEvents(CATLISTV(CATBaseUnknown_var) & oListOfRaisedEvents) =0;
    

    
    /**
     * @nodoc
     */  
    virtual HRESULT InitializeEvent(const CATUnicodeString&              iEventType ,
				    const ENOVIPublisher_var&            iPublisher )=0;
    
    
    /**
     * @nodoc
     */  
    virtual  HRESULT GetDataEvent
     	             (const CATUnicodeString&  iEventType , 
     	              IUnknown*&               iPublisher , 
     	              ENOVIStream_var&         oDataEvent ) = 0;
    //
    /**
     * @nodoc
     */  
    virtual  HRESULT GetCurrentEvent
     	             (ENOVIEvent_var& oEvent ) = 0;
    //  
    /**
     * @nodoc
     */  
    virtual HRESULT EventFire
	(const CATUnicodeString& iEventType    ,
	 const CATUnicodeString& iEventFireMod ,
	 IID&                    iIID          ,
	 IUnknown*&              iObject       ,
	 BaseTypMet              MyPtrEvt      ,
	 BaseTypMet              MyPtrEvtKo    ,
	 ENOVIStream_var&        oStream       ,
	 HRESULT&                ioRc          ) =0 ;
    };
    /**
     * @nodoc
     */  
CATDeclareHandler(ENOVIEventManager, CATBaseUnknown);

#endif 




