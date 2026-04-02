//
// COPYRIGHT DASSAULT SYSTEMES 1999
//------------------------------------------------------------------------------
// Interface  : ENOVIEventDefinition    
// Author     : BGE
// Date       : 07/07/1999
// Modified by: RCB July 2000 
// Purpose    : Detailing Events which were registered by Packages.
//------------------------------------------------------------------------------
//
#ifndef ENOVIEventDefinition_H
#define ENOVIEventDefinition_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "GUIDVPMInterfaces.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATListOfCATUnicodeString.h"
#include "ENOVRegDictionary.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_ENOVIEventDefinition;
#else
extern "C" const IID IID_ENOVIEventDefinition;
#endif

/**
* <br> Packages define and register the Events they want their objects to raise.
* <br>          (or modify existing events).
* <br>      Several characteristic are defined : 
*<br>
*  <br>Visibility for Subscribers:
*  <br>==========================
*  <br>         association Type/Event (or Class/Method) can be declared Public/Protected/Private.
*      <br>     i.e. Public    : All clients can Susbcribe To
*          <br>      Protected : Seen by only deriving Types.
*              <br>  Private   : Seen only inside the Package. 
*<br>
*  <br>Persistency of an Event:
*  <br>=======================
*      <br>    an Event may be declared persistent, i.e. each time a publisher will raise this event, 
*      <br>    it will be logged , in order to be saved in Database, at Session Save.
*<br>
*  <br>Type Of Event Raise :
*  <br>===================
*      <br> 2 modes for raising an event :
*       <br>"Standard" Mode            : the publisher raises the event only once, 
*          <br>                         at any location inside the implementation method
*       <br>"Before" and "After" Mode  : the publisher raises a "message" BEFORE
*           <br>                        when entering the method, and a "message" AFTER 
*               <br>                    when exiting the method. So, a client can subscribe to
*                   <br>                only one Step, or both.
*<br>
*    <br>  MoreOver, an event can be veto-able, only if it was declared Before/After, i.e. a subscriber
*      <br>can prevent the publisher method to run, if this publisher gives this opportunity. It's why
*      <br>we need Before step, in entering the method. The veto is available only in the Before Step
*      <br>of an event.
*<br>
*  <br>Associated Data Streams :
* <br>==========================
*     <br> A Publisher can declare that data are associated to a couple ( Class, Event); those data
*      <br>are transmitted to the subscribers when an event is raised. Those Data have a given format,
*      <br>described in the registration.
*<br>
*  <br>Associated CallBack Interfaces:
*  <br>===============================
*      <br>a class which declares Events declares one associated CallBack Interface.
*      <br>These interfaces contain 2 sets of methods :
*      <br>- onBefore<EventName>(...), onAfter<EventName>(...) if Event <EventName> is declared with 2 steps.
*      <br>- on<EventName>(...) if  Event <EventName> is declared "Standard".
*<br>
*    <br>  - 1 method onKo(...) which is called back if one other subscriber did something wrong at event raise.
*  <br>
*      <br>A Package chooses to group the whole set of methods related to Events in one single interface, or
*      <br>to put them in some separate interfaces. Anyway, those interfaces are declared and the client must
*      <br>known them to be able to subscribe to events.
*/

/**
*  Interface to get the definitions of events that a publisher (type or instance) can raise.
*  <b>Role</b>: <br> All information about events are stored: the event name, the root type for 
*  which this event was registered, the package it belongs to,
*  if there is an associated data stream, what are the associated callback interfaces, etc.
*/
class ExportedByGUIDVPMInterfaces ENOVIEventDefinition : public CATBaseUnknown
{
	 
	 CATDeclareInterface ;
	 
public :

	 /**
	  * Gets the event name.
      * <br><b>Role</b> : Retrieves the name of the event.
	  * @param oEventName
	  *   string giving the name of the event
	  */
	 virtual HRESULT GetEventName(
		 CATUnicodeString & oEventName)=0;
	 
