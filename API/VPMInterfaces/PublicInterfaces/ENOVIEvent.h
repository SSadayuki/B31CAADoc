#ifndef ENOVIEvent_H
#define ENOVIEvent_H
//------------------------------------------------------------------------------
// COPYRIGHT DASSAULT SYSTEMES 1999
//------------------------------------------------------------------------------
// Interface  : ENOVIEvent
//------------------------------------------------------------------------------
//


/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */


/**
 * Interface to manipulate instances of event raised by ENOVIA objects.
 * <b>Role</b>: an ENOVIEvent carries information about the raised event between Publisher and subscribers. 
 * name of event.<br>  publisher identity @href ENOVIPublisher  <br>date of raise <br>
 * associated data from publisher @href ENOVIStream.<br>
 * a client or subscriber can also fill put information in the ENOVIEvent.
 * This interface is implemented  and ready to be used.
 * @see ENOVIStream, ENOVIPublisher.
 */

#include "GUIDVPMInterfaces.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CORBAAnyDef.h"
#include "CATTime.h"
//
// Forward declarations
//
class ENOVIPublisher_var ;
class ENOVIStream_var    ;
//
//
// UUID definition
//
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_ENOVIEvent;
#else
extern "C" const IID IID_ENOVIEvent;
#endif

class ExportedByGUIDVPMInterfaces ENOVIEvent : public CATBaseUnknown
{
	 CATDeclareInterface ;
	 
public :
	 
	 /**
	  * Enumeration to precise the steps in raising an event.
	  * <br><b>Role:</b> an Event can be raised in 2 steps( Before at the beginning of the method,
	  * After at the end of the method), or in one single step (standard). The first way may be
	  * used generally.
	  */
	 enum VPMEventFireMode
	 {
		  EventFireBefore        = 1,  // before the execution of the method
		  EventFireAfter         = 2,  // after the execution of the method
		  EventFireStandard      = 3   // before AND after (if event accept those modes) or standard.
	 } ;

	 
	 /**
	  *  gives the cookie (identity) of the Session in which is event is raised.
	  *  @param oCookie
	  *   a string giving the identity of the current session.
	  */
	 virtual HRESULT GetCookieSession
	 (CATUnicodeString& oCookie) = 0 ;
	 
	 
    /**
     * Name of the instance of event.
	 * @param oEventName
	 * the name of Event (ex: Lock, Create, Delete, ChangeStatus ...)
     */  
    virtual HRESULT GetName(CATUnicodeString & oEventName)=0;

    /**
     * @nodoc
     */  
    virtual HRESULT GetType(CATUnicodeString & oEventType)=0;


    /**
     * Get Input Data Stream associated with the current emitted event.
	 * <br><b>Role</b>: Streams in an event. <br>
     *  - EventData is given by the publisher to transmit information to Subscribers<br>
     *  - ClientData is filled by the subscribers to give back Publisher information<br>
	  *  NB : The ClientData has a format defined by the Publisher, in order to be able to read it.
	 * @param oDataEvent
	 * the associated stream.
	 * @see ENOVIStream
     */  
    virtual HRESULT GetDataEvent(ENOVIStream_var& oDataEvent)=0;
	 
	 /**
	  *  Gets the client Data stream.
	  * <br><b>Role</b>: Streams in an event. <br>
	  *  - EventData is given by the publisher to transmit information to Subscribers<br>
	  *  - ClientData is filled by the subscribers to give back Publisher information<br>
	  *  NB : The client data have a format defined by the Publisher, in order to be able to read it.
	  *       If many clients want to store information, this information is added sequentially at the
	  *       end of the stream.
	  * @param oAssociatedStream
	  *  the client stream.
	  * @see ENOVIStream
	  */  
	 virtual HRESULT GetClientData(ENOVIStream_var& oAssociatedStream) = 0; 
	 
	 
	 /**
	  *  Sets the client data stream in the event.
	  * <br><b>Role</b>: Streams in an event. <br>
	  *  - EventData is given by the publisher to transmit information to Subscribers<br>
	  *  - ClientData is filled by the subscribers to give back Publisher information<br>
	  *  NB : The client data have a format defined by the Publisher, in order to be able to read it.
	  *       If many clients want to store information, this information is added sequentially at the
	  *       end of the stream.
	  * @param iAssociatedStream
	  *  the stream filled by the client.
	  * @see ENOVIStream
	  */  
	 virtual HRESULT SetClientData
	 (const ENOVIStream_var & iAssociatedStream)= 0;

	 /**
     *   Get the most recent date when the event was raised.  
	 *   @param oPDate
	 *   the publish date under a CORBAAny Format
     */
	 virtual HRESULT GetPublishDate(CORBAAny& oPDate)=0;

	 /**
     *   Get the most recent date when the event was raised.  
	 *   @param oPublishDate
	 *   the publish date under a classical format
     */
	 virtual HRESULT GetPublishDate(CATTime& oPublishDate)=0;
	 
	 /**
	  *   Get the publisher Id which raised event.
	  *   @param oPublisher
	  *   the Object which raises the event.
	  *   @see ENOVIPublisher
	  */
	 virtual HRESULT GetPublisher(ENOVIPublisher_var & oPublisher)=0;
	 
	 /**
	  *  gives the real object for which the event is raised.
	  * <br><b>Role</b>: A publisher can raise an event for another object. In that
	  * case, the object for which the event was raised is given here.
	  * In normal cases, GetPublisher and GetSourceObject give the same result.
	  *
	  * May be used only in the creation case.
	  * @param oSource
	  * the object for which the event is raised. 
	  */
  virtual HRESULT GetSourceObject(CATBaseUnknown_var& oSource)=0;

	 /**
     *   Get the current step of the event.
	 *   @param oCurrentStep
	 *   the current step of the event life : Before/After or Standard.
     */
  virtual HRESULT GetCurrentStep(VPMEventFireMode& oCurrentStep)=0;

	/** @nodoc */
  virtual HRESULT SetCurrentStep(const VPMEventFireMode iFireMode)=0;
  
	/** @nodoc */
  virtual HRESULT CanBePulled(boolean& oStatus)=0;
  
    

};
/** @nodoc */

CATDeclareHandler(ENOVIEvent, CATBaseUnknown);

#endif // ENOVIEvent



