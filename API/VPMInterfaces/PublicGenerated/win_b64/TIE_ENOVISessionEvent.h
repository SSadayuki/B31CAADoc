#ifndef __TIE_ENOVISessionEvent
#define __TIE_ENOVISessionEvent

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "ENOVISessionEvent.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface ENOVISessionEvent */
#define declare_TIE_ENOVISessionEvent(classe) \
 \
 \
class TIEENOVISessionEvent##classe : public ENOVISessionEvent \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(ENOVISessionEvent, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT onBeforeCreateLoginSession (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
      virtual HRESULT onAfterCreateLoginSession (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
      virtual HRESULT onBeforeSaveLoginSession (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
      virtual HRESULT onAfterSaveLoginSession (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
      virtual HRESULT onBeforeCloseLoginSession (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
      virtual HRESULT onAfterCloseLoginSession (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
      virtual HRESULT onBeforeAbortLoginSession (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
      virtual HRESULT onAfterAbortLoginSession (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
      virtual HRESULT onBeforeUndoCommand (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
      virtual HRESULT onAfterUndoCommand (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
      virtual HRESULT onBeforeStartCommand (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
      virtual HRESULT onAfterStartCommand (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
      virtual HRESULT onBeforeExecuteCommand (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
      virtual HRESULT onAfterExecuteCommand (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
      virtual HRESULT onBeforeAbortCommand (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
      virtual HRESULT onAfterAbortCommand (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
      virtual HRESULT onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
};



#define ENVTIEdeclare_ENOVISessionEvent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT onBeforeCreateLoginSession (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
virtual HRESULT onAfterCreateLoginSession (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
virtual HRESULT onBeforeSaveLoginSession (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
virtual HRESULT onAfterSaveLoginSession (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
virtual HRESULT onBeforeCloseLoginSession (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
virtual HRESULT onAfterCloseLoginSession (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
virtual HRESULT onBeforeAbortLoginSession (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
virtual HRESULT onAfterAbortLoginSession (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
virtual HRESULT onBeforeUndoCommand (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
virtual HRESULT onAfterUndoCommand (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
virtual HRESULT onBeforeStartCommand (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
virtual HRESULT onAfterStartCommand (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
virtual HRESULT onBeforeExecuteCommand (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
virtual HRESULT onAfterExecuteCommand (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
virtual HRESULT onBeforeAbortCommand (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
virtual HRESULT onAfterAbortCommand (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
virtual HRESULT onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \


#define ENVTIEdefine_ENOVISessionEvent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::onBeforeCreateLoginSession (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVISessionEvent,ENVTIETypeLetter,ENVTIELetter)onBeforeCreateLoginSession (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onAfterCreateLoginSession (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVISessionEvent,ENVTIETypeLetter,ENVTIELetter)onAfterCreateLoginSession (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onBeforeSaveLoginSession (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVISessionEvent,ENVTIETypeLetter,ENVTIELetter)onBeforeSaveLoginSession (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onAfterSaveLoginSession (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVISessionEvent,ENVTIETypeLetter,ENVTIELetter)onAfterSaveLoginSession (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onBeforeCloseLoginSession (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVISessionEvent,ENVTIETypeLetter,ENVTIELetter)onBeforeCloseLoginSession (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onAfterCloseLoginSession (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVISessionEvent,ENVTIETypeLetter,ENVTIELetter)onAfterCloseLoginSession (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onBeforeAbortLoginSession (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVISessionEvent,ENVTIETypeLetter,ENVTIELetter)onBeforeAbortLoginSession (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onAfterAbortLoginSession (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVISessionEvent,ENVTIETypeLetter,ENVTIELetter)onAfterAbortLoginSession (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onBeforeUndoCommand (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVISessionEvent,ENVTIETypeLetter,ENVTIELetter)onBeforeUndoCommand (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onAfterUndoCommand (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVISessionEvent,ENVTIETypeLetter,ENVTIELetter)onAfterUndoCommand (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onBeforeStartCommand (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVISessionEvent,ENVTIETypeLetter,ENVTIELetter)onBeforeStartCommand (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onAfterStartCommand (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVISessionEvent,ENVTIETypeLetter,ENVTIELetter)onAfterStartCommand (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onBeforeExecuteCommand (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVISessionEvent,ENVTIETypeLetter,ENVTIELetter)onBeforeExecuteCommand (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onAfterExecuteCommand (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVISessionEvent,ENVTIETypeLetter,ENVTIELetter)onAfterExecuteCommand (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onBeforeAbortCommand (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVISessionEvent,ENVTIETypeLetter,ENVTIELetter)onBeforeAbortCommand (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onAfterAbortCommand (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVISessionEvent,ENVTIETypeLetter,ENVTIELetter)onAfterAbortCommand (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVISessionEvent,ENVTIETypeLetter,ENVTIELetter)onKo (iRaisedEvent,ioNotifyReturnCode)); \
} \


/* Name of the TIE class */
#define class_TIE_ENOVISessionEvent(classe)    TIEENOVISessionEvent##classe


/* Common methods inside a TIE */
#define common_TIE_ENOVISessionEvent(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(ENOVISessionEvent, classe) \
 \
 \
CATImplementTIEMethods(ENOVISessionEvent, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(ENOVISessionEvent, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(ENOVISessionEvent, classe) \
CATImplementCATBaseUnknownMethodsForTIE(ENOVISessionEvent, classe) \
 \
HRESULT  TIEENOVISessionEvent##classe::onBeforeCreateLoginSession (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onBeforeCreateLoginSession (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVISessionEvent##classe::onAfterCreateLoginSession (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onAfterCreateLoginSession (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVISessionEvent##classe::onBeforeSaveLoginSession (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onBeforeSaveLoginSession (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVISessionEvent##classe::onAfterSaveLoginSession (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onAfterSaveLoginSession (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVISessionEvent##classe::onBeforeCloseLoginSession (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onBeforeCloseLoginSession (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVISessionEvent##classe::onAfterCloseLoginSession (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onAfterCloseLoginSession (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVISessionEvent##classe::onBeforeAbortLoginSession (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onBeforeAbortLoginSession (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVISessionEvent##classe::onAfterAbortLoginSession (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onAfterAbortLoginSession (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVISessionEvent##classe::onBeforeUndoCommand (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onBeforeUndoCommand (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVISessionEvent##classe::onAfterUndoCommand (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onAfterUndoCommand (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVISessionEvent##classe::onBeforeStartCommand (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onBeforeStartCommand (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVISessionEvent##classe::onAfterStartCommand (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onAfterStartCommand (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVISessionEvent##classe::onBeforeExecuteCommand (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onBeforeExecuteCommand (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVISessionEvent##classe::onAfterExecuteCommand (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onAfterExecuteCommand (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVISessionEvent##classe::onBeforeAbortCommand (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onBeforeAbortCommand (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVISessionEvent##classe::onAfterAbortCommand (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onAfterAbortCommand (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVISessionEvent##classe::onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onKo (iRaisedEvent,ioNotifyReturnCode)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_ENOVISessionEvent(classe) \
 \
 \
declare_TIE_ENOVISessionEvent(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVISessionEvent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVISessionEvent,"ENOVISessionEvent",ENOVISessionEvent::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVISessionEvent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(ENOVISessionEvent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVISessionEvent##classe(classe::MetaObject(),ENOVISessionEvent::MetaObject(),(void *)CreateTIEENOVISessionEvent##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_ENOVISessionEvent(classe) \
 \
 \
declare_TIE_ENOVISessionEvent(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVISessionEvent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVISessionEvent,"ENOVISessionEvent",ENOVISessionEvent::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVISessionEvent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(ENOVISessionEvent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVISessionEvent##classe(classe::MetaObject(),ENOVISessionEvent::MetaObject(),(void *)CreateTIEENOVISessionEvent##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_ENOVISessionEvent(classe) TIE_ENOVISessionEvent(classe)
#else
#define BOA_ENOVISessionEvent(classe) CATImplementBOA(ENOVISessionEvent, classe)
#endif

#endif
