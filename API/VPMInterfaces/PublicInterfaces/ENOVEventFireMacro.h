#ifndef ENOVEventFireMacro_H_
#define ENOVEventFireMacro_H_


/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * MACRO EVENT_FIRE : to be used for emitting events. <br>
 *                    
 * <b>Role</b>: By inserting this macro at the beginning and/or at the end of the method, a class is able to raise events.<br>
 *              clients which subscribed will be called back.               
 * @see ENOVIEvent
 */


//======================================================================== 
// ENOVIA_VPM (c) Copyright Dassault Systemes 1999
// -------------------------------------------------------------
// Responsable: AHC
// --------------------------------------------------------------
// Macro: ENOVEventFireMacro.h
// --------------------------------------------------------------
// Historic:
// Creation : 99/08/12 > AHC
// --------------------------------------------------------------
// Comment:
//        
//    This macro manages the event model based on the Windows Connection model   
//    The behavior has been structured on four steps:
//
//    1- Event Creation and DataEvent initialization 
//    2- Checking subscriber 
//    3- Fire Event on an object and on an object type ( Early, Late ) 
//    4- Notify Management ( Early, Late ) 
//
// -> argument: CONSTANT           >> Event type
// -> argument: CONSTANT           >> Name of the connectable interface 
// -> argument: CONSTANT           >> Raise event mode 
// -> argument: ENOVIStream_var    >> outputStream related  to event 
// -> argument: int                >> return code 
//
// exemple:
// 
// ENOVIStream_var oStream ;
// HRESULT ioRc ;
// EventFire(ChangeStatus,Action,ENOVIActionEvent,EvtFireStandard,oStream,ioRc); 
//
//======================================================================== 
//
// Include
//



#include "VPMSession.h"
#include "ENOVIEventManager.h"

#include "ENOVIEvent.h"
#include "ENOVIStream.h"
#include "CATLISTPIUnknown.h"
#include "ENOVEventController.h"
//        
    /**
     * @nodoc
     */  
#define EVTStandard(EVENT_ITF_NAME,EVENT_TYPE) \
                      TypMet MyPtrEvt = &##EVENT_ITF_NAME::on##EVENT_TYPE

    /**
     * @nodoc
     */  
#define EVTBefore(EVENT_ITF_NAME,EVENT_TYPE) \
                      TypMet MyPtrEvt = &##EVENT_ITF_NAME::on##Before##EVENT_TYPE

    /**
     * @nodoc
     */  
#define EVTAfter(EVENT_ITF_NAME,EVENT_TYPE) \
                      TypMet MyPtrEvt = &##EVENT_ITF_NAME::on##After##EVENT_TYPE

    /**
     * @nodoc
     */  
