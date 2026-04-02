#ifndef ENOVIPublisher_H
#define ENOVIPublisher_H

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

/**
 * Interface implemented by objects which raise events.
 * <br><b>Role</b>: a publisher view for objects emitting events. Methods to subscribe directly
 * without using the @href ENOVIEventManager interface.
 * @see ENOVIEventManager
 */

//
// COPYRIGHT DASSAULT SYSTEMES 1999
//------------------------------------------------------------------------------
// Interface  : ENOVIPublisher    
// Author     : AHC/RCB
// Date       : 09/01/1999  revision september/ 09/ 1999
//------------------------------------------------------------------------------
//
#include "GUIDVPMInterfaces.h"
#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "ENOVIEvent.h"
#include "ENOVIObjectInfo.h"
#include "CATVpmType.h" 
#include "CATListOfInt.h"
#include "CATListOfCATUnicodeString.h"
//
// Forward declarations
//
class CATUnicodeString;
class ENOVISubscriberEvent_var;
//
// UUID definition
//
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_ENOVIPublisher;
#else
extern "C" const IID IID_ENOVIPublisher;
#endif
/**
 *   Publishing events inside an object.
 */
class ExportedByGUIDVPMInterfaces ENOVIPublisher : public CATBaseUnknown
{
  CATDeclareInterface ;
  
public :
	 /** Returns the Publisher Type.
	  * @param oName
	  *  Type of publisher
	  */  
  virtual HRESULT GetName (CATUnicodeString & oName) = 0; 
  
  
	 /** 
	  *    Subscribe directly a client to an Event on a publisher instance.
	  * <br><b>Role</b>: allows a client to subscribe directly on a publisher, without using @href ENOVIEventManager interface.
	  *  It is a EARLY subscription, i.e. the client implements an explicit CallBack interface.
	  *    @param  iEventName 
	  *         event name you want to subscribe to.
	  *    @param  iCallBackInterface 
	  *         interface for the callback methods, implemented by the client which subscribes.
	  *    @param  iIDOfInterface  
	  *          Real ID of iCallBackInterface
	  *    @param  iFireMode
	  *          step you want to subscribe to (before/after or both).
	  *    @param  iPriority
	  *          priority of subscription. from 1 to 9 - standard = 5.
	  *    @param oSubscriberCookie 
	  *      a cookie to keep for a further unsubscription.
	  *
	  */
	 virtual HRESULT Subscribe 
	 (const CATUnicodeString  &           iEventName, 
	  const CATBaseUnknown_var&           iCallBackInterface,
	  const IID&                          iIDOfInterface,
	  const ENOVIEvent::VPMEventFireMode& iFireMode ,
	  unsigned long*                      oSubscriberCookie,
	  const int&                          iPriority  = 5)=0;
    
    
	 /** 
	  *    Subscribe directly a client to an Event on a publisher instance.
	  * <br><b>Role</b>: allows a client to subscribe directly on a publisher, without using @href ENOVIEventManager interface.
	  *  It is a LATE subscription, i.e. the client implements a generic CallBack interface @href ENOVISubscriberEvent .
	  *    @param  iEventName 
	  *         event name you want to subscribe to.
	  *    @param  iSubscriber 
	  *         implementation of callback interface ENOVISubscriberEvent
	  *    @param  iIDOfInterface  
	  *          Real ID of iCallBackInterface
	  *    @param  iFireMode
	  *          step you want to subscribe to (before/after or both i.e. standard).
	  *    @param  iPriority
	  *          priority of subscription. from 1 to 9 - standard = 5.
	  *    @param oSubscriberCookie 
	  *      a cookie to keep for a further unsubscription.
	  *
	  */
	 virtual HRESULT Subscribe 
	 (const CATUnicodeString&             iEventName, 
	  const ENOVISubscriberEvent_var&     iSubscriber,
	  const ENOVIEvent::VPMEventFireMode& iFireMode ,
	  unsigned long*                      oSubscriberCookie,
	  const int&                          iPriority  = 5)=0;
	 
	 
	 /** 
	  *  unsubscription of the client.
	  *    @param  iSubscriberCookie
	  *     the cookie given at subscription time.
	  */
	 virtual HRESULT Unsubscribe
	 (unsigned long iSubscriberCookie)=0;
	 
	 /**
	  * Return the list of clients that subscribed to the specified event on this publisher instance.
	  *    @param  iEventName 
	  *         name of the event subscribed to.
	  *    @param  oListOfSubscribers
          *         the returned list of subscribers as a collection of CATBaseUnknown pointers.
	  *    @param  iFireMode
	  *         the step subscribed to (before/after or both i.e. standard).
	  * 
	  */  
	 virtual HRESULT GetSubscribers
	 (const CATUnicodeString             & iEventName,
	  CATLISTV(CATBaseUnknown_var)       & oListOfSubscribers,
	  const ENOVIEvent::VPMEventFireMode & iFireMode = ENOVIEvent::EventFireStandard)=0;
	 
	 
	 
	 /**
	  * Return the list of events which can be raised by the Publisher.
	  * @param  oListOfManagedEvents
	  *  the list of events.
	  * 
	  */  
	 virtual HRESULT GetListOfRaisableEvents 
	 (CATListOfCATUnicodeString & oListOfManagedEvents) = 0;
	 
	 /**
	  * Return a pointer to the ENOVIObjectInfo interface associated to this publisher instance.
	  * @param  oObjectInfo
	  *  the pointer to the ENOVIObjectInfo interface.
	  */  
	 virtual HRESULT GetObjectInfo 
	 (ENOVIObjectInfo_var& oObjectInfo) = 0;

};

CATDeclareHandler(ENOVIPublisher, CATBaseUnknown);

#endif // ENOVIPublisher



















