#ifndef ENOVDataEventMacro_H_
#define ENOVDataEventMacro_H_
/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * MACRO DATA_EVENT_INIT : macro used in association with the EVENT_FIRE macro. <br>
 *                         
 *                    
 * <b>Role</b>: This macro gives a smart pointer on a ENOVIStream, in order to fill it before raising the associated event.<br>
 *              the stream is dimensionned according to it's declaration in the XML event file.
 *              When using the macro, the system will find the stream declaration, for the pair object/event;<br>
 *              then it  will create a well-dimensioned ENOVIStream object, and return a smart pointer on it.
 *              So the publisher fills the streams with the argument values.
 *              
 * @see ENOVIEvent
 * @see ENOVIStream
 */
//======================================================================== 
// ENOVIA_VPM (c) Copyright Dassault Systemes 1999
// -------------------------------------------------------------
// Responsable: AHC
// --------------------------------------------------------------
// Macro: ENOVDataEventMacro.h
// --------------------------------------------------------------
// Historic:
// Creation : 99/08/12 > AHC
// --------------------------------------------------------------
// Comment:
//        
//    This macro manages the DataEvent associated to a event instance   
//
// -> First   argument: CONSTANT           >> Event type
// -> Second  argument: ENOVIStream_var    >> DataEvent related  to event 
//
// exemple:
// 
// ENOVIStream_var oStream ;
// DataEvent_Init(ChangeStatus,oStream); 
//
//======================================================================== 
//
// Include
//
#include "VPMSession.h"
#include "ENOVIEventManager.h"
//                                        

    /**
     * Macro to get a pointer on a publisher data stream to be filled according to XML definition.
     * @param EVENT_TYPE 
	 *        the Event name which the stream is associated with: must be written as a symbol, not a string
     * @param oStream
	 *        a smart pointer on the empty stream to be filled before the event is fired.
	 * NB : When the event is fired, the system associates automatically the filled stream with 
	 *      this event.
     */  
#define DATA_EVENT_INIT(EVENT_TYPE,oStream)       {               \
  IUnknown* Unk = NULL ;ENOVIEventManager_var  EvtMng ;           \
  VPMSession::OpenSession()->get_ENOVEventManager(EvtMng);        \
  this->QueryInterface(IID_IUnknown, (void**) & Unk );            \
  if (EvtMng!=NULL_var)											  \
  EvtMng->GetDataEvent(#EVENT_TYPE,Unk ,oStream); Unk->Release(); }   

    /**
     * Macro to get a pointer on a publisher data stream to be filled according to XML definition.
     * To be used in cases where the event method code is put outside the firing object implementation.
     * Implies that an appropriate object instance is valid in the scope of that code.
     * @param iObject
	 *        the object that will publish the event
     * @param EVENT_TYPE 
	 *        the Event name which the stream is associated with: must be written as a symbol, not a string
     * @param oStream
	 *        a smart pointer on the empty stream to be filled before the event is fired.
	 * NB : When the event is fired, the system associates automatically the filled stream with 
	 *      this event.
     */  
#define OBJECT_DATA_EVENT_INIT(iObject,EVENT_TYPE,oStream)  \
{                                                           \
 if((CATBaseUnknown*)iObject!=NULL)                         \
 {                                                          \
  IUnknown* TmpPtr = NULL;                                  \
  iObject->QueryInterface(IID_IUnknown,(void**)&TmpPtr);    \
  ENOVIEventManager_var EvtMng;                             \
  VPMSession::OpenSession()->get_ENOVEventManager(EvtMng);  \
  EvtMng->GetDataEvent(#EVENT_TYPE,TmpPtr,oStream);         \
  TmpPtr->Release();                                        \
 }							    \
}   							    \

#endif 