#define EVTCONTROLBefore(EVENT_TYPE) \
  ENOVEventController EvtCtrlBefore(#EVENT_TYPE)
    /**
     * @nodoc
     */  
#define EVTCONTROLAfter(EVENT_TYPE) \
  ENOVEventController EvtCtrlAfter(#EVENT_TYPE)
    /**
     * @nodoc
     */  
#define EVTCONTROLStandard(EVENT_TYPE) \
  ENOVEventController EvtCtrlBefore(#EVENT_TYPE)

                                
    /**
     * Macro to raise events in object methods
     * @param EVENT_TYPE 
	 *        the Event name : must be written as a symbol, not a string
     * @param EVENT_ITF_NAME
	 *        The associated callback interface, clients can subscribe with.
	 *        Must be written as a symbol, not a string
     * @param EVT_FIRE_MOD
	 *        The step of the event ; must be <br>
	 *        Before for the macro inserted at the beginning of the method
	 *        After  for the macro inserted at the end       of the method
     * @param oStream
	 *        The client stream returned after the subscribers are called back.<br>
	 *        Must be null if no client stream  was declared in the .event file related with the event.
     * @param ioRc
	 *        code returned after subscribers were called. if E_ACCESSDENIED, the method is vetoed.
     */  
#define EVENT_FIRE(EVENT_TYPE,EVENT_ITF_NAME,EVT_FIRE_MOD,oStream,ioRc)  \
  EVTCONTROL##EVT_FIRE_MOD(#EVENT_TYPE) ;             \
{                                                     \
  HRESULT Ret= S_OK ;                                                    \
  typedef HRESULT (##EVENT_ITF_NAME::*TypMet)(const ENOVIEvent_var& evt,HRESULT& ioRc);  \
  EVT##EVT_FIRE_MOD(EVENT_ITF_NAME,EVENT_TYPE);                       \
  TypMet MyPtrEvtKo = &##EVENT_ITF_NAME::onKo         ;               \
  ENOVIEventManager_var  EvtMng ;                                     \
  VPMSession::OpenSession()->get_ENOVEventManager(EvtMng) ;           \
  IUnknown* TmpPtr = (IUnknown*) this  ;                              \
  Ret = EvtMng->EventFire(#EVENT_TYPE,#EVT_FIRE_MOD,IID_##EVENT_ITF_NAME,TmpPtr,         \
                          (BaseTypMet)MyPtrEvt,(BaseTypMet)MyPtrEvtKo,oStream,ioRc);    \
  {if(strcmp(#EVT_FIRE_MOD,"Before")==0) {                    \
      EvtCtrlBefore.SetPertinentFlag(TRUE);                 \
      EvtCtrlBefore.SetState(ENOVIEvent::EventFireBefore);  \
     EvtCtrlBefore.SetStepStatus(ioRc);                     \
   }                                                        \
  else if (strcmp(#EVT_FIRE_MOD,"After")==0)                  \
   {                                                        \
      EvtCtrlBefore.SetPertinentFlag(TRUE);                 \
      EvtCtrlBefore.SetState(ENOVIEvent::EventFireAfter);   \
      EvtCtrlBefore.SetStepStatus(ioRc);                    \
   }							    \
  else                                                      \
   {                                                        \
      EvtCtrlBefore.SetPertinentFlag(TRUE);                 \
      EvtCtrlBefore.SetState(ENOVIEvent::EventFireStandard);\
      EvtCtrlBefore.SetStepStatus(ioRc);                    \
   }}}							    \

    /**
     * Macro to raise events.
     * To be used in cases where the event method code is put outside the firing object implementation.
     * Implies that an appropriate object instance is valid in the scope of that code.
     * @param iObject
	 *        the object that actually fires the event
     * @param EVENT_TYPE 
	 *        the Event name : must be written as a symbol, not a string
     * @param EVENT_ITF_NAME
	 *        The associated callback interface, clients can subscribe with.
	 *        Must be written as a symbol, not a string
     * @param EVT_FIRE_MOD
	 *        The step of the event ; must be <br>
	 *        Before for the macro inserted at the beginning of the method
	 *        After  for the macro inserted at the end       of the method
     * @param oStream
	 *        The client stream returned after the subscribers are called back.<br>
	 *        Must be null if no client stream  was declared in the .event file related with the event.
     * @param ioRc
	 *        code returned after subscribers were called. if E_ACCESSDENIED, the method is vetoed.
     */  
#define OBJECT_EVENT_FIRE(iObject,EVENT_TYPE,EVENT_ITF_NAME,EVT_FIRE_MOD,oStream,ioRc)  \
EVTCONTROL##EVT_FIRE_MOD(#EVENT_TYPE);                      \
{                                                           \
 if((CATBaseUnknown*)iObject!=NULL)                         \
 {                                                          \
  HRESULT Ret = S_OK;                                       \
  typedef HRESULT (##EVENT_ITF_NAME::*TypMet)(const ENOVIEvent_var& evt,HRESULT& ioRc); \
  EVT##EVT_FIRE_MOD(EVENT_ITF_NAME,EVENT_TYPE);             \
  TypMet MyPtrEvtKo = &##EVENT_ITF_NAME::onKo;              \
  ENOVIEventManager_var EvtMng;                             \
  VPMSession::OpenSession()->get_ENOVEventManager(EvtMng);  \
  IUnknown* TmpPtr = NULL;                                  \
  iObject->QueryInterface(IID_IUnknown,(void**)&TmpPtr);    \
  Ret = EvtMng->EventFire(#EVENT_TYPE,#EVT_FIRE_MOD,IID_##EVENT_ITF_NAME,TmpPtr,        \
                          (BaseTypMet)MyPtrEvt,(BaseTypMet)MyPtrEvtKo,oStream,ioRc);    \
  TmpPtr->Release();                                        \
  {if(strcmp(#EVT_FIRE_MOD,"Before")==0)                    \
   {                                                        \
      EvtCtrlBefore.SetPertinentFlag(TRUE);                 \
      EvtCtrlBefore.SetState(ENOVIEvent::EventFireBefore);  \
      EvtCtrlBefore.SetStepStatus(ioRc);                    \
   }                                                        \
  else if(strcmp(#EVT_FIRE_MOD,"After")==0)                 \
   {                                                        \
      EvtCtrlBefore.SetPertinentFlag(TRUE);                 \
      EvtCtrlBefore.SetState(ENOVIEvent::EventFireAfter);   \
      EvtCtrlBefore.SetStepStatus(ioRc);                    \
   }							    \
  else                                                      \
   {                                                        \
      EvtCtrlBefore.SetPertinentFlag(TRUE);                 \
      EvtCtrlBefore.SetState(ENOVIEvent::EventFireStandard);\
      EvtCtrlBefore.SetStepStatus(ioRc);                    \
   }							    \
  }							    \
 }							    \
}							    \

#endif 