	 /**
	  * @nodoc
	  */
	 virtual HRESULT GetInputPublisher(
		 CATUnicodeString & oTypeName,
		 CATUnicodeString & oBelongingPackage)=0;
	 
	 /**
	  * Gets the type publishing the event.
      * <br><b>Role</b> : Retrieves the type of the publishing object.
	  * @param oPublisherType
	  *   string giving the type of the publishing object
	  * @param oBelongingPackage
	  *   string giving the name of the package declaring the event
	  * @param oWhichLevel
	  *   level of inheritance of the type
	  */
	 virtual HRESULT GetSourcePublisher(
		 CATUnicodeString & oPublisherType,
		 CATUnicodeString & oBelongingPackage, 
		 int & oWhichLevel)=0;
	 
	 /**
	  * Gets the visibility of the event.
      * <br><b>Role</b> : Retrieves the type of the event.
	  * @param oVisibility
	  *   enum value giving the visibility of the event
	  */
	 virtual HRESULT GetVisibility(
		 ENOVEvtType & oVisibility)=0;
	 
	 /**
	  * Checks if there is a data stream associated to the event.
      * <br><b>Role</b> : Allows to know if the event has an associated stream of data.
	  * @return
	  *   TRUE if there is a data stream
	  */
	 virtual CATBoolean HasAssociatedData()=0;
	 
	 /**
	  * Checks if the event is persistent.
      * <br><b>Role</b> : Allows to know if the event is stored in the database.
	  * @return
	  *   TRUE if the event is persistent
	  */
	 virtual CATBoolean IsPersistentEvent()=0;
	 
	 /**
	  * Checks if the event has two steps.
      * <br><b>Role</b> : Allows to know if the event is fired twice inside the scope of the corresponding method.
	  * @return
	  *   TRUE if the event has two steps
	  */
	 virtual CATBoolean IsBeforeAfterMode()=0;
	 
	 /**
	  * Checks if the event is veto-able.
      * <br><b>Role</b> : Allows to know if the event can be vetoed by a subscriber.
	  * @return
	  *   TRUE if the event is veto-able
	  */
	 virtual CATBoolean IsVetoAble()=0;
	 
	 /**
	  * Checks if the event is subscribe-able as far as instance objects are concerned.
      * <br><b>Role</b> : Allows to know if the event can be subscribed to on instances.
	  * @return
	  *   TRUE if the event is subscribe-able
	  */
	 virtual CATBoolean IsInstanceSubscribable()=0;
	 
	 /**
	  * Gets the data stream associated to the event.
      * <br><b>Role</b> : Retrieves the characteristics of an event stream.
	  * @param oStreamName
	  *   string giving the name of the event stream
	  * @param oArgumentNames
	  *   list of strings giving the names of the stream arguments
	  */
	 virtual HRESULT GetAssociatedData(
		 CATUnicodeString& oStreamName,
		 CATListOfCATUnicodeString& oArgumentNames)=0;

	 /**
	  * Gets the type of a stream argument.
      * <br><b>Role</b> : Retrieves the name of the event.
	  * @param oArgumentName
	  *   string giving the name of the stream argument
	  * @param oArgumentType
	  *   enum value giving the type of the stream argument
	  */
	 virtual HRESULT GetTypeOfArgument(
		 const CATUnicodeString& iArgumentName,
		 ENOVEvtArgType& oArgumentType)=0;
	 
	 /**
	  * Gets the list of callback interfaces associated to the event.
      * <br><b>Role</b> : Retrieves the names of the callback interfaces.
	  * @param oInterfaceNames
	  *   list of strings giving the names of the callback interfaces
	  */
	 virtual HRESULT GetCallBackInterfaceNames (
		 CATListOfCATUnicodeString& oInterfaceNames)=0;
	 
};

CATDeclareHandler(ENOVIEventDefinition, CATBaseUnknown);

#endif // ENOVIEventDefinition
